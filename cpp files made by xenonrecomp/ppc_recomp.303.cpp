#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A05460"))) PPC_WEAK_FUNC(sub_82A05460);
PPC_FUNC_IMPL(__imp__sub_82A05460) {
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
	// lwz r4,652(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a054a8
	if (ctx.cr6.eq) goto loc_82A054A8;
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a054a8
	if (ctx.cr6.eq) goto loc_82A054A8;
	// lwz r10,856(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 856);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a054a8
	if (ctx.cr6.eq) goto loc_82A054A8;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82a054a8
	if (ctx.cr6.eq) goto loc_82A054A8;
	// bl 0x825d4b78
	ctx.lr = 0x82A054A8;
	sub_825D4B78(ctx, base);
loc_82A054A8:
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a054e4
	if (ctx.cr6.eq) goto loc_82A054E4;
	// lwz r10,856(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a054e4
	if (!ctx.cr6.eq) goto loc_82A054E4;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a054e4
	if (!ctx.cr6.eq) goto loc_82A054E4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82401f60
	ctx.lr = 0x82A054E4;
	sub_82401F60(ctx, base);
loc_82A054E4:
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

__attribute__((alias("__imp__sub_82A054F8"))) PPC_WEAK_FUNC(sub_82A054F8);
PPC_FUNC_IMPL(__imp__sub_82A054F8) {
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
	// lwz r4,652(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a05530
	if (ctx.cr6.eq) goto loc_82A05530;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a05530
	if (!ctx.cr6.eq) goto loc_82A05530;
	// bl 0x825d4918
	ctx.lr = 0x82A05530;
	sub_825D4918(ctx, base);
loc_82A05530:
	// lwz r31,688(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a05578
	if (ctx.cr6.eq) goto loc_82A05578;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a05578
	if (!ctx.cr6.eq) goto loc_82A05578;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82519840
	ctx.lr = 0x82A05560;
	sub_82519840(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a05578
	if (ctx.cr6.eq) goto loc_82A05578;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246b6c0
	ctx.lr = 0x82A05578;
	sub_8246B6C0(ctx, base);
loc_82A05578:
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

__attribute__((alias("__imp__sub_82A05590"))) PPC_WEAK_FUNC(sub_82A05590);
PPC_FUNC_IMPL(__imp__sub_82A05590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x82A05598;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82cb6ab4
	ctx.lr = 0x82A055A0;
	__savefpr_15(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a05b6c
	if (!ctx.cr6.gt) goto loc_82A05B6C;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// li r19,255
	ctx.r19.s64 = 255;
	// lfs f30,-32444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f30.f64 = double(temp.f32);
	// lis r23,-31885
	ctx.r23.s64 = -2089615360;
	// lfs f31,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// addi r24,r11,-22168
	ctx.r24.s64 = ctx.r11.s64 + -22168;
loc_82A055E4:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwzx r3,r21,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// bl 0x82694858
	ctx.lr = 0x82A055F0;
	sub_82694858(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a05b58
	if (ctx.cr6.eq) goto loc_82A05B58;
	// lwz r10,696(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 696);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82a0563c
	if (!ctx.cr6.gt) goto loc_82A0563C;
	// lwz r11,692(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 692);
loc_82A05614:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82a05624
	if (!ctx.cr6.eq) goto loc_82A05624;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82A05624:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a05614
	if (ctx.cr6.lt) goto loc_82A05614;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a056fc
	if (!ctx.cr6.eq) goto loc_82A056FC;
loc_82A0563C:
	// lwz r28,696(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 696);
	// addi r31,r29,692
	ctx.r31.s64 = ctx.r29.s64 + 692;
	// lwz r10,700(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 700);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82a056c0
	if (!ctx.cr6.gt) goto loc_82A056C0;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// lwz r25,0(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82a05680
	if (!ctx.cr6.eq) goto loc_82A05680;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a056c0
	if (ctx.cr6.eq) goto loc_82A056C0;
loc_82A05680:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r26,r11,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bne cr6,0x82a056a0
	if (!ctx.cr6.eq) goto loc_82A056A0;
	// bl 0x822900a0
	ctx.lr = 0x82A0569C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_82A056A0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A056BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82A056C0:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,40
	ctx.r5.s64 = 40;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e640b8
	ctx.lr = 0x82A056E0;
	sub_82E640B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r31,r11,-40
	ctx.r31.s64 = ctx.r11.s64 + -40;
loc_82A056FC:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lfs f0,340(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,260(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// lfs f13,348(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// lfs f10,352(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r11,16384
	ctx.r8.s64 = ctx.r11.s64 + 16384;
	// lwz r11,256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// addi r7,r10,16384
	ctx.r7.s64 = ctx.r10.s64 + 16384;
	// lfs f11,344(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	ctx.f11.f64 = double(temp.f32);
	// srawi r6,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 2;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r5,r11,16384
	ctx.r5.s64 = ctx.r11.s64 + 16384;
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// srawi r4,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 2;
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// srawi r3,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 2;
	// lfs f7,356(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 356);
	ctx.f7.f64 = double(temp.f32);
	// srawi r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// lfs f6,364(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	ctx.f6.f64 = double(temp.f32);
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// lfs f4,244(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r8,r4,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFC;
	// lfs f5,360(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r7,r3,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFC;
	// lfs f3,248(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r9,r9,2,16,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// rlwinm r5,r10,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// rlwinm r4,r6,2,16,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfsx f1,r8,r24
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r24.u32);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r3,r11,2,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lfsx f13,r7,r24
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f7,f9
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// lfsx f2,r9,r24
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f29,f13,f1
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfsx f10,r5,r24
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r24.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f1,f2
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fmuls f28,f13,f10
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfsx f27,r4,r24
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r24.u32);
	ctx.f27.f64 = double(temp.f32);
	// lfsx f26,r3,r24
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r24.u32);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f25,f10,f2
	ctx.f25.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f24,f1,f27
	ctx.f24.f64 = double(float(ctx.f1.f64 * ctx.f27.f64));
	// addi r28,r29,256
	ctx.r28.s64 = ctx.r29.s64 + 256;
	// fmuls f19,f9,f27
	ctx.f19.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// stfs f19,152(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f22,f12,f26
	ctx.f22.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// fmuls f21,f26,f10
	ctx.f21.f64 = double(float(ctx.f26.f64 * ctx.f10.f64));
	// fmuls f23,f2,f27
	ctx.f23.f64 = double(float(ctx.f2.f64 * ctx.f27.f64));
	// fmuls f20,f9,f26
	ctx.f20.f64 = double(float(ctx.f9.f64 * ctx.f26.f64));
	// fmuls f26,f26,f13
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// fmuls f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmadds f19,f28,f27,f11
	ctx.f19.f64 = double(float(ctx.f28.f64 * ctx.f27.f64 + ctx.f11.f64));
	// fmadds f18,f11,f27,f28
	ctx.f18.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 + ctx.f28.f64));
	// fnmsubs f17,f24,f13,f25
	ctx.f17.f64 = double(float(-(ctx.f24.f64 * ctx.f13.f64 - ctx.f25.f64)));
	// fmuls f15,f22,f2
	ctx.f15.f64 = double(float(ctx.f22.f64 * ctx.f2.f64));
	// fmuls f9,f21,f9
	ctx.f9.f64 = double(float(ctx.f21.f64 * ctx.f9.f64));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fnmsubs f4,f0,f21,f4
	ctx.f4.f64 = double(float(-(ctx.f0.f64 * ctx.f21.f64 - ctx.f4.f64)));
	// fmsubs f16,f23,f10,f29
	ctx.f16.f64 = double(float(ctx.f23.f64 * ctx.f10.f64 - ctx.f29.f64));
	// fmuls f9,f20,f1
	ctx.f9.f64 = double(float(ctx.f20.f64 * ctx.f1.f64));
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f9,f26,f8
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f8.f64));
	// stfs f9,184(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmuls f21,f19,f8
	ctx.f21.f64 = double(float(ctx.f19.f64 * ctx.f8.f64));
	// fmuls f19,f18,f12
	ctx.f19.f64 = double(float(ctx.f18.f64 * ctx.f12.f64));
	// stfs f19,164(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f8,f17,f8
	ctx.f8.f64 = double(float(ctx.f17.f64 * ctx.f8.f64));
	// stfs f8,180(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f9,f5,f12
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fneg f8,f15
	ctx.f8.u64 = ctx.f15.u64 ^ 0x8000000000000000;
	// stfs f8,168(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f7,f7,f20
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f20.f64));
	// fmuls f12,f16,f12
	ctx.f12.f64 = double(float(ctx.f16.f64 * ctx.f12.f64));
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f12,f25,f6
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f6.f64));
	// fneg f8,f21
	ctx.f8.u64 = ctx.f21.u64 ^ 0x8000000000000000;
	// stfs f8,176(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f8,f6,f28
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f28.f64));
	// fmadds f7,f7,f1,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f12.f64));
	// lfs f25,252(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f1,f23,f9
	ctx.f1.f64 = double(float(ctx.f23.f64 * ctx.f9.f64));
	// stfs f30,204(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmadds f4,f8,f27,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f27.f64 + ctx.f4.f64));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmuls f12,f6,f24
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f24.f64));
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f24,f9,f11
	ctx.f24.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f5,f5,f22
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f22.f64));
	// fmadds f8,f9,f28,f7
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f7.f64));
	// fnmsubs f4,f1,f10,f4
	ctx.f4.f64 = double(float(-(ctx.f1.f64 * ctx.f10.f64 - ctx.f4.f64)));
	// fmadds f7,f6,f26,f0
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f26.f64 + ctx.f0.f64));
	// fnmsubs f1,f12,f13,f8
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f8.f64)));
	// fmadds f13,f29,f9,f4
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fnmsubs f0,f5,f2,f7
	ctx.f0.f64 = double(float(-(ctx.f5.f64 * ctx.f2.f64 - ctx.f7.f64)));
	// fmadds f12,f24,f27,f1
	ctx.f12.f64 = double(float(ctx.f24.f64 * ctx.f27.f64 + ctx.f1.f64));
	// fmadds f9,f6,f11,f13
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f9,192(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fsubs f10,f25,f0
	ctx.f10.f64 = double(float(ctx.f25.f64 - ctx.f0.f64));
	// stfs f10,200(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fsubs f8,f3,f12
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// stfs f8,196(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bl 0x823829d8
	ctx.lr = 0x82A058A4;
	sub_823829D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f7,252(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lfs f6,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f6.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f5,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f4,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f7
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// lfs f1,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f3,f6
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fmuls f13,f1,f6
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f12,f6,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f2.f64));
	// lfs f6,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f2,f11,f5,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f0.f64));
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// fmadds f0,f10,f5,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f13.f64));
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// fmadds f13,f9,f5,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 + ctx.f12.f64));
	// fmadds f12,f8,f7,f2
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f11,f4,f7,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fadds f10,f13,f3
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f8,f11,f6
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x8229bcd0
	ctx.lr = 0x82A05940;
	sub_8229BCD0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bbe90
	ctx.lr = 0x82A0594C;
	sub_822BBE90(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a059a8
	if (ctx.cr6.eq) goto loc_82A059A8;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a059e4
	if (ctx.cr6.eq) goto loc_82A059E4;
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a05984
	if (!ctx.cr6.eq) goto loc_82A05984;
	// bl 0x822900a0
	ctx.lr = 0x82A05980;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_82A05984:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A059A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// b 0x82a059ac
	goto loc_82A059AC;
loc_82A059A8:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82A059AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a059e4
	if (ctx.cr6.eq) goto loc_82A059E4;
	// lwz r11,28888(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a059cc
	if (!ctx.cr6.eq) goto loc_82A059CC;
	// bl 0x822900a0
	ctx.lr = 0x82A059C8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_82A059CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A059E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A059E4:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lwz r7,260(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r8,264(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,256(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// subf r11,r6,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r6.s64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r8,756(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 756);
	// ori r11,r8,512
	ctx.r11.u64 = ctx.r8.u64 | 512;
	// ori r6,r7,8
	ctx.r6.u64 = ctx.r7.u64 | 8;
	// stw r11,756(r30)
	PPC_STORE_U32(ctx.r30.u32 + 756, ctx.r11.u32);
	// stw r6,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r6.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// bl 0x8229bcd0
	ctx.lr = 0x82A05A6C;
	sub_8229BCD0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,920
	ctx.r3.s64 = ctx.r30.s64 + 920;
	// bl 0x822bbe90
	ctx.lr = 0x82A05A78;
	sub_822BBE90(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a05ad4
	if (ctx.cr6.eq) goto loc_82A05AD4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a05b10
	if (ctx.cr6.eq) goto loc_82A05B10;
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a05ab0
	if (!ctx.cr6.eq) goto loc_82A05AB0;
	// bl 0x822900a0
	ctx.lr = 0x82A05AAC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_82A05AB0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A05ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// b 0x82a05ad8
	goto loc_82A05AD8;
loc_82A05AD4:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82A05AD8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a05b10
	if (ctx.cr6.eq) goto loc_82A05B10;
	// lwz r11,28888(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a05af8
	if (!ctx.cr6.eq) goto loc_82A05AF8;
	// bl 0x822900a0
	ctx.lr = 0x82A05AF4;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28888);
loc_82A05AF8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A05B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A05B10:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stb r19,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r19.u8);
	// stb r19,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r19.u8);
	// stb r27,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r27.u8);
	// stb r27,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r27.u8);
	// lwz r11,492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,916(r30)
	PPC_STORE_U32(ctx.r30.u32 + 916, ctx.r29.u32);
	// stw r22,932(r30)
	PPC_STORE_U32(ctx.r30.u32 + 932, ctx.r22.u32);
	// stw r10,716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 716, ctx.r10.u32);
	// bl 0x822aa9e8
	ctx.lr = 0x82A05B4C;
	sub_822AA9E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa9e8
	ctx.lr = 0x82A05B58;
	sub_822AA9E8(ctx, base);
loc_82A05B58:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a055e4
	if (ctx.cr6.lt) goto loc_82A055E4;
loc_82A05B6C:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82cb6b00
	ctx.lr = 0x82A05B78;
	__restfpr_15(ctx, base);
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A05B7C"))) PPC_WEAK_FUNC(sub_82A05B7C);
PPC_FUNC_IMPL(__imp__sub_82A05B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A05B80"))) PPC_WEAK_FUNC(sub_82A05B80);
PPC_FUNC_IMPL(__imp__sub_82A05B80) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82694858
	sub_82694858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A05B88"))) PPC_WEAK_FUNC(sub_82A05B88);
PPC_FUNC_IMPL(__imp__sub_82A05B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82A05B90;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6ab0
	ctx.lr = 0x82A05B98;
	__savefpr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// addic. r26,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r26.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x82a05e74
	if (ctx.cr0.lt) goto loc_82A05E74;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r31,692
	ctx.r27.s64 = ctx.r31.s64 + 692;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// addi r29,r11,-22168
	ctx.r29.s64 = ctx.r11.s64 + -22168;
loc_82A05BC4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a05e4c
	if (ctx.cr6.eq) goto loc_82A05E4C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r8,r31,256
	ctx.r8.s64 = ctx.r31.s64 + 256;
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// lfs f0,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lfs f13,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lfs f12,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f9,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f9.f64 = double(temp.f32);
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addi r6,r11,16384
	ctx.r6.s64 = ctx.r11.s64 + 16384;
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// addi r4,r10,16384
	ctx.r4.s64 = ctx.r10.s64 + 16384;
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// lfs f3,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r9,16384
	ctx.r11.s64 = ctx.r9.s64 + 16384;
	// lfs f8,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f8.f64 = double(temp.f32);
	// srawi r10,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 2;
	// lfs f10,356(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f10.f64 = double(temp.f32);
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// lfs f4,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f4.f64 = double(temp.f32);
	// srawi r6,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 2;
	// lfs f7,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r4,r3,2,16,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r3,r10,2,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// rlwinm r10,r9,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// fmuls f12,f11,f6
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// rlwinm r9,r6,2,16,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// rlwinm r7,r7,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// lfsx f2,r4,r29
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r6,r5,2,16,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFC;
	// lfsx f1,r3,r29
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	ctx.f1.f64 = double(temp.f32);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lfsx f11,r9,r29
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f31,f8,f5
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// lfsx f0,r7,r29
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f10,f6
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfsx f30,r6,r29
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	ctx.f30.f64 = double(temp.f32);
	// lfsx f13,r10,r29
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f19,f1,f2
	ctx.f19.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// lfs f23,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f23.f64 = double(temp.f32);
	// stfs f23,80(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f26,f11,f1
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f22,f2,f0
	ctx.f22.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f28,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f27,f6,f30
	ctx.f27.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// stfs f27,92(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f21,f6,f13
	ctx.f21.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f25,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f24,f30,f0
	ctx.f24.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f20,f11,f0
	ctx.f20.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f17,f11,f13
	ctx.f17.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f18,f5,f13
	ctx.f18.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f16,f2,f30
	ctx.f16.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f15,f12,f26
	ctx.f15.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// fmadds f27,f22,f30,f26
	ctx.f27.f64 = double(float(ctx.f22.f64 * ctx.f30.f64 + ctx.f26.f64));
	// fmadds f3,f26,f30,f22
	ctx.f3.f64 = double(float(ctx.f26.f64 * ctx.f30.f64 + ctx.f22.f64));
	// fmuls f10,f10,f21
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f21.f64));
	// fmuls f14,f24,f31
	ctx.f14.f64 = double(float(ctx.f24.f64 * ctx.f31.f64));
	// fmuls f23,f20,f12
	ctx.f23.f64 = double(float(ctx.f20.f64 * ctx.f12.f64));
	// fmsubs f24,f24,f11,f19
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f11.f64 - ctx.f19.f64));
	// fmuls f4,f18,f0
	ctx.f4.f64 = double(float(ctx.f18.f64 * ctx.f0.f64));
	// fmuls f6,f17,f6
	ctx.f6.f64 = double(float(ctx.f17.f64 * ctx.f6.f64));
	// fmuls f21,f21,f2
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f2.f64));
	// fnmsubs f7,f29,f17,f7
	ctx.f7.f64 = double(float(-(ctx.f29.f64 * ctx.f17.f64 - ctx.f7.f64)));
	// fnmsubs f20,f16,f1,f20
	ctx.f20.f64 = double(float(-(ctx.f16.f64 * ctx.f1.f64 - ctx.f20.f64)));
	// fmuls f27,f27,f5
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f5.f64));
	// fmuls f3,f3,f9
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// fmadds f2,f10,f2,f23
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f23.f64));
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// fmadds f10,f15,f30,f7
	ctx.f10.f64 = double(float(ctx.f15.f64 * ctx.f30.f64 + ctx.f7.f64));
	// li r5,1
	ctx.r5.s64 = 1;
	// fmuls f5,f24,f5
	ctx.f5.f64 = double(float(ctx.f24.f64 * ctx.f5.f64));
	// li r4,0
	ctx.r4.s64 = 0;
	// fmuls f7,f12,f16
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f16.f64));
	// fmuls f29,f29,f30
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// fneg f4,f4
	ctx.f4.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fneg f3,f3
	ctx.f3.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fmuls f24,f20,f9
	ctx.f24.f64 = double(float(ctx.f20.f64 * ctx.f9.f64));
	// fmuls f27,f28,f27
	ctx.f27.f64 = double(float(ctx.f28.f64 * ctx.f27.f64));
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmadds f2,f31,f26,f2
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f26.f64 + ctx.f2.f64));
	// fnmsubs f11,f14,f11,f10
	ctx.f11.f64 = double(float(-(ctx.f14.f64 * ctx.f11.f64 - ctx.f10.f64)));
	// fmuls f5,f28,f5
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f5.f64));
	// fmuls f10,f8,f18
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f18.f64));
	// fmuls f26,f31,f22
	ctx.f26.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fmuls f4,f28,f4
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f4.f64));
	// fnmsubs f8,f7,f1,f2
	ctx.f8.f64 = double(float(-(ctx.f7.f64 * ctx.f1.f64 - ctx.f2.f64)));
	// fmadds f7,f12,f13,f29
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f29.f64));
	// fmadds f3,f25,f3,f5
	ctx.f3.f64 = double(float(ctx.f25.f64 * ctx.f3.f64 + ctx.f5.f64));
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f1,f19,f31,f11
	ctx.f1.f64 = double(float(ctx.f19.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fmadds f2,f25,f24,f27
	ctx.f2.f64 = double(float(ctx.f25.f64 * ctx.f24.f64 + ctx.f27.f64));
	// fmadds f13,f26,f30,f8
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f30.f64 + ctx.f8.f64));
	// fnmsubs f11,f10,f0,f7
	ctx.f11.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f7.f64)));
	// fmadds f10,f25,f9,f4
	ctx.f10.f64 = double(float(ctx.f25.f64 * ctx.f9.f64 + ctx.f4.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f6,f3
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f3.f64));
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f6,f12,f22,f1
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f22.f64 + ctx.f1.f64));
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f7,f21,f9,f2
	ctx.f7.f64 = double(float(ctx.f21.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fsubs f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fsubs f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// fmadds f0,f1,f9,f10
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fadds f13,f8,f6
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r3,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r3.u32);
	// fadds f12,f7,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f11,f0,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r10,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r10.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r9,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r9.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r25,r7,256
	ctx.r25.s64 = ctx.r7.s64 + 256;
	// lwz r8,260(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// lwz r6,264(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r9,r3,r6
	ctx.r9.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
	// stw r9,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r9.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,956(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 956);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A05E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r6,104(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// ori r5,r6,8
	ctx.r5.u64 = ctx.r6.u64 | 8;
	// stw r5,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r5.u32);
	// b 0x82a05e68
	goto loc_82A05E68;
loc_82A05E4C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a0c8e8
	ctx.lr = 0x82A05E5C;
	sub_82A0C8E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa9e8
	ctx.lr = 0x82A05E68;
	sub_822AA9E8(ctx, base);
loc_82A05E68:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,-40
	ctx.r28.s64 = ctx.r28.s64 + -40;
	// bge 0x82a05bc4
	if (!ctx.cr0.lt) goto loc_82A05BC4;
loc_82A05E74:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82cb6afc
	ctx.lr = 0x82A05E80;
	__restfpr_14(ctx, base);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A05E84"))) PPC_WEAK_FUNC(sub_82A05E84);
PPC_FUNC_IMPL(__imp__sub_82A05E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A05E88"))) PPC_WEAK_FUNC(sub_82A05E88);
PPC_FUNC_IMPL(__imp__sub_82A05E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82A05E90;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,696(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 696);
	// addic. r27,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r27.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82a05fcc
	if (ctx.cr0.lt) goto loc_82A05FCC;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r3,692
	ctx.r25.s64 = ctx.r3.s64 + 692;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r26,r11,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// lis r24,-31884
	ctx.r24.s64 = -2089549824;
loc_82A05EBC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r30,r26,r11
	ctx.r30.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a05fa4
	if (ctx.cr6.eq) goto loc_82A05FA4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8229bcd0
	ctx.lr = 0x82A05EEC;
	sub_8229BCD0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bbe90
	ctx.lr = 0x82A05EF8;
	sub_822BBE90(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a05f54
	if (ctx.cr6.eq) goto loc_82A05F54;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a05f90
	if (ctx.cr6.eq) goto loc_82A05F90;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a05f30
	if (!ctx.cr6.eq) goto loc_82A05F30;
	// bl 0x822900a0
	ctx.lr = 0x82A05F2C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_82A05F30:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A05F4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82a05f58
	goto loc_82A05F58;
loc_82A05F54:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82A05F58:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a05f90
	if (ctx.cr6.eq) goto loc_82A05F90;
	// lwz r11,28888(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a05f78
	if (!ctx.cr6.eq) goto loc_82A05F78;
	// bl 0x822900a0
	ctx.lr = 0x82A05F74;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_82A05F78:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A05F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A05F90:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// b 0x82a05fc0
	goto loc_82A05FC0;
loc_82A05FA4:
	// lwz r11,24964(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24964);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a05fc0
	if (!ctx.cr6.eq) goto loc_82A05FC0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a0c8e8
	ctx.lr = 0x82A05FC0;
	sub_82A0C8E8(ctx, base);
loc_82A05FC0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r26,r26,-40
	ctx.r26.s64 = ctx.r26.s64 + -40;
	// bge 0x82a05ebc
	if (!ctx.cr0.lt) goto loc_82A05EBC;
loc_82A05FCC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A05FD4"))) PPC_WEAK_FUNC(sub_82A05FD4);
PPC_FUNC_IMPL(__imp__sub_82A05FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A05FD8"))) PPC_WEAK_FUNC(sub_82A05FD8);
PPC_FUNC_IMPL(__imp__sub_82A05FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82A05FE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,696(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 696);
	// addic. r26,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r26.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x82a060c4
	if (ctx.cr0.lt) goto loc_82A060C4;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r28,r3,692
	ctx.r28.s64 = ctx.r3.s64 + 692;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r27,-31883
	ctx.r27.s64 = -2089484288;
	// lis r23,-31884
	ctx.r23.s64 = -2089549824;
	// addi r25,r10,11336
	ctx.r25.s64 = ctx.r10.s64 + 11336;
	// addi r24,r11,11272
	ctx.r24.s64 = ctx.r11.s64 + 11272;
loc_82A06018:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a06088
	if (ctx.cr6.eq) goto loc_82A06088;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a06088
	if (ctx.cr6.eq) goto loc_82A06088;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0604c
	if (ctx.cr6.eq) goto loc_82A0604C;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82a06050
	goto loc_82A06050;
loc_82A0604C:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82A06050:
	// lwz r3,-25652(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -25652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a06070
	if (!ctx.cr6.eq) goto loc_82A06070;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x829dd7f0
	ctx.lr = 0x82A06064;
	sub_829DD7F0(ctx, base);
	// stw r3,-25652(r27)
	PPC_STORE_U32(ctx.r27.u32 + -25652, ctx.r3.u32);
	// bl 0x829dd8a0
	ctx.lr = 0x82A0606C;
	sub_829DD8A0(ctx, base);
	// lwz r3,-25652(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -25652);
loc_82A06070:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a0678
	ctx.lr = 0x82A06080;
	sub_822A0678(ctx, base);
	// bl 0x82694858
	ctx.lr = 0x82A06084;
	sub_82694858(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_82A06088:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a060b8
	if (!ctx.cr6.eq) goto loc_82A060B8;
	// lwz r11,24964(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24964);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a060b8
	if (!ctx.cr6.eq) goto loc_82A060B8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a0c8e8
	ctx.lr = 0x82A060B8;
	sub_82A0C8E8(ctx, base);
loc_82A060B8:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,-40
	ctx.r29.s64 = ctx.r29.s64 + -40;
	// bge 0x82a06018
	if (!ctx.cr0.lt) goto loc_82A06018;
loc_82A060C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A060CC"))) PPC_WEAK_FUNC(sub_82A060CC);
PPC_FUNC_IMPL(__imp__sub_82A060CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A060D0"))) PPC_WEAK_FUNC(sub_82A060D0);
PPC_FUNC_IMPL(__imp__sub_82A060D0) {
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
	// rlwinm r10,r6,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x200000;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a061a0
	if (!ctx.cr6.eq) goto loc_82A061A0;
	// lbz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 100);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a06114
	if (ctx.cr6.eq) goto loc_82A06114;
	// rlwinm r9,r6,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a061a0
	if (!ctx.cr6.eq) goto loc_82A061A0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0618c
	if (!ctx.cr6.eq) goto loc_82A0618C;
loc_82A06114:
	// rlwinm r10,r6,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0618c
	if (ctx.cr6.eq) goto loc_82A0618C;
	// rlwinm r10,r6,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a06158
	if (ctx.cr6.eq) goto loc_82A06158;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a061a0
	if (!ctx.cr6.eq) goto loc_82A061A0;
	// rlwinm r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0618c
	if (ctx.cr6.eq) goto loc_82A0618C;
	// lwz r11,480(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 480);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// b 0x82a06188
	goto loc_82A06188;
loc_82A06158:
	// rlwinm r10,r6,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a061a0
	if (ctx.cr6.eq) goto loc_82A061A0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0618c
	if (ctx.cr6.eq) goto loc_82A0618C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,520(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 520);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A06184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
loc_82A06188:
	// bne cr6,0x82a061a0
	if (!ctx.cr6.eq) goto loc_82A061A0;
loc_82A0618C:
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
loc_82A061A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A061B4"))) PPC_WEAK_FUNC(sub_82A061B4);
PPC_FUNC_IMPL(__imp__sub_82A061B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A061B8"))) PPC_WEAK_FUNC(sub_82A061B8);
PPC_FUNC_IMPL(__imp__sub_82A061B8) {
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
	// bl 0x8260ce38
	ctx.lr = 0x82A061D0;
	sub_8260CE38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a05b88
	ctx.lr = 0x82A061D8;
	sub_82A05B88(ctx, base);
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

__attribute__((alias("__imp__sub_82A061EC"))) PPC_WEAK_FUNC(sub_82A061EC);
PPC_FUNC_IMPL(__imp__sub_82A061EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A061F0"))) PPC_WEAK_FUNC(sub_82A061F0);
PPC_FUNC_IMPL(__imp__sub_82A061F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A061F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8260d3f0
	ctx.lr = 0x82A06204;
	sub_8260D3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a05b88
	ctx.lr = 0x82A0620C;
	sub_82A05B88(ctx, base);
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a06250
	if (!ctx.cr6.gt) goto loc_82A06250;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A06220:
	// lwz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0623c
	if (ctx.cr6.eq) goto loc_82A0623C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822aa9e8
	ctx.lr = 0x82A0623C;
	sub_822AA9E8(ctx, base);
loc_82A0623C:
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a06220
	if (ctx.cr6.lt) goto loc_82A06220;
loc_82A06250:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A06258"))) PPC_WEAK_FUNC(sub_82A06258);
PPC_FUNC_IMPL(__imp__sub_82A06258) {
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
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,25204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25204);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a06288
	if (ctx.cr6.eq) goto loc_82A06288;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A06288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A06288:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827734a8
	ctx.lr = 0x82A06290;
	sub_827734A8(ctx, base);
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

__attribute__((alias("__imp__sub_82A062A4"))) PPC_WEAK_FUNC(sub_82A062A4);
PPC_FUNC_IMPL(__imp__sub_82A062A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A062A8"))) PPC_WEAK_FUNC(sub_82A062A8);
PPC_FUNC_IMPL(__imp__sub_82A062A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A062B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a062cc
	if (ctx.cr6.eq) goto loc_82A062CC;
	// bl 0x82a05e88
	ctx.lr = 0x82A062CC;
	sub_82A05E88(ctx, base);
loc_82A062CC:
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a063e8
	if (ctx.cr6.eq) goto loc_82A063E8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a06304
	if (ctx.cr6.eq) goto loc_82A06304;
loc_82A062E8:
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82a063e8
	if (!ctx.cr6.eq) goto loc_82A063E8;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a062e8
	if (!ctx.cr6.eq) goto loc_82A062E8;
loc_82A06304:
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a063e8
	if (ctx.cr6.eq) goto loc_82A063E8;
	// lwz r10,652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a063ac
	if (ctx.cr6.eq) goto loc_82A063AC;
	// addi r4,r10,920
	ctx.r4.s64 = ctx.r10.s64 + 920;
	// addi r3,r11,920
	ctx.r3.s64 = ctx.r11.s64 + 920;
	// bl 0x82a0cb20
	ctx.lr = 0x82A06328;
	sub_82A0CB20(ctx, base);
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r10,688(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// addi r4,r11,932
	ctx.r4.s64 = ctx.r11.s64 + 932;
	// addi r3,r10,932
	ctx.r3.s64 = ctx.r10.s64 + 932;
	// bl 0x82a0cc00
	ctx.lr = 0x82A0633C;
	sub_82A0CC00(ctx, base);
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r10,688(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// addi r4,r11,944
	ctx.r4.s64 = ctx.r11.s64 + 944;
	// addi r3,r10,944
	ctx.r3.s64 = ctx.r10.s64 + 944;
	// bl 0x822c2500
	ctx.lr = 0x82A06350;
	sub_822C2500(ctx, base);
	// lwz r10,652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// addi r4,r10,956
	ctx.r4.s64 = ctx.r10.s64 + 956;
	// addi r3,r11,956
	ctx.r3.s64 = ctx.r11.s64 + 956;
	// bl 0x82a0cce8
	ctx.lr = 0x82A06364;
	sub_82A0CCE8(ctx, base);
	// lwz r10,652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// lwz r9,968(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 968);
	// stw r9,968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 968, ctx.r9.u32);
	// lwz r8,972(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 972);
	// stw r8,972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 972, ctx.r8.u32);
	// lwz r7,652(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r6,688(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// lwz r5,976(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 976);
	// stw r5,976(r6)
	PPC_STORE_U32(ctx.r6.u32 + 976, ctx.r5.u32);
	// lwz r4,652(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r3,688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// lwz r11,980(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 980);
	// stw r11,980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 980, ctx.r11.u32);
	// lwz r10,652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r9,688(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// lwz r8,984(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	// stw r8,984(r9)
	PPC_STORE_U32(ctx.r9.u32 + 984, ctx.r8.u32);
loc_82A063AC:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8246b6c0
	ctx.lr = 0x82A063C4;
	sub_8246B6C0(ctx, base);
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8246b6c0
	ctx.lr = 0x82A063D8;
	sub_8246B6C0(ctx, base);
	// lwz r10,688(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// stw r10,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r10.u32);
	// stw r10,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r10.u32);
	// stw r10,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r10.u32);
loc_82A063E8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82773978
	ctx.lr = 0x82A063F4;
	sub_82773978(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0642c
	if (ctx.cr6.eq) goto loc_82A0642C;
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r30,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r30.u32);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// bl 0x82401f60
	ctx.lr = 0x82A06418;
	sub_82401F60(ctx, base);
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82401f60
	ctx.lr = 0x82A0642C;
	sub_82401F60(ctx, base);
loc_82A0642C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06440
	if (ctx.cr6.eq) goto loc_82A06440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a05fd8
	ctx.lr = 0x82A06440;
	sub_82A05FD8(ctx, base);
loc_82A06440:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06480
	if (ctx.cr6.eq) goto loc_82A06480;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06464
	if (ctx.cr6.eq) goto loc_82A06464;
	// lwz r10,720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 720);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 720, ctx.r9.u32);
loc_82A06464:
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06480
	if (ctx.cr6.eq) goto loc_82A06480;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r10,720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 720);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 720, ctx.r9.u32);
loc_82A06480:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a06498
	if (!ctx.cr6.eq) goto loc_82A06498;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a064f8
	if (ctx.cr6.eq) goto loc_82A064F8;
loc_82A06498:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a064c8
	if (ctx.cr6.eq) goto loc_82A064C8;
	// lwz r10,744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// stw r10,752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 752, ctx.r10.u32);
	// lwz r9,748(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// stw r9,756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 756, ctx.r9.u32);
	// lwz r8,652(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r7,744(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 744);
	// stw r7,760(r8)
	PPC_STORE_U32(ctx.r8.u32 + 760, ctx.r7.u32);
	// lwz r6,748(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 748);
	// stw r6,764(r8)
	PPC_STORE_U32(ctx.r8.u32 + 764, ctx.r6.u32);
loc_82A064C8:
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a064f8
	if (ctx.cr6.eq) goto loc_82A064F8;
	// lwz r10,744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// stw r10,752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 752, ctx.r10.u32);
	// lwz r9,748(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// stw r9,756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 756, ctx.r9.u32);
	// lwz r8,688(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// lwz r7,744(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 744);
	// stw r7,760(r8)
	PPC_STORE_U32(ctx.r8.u32 + 760, ctx.r7.u32);
	// lwz r6,748(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 748);
	// stw r6,764(r8)
	PPC_STORE_U32(ctx.r8.u32 + 764, ctx.r6.u32);
loc_82A064F8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06538
	if (ctx.cr6.eq) goto loc_82A06538;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06538
	if (ctx.cr6.eq) goto loc_82A06538;
	// lwz r11,712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06538
	if (ctx.cr6.eq) goto loc_82A06538;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a06538
	if (ctx.cr6.eq) goto loc_82A06538;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// bl 0x823fcf60
	ctx.lr = 0x82A06538;
	sub_823FCF60(ctx, base);
loc_82A06538:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A06540"))) PPC_WEAK_FUNC(sub_82A06540);
PPC_FUNC_IMPL(__imp__sub_82A06540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82A06548;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82a05b88
	ctx.lr = 0x82A06558;
	sub_82A05B88(ctx, base);
	// lwz r4,652(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 652);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a0656c
	if (ctx.cr6.eq) goto loc_82A0656C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825d4918
	ctx.lr = 0x82A0656C;
	sub_825D4918(ctx, base);
loc_82A0656C:
	// lwz r4,688(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 688);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a065a0
	if (ctx.cr6.eq) goto loc_82A065A0;
	// lwz r11,652(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 652);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a065a0
	if (ctx.cr6.eq) goto loc_82A065A0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825d4b78
	ctx.lr = 0x82A0658C;
	sub_825D4B78(ctx, base);
	// lwz r3,688(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 688);
	// bl 0x8265b370
	ctx.lr = 0x82A06594;
	sub_8265B370(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,688(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 688);
	// bl 0x825d4918
	ctx.lr = 0x82A065A0;
	sub_825D4918(ctx, base);
loc_82A065A0:
	// lis r23,-31883
	ctx.r23.s64 = -2089484288;
	// lwz r10,64(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 64);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r31,0
	ctx.r31.s64 = 0;
	// addic. r29,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r29.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r22,r11,14488
	ctx.r22.s64 = ctx.r11.s64 + 14488;
	// lwz r3,-28216(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28216);
	// blt 0x82a0668c
	if (ctx.cr0.lt) goto loc_82A0668C;
	// addi r27,r24,60
	ctx.r27.s64 = ctx.r24.s64 + 60;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A065C8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwzx r30,r28,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bne cr6,0x82a065ec
	if (!ctx.cr6.eq) goto loc_82A065EC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8264ce90
	ctx.lr = 0x82A065E0;
	sub_8264CE90(ctx, base);
	// stw r3,-28216(r23)
	PPC_STORE_U32(ctx.r23.u32 + -28216, ctx.r3.u32);
	// bl 0x8264cf50
	ctx.lr = 0x82A065E8;
	sub_8264CF50(ctx, base);
	// lwz r3,-28216(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28216);
loc_82A065EC:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0660c
	if (ctx.cr6.eq) goto loc_82A0660C;
loc_82A065F8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a0661c
	if (ctx.cr6.eq) goto loc_82A0661C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a065f8
	if (!ctx.cr6.eq) goto loc_82A065F8;
loc_82A0660C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a06680
	if (ctx.cr6.eq) goto loc_82A06680;
loc_82A0661C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8246b6c0
	ctx.lr = 0x82A0662C;
	sub_8246B6C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82a0663c
	if (!ctx.cr6.gt) goto loc_82A0663C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8265b370
	ctx.lr = 0x82A0663C;
	sub_8265B370(ctx, base);
loc_82A0663C:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a06660
	if (ctx.cr6.eq) goto loc_82A06660;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A06660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A06660:
	// li r12,-2
	ctx.r12.s64 = -2;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// lwz r3,-28216(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28216);
	// rldicr r12,r12,51,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 51) & 0xFFFFFFFFFFFFFFFF;
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// stw r31,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r31.u32);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
loc_82A06680:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// bge 0x82a065c8
	if (!ctx.cr0.lt) goto loc_82A065C8;
loc_82A0668C:
	// lwz r11,76(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 76);
	// addic. r28,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r28.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82a06740
	if (ctx.cr0.lt) goto loc_82A06740;
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A0669C:
	// lwz r11,72(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwzx r30,r11,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bne cr6,0x82a066c0
	if (!ctx.cr6.eq) goto loc_82A066C0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8264ce90
	ctx.lr = 0x82A066B4;
	sub_8264CE90(ctx, base);
	// stw r3,-28216(r23)
	PPC_STORE_U32(ctx.r23.u32 + -28216, ctx.r3.u32);
	// bl 0x8264cf50
	ctx.lr = 0x82A066BC;
	sub_8264CF50(ctx, base);
	// lwz r3,-28216(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28216);
loc_82A066C0:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a066e0
	if (ctx.cr6.eq) goto loc_82A066E0;
loc_82A066CC:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a066f0
	if (ctx.cr6.eq) goto loc_82A066F0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a066cc
	if (!ctx.cr6.eq) goto loc_82A066CC;
loc_82A066E0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a06734
	if (ctx.cr6.eq) goto loc_82A06734;
loc_82A066F0:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a06718
	if (ctx.cr6.eq) goto loc_82A06718;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A06714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-28216(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28216);
loc_82A06718:
	// li r12,-2
	ctx.r12.s64 = -2;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// rldicr r12,r12,51,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 51) & 0xFFFFFFFFFFFFFFFF;
	// stw r31,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r31.u32);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
loc_82A06734:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x82a0669c
	if (!ctx.cr0.lt) goto loc_82A0669C;
loc_82A06740:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24984);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0688c
	if (!ctx.cr6.eq) goto loc_82A0688C;
	// lwz r11,788(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 788);
	// lwz r30,776(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 776);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82a06764
	if (!ctx.cr6.gt) goto loc_82A06764;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82A06764:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82a0688c
	if (!ctx.cr6.gt) goto loc_82A0688C;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r10,150
	ctx.r10.s64 = 150;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r9,200
	ctx.r9.s64 = 200;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lis r28,-31885
	ctx.r28.s64 = -2089615360;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// lis r25,-31884
	ctx.r25.s64 = -2089549824;
	// ld r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f31,21152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21152);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82a067b0
	goto loc_82A067B0;
loc_82A067AC:
	// lwz r3,-28216(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28216);
loc_82A067B0:
	// lwz r11,25104(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne cr6,0x82a067d8
	if (!ctx.cr6.eq) goto loc_82A067D8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8264ce90
	ctx.lr = 0x82A067C8;
	sub_8264CE90(ctx, base);
	// stw r3,-28216(r23)
	PPC_STORE_U32(ctx.r23.u32 + -28216, ctx.r3.u32);
	// bl 0x8264cf50
	ctx.lr = 0x82A067D0;
	sub_8264CF50(ctx, base);
	// lwz r3,-28216(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28216);
	// lwz r11,25104(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25104);
loc_82A067D8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82a067e8
	if (!ctx.cr6.eq) goto loc_82A067E8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82A067E8:
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r8,28868(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28868);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// rldicr r6,r6,52,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 52) & 0xFFF0000000000000;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x822a93e8
	ctx.lr = 0x82A06808;
	sub_822A93E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,448(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	// stfs f31,660(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 660, temp.u32);
	// lwz r10,492(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 492);
	// oris r9,r11,8192
	ctx.r9.u64 = ctx.r11.u64 | 536870912;
	// stw r26,656(r29)
	PPC_STORE_U32(ctx.r29.u32 + 656, ctx.r26.u32);
	// rlwinm r8,r10,0,10,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// stw r9,448(r29)
	PPC_STORE_U32(ctx.r29.u32 + 448, ctx.r9.u32);
	// stw r8,492(r29)
	PPC_STORE_U32(ctx.r29.u32 + 492, ctx.r8.u32);
	// bl 0x825d4918
	ctx.lr = 0x82A06838;
	sub_825D4918(ctx, base);
	// lwz r11,772(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 772);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r6,592(r29)
	PPC_STORE_U32(ctx.r29.u32 + 592, ctx.r6.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r5,596(r29)
	PPC_STORE_U32(ctx.r29.u32 + 596, ctx.r5.u32);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r4,600(r29)
	PPC_STORE_U32(ctx.r29.u32 + 600, ctx.r4.u32);
	// lwz r11,784(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 784);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r9,604(r29)
	PPC_STORE_U32(ctx.r29.u32 + 604, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,608(r29)
	PPC_STORE_U32(ctx.r29.u32 + 608, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 612, ctx.r7.u32);
	// bl 0x8265b7a0
	ctx.lr = 0x82A06880;
	sub_8265B7A0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x82a067ac
	if (!ctx.cr0.eq) goto loc_82A067AC;
loc_82A0688C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A068A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A068B4"))) PPC_WEAK_FUNC(sub_82A068B4);
PPC_FUNC_IMPL(__imp__sub_82A068B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A068B8"))) PPC_WEAK_FUNC(sub_82A068B8);
PPC_FUNC_IMPL(__imp__sub_82A068B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A068C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0699c
	if (ctx.cr6.eq) goto loc_82A0699C;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// bl 0x8236aea8
	ctx.lr = 0x82A068DC;
	sub_8236AEA8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bne cr6,0x82a0691c
	if (!ctx.cr6.eq) goto loc_82A0691C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24980);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0691c
	if (!ctx.cr6.eq) goto loc_82A0691C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82824cf8
	ctx.lr = 0x82A06918;
	sub_82824CF8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_82A0691C:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r9,r10,30404
	ctx.r9.s64 = ctx.r10.s64 + 30404;
	// lwz r3,-26012(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26012);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A0694C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0696c
	if (ctx.cr6.eq) goto loc_82A0696C;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r11,-26004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26004);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-26004(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26004, ctx.r11.u32);
loc_82A0696C:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,204
	ctx.r3.s64 = ctx.r30.s64 + 204;
	// bl 0x82484b98
	ctx.lr = 0x82A0697C;
	sub_82484B98(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,216
	ctx.r3.s64 = ctx.r30.s64 + 216;
	// bl 0x823d6ef0
	ctx.lr = 0x82A06988;
	sub_823D6EF0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r10,r11,30248
	ctx.r10.s64 = ctx.r11.s64 + 30248;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x822b1a50
	ctx.lr = 0x82A0699C;
	sub_822B1A50(ctx, base);
loc_82A0699C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A069A4"))) PPC_WEAK_FUNC(sub_82A069A4);
PPC_FUNC_IMPL(__imp__sub_82A069A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A069A8"))) PPC_WEAK_FUNC(sub_82A069A8);
PPC_FUNC_IMPL(__imp__sub_82A069A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82A069B0;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8260cab8
	ctx.lr = 0x82A069BC;
	sub_8260CAB8(ctx, base);
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06a68
	if (ctx.cr6.eq) goto loc_82A06A68;
	// lwz r11,712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06a68
	if (ctx.cr6.eq) goto loc_82A06A68;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82A069D8:
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82a06a68
	if (!ctx.cr6.eq) goto loc_82A06A68;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a069d8
	if (!ctx.cr6.eq) goto loc_82A069D8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,24964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24964);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a06a68
	if (!ctx.cr6.eq) goto loc_82A06A68;
	// lfs f0,340(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// lfs f13,344(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f12,348(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,352(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f7,616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	ctx.f7.f64 = double(temp.f32);
	// lwz r4,712(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// lfs f6,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f11,f7
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f2,f9,f7
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f1,f8,f7
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f0,f6,f3
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f13,f5,f2
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f12,f4,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82a068b8
	ctx.lr = 0x82A06A68;
	sub_82A068B8(ctx, base);
loc_82A06A68:
	// lwz r11,696(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 696);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a06b6c
	if (!ctx.cr6.gt) goto loc_82A06B6C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r28,-31883
	ctx.r28.s64 = -2089484288;
	// lis r23,-31884
	ctx.r23.s64 = -2089549824;
	// addi r26,r11,11336
	ctx.r26.s64 = ctx.r11.s64 + 11336;
	// addi r24,r10,11272
	ctx.r24.s64 = ctx.r10.s64 + 11272;
loc_82A06A94:
	// lwz r11,692(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 692);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a06b58
	if (!ctx.cr6.eq) goto loc_82A06B58;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a06b58
	if (ctx.cr6.eq) goto loc_82A06B58;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a06b58
	if (ctx.cr6.eq) goto loc_82A06B58;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a06ad4
	if (ctx.cr6.eq) goto loc_82A06AD4;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82a06ad8
	goto loc_82A06AD8;
loc_82A06AD4:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82A06AD8:
	// lwz r3,-25652(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -25652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a06af8
	if (!ctx.cr6.eq) goto loc_82A06AF8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829dd7f0
	ctx.lr = 0x82A06AEC;
	sub_829DD7F0(ctx, base);
	// stw r3,-25652(r28)
	PPC_STORE_U32(ctx.r28.u32 + -25652, ctx.r3.u32);
	// bl 0x829dd8a0
	ctx.lr = 0x82A06AF4;
	sub_829DD8A0(ctx, base);
	// lwz r3,-25652(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -25652);
loc_82A06AF8:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a0678
	ctx.lr = 0x82A06B08;
	sub_822A0678(ctx, base);
	// bl 0x82694858
	ctx.lr = 0x82A06B0C;
	sub_82694858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// beq cr6,0x82a06b58
	if (ctx.cr6.eq) goto loc_82A06B58;
	// stw r29,916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 916, ctx.r29.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a06b3c
	if (ctx.cr6.eq) goto loc_82A06B3C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// rlwinm r9,r10,0,8,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r9,492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 492, ctx.r9.u32);
loc_82A06B3C:
	// lwz r11,24988(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06b58
	if (ctx.cr6.eq) goto loc_82A06B58;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// oris r9,r10,4096
	ctx.r9.u64 = ctx.r10.u64 | 268435456;
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
loc_82A06B58:
	// lwz r11,696(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 696);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,40
	ctx.r27.s64 = ctx.r27.s64 + 40;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a06a94
	if (ctx.cr6.lt) goto loc_82A06A94;
loc_82A06B6C:
	// lwz r11,652(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 652);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,60
	ctx.r3.s64 = ctx.r29.s64 + 60;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82a0c788
	ctx.lr = 0x82A06B80;
	sub_82A0C788(ctx, base);
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06ba0
	if (ctx.cr6.eq) goto loc_82A06BA0;
	// lwz r11,712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06ba0
	if (ctx.cr6.eq) goto loc_82A06BA0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 236, ctx.r10.u32);
loc_82A06BA0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A06BA8"))) PPC_WEAK_FUNC(sub_82A06BA8);
PPC_FUNC_IMPL(__imp__sub_82A06BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82A06BB0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6ab0
	ctx.lr = 0x82A06BB8;
	__savefpr_14(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82773b08
	ctx.lr = 0x82A06BC4;
	sub_82773B08(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// ori r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 16;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// bne cr6,0x82a06c14
	if (!ctx.cr6.eq) goto loc_82A06C14;
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a06c00
	if (ctx.cr6.gt) goto loc_82A06C00;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82a06c08
	goto loc_82A06C08;
loc_82A06C00:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A06C08:
	// lwz r3,752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// bl 0x82a0d140
	ctx.lr = 0x82A06C10;
	sub_82A0D140(ctx, base);
	// stw r3,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r3.u32);
loc_82A06C14:
	// lwz r11,764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a06c50
	if (!ctx.cr6.eq) goto loc_82A06C50;
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a06c3c
	if (ctx.cr6.gt) goto loc_82A06C3C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82a06c44
	goto loc_82A06C44;
loc_82A06C3C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A06C44:
	// lwz r3,756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 756);
	// bl 0x82a0d140
	ctx.lr = 0x82A06C4C;
	sub_82A0D140(ctx, base);
	// stw r3,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r3.u32);
loc_82A06C50:
	// lwz r11,756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r9,348(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r8,352(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,30
	ctx.r4.s64 = 30;
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// stw r10,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r10.u32);
	// stw r9,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r9.u32);
	// stw r8,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r8.u32);
	// bl 0x82294ac0
	ctx.lr = 0x82A06C88;
	sub_82294AC0(ctx, base);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,120
	ctx.r5.s64 = 120;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e640b8
	ctx.lr = 0x82A06CA0;
	sub_82E640B8(ctx, base);
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82a06d58
	if (!ctx.cr6.gt) goto loc_82A06D58;
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r27,r11,14488
	ctx.r27.s64 = ctx.r11.s64 + 14488;
	// lwz r10,-28232(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28232);
loc_82A06CC4:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a06d44
	if (ctx.cr6.eq) goto loc_82A06D44;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a06cf0
	if (!ctx.cr6.eq) goto loc_82A06CF0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8264c5d0
	ctx.lr = 0x82A06CE4;
	sub_8264C5D0(ctx, base);
	// stw r3,-28232(r29)
	PPC_STORE_U32(ctx.r29.u32 + -28232, ctx.r3.u32);
	// bl 0x8264c690
	ctx.lr = 0x82A06CEC;
	sub_8264C690(ctx, base);
	// lwz r10,-28232(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28232);
loc_82A06CF0:
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwzx r11,r9,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06d18
	if (ctx.cr6.eq) goto loc_82A06D18;
loc_82A06D04:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a06d28
	if (ctx.cr6.eq) goto loc_82A06D28;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a06d04
	if (!ctx.cr6.eq) goto loc_82A06D04;
loc_82A06D18:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a06d44
	if (ctx.cr6.eq) goto loc_82A06D44;
loc_82A06D28:
	// lwzx r3,r9,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// bl 0x82472cc0
	ctx.lr = 0x82A06D30;
	sub_82472CC0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A06D40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,-28232(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28232);
loc_82A06D44:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a06cc4
	if (ctx.cr6.lt) goto loc_82A06CC4;
loc_82A06D58:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82a06db8
	if (ctx.cr6.eq) goto loc_82A06DB8;
	// lwz r10,712(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a06db8
	if (ctx.cr6.eq) goto loc_82A06DB8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lfs f0,196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r8,r9,-18304
	ctx.r8.s64 = ctx.r9.s64 + -18304;
	// lfs f13,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
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
	// rlwinm r5,r7,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f10,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f9,f10,f12,f13
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fdivs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// stfs f8,1320(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1320, temp.u32);
loc_82A06DB8:
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// bl 0x823d7698
	ctx.lr = 0x82A06DD0;
	sub_823D7698(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
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
	// lfs f0,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// lfs f13,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r10,16384
	ctx.r4.s64 = ctx.r10.s64 + 16384;
	// lfs f10,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f10.f64 = double(temp.f32);
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r11,r9,16384
	ctx.r11.s64 = ctx.r9.s64 + 16384;
	// lfs f11,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f11.f64 = double(temp.f32);
	// srawi r10,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 2;
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// srawi r6,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 2;
	// lfs f7,356(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r8,-22168
	ctx.r4.s64 = ctx.r8.s64 + -22168;
	// lfs f6,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r11,r7,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// lfs f5,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r8,r3,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFC;
	// lfs f4,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r7,r10,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// rlwinm r6,r6,2,16,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// rlwinm r5,r5,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFC;
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfsx f2,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r3,r9,2,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// lfsx f1,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfsx f13,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f1,f2
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// lfsx f10,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f30,f13,f1
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f29,f10,f13
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfsx f28,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f28.f64 = double(temp.f32);
	// lfsx f0,r3,r4
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f25,f28,f2
	ctx.f25.f64 = double(float(ctx.f28.f64 * ctx.f2.f64));
	// fmuls f22,f10,f0
	ctx.f22.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f24,f12,f0
	ctx.f24.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f27,f10,f2
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f26,f1,f28
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// fmuls f23,f9,f0
	ctx.f23.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f21,f9,f28
	ctx.f21.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// stfs f21,120(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f21,f7,f9
	ctx.f21.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmadds f20,f29,f28,f11
	ctx.f20.f64 = double(float(ctx.f29.f64 * ctx.f28.f64 + ctx.f11.f64));
	// fmadds f19,f11,f28,f29
	ctx.f19.f64 = double(float(ctx.f11.f64 * ctx.f28.f64 + ctx.f29.f64));
	// fmsubs f17,f25,f10,f30
	ctx.f17.f64 = double(float(ctx.f25.f64 * ctx.f10.f64 - ctx.f30.f64));
	// fmuls f9,f22,f9
	ctx.f9.f64 = double(float(ctx.f22.f64 * ctx.f9.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f16,f24,f2
	ctx.f16.f64 = double(float(ctx.f24.f64 * ctx.f2.f64));
	// fnmsubs f18,f26,f13,f27
	ctx.f18.f64 = double(float(-(ctx.f26.f64 * ctx.f13.f64 - ctx.f27.f64)));
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f15,f23,f1
	ctx.f15.f64 = double(float(ctx.f23.f64 * ctx.f1.f64));
	// stfs f15,116(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f7,f7,f23
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f23.f64));
	// fmuls f0,f20,f8
	ctx.f0.f64 = double(float(ctx.f20.f64 * ctx.f8.f64));
	// fmuls f23,f19,f12
	ctx.f23.f64 = double(float(ctx.f19.f64 * ctx.f12.f64));
	// stfs f23,132(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f12,f17,f12
	ctx.f12.f64 = double(float(ctx.f17.f64 * ctx.f12.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fneg f12,f16
	ctx.f12.u64 = ctx.f16.u64 ^ 0x8000000000000000;
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f23,f18,f8
	ctx.f23.f64 = double(float(ctx.f18.f64 * ctx.f8.f64));
	// stfs f23,148(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmuls f27,f27,f6
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f6.f64));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// fnmsubs f4,f21,f22,f4
	ctx.f4.f64 = double(float(-(ctx.f21.f64 * ctx.f22.f64 - ctx.f4.f64)));
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// fmuls f23,f6,f29
	ctx.f23.f64 = double(float(ctx.f6.f64 * ctx.f29.f64));
	// lvx128 v59,r0,r11
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmuls f25,f25,f3
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f3.f64));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fmuls f22,f21,f28
	ctx.f22.f64 = double(float(ctx.f21.f64 * ctx.f28.f64));
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// fmuls f26,f6,f26
	ctx.f26.f64 = double(float(ctx.f6.f64 * ctx.f26.f64));
	// lvx128 v57,r0,r10
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f5,f24
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f24.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f21,f3,f11
	ctx.f21.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f8,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// fmadds f7,f7,f1,f27
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f27.f64));
	// lfs f20,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f20.f64 = double(temp.f32);
	// lfs f24,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f24.f64 = double(temp.f32);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// fmadds f4,f23,f28,f4
	ctx.f4.f64 = double(float(ctx.f23.f64 * ctx.f28.f64 + ctx.f4.f64));
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lvx128 v58,r0,r8
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v56,v59,v58
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// fmadds f1,f3,f29,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f29.f64 + ctx.f7.f64));
	// vmrglw128 v55,v59,v58
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// fnmsubs f12,f25,f10,f4
	ctx.f12.f64 = double(float(-(ctx.f25.f64 * ctx.f10.f64 - ctx.f4.f64)));
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// fmadds f0,f6,f9,f22
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f22.f64));
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lvx128 v62,r0,r5
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lvx128 v60,r0,r11
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// fnmsubs f10,f26,f13,f1
	ctx.f10.f64 = double(float(-(ctx.f26.f64 * ctx.f13.f64 - ctx.f1.f64)));
	// fmadds f8,f30,f3,f12
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f3.f64 + ctx.f12.f64));
	// fnmsubs f9,f5,f2,f0
	ctx.f9.f64 = double(float(-(ctx.f5.f64 * ctx.f2.f64 - ctx.f0.f64)));
	// fmadds f7,f21,f28,f10
	ctx.f7.f64 = double(float(ctx.f21.f64 * ctx.f28.f64 + ctx.f10.f64));
	// fmadds f4,f6,f11,f8
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f4,160(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fsubs f5,f24,f9
	ctx.f5.f64 = double(float(ctx.f24.f64 - ctx.f9.f64));
	// stfs f5,168(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fsubs f3,f20,f7
	ctx.f3.f64 = double(float(ctx.f20.f64 - ctx.f7.f64));
	// stfs f3,164(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lvx128 v59,r0,r7
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v54,v57,v59
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrglw128 v53,v57,v59
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v52,v56,v54
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrglw128 v51,v56,v54
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v50,v55,v53
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrglw128 v49,v55,v53
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmsum4fp128 v48,v63,v52
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v47,v63,v51
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v42,v62,v51
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v45,v63,v50
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v44,v63,v49
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v41,v62,v49
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v40,v61,v52
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v39,v61,v50
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v46,v62,v52
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v43,v62,v50
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v38,v61,v51
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v37,v61,v49
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v36,v60,v52
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v35,v60,v50
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v34,v60,v51
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v33,v60,v49
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmrghw128 v32,v48,v45
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v63,v47,v44
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v61,v42,v41
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// vmrghw128 v59,v40,v39
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmrghw128 v60,v32,v63
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmrghw128 v62,v46,v43
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v58,v38,v37
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// vmrghw128 v57,v36,v35
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// vmrghw128 v56,v34,v33
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// stvx128 v60,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v55,v62,v61
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrghw128 v54,v59,v58
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v53,v57,v56
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// stvx128 v55,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x823d40c0
	ctx.lr = 0x82A07074;
	sub_823D40C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823d7698
	ctx.lr = 0x82A07080;
	sub_823D7698(ctx, base);
	// lwz r6,776(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82a07224
	if (!ctx.cr6.gt) goto loc_82A07224;
	// lfs f31,264(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f31.f64 = double(temp.f32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lfs f30,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f18.f64 = double(temp.f32);
	// lfs f17,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f17.f64 = double(temp.f32);
	// lfs f16,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f16.f64 = double(temp.f32);
	// lfs f15,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f15.f64 = double(temp.f32);
	// lfs f14,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f14.f64 = double(temp.f32);
loc_82A070DC:
	// lwz r11,788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a07224
	if (!ctx.cr6.lt) goto loc_82A07224;
	// lwz r11,772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f24,f0
	ctx.f13.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f25,f0
	ctx.f11.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f23,f0
	ctx.f9.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// fmadds f8,f27,f12,f13
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f7,f28,f12,f11
	ctx.f7.f64 = double(float(ctx.f28.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f6,f26,f12,f9
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f5,f21,f10,f8
	ctx.f5.f64 = double(float(ctx.f21.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fmadds f4,f22,f10,f7
	ctx.f4.f64 = double(float(ctx.f22.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f3,f20,f10,f6
	ctx.f3.f64 = double(float(ctx.f20.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fadds f2,f5,f30
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f30.f64));
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f1,f4,f31
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fadds f0,f3,f29
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f29.f64));
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823d7698
	ctx.lr = 0x82A07164;
	sub_823D7698(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f7,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f5,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f3,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f9,f10
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfs f1,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f5,f7,f8
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f8,f7,f14,f4
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f14.f64 + ctx.f4.f64));
	// fmadds f9,f7,f3,f6
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f6.f64));
	// fmadds f7,f7,f15,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f15.f64 + ctx.f2.f64));
	// fmadds f6,f1,f0,f10
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f4,f1,f12,f8
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f5,f1,f13,f9
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f3,f1,f11,f7
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fadds f2,f6,f16
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f16.f64));
	// stfs f2,192(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fadds f0,f4,f18
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f18.f64));
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fadds f1,f5,f17
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f17.f64));
	// stfs f1,196(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fadds f13,f3,f19
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f19.f64));
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x823d28d8
	ctx.lr = 0x82A071F8;
	sub_823D28D8(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
	// lwz r3,776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82a070dc
	if (ctx.cr6.lt) goto loc_82A070DC;
loc_82A07224:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a0723c
	if (ctx.cr6.gt) goto loc_82A0723C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82a07244
	goto loc_82A07244;
loc_82A0723C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A07244:
	// bl 0x826f0218
	ctx.lr = 0x82A07248;
	sub_826F0218(ctx, base);
	// lwz r3,772(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 772);
	// bl 0x82a0d1c0
	ctx.lr = 0x82A07250;
	sub_82A0D1C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a07268
	if (ctx.cr6.eq) goto loc_82A07268;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,492
	ctx.r3.s64 = ctx.r3.s64 + 492;
	// bl 0x82b3ccb0
	ctx.lr = 0x82A07268;
	sub_82B3CCB0(ctx, base);
loc_82A07268:
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r1,176
	ctx.r29.s64 = ctx.r1.s64 + 176;
	// ld r4,-3396(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3396);
	// bl 0x8229e490
	ctx.lr = 0x82A07288;
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
	ctx.lr = 0x82A072A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a072d4
	if (ctx.cr6.eq) goto loc_82A072D4;
	// lwz r4,604(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a072d4
	if (ctx.cr6.eq) goto loc_82A072D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A072D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82a07328
	goto loc_82A07328;
loc_82A072D4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x82a07324
	if (ctx.cr6.eq) goto loc_82A07324;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x8246b6c0
	ctx.lr = 0x82A072F0;
	sub_8246B6C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82a07324
	if (!ctx.cr6.gt) goto loc_82A07324;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0731c
	if (ctx.cr6.eq) goto loc_82A0731C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0731C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0731C:
	// stw r26,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r26.u32);
	// stw r26,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r26.u32);
loc_82A07324:
	// stw r26,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r26.u32);
loc_82A07328:
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a07390
	if (ctx.cr6.eq) goto loc_82A07390;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A07348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r9,480(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 2147483648;
	// stw r8,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r8.u32);
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r7,480(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r6,r7,16384
	ctx.r6.u64 = ctx.r7.u64 | 1073741824;
	// stw r6,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r6.u32);
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r5,480(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r4,r5,8192
	ctx.r4.u64 = ctx.r5.u64 | 536870912;
	// stw r4,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r4.u32);
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r3,480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r10,r3,4096
	ctx.r10.u64 = ctx.r3.u64 | 268435456;
	// stw r10,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r10.u32);
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// bl 0x8265b7a0
	ctx.lr = 0x82A07390;
	sub_8265B7A0(ctx, base);
loc_82A07390:
	// lwz r3,688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a073f0
	if (ctx.cr6.eq) goto loc_82A073F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A073B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// lwz r9,480(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 2147483648;
	// stw r8,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r8.u32);
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// lwz r7,480(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r6,r7,16384
	ctx.r6.u64 = ctx.r7.u64 | 1073741824;
	// stw r6,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r6.u32);
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// lwz r5,480(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r4,r5,8192
	ctx.r4.u64 = ctx.r5.u64 | 536870912;
	// stw r4,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r4.u32);
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// lwz r3,480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r10,r3,4096
	ctx.r10.u64 = ctx.r3.u64 | 268435456;
	// stw r10,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r10.u32);
loc_82A073F0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r11,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8260e1b0
	ctx.lr = 0x82A07410;
	sub_8260E1B0(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6afc
	ctx.lr = 0x82A0741C;
	__restfpr_14(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A07420"))) PPC_WEAK_FUNC(sub_82A07420);
PPC_FUNC_IMPL(__imp__sub_82A07420) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a07584
	if (ctx.cr6.eq) goto loc_82A07584;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// stw r4,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r4.u32);
	// stw r11,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r11.u32);
	// lwz r11,-31264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82a07468
	if (ctx.cr6.gt) goto loc_82A07468;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a07470
	goto loc_82A07470;
loc_82A07468:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A07470:
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f13,852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,31796(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31796);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,996(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 996, temp.u32);
	// lwz r11,-31264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x82a074a0
	if (ctx.cr6.gt) goto loc_82A074A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a074a8
	goto loc_82A074A8;
loc_82A074A0:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A074A8:
	// lwz r10,688(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// lfs f13,852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,996(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 996, temp.u32);
	// lbz r9,649(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 649);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a07584
	if (!ctx.cr6.eq) goto loc_82A07584;
	// stw r4,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r4.u32);
	// stw r4,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r4.u32);
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// bl 0x8265b370
	ctx.lr = 0x82A074D4;
	sub_8265B370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,652(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// bl 0x825d4918
	ctx.lr = 0x82A074E0;
	sub_825D4918(ctx, base);
	// lwz r3,688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A074F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,480(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r8,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r8.u32);
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// lwz r7,480(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// rlwinm r6,r7,0,2,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r6,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r6.u32);
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// lwz r5,480(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// rlwinm r3,r5,0,3,1
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r3,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r3.u32);
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// lwz r10,480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// rlwinm r9,r10,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r9,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r9.u32);
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,308(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 308);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A07550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a07584
	if (ctx.cr6.eq) goto loc_82A07584;
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07584
	if (ctx.cr6.eq) goto loc_82A07584;
	// lwz r11,768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07584
	if (ctx.cr6.eq) goto loc_82A07584;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A07584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A07584:
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

__attribute__((alias("__imp__sub_82A07598"))) PPC_WEAK_FUNC(sub_82A07598);
PPC_FUNC_IMPL(__imp__sub_82A07598) {
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
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,24984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24984);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a07654
	if (!ctx.cr6.eq) goto loc_82A07654;
	// lwz r3,688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// lbz r11,649(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 649);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// stw r3,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r3.u32);
	// beq cr6,0x82a07654
	if (ctx.cr6.eq) goto loc_82A07654;
	// stw r3,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A075EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,480(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 2147483648;
	// stw r8,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r8.u32);
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// lwz r7,480(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r10,r7,16384
	ctx.r10.u64 = ctx.r7.u64 | 1073741824;
	// stw r10,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r10.u32);
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// lwz r9,480(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r8,r9,8192
	ctx.r8.u64 = ctx.r9.u64 | 536870912;
	// stw r8,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r8.u32);
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// lwz r7,480(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r10,r7,4096
	ctx.r10.u64 = ctx.r7.u64 | 268435456;
	// stw r10,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r10.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm r8,r9,0,11,9
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// bl 0x8260e1b0
	ctx.lr = 0x82A0764C;
	sub_8260E1B0(ctx, base);
	// lwz r3,688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// bl 0x8265b7a0
	ctx.lr = 0x82A07654;
	sub_8265B7A0(ctx, base);
loc_82A07654:
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

__attribute__((alias("__imp__sub_82A07668"))) PPC_WEAK_FUNC(sub_82A07668);
PPC_FUNC_IMPL(__imp__sub_82A07668) {
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
	// bl 0x8265a620
	ctx.lr = 0x82A07684;
	sub_8265A620(ctx, base);
	// lwz r31,652(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a076c0
	if (ctx.cr6.eq) goto loc_82A076C0;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a076c0
	if (ctx.cr6.eq) goto loc_82A076C0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x82519840
	ctx.lr = 0x82A076B0;
	sub_82519840(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a076c0
	if (!ctx.cr6.eq) goto loc_82A076C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265b370
	ctx.lr = 0x82A076C0;
	sub_8265B370(ctx, base);
loc_82A076C0:
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

__attribute__((alias("__imp__sub_82A076D8"))) PPC_WEAK_FUNC(sub_82A076D8);
PPC_FUNC_IMPL(__imp__sub_82A076D8) {
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
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// lfs f12,1260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f0,21152(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,1312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1312);
	ctx.f3.f64 = double(temp.f32);
	// addi r7,r9,-18304
	ctx.r7.s64 = ctx.r9.s64 + -18304;
	// lfs f8,1264(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1264);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f29,f3,f0
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f30,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f4,f2,f30
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f30.f64));
	// lfs f31,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fsubs f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f12,f5,f6
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fcmpu cr6,f4,f31
	ctx.cr6.compare(ctx.f4.f64, ctx.f31.f64);
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
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// rlwinm r5,r6,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// rlwinm r4,r6,30,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lfsx f10,r7,r3
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f9,f10,f2,f30
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f2.f64 : ctx.f30.f64;
	// fmadds f8,f12,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fdivs f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f9.f64));
	// fdivs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f13.f64));
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fadds f3,f4,f29
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f29.f64));
	// fneg f0,f3
	ctx.f0.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
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
	// lfsx f13,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f3,f13,f31,f3
	ctx.f3.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f3.f64;
	// bl 0x82627498
	ctx.lr = 0x82A077B4;
	sub_82627498(ctx, base);
	// fmuls f12,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// lfs f11,1312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1312);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82a077d0
	if (!ctx.cr6.lt) goto loc_82A077D0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82a077dc
	goto loc_82A077DC;
loc_82A077D0:
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// blt cr6,0x82a077dc
	if (ctx.cr6.lt) goto loc_82A077DC;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
loc_82A077DC:
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

__attribute__((alias("__imp__sub_82A077FC"))) PPC_WEAK_FUNC(sub_82A077FC);
PPC_FUNC_IMPL(__imp__sub_82A077FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A07800"))) PPC_WEAK_FUNC(sub_82A07800);
PPC_FUNC_IMPL(__imp__sub_82A07800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A07808;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6ab0
	ctx.lr = 0x82A07810;
	__savefpr_14(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07d98
	if (ctx.cr6.eq) goto loc_82A07D98;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,1312(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1312);
	ctx.f0.f64 = double(temp.f32);
	// lfs f25,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f25.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// ble cr6,0x82a07d98
	if (!ctx.cr6.gt) goto loc_82A07D98;
	// lwz r10,652(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lfs f12,1268(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1268);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f11,1260(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1260);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1264);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r11,-27768
	ctx.r31.s64 = ctx.r11.s64 + -27768;
	// lwz r7,712(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 712);
	// lfs f9,152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// lfs f15,21152(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21152);
	ctx.f15.f64 = double(temp.f32);
	// lfs f5,184(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 184);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// lfs f3,180(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 180);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// lfs f8,148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,176(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f5,f8,f5
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// lfs f9,196(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 196);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f18,f9,f15
	ctx.f18.f64 = double(float(ctx.f9.f64 * ctx.f15.f64));
	// lfs f0,188(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f31,f0,f15
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f15.f64));
	// lfs f9,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-28844(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f7,f3,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f4.f64));
	// lfs f4,192(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 192);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f2,f6,f3,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f2.f64));
	// lfs f28,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f3,f29,f3,f5
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f3.f64 + ctx.f5.f64));
	// lfs f6,160(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f30,f4,f15
	ctx.f30.f64 = double(float(ctx.f4.f64 * ctx.f15.f64));
	// lfs f4,164(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f27,f18,f0
	ctx.f27.f64 = double(float(ctx.f18.f64 * ctx.f0.f64));
	// lfs f23,-4676(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4676);
	ctx.f23.f64 = double(temp.f32);
	// fdivs f16,f23,f18
	ctx.f16.f64 = double(float(ctx.f23.f64 / ctx.f18.f64));
	// fmuls f5,f31,f0
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmadds f13,f13,f1,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// fmadds f9,f9,f1,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fmadds f3,f28,f1,f3
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f1.f64 + ctx.f3.f64));
	// fmuls f7,f30,f0
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fadds f2,f13,f8
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// fadds f1,f9,f6
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// fadds f13,f3,f4
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fsubs f24,f2,f27
	ctx.f24.f64 = double(float(ctx.f2.f64 - ctx.f27.f64));
	// stfs f24,128(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f0,f1,f5
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fsubs f12,f12,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f24.f64));
	// fsubs f29,f11,f0
	ctx.f29.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f28,f10,f13
	ctx.f28.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f0,f16,f12
	ctx.f0.f64 = double(float(ctx.f16.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x82a07938
	if (!ctx.cr6.lt) goto loc_82A07938;
	// fmr f26,f25
	ctx.f26.f64 = ctx.f25.f64;
	// b 0x82a0794c
	goto loc_82A0794C;
loc_82A07938:
	// fcmpu cr6,f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bge cr6,0x82a07948
	if (!ctx.cr6.lt) goto loc_82A07948;
	// fmr f26,f0
	ctx.f26.f64 = ctx.f0.f64;
	// b 0x82a0794c
	goto loc_82A0794C;
loc_82A07948:
	// fmr f26,f23
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f23.f64;
loc_82A0794C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,1320(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1320);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fmr f27,f25
	ctx.f27.f64 = ctx.f25.f64;
	// fmr f17,f25
	ctx.f17.f64 = ctx.f25.f64;
	// addi r29,r10,-18304
	ctx.r29.s64 = ctx.r10.s64 + -18304;
	// fmr f14,f25
	ctx.f14.f64 = ctx.f25.f64;
	// lfs f0,26252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26252);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f25
	ctx.cr6.compare(ctx.f12.f64, ctx.f25.f64);
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
	// lfsx f11,r29,r6
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f1,f11,f12,f25
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f25.f64;
	// bl 0x82cb4db8
	ctx.lr = 0x82A07990;
	sub_82CB4DB8(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// lfd f0,-18376(r5)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18376);
	// fmul f1,f10,f0
	ctx.f1.f64 = ctx.f10.f64 * ctx.f0.f64;
	// bl 0x82cb4c00
	ctx.lr = 0x82A079A4;
	sub_82CB4C00(ctx, base);
	// fsubs f9,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f30.f64 - ctx.f28.f64));
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// fneg f8,f28
	ctx.f8.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// lis r3,-32222
	ctx.r3.s64 = -2111700992;
	// fneg f7,f29
	ctx.f7.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// lwz r11,1288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1288);
	// fsubs f6,f31,f29
	ctx.f6.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// frsp f5,f1
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lfs f0,-17496(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -17496);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,-17248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -17248);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// fmuls f12,f9,f9
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// fmuls f9,f8,f8
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f4,f4
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmuls f10,f3,f3
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f5,f1,f1,f12
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fmadds f3,f6,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmadds f8,f2,f2,f13
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f13.f64));
	// fmadds f4,f7,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f10.f64));
	// fsubs f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fsubs f1,f4,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fcmpu cr6,f2,f25
	ctx.cr6.compare(ctx.f2.f64, ctx.f25.f64);
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
	// fcmpu cr6,f1,f25
	ctx.cr6.compare(ctx.f1.f64, ctx.f25.f64);
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
	// rlwinm r8,r10,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r7,r10,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// rlwinm r6,r9,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r5,r9,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f0,r29,r4
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r29,r3
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f0,f8,f5
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f8.f64 : ctx.f5.f64;
	// fsel f10,f13,f4,f3
	ctx.f10.f64 = ctx.f13.f64 >= 0.0 ? ctx.f4.f64 : ctx.f3.f64;
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fcmpu cr6,f9,f25
	ctx.cr6.compare(ctx.f9.f64, ctx.f25.f64);
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lfsx f8,r29,r7
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f8,f10,f12
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ble cr6,0x82a07a8c
	if (!ctx.cr6.gt) goto loc_82A07A8C;
	// lfs f0,1312(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1312);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f27,f16,f11
	ctx.f27.f64 = double(float(ctx.f16.f64 * ctx.f11.f64));
	// fsubs f13,f23,f0
	ctx.f13.f64 = double(float(ctx.f23.f64 - ctx.f0.f64));
	// fmuls f14,f13,f26
	ctx.f14.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// fmuls f17,f14,f18
	ctx.f17.f64 = double(float(ctx.f14.f64 * ctx.f18.f64));
loc_82A07A8C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a07d98
	if (!ctx.cr6.gt) goto loc_82A07D98;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-6224(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -6224);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-31904
	ctx.r8.s64 = -2090860544;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fdivs f21,f23,f31
	ctx.f21.f64 = double(float(ctx.f23.f64 / ctx.f31.f64));
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f12,-17252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17252);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f20,f23,f30
	ctx.f20.f64 = double(float(ctx.f23.f64 / ctx.f30.f64));
	// lfs f10,-14264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14264);
	ctx.f10.f64 = double(temp.f32);
	// fadds f19,f14,f27
	ctx.f19.f64 = double(float(ctx.f14.f64 + ctx.f27.f64));
	// lfd f9,-18360(r9)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18360);
	// lfs f22,-14220(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -14220);
	ctx.f22.f64 = double(temp.f32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfd f9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// b 0x82a07af4
	goto loc_82A07AF4;
loc_82A07AEC:
	// lfs f24,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f24.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
loc_82A07AF4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lfsx f12,r29,r11
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f12,f9,f24
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f24.f64));
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f28,f21,f0
	ctx.f28.f64 = double(float(ctx.f21.f64 * ctx.f0.f64));
	// fmuls f26,f20,f13
	ctx.f26.f64 = double(float(ctx.f20.f64 * ctx.f13.f64));
	// fmuls f29,f16,f12
	ctx.f29.f64 = double(float(ctx.f16.f64 * ctx.f12.f64));
	// fcmpu cr6,f28,f25
	ctx.cr6.compare(ctx.f28.f64, ctx.f25.f64);
	// bge cr6,0x82a07b44
	if (!ctx.cr6.lt) goto loc_82A07B44;
	// fmr f28,f25
	ctx.f28.f64 = ctx.f25.f64;
	// b 0x82a07b50
	goto loc_82A07B50;
loc_82A07B44:
	// fcmpu cr6,f28,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f23.f64);
	// blt cr6,0x82a07b50
	if (ctx.cr6.lt) goto loc_82A07B50;
	// fmr f28,f23
	ctx.f28.f64 = ctx.f23.f64;
loc_82A07B50:
	// fcmpu cr6,f26,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f25.f64);
	// bge cr6,0x82a07b60
	if (!ctx.cr6.lt) goto loc_82A07B60;
	// fmr f26,f25
	ctx.f26.f64 = ctx.f25.f64;
	// b 0x82a07b6c
	goto loc_82A07B6C;
loc_82A07B60:
	// fcmpu cr6,f26,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f23.f64);
	// blt cr6,0x82a07b6c
	if (ctx.cr6.lt) goto loc_82A07B6C;
	// fmr f26,f23
	ctx.f26.f64 = ctx.f23.f64;
loc_82A07B6C:
	// fcmpu cr6,f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f25.f64);
	// bge cr6,0x82a07b7c
	if (!ctx.cr6.lt) goto loc_82A07B7C;
	// fmr f29,f25
	ctx.f29.f64 = ctx.f25.f64;
	// b 0x82a07b88
	goto loc_82A07B88;
loc_82A07B7C:
	// fcmpu cr6,f29,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f23.f64);
	// blt cr6,0x82a07b88
	if (ctx.cr6.lt) goto loc_82A07B88;
	// fmr f29,f23
	ctx.f29.f64 = ctx.f23.f64;
loc_82A07B88:
	// lwz r11,1288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1288);
	// fmuls f24,f29,f11
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f29.f64 * ctx.f11.f64));
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82a07bb8
	if (!ctx.cr6.lt) goto loc_82A07BB8;
	// addi r7,r1,168
	ctx.r7.s64 = ctx.r1.s64 + 168;
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a076d8
	ctx.lr = 0x82A07BB8;
	sub_82A076D8(ctx, base);
loc_82A07BB8:
	// lwz r11,1288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1288);
	// fmr f30,f24
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f24.f64;
	// fmr f0,f23
	ctx.f0.f64 = ctx.f23.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a07be8
	if (!ctx.cr6.gt) goto loc_82A07BE8;
	// fcmpu cr6,f29,f14
	ctx.cr6.compare(ctx.f29.f64, ctx.f14.f64);
	// blt cr6,0x82a07bd8
	if (ctx.cr6.lt) goto loc_82A07BD8;
	// b 0x82a07bdc
	goto loc_82A07BDC;
loc_82A07BD8:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f25.f64;
loc_82A07BDC:
	// lfs f13,1312(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1312);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f19,f18
	ctx.f30.f64 = double(float(ctx.f19.f64 * ctx.f18.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82A07BE8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,1316(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1316);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmuls f27,f0,f1
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fcmpu cr6,f13,f25
	ctx.cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// ble cr6,0x82a07d2c
	if (!ctx.cr6.gt) goto loc_82A07D2C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a07d2c
	if (!ctx.cr6.eq) goto loc_82A07D2C;
	// fmuls f0,f27,f15
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f15.f64));
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x82a07c2c
	if (!ctx.cr6.lt) goto loc_82A07C2C;
	// fmr f31,f25
	ctx.f31.f64 = ctx.f25.f64;
	// b 0x82a07c40
	goto loc_82A07C40;
loc_82A07C2C:
	// fcmpu cr6,f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bge cr6,0x82a07c3c
	if (!ctx.cr6.lt) goto loc_82A07C3C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// b 0x82a07c40
	goto loc_82A07C40;
loc_82A07C3C:
	// fmr f31,f23
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f23.f64;
loc_82A07C40:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82cb4db8
	ctx.lr = 0x82A07C48;
	sub_82CB4DB8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fmul f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 * ctx.f13.f64;
	// bl 0x82cb4c00
	ctx.lr = 0x82A07C58;
	sub_82CB4C00(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,1316(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1316);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f11,f15
	ctx.cr6.compare(ctx.f11.f64, ctx.f15.f64);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// blt cr6,0x82a07cd4
	if (ctx.cr6.lt) goto loc_82A07CD4;
	// fcmpu cr6,f26,f13
	ctx.cr6.compare(ctx.f26.f64, ctx.f13.f64);
	// bgt cr6,0x82a07ca0
	if (ctx.cr6.gt) goto loc_82A07CA0;
	// fcmpu cr6,f29,f19
	ctx.cr6.compare(ctx.f29.f64, ctx.f19.f64);
	// ble cr6,0x82a07ca0
	if (!ctx.cr6.gt) goto loc_82A07CA0;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x82a07d1c
	goto loc_82A07D1C;
loc_82A07CA0:
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f26,f13
	ctx.cr6.compare(ctx.f26.f64, ctx.f13.f64);
	// ble cr6,0x82a07d2c
	if (!ctx.cr6.gt) goto loc_82A07D2C;
	// fcmpu cr6,f29,f19
	ctx.cr6.compare(ctx.f29.f64, ctx.f19.f64);
	// ble cr6,0x82a07d2c
	if (!ctx.cr6.gt) goto loc_82A07D2C;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x82a07d1c
	goto loc_82A07D1C;
loc_82A07CD4:
	// fcmpu cr6,f28,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f13.f64);
	// bgt cr6,0x82a07cec
	if (ctx.cr6.gt) goto loc_82A07CEC;
	// fcmpu cr6,f29,f19
	ctx.cr6.compare(ctx.f29.f64, ctx.f19.f64);
	// ble cr6,0x82a07cec
	if (!ctx.cr6.gt) goto loc_82A07CEC;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a07d04
	goto loc_82A07D04;
loc_82A07CEC:
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f28,f13
	ctx.cr6.compare(ctx.f28.f64, ctx.f13.f64);
	// ble cr6,0x82a07d2c
	if (!ctx.cr6.gt) goto loc_82A07D2C;
	// fcmpu cr6,f29,f19
	ctx.cr6.compare(ctx.f29.f64, ctx.f19.f64);
	// ble cr6,0x82a07d2c
	if (!ctx.cr6.gt) goto loc_82A07D2C;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
loc_82A07D04:
	// fmuls f11,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f6,0(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82A07D1C:
	// fmuls f12,f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f7,8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82A07D2C:
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f27,f18,f13
	ctx.f0.f64 = double(float(-(ctx.f27.f64 * ctx.f18.f64 - ctx.f13.f64)));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82a07d80
	if (ctx.cr6.gt) goto loc_82A07D80;
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82a07d5c
	if (ctx.cr6.lt) goto loc_82A07D5C;
	// fmadds f0,f24,f29,f17
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f29.f64 + ctx.f17.f64));
	// lfs f13,1312(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1312);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fmadds f0,f12,f13,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f30.f64));
	// b 0x82a07d80
	goto loc_82A07D80;
loc_82A07D5C:
	// fcmpu cr6,f13,f17
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f17.f64);
	// blt cr6,0x82a07d7c
	if (ctx.cr6.lt) goto loc_82A07D7C;
	// fmadds f0,f24,f29,f17
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f29.f64 + ctx.f17.f64));
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1312(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1312);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmadds f0,f11,f12,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// b 0x82a07d80
	goto loc_82A07D80;
loc_82A07D7C:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82A07D80:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a07aec
	if (ctx.cr6.lt) goto loc_82A07AEC;
loc_82A07D98:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6afc
	ctx.lr = 0x82A07DA4;
	__restfpr_14(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A07DA8"))) PPC_WEAK_FUNC(sub_82A07DA8);
PPC_FUNC_IMPL(__imp__sub_82A07DA8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d6ef0
	ctx.lr = 0x82A07DE0;
	sub_823D6EF0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a07800
	ctx.lr = 0x82A07DEC;
	sub_82A07800(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x823721d0
	ctx.lr = 0x82A07E10;
	sub_823721D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82A07E2C"))) PPC_WEAK_FUNC(sub_82A07E2C);
PPC_FUNC_IMPL(__imp__sub_82A07E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A07E30"))) PPC_WEAK_FUNC(sub_82A07E30);
PPC_FUNC_IMPL(__imp__sub_82A07E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82A07E38;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,24988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a081bc
	if (ctx.cr6.eq) goto loc_82A081BC;
	// bl 0x8260ab50
	ctx.lr = 0x82A07E58;
	sub_8260AB50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8260e1b0
	ctx.lr = 0x82A07E6C;
	sub_8260E1B0(ctx, base);
	// lwz r11,756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,848
	ctx.r30.s64 = ctx.r31.s64 + 848;
	// stw r29,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r29.u32);
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// lwz r10,856(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r29.u32);
	// beq cr6,0x82a07ea4
	if (ctx.cr6.eq) goto loc_82A07EA4;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x82A07EA4;
	sub_82294520(ctx, base);
loc_82A07EA4:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82A07EBC;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82e640b8
	ctx.lr = 0x82A07ED4;
	sub_82E640B8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stb r29,649(r31)
	PPC_STORE_U8(ctx.r31.u32 + 649, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,1304(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1304, temp.u32);
	// stfs f31,1312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1312, temp.u32);
	// bl 0x82a0b8b0
	ctx.lr = 0x82A07EF0;
	sub_82A0B8B0(ctx, base);
	// lwz r4,656(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82a07fb0
	if (!ctx.cr6.eq) goto loc_82A07FB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d4b78
	ctx.lr = 0x82A07F08;
	sub_825D4B78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,652(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// bl 0x825d4918
	ctx.lr = 0x82A07F14;
	sub_825D4918(ctx, base);
	// lwz r4,688(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a07f34
	if (ctx.cr6.eq) goto loc_82A07F34;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a07f34
	if (ctx.cr6.eq) goto loc_82A07F34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d4918
	ctx.lr = 0x82A07F34;
	sub_825D4918(ctx, base);
loc_82A07F34:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lwz r8,668(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// stw r8,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r8.u32);
	// bl 0x8265a3b0
	ctx.lr = 0x82A07F64;
	sub_8265A3B0(ctx, base);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r6,r7,0,4,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82a07fb0
	if (!ctx.cr6.eq) goto loc_82A07FB0;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rldicr r12,r12,61,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 61) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82a07fb0
	if (!ctx.cr6.eq) goto loc_82A07FB0;
	// rlwinm r11,r11,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82a07fb0
	if (!ctx.cr6.eq) goto loc_82A07FB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,952(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 952);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A07FB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A07FB0:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a08084
	if (ctx.cr6.eq) goto loc_82A08084;
	// lwz r11,712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a08084
	if (ctx.cr6.eq) goto loc_82A08084;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a08084
	if (ctx.cr6.eq) goto loc_82A08084;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82a08084
	if (!ctx.cr6.gt) goto loc_82A08084;
	// lis r27,-31882
	ctx.r27.s64 = -2089418752;
	// lis r26,-31882
	ctx.r26.s64 = -2089418752;
	// lis r25,-31882
	ctx.r25.s64 = -2089418752;
loc_82A07FF8:
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A08010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82454470
	ctx.lr = 0x82A08014;
	sub_82454470(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a08064
	if (ctx.cr6.eq) goto loc_82A08064;
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r4,1404(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + 1404);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82A08034;
	sub_8244FC30(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,1444(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 1444);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82A0804C;
	sub_8244FC30(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,1500(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 1500);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82A08064;
	sub_8244FC30(ctx, base);
loc_82A08064:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// lwz r10,712(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,128(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// cmpw cr6,r24,r7
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82a07ff8
	if (ctx.cr6.lt) goto loc_82A07FF8;
loc_82A08084:
	// bl 0x8244f340
	ctx.lr = 0x82A08088;
	sub_8244F340(ctx, base);
	// lwz r11,1296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a080e4
	if (!ctx.cr6.gt) goto loc_82A080E4;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lfs f0,32428(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32428);
	ctx.f0.f64 = double(temp.f32);
loc_82A080A4:
	// lwz r11,1292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a080d0
	if (ctx.cr6.eq) goto loc_82A080D0;
	// lwz r8,496(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// stfs f0,164(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// lwz r7,504(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// oris r6,r8,32768
	ctx.r6.u64 = ctx.r8.u64 | 2147483648;
	// rlwinm r5,r7,0,3,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r6,496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 496, ctx.r6.u32);
	// stw r5,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r5.u32);
loc_82A080D0:
	// lwz r11,1296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a080a4
	if (ctx.cr6.lt) goto loc_82A080A4;
loc_82A080E4:
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a08148
	if (!ctx.cr6.gt) goto loc_82A08148;
loc_82A080F4:
	// lwz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a08134
	if (ctx.cr6.eq) goto loc_82A08134;
	// lwz r11,492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a08134
	if (ctx.cr6.eq) goto loc_82A08134;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8260ab50
	ctx.lr = 0x82A0811C;
	sub_8260AB50(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,1016(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A08134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A08134:
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a080f4
	if (ctx.cr6.lt) goto loc_82A080F4;
loc_82A08148:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a08194
	if (!ctx.cr6.eq) goto loc_82A08194;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rldicr r12,r12,61,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 61) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82a08194
	if (!ctx.cr6.eq) goto loc_82A08194;
	// rlwinm r11,r11,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82a08194
	if (!ctx.cr6.eq) goto loc_82A08194;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,952(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 952);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A08194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A08194:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,756(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 756);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A081A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,548(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 548);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A081BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A081BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A081C8"))) PPC_WEAK_FUNC(sub_82A081C8);
PPC_FUNC_IMPL(__imp__sub_82A081C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A081D0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r28,-31882
	ctx.r28.s64 = -2089418752;
	// lwz r11,652(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a08244
	if (ctx.cr6.eq) goto loc_82A08244;
	// lwz r10,660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82a08244
	if (!ctx.cr6.gt) goto loc_82A08244;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82A08204:
	// lwz r11,656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82454470
	ctx.lr = 0x82A08210;
	sub_82454470(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0822c
	if (ctx.cr6.eq) goto loc_82A0822C;
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r4,1508(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 1508);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8244fd80
	ctx.lr = 0x82A0822C;
	sub_8244FD80(ctx, base);
loc_82A0822C:
	// lwz r11,652(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 652);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a08204
	if (ctx.cr6.lt) goto loc_82A08204;
loc_82A08244:
	// lwz r11,688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a082a4
	if (ctx.cr6.eq) goto loc_82A082A4;
	// lwz r10,660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82a082a4
	if (!ctx.cr6.gt) goto loc_82A082A4;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82A08264:
	// lwz r11,656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82454470
	ctx.lr = 0x82A08270;
	sub_82454470(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0828c
	if (ctx.cr6.eq) goto loc_82A0828C;
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r4,1508(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 1508);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8244fd80
	ctx.lr = 0x82A0828C;
	sub_8244FD80(ctx, base);
loc_82A0828C:
	// lwz r11,688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 688);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a08264
	if (ctx.cr6.lt) goto loc_82A08264;
loc_82A082A4:
	// bl 0x8244f340
	ctx.lr = 0x82A082A8;
	sub_8244F340(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a083cc
	if (ctx.cr6.eq) goto loc_82A083CC;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82a083cc
	if (!ctx.cr6.gt) goto loc_82A083CC;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a083cc
	if (ctx.cr6.eq) goto loc_82A083CC;
	// lwz r11,780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a083cc
	if (ctx.cr6.eq) goto loc_82A083CC;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r11,652(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82a0835c
	if (ctx.cr6.eq) goto loc_82A0835C;
	// lwz r4,988(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 988);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a08318
	if (ctx.cr6.eq) goto loc_82A08318;
	// lwz r3,780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A08318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A08318:
	// lwz r11,652(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 652);
	// lwz r4,768(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a0833c
	if (ctx.cr6.eq) goto loc_82A0833C;
	// lwz r3,780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0833C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0833C:
	// lwz r11,652(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 652);
	// stw r27,988(r11)
	PPC_STORE_U32(ctx.r11.u32 + 988, ctx.r27.u32);
	// lwz r10,652(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 652);
	// stfs f31,992(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 992, temp.u32);
	// lwz r9,652(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 652);
	// stw r27,768(r9)
	PPC_STORE_U32(ctx.r9.u32 + 768, ctx.r27.u32);
	// lwz r8,652(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 652);
	// stfs f31,772(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 772, temp.u32);
loc_82A0835C:
	// lwz r11,688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a083cc
	if (ctx.cr6.eq) goto loc_82A083CC;
	// lwz r4,988(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 988);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a08388
	if (ctx.cr6.eq) goto loc_82A08388;
	// lwz r3,780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A08388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A08388:
	// lwz r11,688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 688);
	// lwz r4,768(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a083ac
	if (ctx.cr6.eq) goto loc_82A083AC;
	// lwz r3,780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A083AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A083AC:
	// lwz r11,688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 688);
	// stw r27,988(r11)
	PPC_STORE_U32(ctx.r11.u32 + 988, ctx.r27.u32);
	// lwz r10,688(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 688);
	// stfs f31,992(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 992, temp.u32);
	// lwz r9,688(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 688);
	// stw r27,768(r9)
	PPC_STORE_U32(ctx.r9.u32 + 768, ctx.r27.u32);
	// lwz r8,688(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 688);
	// stfs f31,772(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 772, temp.u32);
loc_82A083CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A083D8"))) PPC_WEAK_FUNC(sub_82A083D8);
PPC_FUNC_IMPL(__imp__sub_82A083D8) {
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
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a084ac
	if (ctx.cr6.eq) goto loc_82A084AC;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82a084ac
	if (!ctx.cr6.eq) goto loc_82A084AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,1000(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1000);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0841C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a084ac
	if (ctx.cr6.eq) goto loc_82A084AC;
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a084ac
	if (ctx.cr6.eq) goto loc_82A084AC;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a084ac
	if (ctx.cr6.eq) goto loc_82A084AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A08450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,652(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// bl 0x825d4b78
	ctx.lr = 0x82A0845C;
	sub_825D4B78(ctx, base);
	// lwz r3,688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// stw r3,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r3.u32);
	// stw r3,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r3.u32);
	// stw r3,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r3.u32);
	// bl 0x8265b370
	ctx.lr = 0x82A08470;
	sub_8265B370(ctx, base);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x82a084ac
	if (!ctx.cr6.eq) goto loc_82A084AC;
	// lwz r4,652(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82a084ac
	if (!ctx.cr6.eq) goto loc_82A084AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d4918
	ctx.lr = 0x82A084AC;
	sub_825D4918(ctx, base);
loc_82A084AC:
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

__attribute__((alias("__imp__sub_82A084C0"))) PPC_WEAK_FUNC(sub_82A084C0);
PPC_FUNC_IMPL(__imp__sub_82A084C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A084C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,1004(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A084E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,696(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82a08518
	if (!ctx.cr6.gt) goto loc_82A08518;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A084F4:
	// lwz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82694858
	ctx.lr = 0x82A08504;
	sub_82694858(ctx, base);
	// lwz r10,696(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a084f4
	if (ctx.cr6.lt) goto loc_82A084F4;
loc_82A08518:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,948(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 948);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0852C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229ba40
	ctx.lr = 0x82A08534;
	sub_8229BA40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0853C"))) PPC_WEAK_FUNC(sub_82A0853C);
PPC_FUNC_IMPL(__imp__sub_82A0853C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08540"))) PPC_WEAK_FUNC(sub_82A08540);
PPC_FUNC_IMPL(__imp__sub_82A08540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A08548;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lwz r4,1296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// bl 0x82484938
	ctx.lr = 0x82A0856C;
	sub_82484938(ctx, base);
	// lwz r11,1296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ble cr6,0x82a085cc
	if (!ctx.cr6.gt) goto loc_82A085CC;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82A08588:
	// lwz r11,1292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a085b4
	if (ctx.cr6.eq) goto loc_82A085B4;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
loc_82A085B4:
	// lwz r11,1296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a08588
	if (ctx.cr6.lt) goto loc_82A08588;
loc_82A085CC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a07800
	ctx.lr = 0x82A085D8;
	sub_82A07800(ctx, base);
	// lwz r11,1296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a0863c
	if (!ctx.cr6.gt) goto loc_82A0863C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82A085EC:
	// lwz r11,1292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a08624
	if (ctx.cr6.eq) goto loc_82A08624;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r8.u32);
	// lwz r7,1292(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// lwzx r6,r29,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// lwz r3,492(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 492);
	// bl 0x8265b7a0
	ctx.lr = 0x82A08624;
	sub_8265B7A0(ctx, base);
loc_82A08624:
	// lwz r11,1296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a085ec
	if (ctx.cr6.lt) goto loc_82A085EC;
loc_82A0863C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a08670
	if (ctx.cr6.eq) goto loc_82A08670;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0865c
	if (!ctx.cr6.eq) goto loc_82A0865C;
	// bl 0x822900a0
	ctx.lr = 0x82A08658;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82A0865C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A08670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A08670:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08678"))) PPC_WEAK_FUNC(sub_82A08678);
PPC_FUNC_IMPL(__imp__sub_82A08678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82A08680;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6ae0
	ctx.lr = 0x82A08688;
	__savefpr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r5,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r5.u64);
	// li r29,0
	ctx.r29.s64 = 0;
	// std r6,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r6.u64);
	// std r7,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r7.u64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// std r8,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r8.u64);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// bne cr6,0x82a086c4
	if (!ctx.cr6.eq) goto loc_82A086C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6b2c
	ctx.lr = 0x82A086C0;
	__restfpr_26(ctx, base);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82A086C4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a07da8
	ctx.lr = 0x82A086D4;
	sub_82A07DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// beq cr6,0x82a087e0
	if (ctx.cr6.eq) goto loc_82A087E0;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a08724
	if (ctx.cr6.eq) goto loc_82A08724;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// stw r10,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r10.u32);
	// stw r9,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r9.u32);
loc_82A08724:
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r26,r1,352
	ctx.r26.s64 = ctx.r1.s64 + 352;
	// addi r25,r1,128
	ctx.r25.s64 = ctx.r1.s64 + 128;
	// addi r24,r1,112
	ctx.r24.s64 = ctx.r1.s64 + 112;
	// bl 0x8298e210
	ctx.lr = 0x82A08740;
	sub_8298E210(ctx, base);
	// lwz r11,-31264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// ld r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x8276e728
	ctx.lr = 0x82A08774;
	sub_8276E728(ctx, base);
	// bl 0x829d95e0
	ctx.lr = 0x82A08778;
	sub_829D95E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a087e0
	if (ctx.cr6.eq) goto loc_82A087E0;
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r3,492(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// bl 0x82516720
	ctx.lr = 0x82A08790;
	sub_82516720(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,492(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// bl 0x82516518
	ctx.lr = 0x82A0879C;
	sub_82516518(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8260e1b0
	ctx.lr = 0x82A087B0;
	sub_8260E1B0(ctx, base);
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// lwz r3,492(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// bl 0x82651988
	ctx.lr = 0x82A087BC;
	sub_82651988(ctx, base);
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lwz r3,492(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// rlwinm r10,r11,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// rlwinm r10,r10,0,3,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r10,100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 100, ctx.r10.u32);
	// bl 0x82516af8
	ctx.lr = 0x82A087D4;
	sub_82516AF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,492(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// bl 0x82517c30
	ctx.lr = 0x82A087E0;
	sub_82517C30(ctx, base);
loc_82A087E0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f30,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82a0880c
	if (ctx.cr6.eq) goto loc_82A0880C;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// rldicr r5,r28,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// bl 0x82355e68
	ctx.lr = 0x82A0880C;
	sub_82355E68(ctx, base);
loc_82A0880C:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r29,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r29.u32);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a08af4
	if (ctx.cr6.eq) goto loc_82A08AF4;
	// lwz r11,-31264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a0883c
	if (ctx.cr6.gt) goto loc_82A0883C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82a08844
	goto loc_82A08844;
loc_82A0883C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A08844:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82A0884C;
	sub_8258A128(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08af4
	if (ctx.cr6.eq) goto loc_82A08AF4;
	// lwz r11,776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 776);
	// addi r31,r30,172
	ctx.r31.s64 = ctx.r30.s64 + 172;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a08870
	if (!ctx.cr6.eq) goto loc_82A08870;
	// addi r31,r30,108
	ctx.r31.s64 = ctx.r30.s64 + 108;
	// beq cr6,0x82a08878
	if (ctx.cr6.eq) goto loc_82A08878;
loc_82A08870:
	// lfs f31,240(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82a0887c
	goto loc_82A0887C;
loc_82A08878:
	// lfs f31,236(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f31.f64 = double(temp.f32);
loc_82A0887C:
	// lis r30,-31884
	ctx.r30.s64 = -2089549824;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r11,25344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25344);
	// lwz r10,744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82a08af4
	if (!ctx.cr6.gt) goto loc_82A08AF4;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f28,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f26.f64 = double(temp.f32);
	// lfs f29,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f29.f64 = double(temp.f32);
loc_82A088A8:
	// lwz r10,740(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 740);
	// lwzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a08ae0
	if (ctx.cr6.eq) goto loc_82A08AE0;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x829d9660
	ctx.lr = 0x82A088C4;
	sub_829D9660(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08adc
	if (ctx.cr6.eq) goto loc_82A08ADC;
	// lwz r11,492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a08adc
	if (ctx.cr6.eq) goto loc_82A08ADC;
	// lfs f13,244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// lfs f12,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f26,f13
	ctx.f13.f64 = double(float(ctx.f26.f64 - ctx.f13.f64));
	// lfs f11,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f27,f12
	ctx.f12.f64 = double(float(ctx.f27.f64 - ctx.f12.f64));
	// fsubs f11,f28,f11
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f11.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x82a08934
	if (!ctx.cr6.gt) goto loc_82A08934;
	// fmuls f0,f12,f12
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f11,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fdivs f0,f9,f31
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f31.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82a08adc
	if (ctx.cr6.lt) goto loc_82A08ADC;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x82a0892c
	if (ctx.cr6.lt) goto loc_82A0892C;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82a08934
	goto loc_82A08934;
loc_82A0892C:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82a08adc
	if (!ctx.cr6.gt) goto loc_82A08ADC;
loc_82A08934:
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1520(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1520);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f8,f10,f10
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,1516(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1516);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f4,1524(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1524);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r3,1516
	ctx.r10.s64 = ctx.r3.s64 + 1516;
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f2,f6,f6,f8
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fmadds f1,f9,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f13,f4,f4,f2
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f12,f5,f5,f1
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82a08a10
	if (!ctx.cr6.gt) goto loc_82A08A10;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lfs f7,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f6,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,1528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1528, ctx.r5.u32);
	// stw r4,1532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1532, ctx.r4.u32);
	// stw r6,1536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1536, ctx.r6.u32);
	// lfs f1,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,1540(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1540, temp.u32);
	// lfs f12,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,1544(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1544, temp.u32);
loc_82A08A10:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,1484
	ctx.r11.s64 = ctx.r3.s64 + 1484;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,1488(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1488);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,1484(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1484);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1492(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1492);
	ctx.f7.f64 = double(temp.f32);
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// fmr f5,f12
	ctx.f5.f64 = ctx.f12.f64;
	// fmadds f3,f8,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmr f4,f11
	ctx.f4.f64 = ctx.f11.f64;
	// fmuls f2,f6,f6
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f1,f7,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fmadds f10,f5,f5,f2
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f9,f4,f4,f10
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f1
	ctx.cr6.compare(ctx.f9.f64, ctx.f1.f64);
	// ble cr6,0x82a08adc
	if (!ctx.cr6.gt) goto loc_82A08ADC;
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f8,168(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f10,160(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r6,1496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1496, ctx.r6.u32);
	// stw r5,1504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1504, ctx.r5.u32);
	// stw r7,1500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1500, ctx.r7.u32);
	// lfs f7,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,1508(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1508, temp.u32);
	// lfs f5,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,1512(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1512, temp.u32);
loc_82A08ADC:
	// lwz r11,25344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25344);
loc_82A08AE0:
	// lwz r10,744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a088a8
	if (ctx.cr6.lt) goto loc_82A088A8;
loc_82A08AF4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6b2c
	ctx.lr = 0x82A08B04;
	__restfpr_26(ctx, base);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08B08"))) PPC_WEAK_FUNC(sub_82A08B08);
PPC_FUNC_IMPL(__imp__sub_82A08B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82A08B10;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82cb6abc
	ctx.lr = 0x82A08B18;
	__savefpr_17(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a08b40
	if (ctx.cr6.gt) goto loc_82A08B40;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x82a08b48
	goto loc_82A08B48;
loc_82A08B40:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A08B48:
	// bl 0x826f0218
	ctx.lr = 0x82A08B4C;
	sub_826F0218(ctx, base);
	// lwz r3,772(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 772);
	// bl 0x82a0d1c0
	ctx.lr = 0x82A08B54;
	sub_82A0D1C0(ctx, base);
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
	// bgt cr6,0x82a08b74
	if (ctx.cr6.gt) goto loc_82A08B74;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82a08b7c
	goto loc_82A08B7C;
loc_82A08B74:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A08B7C:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82A08B84;
	sub_8258A128(ctx, base);
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f0,1304(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1304);
	ctx.f0.f64 = double(temp.f32);
	// li r19,-1
	ctx.r19.s64 = -1;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// lfs f26,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f26.f64 = double(temp.f32);
	// lfs f13,15596(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15596);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// lwz r27,976(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 976);
	// srawi r8,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r27.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f30,f10,f13
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// ble cr6,0x82a08c08
	if (!ctx.cr6.gt) goto loc_82A08C08;
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stfs f12,1304(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1304, temp.u32);
	// lfs f13,-18280(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18280);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82a08c10
	goto loc_82A08C10;
loc_82A08C08:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,1304(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1304, temp.u32);
loc_82A08C10:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r25,r10,32548
	ctx.r25.s64 = ctx.r10.s64 + 32548;
	// lfs f28,544(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 544);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x82a08cd4
	if (ctx.cr6.eq) goto loc_82A08CD4;
	// lwz r11,712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a08cd4
	if (ctx.cr6.eq) goto loc_82A08CD4;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a08cd4
	if (ctx.cr6.eq) goto loc_82A08CD4;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82a08cd4
	if (!ctx.cr6.gt) goto loc_82A08CD4;
	// lis r29,-31882
	ctx.r29.s64 = -2089418752;
loc_82A08C58:
	// lwz r3,652(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A08C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82454470
	ctx.lr = 0x82A08C74;
	sub_82454470(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08cb4
	if (ctx.cr6.eq) goto loc_82A08CB4;
	// lfs f0,1304(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1304);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f30.f64));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x82a08c94
	if (!ctx.cr6.lt) goto loc_82A08C94;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x82a08ca0
	goto loc_82A08CA0;
loc_82A08C94:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82a08ca0
	if (ctx.cr6.lt) goto loc_82A08CA0;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
loc_82A08CA0:
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r4,1500(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 1500);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82A08CB4;
	sub_8244FC30(ctx, base);
loc_82A08CB4:
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,712(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,128(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82a08c58
	if (ctx.cr6.lt) goto loc_82A08C58;
loc_82A08CD4:
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x82a09014
	if (ctx.cr6.eq) goto loc_82A09014;
	// lwz r10,652(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// rlwinm r9,r28,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r20,1
	ctx.r20.s64 = 1;
	// subf r11,r9,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r9.s64;
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// addi r22,r11,-1
	ctx.r22.s64 = ctx.r11.s64 + -1;
	// lwz r8,960(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 960);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82a09008
	if (!ctx.cr6.gt) goto loc_82A09008;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f27,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// addi r29,r11,-22168
	ctx.r29.s64 = ctx.r11.s64 + -22168;
	// lfs f29,-17248(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17248);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,31564(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31564);
	ctx.f30.f64 = double(temp.f32);
loc_82A08D1C:
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// blt cr6,0x82a08fec
	if (ctx.cr6.lt) goto loc_82A08FEC;
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// lwz r10,936(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82a08fec
	if (!ctx.cr6.gt) goto loc_82A08FEC;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_82A08D44:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82a08fec
	if (!ctx.cr6.eq) goto loc_82A08FEC;
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lwz r11,932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x82a08fd4
	if (!ctx.cr6.eq) goto loc_82A08FD4;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x82a08fd4
	if (ctx.cr6.lt) goto loc_82A08FD4;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,1340(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1340);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a095d0
	ctx.lr = 0x82A08D88;
	sub_82A095D0(ctx, base);
	// addi r11,r22,-1
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// lwz r10,696(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 696);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f29
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// ble cr6,0x82a08fd4
	if (!ctx.cr6.gt) goto loc_82A08FD4;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_82A08DBC:
	// lwz r11,692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a08fc0
	if (ctx.cr6.eq) goto loc_82A08FC0;
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a08fc0
	if (ctx.cr6.eq) goto loc_82A08FC0;
	// lbz r11,876(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 876);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82a08fc0
	if (!ctx.cr6.eq) goto loc_82A08FC0;
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lfs f0,400(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,396(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 396);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,404(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 404);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f13,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f5,f8,f12,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fadds f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fcmpu cr6,f4,f31
	ctx.cr6.compare(ctx.f4.f64, ctx.f31.f64);
	// blt cr6,0x82a08fc0
	if (ctx.cr6.lt) goto loc_82A08FC0;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f0,340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lfs f13,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// addi r7,r11,16384
	ctx.r7.s64 = ctx.r11.s64 + 16384;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// srawi r6,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 2;
	// lfs f9,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r10,16384
	ctx.r5.s64 = ctx.r10.s64 + 16384;
	// lfs f11,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f11.f64 = double(temp.f32);
	// srawi r4,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// addi r3,r9,16384
	ctx.r3.s64 = ctx.r9.s64 + 16384;
	// lfs f10,356(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f10.f64 = double(temp.f32);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lfs f7,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f7.f64 = double(temp.f32);
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// lfs f6,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f6.f64 = double(temp.f32);
	// srawi r9,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// rlwinm r7,r10,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// rlwinm r5,r9,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// lfs f2,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r8,r8,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// fmuls f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f3,f10,f12
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// rlwinm r3,r11,2,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// rlwinm r11,r6,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// lfs f5,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f0,r7,r29
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f7,f8
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfsx f11,r5,r29
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfsx f1,r8,r29
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f22,f11,f0
	ctx.f22.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f12,f11,f1
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfsx f25,r3,r29
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	ctx.f25.f64 = double(temp.f32);
	// lfsx f23,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f17,f0,f25
	ctx.f17.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// rlwinm r10,r4,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFC;
	// fmuls f24,f11,f25
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// lwz r4,1380(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1380);
	// fmuls f20,f23,f1
	ctx.f20.f64 = double(float(ctx.f23.f64 * ctx.f1.f64));
	// li r9,1
	ctx.r9.s64 = 1;
	// fmuls f0,f3,f23
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f23.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r8,r24,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u64, 32) & 0xFFFFFFFF00000000;
	// lfsx f21,r10,r29
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fnmsubs f6,f3,f22,f6
	ctx.f6.f64 = double(float(-(ctx.f3.f64 * ctx.f22.f64 - ctx.f6.f64)));
	// fmuls f9,f12,f4
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f19,f21,f23
	ctx.f19.f64 = double(float(ctx.f21.f64 * ctx.f23.f64));
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fmuls f12,f4,f24
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f24.f64));
	// fmuls f3,f20,f13
	ctx.f3.f64 = double(float(ctx.f20.f64 * ctx.f13.f64));
	// fmadds f7,f4,f17,f0
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f17.f64 + ctx.f0.f64));
	// fmuls f18,f21,f1
	ctx.f18.f64 = double(float(ctx.f21.f64 * ctx.f1.f64));
	// fmuls f20,f21,f25
	ctx.f20.f64 = double(float(ctx.f21.f64 * ctx.f25.f64));
	// fmadds f0,f10,f21,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f21.f64 + ctx.f9.f64));
	// fmuls f22,f4,f19
	ctx.f22.f64 = double(float(ctx.f4.f64 * ctx.f19.f64));
	// fmadds f12,f12,f23,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f23.f64 + ctx.f6.f64));
	// fnmsubs f10,f8,f1,f7
	ctx.f10.f64 = double(float(-(ctx.f8.f64 * ctx.f1.f64 - ctx.f7.f64)));
	// fmuls f19,f13,f18
	ctx.f19.f64 = double(float(ctx.f13.f64 * ctx.f18.f64));
	// fmadds f9,f13,f24,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f24.f64 + ctx.f0.f64));
	// fnmsubs f8,f3,f11,f12
	ctx.f8.f64 = double(float(-(ctx.f3.f64 * ctx.f11.f64 - ctx.f12.f64)));
	// fsubs f7,f2,f10
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fnmsubs f6,f22,f25,f9
	ctx.f6.f64 = double(float(-(ctx.f22.f64 * ctx.f25.f64 - ctx.f9.f64)));
	// fmadds f3,f20,f13,f8
	ctx.f3.f64 = double(float(ctx.f20.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f2,f19,f23,f6
	ctx.f2.f64 = double(float(ctx.f19.f64 * ctx.f23.f64 + ctx.f6.f64));
	// fmadds f1,f4,f18,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f18.f64 + ctx.f3.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f5,f2
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r6,r6,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82a08678
	ctx.lr = 0x82A08F6C;
	sub_82A08678(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08f90
	if (ctx.cr6.eq) goto loc_82A08F90;
	// lwz r11,496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// stfs f27,164(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lwz r10,504(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// rlwinm r8,r10,0,3,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r9,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r9.u32);
	// stw r8,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r8.u32);
loc_82A08F90:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r19,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r19.u32);
	// oris r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 268435456;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bl 0x8260ab50
	ctx.lr = 0x82A08FA8;
	sub_8260AB50(ctx, base);
	// lwz r9,844(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82a08fc0
	if (!ctx.cr6.eq) goto loc_82A08FC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e1928
	ctx.lr = 0x82A08FC0;
	sub_829E1928(ctx, base);
loc_82A08FC0:
	// lwz r11,696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 696);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a08dbc
	if (ctx.cr6.lt) goto loc_82A08DBC;
loc_82A08FD4:
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r26,r26,20
	ctx.r26.s64 = ctx.r26.s64 + 20;
	// lwz r10,936(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a08d44
	if (ctx.cr6.lt) goto loc_82A08D44;
loc_82A08FEC:
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// cmpw cr6,r21,r10
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a08d1c
	if (ctx.cr6.lt) goto loc_82A08D1C;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82a09014
	if (ctx.cr6.eq) goto loc_82A09014;
loc_82A09008:
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f26,1304(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1304, temp.u32);
	// stb r11,649(r30)
	PPC_STORE_U8(ctx.r30.u32 + 649, ctx.r11.u8);
loc_82A09014:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82cb6b08
	ctx.lr = 0x82A09020;
	__restfpr_17(ctx, base);
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A09024"))) PPC_WEAK_FUNC(sub_82A09024);
PPC_FUNC_IMPL(__imp__sub_82A09024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09028"))) PPC_WEAK_FUNC(sub_82A09028);
PPC_FUNC_IMPL(__imp__sub_82A09028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82A09030;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82cb6acc
	ctx.lr = 0x82A09038;
	__savefpr_21(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a09068
	if (ctx.cr6.gt) goto loc_82A09068;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82a09070
	goto loc_82A09070;
loc_82A09068:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A09070:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82A09078;
	sub_8258A128(ctx, base);
	// lfs f13,1304(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1304);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fadds f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f12,1304(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1304, temp.u32);
	// lfs f0,26252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26252);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82a095c0
	if (!ctx.cr6.gt) goto loc_82A095C0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r25,r11,32548
	ctx.r25.s64 = ctx.r11.s64 + 32548;
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f28,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x82a0938c
	if (ctx.cr6.eq) goto loc_82A0938C;
	// lwz r11,712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// lfs f30,544(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 544);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a09140
	if (ctx.cr6.eq) goto loc_82A09140;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a09140
	if (ctx.cr6.eq) goto loc_82A09140;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82a09140
	if (!ctx.cr6.gt) goto loc_82A09140;
	// lis r29,-31882
	ctx.r29.s64 = -2089418752;
loc_82A090E8:
	// lwz r3,652(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A09100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82454470
	ctx.lr = 0x82A09104;
	sub_82454470(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a09120
	if (ctx.cr6.eq) goto loc_82A09120;
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r4,1500(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 1500);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82A09120;
	sub_8244FC30(ctx, base);
loc_82A09120:
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,712(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,128(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82a090e8
	if (ctx.cr6.lt) goto loc_82A090E8;
loc_82A09140:
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82a09220
	if (!ctx.cr6.gt) goto loc_82A09220;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// lfs f31,31564(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31564);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,-15760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15760);
	ctx.f29.f64 = double(temp.f32);
loc_82A09168:
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lwz r10,956(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 956);
	// lwzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82a09208
	if (!ctx.cr6.lt) goto loc_82A09208;
	// lwz r11,936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a09208
	if (!ctx.cr6.gt) goto loc_82A09208;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82A09190:
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lwz r10,932(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82a091f0
	if (!ctx.cr6.eq) goto loc_82A091F0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,944(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 944);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 920);
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mulli r11,r7,44
	ctx.r11.s64 = ctx.r7.s64 * 44;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bgt cr6,0x82a091f0
	if (ctx.cr6.gt) goto loc_82A091F0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,1352(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1352);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a095d0
	ctx.lr = 0x82A091E8;
	sub_82A095D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a09208
	if (!ctx.cr6.eq) goto loc_82A09208;
loc_82A091F0:
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// lwz r10,936(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a09190
	if (ctx.cr6.lt) goto loc_82A09190;
loc_82A09208:
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a09168
	if (ctx.cr6.lt) goto loc_82A09168;
loc_82A09220:
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lwz r10,400(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// lfs f10,116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,404(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// lfs f11,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lwz r8,396(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// lfs f9,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f7.f64 = double(temp.f32);
	// lwz r7,976(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 976);
	// lfs f8,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f5,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f11,f13
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f1,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f10,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f7,f12,f6
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f6.f64));
	// lfs f3,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// lfs f9,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f7,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f8,f12,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f2,f5,f12,f2
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmadds f1,f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f0,f0,f3,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fmadds f13,f10,f13,f2
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fadds f12,f1,f7
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f10,f13,f6
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// blt cr6,0x82a0938c
	if (ctx.cr6.lt) goto loc_82A0938C;
	// lwz r11,708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// ble cr6,0x82a092f4
	if (!ctx.cr6.gt) goto loc_82A092F4;
	// lwz r11,704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rldicr r5,r31,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82355e68
	ctx.lr = 0x82A092F4;
	sub_82355E68(ctx, base);
loc_82A092F4:
	// lwz r3,716(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 716);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0938c
	if (ctx.cr6.eq) goto loc_82A0938C;
	// lwz r11,708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x82a0938c
	if (!ctx.cr6.gt) goto loc_82A0938C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,704(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// lwz r9,332(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r4,64(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A09328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f28,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f28,112(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rldicr r7,r3,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,716(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 716);
	// stfs f28,108(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rldicr r9,r6,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f28,92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stfs f28,104(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rldicr r5,r31,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A09374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,716(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 716);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,336(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 336);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A0938C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0938C:
	// lwz r11,696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 696);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a095b4
	if (!ctx.cr6.gt) goto loc_82A095B4;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lfs f31,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// lis r27,-31882
	ctx.r27.s64 = -2089418752;
	// addi r29,r11,-22168
	ctx.r29.s64 = ctx.r11.s64 + -22168;
loc_82A093B4:
	// lwz r11,692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a095a0
	if (ctx.cr6.eq) goto loc_82A095A0;
	// lwz r11,888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82a095a0
	if (ctx.cr6.lt) goto loc_82A095A0;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f0,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lfs f13,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// addi r7,r11,16384
	ctx.r7.s64 = ctx.r11.s64 + 16384;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// srawi r6,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 2;
	// lfs f9,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r10,16384
	ctx.r5.s64 = ctx.r10.s64 + 16384;
	// lfs f11,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f11.f64 = double(temp.f32);
	// srawi r4,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// addi r3,r9,16384
	ctx.r3.s64 = ctx.r9.s64 + 16384;
	// lfs f10,356(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f10.f64 = double(temp.f32);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lfs f7,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f7.f64 = double(temp.f32);
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// lfs f6,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f6.f64 = double(temp.f32);
	// srawi r9,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// rlwinm r7,r10,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// rlwinm r5,r9,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// lfs f2,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r8,r8,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// fmuls f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f3,f12,f10
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// rlwinm r3,r11,2,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// rlwinm r4,r4,2,16,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFC;
	// lfs f5,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f0,r7,r29
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r6,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// lfsx f11,r5,r29
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfsx f1,r8,r29
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f27,f11,f0
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f12,f11,f1
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfsx f29,r3,r29
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	ctx.f29.f64 = double(temp.f32);
	// lfsx f30,r4,r29
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f26,f11,f29
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// lfsx f25,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f13,f8,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lwz r4,1380(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1380);
	// fmuls f24,f30,f25
	ctx.f24.f64 = double(float(ctx.f30.f64 * ctx.f25.f64));
	// li r9,1
	ctx.r9.s64 = 1;
	// fmuls f21,f3,f25
	ctx.f21.f64 = double(float(ctx.f3.f64 * ctx.f25.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// rldicr r8,r24,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u64, 32) & 0xFFFFFFFF00000000;
	// fmuls f23,f25,f1
	ctx.f23.f64 = double(float(ctx.f25.f64 * ctx.f1.f64));
	// fmuls f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fnmsubs f6,f3,f27,f6
	ctx.f6.f64 = double(float(-(ctx.f3.f64 * ctx.f27.f64 - ctx.f6.f64)));
	// fmuls f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f3,f4,f26
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f26.f64));
	// fmuls f22,f30,f1
	ctx.f22.f64 = double(float(ctx.f30.f64 * ctx.f1.f64));
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fmuls f1,f8,f1
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f27,f4,f24
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f24.f64));
	// fmuls f30,f29,f30
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// fmadds f0,f4,f0,f21
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f21.f64));
	// fmuls f24,f23,f13
	ctx.f24.f64 = double(float(ctx.f23.f64 * ctx.f13.f64));
	// fmadds f12,f9,f10,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f10,f3,f25,f6
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f25.f64 + ctx.f6.f64));
	// fmuls f23,f13,f22
	ctx.f23.f64 = double(float(ctx.f13.f64 * ctx.f22.f64));
	// fnmsubs f9,f1,f7,f0
	ctx.f9.f64 = double(float(-(ctx.f1.f64 * ctx.f7.f64 - ctx.f0.f64)));
	// fmadds f8,f13,f26,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f26.f64 + ctx.f12.f64));
	// fnmsubs f7,f24,f11,f10
	ctx.f7.f64 = double(float(-(ctx.f24.f64 * ctx.f11.f64 - ctx.f10.f64)));
	// fsubs f6,f2,f9
	ctx.f6.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fnmsubs f3,f27,f29,f8
	ctx.f3.f64 = double(float(-(ctx.f27.f64 * ctx.f29.f64 - ctx.f8.f64)));
	// fmadds f2,f30,f13,f7
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f1,f23,f25,f3
	ctx.f1.f64 = double(float(ctx.f23.f64 * ctx.f25.f64 + ctx.f3.f64));
	// fmadds f0,f4,f22,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f22.f64 + ctx.f2.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f13,f5,f1
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82a08678
	ctx.lr = 0x82A09520;
	sub_82A08678(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a09544
	if (ctx.cr6.eq) goto loc_82A09544;
	// lwz r11,496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// stfs f31,164(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lwz r10,504(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// rlwinm r8,r10,0,3,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r9,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r9.u32);
	// stw r8,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r8.u32);
loc_82A09544:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r25.u32);
	// oris r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 268435456;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bl 0x8260ab50
	ctx.lr = 0x82A0955C;
	sub_8260AB50(ctx, base);
	// lwz r9,844(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82a095a0
	if (!ctx.cr6.eq) goto loc_82A095A0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-3100(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + -3100);
	// addi r22,r1,80
	ctx.r22.s64 = ctx.r1.s64 + 80;
	// lwz r23,0(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229e490
	ctx.lr = 0x82A09584;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,228(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A095A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A095A0:
	// lwz r11,696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 696);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a093b4
	if (ctx.cr6.lt) goto loc_82A093B4;
loc_82A095B4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f28,1304(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1304, temp.u32);
	// stb r11,649(r30)
	PPC_STORE_U8(ctx.r30.u32 + 649, ctx.r11.u8);
loc_82A095C0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82cb6b18
	ctx.lr = 0x82A095CC;
	__restfpr_21(ctx, base);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A095D0"))) PPC_WEAK_FUNC(sub_82A095D0);
PPC_FUNC_IMPL(__imp__sub_82A095D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82A095D8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ab0
	ctx.lr = 0x82A095E0;
	__savefpr_14(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// stfs f1,668(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 668, temp.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r5.u32);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// li r15,0
	ctx.r15.s64 = 0;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a09620
	if (ctx.cr6.gt) goto loc_82A09620;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// b 0x82a09628
	goto loc_82A09628;
loc_82A09620:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A09628:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82A09630;
	sub_8258A128(ctx, base);
	// lis r29,-31884
	ctx.r29.s64 = -2089549824;
	// stw r15,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r15.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// mr r22,r15
	ctx.r22.u64 = ctx.r15.u64;
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// lwz r11,25344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25344);
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// lfs f29,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f29.f64 = double(temp.f32);
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stfs f29,172(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r22,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r22.u32);
	// lwz r9,744(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82a09730
	if (!ctx.cr6.gt) goto loc_82A09730;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// lfs f31,-18108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18108);
	ctx.f31.f64 = double(temp.f32);
loc_82A0967C:
	// lwz r10,740(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 740);
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a0971c
	if (ctx.cr6.eq) goto loc_82A0971C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,760(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 760);
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r7,r11,16384
	ctx.r7.s64 = ctx.r11.s64 + 16384;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// bl 0x823d7698
	ctx.lr = 0x82A096C4;
	sub_823D7698(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x823d6ef0
	ctx.lr = 0x82A096EC;
	sub_823D6EF0(ctx, base);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r27,196(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r27,r11
	ctx.r3.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// stfs f29,-4(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// bl 0x82382590
	ctx.lr = 0x82A09714;
	sub_82382590(ctx, base);
	// lwz r11,25344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25344);
	// lwz r24,192(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_82A0971C:
	// lwz r10,744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a0967c
	if (ctx.cr6.lt) goto loc_82A0967C;
loc_82A09730:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// mr r14,r15
	ctx.r14.u64 = ctx.r15.u64;
	// mr r20,r15
	ctx.r20.u64 = ctx.r15.u64;
	// stw r15,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// mr r21,r15
	ctx.r21.u64 = ctx.r15.u64;
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// stw r15,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r15.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// ble cr6,0x82a09780
	if (!ctx.cr6.gt) goto loc_82A09780;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294520
	ctx.lr = 0x82A09774;
	sub_82294520(ctx, base);
	// lwz r25,104(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r20,100(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r14,96(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82A09780:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a097a4
	if (!ctx.cr6.gt) goto loc_82A097A4;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294520
	ctx.lr = 0x82A097A0;
	sub_82294520(ctx, base);
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82A097A4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,4(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lis r19,-31885
	ctx.r19.s64 = -2089615360;
	// addi r18,r11,-27768
	ctx.r18.s64 = ctx.r11.s64 + -27768;
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f28,-5964(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + -5964);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,-4676(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + -4676);
	ctx.f31.f64 = double(temp.f32);
	// stfs f28,164(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ble cr6,0x82a09988
	if (!ctx.cr6.gt) goto loc_82A09988;
loc_82A097CC:
	// lwz r7,652(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r5,944(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 944);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,920(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 920);
	// lfs f0,144(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,128(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lwzx r28,r4,r5
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// lfs f10,116(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// mulli r8,r28,44
	ctx.r8.s64 = ctx.r28.s64 * 44;
	// lfs f8,112(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,152(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,160(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 160);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,164(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 164);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f27,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmadds f11,f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fmadds f10,f10,f27,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f27.f64 + ctx.f13.f64));
	// fmadds f9,f9,f27,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f27.f64 + ctx.f12.f64));
	// fmadds f8,f8,f27,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f27.f64 + ctx.f11.f64));
	// fmadds f7,f7,f2,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fmadds f6,f6,f2,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f9.f64));
	// fmadds f0,f5,f29,f8
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 + ctx.f8.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f13,f4,f29,f7
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 + ctx.f7.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f12,f3,f29,f6
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f29.f64 + ctx.f6.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ble cr6,0x82a09974
	if (!ctx.cr6.gt) goto loc_82A09974;
	// addi r11,r24,4
	ctx.r11.s64 = ctx.r24.s64 + 4;
loc_82A0987C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a098cc
	if (!ctx.cr6.eq) goto loc_82A098CC;
	// lfs f11,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f30,f31
	ctx.f10.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f8,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fmuls f6,f10,f28
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// fmadds f5,f8,f0,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f6
	ctx.cr6.compare(ctx.f4.f64, ctx.f6.f64);
	// ble cr6,0x82a098b4
	if (!ctx.cr6.gt) goto loc_82A098B4;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
loc_82A098B4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82a0987c
	if (ctx.cr6.lt) goto loc_82A0987C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a09974
	if (ctx.cr6.eq) goto loc_82A09974;
loc_82A098CC:
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lwz r11,920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 920);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a09974
	if (ctx.cr6.eq) goto loc_82A09974;
	// addi r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 1;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x82a09954
	if (!ctx.cr6.gt) goto loc_82A09954;
	// addi r10,r11,31
	ctx.r10.s64 = ctx.r11.s64 + 31;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r25,r8,5,0,26
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// bne cr6,0x82a09918
	if (!ctx.cr6.eq) goto loc_82A09918;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82a09958
	if (ctx.cr6.eq) goto loc_82A09958;
loc_82A09918:
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// rlwinm r31,r25,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a09930
	if (!ctx.cr6.eq) goto loc_82A09930;
	// bl 0x822900a0
	ctx.lr = 0x82A0992C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82A09930:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0994C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// b 0x82a09958
	goto loc_82A09958;
loc_82A09954:
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_82A09958:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a09968
	if (ctx.cr0.eq) goto loc_82A09968;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_82A09968:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823d6ef0
	ctx.lr = 0x82A09974;
	sub_823D6EF0(ctx, base);
loc_82A09974:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a097cc
	if (ctx.cr6.lt) goto loc_82A097CC;
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82A09988:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-25504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25504);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82a099a4
	if (!ctx.cr6.gt) goto loc_82A099A4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,-16672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16672);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82a099b4
	goto loc_82A099B4;
loc_82A099A4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82a099b4
	if (!ctx.cr6.gt) goto loc_82A099B4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,-15852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15852);
	ctx.f31.f64 = double(temp.f32);
loc_82A099B4:
	// fmuls f12,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stfs f29,140(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r8,r10,-18304
	ctx.r8.s64 = ctx.r10.s64 + -18304;
	// stw r15,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r15.u32);
	// stw r15,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r15.u32);
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// lfs f0,32428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32428);
	ctx.f0.f64 = double(temp.f32);
	// stw r15,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r15.u32);
	// lfs f13,-15856(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15856);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
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
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f10,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f9,f10,f12,f0
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fdivs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// fmuls f7,f8,f8
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// stfs f7,208(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// ble cr6,0x82a09e20
	if (!ctx.cr6.gt) goto loc_82A09E20;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lfs f0,-5220(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + -5220);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-1240(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + -1240);
	ctx.f13.f64 = double(temp.f32);
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r28,r11,-22168
	ctx.r28.s64 = ctx.r11.s64 + -22168;
loc_82A09A3C:
	// lwz r10,652(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mulli r11,r9,44
	ctx.r11.s64 = ctx.r9.s64 * 44;
	// lwz r10,920(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 920);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// beq cr6,0x82a09a9c
	if (ctx.cr6.eq) goto loc_82A09A9C;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f8
	ctx.cr6.compare(ctx.f6.f64, ctx.f8.f64);
	// blt cr6,0x82a09e04
	if (ctx.cr6.lt) goto loc_82A09E04;
loc_82A09A9C:
	// lwz r10,264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lfs f0,340(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,256(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// lfs f12,344(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,260(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// srawi r7,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 2;
	// addi r6,r10,16384
	ctx.r6.s64 = ctx.r10.s64 + 16384;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// srawi r5,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// lfs f13,348(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r9,16384
	ctx.r4.s64 = ctx.r9.s64 + 16384;
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// srawi r3,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 2;
	// lfs f8,364(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r8,16384
	ctx.r10.s64 = ctx.r8.s64 + 16384;
	// lfs f7,352(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	ctx.f7.f64 = double(temp.f32);
	// srawi r9,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// srawi r8,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 2;
	// lfs f9,356(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	ctx.f9.f64 = double(temp.f32);
	// srawi r6,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 2;
	// lfs f27,360(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	ctx.f27.f64 = double(temp.f32);
	// rlwinm r4,r7,2,16,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// lfs f6,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r7,r3,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,2,16,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// fmuls f4,f8,f11
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// rlwinm r6,r6,2,16,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// fmuls f3,f9,f11
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// rlwinm r5,r5,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// lfsx f2,r4,r28
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r7,r28
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfsx f8,r9,r28
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f1,f2
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// lfsx f31,r6,r28
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f8,f1
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// lfsx f29,r5,r28
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f28,f31,f8
	ctx.f28.f64 = double(float(ctx.f31.f64 * ctx.f8.f64));
	// lfsx f0,r8,r28
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f31,f2
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f2.f64));
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f27,124(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f22,f10,f0
	ctx.f22.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// li r7,1
	ctx.r7.s64 = 1;
	// fmuls f26,f1,f29
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// fmuls f24,f29,f2
	ctx.f24.f64 = double(float(ctx.f29.f64 * ctx.f2.f64));
	// lfs f25,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f21,f11,f0
	ctx.f21.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f23,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f20,f0,f8
	ctx.f20.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// fmuls f0,f27,f10
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f10.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f27,f11,f29
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// fmadds f0,f28,f29,f7
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 + ctx.f7.f64));
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// fmadds f19,f7,f29,f28
	ctx.f19.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f28.f64));
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// fnmsubs f6,f3,f12,f6
	ctx.f6.f64 = double(float(-(ctx.f3.f64 * ctx.f12.f64 - ctx.f6.f64)));
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmuls f18,f4,f28
	ctx.f18.f64 = double(float(ctx.f4.f64 * ctx.f28.f64));
	// fnmsubs f17,f26,f8,f13
	ctx.f17.f64 = double(float(-(ctx.f26.f64 * ctx.f8.f64 - ctx.f13.f64)));
	// fmsubs f16,f24,f31,f30
	ctx.f16.f64 = double(float(ctx.f24.f64 * ctx.f31.f64 - ctx.f30.f64));
	// fmuls f15,f22,f2
	ctx.f15.f64 = double(float(ctx.f22.f64 * ctx.f2.f64));
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f14,f21,f1
	ctx.f14.f64 = double(float(ctx.f21.f64 * ctx.f1.f64));
	// fmuls f12,f20,f5
	ctx.f12.f64 = double(float(ctx.f20.f64 * ctx.f5.f64));
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f19,f19,f10
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f10.f64));
	// fmuls f9,f9,f21
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f21.f64));
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f5,f17,f5
	ctx.f5.f64 = double(float(ctx.f17.f64 * ctx.f5.f64));
	// fmuls f10,f16,f10
	ctx.f10.f64 = double(float(ctx.f16.f64 * ctx.f10.f64));
	// fneg f21,f15
	ctx.f21.u64 = ctx.f15.u64 ^ 0x8000000000000000;
	// fmadds f6,f18,f29,f6
	ctx.f6.f64 = double(float(ctx.f18.f64 * ctx.f29.f64 + ctx.f6.f64));
	// fmadds f1,f9,f1,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f13.f64));
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f24,f24,f9
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f9.f64));
	// lfs f18,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f18.f64 = double(temp.f32);
	// fneg f18,f18
	ctx.f18.u64 = ctx.f18.u64 ^ 0x8000000000000000;
	// fmuls f3,f3,f29
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f29.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f9,f28,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f1.f64));
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f4,f26
	ctx.f26.f64 = double(float(ctx.f4.f64 * ctx.f26.f64));
	// lfs f17,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f17.f64 = double(temp.f32);
	// fnmsubs f6,f24,f31,f6
	ctx.f6.f64 = double(float(-(ctx.f24.f64 * ctx.f31.f64 - ctx.f6.f64)));
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f31,f18,f0
	ctx.f31.f64 = double(float(ctx.f18.f64 * ctx.f0.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f19,f19,f13
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f13.f64));
	// lfs f28,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f21,f21,f13
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f13.f64));
	// fmuls f22,f17,f22
	ctx.f22.f64 = double(float(ctx.f17.f64 * ctx.f22.f64));
	// fmuls f16,f9,f7
	ctx.f16.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmadds f3,f4,f20,f3
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f20.f64 + ctx.f3.f64));
	// fnmsubs f8,f26,f8,f1
	ctx.f8.f64 = double(float(-(ctx.f26.f64 * ctx.f8.f64 - ctx.f1.f64)));
	// fmadds f6,f30,f9,f6
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f1,f11,f12,f31
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f31.f64));
	// fmadds f5,f5,f0,f19
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f19.f64));
	// fmadds f0,f28,f0,f21
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f21.f64));
	// fnmsubs f11,f22,f2,f3
	ctx.f11.f64 = double(float(-(ctx.f22.f64 * ctx.f2.f64 - ctx.f3.f64)));
	// fmadds f3,f16,f29,f8
	ctx.f3.f64 = double(float(ctx.f16.f64 * ctx.f29.f64 + ctx.f8.f64));
	// fmadds f9,f14,f12,f5
	ctx.f9.f64 = double(float(ctx.f14.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f5,f27,f12,f0
	ctx.f5.f64 = double(float(ctx.f27.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f1,f10,f13,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f2,f4,f7,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fsubs f0,f23,f11
	ctx.f0.f64 = double(float(ctx.f23.f64 - ctx.f11.f64));
	// fsubs f13,f25,f3
	ctx.f13.f64 = double(float(ctx.f25.f64 - ctx.f3.f64));
	// fadds f12,f1,f2
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f11,f5,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f10,f9,f13
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x823d27f0
	ctx.lr = 0x82A09C88;
	sub_823D27F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r27,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r4,660(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82a08678
	ctx.lr = 0x82A09CB4;
	sub_82A08678(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a09dfc
	if (ctx.cr6.eq) goto loc_82A09DFC;
	// lwz r11,496(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 496);
	// lfs f0,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,504(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 504);
	// stfs f0,164(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 164, temp.u32);
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// rlwinm r8,r10,0,3,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r9,496(r29)
	PPC_STORE_U32(ctx.r29.u32 + 496, ctx.r9.u32);
	// addi r31,r30,1292
	ctx.r31.s64 = ctx.r30.s64 + 1292;
	// stw r8,504(r29)
	PPC_STORE_U32(ctx.r29.u32 + 504, ctx.r8.u32);
	// lwz r7,1300(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1300);
	// lwz r10,1296(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1296);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82a09d6c
	if (!ctx.cr6.gt) goto loc_82A09D6C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r25,0(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bne cr6,0x82a09d28
	if (!ctx.cr6.eq) goto loc_82A09D28;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a09d6c
	if (ctx.cr6.eq) goto loc_82A09D6C;
loc_82A09D28:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x82a09d4c
	if (!ctx.cr6.eq) goto loc_82A09D4C;
	// bl 0x822900a0
	ctx.lr = 0x82A09D48;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82A09D4C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A09D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82A09D6C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,668(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r29,-20(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r8.u32);
	// stw r7,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r7.u32);
	// stw r27,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r27.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f0,-4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + -4, temp.u32);
	// beq cr6,0x82a09dfc
	if (ctx.cr6.eq) goto loc_82A09DFC;
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r8.u32);
	// stfs f0,236(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r7,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r7.u32);
	// stw r27,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r27.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8268ec78
	ctx.lr = 0x82A09DFC;
	sub_8268EC78(ctx, base);
loc_82A09DFC:
	// lfs f29,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f28.f64 = double(temp.f32);
loc_82A09E04:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// addi r24,r24,12
	ctx.r24.s64 = ctx.r24.s64 + 12;
	// cmpw cr6,r23,r20
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82a09a3c
	if (ctx.cr6.lt) goto loc_82A09A3C;
	// lwz r24,192(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r22,168(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
loc_82A09E20:
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a09eb0
	if (ctx.cr6.eq) goto loc_82A09EB0;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82a09eb0
	if (ctx.cr6.eq) goto loc_82A09EB0;
	// stw r15,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r15.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r15,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r15.u32);
	// lfs f1,0(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stw r15,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r15.u32);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A09E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a09ea4
	if (ctx.cr6.eq) goto loc_82A09EA4;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a09e90
	if (!ctx.cr6.eq) goto loc_82A09E90;
	// bl 0x822900a0
	ctx.lr = 0x82A09E8C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82A09E90:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A09EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A09EA4:
	// stw r15,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r15.u32);
	// stw r15,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r15.u32);
	// stw r15,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r15.u32);
loc_82A09EB0:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82a0a018
	if (ctx.cr6.eq) goto loc_82A0A018;
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r9,16(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r8,708(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// cmpwi cr6,r8,11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 11, ctx.xer);
	// lfs f0,400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfs f13,416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f3,396(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f6,f10,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f8.f64));
	// lfs f6,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f5,f10,f7
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f7.f64));
	// lfs f7,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,-17248(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17248);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f11.f64));
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fmadds f2,f3,f2,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f8.f64));
	// fmadds f1,f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fmadds f13,f13,f3,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f6.f64));
	// fadds f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f11,f1,f9
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcfid f9,f4
	ctx.f9.f64 = double(ctx.f4.s64);
	// fadds f10,f13,f7
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// ld r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmadds f7,f8,f0,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ble cr6,0x82a09fb0
	if (!ctx.cr6.gt) goto loc_82A09FB0;
	// lwz r11,704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rldicr r5,r31,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82355e68
	ctx.lr = 0x82A09FB0;
	sub_82355E68(ctx, base);
loc_82A09FB0:
	// lbz r10,648(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 648);
	// lwz r11,644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 644);
	// lwz r9,708(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82a09fec
	if (!ctx.cr6.lt) goto loc_82A09FEC;
	// lwz r10,704(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rldicr r5,r31,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82355e68
	ctx.lr = 0x82A09FEC;
	sub_82355E68(ctx, base);
loc_82A09FEC:
	// lwz r11,708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x82a0a018
	if (!ctx.cr6.gt) goto loc_82A0A018;
	// lwz r11,704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rldicr r5,r31,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x82355e68
	ctx.lr = 0x82A0A018;
	sub_82355E68(ctx, base);
loc_82A0A018:
	// lwz r31,152(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a0a04c
	if (ctx.cr6.eq) goto loc_82A0A04C;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0a038
	if (!ctx.cr6.eq) goto loc_82A0A038;
	// bl 0x822900a0
	ctx.lr = 0x82A0A034;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82A0A038:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0A04C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0A04C:
	// stw r15,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r15.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r15,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r15.u32);
	// stw r15,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r15.u32);
	// beq cr6,0x82a0a088
	if (ctx.cr6.eq) goto loc_82A0A088;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0a074
	if (!ctx.cr6.eq) goto loc_82A0A074;
	// bl 0x822900a0
	ctx.lr = 0x82A0A070;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82A0A074:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0A088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0A088:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82a0a0b8
	if (ctx.cr6.eq) goto loc_82A0A0B8;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0a0a4
	if (!ctx.cr6.eq) goto loc_82A0A0A4;
	// bl 0x822900a0
	ctx.lr = 0x82A0A0A0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82A0A0A4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0A0B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0A0B8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a0a0e8
	if (ctx.cr6.eq) goto loc_82A0A0E8;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0a0d4
	if (!ctx.cr6.eq) goto loc_82A0A0D4;
	// bl 0x822900a0
	ctx.lr = 0x82A0A0D0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82A0A0D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0A0E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0A0E8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6afc
	ctx.lr = 0x82A0A0F8;
	__restfpr_14(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A0FC"))) PPC_WEAK_FUNC(sub_82A0A0FC);
PPC_FUNC_IMPL(__imp__sub_82A0A0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0A100"))) PPC_WEAK_FUNC(sub_82A0A100);
PPC_FUNC_IMPL(__imp__sub_82A0A100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0A104"))) PPC_WEAK_FUNC(sub_82A0A104);
PPC_FUNC_IMPL(__imp__sub_82A0A104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0A108"))) PPC_WEAK_FUNC(sub_82A0A108);
PPC_FUNC_IMPL(__imp__sub_82A0A108) {
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
	// lwz r10,652(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 652);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,712(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 712);
	// lfs f0,21152(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-15816(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15816);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,936(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 936);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f12,196(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ble cr6,0x82a0a1b8
	if (!ctx.cr6.gt) goto loc_82A0A1B8;
	// lwz r7,932(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 932);
	// addi r10,r7,16
	ctx.r10.s64 = ctx.r7.s64 + 16;
loc_82A0A160:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82a0a18c
	if (!ctx.cr6.lt) goto loc_82A0A18C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a0a160
	if (ctx.cr6.lt) goto loc_82A0A160;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A0A18C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,1356(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1356);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f2,-32444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,31564(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 31564);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a095d0
	ctx.lr = 0x82A0A1B8;
	sub_82A095D0(ctx, base);
loc_82A0A1B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0A1C8"))) PPC_WEAK_FUNC(sub_82A0A1C8);
PPC_FUNC_IMPL(__imp__sub_82A0A1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A0A1D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a0a1f8
	if (ctx.cr6.gt) goto loc_82A0A1F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a0a200
	goto loc_82A0A200;
loc_82A0A1F8:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A0A200:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82A0A208;
	sub_8258A128(ctx, base);
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a0a310
	if (ctx.cr6.eq) goto loc_82A0A310;
	// lwz r11,720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0a2c0
	if (ctx.cr6.eq) goto loc_82A0A2C0;
	// lwz r11,708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// ble cr6,0x82a0a2c0
	if (!ctx.cr6.gt) goto loc_82A0A2C0;
	// lwz r3,720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 720);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,332(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A0A24C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lwz r3,720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 720);
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// lfs f0,-15120(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r4,396(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 396);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rldicr r7,r5,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// rldicr r9,r6,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,364(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 364);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A0A2A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 720);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,336(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A0A2C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0A2C0:
	// lwz r11,732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 732);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0a310
	if (ctx.cr6.eq) goto loc_82A0A310;
	// li r29,0
	ctx.r29.s64 = 0;
	// ble cr6,0x82a0a310
	if (!ctx.cr6.gt) goto loc_82A0A310;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A0A2D8:
	// lwz r11,728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 728);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0a2fc
	if (ctx.cr6.eq) goto loc_82A0A2FC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0a2fc
	if (ctx.cr6.eq) goto loc_82A0A2FC;
	// bl 0x82516af8
	ctx.lr = 0x82A0A2FC;
	sub_82516AF8(ctx, base);
loc_82A0A2FC:
	// lwz r11,732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 732);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a0a2d8
	if (ctx.cr6.lt) goto loc_82A0A2D8;
loc_82A0A310:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A318"))) PPC_WEAK_FUNC(sub_82A0A318);
PPC_FUNC_IMPL(__imp__sub_82A0A318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x82A0A320;
	__savegprlr_15(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82cb6ac8
	ctx.lr = 0x82A0A328;
	__savefpr_20(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// li r7,4
	ctx.r7.s64 = 4;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f31,-15120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// stb r7,649(r30)
	PPC_STORE_U8(ctx.r30.u32 + 649, ctx.r7.u8);
	// lfs f30,21152(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21152);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f31,1304(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1304, temp.u32);
	// addi r31,r10,-32444
	ctx.r31.s64 = ctx.r10.s64 + -32444;
	// beq cr6,0x82a0a484
	if (ctx.cr6.eq) goto loc_82A0A484;
	// lwz r10,400(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// lfs f12,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,404(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// lfs f11,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// lwz r8,396(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// lfs f9,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lwz r7,708(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	// lfs f6,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f4,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// fmadds f1,f9,f13,f7
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f7.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// cmpwi cr6,r7,15
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 15, ctx.xer);
	// lfs f12,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f8,f13,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f7,f6,f13,f3
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f6,f4,f0,f1
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f5,f2,f0,f8
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f4,f12,f0,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fadds f3,f6,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f1,f4,f9
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ble cr6,0x82a0a424
	if (!ctx.cr6.gt) goto loc_82A0A424;
	// lwz r11,704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82355e68
	ctx.lr = 0x82A0A424;
	sub_82355E68(ctx, base);
loc_82A0A424:
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lfs f0,3476(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x82cb4db8
	ctx.lr = 0x82A0A43C;
	sub_82CB4DB8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfd f0,-18360(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18360);
	// fmul f1,f11,f0
	ctx.f1.f64 = ctx.f11.f64 * ctx.f0.f64;
	// bl 0x82cb4c00
	ctx.lr = 0x82A0A450;
	sub_82CB4C00(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f9,1320(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1320);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,-15764(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15764);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-18280(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18280);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f8,1308(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1308, temp.u32);
	// blt cr6,0x82a0a490
	if (ctx.cr6.lt) goto loc_82A0A490;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1288, ctx.r11.u32);
	// b 0x82a0a494
	goto loc_82A0A494;
loc_82A0A484:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,31564(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31564);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1308(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1308, temp.u32);
loc_82A0A490:
	// stw r29,1288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1288, ctx.r29.u32);
loc_82A0A494:
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0a848
	if (ctx.cr6.eq) goto loc_82A0A848;
	// lwz r10,712(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0a848
	if (ctx.cr6.eq) goto loc_82A0A848;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a0a848
	if (ctx.cr6.eq) goto loc_82A0A848;
	// lfs f0,1264(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1264);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,180(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// lfs f13,328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,176(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f28,f10,f30
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// lfs f5,324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f11,1268(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1268);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f9,344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f9.f64 = double(temp.f32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f20,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f20.f64 = double(temp.f32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lfs f21,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f21.f64 = double(temp.f32);
	// lfs f2,188(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	ctx.f2.f64 = double(temp.f32);
	// lwz r8,184(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// lfs f13,192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f25,f2,f30
	ctx.f25.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// lfs f0,-28844(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f24,f13,f30
	ctx.f24.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmadds f1,f9,f11,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfs f6,340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f28,f0
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// lfs f8,1260(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1260);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f9,f11,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f4.f64));
	// lfs f7,312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f3,f6,f11,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f5,304(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f2.f64 = double(temp.f32);
	// lfs f22,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f22.f64 = double(temp.f32);
	// lfs f12,360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f25,f0
	ctx.f11.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// lfs f4,356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f24,f0
	ctx.f6.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// lfs f13,352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f1.f64));
	// lfs f30,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f1,f22,f10
	ctx.f1.f64 = double(float(ctx.f22.f64 - ctx.f10.f64));
	// fmadds f0,f5,f8,f9
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f10,f2,f8,f3
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fadds f8,f7,f12
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fsubs f9,f21,f11
	ctx.f9.f64 = double(float(ctx.f21.f64 - ctx.f11.f64));
	// fadds f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f5,f10,f4
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// fsubs f29,f8,f1
	ctx.f29.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// fsubs f4,f20,f6
	ctx.f4.f64 = double(float(ctx.f20.f64 - ctx.f6.f64));
	// fsubs f27,f7,f9
	ctx.f27.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fdivs f0,f29,f28
	ctx.f0.f64 = double(float(ctx.f29.f64 / ctx.f28.f64));
	// fsubs f26,f5,f4
	ctx.f26.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a0a5a4
	if (!ctx.cr6.lt) goto loc_82A0A5A4;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82a0a5b0
	goto loc_82A0A5B0;
loc_82A0A5A4:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82a0a5b0
	if (ctx.cr6.lt) goto loc_82A0A5B0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_82A0A5B0:
	// lwz r11,1288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a0a5c4
	if (!ctx.cr6.gt) goto loc_82A0A5C4;
	// fmr f23,f0
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f0.f64;
	// b 0x82a0a5c8
	goto loc_82A0A5C8;
loc_82A0A5C4:
	// fmr f23,f31
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f31.f64;
loc_82A0A5C8:
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mr r15,r29
	ctx.r15.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82a0a848
	if (!ctx.cr6.gt) goto loc_82A0A848;
	// lis r29,-31882
	ctx.r29.s64 = -2089418752;
	// lis r28,-31882
	ctx.r28.s64 = -2089418752;
	// lis r27,-31882
	ctx.r27.s64 = -2089418752;
	// lis r26,-31882
	ctx.r26.s64 = -2089418752;
	// lis r25,-31882
	ctx.r25.s64 = -2089418752;
	// lis r24,-31882
	ctx.r24.s64 = -2089418752;
	// lis r23,-31882
	ctx.r23.s64 = -2089418752;
	// lis r22,-31882
	ctx.r22.s64 = -2089418752;
	// lis r21,-31882
	ctx.r21.s64 = -2089418752;
	// lis r20,-31882
	ctx.r20.s64 = -2089418752;
	// lis r19,-31882
	ctx.r19.s64 = -2089418752;
	// lis r18,-31882
	ctx.r18.s64 = -2089418752;
	// lis r17,-31882
	ctx.r17.s64 = -2089418752;
	// lis r16,-31882
	ctx.r16.s64 = -2089418752;
loc_82A0A618:
	// lwz r3,652(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0A630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82454470
	ctx.lr = 0x82A0A634;
	sub_82454470(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a0a828
	if (ctx.cr6.eq) goto loc_82A0A828;
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r4,1388(r16)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r16.u32 + 1388);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82A0A654;
	sub_8244FC30(ctx, base);
	// lwz r11,1288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1288);
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r4,1396(r17)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r17.u32 + 1396);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// li r6,0
	ctx.r6.s64 = 0;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x8244fc30
	ctx.lr = 0x82A0A680;
	sub_8244FC30(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r4,1404(r18)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r18.u32 + 1404);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244fc30
	ctx.lr = 0x82A0A698;
	sub_8244FC30(ctx, base);
	// stfs f25,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stfs f24,132(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f28,136(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,1412(r19)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r19.u32 + 1412);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// bl 0x8244fa60
	ctx.lr = 0x82A0A6C8;
	sub_8244FA60(ctx, base);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f21,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f20,148(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f22,152(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,1420(r20)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r20.u32 + 1420);
	// ld r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// bl 0x8244fa60
	ctx.lr = 0x82A0A6F8;
	sub_8244FA60(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stfs f27,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f26,164(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// ld r4,1428(r21)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r21.u32 + 1428);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x8244fa60
	ctx.lr = 0x82A0A728;
	sub_8244FA60(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r4,1436(r22)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r22.u32 + 1436);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244fc30
	ctx.lr = 0x82A0A740;
	sub_8244FC30(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,1444(r23)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r23.u32 + 1444);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82A0A758;
	sub_8244FC30(ctx, base);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stfs f27,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// ld r4,1452(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 1452);
	// stfs f26,180(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f29,184(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f30,188(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// bl 0x8244fa60
	ctx.lr = 0x82A0A788;
	sub_8244FA60(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,1460(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + 1460);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82A0A7A0;
	sub_8244FC30(ctx, base);
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r4,1468(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 1468);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8244fa60
	ctx.lr = 0x82A0A7CC;
	sub_8244FA60(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r4,1476(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 1476);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244fc30
	ctx.lr = 0x82A0A7E4;
	sub_8244FC30(ctx, base);
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r4,1484(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 1484);
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x8244fa60
	ctx.lr = 0x82A0A810;
	sub_8244FA60(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r4,1492(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 1492);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,1316(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1316);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8244fc30
	ctx.lr = 0x82A0A828;
	sub_8244FC30(ctx, base);
loc_82A0A828:
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// lwz r10,712(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,128(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// cmpw cr6,r15,r7
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82a0a618
	if (ctx.cr6.lt) goto loc_82A0A618;
loc_82A0A848:
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 536870912;
	// stw r9,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r9.u32);
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// lwz r8,480(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// oris r7,r8,4096
	ctx.r7.u64 = ctx.r8.u64 | 268435456;
	// stw r7,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r7.u32);
	// lwz r4,656(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// bl 0x825d4918
	ctx.lr = 0x82A0A874;
	sub_825D4918(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82cb6b14
	ctx.lr = 0x82A0A880;
	__restfpr_20(ctx, base);
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A884"))) PPC_WEAK_FUNC(sub_82A0A884);
PPC_FUNC_IMPL(__imp__sub_82A0A884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0A888"))) PPC_WEAK_FUNC(sub_82A0A888);
PPC_FUNC_IMPL(__imp__sub_82A0A888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x82A0A890;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82cb6ad0
	ctx.lr = 0x82A0A898;
	__savefpr_22(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r23,r11,31808
	ctx.r23.s64 = ctx.r11.s64 + 31808;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f0,1308(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	ctx.f0.f64 = double(temp.f32);
	// addi r22,r11,-18304
	ctx.r22.s64 = ctx.r11.s64 + -18304;
	// lfs f29,1284(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 1284);
	ctx.f29.f64 = double(temp.f32);
	// lfs f12,1304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1304);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f10,f29,f0
	ctx.f10.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// fadds f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// lfs f25,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f25.f64 = double(temp.f32);
	// lfs f13,-14320(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -14320);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-15768(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15768);
	ctx.f0.f64 = double(temp.f32);
	// lfs f23,1312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1312);
	ctx.f23.f64 = double(temp.f32);
	// stfs f11,1304(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1304, temp.u32);
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fsubs f7,f9,f29
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f29.f64));
	// fsubs f6,f8,f29
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f29.f64));
	// fcmpu cr6,f7,f25
	ctx.cr6.compare(ctx.f7.f64, ctx.f25.f64);
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
	// fcmpu cr6,f6,f25
	ctx.cr6.compare(ctx.f6.f64, ctx.f25.f64);
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
	// rlwinm r4,r8,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r11,r8,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 | ctx.r11.u64;
	// lfsx f5,r22,r3
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r3.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsel f26,f5,f29,f8
	ctx.f26.f64 = ctx.f5.f64 >= 0.0 ? ctx.f29.f64 : ctx.f8.f64;
	// lfsx f4,r22,r10
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsel f24,f4,f29,f9
	ctx.f24.f64 = ctx.f4.f64 >= 0.0 ? ctx.f29.f64 : ctx.f9.f64;
	// fmadds f1,f26,f0,f13
	ctx.f1.f64 = double(float(ctx.f26.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f1,1312(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1312, temp.u32);
	// bl 0x82cb4db8
	ctx.lr = 0x82A0A934;
	sub_82CB4DB8(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfd f0,-15776(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -15776);
	// fmul f1,f3,f0
	ctx.f1.f64 = ctx.f3.f64 * ctx.f0.f64;
	// bl 0x82cb4c00
	ctx.lr = 0x82A0A948;
	sub_82CB4C00(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// stfs f2,1312(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1312, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0b8b0
	ctx.lr = 0x82A0A958;
	sub_82A0B8B0(ctx, base);
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lfs f1,1264(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1264);
	ctx.f1.f64 = double(temp.f32);
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lfs f12,1268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1268);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lfs f10,1260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,712(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f11,344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f11.f64 = double(temp.f32);
	// lfs f22,21152(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21152);
	ctx.f22.f64 = double(temp.f32);
	// lfs f9,312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	ctx.f9.f64 = double(temp.f32);
	// lfs f28,-28844(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28844);
	ctx.f28.f64 = double(temp.f32);
	// lfs f8,196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	ctx.f8.f64 = double(temp.f32);
	// lwz r6,184(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// fmuls f7,f8,f22
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f22.f64));
	// lfs f6,360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	ctx.f6.f64 = double(temp.f32);
	// lwz r5,176(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// lwz r4,180(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f11,f12,f13
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// fnmsubs f3,f7,f28,f5
	ctx.f3.f64 = double(float(-(ctx.f7.f64 * ctx.f28.f64 - ctx.f5.f64)));
	// fmadds f2,f9,f10,f4
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fadds f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fsubs f0,f1,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fdivs f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x82a0a9dc
	if (!ctx.cr6.lt) goto loc_82A0A9DC;
	// fmr f0,f25
	ctx.f0.f64 = ctx.f25.f64;
	// b 0x82a0a9e8
	goto loc_82A0A9E8;
loc_82A0A9DC:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x82a0a9e8
	if (ctx.cr6.lt) goto loc_82A0A9E8;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_82A0A9E8:
	// lwz r9,1288(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82a0aa04
	if (!ctx.cr6.gt) goto loc_82A0AA04;
	// lfs f13,1312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1312);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f29,f13
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x82a0aa08
	goto loc_82A0AA08;
loc_82A0AA04:
	// fmr f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f25.f64;
loc_82A0AA08:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0aaa8
	if (ctx.cr6.eq) goto loc_82A0AAA8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0aaa8
	if (ctx.cr6.eq) goto loc_82A0AAA8;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0aaa8
	if (ctx.cr6.eq) goto loc_82A0AAA8;
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r25,128(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82a0aaa8
	if (!ctx.cr6.gt) goto loc_82A0AAA8;
	// lis r27,-31882
	ctx.r27.s64 = -2089418752;
	// lis r26,-31882
	ctx.r26.s64 = -2089418752;
loc_82A0AA48:
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0AA60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82454470
	ctx.lr = 0x82A0AA64;
	sub_82454470(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0aa9c
	if (ctx.cr6.eq) goto loc_82A0AA9C;
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r4,1388(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 1388);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8244fc30
	ctx.lr = 0x82A0AA84;
	sub_8244FC30(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,1404(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 1404);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,1312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1312);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8244fc30
	ctx.lr = 0x82A0AA9C;
	sub_8244FC30(ctx, base);
loc_82A0AA9C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82a0aa48
	if (ctx.cr6.lt) goto loc_82A0AA48;
loc_82A0AAA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a08540
	ctx.lr = 0x82A0AAB0;
	sub_82A08540(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f27,732(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 732);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,32024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32024);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f23,f0
	ctx.cr6.compare(ctx.f23.f64, ctx.f0.f64);
	// bge cr6,0x82a0abe0
	if (!ctx.cr6.lt) goto loc_82A0ABE0;
	// lfs f13,1312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1312);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a0abe0
	if (ctx.cr6.lt) goto loc_82A0ABE0;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r10,976(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 976);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f27
	ctx.cr6.compare(ctx.f12.f64, ctx.f27.f64);
	// blt cr6,0x82a0abe0
	if (ctx.cr6.lt) goto loc_82A0ABE0;
	// lwz r11,960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a0abe0
	if (!ctx.cr6.gt) goto loc_82A0ABE0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,-14328(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -14328);
	ctx.f31.f64 = double(temp.f32);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// lfs f30,-15784(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15784);
	ctx.f30.f64 = double(temp.f32);
loc_82A0AB14:
	// lwz r10,652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,956(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 956);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// addi r9,r27,-2
	ctx.r9.s64 = ctx.r27.s64 + -2;
	// bgt cr6,0x82a0ab34
	if (ctx.cr6.gt) goto loc_82A0AB34;
	// addi r9,r27,-1
	ctx.r9.s64 = ctx.r27.s64 + -1;
loc_82A0AB34:
	// cmpwi cr6,r27,10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 10, ctx.xer);
	// li r26,1
	ctx.r26.s64 = 1;
	// bgt cr6,0x82a0ab44
	if (ctx.cr6.gt) goto loc_82A0AB44;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82A0AB44:
	// lwz r11,976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 976);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82a0ab58
	if (ctx.cr6.lt) goto loc_82A0AB58;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// ble cr6,0x82a0abc8
	if (!ctx.cr6.gt) goto loc_82A0ABC8;
loc_82A0AB58:
	// lwz r11,936(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 936);
	// addic. r28,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r28.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82a0abc8
	if (ctx.cr0.lt) goto loc_82A0ABC8;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A0AB70:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x82a0abbc
	if (!ctx.cr6.eq) goto loc_82A0ABBC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82a0abbc
	if (ctx.cr6.gt) goto loc_82A0ABBC;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,1344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1344);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a095d0
	ctx.lr = 0x82A0ABAC;
	sub_82A095D0(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a0abc8
	if (ctx.cr6.eq) goto loc_82A0ABC8;
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
loc_82A0ABBC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,-20
	ctx.r30.s64 = ctx.r30.s64 + -20;
	// bge 0x82a0ab70
	if (!ctx.cr0.lt) goto loc_82A0AB70;
loc_82A0ABC8:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,12
	ctx.r24.s64 = ctx.r24.s64 + 12;
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a0ab14
	if (ctx.cr6.lt) goto loc_82A0AB14;
loc_82A0ABE0:
	// lfs f0,1312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1312);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x82a0ad94
	if (!ctx.cr6.lt) goto loc_82A0AD94;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r10,976(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 976);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f27
	ctx.cr6.compare(ctx.f12.f64, ctx.f27.f64);
	// blt cr6,0x82a0ad94
	if (ctx.cr6.lt) goto loc_82A0AD94;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fmuls f10,f11,f26
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// fmuls f9,f11,f24
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f24.f64));
	// fctiwz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// frsp f1,f3
	ctx.f1.f64 = double(float(ctx.f3.f64));
	// fsubs f0,f9,f2
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// fsubs f13,f10,f1
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a0ad94
	if (!ctx.cr6.gt) goto loc_82A0AD94;
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// lfs f12,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,400(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// lfs f11,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,396(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// lfs f9,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f7,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f6,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f4,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f8,f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f7,f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f6,f0,f6,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmadds f5,f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f4,f4,f0,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fadds f3,f6,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f2,f5,f2
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f1,f4,f1
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82cb2308
	ctx.lr = 0x82A0AD18;
	sub_82CB2308(ctx, base);
	// srawi r7,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 2;
	// lwz r10,644(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// lwz r6,708(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82a0ad68
	if (!ctx.cr6.lt) goto loc_82A0AD68;
	// lwz r10,704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rldicr r5,r30,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82355e68
	ctx.lr = 0x82A0AD68;
	sub_82355E68(ctx, base);
loc_82A0AD68:
	// lwz r11,708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x82a0ad94
	if (!ctx.cr6.gt) goto loc_82A0AD94;
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rldicr r5,r30,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x82355e68
	ctx.lr = 0x82A0AD94;
	sub_82355E68(ctx, base);
loc_82A0AD94:
	// lfs f27,-4(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -4);
	ctx.f27.f64 = double(temp.f32);
	// fcmpu cr6,f23,f28
	ctx.cr6.compare(ctx.f23.f64, ctx.f28.f64);
	// bge cr6,0x82a0aecc
	if (!ctx.cr6.lt) goto loc_82A0AECC;
	// lfs f0,1312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1312);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82a0adf0
	if (ctx.cr6.lt) goto loc_82A0ADF0;
	// lwz r11,716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0ade8
	if (ctx.cr6.eq) goto loc_82A0ADE8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
	// bl 0x822960c0
	ctx.lr = 0x82A0ADC8;
	sub_822960C0(ctx, base);
	// lwz r3,716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,368(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 368);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A0ADE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82A0ADE8;
	sub_82299080(ctx, base);
loc_82A0ADE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0a1c8
	ctx.lr = 0x82A0ADF0;
	sub_82A0A1C8(ctx, base);
loc_82A0ADF0:
	// lfs f0,1312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1312);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82a0aecc
	if (ctx.cr6.lt) goto loc_82A0AECC;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82a0aecc
	if (!ctx.cr6.gt) goto loc_82A0AECC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f30,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lfs f31,26252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26252);
	ctx.f31.f64 = double(temp.f32);
loc_82A0AE20:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r10,956(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 956);
	// lwzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82a0aeb4
	if (!ctx.cr6.lt) goto loc_82A0AEB4;
	// lwz r11,936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a0aeb4
	if (!ctx.cr6.gt) goto loc_82A0AEB4;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82A0AE48:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r10,932(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82a0ae9c
	if (!ctx.cr6.eq) goto loc_82A0AE9C;
	// lwz r11,956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 956);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// bge cr6,0x82a0ae7c
	if (!ctx.cr6.lt) goto loc_82A0AE7C;
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f27.f64;
	// b 0x82a0ae80
	goto loc_82A0AE80;
loc_82A0AE7C:
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
loc_82A0AE80:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,1348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1348);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a095d0
	ctx.lr = 0x82A0AE94;
	sub_82A095D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0aeb4
	if (!ctx.cr6.eq) goto loc_82A0AEB4;
loc_82A0AE9C:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// lwz r10,936(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a0ae48
	if (ctx.cr6.lt) goto loc_82A0AE48;
loc_82A0AEB4:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a0ae20
	if (ctx.cr6.lt) goto loc_82A0AE20;
loc_82A0AECC:
	// lfs f0,1312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1312);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x82a0b5ac
	if (ctx.cr6.lt) goto loc_82A0B5AC;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,-25504(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25504);
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,-25504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25504, ctx.r10.u32);
	// bgt cr6,0x82a0af00
	if (ctx.cr6.gt) goto loc_82A0AF00;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82a0af08
	goto loc_82A0AF08;
loc_82A0AF00:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A0AF08:
	// bl 0x826f0218
	ctx.lr = 0x82A0AF0C;
	sub_826F0218(ctx, base);
	// lwz r3,772(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 772);
	// bl 0x82a0d1c0
	ctx.lr = 0x82A0AF14;
	sub_82A0D1C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,760(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0AF2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,652(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x82a0af58
	if (ctx.cr6.eq) goto loc_82A0AF58;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x8246b6c0
	ctx.lr = 0x82A0AF48;
	sub_8246B6C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82a0af58
	if (!ctx.cr6.gt) goto loc_82A0AF58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8265b370
	ctx.lr = 0x82A0AF58;
	sub_8265B370(ctx, base);
loc_82A0AF58:
	// lwz r30,652(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0af80
	if (ctx.cr6.eq) goto loc_82A0AF80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0AF80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0AF80:
	// stw r29,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r29.u32);
	// stw r29,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r29.u32);
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0afcc
	if (ctx.cr6.eq) goto loc_82A0AFCC;
	// lwz r10,652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a0afcc
	if (ctx.cr6.eq) goto loc_82A0AFCC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x8246b6c0
	ctx.lr = 0x82A0AFB4;
	sub_8246B6C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82a0afc4
	if (!ctx.cr6.gt) goto loc_82A0AFC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8265b370
	ctx.lr = 0x82A0AFC4;
	sub_8265B370(ctx, base);
loc_82A0AFC4:
	// lwz r3,688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// bl 0x8265b370
	ctx.lr = 0x82A0AFCC;
	sub_8265B370(ctx, base);
loc_82A0AFCC:
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,400(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// lwz r9,396(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// lwz r8,404(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f11,412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stw r10,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r10.u32);
	// fcmpu cr6,f9,f25
	ctx.cr6.compare(ctx.f9.f64, ctx.f25.f64);
	// stw r10,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r10.u32);
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
	// lfsx f8,r22,r8
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r8.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f31,f8,f10,f11
	ctx.f31.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f11.f64;
	// bl 0x8260e1b0
	ctx.lr = 0x82A0B040;
	sub_8260E1B0(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,756(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 756);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82A0B054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r4,r5,0,4,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a0b09c
	if (!ctx.cr6.eq) goto loc_82A0B09C;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rldicr r12,r12,61,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 61) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82a0b09c
	if (!ctx.cr6.eq) goto loc_82A0B09C;
	// rlwinm r11,r11,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82a0b09c
	if (!ctx.cr6.eq) goto loc_82A0B09C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,952(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 952);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0B09C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0B09C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,649(r31)
	PPC_STORE_U8(ctx.r31.u32 + 649, ctx.r10.u8);
	// lwz r9,1000(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1000);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A0B0B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,472(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82a0b118
	if (!ctx.cr6.gt) goto loc_82A0B118;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82A0B0CC:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82774778
	ctx.lr = 0x82A0B0D8;
	sub_82774778(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0b104
	if (ctx.cr6.eq) goto loc_82A0B104;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0B104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0B104:
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a0b0cc
	if (ctx.cr6.lt) goto loc_82A0B0CC;
loc_82A0B118:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fmuls f31,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r24,r11,29152
	ctx.r24.s64 = ctx.r11.s64 + 29152;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lwz r20,29152(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29152);
	// lwz r21,12(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// bl 0x82a0caa0
	ctx.lr = 0x82A0B164;
	sub_82A0CAA0(ctx, base);
	// lis r18,-31883
	ctx.r18.s64 = -2089484288;
	// lwz r11,-31264(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + -31264);
	// lwz r7,280(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a0b1a8
	if (ctx.cr6.eq) goto loc_82A0B1A8;
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lis r8,32
	ctx.r8.s64 = 2097152;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// ori r8,r8,8326
	ctx.r8.u64 = ctx.r8.u64 | 8326;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0B1A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82a0b1ac
	goto loc_82A0B1AC;
loc_82A0B1A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82A0B1AC:
	// lis r19,-31885
	ctx.r19.s64 = -2089615360;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0b380
	if (ctx.cr6.eq) goto loc_82A0B380;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r28,-31883
	ctx.r28.s64 = -2089484288;
	// lis r27,-31883
	ctx.r27.s64 = -2089484288;
	// lis r26,-31883
	ctx.r26.s64 = -2089484288;
	// addi r23,r11,11336
	ctx.r23.s64 = ctx.r11.s64 + 11336;
	// addi r25,r10,14488
	ctx.r25.s64 = ctx.r10.s64 + 14488;
loc_82A0B1D8:
	// lwz r30,4(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0b374
	if (ctx.cr6.eq) goto loc_82A0B374;
	// lwz r11,-27948(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -27948);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0b200
	if (!ctx.cr6.eq) goto loc_82A0B200;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82686ea8
	ctx.lr = 0x82A0B1F8;
	sub_82686EA8(ctx, base);
	// stw r3,-27948(r26)
	PPC_STORE_U32(ctx.r26.u32 + -27948, ctx.r3.u32);
	// bl 0x82686f68
	ctx.lr = 0x82A0B200;
	sub_82686F68(ctx, base);
loc_82A0B200:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b224
	if (ctx.cr6.eq) goto loc_82A0B224;
loc_82A0B20C:
	// lwz r10,-27948(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -27948);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a0b238
	if (ctx.cr6.eq) goto loc_82A0B238;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0b20c
	if (!ctx.cr6.eq) goto loc_82A0B20C;
loc_82A0B224:
	// lwz r11,-27948(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -27948);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a0b240
	if (ctx.cr6.eq) goto loc_82A0B240;
loc_82A0B238:
	// lwz r3,492(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// b 0x82a0b2f4
	goto loc_82A0B2F4;
loc_82A0B240:
	// lwz r11,-27944(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27944);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0b25c
	if (!ctx.cr6.eq) goto loc_82A0B25C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826870d8
	ctx.lr = 0x82A0B254;
	sub_826870D8(ctx, base);
	// stw r3,-27944(r27)
	PPC_STORE_U32(ctx.r27.u32 + -27944, ctx.r3.u32);
	// bl 0x82687198
	ctx.lr = 0x82A0B25C;
	sub_82687198(ctx, base);
loc_82A0B25C:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b280
	if (ctx.cr6.eq) goto loc_82A0B280;
loc_82A0B268:
	// lwz r10,-27944(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27944);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a0b294
	if (ctx.cr6.eq) goto loc_82A0B294;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0b268
	if (!ctx.cr6.eq) goto loc_82A0B268;
loc_82A0B280:
	// lwz r11,-27944(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27944);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a0b29c
	if (ctx.cr6.eq) goto loc_82A0B29C;
loc_82A0B294:
	// lwz r3,492(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// b 0x82a0b2f4
	goto loc_82A0B2F4;
loc_82A0B29C:
	// lwz r11,-25512(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -25512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0b2b8
	if (!ctx.cr6.eq) goto loc_82A0B2B8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a04770
	ctx.lr = 0x82A0B2B0;
	sub_82A04770(ctx, base);
	// stw r3,-25512(r28)
	PPC_STORE_U32(ctx.r28.u32 + -25512, ctx.r3.u32);
	// bl 0x82a04820
	ctx.lr = 0x82A0B2B8;
	sub_82A04820(ctx, base);
loc_82A0B2B8:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b2dc
	if (ctx.cr6.eq) goto loc_82A0B2DC;
loc_82A0B2C4:
	// lwz r10,-25512(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -25512);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a0b2f0
	if (ctx.cr6.eq) goto loc_82A0B2F0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0b2c4
	if (!ctx.cr6.eq) goto loc_82A0B2C4;
loc_82A0B2DC:
	// lwz r11,-25512(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -25512);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a0b374
	if (ctx.cr6.eq) goto loc_82A0B374;
loc_82A0B2F0:
	// lwz r3,652(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
loc_82A0B2F4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0b374
	if (ctx.cr6.eq) goto loc_82A0B374;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f27.f64;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r10,544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0B330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b368
	if (ctx.cr6.eq) goto loc_82A0B368;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0b354
	if (!ctx.cr6.eq) goto loc_82A0B354;
	// bl 0x822900a0
	ctx.lr = 0x82A0B350;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82A0B354:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0B368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0B368:
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
loc_82A0B374:
	// lwz r22,0(r22)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82a0b1d8
	if (!ctx.cr6.eq) goto loc_82A0B1D8;
loc_82A0B380:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a0b398
	if (ctx.cr6.eq) goto loc_82A0B398;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82367960
	ctx.lr = 0x82A0B398;
	sub_82367960(ctx, base);
loc_82A0B398:
	// stw r20,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r20.u32);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b574
	if (ctx.cr6.eq) goto loc_82A0B574;
	// lwz r11,-31264(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + -31264);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b3f0
	if (ctx.cr6.eq) goto loc_82A0B3F0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82a0b3d4
	if (ctx.cr6.gt) goto loc_82A0B3D4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82a0b3dc
	goto loc_82A0B3DC;
loc_82A0B3D4:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A0B3DC:
	// lwz r11,980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b3f0
	if (ctx.cr6.eq) goto loc_82A0B3F0;
	// lwz r11,776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 776);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82A0B3F0:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0b574
	if (!ctx.cr6.eq) goto loc_82A0B574;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b418
	if (ctx.cr6.eq) goto loc_82A0B418;
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82A0B410;
	sub_8258A128(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82a0b41c
	goto loc_82A0B41C;
loc_82A0B418:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_82A0B41C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfs f25,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f25,236(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r29,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r29.u32);
	// stfs f25,240(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stw r29,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r29.u32);
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// lis r28,-31884
	ctx.r28.s64 = -2089549824;
	// stw r10,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// stfs f25,224(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// stfs f25,232(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f25,228(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stfs f25,220(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// lwz r11,25344(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25344);
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// stw r29,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
	// stw r29,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r29.u32);
	// stw r29,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r29.u32);
	// lwz r11,744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a0b574
	if (!ctx.cr6.gt) goto loc_82A0B574;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,-15788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15788);
	ctx.f31.f64 = double(temp.f32);
loc_82A0B484:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829d4f48
	ctx.lr = 0x82A0B490;
	sub_829D4F48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0b560
	if (ctx.cr6.eq) goto loc_82A0B560;
	// lwz r11,252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// li r8,8351
	ctx.r8.s64 = 8351;
	// lwz r9,244(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lwz r10,248(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lfs f13,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// lwz r11,368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// lfs f10,420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,380(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 380);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A0B53C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0b560
	if (!ctx.cr6.eq) goto loc_82A0B560;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,-31264(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -31264);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8276feb0
	ctx.lr = 0x82A0B560;
	sub_8276FEB0(ctx, base);
loc_82A0B560:
	// lwz r11,25344(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25344);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a0b484
	if (ctx.cr6.lt) goto loc_82A0B484;
loc_82A0B574:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b5ac
	if (ctx.cr6.eq) goto loc_82A0B5AC;
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0b598
	if (!ctx.cr6.eq) goto loc_82A0B598;
	// bl 0x822900a0
	ctx.lr = 0x82A0B594;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28888);
loc_82A0B598:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0B5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0B5AC:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82cb6b1c
	ctx.lr = 0x82A0B5B8;
	__restfpr_22(ctx, base);
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0B5BC"))) PPC_WEAK_FUNC(sub_82A0B5BC);
PPC_FUNC_IMPL(__imp__sub_82A0B5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0B5C0"))) PPC_WEAK_FUNC(sub_82A0B5C0);
PPC_FUNC_IMPL(__imp__sub_82A0B5C0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bea278
	ctx.lr = 0x82A0B5E0;
	sub_82BEA278(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r10,820(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lfs f11,824(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	ctx.f11.f64 = double(temp.f32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfd f0,-3832(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3832);
	// fmsub f8,f12,f0,f11
	ctx.f8.f64 = ctx.f12.f64 * ctx.f0.f64 - ctx.f11.f64;
	// fmul f7,f8,f9
	ctx.f7.f64 = ctx.f8.f64 * ctx.f9.f64;
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x82a0b628
	if (!ctx.cr6.gt) goto loc_82A0B628;
	// li r30,2
	ctx.r30.s64 = 2;
loc_82A0B628:
	// lwz r11,828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	// lwz r10,808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82a0b644
	if (!ctx.cr6.lt) goto loc_82A0B644;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0ddf8
	ctx.lr = 0x82A0B644;
	sub_82A0DDF8(ctx, base);
loc_82A0B644:
	// lwz r11,820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// lfs f0,824(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	ctx.f0.f64 = double(temp.f32);
	// mullw r10,r30,r11
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,824(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 824, temp.u32);
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

__attribute__((alias("__imp__sub_82A0B684"))) PPC_WEAK_FUNC(sub_82A0B684);
PPC_FUNC_IMPL(__imp__sub_82A0B684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0B688"))) PPC_WEAK_FUNC(sub_82A0B688);
PPC_FUNC_IMPL(__imp__sub_82A0B688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A0B690;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,649(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 649);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0b898
	if (!ctx.cr6.eq) goto loc_82A0B898;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r11,-25504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25504);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25504, ctx.r11.u32);
	// bl 0x8260ab50
	ctx.lr = 0x82A0B6BC;
	sub_8260AB50(ctx, base);
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// lwz r11,-31264(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b8a4
	if (ctx.cr6.eq) goto loc_82A0B8A4;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0b8a4
	if (ctx.cr6.eq) goto loc_82A0B8A4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a0b6f0
	if (ctx.cr6.gt) goto loc_82A0B6F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a0b6f8
	goto loc_82A0B6F8;
loc_82A0B6F0:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A0B6F8:
	// bl 0x826f0218
	ctx.lr = 0x82A0B6FC;
	sub_826F0218(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0b8a4
	if (ctx.cr6.eq) goto loc_82A0B8A4;
	// lwz r3,980(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82A0B70C;
	sub_8258A128(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0b764
	if (ctx.cr6.eq) goto loc_82A0B764;
	// lwz r11,2220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b764
	if (ctx.cr6.eq) goto loc_82A0B764;
	// lwz r29,2048(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2048);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a0b764
	if (ctx.cr6.eq) goto loc_82A0B764;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a0dd98
	ctx.lr = 0x82A0B73C;
	sub_82A0DD98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,268(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 268);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A0B750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,272(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A0B764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0B764:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,11548
	ctx.r4.s64 = ctx.r11.s64 + 11548;
	// bl 0x82295680
	ctx.lr = 0x82A0B774;
	sub_82295680(ctx, base);
	// lwz r10,2140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2140);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82a0dd98
	ctx.lr = 0x82A0B784;
	sub_82A0DD98(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lwz r3,2140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2140);
	// lwz r8,1020(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1020);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A0B7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82A0B7B4;
	sub_82299080(ctx, base);
	// lwz r7,472(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82a0b814
	if (!ctx.cr6.gt) goto loc_82A0B814;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A0B7C8:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82a0d240
	ctx.lr = 0x82A0B7D4;
	sub_82A0D240(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0b800
	if (ctx.cr6.eq) goto loc_82A0B800;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0B800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0B800:
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a0b7c8
	if (ctx.cr6.lt) goto loc_82A0B7C8;
loc_82A0B814:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lbz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// lfs f31,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82a0b864
	if (!ctx.cr6.eq) goto loc_82A0B864;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,668(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 668);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A0B864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0B864:
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0B878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f31,1304(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1304, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,649(r31)
	PPC_STORE_U8(ctx.r31.u32 + 649, ctx.r8.u8);
	// lfs f0,-16412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16412);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1312, temp.u32);
	// bl 0x82a0b8b0
	ctx.lr = 0x82A0B898;
	sub_82A0B8B0(ctx, base);
loc_82A0B898:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82A0B8A4:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a0b764
	goto loc_82A0B764;
}

__attribute__((alias("__imp__sub_82A0B8AC"))) PPC_WEAK_FUNC(sub_82A0B8AC);
PPC_FUNC_IMPL(__imp__sub_82A0B8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0B8B0"))) PPC_WEAK_FUNC(sub_82A0B8B0);
PPC_FUNC_IMPL(__imp__sub_82A0B8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82A0B8B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,652(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b8e0
	if (ctx.cr6.eq) goto loc_82A0B8E0;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b8e0
	if (ctx.cr6.eq) goto loc_82A0B8E0;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82a0b8e4
	goto loc_82A0B8E4;
loc_82A0B8E0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A0B8E4:
	// lwz r11,688(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b904
	if (ctx.cr6.eq) goto loc_82A0B904;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b904
	if (ctx.cr6.eq) goto loc_82A0B904;
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82a0b908
	goto loc_82A0B908;
loc_82A0B904:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82A0B908:
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r29,-31884
	ctx.r29.s64 = -2089549824;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21884
	ctx.r30.s64 = ctx.r11.s64 + -21884;
	// beq cr6,0x82a0b970
	if (ctx.cr6.eq) goto loc_82A0B970;
	// lwz r11,25224(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b968
	if (ctx.cr6.eq) goto loc_82A0B968;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295070
	ctx.lr = 0x82A0B938;
	sub_82295070(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b95c
	if (ctx.cr6.eq) goto loc_82A0B95C;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r9,r10,15700
	ctx.r9.s64 = ctx.r10.s64 + 15700;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lfs f0,1312(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82A0B95C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294fd8
	ctx.lr = 0x82A0B964;
	sub_82294FD8(ctx, base);
	// b 0x82a0b970
	goto loc_82A0B970;
loc_82A0B968:
	// lfs f0,1312(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
loc_82A0B970:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a0b9d0
	if (ctx.cr6.eq) goto loc_82A0B9D0;
	// lwz r11,25224(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b9c8
	if (ctx.cr6.eq) goto loc_82A0B9C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295070
	ctx.lr = 0x82A0B994;
	sub_82295070(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b9b8
	if (ctx.cr6.eq) goto loc_82A0B9B8;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// addi r9,r10,15712
	ctx.r9.s64 = ctx.r10.s64 + 15712;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lfs f0,1312(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82A0B9B8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294fd8
	ctx.lr = 0x82A0B9C0;
	sub_82294FD8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82A0B9C8:
	// lfs f0,1312(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,272(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 272, temp.u32);
loc_82A0B9D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0B9D8"))) PPC_WEAK_FUNC(sub_82A0B9D8);
PPC_FUNC_IMPL(__imp__sub_82A0B9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r9,r10,15700
	ctx.r9.s64 = ctx.r10.s64 + 15700;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0B9F8"))) PPC_WEAK_FUNC(sub_82A0B9F8);
PPC_FUNC_IMPL(__imp__sub_82A0B9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stfs f0,272(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0BA0C"))) PPC_WEAK_FUNC(sub_82A0BA0C);
PPC_FUNC_IMPL(__imp__sub_82A0BA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0BA10"))) PPC_WEAK_FUNC(sub_82A0BA10);
PPC_FUNC_IMPL(__imp__sub_82A0BA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,15608
	ctx.r3.s64 = ctx.r11.s64 + 15608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0BA1C"))) PPC_WEAK_FUNC(sub_82A0BA1C);
PPC_FUNC_IMPL(__imp__sub_82A0BA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0BA20"))) PPC_WEAK_FUNC(sub_82A0BA20);
PPC_FUNC_IMPL(__imp__sub_82A0BA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r9,r10,15712
	ctx.r9.s64 = ctx.r10.s64 + 15712;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0BA40"))) PPC_WEAK_FUNC(sub_82A0BA40);
PPC_FUNC_IMPL(__imp__sub_82A0BA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stfs f0,272(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0BA54"))) PPC_WEAK_FUNC(sub_82A0BA54);
PPC_FUNC_IMPL(__imp__sub_82A0BA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0BA58"))) PPC_WEAK_FUNC(sub_82A0BA58);
PPC_FUNC_IMPL(__imp__sub_82A0BA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,15652
	ctx.r3.s64 = ctx.r11.s64 + 15652;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0BA64"))) PPC_WEAK_FUNC(sub_82A0BA64);
PPC_FUNC_IMPL(__imp__sub_82A0BA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0BA68"))) PPC_WEAK_FUNC(sub_82A0BA68);
PPC_FUNC_IMPL(__imp__sub_82A0BA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,15168
	ctx.r10.s64 = ctx.r11.s64 + 15168;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0BA78"))) PPC_WEAK_FUNC(sub_82A0BA78);
PPC_FUNC_IMPL(__imp__sub_82A0BA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,15168
	ctx.r10.s64 = ctx.r11.s64 + 15168;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0BA88"))) PPC_WEAK_FUNC(sub_82A0BA88);
PPC_FUNC_IMPL(__imp__sub_82A0BA88) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,15168
	ctx.r9.s64 = ctx.r11.s64 + 15168;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a0babc
	if (ctx.cr6.eq) goto loc_82A0BABC;
	// bl 0x82294a58
	ctx.lr = 0x82A0BAB8;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A0BABC:
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

__attribute__((alias("__imp__sub_82A0BAD0"))) PPC_WEAK_FUNC(sub_82A0BAD0);
PPC_FUNC_IMPL(__imp__sub_82A0BAD0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,15168
	ctx.r9.s64 = ctx.r11.s64 + 15168;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a0bb04
	if (ctx.cr6.eq) goto loc_82A0BB04;
	// bl 0x82294a58
	ctx.lr = 0x82A0BB00;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A0BB04:
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

__attribute__((alias("__imp__sub_82A0BB18"))) PPC_WEAK_FUNC(sub_82A0BB18);
PPC_FUNC_IMPL(__imp__sub_82A0BB18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82A0BB20;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6ae0
	ctx.lr = 0x82A0BB28;
	__savefpr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x823f08a0
	ctx.lr = 0x82A0BB38;
	sub_823F08A0(ctx, base);
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0bec8
	if (ctx.cr6.eq) goto loc_82A0BEC8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a0bec8
	if (ctx.cr6.eq) goto loc_82A0BEC8;
	// lwz r11,752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 752);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 752, ctx.r11.u32);
	// bl 0x82bea278
	ctx.lr = 0x82A0BB64;
	sub_82BEA278(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// lwz r9,852(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r25,-32228
	ctx.r25.s64 = -2112094208;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfd f0,-3832(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -3832);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// frsp f26,f11
	ctx.f26.f64 = double(float(ctx.f11.f64));
	// beq cr6,0x82a0bc24
	if (ctx.cr6.eq) goto loc_82A0BC24;
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r10,980(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// lwz r9,568(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 568);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82a0bbbc
	if (ctx.cr6.eq) goto loc_82A0BBBC;
	// lwz r11,760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a0bc24
	if (!ctx.cr6.gt) goto loc_82A0BC24;
	// lbz r11,649(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 649);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0bc24
	if (!ctx.cr6.eq) goto loc_82A0BC24;
loc_82A0BBBC:
	// lwz r9,852(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// lfs f0,-10804(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// addi r11,r30,848
	ctx.r11.s64 = ctx.r30.s64 + 848;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f13,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f26,f13
	ctx.f12.f64 = double(float(ctx.f26.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82a0bbf0
	if (!ctx.cr6.lt) goto loc_82A0BBF0;
	// lwz r11,812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 812);
	// stw r11,820(r30)
	PPC_STORE_U32(ctx.r30.u32 + 820, ctx.r11.u32);
	// b 0x82a0bc34
	goto loc_82A0BC34;
loc_82A0BBF0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,17480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17480);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f26,f13
	ctx.f12.f64 = double(float(ctx.f26.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82a0bc30
	if (!ctx.cr6.lt) goto loc_82A0BC30;
	// lwz r11,816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// stw r11,820(r30)
	PPC_STORE_U32(ctx.r30.u32 + 820, ctx.r11.u32);
	// b 0x82a0bc34
	goto loc_82A0BC34;
loc_82A0BC24:
	// lwz r11,820(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 820);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0bc34
	if (ctx.cr6.eq) goto loc_82A0BC34;
loc_82A0BC30:
	// stw r29,820(r30)
	PPC_STORE_U32(ctx.r30.u32 + 820, ctx.r29.u32);
loc_82A0BC34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a0b5c0
	ctx.lr = 0x82A0BC40;
	sub_82A0B5C0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,1296(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1296);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f27,26252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26252);
	ctx.f27.f64 = double(temp.f32);
	// ble cr6,0x82a0bd7c
	if (!ctx.cr6.gt) goto loc_82A0BD7C;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r27,r30,1292
	ctx.r27.s64 = ctx.r30.s64 + 1292;
	// lfs f28,32428(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32428);
	ctx.f28.f64 = double(temp.f32);
	// addi r26,r11,-18304
	ctx.r26.s64 = ctx.r11.s64 + -18304;
	// lfs f29,-15752(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15752);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
loc_82A0BC7C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lfsx f12,r26,r7
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f11,f12,f13,f31
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f31.f64;
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// beq cr6,0x82a0bd68
	if (ctx.cr6.eq) goto loc_82A0BD68;
	// lwz r3,492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// bl 0x8265b850
	ctx.lr = 0x82A0BCC0;
	sub_8265B850(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82a0bce8
	if (ctx.cr6.gt) goto loc_82A0BCE8;
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f27
	ctx.cr6.compare(ctx.f12.f64, ctx.f27.f64);
	// bgt cr6,0x82a0bd20
	if (ctx.cr6.gt) goto loc_82A0BD20;
loc_82A0BCE8:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f29
	ctx.cr6.compare(ctx.f3.f64, ctx.f29.f64);
	// ble cr6,0x82a0bd68
	if (!ctx.cr6.gt) goto loc_82A0BD68;
loc_82A0BD20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f28,164(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 496, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,504(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// rlwinm r10,r8,0,3,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r10,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r10.u32);
	// bl 0x8232d230
	ctx.lr = 0x82A0BD60;
	sub_8232D230(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r29,r29,-20
	ctx.r29.s64 = ctx.r29.s64 + -20;
loc_82A0BD68:
	// lwz r11,1296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1296);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a0bc7c
	if (ctx.cr6.lt) goto loc_82A0BC7C;
loc_82A0BD7C:
	// lbz r11,649(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 649);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82a0be60
	if (ctx.cr6.gt) goto loc_82A0BE60;
	// lis r12,-32095
	ctx.r12.s64 = -2103377920;
	// addi r12,r12,-16988
	ctx.r12.s64 = ctx.r12.s64 + -16988;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A0BDE8;
	case 1:
		goto loc_82A0BDF8;
	case 2:
		goto loc_82A0BE08;
	case 3:
		goto loc_82A0BE2C;
	case 4:
		goto loc_82A0BE60;
	case 5:
		goto loc_82A0BDBC;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-16920(0)
	ctx.r21.u64 = PPC_LOAD_U32(-16920);
	// lwz r21,-16904(0)
	ctx.r21.u64 = PPC_LOAD_U32(-16904);
	// lwz r21,-16888(0)
	ctx.r21.u64 = PPC_LOAD_U32(-16888);
	// lwz r21,-16852(0)
	ctx.r21.u64 = PPC_LOAD_U32(-16852);
	// lwz r21,-16800(0)
	ctx.r21.u64 = PPC_LOAD_U32(-16800);
	// lwz r21,-16964(0)
	ctx.r21.u64 = PPC_LOAD_U32(-16964);
loc_82A0BDBC:
	// lwz r11,1296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0bec4
	if (!ctx.cr6.eq) goto loc_82A0BEC4;
	// lwz r3,720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 720);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0bebc
	if (ctx.cr6.eq) goto loc_82A0BEBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0BDE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82a0bebc
	goto loc_82A0BEBC;
loc_82A0BDE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a08b08
	ctx.lr = 0x82A0BDF4;
	sub_82A08B08(ctx, base);
	// b 0x82a0bec4
	goto loc_82A0BEC4;
loc_82A0BDF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a09028
	ctx.lr = 0x82A0BE04;
	sub_82A09028(ctx, base);
	// b 0x82a0bec4
	goto loc_82A0BEC4;
loc_82A0BE08:
	// lfs f0,1304(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1304);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// lfs f0,-10804(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,1304(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1304, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a0bec4
	if (ctx.cr6.lt) goto loc_82A0BEC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0a318
	ctx.lr = 0x82A0BE28;
	sub_82A0A318(ctx, base);
	// b 0x82a0bec4
	goto loc_82A0BEC4;
loc_82A0BE2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a0a888
	ctx.lr = 0x82A0BE38;
	sub_82A0A888(ctx, base);
loc_82A0BE38:
	// lwz r3,652(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0bec4
	if (ctx.cr6.eq) goto loc_82A0BEC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0BE5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82a0bec4
	goto loc_82A0BEC4;
loc_82A0BE60:
	// lwz r3,652(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0be84
	if (!ctx.cr6.eq) goto loc_82A0BE84;
	// bl 0x8265b370
	ctx.lr = 0x82A0BE78;
	sub_8265B370(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,652(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// bl 0x825d4918
	ctx.lr = 0x82A0BE84;
	sub_825D4918(ctx, base);
loc_82A0BE84:
	// lwz r11,852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0beb0
	if (ctx.cr6.eq) goto loc_82A0BEB0;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f26,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// blt cr6,0x82a0be38
	if (ctx.cr6.lt) goto loc_82A0BE38;
loc_82A0BEB0:
	// lwz r11,1296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0bec4
	if (!ctx.cr6.eq) goto loc_82A0BEC4;
loc_82A0BEBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8260ac08
	ctx.lr = 0x82A0BEC4;
	sub_8260AC08(ctx, base);
loc_82A0BEC4:
	// bl 0x8244f340
	ctx.lr = 0x82A0BEC8;
	sub_8244F340(ctx, base);
loc_82A0BEC8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82cb6b2c
	ctx.lr = 0x82A0BED8;
	__restfpr_26(ctx, base);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0BEDC"))) PPC_WEAK_FUNC(sub_82A0BEDC);
PPC_FUNC_IMPL(__imp__sub_82A0BEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0BEE0"))) PPC_WEAK_FUNC(sub_82A0BEE0);
PPC_FUNC_IMPL(__imp__sub_82A0BEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82A0BEE8;
	__savegprlr_19(ctx, base);
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f29.u64);
	// stfd f30,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// std r22,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r22.u64);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// lbz r9,649(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 649);
	// std r7,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r7.u64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r31,-25500(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25500, ctx.r31.u32);
	// bne cr6,0x82a0c654
	if (!ctx.cr6.eq) goto loc_82A0C654;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,284
	ctx.r4.s64 = ctx.r1.s64 + 284;
	// bl 0x82a0dd28
	ctx.lr = 0x82A0BF34;
	sub_82A0DD28(ctx, base);
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0c654
	if (ctx.cr6.eq) goto loc_82A0C654;
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0c654
	if (!ctx.cr6.eq) goto loc_82A0C654;
	// lwz r19,284(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x82a0c654
	if (!ctx.cr6.gt) goto loc_82A0C654;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8260ab50
	ctx.lr = 0x82A0BF64;
	sub_8260AB50(ctx, base);
	// lwz r11,760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a0bf7c
	if (!ctx.cr6.gt) goto loc_82A0BF7C;
	// subf. r10,r19,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r19.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r21,1
	ctx.r21.s64 = 1;
	// ble 0x82a0bf80
	if (!ctx.cr0.gt) goto loc_82A0BF80;
loc_82A0BF7C:
	// li r21,0
	ctx.r21.s64 = 0;
loc_82A0BF80:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// subf. r9,r19,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r19.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r9.u32);
	// lfs f29,-32444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f29.f64 = double(temp.f32);
	// bgt 0x82a0c050
	if (ctx.cr0.gt) goto loc_82A0C050;
	// lbz r11,649(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 649);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0c050
	if (!ctx.cr6.eq) goto loc_82A0C050;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0c008
	if (ctx.cr6.eq) goto loc_82A0C008;
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82A0BFB4;
	sub_8258A128(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0c008
	if (ctx.cr6.eq) goto loc_82A0C008;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82a0c008
	if (ctx.cr6.eq) goto loc_82A0C008;
	// bl 0x82982650
	ctx.lr = 0x82A0BFCC;
	sub_82982650(ctx, base);
	// lwz r11,52(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0bfec
	if (ctx.cr6.eq) goto loc_82A0BFEC;
loc_82A0BFD8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a0bffc
	if (ctx.cr6.eq) goto loc_82A0BFFC;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0bfd8
	if (!ctx.cr6.eq) goto loc_82A0BFD8;
loc_82A0BFEC:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0c008
	if (ctx.cr6.eq) goto loc_82A0C008;
loc_82A0BFFC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0dcd0
	ctx.lr = 0x82A0C008;
	sub_82A0DCD0(ctx, base);
loc_82A0C008:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r10,712(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// lfs f0,188(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fcmpu cr6,f12,f29
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// blt cr6,0x82a0c030
	if (ctx.cr6.lt) goto loc_82A0C030;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-16700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16700);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a0c038
	goto loc_82A0C038;
loc_82A0C030:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-15860(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15860);
	ctx.f0.f64 = double(temp.f32);
loc_82A0C038:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f0,1316(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1008(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0C050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0C050:
	// bl 0x82980aa8
	ctx.lr = 0x82A0C054;
	sub_82980AA8(ctx, base);
	// lis r25,-31884
	ctx.r25.s64 = -2089549824;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a0c078
	if (ctx.cr6.eq) goto loc_82A0C078;
loc_82A0C064:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a0c0e4
	if (ctx.cr6.eq) goto loc_82A0C0E4;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0c064
	if (!ctx.cr6.eq) goto loc_82A0C064;
loc_82A0C078:
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82a0c0b4
	if (!ctx.cr0.gt) goto loc_82A0C0B4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A0C08C:
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r9,852(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a0c08c
	if (ctx.cr6.lt) goto loc_82A0C08C;
loc_82A0C0B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bea278
	ctx.lr = 0x82A0C0BC;
	sub_82BEA278(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f0,-3832(r25)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r25.u32 + -3832);
	// lwz r10,852(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,-4(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
loc_82A0C0E4:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0dc70
	ctx.lr = 0x82A0C0F8;
	sub_82A0DC70(ctx, base);
	// lwz r28,304(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r27,308(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r29,312(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// stw r28,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r28.u32);
	// stw r27,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r27.u32);
	// stw r29,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r29.u32);
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a0c130
	if (ctx.cr6.gt) goto loc_82A0C130;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a0c138
	goto loc_82A0C138;
loc_82A0C130:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A0C138:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x8258a128
	ctx.lr = 0x82A0C140;
	sub_8258A128(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bea278
	ctx.lr = 0x82A0C14C;
	sub_82BEA278(ctx, base);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f0,-3832(r25)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r25.u32 + -3832);
	// lfs f10,1284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r26,1
	ctx.r26.s64 = 1;
	// lfd f13,-17840(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17840);
	// fmsub f9,f11,f0,f10
	ctx.f9.f64 = ctx.f11.f64 * ctx.f0.f64 - ctx.f10.f64;
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bgt cr6,0x82a0c178
	if (ctx.cr6.gt) goto loc_82A0C178;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82A0C178:
	// lwz r30,356(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82a0c544
	if (ctx.cr6.lt) goto loc_82A0C544;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r10,924(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 924);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82a0c544
	if (!ctx.cr6.lt) goto loc_82A0C544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bea278
	ctx.lr = 0x82A0C19C;
	sub_82BEA278(ctx, base);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f0,-3832(r25)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r25.u32 + -3832);
	// lfs f10,1284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f13,-18360(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18360);
	// fmsub f9,f11,f0,f10
	ctx.f9.f64 = ctx.f11.f64 * ctx.f0.f64 - ctx.f10.f64;
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// ble cr6,0x82a0c544
	if (!ctx.cr6.gt) goto loc_82A0C544;
	// lfs f0,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,1280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,1272
	ctx.r11.s64 = ctx.r31.s64 + 1272;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1276);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,-15864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15864);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgt cr6,0x82a0c20c
	if (ctx.cr6.gt) goto loc_82A0C20C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a0c544
	if (ctx.cr6.eq) goto loc_82A0C544;
loc_82A0C20C:
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// bl 0x82bea278
	ctx.lr = 0x82A0C220;
	sub_82BEA278(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f0,-3832(r25)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r25.u32 + -3832);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,1284(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1284, temp.u32);
	// bl 0x82980aa8
	ctx.lr = 0x82A0C23C;
	sub_82980AA8(ctx, base);
	// cmplw cr6,r24,r3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82a0c24c
	if (!ctx.cr6.eq) goto loc_82A0C24C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a0c544
	if (ctx.cr6.eq) goto loc_82A0C544;
loc_82A0C24C:
	// lwz r9,652(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// mulli r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 * 44;
	// lwz r10,920(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 920);
	// lfs f13,148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,128(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,152(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f10,116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f9,120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f7,132(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f8,112(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lfs f5,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f4,f0,f6
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f12,f5
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// lfs f0,136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-15120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// lfs f13,160(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,164(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// lfs f30,168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f10,f10,f2,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f3.f64));
	// fmadds f11,f11,f5,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fmadds f9,f9,f2,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f2.f64 + ctx.f1.f64));
	// fmadds f7,f7,f6,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f8,f2,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f11.f64));
	// fmadds f6,f0,f6,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmadds f4,f12,f31,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f7.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f5,f13,f31,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f8.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f3,f30,f31,f6
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f31.f64 + ctx.f6.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x823d27f0
	ctx.lr = 0x82A0C2EC;
	sub_823D27F0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r4,1372(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// ld r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82a08678
	ctx.lr = 0x82A0C314;
	sub_82A08678(ctx, base);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f30,-26236(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26236);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82a0c340
	if (ctx.cr6.eq) goto loc_82A0C340;
	// lwz r11,496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// stfs f30,164(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lwz r10,504(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// rlwinm r8,r10,0,3,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r9,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r9.u32);
	// stw r8,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r8.u32);
loc_82A0C340:
	// bl 0x82cb2308
	ctx.lr = 0x82A0C344;
	sub_82CB2308(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-18116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-16912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16912);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82a0c458
	if (!ctx.cr6.lt) goto loc_82A0C458;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82a0c458
	if (!ctx.cr6.lt) goto loc_82A0C458;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d27f0
	ctx.lr = 0x82A0C394;
	sub_823D27F0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r4,1376(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82a08678
	ctx.lr = 0x82A0C3BC;
	sub_82A08678(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0c458
	if (ctx.cr6.eq) goto loc_82A0C458;
	// lwz r11,496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	// stfs f31,164(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 164, temp.u32);
	// lwz r10,504(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// addi r3,r31,1292
	ctx.r3.s64 = ctx.r31.s64 + 1292;
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// rlwinm r8,r10,0,3,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r9,496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 496, ctx.r9.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r8,504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 504, ctx.r8.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82294ac0
	ctx.lr = 0x82A0C3FC;
	sub_82294AC0(ctx, base);
	// lwz r11,1296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// lwz r9,1292(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-20(r6)
	PPC_STORE_U32(ctx.r6.u32 + -20, ctx.r30.u32);
	// lwz r9,1292(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// lwz r11,1296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r28,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r28.u32);
	// stw r27,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r27.u32);
	// stw r29,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r29.u32);
	// lwz r9,1292(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// lwz r11,1296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f30,-4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + -4, temp.u32);
loc_82A0C458:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82a0c494
	if (ctx.cr6.eq) goto loc_82A0C494;
	// lwz r11,708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// ble cr6,0x82a0c48c
	if (!ctx.cr6.gt) goto loc_82A0C48C;
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// rldicr r5,r29,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82355e68
	ctx.lr = 0x82A0C48C;
	sub_82355E68(ctx, base);
loc_82A0C48C:
	// lwz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// b 0x82a0c50c
	goto loc_82A0C50C;
loc_82A0C494:
	// bl 0x82980af8
	ctx.lr = 0x82A0C498;
	sub_82980AF8(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a0c4b8
	if (ctx.cr6.eq) goto loc_82A0C4B8;
loc_82A0C4A4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a0c5f0
	if (ctx.cr6.eq) goto loc_82A0C5F0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0c4a4
	if (!ctx.cr6.eq) goto loc_82A0C4A4;
loc_82A0C4B8:
	// bl 0x82980aa8
	ctx.lr = 0x82A0C4BC;
	sub_82980AA8(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a0c4dc
	if (ctx.cr6.eq) goto loc_82A0C4DC;
loc_82A0C4C8:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a0c608
	if (ctx.cr6.eq) goto loc_82A0C608;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0c4c8
	if (!ctx.cr6.eq) goto loc_82A0C4C8;
loc_82A0C4DC:
	// lwz r11,708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// ble cr6,0x82a0c508
	if (!ctx.cr6.gt) goto loc_82A0C508;
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_82A0C4F0:
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rldicr r5,r29,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82355e68
	ctx.lr = 0x82A0C508;
	sub_82355E68(ctx, base);
loc_82A0C508:
	// lwz r11,640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
loc_82A0C50C:
	// lbz r10,648(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 648);
	// lwz r9,708(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82a0c544
	if (!ctx.cr6.lt) goto loc_82A0C544;
	// lwz r10,704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rldicr r5,r29,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82355e68
	ctx.lr = 0x82A0C544;
	sub_82355E68(ctx, base);
loc_82A0C544:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82a0c654
	if (ctx.cr6.eq) goto loc_82A0C654;
	// lwz r11,2044(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 2044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0c654
	if (ctx.cr6.eq) goto loc_82A0C654;
	// lwz r11,2216(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 2216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0c654
	if (ctx.cr6.eq) goto loc_82A0C654;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82a0c654
	if (ctx.cr6.eq) goto loc_82A0C654;
	// lwz r11,776(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 776);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0c598
	if (ctx.cr6.eq) goto loc_82A0C598;
	// lwz r3,2216(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 2216);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,1444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0C590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0c654
	if (!ctx.cr6.eq) goto loc_82A0C654;
loc_82A0C598:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,996(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 996);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0C5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0c654
	if (ctx.cr6.eq) goto loc_82A0C654;
	// lwz r11,756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0c63c
	if (ctx.cr6.eq) goto loc_82A0C63C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r19
	ctx.r10.s64 = ctx.r19.s32;
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
	// fdivs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// b 0x82a0c640
	goto loc_82A0C640;
loc_82A0C5F0:
	// lwz r11,708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// ble cr6,0x82a0c508
	if (!ctx.cr6.gt) goto loc_82A0C508;
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x82a0c4f0
	goto loc_82A0C4F0;
loc_82A0C608:
	// lwz r11,708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// ble cr6,0x82a0c634
	if (!ctx.cr6.gt) goto loc_82A0C634;
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// rldicr r5,r29,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82355e68
	ctx.lr = 0x82A0C634;
	sub_82355E68(ctx, base);
loc_82A0C634:
	// lwz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// b 0x82a0c50c
	goto loc_82A0C50C;
loc_82A0C63C:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_82A0C640:
	// lfs f13,1336(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1336);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,2044(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 2044);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82a0dc10
	ctx.lr = 0x82A0C654;
	sub_82A0DC10(ctx, base);
loc_82A0C654:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_82A0C668"))) PPC_WEAK_FUNC(sub_82A0C668);
PPC_FUNC_IMPL(__imp__sub_82A0C668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A0C670;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bl 0x8237cd98
	ctx.lr = 0x82A0C688;
	sub_8237CD98(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0d4b8
	ctx.lr = 0x82A0C69C;
	sub_82A0D4B8(ctx, base);
	// lfs f0,612(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82a0c728
	if (ctx.cr6.lt) goto loc_82A0C728;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0c728
	if (ctx.cr6.eq) goto loc_82A0C728;
	// lwz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0c728
	if (ctx.cr6.eq) goto loc_82A0C728;
	// lfs f0,616(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fdivs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r7,r9,-18304
	ctx.r7.s64 = ctx.r9.s64 + -18304;
	// lfs f0,-32444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32444);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r8,-19320
	ctx.r4.s64 = ctx.r8.s64 + -19320;
	// lfs f13,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f13.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
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
	// rlwinm r11,r5,27,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// rlwinm r10,r5,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lfsx f10,r7,r9
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f1,f10,f12,f0
	ctx.f1.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// bl 0x826fa198
	ctx.lr = 0x82A0C710;
	sub_826FA198(ctx, base);
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,336(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 336);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A0C728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0C728:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0C730"))) PPC_WEAK_FUNC(sub_82A0C730);
PPC_FUNC_IMPL(__imp__sub_82A0C730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0C748"))) PPC_WEAK_FUNC(sub_82A0C748);
PPC_FUNC_IMPL(__imp__sub_82A0C748) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0C768"))) PPC_WEAK_FUNC(sub_82A0C768);
PPC_FUNC_IMPL(__imp__sub_82A0C768) {
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
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0C784"))) PPC_WEAK_FUNC(sub_82A0C784);
PPC_FUNC_IMPL(__imp__sub_82A0C784) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0C788"))) PPC_WEAK_FUNC(sub_82A0C788);
PPC_FUNC_IMPL(__imp__sub_82A0C788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A0C790;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82a0c7d4
	if (!ctx.cr6.gt) goto loc_82A0C7D4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82A0C7B4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a0c82c
	if (ctx.cr6.eq) goto loc_82A0C82C;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a0c7b4
	if (ctx.cr6.lt) goto loc_82A0C7B4;
loc_82A0C7D4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82a0c80c
	if (!ctx.cr6.gt) goto loc_82A0C80C;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// li r5,8
	ctx.r5.s64 = 8;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// li r4,4
	ctx.r4.s64 = 4;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82294520
	ctx.lr = 0x82A0C80C;
	sub_82294520(ctx, base);
loc_82A0C80C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0c824
	if (ctx.cr0.eq) goto loc_82A0C824;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A0C824:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_82A0C82C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0C834"))) PPC_WEAK_FUNC(sub_82A0C834);
PPC_FUNC_IMPL(__imp__sub_82A0C834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C838"))) PPC_WEAK_FUNC(sub_82A0C838);
PPC_FUNC_IMPL(__imp__sub_82A0C838) {
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
	// bl 0x82a0cb20
	ctx.lr = 0x82A0C850;
	sub_82A0CB20(ctx, base);
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

__attribute__((alias("__imp__sub_82A0C868"))) PPC_WEAK_FUNC(sub_82A0C868);
PPC_FUNC_IMPL(__imp__sub_82A0C868) {
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
	// bl 0x82a0cc00
	ctx.lr = 0x82A0C880;
	sub_82A0CC00(ctx, base);
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

__attribute__((alias("__imp__sub_82A0C898"))) PPC_WEAK_FUNC(sub_82A0C898);
PPC_FUNC_IMPL(__imp__sub_82A0C898) {
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
	// bl 0x82a0cce8
	ctx.lr = 0x82A0C8B0;
	sub_82A0CCE8(ctx, base);
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

__attribute__((alias("__imp__sub_82A0C8C8"))) PPC_WEAK_FUNC(sub_82A0C8C8);
PPC_FUNC_IMPL(__imp__sub_82A0C8C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0C8E8"))) PPC_WEAK_FUNC(sub_82A0C8E8);
PPC_FUNC_IMPL(__imp__sub_82A0C8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82A0C8F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a0c9c8
	if (!ctx.cr6.lt) goto loc_82A0C9C8;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r25,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r25.s64;
	// add r11,r25,r10
	ctx.r11.u64 = ctx.r25.u64 + ctx.r10.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r26,-31885
	ctx.r26.s64 = -2089615360;
loc_82A0C920:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0c97c
	if (ctx.cr6.eq) goto loc_82A0C97C;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0c97c
	if (ctx.cr6.eq) goto loc_82A0C97C;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0c95c
	if (!ctx.cr6.eq) goto loc_82A0C95C;
	// bl 0x822900a0
	ctx.lr = 0x82A0C958;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82A0C95C:
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
	ctx.lr = 0x82A0C978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82A0C97C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0c9b0
	if (ctx.cr6.eq) goto loc_82A0C9B0;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0c99c
	if (!ctx.cr6.eq) goto loc_82A0C99C;
	// bl 0x822900a0
	ctx.lr = 0x82A0C998;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82A0C99C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0C9B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0C9B0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// bne 0x82a0c920
	if (!ctx.cr0.eq) goto loc_82A0C920;
loc_82A0C9C8:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d180
	ctx.lr = 0x82A0C9E0;
	sub_8232D180(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0C9E8"))) PPC_WEAK_FUNC(sub_82A0C9E8);
PPC_FUNC_IMPL(__imp__sub_82A0C9E8) {
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
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82A0CA14;
	sub_82294AC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,40
	ctx.r5.s64 = 40;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e640b8
	ctx.lr = 0x82A0CA38;
	sub_82E640B8(ctx, base);
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

__attribute__((alias("__imp__sub_82A0CA54"))) PPC_WEAK_FUNC(sub_82A0CA54);
PPC_FUNC_IMPL(__imp__sub_82A0CA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0CA58"))) PPC_WEAK_FUNC(sub_82A0CA58);
PPC_FUNC_IMPL(__imp__sub_82A0CA58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-20
	ctx.r3.s64 = ctx.r11.s64 + -20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0CA78"))) PPC_WEAK_FUNC(sub_82A0CA78);
PPC_FUNC_IMPL(__imp__sub_82A0CA78) {
	PPC_FUNC_PROLOGUE();
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82294ac0
	sub_82294AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0CA8C"))) PPC_WEAK_FUNC(sub_82A0CA8C);
PPC_FUNC_IMPL(__imp__sub_82A0CA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0CA90"))) PPC_WEAK_FUNC(sub_82A0CA90);
PPC_FUNC_IMPL(__imp__sub_82A0CA90) {
	PPC_FUNC_PROLOGUE();
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8232d230
	sub_8232D230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0CAA0"))) PPC_WEAK_FUNC(sub_82A0CAA0);
PPC_FUNC_IMPL(__imp__sub_82A0CAA0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82294498
	ctx.lr = 0x82A0CAD4;
	sub_82294498(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0cb04
	if (ctx.cr6.eq) goto loc_82A0CB04;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_82A0CB04:
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

__attribute__((alias("__imp__sub_82A0CB1C"))) PPC_WEAK_FUNC(sub_82A0CB1C);
PPC_FUNC_IMPL(__imp__sub_82A0CB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0CB20"))) PPC_WEAK_FUNC(sub_82A0CB20);
PPC_FUNC_IMPL(__imp__sub_82A0CB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A0CB28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82a0cbf4
	if (ctx.cr6.eq) goto loc_82A0CBF4;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// ble cr6,0x82a0cbd4
	if (!ctx.cr6.gt) goto loc_82A0CBD4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a0cb6c
	if (ctx.cr6.eq) goto loc_82A0CB6C;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x82294520
	ctx.lr = 0x82A0CB6C;
	sub_82294520(ctx, base);
loc_82A0CB6C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a0cbf4
	if (!ctx.cr6.gt) goto loc_82A0CBF4;
loc_82A0CB7C:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82A0CB94;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 * 44;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a0cbb4
	if (ctx.cr0.eq) goto loc_82A0CBB4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,44
	ctx.r5.s64 = 44;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82A0CBB4;
	sub_82CB1160(ctx, base);
loc_82A0CBB4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a0cb7c
	if (ctx.cr6.lt) goto loc_82A0CB7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82A0CBD4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0cbf8
	if (ctx.cr6.eq) goto loc_82A0CBF8;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x82294520
	ctx.lr = 0x82A0CBF4;
	sub_82294520(ctx, base);
loc_82A0CBF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A0CBF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0CC00"))) PPC_WEAK_FUNC(sub_82A0CC00);
PPC_FUNC_IMPL(__imp__sub_82A0CC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A0CC08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a0ccd8
	if (ctx.cr6.eq) goto loc_82A0CCD8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// ble cr6,0x82a0ccb8
	if (!ctx.cr6.gt) goto loc_82A0CCB8;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a0cc4c
	if (ctx.cr6.eq) goto loc_82A0CC4C;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82294520
	ctx.lr = 0x82A0CC4C;
	sub_82294520(ctx, base);
loc_82A0CC4C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a0ccd8
	if (!ctx.cr6.gt) goto loc_82A0CCD8;
loc_82A0CC5C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82a0d358
	ctx.lr = 0x82A0CC68;
	sub_82A0D358(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0cc98
	if (ctx.cr6.eq) goto loc_82A0CC98;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,5
	ctx.r9.s64 = 5;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A0CC84:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82a0cc84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0CC84;
loc_82A0CC98:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a0cc5c
	if (ctx.cr6.lt) goto loc_82A0CC5C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82A0CCB8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0ccdc
	if (ctx.cr6.eq) goto loc_82A0CCDC;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82294520
	ctx.lr = 0x82A0CCD8;
	sub_82294520(ctx, base);
loc_82A0CCD8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82A0CCDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0CCE4"))) PPC_WEAK_FUNC(sub_82A0CCE4);
PPC_FUNC_IMPL(__imp__sub_82A0CCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0CCE8"))) PPC_WEAK_FUNC(sub_82A0CCE8);
PPC_FUNC_IMPL(__imp__sub_82A0CCE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A0CCF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a0cdb8
	if (ctx.cr6.eq) goto loc_82A0CDB8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// ble cr6,0x82a0cd98
	if (!ctx.cr6.gt) goto loc_82A0CD98;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a0cd34
	if (ctx.cr6.eq) goto loc_82A0CD34;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82294520
	ctx.lr = 0x82A0CD34;
	sub_82294520(ctx, base);
loc_82A0CD34:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a0cdb8
	if (!ctx.cr6.gt) goto loc_82A0CDB8;
loc_82A0CD44:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82a0d3b0
	ctx.lr = 0x82A0CD50;
	sub_82A0D3B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0cd78
	if (ctx.cr6.eq) goto loc_82A0CD78;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
loc_82A0CD78:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a0cd44
	if (ctx.cr6.lt) goto loc_82A0CD44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82A0CD98:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0cdbc
	if (ctx.cr6.eq) goto loc_82A0CDBC;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82294520
	ctx.lr = 0x82A0CDB8;
	sub_82294520(ctx, base);
loc_82A0CDB8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82A0CDBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0CDC4"))) PPC_WEAK_FUNC(sub_82A0CDC4);
PPC_FUNC_IMPL(__imp__sub_82A0CDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0CDC8"))) PPC_WEAK_FUNC(sub_82A0CDC8);
PPC_FUNC_IMPL(__imp__sub_82A0CDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A0CDD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82a0ce98
	if (ctx.cr6.eq) goto loc_82A0CE98;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// ble cr6,0x82a0ce78
	if (!ctx.cr6.gt) goto loc_82A0CE78;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a0ce14
	if (ctx.cr6.eq) goto loc_82A0CE14;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x82294520
	ctx.lr = 0x82A0CE14;
	sub_82294520(ctx, base);
loc_82A0CE14:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a0ce98
	if (!ctx.cr6.gt) goto loc_82A0CE98;
loc_82A0CE24:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82A0CE3C;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 * 44;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a0ce5c
	if (ctx.cr0.eq) goto loc_82A0CE5C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,44
	ctx.r5.s64 = 44;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82A0CE5C;
	sub_82CB1160(ctx, base);
loc_82A0CE5C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a0ce24
	if (ctx.cr6.lt) goto loc_82A0CE24;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82A0CE78:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0ce98
	if (ctx.cr6.eq) goto loc_82A0CE98;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x82A0CE98;
	sub_82294520(ctx, base);
loc_82A0CE98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0CEA0"))) PPC_WEAK_FUNC(sub_82A0CEA0);
PPC_FUNC_IMPL(__imp__sub_82A0CEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A0CEA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a0cf74
	if (ctx.cr6.eq) goto loc_82A0CF74;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// ble cr6,0x82a0cf54
	if (!ctx.cr6.gt) goto loc_82A0CF54;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a0ceec
	if (ctx.cr6.eq) goto loc_82A0CEEC;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82294520
	ctx.lr = 0x82A0CEEC;
	sub_82294520(ctx, base);
loc_82A0CEEC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a0cf74
	if (!ctx.cr6.gt) goto loc_82A0CF74;
loc_82A0CEFC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82a0d358
	ctx.lr = 0x82A0CF08;
	sub_82A0D358(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0cf38
	if (ctx.cr6.eq) goto loc_82A0CF38;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,5
	ctx.r9.s64 = 5;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A0CF24:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82a0cf24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0CF24;
loc_82A0CF38:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a0cefc
	if (ctx.cr6.lt) goto loc_82A0CEFC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82A0CF54:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0cf74
	if (ctx.cr6.eq) goto loc_82A0CF74;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82294520
	ctx.lr = 0x82A0CF74;
	sub_82294520(ctx, base);
loc_82A0CF74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0CF7C"))) PPC_WEAK_FUNC(sub_82A0CF7C);
PPC_FUNC_IMPL(__imp__sub_82A0CF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0CF80"))) PPC_WEAK_FUNC(sub_82A0CF80);
PPC_FUNC_IMPL(__imp__sub_82A0CF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A0CF88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a0d04c
	if (ctx.cr6.eq) goto loc_82A0D04C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// ble cr6,0x82a0d02c
	if (!ctx.cr6.gt) goto loc_82A0D02C;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a0cfcc
	if (ctx.cr6.eq) goto loc_82A0CFCC;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82294520
	ctx.lr = 0x82A0CFCC;
	sub_82294520(ctx, base);
loc_82A0CFCC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a0d04c
	if (!ctx.cr6.gt) goto loc_82A0D04C;
loc_82A0CFDC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82a0d3b0
	ctx.lr = 0x82A0CFE8;
	sub_82A0D3B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0d010
	if (ctx.cr6.eq) goto loc_82A0D010;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
loc_82A0D010:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a0cfdc
	if (ctx.cr6.lt) goto loc_82A0CFDC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82A0D02C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0d04c
	if (ctx.cr6.eq) goto loc_82A0D04C;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82294520
	ctx.lr = 0x82A0D04C;
	sub_82294520(ctx, base);
loc_82A0D04C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0D054"))) PPC_WEAK_FUNC(sub_82A0D054);
PPC_FUNC_IMPL(__imp__sub_82A0D054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D058"))) PPC_WEAK_FUNC(sub_82A0D058);
PPC_FUNC_IMPL(__imp__sub_82A0D058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,44
	ctx.r10.s64 = ctx.r4.s64 * 44;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0D068"))) PPC_WEAK_FUNC(sub_82A0D068);
PPC_FUNC_IMPL(__imp__sub_82A0D068) {
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
	// li r4,44
	ctx.r4.s64 = 44;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0D08C"))) PPC_WEAK_FUNC(sub_82A0D08C);
PPC_FUNC_IMPL(__imp__sub_82A0D08C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0D090"))) PPC_WEAK_FUNC(sub_82A0D090);
PPC_FUNC_IMPL(__imp__sub_82A0D090) {
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

__attribute__((alias("__imp__sub_82A0D0A8"))) PPC_WEAK_FUNC(sub_82A0D0A8);
PPC_FUNC_IMPL(__imp__sub_82A0D0A8) {
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
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0D0CC"))) PPC_WEAK_FUNC(sub_82A0D0CC);
PPC_FUNC_IMPL(__imp__sub_82A0D0CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0D0D0"))) PPC_WEAK_FUNC(sub_82A0D0D0);
PPC_FUNC_IMPL(__imp__sub_82A0D0D0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
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

__attribute__((alias("__imp__sub_82A0D0E8"))) PPC_WEAK_FUNC(sub_82A0D0E8);
PPC_FUNC_IMPL(__imp__sub_82A0D0E8) {
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
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0D10C"))) PPC_WEAK_FUNC(sub_82A0D10C);
PPC_FUNC_IMPL(__imp__sub_82A0D10C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0D110"))) PPC_WEAK_FUNC(sub_82A0D110);
PPC_FUNC_IMPL(__imp__sub_82A0D110) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82a0d120
	if (!ctx.cr6.eq) goto loc_82A0D120;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r4,25104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
loc_82A0D120:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// rldicr r6,r6,52,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 52) & 0xFFF0000000000000;
	// b 0x822a93e8
	sub_822A93E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0D140"))) PPC_WEAK_FUNC(sub_82A0D140);
PPC_FUNC_IMPL(__imp__sub_82A0D140) {
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
	// beq cr6,0x82a0d1a8
	if (ctx.cr6.eq) goto loc_82A0D1A8;
	// bl 0x82991c70
	ctx.lr = 0x82A0D160;
	sub_82991C70(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0d180
	if (ctx.cr6.eq) goto loc_82A0D180;
loc_82A0D16C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a0d190
	if (ctx.cr6.eq) goto loc_82A0D190;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0d16c
	if (!ctx.cr6.eq) goto loc_82A0D16C;
loc_82A0D180:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0d1a8
	if (ctx.cr6.eq) goto loc_82A0D1A8;
loc_82A0D190:
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
loc_82A0D1A8:
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

__attribute__((alias("__imp__sub_82A0D1C0"))) PPC_WEAK_FUNC(sub_82A0D1C0);
PPC_FUNC_IMPL(__imp__sub_82A0D1C0) {
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
	// beq cr6,0x82a0d228
	if (ctx.cr6.eq) goto loc_82A0D228;
	// bl 0x82989770
	ctx.lr = 0x82A0D1E0;
	sub_82989770(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0d200
	if (ctx.cr6.eq) goto loc_82A0D200;
loc_82A0D1EC:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a0d210
	if (ctx.cr6.eq) goto loc_82A0D210;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0d1ec
	if (!ctx.cr6.eq) goto loc_82A0D1EC;
loc_82A0D200:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0d228
	if (ctx.cr6.eq) goto loc_82A0D228;
loc_82A0D210:
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
loc_82A0D228:
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

__attribute__((alias("__imp__sub_82A0D240"))) PPC_WEAK_FUNC(sub_82A0D240);
PPC_FUNC_IMPL(__imp__sub_82A0D240) {
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
	// beq cr6,0x82a0d2a8
	if (ctx.cr6.eq) goto loc_82A0D2A8;
	// bl 0x829ad798
	ctx.lr = 0x82A0D260;
	sub_829AD798(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0d280
	if (ctx.cr6.eq) goto loc_82A0D280;
loc_82A0D26C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82a0d290
	if (ctx.cr6.eq) goto loc_82A0D290;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0d26c
	if (!ctx.cr6.eq) goto loc_82A0D26C;
loc_82A0D280:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0d2a8
	if (ctx.cr6.eq) goto loc_82A0D2A8;
loc_82A0D290:
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
loc_82A0D2A8:
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

__attribute__((alias("__imp__sub_82A0D2C0"))) PPC_WEAK_FUNC(sub_82A0D2C0);
PPC_FUNC_IMPL(__imp__sub_82A0D2C0) {
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
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294498
	ctx.lr = 0x82A0D2F0;
	sub_82294498(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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

__attribute__((alias("__imp__sub_82A0D308"))) PPC_WEAK_FUNC(sub_82A0D308);
PPC_FUNC_IMPL(__imp__sub_82A0D308) {
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
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82A0D334;
	sub_82294AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 * 44;
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

__attribute__((alias("__imp__sub_82A0D354"))) PPC_WEAK_FUNC(sub_82A0D354);
PPC_FUNC_IMPL(__imp__sub_82A0D354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D358"))) PPC_WEAK_FUNC(sub_82A0D358);
PPC_FUNC_IMPL(__imp__sub_82A0D358) {
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
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82A0D384;
	sub_82294AC0(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
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

__attribute__((alias("__imp__sub_82A0D3AC"))) PPC_WEAK_FUNC(sub_82A0D3AC);
PPC_FUNC_IMPL(__imp__sub_82A0D3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D3B0"))) PPC_WEAK_FUNC(sub_82A0D3B0);
PPC_FUNC_IMPL(__imp__sub_82A0D3B0) {
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
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82A0D3DC;
	sub_82294AC0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
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

__attribute__((alias("__imp__sub_82A0D404"))) PPC_WEAK_FUNC(sub_82A0D404);
PPC_FUNC_IMPL(__imp__sub_82A0D404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D408"))) PPC_WEAK_FUNC(sub_82A0D408);
PPC_FUNC_IMPL(__imp__sub_82A0D408) {
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
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a0d440
	if (ctx.cr6.eq) goto loc_82A0D440;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x82A0D440;
	sub_82294520(ctx, base);
loc_82A0D440:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x82A0D448;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_82A0D460"))) PPC_WEAK_FUNC(sub_82A0D460);
PPC_FUNC_IMPL(__imp__sub_82A0D460) {
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
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a0d498
	if (ctx.cr6.eq) goto loc_82A0D498;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x82A0D498;
	sub_82294520(ctx, base);
loc_82A0D498:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x82A0D4A0;
	sub_82294CC8(ctx, base);
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

__attribute__((alias("__imp__sub_82A0D4B4"))) PPC_WEAK_FUNC(sub_82A0D4B4);
PPC_FUNC_IMPL(__imp__sub_82A0D4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D4B8"))) PPC_WEAK_FUNC(sub_82A0D4B8);
PPC_FUNC_IMPL(__imp__sub_82A0D4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82A0D4C0;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r15,-31882
	ctx.r15.s64 = -2089418752;
	// lis r14,-31882
	ctx.r14.s64 = -2089418752;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,596(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lfs f31,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// stfs f31,19084(r15)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r15.u32 + 19084, temp.u32);
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stb r30,19088(r14)
	PPC_STORE_U8(ctx.r14.u32 + 19088, ctx.r30.u8);
	// ble cr6,0x82a0d540
	if (!ctx.cr6.gt) goto loc_82A0D540;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82a0d524
	if (ctx.cr6.gt) goto loc_82A0D524;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82a0d52c
	goto loc_82A0D52C;
loc_82A0D524:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A0D52C:
	// lfs f13,600(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 600);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x82a0dbe8
	if (ctx.cr6.gt) goto loc_82A0DBE8;
loc_82A0D540:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lis r19,-31882
	ctx.r19.s64 = -2089418752;
	// addi r20,r11,32088
	ctx.r20.s64 = ctx.r11.s64 + 32088;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f30,1004(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 1004);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82a0d7e8
	if (ctx.cr6.eq) goto loc_82A0D7E8;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0d7e8
	if (ctx.cr6.eq) goto loc_82A0D7E8;
	// lwz r11,19080(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19080);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0d580
	if (!ctx.cr6.eq) goto loc_82A0D580;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,19080(r19)
	PPC_STORE_U32(ctx.r19.u32 + 19080, ctx.r11.u32);
loc_82A0D580:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0d594
	if (!ctx.cr6.eq) goto loc_82A0D594;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,19080(r19)
	PPC_STORE_U32(ctx.r19.u32 + 19080, ctx.r11.u32);
loc_82A0D594:
	// stfs f31,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r26,r11,19048
	ctx.r26.s64 = ctx.r11.s64 + 19048;
	// addi r25,r10,19068
	ctx.r25.s64 = ctx.r10.s64 + 19068;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lis r29,-31882
	ctx.r29.s64 = -2089418752;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lis r24,-31882
	ctx.r24.s64 = -2089418752;
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// lis r28,-31882
	ctx.r28.s64 = -2089418752;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lis r27,-31882
	ctx.r27.s64 = -2089418752;
	// lis r23,-31882
	ctx.r23.s64 = -2089418752;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lis r22,-31882
	ctx.r22.s64 = -2089418752;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// stfs f31,19096(r24)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r24.u32 + 19096, temp.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stfs f31,19104(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 19104, temp.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stfs f31,19108(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 19108, temp.u32);
	// stw r10,19032(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19032, ctx.r10.u32);
	// stfs f31,19028(r23)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r23.u32 + 19028, temp.u32);
	// stfs f31,19092(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 19092, temp.u32);
	// stw r9,19060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19060, ctx.r9.u32);
	// stfs f31,19100(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 19100, temp.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stfs f30,19064(r22)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r22.u32 + 19064, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0d66c
	if (ctx.cr6.eq) goto loc_82A0D66C;
	// lwz r9,0(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
loc_82A0D658:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a0d7d4
	if (ctx.cr6.eq) goto loc_82A0D7D4;
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0d658
	if (!ctx.cr6.eq) goto loc_82A0D658;
loc_82A0D66C:
	// lwz r9,0(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a0d690
	if (ctx.cr6.eq) goto loc_82A0D690;
loc_82A0D67C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a0d7d4
	if (ctx.cr6.eq) goto loc_82A0D7D4;
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0d67c
	if (!ctx.cr6.eq) goto loc_82A0D67C;
loc_82A0D690:
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// beq cr6,0x82a0d6a0
	if (ctx.cr6.eq) goto loc_82A0D6A0;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82A0D6A0:
	// stw r3,19032(r29)
	PPC_STORE_U32(ctx.r29.u32 + 19032, ctx.r3.u32);
	// cmplw cr6,r9,r18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82a0d6b4
	if (!ctx.cr6.eq) goto loc_82A0D6B4;
	// stw r11,19060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19060, ctx.r11.u32);
	// b 0x82a0d6b8
	goto loc_82A0D6B8;
loc_82A0D6B4:
	// stw r9,19060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19060, ctx.r9.u32);
loc_82A0D6B8:
	// bl 0x8237a020
	ctx.lr = 0x82A0D6BC;
	sub_8237A020(ctx, base);
	// stfs f1,19104(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 19104, temp.u32);
	// lwz r3,19060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19060);
	// bl 0x8237a020
	ctx.lr = 0x82A0D6C8;
	sub_8237A020(ctx, base);
	// lwz r10,19060(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19060);
	// stfs f1,19108(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 19108, temp.u32);
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// rlwinm r9,r11,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a0d708
	if (!ctx.cr6.eq) goto loc_82A0D708;
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r8,r9,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a0d708
	if (ctx.cr6.eq) goto loc_82A0D708;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0d708
	if (!ctx.cr6.eq) goto loc_82A0D708;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x82a0d70c
	if (!ctx.cr6.lt) goto loc_82A0D70C;
loc_82A0D708:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82A0D70C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfs f0,19104(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 19104);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0d728
	if (!ctx.cr6.eq) goto loc_82A0D728;
	// lfs f13,452(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 452);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f1,19108(r27)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 19108, temp.u32);
loc_82A0D728:
	// lwz r11,19032(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19032);
	// lfs f13,272(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f11,276(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,268(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,19028(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 19028, temp.u32);
	// lfs f9,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f9,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f8,276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f8.f64 = double(temp.f32);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f7,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fsubs f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f10,160(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// fdivs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// stfs f13,19064(r22)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r22.u32 + 19064, temp.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lwz r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// stw r8,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r8.u32);
	// fmuls f6,f12,f12
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stw r7,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r7.u32);
	// stw r6,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r6.u32);
	// fmadds f5,f11,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f4,f0,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fsqrts f3,f4
	ctx.f3.f64 = double(float(sqrt(ctx.f4.f64)));
	// fmuls f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f0,19096(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 19096, temp.u32);
	// stfs f0,19084(r15)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r15.u32 + 19084, temp.u32);
	// b 0x82a0d848
	goto loc_82A0D848;
loc_82A0D7D4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82A0D7E8:
	// lfs f0,272(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,268(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,276(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x82a0d848
	if (ctx.cr6.lt) goto loc_82A0D848;
	// lwz r10,12(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// lwz r9,16(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// lfs f0,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// stfs f9,19084(r15)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r15.u32 + 19084, temp.u32);
loc_82A0D848:
	// lfs f0,19084(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 19084);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lfs f13,620(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,19084(r15)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r15.u32 + 19084, temp.u32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x82a0d86c
	if (ctx.cr6.eq) goto loc_82A0D86C;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
loc_82A0D86C:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0D888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// addi r28,r11,19036
	ctx.r28.s64 = ctx.r11.s64 + 19036;
	// lwz r11,19080(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19080);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a0d8b8
	if (!ctx.cr6.eq) goto loc_82A0D8B8;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f31,4(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f31,8(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stw r11,19080(r19)
	PPC_STORE_U32(ctx.r19.u32 + 19080, ctx.r11.u32);
loc_82A0D8B8:
	// lwz r7,4(r16)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82a0d9dc
	if (!ctx.cr6.gt) goto loc_82A0D9DC;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82a0d968
	if (ctx.cr6.lt) goto loc_82A0D968;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A0D8F8:
	// lfs f11,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f10,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// lfs f5,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// lfs f12,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f5,f9
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// lfs f10,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f4,f7
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// fadds f8,f3,f6
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f7,f2,f11
	ctx.f7.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// fadds f6,f1,f9
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// fadds f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// fadds f0,f13,f7
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f13,f12,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f12,f10,f5
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// bne 0x82a0d8f8
	if (!ctx.cr0.eq) goto loc_82A0D8F8;
loc_82A0D968:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82a0d9a4
	if (!ctx.cr6.lt) goto loc_82A0D9A4;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mulli r10,r8,56
	ctx.r10.s64 = ctx.r8.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
loc_82A0D980:
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// bne 0x82a0d980
	if (!ctx.cr0.eq) goto loc_82A0D980;
loc_82A0D9A4:
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f11,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f8,f30,f9
	ctx.f8.f64 = double(float(ctx.f30.f64 / ctx.f9.f64));
	// fmuls f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f7,168(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f6,160(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f5,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f5,164(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r31,168(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// b 0x82a0da04
	goto loc_82A0DA04;
loc_82A0D9DC:
	// lwz r11,368(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,396
	ctx.r11.s64 = ctx.r11.s64 + 396;
	// bne cr6,0x82a0d9f0
	if (!ctx.cr6.eq) goto loc_82A0D9F0;
	// addi r11,r18,244
	ctx.r11.s64 = ctx.r18.s64 + 244;
loc_82A0D9F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
loc_82A0DA04:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f0,19084(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 19084);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0dae0
	if (!ctx.cr6.eq) goto loc_82A0DAE0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82a0dbe8
	if (!ctx.cr6.gt) goto loc_82A0DBE8;
	// lhz r11,568(r18)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r18.u32 + 568);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0dbe8
	if (ctx.cr6.eq) goto loc_82A0DBE8;
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
	// bgt cr6,0x82a0da4c
	if (ctx.cr6.gt) goto loc_82A0DA4C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82a0da54
	goto loc_82A0DA54;
loc_82A0DA4C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A0DA54:
	// lfs f0,852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stfs f0,600(r18)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r18.u32 + 600, temp.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// bl 0x829809b8
	ctx.lr = 0x82A0DA80;
	sub_829809B8(ctx, base);
	// lfs f0,19084(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 19084);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f13.u64);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,32
	ctx.r5.s64 = 32;
	// rldicr r31,r31,32,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r26,r11,32,63
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r27,148(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82cb1160
	ctx.lr = 0x82A0DAB4;
	sub_82CB1160(ctx, base);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x824c68d0
	ctx.lr = 0x82A0DADC;
	sub_824C68D0(ctx, base);
	// b 0x82a0dbe0
	goto loc_82A0DBE0;
loc_82A0DAE0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82a0dbe8
	if (!ctx.cr6.gt) goto loc_82A0DBE8;
	// lwz r11,568(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 568);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0dbe8
	if (ctx.cr6.eq) goto loc_82A0DBE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0DB08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0dbe8
	if (ctx.cr6.eq) goto loc_82A0DBE8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x82a0dbe8
	if (ctx.cr6.eq) goto loc_82A0DBE8;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0db30
	if (ctx.cr6.eq) goto loc_82A0DB30;
	// lwz r27,504(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
loc_82A0DB30:
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
	// bgt cr6,0x82a0db50
	if (ctx.cr6.gt) goto loc_82A0DB50;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82a0db58
	goto loc_82A0DB58;
loc_82A0DB50:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A0DB58:
	// lfs f0,852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stfs f0,600(r18)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r18.u32 + 600, temp.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// bl 0x829809b8
	ctx.lr = 0x82A0DB84;
	sub_829809B8(ctx, base);
	// lfs f0,19084(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 19084);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f13.u64);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,32
	ctx.r5.s64 = 32;
	// rldicr r31,r31,32,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r25,r11,32,63
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r26,148(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82cb1160
	ctx.lr = 0x82A0DBB8;
	sub_82CB1160(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x824c68d0
	ctx.lr = 0x82A0DBE0;
	sub_824C68D0(ctx, base);
loc_82A0DBE0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,19088(r14)
	PPC_STORE_U8(ctx.r14.u32 + 19088, ctx.r10.u8);
loc_82A0DBE8:
	// lbz r10,19088(r14)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r14.u32 + 19088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0dbf8
	if (!ctx.cr6.eq) goto loc_82A0DBF8;
	// stfs f31,19084(r15)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r15.u32 + 19084, temp.u32);
loc_82A0DBF8:
	// lfs f1,19084(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 19084);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0DC0C"))) PPC_WEAK_FUNC(sub_82A0DC0C);
PPC_FUNC_IMPL(__imp__sub_82A0DC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DC10"))) PPC_WEAK_FUNC(sub_82A0DC10);
PPC_FUNC_IMPL(__imp__sub_82A0DC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A0DC18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,224(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 224);
	// bl 0x8229e490
	ctx.lr = 0x82A0DC44;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A0DC60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0DC68"))) PPC_WEAK_FUNC(sub_82A0DC68);
PPC_FUNC_IMPL(__imp__sub_82A0DC68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0DC6C"))) PPC_WEAK_FUNC(sub_82A0DC6C);
PPC_FUNC_IMPL(__imp__sub_82A0DC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DC70"))) PPC_WEAK_FUNC(sub_82A0DC70);
PPC_FUNC_IMPL(__imp__sub_82A0DC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A0DC78;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-1244(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1244);
	// bl 0x8229e490
	ctx.lr = 0x82A0DCA4;
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
	ctx.lr = 0x82A0DCC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0DCC8"))) PPC_WEAK_FUNC(sub_82A0DCC8);
PPC_FUNC_IMPL(__imp__sub_82A0DCC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0DCCC"))) PPC_WEAK_FUNC(sub_82A0DCCC);
PPC_FUNC_IMPL(__imp__sub_82A0DCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DCD0"))) PPC_WEAK_FUNC(sub_82A0DCD0);
PPC_FUNC_IMPL(__imp__sub_82A0DCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A0DCD8;
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
	// ld r4,-400(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -400);
	// bl 0x8229e490
	ctx.lr = 0x82A0DCFC;
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
	ctx.lr = 0x82A0DD18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0DD20"))) PPC_WEAK_FUNC(sub_82A0DD20);
PPC_FUNC_IMPL(__imp__sub_82A0DD20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0DD24"))) PPC_WEAK_FUNC(sub_82A0DD24);
PPC_FUNC_IMPL(__imp__sub_82A0DD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DD28"))) PPC_WEAK_FUNC(sub_82A0DD28);
PPC_FUNC_IMPL(__imp__sub_82A0DD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82A0DD30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,936(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 936);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8229e490
	ctx.lr = 0x82A0DD60;
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
	ctx.lr = 0x82A0DD7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0DD8C"))) PPC_WEAK_FUNC(sub_82A0DD8C);
PPC_FUNC_IMPL(__imp__sub_82A0DD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DD90"))) PPC_WEAK_FUNC(sub_82A0DD90);
PPC_FUNC_IMPL(__imp__sub_82A0DD90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0DD94"))) PPC_WEAK_FUNC(sub_82A0DD94);
PPC_FUNC_IMPL(__imp__sub_82A0DD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DD98"))) PPC_WEAK_FUNC(sub_82A0DD98);
PPC_FUNC_IMPL(__imp__sub_82A0DD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A0DDA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-1584(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -1584);
	// bl 0x8229e490
	ctx.lr = 0x82A0DDC8;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A0DDE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0DDF0"))) PPC_WEAK_FUNC(sub_82A0DDF0);
PPC_FUNC_IMPL(__imp__sub_82A0DDF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0DDF4"))) PPC_WEAK_FUNC(sub_82A0DDF4);
PPC_FUNC_IMPL(__imp__sub_82A0DDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DDF8"))) PPC_WEAK_FUNC(sub_82A0DDF8);
PPC_FUNC_IMPL(__imp__sub_82A0DDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A0DE00;
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
	// ld r4,-2160(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -2160);
	// bl 0x8229e490
	ctx.lr = 0x82A0DE24;
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
	ctx.lr = 0x82A0DE40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0DE48"))) PPC_WEAK_FUNC(sub_82A0DE48);
PPC_FUNC_IMPL(__imp__sub_82A0DE48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0DE4C"))) PPC_WEAK_FUNC(sub_82A0DE4C);
PPC_FUNC_IMPL(__imp__sub_82A0DE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DE50"))) PPC_WEAK_FUNC(sub_82A0DE50);
PPC_FUNC_IMPL(__imp__sub_82A0DE50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,44
	ctx.r10.s64 = ctx.r4.s64 * 44;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0DE60"))) PPC_WEAK_FUNC(sub_82A0DE60);
PPC_FUNC_IMPL(__imp__sub_82A0DE60) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
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

__attribute__((alias("__imp__sub_82A0DE78"))) PPC_WEAK_FUNC(sub_82A0DE78);
PPC_FUNC_IMPL(__imp__sub_82A0DE78) {
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

__attribute__((alias("__imp__sub_82A0DE90"))) PPC_WEAK_FUNC(sub_82A0DE90);
PPC_FUNC_IMPL(__imp__sub_82A0DE90) {
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

__attribute__((alias("__imp__sub_82A0DEA8"))) PPC_WEAK_FUNC(sub_82A0DEA8);
PPC_FUNC_IMPL(__imp__sub_82A0DEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 / ctx.f7.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0DEDC"))) PPC_WEAK_FUNC(sub_82A0DEDC);
PPC_FUNC_IMPL(__imp__sub_82A0DEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DEE0"))) PPC_WEAK_FUNC(sub_82A0DEE0);
PPC_FUNC_IMPL(__imp__sub_82A0DEE0) {
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
	// fmadds f1,f12,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0DEF4"))) PPC_WEAK_FUNC(sub_82A0DEF4);
PPC_FUNC_IMPL(__imp__sub_82A0DEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DEF8"))) PPC_WEAK_FUNC(sub_82A0DEF8);
PPC_FUNC_IMPL(__imp__sub_82A0DEF8) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0DF0C"))) PPC_WEAK_FUNC(sub_82A0DF0C);
PPC_FUNC_IMPL(__imp__sub_82A0DF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DF10"))) PPC_WEAK_FUNC(sub_82A0DF10);
PPC_FUNC_IMPL(__imp__sub_82A0DF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A0DF18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-3396(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -3396);
	// bl 0x8229e490
	ctx.lr = 0x82A0DF40;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A0DF5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0DF64"))) PPC_WEAK_FUNC(sub_82A0DF64);
PPC_FUNC_IMPL(__imp__sub_82A0DF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DF68"))) PPC_WEAK_FUNC(sub_82A0DF68);
PPC_FUNC_IMPL(__imp__sub_82A0DF68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0DF6C"))) PPC_WEAK_FUNC(sub_82A0DF6C);
PPC_FUNC_IMPL(__imp__sub_82A0DF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DF70"))) PPC_WEAK_FUNC(sub_82A0DF70);
PPC_FUNC_IMPL(__imp__sub_82A0DF70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0DF78"))) PPC_WEAK_FUNC(sub_82A0DF78);
PPC_FUNC_IMPL(__imp__sub_82A0DF78) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
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

__attribute__((alias("__imp__sub_82A0DF90"))) PPC_WEAK_FUNC(sub_82A0DF90);
PPC_FUNC_IMPL(__imp__sub_82A0DF90) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r8,r9,16744
	ctx.r8.s64 = ctx.r9.s64 + 16744;
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

__attribute__((alias("__imp__sub_82A0DFB8"))) PPC_WEAK_FUNC(sub_82A0DFB8);
PPC_FUNC_IMPL(__imp__sub_82A0DFB8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0DFC0"))) PPC_WEAK_FUNC(sub_82A0DFC0);
PPC_FUNC_IMPL(__imp__sub_82A0DFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r8,r9,16744
	ctx.r8.s64 = ctx.r9.s64 + 16744;
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

__attribute__((alias("__imp__sub_82A0DFE0"))) PPC_WEAK_FUNC(sub_82A0DFE0);
PPC_FUNC_IMPL(__imp__sub_82A0DFE0) {
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
	// bl 0x82a0e050
	ctx.lr = 0x82A0E000;
	sub_82A0E050(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0e034
	if (ctx.cr6.eq) goto loc_82A0E034;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a0e02c
	if (ctx.cr6.lt) goto loc_82A0E02C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a0e034
	if (!ctx.cr6.gt) goto loc_82A0E034;
loc_82A0E02C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A0E034;
	sub_82294A58(ctx, base);
loc_82A0E034:
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

__attribute__((alias("__imp__sub_82A0E050"))) PPC_WEAK_FUNC(sub_82A0E050);
PPC_FUNC_IMPL(__imp__sub_82A0E050) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,16744
	ctx.r10.s64 = ctx.r11.s64 + 16744;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A0E074;
	sub_8229C068(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x826dd580
	ctx.lr = 0x82A0E07C;
	sub_826DD580(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x826dd580
	ctx.lr = 0x82A0E084;
	sub_826DD580(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x826dd580
	ctx.lr = 0x82A0E08C;
	sub_826DD580(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x826dd580
	ctx.lr = 0x82A0E094;
	sub_826DD580(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x826dd580
	ctx.lr = 0x82A0E09C;
	sub_826DD580(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x826dd580
	ctx.lr = 0x82A0E0A4;
	sub_826DD580(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x826dd580
	ctx.lr = 0x82A0E0AC;
	sub_826DD580(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x826dd580
	ctx.lr = 0x82A0E0B4;
	sub_826DD580(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82a0e100
	ctx.lr = 0x82A0E0BC;
	sub_82A0E100(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82a0e100
	ctx.lr = 0x82A0E0C4;
	sub_82A0E100(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82a0e100
	ctx.lr = 0x82A0E0CC;
	sub_82A0E100(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82a0e100
	ctx.lr = 0x82A0E0D4;
	sub_82A0E100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x82A0E0DC;
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

__attribute__((alias("__imp__sub_82A0E0F0"))) PPC_WEAK_FUNC(sub_82A0E0F0);
PPC_FUNC_IMPL(__imp__sub_82A0E0F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E0F4"))) PPC_WEAK_FUNC(sub_82A0E0F4);
PPC_FUNC_IMPL(__imp__sub_82A0E0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E0F8"))) PPC_WEAK_FUNC(sub_82A0E0F8);
PPC_FUNC_IMPL(__imp__sub_82A0E0F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E0FC"))) PPC_WEAK_FUNC(sub_82A0E0FC);
PPC_FUNC_IMPL(__imp__sub_82A0E0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E100"))) PPC_WEAK_FUNC(sub_82A0E100);
PPC_FUNC_IMPL(__imp__sub_82A0E100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A0E108;
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
	// beq cr6,0x82a0e148
	if (ctx.cr6.eq) goto loc_82A0E148;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0e134
	if (!ctx.cr6.eq) goto loc_82A0E134;
	// bl 0x822900a0
	ctx.lr = 0x82A0E130;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82A0E134:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0E148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0E148:
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

__attribute__((alias("__imp__sub_82A0E160"))) PPC_WEAK_FUNC(sub_82A0E160);
PPC_FUNC_IMPL(__imp__sub_82A0E160) {
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

__attribute__((alias("__imp__sub_82A0E170"))) PPC_WEAK_FUNC(sub_82A0E170);
PPC_FUNC_IMPL(__imp__sub_82A0E170) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a0e100
	sub_82A0E100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0E174"))) PPC_WEAK_FUNC(sub_82A0E174);
PPC_FUNC_IMPL(__imp__sub_82A0E174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E178"))) PPC_WEAK_FUNC(sub_82A0E178);
PPC_FUNC_IMPL(__imp__sub_82A0E178) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,15728
	ctx.r7.s64 = ctx.r9.s64 + 15728;
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

__attribute__((alias("__imp__sub_82A0E1A8"))) PPC_WEAK_FUNC(sub_82A0E1A8);
PPC_FUNC_IMPL(__imp__sub_82A0E1A8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E1B0"))) PPC_WEAK_FUNC(sub_82A0E1B0);
PPC_FUNC_IMPL(__imp__sub_82A0E1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,15728
	ctx.r7.s64 = ctx.r9.s64 + 15728;
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

__attribute__((alias("__imp__sub_82A0E1D8"))) PPC_WEAK_FUNC(sub_82A0E1D8);
PPC_FUNC_IMPL(__imp__sub_82A0E1D8) {
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
	// bl 0x82a0e248
	ctx.lr = 0x82A0E1F8;
	sub_82A0E248(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0e22c
	if (ctx.cr6.eq) goto loc_82A0E22C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a0e224
	if (ctx.cr6.lt) goto loc_82A0E224;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a0e22c
	if (!ctx.cr6.gt) goto loc_82A0E22C;
loc_82A0E224:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82A0E22C;
	sub_82294A58(ctx, base);
loc_82A0E22C:
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

__attribute__((alias("__imp__sub_82A0E248"))) PPC_WEAK_FUNC(sub_82A0E248);
PPC_FUNC_IMPL(__imp__sub_82A0E248) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,15728
	ctx.r10.s64 = ctx.r11.s64 + 15728;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229c068
	ctx.lr = 0x82A0E270;
	sub_8229C068(ctx, base);
	// lwz r9,1332(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,1324
	ctx.r30.s64 = ctx.r31.s64 + 1324;
	// stw r11,1328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1328, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a0e29c
	if (ctx.cr6.eq) goto loc_82A0E29C;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294520
	ctx.lr = 0x82A0E29C;
	sub_82294520(ctx, base);
loc_82A0E29C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294cc8
	ctx.lr = 0x82A0E2A4;
	sub_82294CC8(ctx, base);
	// addi r3,r31,1292
	ctx.r3.s64 = ctx.r31.s64 + 1292;
	// bl 0x82a0e4f0
	ctx.lr = 0x82A0E2AC;
	sub_82A0E4F0(ctx, base);
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// bl 0x822991c0
	ctx.lr = 0x82A0E2B4;
	sub_822991C0(ctx, base);
	// addi r3,r31,836
	ctx.r3.s64 = ctx.r31.s64 + 836;
	// bl 0x82295e20
	ctx.lr = 0x82A0E2BC;
	sub_82295E20(ctx, base);
	// addi r3,r31,796
	ctx.r3.s64 = ctx.r31.s64 + 796;
	// bl 0x829ef4b8
	ctx.lr = 0x82A0E2C4;
	sub_829EF4B8(ctx, base);
	// addi r3,r31,784
	ctx.r3.s64 = ctx.r31.s64 + 784;
	// bl 0x82a0e478
	ctx.lr = 0x82A0E2CC;
	sub_82A0E478(ctx, base);
	// addi r3,r31,772
	ctx.r3.s64 = ctx.r31.s64 + 772;
	// bl 0x823721d0
	ctx.lr = 0x82A0E2D4;
	sub_823721D0(ctx, base);
	// addi r3,r31,728
	ctx.r3.s64 = ctx.r31.s64 + 728;
	// bl 0x829da3e8
	ctx.lr = 0x82A0E2DC;
	sub_829DA3E8(ctx, base);
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x826dd580
	ctx.lr = 0x82A0E2E4;
	sub_826DD580(ctx, base);
	// addi r3,r31,692
	ctx.r3.s64 = ctx.r31.s64 + 692;
	// bl 0x82a0e338
	ctx.lr = 0x82A0E2EC;
	sub_82A0E338(ctx, base);
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// bl 0x82973208
	ctx.lr = 0x82A0E2F4;
	sub_82973208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826976d8
	ctx.lr = 0x82A0E2FC;
	sub_826976D8(ctx, base);
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

__attribute__((alias("__imp__sub_82A0E314"))) PPC_WEAK_FUNC(sub_82A0E314);
PPC_FUNC_IMPL(__imp__sub_82A0E314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E318"))) PPC_WEAK_FUNC(sub_82A0E318);
PPC_FUNC_IMPL(__imp__sub_82A0E318) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E320"))) PPC_WEAK_FUNC(sub_82A0E320);
PPC_FUNC_IMPL(__imp__sub_82A0E320) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E328"))) PPC_WEAK_FUNC(sub_82A0E328);
PPC_FUNC_IMPL(__imp__sub_82A0E328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E32C"))) PPC_WEAK_FUNC(sub_82A0E32C);
PPC_FUNC_IMPL(__imp__sub_82A0E32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E330"))) PPC_WEAK_FUNC(sub_82A0E330);
PPC_FUNC_IMPL(__imp__sub_82A0E330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E334"))) PPC_WEAK_FUNC(sub_82A0E334);
PPC_FUNC_IMPL(__imp__sub_82A0E334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E338"))) PPC_WEAK_FUNC(sub_82A0E338);
PPC_FUNC_IMPL(__imp__sub_82A0E338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82A0E340;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a0e414
	if (!ctx.cr6.gt) goto loc_82A0E414;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82A0E364:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0e3c0
	if (ctx.cr6.eq) goto loc_82A0E3C0;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a0e3c0
	if (ctx.cr6.eq) goto loc_82A0E3C0;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0e3a0
	if (!ctx.cr6.eq) goto loc_82A0E3A0;
	// bl 0x822900a0
	ctx.lr = 0x82A0E39C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82A0E3A0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0E3BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82A0E3C0:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a0e3f4
	if (ctx.cr6.eq) goto loc_82A0E3F4;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0e3e0
	if (!ctx.cr6.eq) goto loc_82A0E3E0;
	// bl 0x822900a0
	ctx.lr = 0x82A0E3DC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82A0E3E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0E3F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0E3F4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a0e364
	if (ctx.cr6.lt) goto loc_82A0E364;
loc_82A0E414:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a0e448
	if (ctx.cr6.eq) goto loc_82A0E448;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0e434
	if (!ctx.cr6.eq) goto loc_82A0E434;
	// bl 0x822900a0
	ctx.lr = 0x82A0E430;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82A0E434:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0E448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0E448:
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stw r30,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r30.u32);
	// stw r30,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0E45C"))) PPC_WEAK_FUNC(sub_82A0E45C);
PPC_FUNC_IMPL(__imp__sub_82A0E45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E460"))) PPC_WEAK_FUNC(sub_82A0E460);
PPC_FUNC_IMPL(__imp__sub_82A0E460) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a0e338
	sub_82A0E338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0E464"))) PPC_WEAK_FUNC(sub_82A0E464);
PPC_FUNC_IMPL(__imp__sub_82A0E464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E468"))) PPC_WEAK_FUNC(sub_82A0E468);
PPC_FUNC_IMPL(__imp__sub_82A0E468) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E46C"))) PPC_WEAK_FUNC(sub_82A0E46C);
PPC_FUNC_IMPL(__imp__sub_82A0E46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E470"))) PPC_WEAK_FUNC(sub_82A0E470);
PPC_FUNC_IMPL(__imp__sub_82A0E470) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E474"))) PPC_WEAK_FUNC(sub_82A0E474);
PPC_FUNC_IMPL(__imp__sub_82A0E474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E478"))) PPC_WEAK_FUNC(sub_82A0E478);
PPC_FUNC_IMPL(__imp__sub_82A0E478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A0E480;
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
	// beq cr6,0x82a0e4c0
	if (ctx.cr6.eq) goto loc_82A0E4C0;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0e4ac
	if (!ctx.cr6.eq) goto loc_82A0E4AC;
	// bl 0x822900a0
	ctx.lr = 0x82A0E4A8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82A0E4AC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0E4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0E4C0:
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

__attribute__((alias("__imp__sub_82A0E4D8"))) PPC_WEAK_FUNC(sub_82A0E4D8);
PPC_FUNC_IMPL(__imp__sub_82A0E4D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a0e478
	sub_82A0E478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0E4DC"))) PPC_WEAK_FUNC(sub_82A0E4DC);
PPC_FUNC_IMPL(__imp__sub_82A0E4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E4E0"))) PPC_WEAK_FUNC(sub_82A0E4E0);
PPC_FUNC_IMPL(__imp__sub_82A0E4E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E4E4"))) PPC_WEAK_FUNC(sub_82A0E4E4);
PPC_FUNC_IMPL(__imp__sub_82A0E4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E4E8"))) PPC_WEAK_FUNC(sub_82A0E4E8);
PPC_FUNC_IMPL(__imp__sub_82A0E4E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E4EC"))) PPC_WEAK_FUNC(sub_82A0E4EC);
PPC_FUNC_IMPL(__imp__sub_82A0E4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E4F0"))) PPC_WEAK_FUNC(sub_82A0E4F0);
PPC_FUNC_IMPL(__imp__sub_82A0E4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A0E4F8;
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
	// beq cr6,0x82a0e538
	if (ctx.cr6.eq) goto loc_82A0E538;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0e524
	if (!ctx.cr6.eq) goto loc_82A0E524;
	// bl 0x822900a0
	ctx.lr = 0x82A0E520;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82A0E524:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0E538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0E538:
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

__attribute__((alias("__imp__sub_82A0E550"))) PPC_WEAK_FUNC(sub_82A0E550);
PPC_FUNC_IMPL(__imp__sub_82A0E550) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a0e4f0
	sub_82A0E4F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0E554"))) PPC_WEAK_FUNC(sub_82A0E554);
PPC_FUNC_IMPL(__imp__sub_82A0E554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E558"))) PPC_WEAK_FUNC(sub_82A0E558);
PPC_FUNC_IMPL(__imp__sub_82A0E558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x82A0E570;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0e5f4
	if (ctx.cr6.eq) goto loc_82A0E5F4;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// ori r9,r11,16516
	ctx.r9.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r8,17008
	ctx.r11.s64 = ctx.r8.s64 + 17008;
	// lis r5,-32095
	ctx.r5.s64 = -2103377920;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// addi r8,r7,-20912
	ctx.r8.s64 = ctx.r7.s64 + -20912;
	// addi r7,r6,-20920
	ctx.r7.s64 = ctx.r6.s64 + -20920;
	// addi r6,r5,-5720
	ctx.r6.s64 = ctx.r5.s64 + -5720;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// addi r10,r4,14488
	ctx.r10.s64 = ctx.r4.s64 + 14488;
	// addi r9,r9,11336
	ctx.r9.s64 = ctx.r9.s64 + 11336;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,640
	ctx.r5.s64 = 640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x82A0E5E4;
	sub_82398460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A0E5F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E608"))) PPC_WEAK_FUNC(sub_82A0E608);
PPC_FUNC_IMPL(__imp__sub_82A0E608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82A0E610;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r10,-27948(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27948);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0e63c
	if (!ctx.cr6.eq) goto loc_82A0E63C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82686ea8
	ctx.lr = 0x82A0E630;
	sub_82686EA8(ctx, base);
	// stw r3,-27948(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27948, ctx.r3.u32);
	// bl 0x82686f68
	ctx.lr = 0x82A0E638;
	sub_82686F68(ctx, base);
	// lwz r10,-27948(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27948);
loc_82A0E63C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lwz r11,-25496(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25496);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a0e65c
	if (ctx.cr6.eq) goto loc_82A0E65C;
	// bl 0x82310f68
	ctx.lr = 0x82A0E650;
	sub_82310F68(ctx, base);
	// lwz r11,-25496(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25496);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82a0e664
	goto loc_82A0E664;
loc_82A0E65C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82A0E664:
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
	// bne cr6,0x82a0e694
	if (!ctx.cr6.eq) goto loc_82A0E694;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aace8
	ctx.lr = 0x82A0E684;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82A0E68C;
	sub_822AADA8(ctx, base);
	// lwz r11,-25496(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25496);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82A0E694:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0e6c0
	if (!ctx.cr6.eq) goto loc_82A0E6C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82398580
	ctx.lr = 0x82A0E6B0;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x82A0E6B8;
	sub_82398640(ctx, base);
	// lwz r11,-25496(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25496);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_82A0E6C0:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a0e6f8
	if (ctx.cr6.eq) goto loc_82A0E6F8;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x82A0E6DC;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82a0e6f8
	if (!ctx.cr6.eq) goto loc_82A0E6F8;
	// lwz r3,-25496(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25496);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A0E6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0E6F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0E700"))) PPC_WEAK_FUNC(sub_82A0E700);
PPC_FUNC_IMPL(__imp__sub_82A0E700) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E708"))) PPC_WEAK_FUNC(sub_82A0E708);
PPC_FUNC_IMPL(__imp__sub_82A0E708) {
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
	// lwz r11,-27948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27948);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0e74c
	if (!ctx.cr6.eq) goto loc_82A0E74C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82686ea8
	ctx.lr = 0x82A0E740;
	sub_82686EA8(ctx, base);
	// stw r3,-27948(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27948, ctx.r3.u32);
	// bl 0x82686f68
	ctx.lr = 0x82A0E748;
	sub_82686F68(ctx, base);
	// lwz r11,-27948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27948);
loc_82A0E74C:
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

__attribute__((alias("__imp__sub_82A0E774"))) PPC_WEAK_FUNC(sub_82A0E774);
PPC_FUNC_IMPL(__imp__sub_82A0E774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E778"))) PPC_WEAK_FUNC(sub_82A0E778);
PPC_FUNC_IMPL(__imp__sub_82A0E778) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwimi r11,r4,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E788"))) PPC_WEAK_FUNC(sub_82A0E788);
PPC_FUNC_IMPL(__imp__sub_82A0E788) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E794"))) PPC_WEAK_FUNC(sub_82A0E794);
PPC_FUNC_IMPL(__imp__sub_82A0E794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E798"))) PPC_WEAK_FUNC(sub_82A0E798);
PPC_FUNC_IMPL(__imp__sub_82A0E798) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E7A0"))) PPC_WEAK_FUNC(sub_82A0E7A0);
PPC_FUNC_IMPL(__imp__sub_82A0E7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E7AC"))) PPC_WEAK_FUNC(sub_82A0E7AC);
PPC_FUNC_IMPL(__imp__sub_82A0E7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E7B0"))) PPC_WEAK_FUNC(sub_82A0E7B0);
PPC_FUNC_IMPL(__imp__sub_82A0E7B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,15,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E7BC"))) PPC_WEAK_FUNC(sub_82A0E7BC);
PPC_FUNC_IMPL(__imp__sub_82A0E7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E7C0"))) PPC_WEAK_FUNC(sub_82A0E7C0);
PPC_FUNC_IMPL(__imp__sub_82A0E7C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,14,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E7CC"))) PPC_WEAK_FUNC(sub_82A0E7CC);
PPC_FUNC_IMPL(__imp__sub_82A0E7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E7D0"))) PPC_WEAK_FUNC(sub_82A0E7D0);
PPC_FUNC_IMPL(__imp__sub_82A0E7D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwimi r11,r4,26,5,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 26) & 0x4000000) | (ctx.r11.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E7E0"))) PPC_WEAK_FUNC(sub_82A0E7E0);
PPC_FUNC_IMPL(__imp__sub_82A0E7E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,6,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E7EC"))) PPC_WEAK_FUNC(sub_82A0E7EC);
PPC_FUNC_IMPL(__imp__sub_82A0E7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E7F0"))) PPC_WEAK_FUNC(sub_82A0E7F0);
PPC_FUNC_IMPL(__imp__sub_82A0E7F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwimi r11,r4,25,6,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 25) & 0x2000000) | (ctx.r11.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E800"))) PPC_WEAK_FUNC(sub_82A0E800);
PPC_FUNC_IMPL(__imp__sub_82A0E800) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,7,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E80C"))) PPC_WEAK_FUNC(sub_82A0E80C);
PPC_FUNC_IMPL(__imp__sub_82A0E80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E810"))) PPC_WEAK_FUNC(sub_82A0E810);
PPC_FUNC_IMPL(__imp__sub_82A0E810) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwimi r11,r4,24,7,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0x1000000) | (ctx.r11.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E820"))) PPC_WEAK_FUNC(sub_82A0E820);
PPC_FUNC_IMPL(__imp__sub_82A0E820) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 568);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E82C"))) PPC_WEAK_FUNC(sub_82A0E82C);
PPC_FUNC_IMPL(__imp__sub_82A0E82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E830"))) PPC_WEAK_FUNC(sub_82A0E830);
PPC_FUNC_IMPL(__imp__sub_82A0E830) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwimi r11,r4,23,8,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x800000) | (ctx.r11.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E840"))) PPC_WEAK_FUNC(sub_82A0E840);
PPC_FUNC_IMPL(__imp__sub_82A0E840) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,9,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E84C"))) PPC_WEAK_FUNC(sub_82A0E84C);
PPC_FUNC_IMPL(__imp__sub_82A0E84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E850"))) PPC_WEAK_FUNC(sub_82A0E850);
PPC_FUNC_IMPL(__imp__sub_82A0E850) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwimi r11,r4,22,9,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 22) & 0x400000) | (ctx.r11.u64 & 0xFFFFFFFFFFBFFFFF);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E860"))) PPC_WEAK_FUNC(sub_82A0E860);
PPC_FUNC_IMPL(__imp__sub_82A0E860) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,10,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E86C"))) PPC_WEAK_FUNC(sub_82A0E86C);
PPC_FUNC_IMPL(__imp__sub_82A0E86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E870"))) PPC_WEAK_FUNC(sub_82A0E870);
PPC_FUNC_IMPL(__imp__sub_82A0E870) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwimi r11,r4,21,10,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0x200000) | (ctx.r11.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E880"))) PPC_WEAK_FUNC(sub_82A0E880);
PPC_FUNC_IMPL(__imp__sub_82A0E880) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E88C"))) PPC_WEAK_FUNC(sub_82A0E88C);
PPC_FUNC_IMPL(__imp__sub_82A0E88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E890"))) PPC_WEAK_FUNC(sub_82A0E890);
PPC_FUNC_IMPL(__imp__sub_82A0E890) {
	PPC_FUNC_PROLOGUE();
	// stw r4,572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 572, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E898"))) PPC_WEAK_FUNC(sub_82A0E898);
PPC_FUNC_IMPL(__imp__sub_82A0E898) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,572(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E8A0"))) PPC_WEAK_FUNC(sub_82A0E8A0);
PPC_FUNC_IMPL(__imp__sub_82A0E8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,592(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 592, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E8A8"))) PPC_WEAK_FUNC(sub_82A0E8A8);
PPC_FUNC_IMPL(__imp__sub_82A0E8A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,592(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E8B0"))) PPC_WEAK_FUNC(sub_82A0E8B0);
PPC_FUNC_IMPL(__imp__sub_82A0E8B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwimi r11,r4,28,3,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E8C0"))) PPC_WEAK_FUNC(sub_82A0E8C0);
PPC_FUNC_IMPL(__imp__sub_82A0E8C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,4,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E8CC"))) PPC_WEAK_FUNC(sub_82A0E8CC);
PPC_FUNC_IMPL(__imp__sub_82A0E8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E8D0"))) PPC_WEAK_FUNC(sub_82A0E8D0);
PPC_FUNC_IMPL(__imp__sub_82A0E8D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwimi r11,r4,27,4,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 27) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E8E0"))) PPC_WEAK_FUNC(sub_82A0E8E0);
PPC_FUNC_IMPL(__imp__sub_82A0E8E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r3,r11,5,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E8EC"))) PPC_WEAK_FUNC(sub_82A0E8EC);
PPC_FUNC_IMPL(__imp__sub_82A0E8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E8F0"))) PPC_WEAK_FUNC(sub_82A0E8F0);
PPC_FUNC_IMPL(__imp__sub_82A0E8F0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 624, ctx.r4.u32);
	// stw r5,628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 628, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E8FC"))) PPC_WEAK_FUNC(sub_82A0E8FC);
PPC_FUNC_IMPL(__imp__sub_82A0E8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E900"))) PPC_WEAK_FUNC(sub_82A0E900);
PPC_FUNC_IMPL(__imp__sub_82A0E900) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,624(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,628(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E914"))) PPC_WEAK_FUNC(sub_82A0E914);
PPC_FUNC_IMPL(__imp__sub_82A0E914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E918"))) PPC_WEAK_FUNC(sub_82A0E918);
PPC_FUNC_IMPL(__imp__sub_82A0E918) {
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
	// bl 0x82773978
	ctx.lr = 0x82A0E938;
	sub_82773978(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0e98c
	if (ctx.cr6.eq) goto loc_82A0E98C;
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r11,728(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0e97c
	if (!ctx.cr6.eq) goto loc_82A0E97C;
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0e97c
	if (ctx.cr6.eq) goto loc_82A0E97C;
	// stw r11,728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 728, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r10,500(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// stw r10,724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 724, ctx.r10.u32);
	// lwz r3,492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// bl 0x822aa9e8
	ctx.lr = 0x82A0E97C;
	sub_822AA9E8(ctx, base);
loc_82A0E97C:
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r11,512
	ctx.r11.s64 = 512;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// stw r11,728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 728, ctx.r11.u32);
loc_82A0E98C:
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

