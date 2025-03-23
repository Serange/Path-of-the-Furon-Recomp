#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EA6B64"))) PPC_WEAK_FUNC(sub_82EA6B64);
PPC_FUNC_IMPL(__imp__sub_82EA6B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA6B68"))) PPC_WEAK_FUNC(sub_82EA6B68);
PPC_FUNC_IMPL(__imp__sub_82EA6B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EA6B70;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6adc
	ctx.lr = 0x82EA6B78;
	__savefpr_25(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r5,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r5.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r31,924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 924, ctx.r31.u32);
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
	// bl 0x82eb9228
	ctx.lr = 0x82EA6B9C;
	sub_82EB9228(ctx, base);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r14,r20
	ctx.r14.u64 = ctx.r20.u64;
	// mr r15,r20
	ctx.r15.u64 = ctx.r20.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EA6BBC:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82ea6bbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA6BBC;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EA6BDC:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82ea6bdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA6BDC;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82ea6c10
	if (!ctx.cr6.eq) goto loc_82EA6C10;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82eb9a40
	ctx.lr = 0x82EA6BF8;
	sub_82EB9A40(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EA6C00:
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b28
	ctx.lr = 0x82EA6C0C;
	__restfpr_25(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82EA6C10:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ea6c30
	if (!ctx.cr6.eq) goto loc_82EA6C30;
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_82EA6C20:
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82eb9a40
	ctx.lr = 0x82EA6C28;
	sub_82EB9A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ea6c00
	goto loc_82EA6C00;
loc_82EA6C30:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e85a00
	ctx.lr = 0x82EA6C38;
	sub_82E85A00(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e86098
	ctx.lr = 0x82EA6C4C;
	sub_82E86098(ctx, base);
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// bl 0x82299698
	ctx.lr = 0x82EA6C60;
	sub_82299698(ctx, base);
	// mr. r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne 0x82ea6c74
	if (!ctx.cr0.eq) goto loc_82EA6C74;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82ea70c4
	goto loc_82EA70C4;
loc_82EA6C74:
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// lwz r10,304(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r16,r10,24,31,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// beq 0x82ea6ca4
	if (ctx.cr0.eq) goto loc_82EA6CA4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,324(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82e5f960
	ctx.lr = 0x82EA6C98;
	sub_82E5F960(ctx, base);
	// subfc r11,r19,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r19.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r19.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r14,r11,31
	ctx.r14.u64 = ctx.r11.u32 & 0x1;
loc_82EA6CA4:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82ea6cdc
	if (ctx.cr6.eq) goto loc_82EA6CDC;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x82ea6cdc
	if (ctx.cr6.eq) goto loc_82EA6CDC;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e5f668
	ctx.lr = 0x82EA6CC0;
	sub_82E5F668(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,444(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// bl 0x82299698
	ctx.lr = 0x82EA6CCC;
	sub_82299698(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea70c4
	if (ctx.cr0.eq) goto loc_82EA70C4;
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
loc_82EA6CDC:
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82ea7044
	if (ctx.cr6.eq) goto loc_82EA7044;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r21,120(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f31.f64 = double(temp.f32);
	// lfs f25,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f25.f64 = double(temp.f32);
loc_82EA6CFC:
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e86098
	ctx.lr = 0x82EA6D0C;
	sub_82E86098(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e860a0
	ctx.lr = 0x82EA6D18;
	sub_82E860A0(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// beq cr6,0x82ea6d44
	if (ctx.cr6.eq) goto loc_82EA6D44;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EA6D44:
	// bl 0x82eb9a48
	ctx.lr = 0x82EA6D48;
	sub_82EB9A48(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ea70a0
	if (ctx.cr0.lt) goto loc_82EA70A0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82ea6dbc
	if (ctx.cr6.eq) goto loc_82EA6DBC;
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// lwz r21,208(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// beq cr6,0x82ea70d4
	if (ctx.cr6.eq) goto loc_82EA70D4;
	// lwz r11,440(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ea70d4
	if (ctx.cr6.lt) goto loc_82EA70D4;
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,328(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// clrlwi r7,r11,26
	ctx.r7.u64 = ctx.r11.u32 & 0x3F;
	// lwz r4,324(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// li r15,1
	ctx.r15.s64 = 1;
	// bl 0x82e5fe08
	ctx.lr = 0x82EA6DA4;
	sub_82E5FE08(ctx, base);
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r10,408(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
loc_82EA6DB4:
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
loc_82EA6DBC:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ec85d0
	ctx.lr = 0x82EA6DC4;
	sub_82EC85D0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82ea7154
	if (ctx.cr0.eq) goto loc_82EA7154;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ebaa40
	ctx.lr = 0x82EA6DD4;
	sub_82EBAA40(ctx, base);
	// lwz r9,480(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// lwz r11,488(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r10,484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r8,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r8.u64);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lfd f0,368(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// std r7,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r7.u64);
	// lfd f13,336(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// std r8,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r8.u64);
	// lfd f12,344(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f26,f25,f0
	ctx.f26.f64 = double(float(ctx.f25.f64 / ctx.f0.f64));
	// stfs f26,128(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fdivs f28,f25,f13
	ctx.f28.f64 = double(float(ctx.f25.f64 / ctx.f13.f64));
	// stfs f28,132(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fdivs f27,f25,f12
	ctx.f27.f64 = double(float(ctx.f25.f64 / ctx.f12.f64));
	// stfs f27,136(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ble cr6,0x82ea6f30
	if (!ctx.cr6.gt) goto loc_82EA6F30;
loc_82EA6E4C:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82ea6f24
	if (!ctx.cr6.gt) goto loc_82EA6F24;
loc_82EA6E58:
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82ea6ef4
	if (!ctx.cr6.gt) goto loc_82EA6EF4;
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r10,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r10.u64);
	// lfd f13,352(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// std r11,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r11.u64);
	// lfd f0,376(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fmuls f29,f0,f27
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f30,f13,f28
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
loc_82EA6EA0:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lwz r6,932(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 932);
	// lwz r10,924(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 924);
	// stfs f30,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// std r11,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r11.u64);
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f0,360(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EA6EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82ea6ea0
	if (ctx.cr6.lt) goto loc_82EA6EA0;
loc_82EA6EF4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA6F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82ea6e58
	if (ctx.cr6.lt) goto loc_82EA6E58;
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82EA6F24:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82ea6e4c
	if (ctx.cr6.lt) goto loc_82EA6E4C;
loc_82EA6F30:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA6F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82ea7024
	if (ctx.cr6.eq) goto loc_82EA7024;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x82ea7024
	if (!ctx.cr6.eq) goto loc_82EA7024;
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82e5fe30
	ctx.lr = 0x82EA6F6C;
	sub_82E5FE30(ctx, base);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// twllei r11,0
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// twllei r11,0
	// lwz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r6,536(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// lwz r5,532(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r4,528(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r27,232(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r26,236(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// twllei r31,0
	// add r27,r27,r11
	ctx.r27.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r30,224(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// add r26,r26,r31
	ctx.r26.u64 = ctx.r26.u64 + ctx.r31.u64;
	// lwz r29,228(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r28,240(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// lwz r25,540(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// lwz r24,244(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// divwu r30,r30,r11
	ctx.r30.u32 = ctx.r30.u32 / ctx.r11.u32;
	// divwu r29,r29,r31
	ctx.r29.u32 = ctx.r29.u32 / ctx.r31.u32;
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// twllei r31,0
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// divwu r11,r27,r11
	ctx.r11.u32 = ctx.r27.u32 / ctx.r11.u32;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// divwu r31,r26,r31
	ctx.r31.u32 = ctx.r26.u32 / ctx.r31.u32;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// bl 0x82e63a50
	ctx.lr = 0x82EA7014;
	sub_82E63A50(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x822996c0
	ctx.lr = 0x82EA7020;
	sub_822996C0(ctx, base);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82EA7024:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82ea7038
	if (ctx.cr6.eq) goto loc_82EA7038;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA7034;
	sub_82E76D78(ctx, base);
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
loc_82EA7038:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x82ea6cfc
	if (ctx.cr6.lt) goto loc_82EA6CFC;
loc_82EA7044:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x82ea709c
	if (ctx.cr6.eq) goto loc_82EA709C;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e85a10
	ctx.lr = 0x82EA7060;
	sub_82E85A10(ctx, base);
	// lwz r11,428(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r10,408(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,404(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r6,424(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// lwz r5,420(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// lwz r3,456(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82e63a50
	ctx.lr = 0x82EA7090;
	sub_82E63A50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e83e68
	ctx.lr = 0x82EA709C;
	sub_82E83E68(ctx, base);
loc_82EA709C:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82EA70A0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ea70b4
	if (ctx.cr6.eq) goto loc_82EA70B4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA70B4;
	sub_822996C0(ctx, base);
loc_82EA70B4:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82ea70c4
	if (ctx.cr6.eq) goto loc_82EA70C4;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA70C4;
	sub_82E76D78(ctx, base);
loc_82EA70C4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA70D0;
	sub_822996C0(ctx, base);
	// b 0x82ea6c20
	goto loc_82EA6C20;
loc_82EA70D4:
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r15,r20
	ctx.r15.u64 = ctx.r20.u64;
	// bl 0x82e5f660
	ctx.lr = 0x82EA70E8;
	sub_82E5F660(ctx, base);
	// addi r11,r1,624
	ctx.r11.s64 = ctx.r1.s64 + 624;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,508(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,504(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// lwz r11,512(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// rlwinm r8,r11,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82e61ac0
	ctx.lr = 0x82EA7124;
	sub_82E61AC0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EA712C;
	sub_82299698(ctx, base);
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea70a0
	if (ctx.cr0.eq) goto loc_82EA70A0;
	// addi r5,r1,556
	ctx.r5.s64 = ctx.r1.s64 + 556;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82e5f660
	ctx.lr = 0x82EA7148;
	sub_82E5F660(ctx, base);
	// lwz r11,576(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// lwz r10,580(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// b 0x82ea6db4
	goto loc_82EA6DB4;
loc_82EA7154:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82ea7170
	if (ctx.cr6.eq) goto loc_82EA7170;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x82ea7170
	if (!ctx.cr6.eq) goto loc_82EA7170;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x822996c0
	ctx.lr = 0x82EA7170;
	sub_822996C0(ctx, base);
loc_82EA7170:
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
	// b 0x82ea70a0
	goto loc_82EA70A0;
}

__attribute__((alias("__imp__sub_82EA717C"))) PPC_WEAK_FUNC(sub_82EA717C);
PPC_FUNC_IMPL(__imp__sub_82EA717C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA7180"))) PPC_WEAK_FUNC(sub_82EA7180);
PPC_FUNC_IMPL(__imp__sub_82EA7180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82EA7188;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r28,4
	ctx.r28.s64 = 4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82ea71b4
	if (!ctx.cr6.eq) goto loc_82EA71B4;
loc_82EA71A8:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82ea72b8
	goto loc_82EA72B8;
loc_82EA71B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ea71a8
	if (ctx.cr6.eq) goto loc_82EA71A8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ea71cc
	if (ctx.cr6.eq) goto loc_82EA71CC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ea71a8
	if (ctx.cr6.eq) goto loc_82EA71A8;
loc_82EA71CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r1,88
	ctx.r26.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// bl 0x82ec9370
	ctx.lr = 0x82EA71DC;
	sub_82EC9370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x82eb4300
	ctx.lr = 0x82EA71F0;
	sub_82EB4300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ea72b8
	if (ctx.cr0.lt) goto loc_82EA72B8;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// ble cr6,0x82ea7210
	if (!ctx.cr6.gt) goto loc_82EA7210;
loc_82EA7204:
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82ea7204
	if (ctx.cr6.lt) goto loc_82EA7204;
loc_82EA7210:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r28,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82299698
	ctx.lr = 0x82EA721C;
	sub_82299698(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82ea7230
	if (!ctx.cr0.eq) goto loc_82EA7230;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ea72b8
	goto loc_82EA72B8;
loc_82EA7230:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ea725c
	if (ctx.cr6.eq) goto loc_82EA725C;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EA7244:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfd f0,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f0.u64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x82ea7244
	if (!ctx.cr0.eq) goto loc_82EA7244;
loc_82EA725C:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cd0d18
	ctx.lr = 0x82EA7274;
	sub_82CD0D18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x82cd0d18
	ctx.lr = 0x82EA7284;
	sub_82CD0D18(ctx, base);
	// lis r11,-32022
	ctx.r11.s64 = -2098593792;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8960
	ctx.r4.s64 = ctx.r11.s64 + 8960;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea5d70
	ctx.lr = 0x82EA7298;
	sub_82EA5D70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd0d18
	ctx.lr = 0x82EA72A8;
	sub_82CD0D18(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA72B4;
	sub_822996C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82EA72B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA72C0"))) PPC_WEAK_FUNC(sub_82EA72C0);
PPC_FUNC_IMPL(__imp__sub_82EA72C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82EA72C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r28,4
	ctx.r28.s64 = 4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82ea72f4
	if (!ctx.cr6.eq) goto loc_82EA72F4;
loc_82EA72E8:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82ea73f8
	goto loc_82EA73F8;
loc_82EA72F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ea72e8
	if (ctx.cr6.eq) goto loc_82EA72E8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ea730c
	if (ctx.cr6.eq) goto loc_82EA730C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ea72e8
	if (ctx.cr6.eq) goto loc_82EA72E8;
loc_82EA730C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r1,88
	ctx.r26.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// bl 0x82ec9370
	ctx.lr = 0x82EA731C;
	sub_82EC9370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x82eb4300
	ctx.lr = 0x82EA7330;
	sub_82EB4300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ea73f8
	if (ctx.cr0.lt) goto loc_82EA73F8;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// ble cr6,0x82ea7350
	if (!ctx.cr6.gt) goto loc_82EA7350;
loc_82EA7344:
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82ea7344
	if (ctx.cr6.lt) goto loc_82EA7344;
loc_82EA7350:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r28,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82299698
	ctx.lr = 0x82EA735C;
	sub_82299698(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82ea7370
	if (!ctx.cr0.eq) goto loc_82EA7370;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ea73f8
	goto loc_82EA73F8;
loc_82EA7370:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ea739c
	if (ctx.cr6.eq) goto loc_82EA739C;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EA7384:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfd f0,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f0.u64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x82ea7384
	if (!ctx.cr0.eq) goto loc_82EA7384;
loc_82EA739C:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cd0d18
	ctx.lr = 0x82EA73B4;
	sub_82CD0D18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x82cd0d18
	ctx.lr = 0x82EA73C4;
	sub_82CD0D18(ctx, base);
	// lis r11,-32022
	ctx.r11.s64 = -2098593792;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9144
	ctx.r4.s64 = ctx.r11.s64 + 9144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea62c8
	ctx.lr = 0x82EA73D8;
	sub_82EA62C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd0d18
	ctx.lr = 0x82EA73E8;
	sub_82CD0D18(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA73F4;
	sub_822996C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82EA73F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA7400"))) PPC_WEAK_FUNC(sub_82EA7400);
PPC_FUNC_IMPL(__imp__sub_82EA7400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82EA7408;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r28,4
	ctx.r28.s64 = 4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82ea7434
	if (!ctx.cr6.eq) goto loc_82EA7434;
loc_82EA7428:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82ea7538
	goto loc_82EA7538;
loc_82EA7434:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ea7428
	if (ctx.cr6.eq) goto loc_82EA7428;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ea744c
	if (ctx.cr6.eq) goto loc_82EA744C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ea7428
	if (ctx.cr6.eq) goto loc_82EA7428;
loc_82EA744C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r1,88
	ctx.r26.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// bl 0x82ec9370
	ctx.lr = 0x82EA745C;
	sub_82EC9370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x82eb4300
	ctx.lr = 0x82EA7470;
	sub_82EB4300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ea7538
	if (ctx.cr0.lt) goto loc_82EA7538;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// ble cr6,0x82ea7490
	if (!ctx.cr6.gt) goto loc_82EA7490;
loc_82EA7484:
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82ea7484
	if (ctx.cr6.lt) goto loc_82EA7484;
loc_82EA7490:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r28,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82299698
	ctx.lr = 0x82EA749C;
	sub_82299698(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82ea74b0
	if (!ctx.cr0.eq) goto loc_82EA74B0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ea7538
	goto loc_82EA7538;
loc_82EA74B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ea74dc
	if (ctx.cr6.eq) goto loc_82EA74DC;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EA74C4:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfd f0,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f0.u64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x82ea74c4
	if (!ctx.cr0.eq) goto loc_82EA74C4;
loc_82EA74DC:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cd0d18
	ctx.lr = 0x82EA74F4;
	sub_82CD0D18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x82cd0d18
	ctx.lr = 0x82EA7504;
	sub_82CD0D18(ctx, base);
	// lis r11,-32022
	ctx.r11.s64 = -2098593792;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9144
	ctx.r4.s64 = ctx.r11.s64 + 9144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea6b68
	ctx.lr = 0x82EA7518;
	sub_82EA6B68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd0d18
	ctx.lr = 0x82EA7528;
	sub_82CD0D18(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA7534;
	sub_822996C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82EA7538:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA7540"))) PPC_WEAK_FUNC(sub_82EA7540);
PPC_FUNC_IMPL(__imp__sub_82EA7540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EA7548;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ae0
	ctx.lr = 0x82EA7550;
	__savefpr_26(ctx, base);
	// stwu r1,-1360(r1)
	ea = -1360 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r17,0
	ctx.r17.s64 = 0;
	// stw r5,1396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1396, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// stw r28,1388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1388, ctx.r28.u32);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// stw r31,1404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1404, ctx.r31.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// stw r17,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r17.u32);
	// stw r17,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r17.u32);
	// stw r17,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// bl 0x82eb9208
	ctx.lr = 0x82EA75AC;
	sub_82EB9208(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82eb9208
	ctx.lr = 0x82EA75B4;
	sub_82EB9208(ctx, base);
	// addi r10,r1,848
	ctx.r10.s64 = ctx.r1.s64 + 848;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// li r11,7
	ctx.r11.s64 = 7;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82EA75C4:
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82ea75c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA75C4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r1,752
	ctx.r10.s64 = ctx.r1.s64 + 752;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82EA75E4:
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82ea75e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA75E4;
	// addi r11,r1,688
	ctx.r11.s64 = ctx.r1.s64 + 688;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EA7600:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82ea7600
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EA7600;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82ea863c
	if (ctx.cr6.eq) goto loc_82EA863C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ea863c
	if (ctx.cr6.eq) goto loc_82EA863C;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82ea762c
	if (!ctx.cr6.eq) goto loc_82EA762C;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// stw r31,1404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1404, ctx.r31.u32);
loc_82EA762C:
	// rlwinm r11,r31,0,16,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFCFFFF;
	// rlwinm. r11,r11,0,13,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFE7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ea863c
	if (!ctx.cr0.eq) goto loc_82EA863C;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// bne cr6,0x82ea7644
	if (!ctx.cr6.eq) goto loc_82EA7644;
	// li r23,1
	ctx.r23.s64 = 1;
loc_82EA7644:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82ea863c
	if (ctx.cr6.eq) goto loc_82EA863C;
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 2, ctx.xer);
	// ble cr6,0x82ea766c
	if (!ctx.cr6.gt) goto loc_82EA766C;
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 4, ctx.xer);
	// beq cr6,0x82ea766c
	if (ctx.cr6.eq) goto loc_82EA766C;
	// cmplwi cr6,r23,8
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 8, ctx.xer);
	// beq cr6,0x82ea766c
	if (ctx.cr6.eq) goto loc_82EA766C;
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 16, ctx.xer);
	// bne cr6,0x82ea863c
	if (!ctx.cr6.eq) goto loc_82EA863C;
loc_82EA766C:
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82e85dd0
	ctx.lr = 0x82EA767C;
	sub_82E85DD0(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e85dd0
	ctx.lr = 0x82EA768C;
	sub_82E85DD0(ctx, base);
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r6,624(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// rlwinm r16,r3,24,31,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1;
	// rlwinm r19,r6,24,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x1;
	// stw r16,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r16.u32);
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r19.u32);
	// bl 0x82ea1f20
	ctx.lr = 0x82EA76A8;
	sub_82EA1F20(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82ea1f20
	ctx.lr = 0x82EA76B4;
	sub_82EA1F20(ctx, base);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// beq cr6,0x82ea863c
	if (ctx.cr6.eq) goto loc_82EA863C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// beq cr6,0x82ea863c
	if (ctx.cr6.eq) goto loc_82EA863C;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea76f8
	if (ctx.cr6.eq) goto loc_82EA76F8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82ea76f8
	if (ctx.cr6.eq) goto loc_82EA76F8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ea76f8
	if (ctx.cr6.eq) goto loc_82EA76F8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82ea863c
	if (!ctx.cr6.eq) goto loc_82EA863C;
loc_82EA76F8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea863c
	if (!ctx.cr6.eq) goto loc_82EA863C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82ea863c
	if (ctx.cr6.lt) goto loc_82EA863C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82ea863c
	if (ctx.cr6.lt) goto loc_82EA863C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82ea863c
	if (ctx.cr6.lt) goto loc_82EA863C;
	// ld r11,648(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 648);
	// ld r10,280(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x82ea863c
	if (!ctx.cr6.eq) goto loc_82EA863C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e85a00
	ctx.lr = 0x82EA7740;
	sub_82E85A00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82e85a00
	ctx.lr = 0x82EA774C;
	sub_82E85A00(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r27.u32);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82ea863c
	if (!ctx.cr6.eq) goto loc_82EA863C;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82e85dd0
	ctx.lr = 0x82EA776C;
	sub_82E85DD0(ctx, base);
	// lwz r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// bl 0x82299698
	ctx.lr = 0x82EA7780;
	sub_82299698(ctx, base);
	// lwz r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EA7794;
	sub_82299698(ctx, base);
	// lwz r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EA77A8;
	sub_82299698(ctx, base);
	// lwz r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EA77BC;
	sub_82299698(ctx, base);
	// lwz r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82299698
	ctx.lr = 0x82EA77D4;
	sub_82299698(ctx, base);
	// lwz r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82299698
	ctx.lr = 0x82EA77EC;
	sub_82299698(ctx, base);
	// lwz r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82299698
	ctx.lr = 0x82EA7804;
	sub_82299698(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82ea8540
	if (ctx.cr6.eq) goto loc_82EA8540;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82ea8540
	if (ctx.cr6.eq) goto loc_82EA8540;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82ea8540
	if (ctx.cr6.eq) goto loc_82EA8540;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82ea8540
	if (ctx.cr6.eq) goto loc_82EA8540;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82ea8540
	if (ctx.cr6.eq) goto loc_82EA8540;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ea8540
	if (ctx.cr6.eq) goto loc_82EA8540;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ea8540
	if (ctx.cr6.eq) goto loc_82EA8540;
	// lwz r11,48(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 48);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea786c
	if (ctx.cr0.eq) goto loc_82EA786C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,652(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r3,648(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// bl 0x82e5f960
	ctx.lr = 0x82EA785C;
	sub_82E5F960(ctx, base);
	// subfc r11,r27,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r27.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r27.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
loc_82EA786C:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea7898
	if (ctx.cr0.eq) goto loc_82EA7898;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x82e5f960
	ctx.lr = 0x82EA7888;
	sub_82E5F960(ctx, base);
	// subfc r11,r31,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r29,r11,31
	ctx.r29.u64 = ctx.r11.u32 & 0x1;
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
loc_82EA7898:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x82ea78d0
	if (ctx.cr6.eq) goto loc_82EA78D0;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea78d0
	if (ctx.cr6.eq) goto loc_82EA78D0;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82e5f668
	ctx.lr = 0x82EA78B8;
	sub_82E5F668(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,812(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// bl 0x82299698
	ctx.lr = 0x82EA78C4;
	sub_82299698(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea85d0
	if (ctx.cr0.eq) goto loc_82EA85D0;
loc_82EA78D0:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82ea7948
	if (ctx.cr6.eq) goto loc_82EA7948;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82ea7948
	if (ctx.cr6.eq) goto loc_82EA7948;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e5f668
	ctx.lr = 0x82EA78EC;
	sub_82E5F668(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,748(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// bl 0x82299698
	ctx.lr = 0x82EA78F8;
	sub_82299698(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea8548
	if (ctx.cr0.eq) goto loc_82EA8548;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e85a10
	ctx.lr = 0x82EA7918;
	sub_82E85A10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,732(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,724(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// lwz r7,720(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// lwz r6,680(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// lwz r4,708(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// bl 0x82e62be0
	ctx.lr = 0x82EA793C;
	sub_82E62BE0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e83e68
	ctx.lr = 0x82EA7948;
	sub_82E83E68(ctx, base);
loc_82EA7948:
	// mr r19,r17
	ctx.r19.u64 = ctx.r17.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ea848c
	if (ctx.cr6.eq) goto loc_82EA848C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r16,180(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f29,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f29.f64 = double(temp.f32);
	// lfs f26,-18212(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18212);
	ctx.f26.f64 = double(temp.f32);
	// lfs f30,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f30.f64 = double(temp.f32);
	// lfs f27,-18324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18324);
	ctx.f27.f64 = double(temp.f32);
	// lfs f31,6048(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
loc_82EA7980:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82e85dd8
	ctx.lr = 0x82EA798C;
	sub_82E85DD8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e85dd8
	ctx.lr = 0x82EA799C;
	sub_82E85DD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r15,r28
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r28.u32, ctx.xer);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// bne cr6,0x82ea7a44
	if (!ctx.cr6.eq) goto loc_82EA7A44;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea7a44
	if (!ctx.cr6.eq) goto loc_82EA7A44;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r6,1396(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1396);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82eb9550
	ctx.lr = 0x82EA79D8;
	sub_82EB9550(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ea8548
	if (ctx.cr0.lt) goto loc_82EA8548;
loc_82EA79E0:
	// lwz r29,124(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_82EA79E4:
	// lwz r31,164(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82ea7bfc
	if (!ctx.cr6.eq) goto loc_82EA7BFC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82ea7bfc
	if (!ctx.cr6.eq) goto loc_82EA7BFC;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82eb9550
	ctx.lr = 0x82EA7A18;
	sub_82EB9550(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82ea7c94
	if (!ctx.cr0.lt) goto loc_82EA7C94;
loc_82EA7A20:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea8548
	if (ctx.cr6.eq) goto loc_82EA8548;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82ea8548
	if (!ctx.cr6.eq) goto loc_82EA8548;
loc_82EA7A34:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x822996c0
	ctx.lr = 0x82EA7A40;
	sub_822996C0(ctx, base);
	// b 0x82ea8548
	goto loc_82EA8548;
loc_82EA7A44:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r6,1396(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1396);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82eb9550
	ctx.lr = 0x82EA7A60;
	sub_82EB9550(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ea8548
	if (ctx.cr0.lt) goto loc_82EA8548;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea79e0
	if (ctx.cr6.eq) goto loc_82EA79E0;
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stw r17,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r17.u32);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r17,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r17.u32);
	// lwz r31,416(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// stw r11,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r11.u32);
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82e5fe30
	ctx.lr = 0x82EA7A9C;
	sub_82E5FE30(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea7af8
	if (ctx.cr6.eq) goto loc_82EA7AF8;
	// lwz r11,744(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 744);
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ea7af8
	if (ctx.cr6.lt) goto loc_82EA7AF8;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,380(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,376(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// clrlwi r7,r11,26
	ctx.r7.u64 = ctx.r11.u32 & 0x3F;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e5fe08
	ctx.lr = 0x82EA7AE0;
	sub_82E5FE08(ctx, base);
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stw r10,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r10.u32);
	// stw r11,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r11.u32);
	// b 0x82ea79e4
	goto loc_82EA79E4;
loc_82EA7AF8:
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r5,r1,1040
	ctx.r5.s64 = ctx.r1.s64 + 1040;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// bl 0x82e5f660
	ctx.lr = 0x82EA7B10;
	sub_82E5F660(ctx, base);
	// addi r11,r1,976
	ctx.r11.s64 = ctx.r1.s64 + 976;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,1048(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1048);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,1044(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1044);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r17,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r17.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// lwz r11,1056(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1056);
	// rlwinm r7,r11,0,24,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82e61510
	ctx.lr = 0x82EA7B4C;
	sub_82E61510(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EA7B54;
	sub_82299698(ctx, base);
	// stw r3,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea8548
	if (ctx.cr0.eq) goto loc_82EA8548;
	// addi r5,r1,1100
	ctx.r5.s64 = ctx.r1.s64 + 1100;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x82e5f660
	ctx.lr = 0x82EA7B70;
	sub_82E5F660(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// lwz r9,444(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// twllei r11,0
	// lwz r8,440(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// twllei r10,0
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divwu r7,r9,r10
	ctx.r7.u32 = ctx.r9.u32 / ctx.r10.u32;
	// divwu r6,r8,r11
	ctx.r6.u32 = ctx.r8.u32 / ctx.r11.u32;
	// twllei r11,0
	// twllei r10,0
	// lwz r9,432(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// lwz r8,436(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// divwu r4,r9,r11
	ctx.r4.u32 = ctx.r9.u32 / ctx.r11.u32;
	// divwu r5,r8,r10
	ctx.r5.u32 = ctx.r8.u32 / ctx.r10.u32;
	// stw r4,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r4.u32);
	// stw r5,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r5.u32);
	// bl 0x82e66c00
	ctx.lr = 0x82EA7BC8;
	sub_82E66C00(ctx, base);
	// lwz r4,1120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1120);
	// lwz r10,1084(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1084);
	// addi r9,r1,816
	ctx.r9.s64 = ctx.r1.s64 + 816;
	// lwz r11,1060(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,296
	ctx.r5.s64 = ctx.r1.s64 + 296;
	// lwz r8,1076(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1076);
	// divwu r7,r11,r10
	ctx.r7.u32 = ctx.r11.u32 / ctx.r10.u32;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// stw r4,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r4.u32);
	// twllei r10,0
	// bl 0x82e62be0
	ctx.lr = 0x82EA7BF8;
	sub_82E62BE0(ctx, base);
	// b 0x82ea79e4
	goto loc_82EA79E4;
loc_82EA7BFC:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82eb9550
	ctx.lr = 0x82EA7C1C;
	sub_82EB9550(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ea7a20
	if (ctx.cr0.lt) goto loc_82EA7A20;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82ea7c94
	if (ctx.cr6.eq) goto loc_82EA7C94;
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r16,528(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r11.u32);
	// beq cr6,0x82ea7f9c
	if (ctx.cr6.eq) goto loc_82EA7F9C;
	// lwz r11,808(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 808);
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ea7f9c
	if (ctx.cr6.lt) goto loc_82EA7F9C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,380(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,376(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,32(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r7,r11,26
	ctx.r7.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82e5fe08
	ctx.lr = 0x82EA7C80;
	sub_82E5FE08(ctx, base);
	// lwz r11,772(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stw r10,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r10.u32);
	// stw r11,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r11.u32);
loc_82EA7C94:
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82e864a8
	ctx.lr = 0x82EA7CA0;
	sub_82E864A8(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82e864a8
	ctx.lr = 0x82EA7CAC;
	sub_82E864A8(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82ec85d0
	ctx.lr = 0x82EA7CB4;
	sub_82EC85D0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82ec85d0
	ctx.lr = 0x82EA7CC0;
	sub_82EC85D0(ctx, base);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// beq cr6,0x82ea84f4
	if (ctx.cr6.eq) goto loc_82EA84F4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ea84f4
	if (ctx.cr6.eq) goto loc_82EA84F4;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwz r10,284(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA7CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA7D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82ea2480
	ctx.lr = 0x82EA7D30;
	sub_82EA2480(ctx, base);
	// stfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82ea2480
	ctx.lr = 0x82EA7D48;
	sub_82EA2480(ctx, base);
	// stfs f1,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82ea2480
	ctx.lr = 0x82EA7D54;
	sub_82EA2480(ctx, base);
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r25
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, temp.u32);
	// bl 0x82ea2480
	ctx.lr = 0x82EA7D6C;
	sub_82EA2480(ctx, base);
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r26
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, temp.u32);
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ea7dd0
	if (!ctx.cr6.gt) goto loc_82EA7DD0;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r7,r26,4
	ctx.r7.s64 = ctx.r26.s64 + 4;
	// subf r5,r26,r25
	ctx.r5.s64 = ctx.r25.s64 - ctx.r26.s64;
	// subf r31,r22,r20
	ctx.r31.s64 = ctx.r20.s64 - ctx.r22.s64;
loc_82EA7D9C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// add r3,r31,r8
	ctx.r3.u64 = ctx.r31.u64 + ctx.r8.u64;
	// bl 0x82ea2480
	ctx.lr = 0x82EA7DA8;
	sub_82EA2480(ctx, base);
	// stfsx f1,r5,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, temp.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82ea2480
	ctx.lr = 0x82EA7DB4;
	sub_82EA2480(ctx, base);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stfs f1,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ea7d9c
	if (ctx.cr6.lt) goto loc_82EA7D9C;
loc_82EA7DD0:
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ea8348
	if (!ctx.cr6.gt) goto loc_82EA8348;
loc_82EA7DE0:
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// twllei r11,0
	// divwu r9,r30,r11
	ctx.r9.u32 = ctx.r30.u32 / ctx.r11.u32;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EA7E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82ea2480
	ctx.lr = 0x82EA7E28;
	sub_82EA2480(ctx, base);
	// stfs f1,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82ea2480
	ctx.lr = 0x82EA7E34;
	sub_82EA2480(ctx, base);
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r24
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, temp.u32);
	// lwz r9,280(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82ea7e7c
	if (!ctx.cr6.gt) goto loc_82EA7E7C;
	// addi r7,r24,4
	ctx.r7.s64 = ctx.r24.s64 + 4;
loc_82EA7E58:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82ea2480
	ctx.lr = 0x82EA7E60;
	sub_82EA2480(ctx, base);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stfs f1,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lwz r9,280(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82ea7e58
	if (ctx.cr6.lt) goto loc_82EA7E58;
loc_82EA7E7C:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82ea8308
	if (!ctx.cr6.gt) goto loc_82EA8308;
	// lwz r11,1404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1404);
	// rlwinm r28,r11,0,11,11
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// rlwinm r27,r11,0,12,12
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
loc_82EA7E94:
	// lwz r8,284(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// lwz r7,1404(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1404);
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82ea7eb4
	if (!ctx.cr6.eq) goto loc_82EA7EB4;
	// rlwinm. r10,r7,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ea7f0c
	if (!ctx.cr0.eq) goto loc_82EA7F0C;
loc_82EA7EB4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82ea7ec4
	if (!ctx.cr6.eq) goto loc_82EA7EC4;
	// rlwinm. r10,r7,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ea7edc
	if (!ctx.cr0.eq) goto loc_82EA7EDC;
loc_82EA7EC4:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_82EA7EDC:
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ea7ef0
	if (ctx.cr6.lt) goto loc_82EA7EF0;
	// rlwinm. r10,r7,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ea7f0c
	if (!ctx.cr0.eq) goto loc_82EA7F0C;
loc_82EA7EF0:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82EA7F0C:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ea7f20
	if (ctx.cr6.lt) goto loc_82EA7F20;
	// rlwinm. r9,r7,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ea7f8c
	if (!ctx.cr0.eq) goto loc_82EA7F8C;
loc_82EA7F20:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82ea7f30
	if (!ctx.cr6.eq) goto loc_82EA7F30;
	// rlwinm. r9,r7,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ea7f54
	if (!ctx.cr0.eq) goto loc_82EA7F54;
loc_82EA7F30:
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// addi r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f13,r9,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r6,r25
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82EA7F54:
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82ea7f68
	if (ctx.cr6.lt) goto loc_82EA7F68;
	// rlwinm. r9,r7,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ea7f8c
	if (!ctx.cr0.eq) goto loc_82EA7F8C;
loc_82EA7F68:
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// addi r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f13,r9,r24
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r6,r24
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r24.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82EA7F8C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ea801c
	if (!ctx.cr6.eq) goto loc_82EA801C;
	// fmuls f13,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// b 0x82ea8038
	goto loc_82EA8038;
loc_82EA7F9C:
	// addi r5,r1,848
	ctx.r5.s64 = ctx.r1.s64 + 848;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r17,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r17.u32);
	// bl 0x82e5f660
	ctx.lr = 0x82EA7FB0;
	sub_82E5F660(ctx, base);
	// addi r11,r1,976
	ctx.r11.s64 = ctx.r1.s64 + 976;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,856(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 856);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,852(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r17,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r17.u32);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// lwz r11,864(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 864);
	// rlwinm r7,r11,0,24,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82e61510
	ctx.lr = 0x82EA7FEC;
	sub_82E61510(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EA7FF4;
	sub_82299698(ctx, base);
	// stw r3,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea84e4
	if (ctx.cr0.eq) goto loc_82EA84E4;
	// addi r5,r1,908
	ctx.r5.s64 = ctx.r1.s64 + 908;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x82e5f660
	ctx.lr = 0x82EA8010;
	sub_82E5F660(ctx, base);
	// lwz r11,928(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	// stw r11,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r11.u32);
	// b 0x82ea7c94
	goto loc_82EA7C94;
loc_82EA801C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmuls f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// std r11,512(r1)
	PPC_STORE_U64(ctx.r1.u32 + 512, ctx.r11.u64);
	// lfd f13,512(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 512);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82EA8038:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82ea8050
	if (!ctx.cr6.eq) goto loc_82EA8050;
	// rlwinm. r9,r7,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ea80a0
	if (!ctx.cr0.eq) goto loc_82EA80A0;
loc_82EA8050:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82ea8060
	if (!ctx.cr6.eq) goto loc_82EA8060;
	// rlwinm. r9,r7,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ea8074
	if (!ctx.cr0.eq) goto loc_82EA8074;
loc_82EA8060:
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfsx f0,r9,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r9,r25
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_82EA8074:
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ea8084
	if (ctx.cr6.lt) goto loc_82EA8084;
	// rlwinm. r9,r7,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ea80a0
	if (!ctx.cr0.eq) goto loc_82EA80A0;
loc_82EA8084:
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r9,r25
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_82EA80A0:
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82ea80b4
	if (ctx.cr6.lt) goto loc_82EA80B4;
	// rlwinm. r9,r7,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ea8108
	if (!ctx.cr0.eq) goto loc_82EA8108;
loc_82EA80B4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82ea80c4
	if (!ctx.cr6.eq) goto loc_82EA80C4;
	// rlwinm. r9,r7,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ea80dc
	if (!ctx.cr0.eq) goto loc_82EA80DC;
loc_82EA80C4:
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f12,r9,r24
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r9,r26
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
loc_82EA80DC:
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82ea80ec
	if (ctx.cr6.lt) goto loc_82EA80EC;
	// rlwinm. r10,r7,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ea8108
	if (!ctx.cr0.eq) goto loc_82EA8108;
loc_82EA80EC:
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r10,r24
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r10,r26
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
loc_82EA8108:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fmuls f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// beq cr6,0x82ea812c
	if (ctx.cr6.eq) goto loc_82EA812C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,504(r1)
	PPC_STORE_U64(ctx.r1.u32 + 504, ctx.r11.u64);
	// lfd f12,504(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 504);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
loc_82EA812C:
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// stfs f27,336(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// addi r7,r1,347
	ctx.r7.s64 = ctx.r1.s64 + 347;
	// stfs f13,344(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f31,320(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// stfs f27,324(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// addi r6,r1,331
	ctx.r6.s64 = ctx.r1.s64 + 331;
	// stfs f31,340(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lvsl v0,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lvx128 v62,r0,r7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v62,r0,r11
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v0,v63,135
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x78));
	// lvx128 v61,r0,r6
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v61,v7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vpermwi128 v61,v63,99
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x9C));
	// li r11,8
	ctx.r11.s64 = 8;
	// vpermwi128 v63,v62,135
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x78));
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// vpermwi128 v13,v62,99
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x9C));
	// vmulfp128 v12,v61,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// vnmsubfp v0,v0,v13,v12
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v63,v0,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw128 v62,v0,1
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw128 v61,v0,2
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// stvewx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// bl 0x82ecee78
	ctx.lr = 0x82EA81CC;
	sub_82ECEE78(ctx, base);
	// fmr f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f30.f64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ea828c
	if (ctx.cr6.eq) goto loc_82EA828C;
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lfsx f13,r11,r26
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// lfsx f9,r6,r25
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	ctx.f9.f64 = double(temp.f32);
	// li r7,8
	ctx.r7.s64 = 8;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f8,r6,r26
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r6,r24
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r24.u32);
	ctx.f5.f64 = double(temp.f32);
	// stfs f13,396(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,384(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stfs f10,388(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// stfs f9,392(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stfs f8,400(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stfs f7,404(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f6,408(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stfs f5,412(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 412, temp.u32);
loc_82EA8240:
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x82ea8258
	if (!ctx.cr6.lt) goto loc_82EA8258;
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82EA8258:
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82ea8240
	if (!ctx.cr0.eq) goto loc_82EA8240;
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82ea828c
	if (!ctx.cr6.gt) goto loc_82EA828C;
	// fmadds f13,f0,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f30.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82EA828C:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// beq cr6,0x82ea82c0
	if (ctx.cr6.eq) goto loc_82EA82C0;
	// fnmsubs f0,f0,f29,f29
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f29.f64 - ctx.f29.f64)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f0,f29,f29
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f29.f64 - ctx.f29.f64)));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f0,f29,f29
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f29.f64 - ctx.f29.f64)));
	// b 0x82ea82e8
	goto loc_82EA82E8;
loc_82EA82C0:
	// fadds f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
loc_82EA82E8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r9,280(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82ea7e94
	if (ctx.cr6.lt) goto loc_82EA7E94;
	// lwz r28,1388(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1388);
	// lwz r27,288(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
loc_82EA8308:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA8328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82ea7de0
	if (ctx.cr6.lt) goto loc_82EA7DE0;
loc_82EA8348:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea836c
	if (ctx.cr6.eq) goto loc_82EA836C;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea836c
	if (!ctx.cr6.eq) goto loc_82EA836C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x822996c0
	ctx.lr = 0x82EA836C;
	sub_822996C0(ctx, base);
loc_82EA836C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea8420
	if (ctx.cr6.eq) goto loc_82EA8420;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea8420
	if (!ctx.cr6.eq) goto loc_82EA8420;
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82e5fe30
	ctx.lr = 0x82EA8398;
	sub_82E5FE30(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// lwz r9,556(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// twllei r11,0
	// lwz r8,552(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// twllei r10,0
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divwu r7,r9,r10
	ctx.r7.u32 = ctx.r9.u32 / ctx.r10.u32;
	// divwu r6,r8,r11
	ctx.r6.u32 = ctx.r8.u32 / ctx.r11.u32;
	// twllei r11,0
	// twllei r10,0
	// lwz r9,544(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// lwz r8,548(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// divwu r4,r9,r11
	ctx.r4.u32 = ctx.r9.u32 / ctx.r11.u32;
	// divwu r5,r8,r10
	ctx.r5.u32 = ctx.r8.u32 / ctx.r10.u32;
	// stw r4,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r4.u32);
	// stw r5,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// bl 0x82e66c00
	ctx.lr = 0x82EA83F0;
	sub_82E66C00(ctx, base);
	// addi r9,r1,832
	ctx.r9.s64 = ctx.r1.s64 + 832;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// lwz r10,892(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r8,536(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// lwz r7,528(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// lwz r5,884(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	// lwz r4,880(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 880);
	// bl 0x82e62980
	ctx.lr = 0x82EA8414;
	sub_82E62980(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,528(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x822996c0
	ctx.lr = 0x82EA8420;
	sub_822996C0(ctx, base);
loc_82EA8420:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA8438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA8454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ea846c
	if (ctx.cr6.eq) goto loc_82EA846C;
	// bl 0x82e76d78
	ctx.lr = 0x82EA8468;
	sub_82E76D78(ctx, base);
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
loc_82EA846C:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ea8480
	if (ctx.cr6.eq) goto loc_82EA8480;
	// bl 0x82e76d78
	ctx.lr = 0x82EA847C;
	sub_82E76D78(ctx, base);
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
loc_82EA8480:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmplw cr6,r19,r27
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82ea7980
	if (ctx.cr6.lt) goto loc_82EA7980;
loc_82EA848C:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea84dc
	if (ctx.cr6.eq) goto loc_82EA84DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82e85a10
	ctx.lr = 0x82EA84AC;
	sub_82E85A10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,796(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 796);
	// lwz r8,772(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// lwz r5,788(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// lwz r4,784(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// lwz r3,664(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 664);
	// bl 0x82e62980
	ctx.lr = 0x82EA84D0;
	sub_82E62980(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82e83e68
	ctx.lr = 0x82EA84DC;
	sub_82E83E68(ctx, base);
loc_82EA84DC:
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// b 0x82ea8548
	goto loc_82EA8548;
loc_82EA84E4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea8548
	if (ctx.cr6.eq) goto loc_82EA8548;
	// b 0x82ea7a34
	goto loc_82EA7A34;
loc_82EA84F4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea8514
	if (ctx.cr6.eq) goto loc_82EA8514;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82ea8514
	if (!ctx.cr6.eq) goto loc_82EA8514;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x822996c0
	ctx.lr = 0x82EA8514;
	sub_822996C0(ctx, base);
loc_82EA8514:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82ea8534
	if (ctx.cr6.eq) goto loc_82EA8534;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ea8534
	if (!ctx.cr6.eq) goto loc_82EA8534;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,528(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x822996c0
	ctx.lr = 0x82EA8534;
	sub_822996C0(ctx, base);
loc_82EA8534:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// b 0x82ea8548
	goto loc_82EA8548;
loc_82EA8540:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
loc_82EA8548:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ea855c
	if (ctx.cr6.eq) goto loc_82EA855C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EA855C;
	sub_822996C0(ctx, base);
loc_82EA855C:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ea8570
	if (ctx.cr6.eq) goto loc_82EA8570;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EA8570;
	sub_822996C0(ctx, base);
loc_82EA8570:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82ea8590
	if (ctx.cr6.eq) goto loc_82EA8590;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA8590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EA8590:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ea85b0
	if (ctx.cr6.eq) goto loc_82EA85B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EA85B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EA85B0:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ea85c0
	if (ctx.cr6.eq) goto loc_82EA85C0;
	// bl 0x82e76d78
	ctx.lr = 0x82EA85C0;
	sub_82E76D78(ctx, base);
loc_82EA85C0:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ea85d0
	if (ctx.cr6.eq) goto loc_82EA85D0;
	// bl 0x82e76d78
	ctx.lr = 0x82EA85D0;
	sub_82E76D78(ctx, base);
loc_82EA85D0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA85DC;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA85E8;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA85F4;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA8600;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA860C;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA8618;
	sub_822996C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EA8624;
	sub_822996C0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82eb9548
	ctx.lr = 0x82EA862C;
	sub_82EB9548(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82eb9548
	ctx.lr = 0x82EA8634;
	sub_82EB9548(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82ea8654
	goto loc_82EA8654;
loc_82EA863C:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82eb9548
	ctx.lr = 0x82EA8644;
	sub_82EB9548(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82eb9548
	ctx.lr = 0x82EA864C;
	sub_82EB9548(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EA8654:
	// addi r1,r1,1360
	ctx.r1.s64 = ctx.r1.s64 + 1360;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b2c
	ctx.lr = 0x82EA8660;
	__restfpr_26(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA8664"))) PPC_WEAK_FUNC(sub_82EA8664);
PPC_FUNC_IMPL(__imp__sub_82EA8664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA8668"))) PPC_WEAK_FUNC(sub_82EA8668);
PPC_FUNC_IMPL(__imp__sub_82EA8668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EA8670;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82eb51f0
	ctx.lr = 0x82EA869C;
	sub_82EB51F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb5298
	ctx.lr = 0x82EA86AC;
	sub_82EB5298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea86cc
	if (!ctx.cr0.lt) goto loc_82EA86CC;
loc_82EA86B4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb53f8
	ctx.lr = 0x82EA86C0;
	sub_82EB53F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82EA86CC:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea4e28
	ctx.lr = 0x82EA86F4;
	sub_82EA4E28(ctx, base);
	// b 0x82ea86b4
	goto loc_82EA86B4;
}

__attribute__((alias("__imp__sub_82EA86F8"))) PPC_WEAK_FUNC(sub_82EA86F8);
PPC_FUNC_IMPL(__imp__sub_82EA86F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EA8700;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82eb51f0
	ctx.lr = 0x82EA872C;
	sub_82EB51F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb5298
	ctx.lr = 0x82EA873C;
	sub_82EB5298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea875c
	if (!ctx.cr0.lt) goto loc_82EA875C;
loc_82EA8744:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb53f8
	ctx.lr = 0x82EA8750;
	sub_82EB53F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82EA875C:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea4e28
	ctx.lr = 0x82EA8784;
	sub_82EA4E28(ctx, base);
	// b 0x82ea8744
	goto loc_82EA8744;
}

__attribute__((alias("__imp__sub_82EA8788"))) PPC_WEAK_FUNC(sub_82EA8788);
PPC_FUNC_IMPL(__imp__sub_82EA8788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EA8790;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82eb51f0
	ctx.lr = 0x82EA87BC;
	sub_82EB51F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb5298
	ctx.lr = 0x82EA87CC;
	sub_82EB5298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea87ec
	if (!ctx.cr0.lt) goto loc_82EA87EC;
loc_82EA87D4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb53f8
	ctx.lr = 0x82EA87E0;
	sub_82EB53F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82EA87EC:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea50e0
	ctx.lr = 0x82EA8814;
	sub_82EA50E0(ctx, base);
	// b 0x82ea87d4
	goto loc_82EA87D4;
}

__attribute__((alias("__imp__sub_82EA8818"))) PPC_WEAK_FUNC(sub_82EA8818);
PPC_FUNC_IMPL(__imp__sub_82EA8818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EA8820;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82eb51f0
	ctx.lr = 0x82EA884C;
	sub_82EB51F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb5298
	ctx.lr = 0x82EA885C;
	sub_82EB5298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea887c
	if (!ctx.cr0.lt) goto loc_82EA887C;
loc_82EA8864:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb53f8
	ctx.lr = 0x82EA8870;
	sub_82EB53F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82EA887C:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea50e0
	ctx.lr = 0x82EA88A4;
	sub_82EA50E0(ctx, base);
	// b 0x82ea8864
	goto loc_82EA8864;
}

__attribute__((alias("__imp__sub_82EA88A8"))) PPC_WEAK_FUNC(sub_82EA88A8);
PPC_FUNC_IMPL(__imp__sub_82EA88A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EA88B0;
	__savegprlr_14(ctx, base);
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r9,1588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1588, ctx.r9.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// stw r28,1564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1564, ctx.r28.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r27,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r27.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r26,1580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1580, ctx.r26.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82ead558
	ctx.lr = 0x82EA88E8;
	sub_82EAD558(ctx, base);
	// li r16,0
	ctx.r16.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r16,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r16.u32);
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
	// bne cr6,0x82ea8914
	if (!ctx.cr6.eq) goto loc_82EA8914;
loc_82EA88FC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eae008
	ctx.lr = 0x82EA8904;
	sub_82EAE008(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EA890C:
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82EA8914:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ea88fc
	if (ctx.cr6.eq) goto loc_82EA88FC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ea88fc
	if (ctx.cr6.eq) goto loc_82EA88FC;
	// lwz r11,1668(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1668);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ea8948
	if (!ctx.cr6.eq) goto loc_82EA8948;
	// lis r30,-30602
	ctx.r30.s64 = -2005532672;
	// ori r30,r30,2156
	ctx.r30.u64 = ctx.r30.u64 | 2156;
loc_82EA8938:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eae008
	ctx.lr = 0x82EA8940;
	sub_82EAE008(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82ea890c
	goto loc_82EA890C;
loc_82EA8948:
	// lwz r29,1644(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1644);
	// lwz r22,1660(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1660);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ea8964
	if (!ctx.cr6.eq) goto loc_82EA8964;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// bne cr6,0x82ea8964
	if (!ctx.cr6.eq) goto loc_82EA8964;
	// addi r29,r1,304
	ctx.r29.s64 = ctx.r1.s64 + 304;
loc_82EA8964:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb2de0
	ctx.lr = 0x82EA897C;
	sub_82EB2DE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea898c
	if (!ctx.cr0.lt) goto loc_82EA898C;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82ea8938
	goto loc_82EA8938;
loc_82EA898C:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// bne cr6,0x82ea899c
	if (!ctx.cr6.eq) goto loc_82EA899C;
	// lwz r22,20(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r22,1660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1660, ctx.r22.u32);
loc_82EA899C:
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea89c4
	if (ctx.cr6.eq) goto loc_82EA89C4;
loc_82EA89B0:
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ea89b0
	if (!ctx.cr6.eq) goto loc_82EA89B0;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
loc_82EA89C4:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r22,18
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 18, ctx.xer);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// bne cr6,0x82ea8a08
	if (!ctx.cr6.eq) goto loc_82EA8A08;
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea89fc
	if (ctx.cr6.eq) goto loc_82EA89FC;
loc_82EA89E0:
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ea89e0
	if (!ctx.cr6.eq) goto loc_82EA89E0;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x82ea8a08
	if (ctx.cr6.eq) goto loc_82EA8A08;
loc_82EA89FC:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// b 0x82ea8938
	goto loc_82EA8938;
loc_82EA8A08:
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r28,-2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -2, ctx.xer);
	// beq cr6,0x82ea8a50
	if (ctx.cr6.eq) goto loc_82EA8A50;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82ea8a50
	if (ctx.cr6.lt) goto loc_82EA8A50;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ea8a2c
	if (ctx.cr6.eq) goto loc_82EA8A2C;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x82ea8a54
	if (!ctx.cr6.eq) goto loc_82EA8A54;
loc_82EA8A2C:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r11,1564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1564, ctx.r11.u32);
	// ble cr6,0x82ea8a54
	if (!ctx.cr6.gt) goto loc_82EA8A54;
loc_82EA8A3C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ea8a3c
	if (ctx.cr6.lt) goto loc_82EA8A3C;
	// stw r11,1564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1564, ctx.r11.u32);
	// b 0x82ea8a54
	goto loc_82EA8A54;
loc_82EA8A50:
	// stw r10,1564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1564, ctx.r10.u32);
loc_82EA8A54:
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r27,-2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -2, ctx.xer);
	// beq cr6,0x82ea8a9c
	if (ctx.cr6.eq) goto loc_82EA8A9C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82ea8a9c
	if (ctx.cr6.lt) goto loc_82EA8A9C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ea8a78
	if (ctx.cr6.eq) goto loc_82EA8A78;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x82ea8aa0
	if (!ctx.cr6.eq) goto loc_82EA8AA0;
loc_82EA8A78:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r11,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r11.u32);
	// ble cr6,0x82ea8aa0
	if (!ctx.cr6.gt) goto loc_82EA8AA0;
loc_82EA8A88:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ea8a88
	if (ctx.cr6.lt) goto loc_82EA8A88;
	// stw r11,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r11.u32);
	// b 0x82ea8aa0
	goto loc_82EA8AA0;
loc_82EA8A9C:
	// stw r10,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r10.u32);
loc_82EA8AA0:
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r26,-2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -2, ctx.xer);
	// beq cr6,0x82ea8ae8
	if (ctx.cr6.eq) goto loc_82EA8AE8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82ea8ae8
	if (ctx.cr6.lt) goto loc_82EA8AE8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ea8ac4
	if (ctx.cr6.eq) goto loc_82EA8AC4;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x82ea8aec
	if (!ctx.cr6.eq) goto loc_82EA8AEC;
loc_82EA8AC4:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r11,1580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1580, ctx.r11.u32);
	// ble cr6,0x82ea8aec
	if (!ctx.cr6.gt) goto loc_82EA8AEC;
loc_82EA8AD4:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ea8ad4
	if (ctx.cr6.lt) goto loc_82EA8AD4;
	// stw r11,1580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1580, ctx.r11.u32);
	// b 0x82ea8aec
	goto loc_82EA8AEC;
loc_82EA8AE8:
	// stw r10,1580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1580, ctx.r10.u32);
loc_82EA8AEC:
	// lwz r19,1620(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1620);
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, -1, ctx.xer);
	// bne cr6,0x82ea8b00
	if (!ctx.cr6.eq) goto loc_82EA8B00;
	// lis r19,8
	ctx.r19.s64 = 524288;
	// ori r19,r19,4
	ctx.r19.u64 = ctx.r19.u64 | 4;
loc_82EA8B00:
	// lwz r14,1628(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1628);
	// cmpwi cr6,r14,-1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, -1, ctx.xer);
	// bne cr6,0x82ea8b10
	if (!ctx.cr6.eq) goto loc_82EA8B10;
	// li r14,5
	ctx.r14.s64 = 5;
loc_82EA8B10:
	// cmpwi cr6,r22,18
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 18, ctx.xer);
	// bne cr6,0x82ea8b20
	if (!ctx.cr6.eq) goto loc_82EA8B20;
	// oris r19,r19,7
	ctx.r19.u64 = ctx.r19.u64 | 458752;
	// oris r14,r14,7
	ctx.r14.u64 = ctx.r14.u64 | 458752;
loc_82EA8B20:
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82ea8b44
	if (ctx.cr6.eq) goto loc_82EA8B44;
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82ea8b44
	if (ctx.cr6.eq) goto loc_82EA8B44;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// mr r15,r16
	ctx.r15.u64 = ctx.r16.u64;
	// bne cr6,0x82ea8b48
	if (!ctx.cr6.eq) goto loc_82EA8B48;
loc_82EA8B44:
	// li r15,1
	ctx.r15.s64 = 1;
loc_82EA8B48:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea8b60
	if (ctx.cr6.eq) goto loc_82EA8B60;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16385
	ctx.r30.u64 = ctx.r30.u64 | 16385;
	// b 0x82ea8938
	goto loc_82EA8938;
loc_82EA8B60:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82cb16f0
	ctx.lr = 0x82EA8B70;
	sub_82CB16F0(ctx, base);
	// lwz r11,1604(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1604);
	// lwz r21,1636(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1636);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// bne cr6,0x82ea8c34
	if (!ctx.cr6.eq) goto loc_82EA8C34;
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82ea8c08
	if (ctx.cr6.eq) goto loc_82EA8C08;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82ea1f20
	ctx.lr = 0x82EA8B98;
	sub_82EA1F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ea8bb8
	if (ctx.cr6.eq) goto loc_82EA8BB8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82ea8bb8
	if (ctx.cr6.eq) goto loc_82EA8BB8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ea8c08
	if (!ctx.cr6.eq) goto loc_82EA8C08;
loc_82EA8BB8:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ea8c08
	if (!ctx.cr6.eq) goto loc_82EA8C08;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82cb1160
	ctx.lr = 0x82EA8BD0;
	sub_82CB1160(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ea29d8
	ctx.lr = 0x82EA8BF4;
	sub_82EA29D8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// rlwinm r11,r7,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// bne cr6,0x82ea8c08
	if (!ctx.cr6.eq) goto loc_82EA8C08;
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_82EA8C08:
	// addis r11,r7,-13873
	ctx.r11.s64 = ctx.r7.s64 + -909180928;
	// addic. r11,r11,-19521
	ctx.xer.ca = ctx.r11.u32 > 19520;
	ctx.r11.s64 = ctx.r11.s64 + -19521;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea8c28
	if (ctx.cr0.eq) goto loc_82EA8C28;
	// cmplwi cr6,r11,1503
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1503, ctx.xer);
	// bne cr6,0x82ea8c30
	if (!ctx.cr6.eq) goto loc_82EA8C30;
	// lis r7,10280
	ctx.r7.s64 = 673710080;
	// ori r7,r7,134
	ctx.r7.u64 = ctx.r7.u64 | 134;
	// b 0x82ea8c30
	goto loc_82EA8C30;
loc_82EA8C28:
	// lis r7,2048
	ctx.r7.s64 = 134217728;
	// ori r7,r7,74
	ctx.r7.u64 = ctx.r7.u64 | 74;
loc_82EA8C30:
	// stw r7,1604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1604, ctx.r7.u32);
loc_82EA8C34:
	// lwz r23,1652(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1652);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82ea8c50
	if (ctx.cr6.eq) goto loc_82EA8C50;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EA8C50;
	sub_82CB1160(ctx, base);
loc_82EA8C50:
	// lwz r31,1612(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1612);
	// addi r9,r1,1604
	ctx.r9.s64 = ctx.r1.s64 + 1604;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r7,r1,1588
	ctx.r7.s64 = ctx.r1.s64 + 1588;
	// addi r6,r1,1580
	ctx.r6.s64 = ctx.r1.s64 + 1580;
	// addi r5,r1,1572
	ctx.r5.s64 = ctx.r1.s64 + 1572;
	// addi r4,r1,1564
	ctx.r4.s64 = ctx.r1.s64 + 1564;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ea4508
	ctx.lr = 0x82EA8C7C;
	sub_82EA4508(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ea8938
	if (ctx.cr0.lt) goto loc_82EA8938;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// lwz r20,1588(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 3, ctx.xer);
	// ori r18,r11,14
	ctx.r18.u64 = ctx.r11.u64 | 14;
	// beq cr6,0x82ea8d00
	if (ctx.cr6.eq) goto loc_82EA8D00;
	// cmpwi cr6,r22,17
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 17, ctx.xer);
	// beq cr6,0x82ea8cec
	if (ctx.cr6.eq) goto loc_82EA8CEC;
	// cmpwi cr6,r22,18
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 18, ctx.xer);
	// bne cr6,0x82ea8d30
	if (!ctx.cr6.eq) goto loc_82EA8D30;
	// lwz r4,1564(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1564);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82EA8CB8:
	// lwz r20,1588(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r8,1604(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1604);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// bl 0x82e86250
	ctx.lr = 0x82EA8CD0;
	sub_82E86250(ctx, base);
	// mr. r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq 0x82ea8ce0
	if (ctx.cr0.eq) goto loc_82EA8CE0;
loc_82EA8CD8:
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// b 0x82ea8d38
	goto loc_82EA8D38;
loc_82EA8CE0:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82ea9014
	goto loc_82EA9014;
loc_82EA8CEC:
	// lwz r5,1580(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1580);
	// li r10,17
	ctx.r10.s64 = 17;
	// lwz r4,1572(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r3,1564(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1564);
	// b 0x82ea8cb8
	goto loc_82EA8CB8;
loc_82EA8D00:
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r8,1604(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1604);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r4,1572(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r3,1564(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1564);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e86250
	ctx.lr = 0x82EA8D24;
	sub_82E86250(ctx, base);
	// mr. r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne 0x82ea8cd8
	if (!ctx.cr0.eq) goto loc_82EA8CD8;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_82EA8D30:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82ea8938
	if (ctx.cr6.lt) goto loc_82EA8938;
loc_82EA8D38:
	// lwz r11,48(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 48);
	// addi r22,r1,160
	ctx.r22.s64 = ctx.r1.s64 + 160;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r29,192(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r27,r11,21,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// lwz r28,196(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,204(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// beq cr6,0x82ea8fb0
	if (ctx.cr6.eq) goto loc_82EA8FB0;
loc_82EA8D60:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea8edc
	if (ctx.cr6.eq) goto loc_82EA8EDC;
loc_82EA8D74:
	// cmplw cr6,r26,r20
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x82ea8edc
	if (!ctx.cr6.lt) goto loc_82EA8EDC;
	// lwz r11,1660(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1660);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ea8e9c
	if (ctx.cr6.eq) goto loc_82EA8E9C;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82ea8e3c
	if (ctx.cr6.eq) goto loc_82EA8E3C;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x82ea8eb4
	if (!ctx.cr6.eq) goto loc_82EA8EB4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e85ed0
	ctx.lr = 0x82EA8DA8;
	sub_82E85ED0(ctx, base);
	// mr. r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq 0x82ea90c8
	if (ctx.cr0.eq) goto loc_82EA90C8;
loc_82EA8DB0:
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x82ea32d0
	ctx.lr = 0x82EA8DE8;
	sub_82EA32D0(ctx, base);
loc_82EA8DE8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EA8DEC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82ea8ff4
	if (ctx.cr6.lt) goto loc_82EA8FF4;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea8e10
	if (ctx.cr6.eq) goto loc_82EA8E10;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82e76d78
	ctx.lr = 0x82EA8E08;
	sub_82E76D78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_82EA8E10:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82ea8e24
	if (ctx.cr6.eq) goto loc_82EA8E24;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA8E20;
	sub_82E76D78(ctx, base);
	// li r16,0
	ctx.r16.s64 = 0;
loc_82EA8E24:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ea8edc
	if (!ctx.cr6.lt) goto loc_82EA8EDC;
	// lwz r31,76(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// b 0x82ea8d74
	goto loc_82EA8D74;
loc_82EA8E3C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e860a0
	ctx.lr = 0x82EA8E48;
	sub_82E860A0(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea90c8
	if (ctx.cr0.eq) goto loc_82EA90C8;
loc_82EA8E54:
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// stw r19,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82ea3ba8
	ctx.lr = 0x82EA8E98;
	sub_82EA3BA8(ctx, base);
	// b 0x82ea8de8
	goto loc_82EA8DE8;
loc_82EA8E9C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e85dd8
	ctx.lr = 0x82EA8EA8;
	sub_82E85DD8(ctx, base);
	// mr. r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne 0x82ea8db0
	if (!ctx.cr0.eq) goto loc_82EA8DB0;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_82EA8EB4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82ea8ff4
	if (ctx.cr6.lt) goto loc_82EA8FF4;
	// lwz r11,1660(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1660);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ea8db0
	if (ctx.cr6.eq) goto loc_82EA8DB0;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82ea8e54
	if (ctx.cr6.eq) goto loc_82EA8E54;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x82ea8db0
	if (ctx.cr6.eq) goto loc_82EA8DB0;
	// b 0x82ea8dec
	goto loc_82EA8DEC;
loc_82EA8EDC:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x82ea8f9c
	if (!ctx.cr6.eq) goto loc_82EA8F9C;
	// b 0x82ea8f94
	goto loc_82EA8F94;
loc_82EA8EE8:
	// lwz r11,1660(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1660);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ea9088
	if (ctx.cr6.eq) goto loc_82EA9088;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82ea9028
	if (ctx.cr6.eq) goto loc_82EA9028;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x82ea90a0
	if (!ctx.cr6.eq) goto loc_82EA90A0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e85ed0
	ctx.lr = 0x82EA8F14;
	sub_82E85ED0(ctx, base);
	// mr. r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq 0x82ea90c8
	if (ctx.cr0.eq) goto loc_82EA90C8;
loc_82EA8F1C:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// bl 0x82ea32d0
	ctx.lr = 0x82EA8F54;
	sub_82EA32D0(ctx, base);
loc_82EA8F54:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EA8F58:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82ea8ff4
	if (ctx.cr6.lt) goto loc_82EA8FF4;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea8f7c
	if (ctx.cr6.eq) goto loc_82EA8F7C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82e76d78
	ctx.lr = 0x82EA8F74;
	sub_82E76D78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_82EA8F7C:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82ea8f90
	if (ctx.cr6.eq) goto loc_82EA8F90;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA8F8C;
	sub_82E76D78(ctx, base);
	// li r16,0
	ctx.r16.s64 = 0;
loc_82EA8F90:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82EA8F94:
	// cmplw cr6,r26,r20
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x82ea8ee8
	if (ctx.cr6.lt) goto loc_82EA8EE8;
loc_82EA8F9C:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// lwz r22,80(r22)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r22.u32 + 80);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ea8d60
	if (ctx.cr6.lt) goto loc_82EA8D60;
loc_82EA8FB0:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x82ea8fe4
	if (ctx.cr6.eq) goto loc_82EA8FE4;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x82ea8fe4
	if (!ctx.cr6.lt) goto loc_82EA8FE4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82ea5940
	ctx.lr = 0x82EA8FDC;
	sub_82EA5940(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ea8ff4
	if (ctx.cr0.lt) goto loc_82EA8FF4;
loc_82EA8FE4:
	// lwz r11,1668(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1668);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r17,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
	// li r17,0
	ctx.r17.s64 = 0;
loc_82EA8FF4:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ea9004
	if (ctx.cr6.eq) goto loc_82EA9004;
	// bl 0x82e76d78
	ctx.lr = 0x82EA9004;
	sub_82E76D78(ctx, base);
loc_82EA9004:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82ea9014
	if (ctx.cr6.eq) goto loc_82EA9014;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA9014;
	sub_82E76D78(ctx, base);
loc_82EA9014:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82ea8938
	if (ctx.cr6.eq) goto loc_82EA8938;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e76d78
	ctx.lr = 0x82EA9024;
	sub_82E76D78(ctx, base);
	// b 0x82ea8938
	goto loc_82EA8938;
loc_82EA9028:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e860a0
	ctx.lr = 0x82EA9034;
	sub_82E860A0(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ea90c8
	if (ctx.cr0.eq) goto loc_82EA90C8;
loc_82EA9040:
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r19,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bl 0x82ea3ba8
	ctx.lr = 0x82EA9084;
	sub_82EA3BA8(ctx, base);
	// b 0x82ea8f54
	goto loc_82EA8F54;
loc_82EA9088:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82e85dd8
	ctx.lr = 0x82EA9094;
	sub_82E85DD8(ctx, base);
	// mr. r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne 0x82ea8f1c
	if (!ctx.cr0.eq) goto loc_82EA8F1C;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_82EA90A0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82ea8ff4
	if (ctx.cr6.lt) goto loc_82EA8FF4;
	// lwz r11,1660(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1660);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ea8f1c
	if (ctx.cr6.eq) goto loc_82EA8F1C;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82ea9040
	if (ctx.cr6.eq) goto loc_82EA9040;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x82ea8f1c
	if (ctx.cr6.eq) goto loc_82EA8F1C;
	// b 0x82ea8f58
	goto loc_82EA8F58;
loc_82EA90C8:
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x82ea8ff4
	goto loc_82EA8FF4;
}

__attribute__((alias("__imp__sub_82EA90D0"))) PPC_WEAK_FUNC(sub_82EA90D0);
PPC_FUNC_IMPL(__imp__sub_82EA90D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EA90D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,356(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r30,348(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r29,340(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r27,332(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// li r28,3
	ctx.r28.s64 = 3;
	// lwz r26,324(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r25,316(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r24,308(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82ea88a8
	ctx.lr = 0x82EA9134;
	sub_82EA88A8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA913C"))) PPC_WEAK_FUNC(sub_82EA913C);
PPC_FUNC_IMPL(__imp__sub_82EA913C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9140"))) PPC_WEAK_FUNC(sub_82EA9140);
PPC_FUNC_IMPL(__imp__sub_82EA9140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EA9148;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r29,348(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// lwz r28,340(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r27,332(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lwz r25,324(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r24,308(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r26,18
	ctx.r26.s64 = 18;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82ea88a8
	ctx.lr = 0x82EA91AC;
	sub_82EA88A8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA91B4"))) PPC_WEAK_FUNC(sub_82EA91B4);
PPC_FUNC_IMPL(__imp__sub_82EA91B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA91B8"))) PPC_WEAK_FUNC(sub_82EA91B8);
PPC_FUNC_IMPL(__imp__sub_82EA91B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EA91C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,364(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// li r31,17
	ctx.r31.s64 = 17;
	// lwz r30,356(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r29,348(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r28,340(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r27,332(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r26,324(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r25,316(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r24,308(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// bl 0x82ea88a8
	ctx.lr = 0x82EA9210;
	sub_82EA88A8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9218"))) PPC_WEAK_FUNC(sub_82EA9218);
PPC_FUNC_IMPL(__imp__sub_82EA9218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82EA9220;
	__savegprlr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82eb51f0
	ctx.lr = 0x82EA924C;
	sub_82EB51F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb5298
	ctx.lr = 0x82EA925C;
	sub_82EB5298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea927c
	if (!ctx.cr0.lt) goto loc_82EA927C;
loc_82EA9264:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb53f8
	ctx.lr = 0x82EA9270;
	sub_82EB53F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82EA927C:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r23,388(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r27,380(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r28,372(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r24,3
	ctx.r24.s64 = 3;
	// lwz r22,364(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r29,356(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x82ea88a8
	ctx.lr = 0x82EA92E0;
	sub_82EA88A8(ctx, base);
	// b 0x82ea9264
	goto loc_82EA9264;
}

__attribute__((alias("__imp__sub_82EA92E4"))) PPC_WEAK_FUNC(sub_82EA92E4);
PPC_FUNC_IMPL(__imp__sub_82EA92E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA92E8"))) PPC_WEAK_FUNC(sub_82EA92E8);
PPC_FUNC_IMPL(__imp__sub_82EA92E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82EA92F0;
	__savegprlr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82eb51f0
	ctx.lr = 0x82EA931C;
	sub_82EB51F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb5298
	ctx.lr = 0x82EA932C;
	sub_82EB5298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea934c
	if (!ctx.cr0.lt) goto loc_82EA934C;
loc_82EA9334:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb53f8
	ctx.lr = 0x82EA9340;
	sub_82EB53F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82EA934C:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r23,388(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r27,380(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r28,372(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r24,3
	ctx.r24.s64 = 3;
	// lwz r22,364(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r29,356(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x82ea88a8
	ctx.lr = 0x82EA93B0;
	sub_82EA88A8(ctx, base);
	// b 0x82ea9334
	goto loc_82EA9334;
}

__attribute__((alias("__imp__sub_82EA93B4"))) PPC_WEAK_FUNC(sub_82EA93B4);
PPC_FUNC_IMPL(__imp__sub_82EA93B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA93B8"))) PPC_WEAK_FUNC(sub_82EA93B8);
PPC_FUNC_IMPL(__imp__sub_82EA93B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82ea88a8
	ctx.lr = 0x82EA9414;
	sub_82EA88A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9424"))) PPC_WEAK_FUNC(sub_82EA9424);
PPC_FUNC_IMPL(__imp__sub_82EA9424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9428"))) PPC_WEAK_FUNC(sub_82EA9428);
PPC_FUNC_IMPL(__imp__sub_82EA9428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82EA9430;
	__savegprlr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82eb51f0
	ctx.lr = 0x82EA945C;
	sub_82EB51F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb5298
	ctx.lr = 0x82EA946C;
	sub_82EB5298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea948c
	if (!ctx.cr0.lt) goto loc_82EA948C;
loc_82EA9474:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb53f8
	ctx.lr = 0x82EA9480;
	sub_82EB53F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82EA948C:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r23,380(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r28,372(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r24,18
	ctx.r24.s64 = 18;
	// lwz r29,364(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r22,356(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82ea88a8
	ctx.lr = 0x82EA94EC;
	sub_82EA88A8(ctx, base);
	// b 0x82ea9474
	goto loc_82EA9474;
}

__attribute__((alias("__imp__sub_82EA94F0"))) PPC_WEAK_FUNC(sub_82EA94F0);
PPC_FUNC_IMPL(__imp__sub_82EA94F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82EA94F8;
	__savegprlr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82eb51f0
	ctx.lr = 0x82EA9524;
	sub_82EB51F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb5298
	ctx.lr = 0x82EA9534;
	sub_82EB5298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea9554
	if (!ctx.cr0.lt) goto loc_82EA9554;
loc_82EA953C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb53f8
	ctx.lr = 0x82EA9548;
	sub_82EB53F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_82EA9554:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r23,380(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r28,372(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r24,18
	ctx.r24.s64 = 18;
	// lwz r29,364(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r22,356(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82ea88a8
	ctx.lr = 0x82EA95B4;
	sub_82EA88A8(ctx, base);
	// b 0x82ea953c
	goto loc_82EA953C;
}

__attribute__((alias("__imp__sub_82EA95B8"))) PPC_WEAK_FUNC(sub_82EA95B8);
PPC_FUNC_IMPL(__imp__sub_82EA95B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r10,18
	ctx.r10.s64 = 18;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82ea88a8
	ctx.lr = 0x82EA9614;
	sub_82EA88A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9624"))) PPC_WEAK_FUNC(sub_82EA9624);
PPC_FUNC_IMPL(__imp__sub_82EA9624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9628"))) PPC_WEAK_FUNC(sub_82EA9628);
PPC_FUNC_IMPL(__imp__sub_82EA9628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82EA9630;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82eb51f0
	ctx.lr = 0x82EA965C;
	sub_82EB51F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb5298
	ctx.lr = 0x82EA966C;
	sub_82EB5298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea968c
	if (!ctx.cr0.lt) goto loc_82EA968C;
loc_82EA9674:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb53f8
	ctx.lr = 0x82EA9680;
	sub_82EB53F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82EA968C:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r23,380(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r26,372(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r27,364(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r28,356(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r29,348(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// li r24,17
	ctx.r24.s64 = 17;
	// lwz r30,340(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x82ea88a8
	ctx.lr = 0x82EA96F4;
	sub_82EA88A8(ctx, base);
	// b 0x82ea9674
	goto loc_82EA9674;
}

__attribute__((alias("__imp__sub_82EA96F8"))) PPC_WEAK_FUNC(sub_82EA96F8);
PPC_FUNC_IMPL(__imp__sub_82EA96F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82EA9700;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82eb51f0
	ctx.lr = 0x82EA972C;
	sub_82EB51F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb5298
	ctx.lr = 0x82EA973C;
	sub_82EB5298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ea975c
	if (!ctx.cr0.lt) goto loc_82EA975C;
loc_82EA9744:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb53f8
	ctx.lr = 0x82EA9750;
	sub_82EB53F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82EA975C:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r23,380(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r26,372(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r27,364(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r28,356(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r29,348(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// li r24,17
	ctx.r24.s64 = 17;
	// lwz r30,340(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x82ea88a8
	ctx.lr = 0x82EA97C4;
	sub_82EA88A8(ctx, base);
	// b 0x82ea9744
	goto loc_82EA9744;
}

__attribute__((alias("__imp__sub_82EA97C8"))) PPC_WEAK_FUNC(sub_82EA97C8);
PPC_FUNC_IMPL(__imp__sub_82EA97C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82ea88a8
	ctx.lr = 0x82EA9824;
	sub_82EA88A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9834"))) PPC_WEAK_FUNC(sub_82EA9834);
PPC_FUNC_IMPL(__imp__sub_82EA9834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9838"))) PPC_WEAK_FUNC(sub_82EA9838);
PPC_FUNC_IMPL(__imp__sub_82EA9838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82ea9218
	ctx.lr = 0x82EA9880;
	sub_82EA9218(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9890"))) PPC_WEAK_FUNC(sub_82EA9890);
PPC_FUNC_IMPL(__imp__sub_82EA9890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82ea92e8
	ctx.lr = 0x82EA98D8;
	sub_82EA92E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA98E8"))) PPC_WEAK_FUNC(sub_82EA98E8);
PPC_FUNC_IMPL(__imp__sub_82EA98E8) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82ea9428
	ctx.lr = 0x82EA9928;
	sub_82EA9428(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9938"))) PPC_WEAK_FUNC(sub_82EA9938);
PPC_FUNC_IMPL(__imp__sub_82EA9938) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82ea94f0
	ctx.lr = 0x82EA9978;
	sub_82EA94F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9988"))) PPC_WEAK_FUNC(sub_82EA9988);
PPC_FUNC_IMPL(__imp__sub_82EA9988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x82ea9628
	ctx.lr = 0x82EA99D8;
	sub_82EA9628(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA99E8"))) PPC_WEAK_FUNC(sub_82EA99E8);
PPC_FUNC_IMPL(__imp__sub_82EA99E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x82ea96f8
	ctx.lr = 0x82EA9A38;
	sub_82EA96F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9A48"))) PPC_WEAK_FUNC(sub_82EA9A48);
PPC_FUNC_IMPL(__imp__sub_82EA9A48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9A4C"))) PPC_WEAK_FUNC(sub_82EA9A4C);
PPC_FUNC_IMPL(__imp__sub_82EA9A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9A50"))) PPC_WEAK_FUNC(sub_82EA9A50);
PPC_FUNC_IMPL(__imp__sub_82EA9A50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9A54"))) PPC_WEAK_FUNC(sub_82EA9A54);
PPC_FUNC_IMPL(__imp__sub_82EA9A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9A58"))) PPC_WEAK_FUNC(sub_82EA9A58);
PPC_FUNC_IMPL(__imp__sub_82EA9A58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,4138
	ctx.r10.s64 = 271187968;
	// rlwinm r11,r11,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9A78"))) PPC_WEAK_FUNC(sub_82EA9A78);
PPC_FUNC_IMPL(__imp__sub_82EA9A78) {
	PPC_FUNC_PROLOGUE();
	// b 0x831f71b8
	sub_831F71B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9A7C"))) PPC_WEAK_FUNC(sub_82EA9A7C);
PPC_FUNC_IMPL(__imp__sub_82EA9A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9A80"))) PPC_WEAK_FUNC(sub_82EA9A80);
PPC_FUNC_IMPL(__imp__sub_82EA9A80) {
	PPC_FUNC_PROLOGUE();
	// b 0x831f91f0
	sub_831F91F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9A84"))) PPC_WEAK_FUNC(sub_82EA9A84);
PPC_FUNC_IMPL(__imp__sub_82EA9A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9A88"))) PPC_WEAK_FUNC(sub_82EA9A88);
PPC_FUNC_IMPL(__imp__sub_82EA9A88) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fbac0
	sub_831FBAC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9A8C"))) PPC_WEAK_FUNC(sub_82EA9A8C);
PPC_FUNC_IMPL(__imp__sub_82EA9A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9A90"))) PPC_WEAK_FUNC(sub_82EA9A90);
PPC_FUNC_IMPL(__imp__sub_82EA9A90) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fc6b0
	sub_831FC6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9A94"))) PPC_WEAK_FUNC(sub_82EA9A94);
PPC_FUNC_IMPL(__imp__sub_82EA9A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9A98"))) PPC_WEAK_FUNC(sub_82EA9A98);
PPC_FUNC_IMPL(__imp__sub_82EA9A98) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fc6b8
	sub_831FC6B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9A9C"))) PPC_WEAK_FUNC(sub_82EA9A9C);
PPC_FUNC_IMPL(__imp__sub_82EA9A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9AA0"))) PPC_WEAK_FUNC(sub_82EA9AA0);
PPC_FUNC_IMPL(__imp__sub_82EA9AA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fc528
	sub_831FC528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9AA4"))) PPC_WEAK_FUNC(sub_82EA9AA4);
PPC_FUNC_IMPL(__imp__sub_82EA9AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9AA8"))) PPC_WEAK_FUNC(sub_82EA9AA8);
PPC_FUNC_IMPL(__imp__sub_82EA9AA8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ea9b38
	if (ctx.cr6.eq) goto loc_82EA9B38;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82cb1160
	ctx.lr = 0x82EA9AD8;
	sub_82CB1160(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea9b1c
	if (ctx.cr0.eq) goto loc_82EA9B1C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea9b1c
	if (ctx.cr6.eq) goto loc_82EA9B1C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// li r8,260
	ctx.r8.s64 = 260;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82e64280
	ctx.lr = 0x82EA9B1C;
	sub_82E64280(ctx, base);
loc_82EA9B1C:
	// addi r30,r31,264
	ctx.r30.s64 = ctx.r31.s64 + 264;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EA9B30;
	sub_82CB1160(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82ea9b40
	goto loc_82EA9B40;
loc_82EA9B38:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EA9B40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82EA9B5C"))) PPC_WEAK_FUNC(sub_82EA9B5C);
PPC_FUNC_IMPL(__imp__sub_82EA9B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9B60"))) PPC_WEAK_FUNC(sub_82EA9B60);
PPC_FUNC_IMPL(__imp__sub_82EA9B60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9B68"))) PPC_WEAK_FUNC(sub_82EA9B68);
PPC_FUNC_IMPL(__imp__sub_82EA9B68) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ea9bf8
	if (ctx.cr6.eq) goto loc_82EA9BF8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82cb1160
	ctx.lr = 0x82EA9B98;
	sub_82CB1160(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea9bdc
	if (ctx.cr0.eq) goto loc_82EA9BDC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea9bdc
	if (ctx.cr6.eq) goto loc_82EA9BDC;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// li r8,260
	ctx.r8.s64 = 260;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82e64280
	ctx.lr = 0x82EA9BDC;
	sub_82E64280(ctx, base);
loc_82EA9BDC:
	// addi r30,r31,264
	ctx.r30.s64 = ctx.r31.s64 + 264;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EA9BF0;
	sub_82CB1160(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82ea9c00
	goto loc_82EA9C00;
loc_82EA9BF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EA9C00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82EA9C1C"))) PPC_WEAK_FUNC(sub_82EA9C1C);
PPC_FUNC_IMPL(__imp__sub_82EA9C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9C20"))) PPC_WEAK_FUNC(sub_82EA9C20);
PPC_FUNC_IMPL(__imp__sub_82EA9C20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9C28"))) PPC_WEAK_FUNC(sub_82EA9C28);
PPC_FUNC_IMPL(__imp__sub_82EA9C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-4188
	ctx.r11.s64 = ctx.r11.s64 + -4188;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9C38"))) PPC_WEAK_FUNC(sub_82EA9C38);
PPC_FUNC_IMPL(__imp__sub_82EA9C38) {
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
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-4188
	ctx.r11.s64 = ctx.r11.s64 + -4188;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82ea9c64
	if (ctx.cr0.eq) goto loc_82EA9C64;
	// bl 0x822990f0
	ctx.lr = 0x82EA9C64;
	sub_822990F0(ctx, base);
loc_82EA9C64:
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

__attribute__((alias("__imp__sub_82EA9C7C"))) PPC_WEAK_FUNC(sub_82EA9C7C);
PPC_FUNC_IMPL(__imp__sub_82EA9C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9C80"))) PPC_WEAK_FUNC(sub_82EA9C80);
PPC_FUNC_IMPL(__imp__sub_82EA9C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-4188
	ctx.r11.s64 = ctx.r11.s64 + -4188;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9C90"))) PPC_WEAK_FUNC(sub_82EA9C90);
PPC_FUNC_IMPL(__imp__sub_82EA9C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-4188
	ctx.r11.s64 = ctx.r11.s64 + -4188;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9CA0"))) PPC_WEAK_FUNC(sub_82EA9CA0);
PPC_FUNC_IMPL(__imp__sub_82EA9CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r11,r11,-4176
	ctx.r11.s64 = ctx.r11.s64 + -4176;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9CC0"))) PPC_WEAK_FUNC(sub_82EA9CC0);
PPC_FUNC_IMPL(__imp__sub_82EA9CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-4188
	ctx.r11.s64 = ctx.r11.s64 + -4188;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9CD0"))) PPC_WEAK_FUNC(sub_82EA9CD0);
PPC_FUNC_IMPL(__imp__sub_82EA9CD0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82ee1648
	sub_82EE1648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9CEC"))) PPC_WEAK_FUNC(sub_82EA9CEC);
PPC_FUNC_IMPL(__imp__sub_82EA9CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9CF0"))) PPC_WEAK_FUNC(sub_82EA9CF0);
PPC_FUNC_IMPL(__imp__sub_82EA9CF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9CF8"))) PPC_WEAK_FUNC(sub_82EA9CF8);
PPC_FUNC_IMPL(__imp__sub_82EA9CF8) {
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
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-4188
	ctx.r11.s64 = ctx.r11.s64 + -4188;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82ea9d24
	if (ctx.cr0.eq) goto loc_82EA9D24;
	// bl 0x822990f0
	ctx.lr = 0x82EA9D24;
	sub_822990F0(ctx, base);
loc_82EA9D24:
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

__attribute__((alias("__imp__sub_82EA9D3C"))) PPC_WEAK_FUNC(sub_82EA9D3C);
PPC_FUNC_IMPL(__imp__sub_82EA9D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9D40"))) PPC_WEAK_FUNC(sub_82EA9D40);
PPC_FUNC_IMPL(__imp__sub_82EA9D40) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82ea9d54
	if (ctx.cr6.eq) goto loc_82EA9D54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-4148
	ctx.r4.s64 = ctx.r11.s64 + -4148;
	// b 0x82ee06a0
	sub_82EE06A0(ctx, base);
	return;
loc_82EA9D54:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-4164
	ctx.r4.s64 = ctx.r11.s64 + -4164;
	// b 0x82ee06a0
	sub_82EE06A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9D60"))) PPC_WEAK_FUNC(sub_82EA9D60);
PPC_FUNC_IMPL(__imp__sub_82EA9D60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9D64"))) PPC_WEAK_FUNC(sub_82EA9D64);
PPC_FUNC_IMPL(__imp__sub_82EA9D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9D68"))) PPC_WEAK_FUNC(sub_82EA9D68);
PPC_FUNC_IMPL(__imp__sub_82EA9D68) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,118
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 118, ctx.xer);
	// bne cr6,0x82ea9df8
	if (!ctx.cr6.eq) goto loc_82EA9DF8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EA9D88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ea9d88
	if (!ctx.cr6.eq) goto loc_82EA9D88;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// ble cr6,0x82ea9df8
	if (!ctx.cr6.gt) goto loc_82EA9DF8;
	// addi r31,r11,-3
	ctx.r31.s64 = ctx.r11.s64 + -3;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-4132
	ctx.r4.s64 = ctx.r11.s64 + -4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb80e0
	ctx.lr = 0x82EA9DCC;
	sub_82CB80E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ea9df0
	if (ctx.cr0.eq) goto loc_82EA9DF0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-4136
	ctx.r4.s64 = ctx.r11.s64 + -4136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb80e0
	ctx.lr = 0x82EA9DE8;
	sub_82CB80E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ea9df8
	if (!ctx.cr0.eq) goto loc_82EA9DF8;
loc_82EA9DF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ea9dfc
	goto loc_82EA9DFC;
loc_82EA9DF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EA9DFC:
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

__attribute__((alias("__imp__sub_82EA9E10"))) PPC_WEAK_FUNC(sub_82EA9E10);
PPC_FUNC_IMPL(__imp__sub_82EA9E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EA9E18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,118
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 118, ctx.xer);
	// bne cr6,0x82ea9eb4
	if (!ctx.cr6.eq) goto loc_82EA9EB4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82EA9E34:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ea9e34
	if (!ctx.cr6.eq) goto loc_82EA9E34;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// ble cr6,0x82ea9eb4
	if (!ctx.cr6.gt) goto loc_82EA9EB4;
	// addi r30,r11,-3
	ctx.r30.s64 = ctx.r11.s64 + -3;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-4132
	ctx.r4.s64 = ctx.r11.s64 + -4132;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb80e0
	ctx.lr = 0x82EA9E78;
	sub_82CB80E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ea9e8c
	if (!ctx.cr0.eq) goto loc_82EA9E8C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5116
	ctx.r3.s64 = ctx.r11.s64 + -5116;
	// b 0x82ea9eec
	goto loc_82EA9EEC;
loc_82EA9E8C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-4136
	ctx.r4.s64 = ctx.r11.s64 + -4136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb80e0
	ctx.lr = 0x82EA9EA0;
	sub_82CB80E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ea9eb4
	if (!ctx.cr0.eq) goto loc_82EA9EB4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5128
	ctx.r3.s64 = ctx.r11.s64 + -5128;
	// b 0x82ea9eec
	goto loc_82EA9EEC;
loc_82EA9EB4:
	// rlwinm. r11,r29,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ea9ee8
	if (!ctx.cr0.eq) goto loc_82EA9EE8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,118
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 118, ctx.xer);
	// bne cr6,0x82ea9ed8
	if (!ctx.cr6.eq) goto loc_82EA9ED8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r11,6368
	ctx.r31.s64 = ctx.r11.s64 + 6368;
	// b 0x82ea9ee8
	goto loc_82EA9EE8;
loc_82EA9ED8:
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// bne cr6,0x82ea9ee8
	if (!ctx.cr6.eq) goto loc_82EA9EE8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r11,6384
	ctx.r31.s64 = ctx.r11.s64 + 6384;
loc_82EA9EE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EA9EEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9EF4"))) PPC_WEAK_FUNC(sub_82EA9EF4);
PPC_FUNC_IMPL(__imp__sub_82EA9EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9EF8"))) PPC_WEAK_FUNC(sub_82EA9EF8);
PPC_FUNC_IMPL(__imp__sub_82EA9EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,6384
	ctx.r3.s64 = ctx.r11.s64 + 6384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9F04"))) PPC_WEAK_FUNC(sub_82EA9F04);
PPC_FUNC_IMPL(__imp__sub_82EA9F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9F08"))) PPC_WEAK_FUNC(sub_82EA9F08);
PPC_FUNC_IMPL(__imp__sub_82EA9F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,6368
	ctx.r3.s64 = ctx.r11.s64 + 6368;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9F14"))) PPC_WEAK_FUNC(sub_82EA9F14);
PPC_FUNC_IMPL(__imp__sub_82EA9F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9F18"))) PPC_WEAK_FUNC(sub_82EA9F18);
PPC_FUNC_IMPL(__imp__sub_82EA9F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82EA9F20;
	__savegprlr_25(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82ea9f34
	if (!ctx.cr6.eq) goto loc_82EA9F34;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82ea9fe4
	goto loc_82EA9FE4;
loc_82EA9F34:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// beq cr6,0x82ea9f48
	if (ctx.cr6.eq) goto loc_82EA9F48;
	// stw r27,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r27.u32);
loc_82EA9F48:
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,4138
	ctx.r11.s64 = 271187968;
	// ori r11,r11,4352
	ctx.r11.u64 = ctx.r11.u64 | 4352;
	// rlwinm r10,r7,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaa034
	if (!ctx.cr6.eq) goto loc_82EAA034;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ea9fd4
	if (ctx.cr6.eq) goto loc_82EA9FD4;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82ea9fe8
	if (ctx.cr6.lt) goto loc_82EA9FE8;
	// bne cr6,0x82ea9fd4
	if (!ctx.cr6.eq) goto loc_82EA9FD4;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r9,r9,9
	ctx.r9.s64 = ctx.r9.s64 + 9;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// beq cr6,0x82ea9fd4
	if (ctx.cr6.eq) goto loc_82EA9FD4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82EA9FA4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ea9fc4
	if (ctx.cr6.eq) goto loc_82EA9FC4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,20,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xF;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82EA9FC4:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82ea9fa4
	if (!ctx.cr0.eq) goto loc_82EA9FA4;
loc_82EA9FD4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ea9fe0
	if (ctx.cr6.eq) goto loc_82EA9FE0;
	// stw r26,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r26.u32);
loc_82EA9FE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EA9FE4:
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82EA9FE8:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// rlwinm. r11,r10,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ea9fd4
	if (ctx.cr0.eq) goto loc_82EA9FD4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82EAA000:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa020
	if (ctx.cr6.eq) goto loc_82EAA020;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,28,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xF;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82EAA020:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82eaa000
	if (!ctx.cr0.eq) goto loc_82EAA000;
	// b 0x82ea9fd4
	goto loc_82EA9FD4;
loc_82EAA034:
	// rlwinm r11,r7,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,18008
	ctx.r10.s64 = 1180172288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ea9fe0
	if (ctx.cr6.eq) goto loc_82EA9FE0;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eaa384
	if (ctx.cr6.eq) goto loc_82EAA384;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eaa068
	if (ctx.cr6.eq) goto loc_82EAA068;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x82ea9fe4
	goto loc_82EA9FE4;
loc_82EAA068:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82eaa0f4
	if (!ctx.cr6.eq) goto loc_82EAA0F4;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_82EAA07C:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bne cr6,0x82eaa0c4
	if (!ctx.cr6.eq) goto loc_82EAA0C4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r9,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bne cr6,0x82eaa0c4
	if (!ctx.cr6.eq) goto loc_82EAA0C4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa0bc
	if (ctx.cr6.eq) goto loc_82EAA0BC;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_82EAA0BC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
loc_82EAA0C4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82ea9fd4
	if (ctx.cr6.eq) goto loc_82EA9FD4;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// bne cr6,0x82eaa0e4
	if (!ctx.cr6.eq) goto loc_82EAA0E4;
	// rlwinm r10,r10,18,15,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1FFFC;
	// b 0x82eaa0e8
	goto loc_82EAA0E8;
loc_82EAA0E4:
	// rlwinm r10,r10,10,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3C;
loc_82EAA0E8:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82eaa07c
	goto loc_82EAA07C;
loc_82EAA0F4:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82eaa1c4
	if (!ctx.cr6.eq) goto loc_82EAA1C4;
	// lis r11,-24576
	ctx.r11.s64 = -1610612736;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lis r29,-20480
	ctx.r29.s64 = -1342177280;
	// lis r28,-28672
	ctx.r28.s64 = -1879048192;
	// li r7,10
	ctx.r7.s64 = 10;
	// ori r6,r11,2048
	ctx.r6.u64 = ctx.r11.u64 | 2048;
loc_82EAA118:
	// lhz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x82eaa188
	if (!ctx.cr6.eq) goto loc_82EAA188;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// clrlwi r10,r11,21
	ctx.r10.u64 = ctx.r11.u32 & 0x7FF;
	// rlwinm r11,r11,0,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// rlwinm r11,r11,0,19,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF0001FFF;
	// beq cr6,0x82eaa178
	if (ctx.cr6.eq) goto loc_82EAA178;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82eaa154
	if (!ctx.cr6.eq) goto loc_82EAA154;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// b 0x82eaa180
	goto loc_82EAA180;
loc_82EAA154:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82eaa170
	if (!ctx.cr6.eq) goto loc_82EAA170;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bge cr6,0x82eaa1b8
	if (!ctx.cr6.lt) goto loc_82EAA1B8;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r27,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r27.u32);
	// b 0x82eaa180
	goto loc_82EAA180;
loc_82EAA170:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82eaa1b8
	if (!ctx.cr6.eq) goto loc_82EAA1B8;
loc_82EAA178:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82eaa188
	if (ctx.cr6.eq) goto loc_82EAA188;
loc_82EAA180:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
loc_82EAA188:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82ea9fd4
	if (ctx.cr6.eq) goto loc_82EA9FD4;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x82eaa1a8
	if (!ctx.cr6.eq) goto loc_82EAA1A8;
	// rlwinm r11,r11,18,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1FFFC;
	// b 0x82eaa1ac
	goto loc_82EAA1AC;
loc_82EAA1A8:
	// rlwinm r11,r11,10,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3C;
loc_82EAA1AC:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// b 0x82eaa118
	goto loc_82EAA118;
loc_82EAA1B8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82ea9fe4
	goto loc_82EA9FE4;
loc_82EAA1C4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82eaa1b8
	if (!ctx.cr6.eq) goto loc_82EAA1B8;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// sth r27,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r27.u16);
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lis r29,-20480
	ctx.r29.s64 = -1342177280;
	// lis r28,-28672
	ctx.r28.s64 = -1879048192;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EAA200:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r8,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaa258
	if (ctx.cr0.eq) goto loc_82EAA258;
	// rlwinm r10,r8,0,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFF800;
	// rlwinm r10,r10,0,19,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF0001FFF;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82eaa238
	if (!ctx.cr6.eq) goto loc_82EAA238;
	// clrlwi. r11,r8,21
	ctx.r11.u64 = ctx.r8.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eaa22c
	if (!ctx.cr0.eq) goto loc_82EAA22C;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82eaa238
	goto loc_82EAA238;
loc_82EAA22C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82eaa238
	if (!ctx.cr6.eq) goto loc_82EAA238;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EAA238:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82eaa2ec
	if (ctx.cr6.eq) goto loc_82EAA2EC;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82eaa2ec
	if (!ctx.cr6.eq) goto loc_82EAA2EC;
	// clrlwi r11,r8,21
	ctx.r11.u64 = ctx.r8.u32 & 0x7FF;
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// stbx r3,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u8);
	// b 0x82eaa2ec
	goto loc_82EAA2EC;
loc_82EAA258:
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82eaa2f4
	if (ctx.cr6.eq) goto loc_82EAA2F4;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x82eaa278
	if (!ctx.cr6.eq) goto loc_82EAA278;
	// rlwinm r11,r8,18,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x1FFFC;
loc_82EAA270:
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82eaa2ec
	goto loc_82EAA2EC;
loc_82EAA278:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82eaa2cc
	if (!ctx.cr6.eq) goto loc_82EAA2CC;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// blt cr6,0x82eaa2cc
	if (ctx.cr6.lt) goto loc_82EAA2CC;
	// cmplwi cr6,r10,74
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 74, ctx.xer);
	// ble cr6,0x82eaa2ac
	if (!ctx.cr6.gt) goto loc_82EAA2AC;
	// cmplwi cr6,r10,75
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 75, ctx.xer);
	// ble cr6,0x82eaa2cc
	if (!ctx.cr6.gt) goto loc_82EAA2CC;
	// cmplwi cr6,r10,77
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 77, ctx.xer);
	// ble cr6,0x82eaa2ac
	if (!ctx.cr6.gt) goto loc_82EAA2AC;
	// addi r11,r10,-82
	ctx.r11.s64 = ctx.r10.s64 + -82;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82eaa2cc
	if (ctx.cr6.gt) goto loc_82EAA2CC;
loc_82EAA2AC:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r25,r11,0,0,20
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// rlwinm r25,r25,0,19,3
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFFF0001FFF;
	// cmplw cr6,r25,r29
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82eaa2cc
	if (!ctx.cr6.eq) goto loc_82EAA2CC;
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// addi r25,r1,-80
	ctx.r25.s64 = ctx.r1.s64 + -80;
	// stbx r3,r11,r25
	PPC_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r3.u8);
loc_82EAA2CC:
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// blt cr6,0x82eaa2e0
	if (ctx.cr6.lt) goto loc_82EAA2E0;
	// rlwinm r11,r8,10,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x3C;
	// b 0x82eaa270
	goto loc_82EAA270;
loc_82EAA2E0:
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x82eaa2ec
	if (!ctx.cr6.eq) goto loc_82EAA2EC;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
loc_82EAA2EC:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82eaa200
	goto loc_82EAA200;
loc_82EAA2F4:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EAA2FC:
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// lbzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82eaa328
	if (ctx.cr0.eq) goto loc_82EAA328;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa320
	if (ctx.cr6.eq) goto loc_82EAA320;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82EAA320:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82EAA328:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x82eaa2fc
	if (ctx.cr6.lt) goto loc_82EAA2FC;
	// li r7,10
	ctx.r7.s64 = 10;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82eaa35c
	if (ctx.cr6.eq) goto loc_82EAA35C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa358
	if (ctx.cr6.eq) goto loc_82EAA358;
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
loc_82EAA358:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82EAA35C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82ea9fd4
	if (ctx.cr6.eq) goto loc_82EA9FD4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa37c
	if (ctx.cr6.eq) goto loc_82EAA37C;
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_82EAA37C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// b 0x82ea9fd4
	goto loc_82EA9FD4;
loc_82EAA384:
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// subfc r10,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
loc_82EAA3A0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eaa434
	if (!ctx.cr0.eq) goto loc_82EAA434;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bne cr6,0x82eaa3f4
	if (!ctx.cr6.eq) goto loc_82EAA3F4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r9,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bne cr6,0x82eaa3f4
	if (!ctx.cr6.eq) goto loc_82EAA3F4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa3ec
	if (ctx.cr6.eq) goto loc_82EAA3EC;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_82EAA3EC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
loc_82EAA3F4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82ea9fd4
	if (ctx.cr6.eq) goto loc_82EA9FD4;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// bne cr6,0x82eaa418
	if (!ctx.cr6.eq) goto loc_82EAA418;
	// rlwinm r10,r10,18,15,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1FFFC;
loc_82EAA410:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82eaa434
	goto loc_82EAA434;
loc_82EAA418:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82eaa428
	if (!ctx.cr6.eq) goto loc_82EAA428;
	// rlwinm r10,r10,10,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3C;
	// b 0x82eaa410
	goto loc_82EAA410;
loc_82EAA428:
	// cmplwi cr6,r9,81
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 81, ctx.xer);
	// bne cr6,0x82eaa434
	if (!ctx.cr6.eq) goto loc_82EAA434;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_82EAA434:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82eaa3a0
	goto loc_82EAA3A0;
}

__attribute__((alias("__imp__sub_82EAA43C"))) PPC_WEAK_FUNC(sub_82EAA43C);
PPC_FUNC_IMPL(__imp__sub_82EAA43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAA440"))) PPC_WEAK_FUNC(sub_82EAA440);
PPC_FUNC_IMPL(__imp__sub_82EAA440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bne cr6,0x82eaa464
	if (!ctx.cr6.eq) goto loc_82EAA464;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82eaa9ec
	goto loc_82EAA9EC;
loc_82EAA464:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82eaa470
	if (ctx.cr6.eq) goto loc_82EAA470;
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
loc_82EAA470:
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,4138
	ctx.r9.s64 = 271187968;
	// subfc r7,r8,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// rlwinm r6,r11,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// ori r9,r9,4352
	ctx.r9.u64 = ctx.r9.u64 | 4352;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// bne cr6,0x82eaa5e0
	if (!ctx.cr6.eq) goto loc_82EAA5E0;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82eaa9dc
	if (ctx.cr6.eq) goto loc_82EAA9DC;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82eaa51c
	if (ctx.cr6.lt) goto loc_82EAA51C;
	// bne cr6,0x82eaa9dc
	if (!ctx.cr6.eq) goto loc_82EAA9DC;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm. r10,r8,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,9
	ctx.r9.s64 = ctx.r9.s64 + 9;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// beq 0x82eaa9dc
	if (ctx.cr0.eq) goto loc_82EAA9DC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82EAA4E8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa508
	if (ctx.cr6.eq) goto loc_82EAA508;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,28,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xF;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82EAA508:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82eaa4e8
	if (!ctx.cr0.eq) goto loc_82EAA4E8;
	// b 0x82eaa9dc
	goto loc_82EAA9DC;
loc_82EAA51C:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// li r9,10
	ctx.r9.s64 = 10;
	// li r7,1
	ctx.r7.s64 = 1;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaa544
	if (ctx.cr0.eq) goto loc_82EAA544;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa540
	if (ctx.cr6.eq) goto loc_82EAA540;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
loc_82EAA540:
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
loc_82EAA544:
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaa568
	if (ctx.cr0.eq) goto loc_82EAA568;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa564
	if (ctx.cr6.eq) goto loc_82EAA564;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_82EAA564:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82EAA568:
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaa58c
	if (ctx.cr0.eq) goto loc_82EAA58C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa588
	if (ctx.cr6.eq) goto loc_82EAA588;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82EAA588:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82EAA58C:
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaa5b4
	if (ctx.cr0.eq) goto loc_82EAA5B4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa5b0
	if (ctx.cr6.eq) goto loc_82EAA5B0;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,3
	ctx.r8.s64 = 3;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82EAA5B0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82EAA5B4:
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaa9dc
	if (ctx.cr0.eq) goto loc_82EAA9DC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa5d8
	if (ctx.cr6.eq) goto loc_82EAA5D8;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,12
	ctx.r10.s64 = 12;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_82EAA5D8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82eaa9dc
	goto loc_82EAA9DC;
loc_82EAA5E0:
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lis r9,18008
	ctx.r9.s64 = 1180172288;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eaa9e8
	if (ctx.cr6.eq) goto loc_82EAA9E8;
	// lis r9,-2
	ctx.r9.s64 = -131072;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eaa790
	if (ctx.cr6.eq) goto loc_82EAA790;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eaa614
	if (ctx.cr6.eq) goto loc_82EAA614;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x82eaa9ec
	goto loc_82EAA9EC;
loc_82EAA614:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bge cr6,0x82eaa638
	if (!ctx.cr6.lt) goto loc_82EAA638;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa630
	if (ctx.cr6.eq) goto loc_82EAA630;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82EAA630:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82eaa9dc
	goto loc_82EAA9DC;
loc_82EAA638:
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// std r30,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r30.u64);
loc_82EAA658:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eaa6a4
	if (ctx.cr0.eq) goto loc_82EAA6A4;
	// rlwinm r10,r11,0,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// rlwinm r10,r10,0,19,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF0001FFF;
	// ori r8,r8,2048
	ctx.r8.u64 = ctx.r8.u64 | 2048;
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82eaa688
	if (!ctx.cr6.eq) goto loc_82EAA688;
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// b 0x82eaa69c
	goto loc_82EAA69C;
loc_82EAA688:
	// lis r8,-28672
	ctx.r8.s64 = -1879048192;
	// ori r8,r8,2048
	ctx.r8.u64 = ctx.r8.u64 | 2048;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82eaa700
	if (!ctx.cr6.eq) goto loc_82EAA700;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
loc_82EAA69C:
	// stbx r7,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// b 0x82eaa700
	goto loc_82EAA700;
loc_82EAA6A4:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82eaa708
	if (ctx.cr6.eq) goto loc_82EAA708;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x82eaa6c0
	if (!ctx.cr6.eq) goto loc_82EAA6C0;
	// rlwinm r11,r11,18,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1FFFC;
	// b 0x82eaa6fc
	goto loc_82EAA6FC;
loc_82EAA6C0:
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// beq cr6,0x82eaa6e8
	if (ctx.cr6.eq) goto loc_82EAA6E8;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// beq cr6,0x82eaa6e8
	if (ctx.cr6.eq) goto loc_82EAA6E8;
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x82eaa6e8
	if (ctx.cr6.eq) goto loc_82EAA6E8;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bne cr6,0x82eaa700
	if (!ctx.cr6.eq) goto loc_82EAA700;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82eaa700
	goto loc_82EAA700;
loc_82EAA6E8:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82eaa6f8
	if (ctx.cr6.eq) goto loc_82EAA6F8;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// b 0x82eaa700
	goto loc_82EAA700;
loc_82EAA6F8:
	// rlwinm r11,r11,10,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3C;
loc_82EAA6FC:
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82EAA700:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82eaa658
	goto loc_82EAA658;
loc_82EAA708:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,10
	ctx.r9.s64 = 10;
loc_82EAA714:
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// lbzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82eaa73c
	if (ctx.cr0.eq) goto loc_82EAA73C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa734
	if (ctx.cr6.eq) goto loc_82EAA734;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82EAA734:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82EAA73C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82eaa714
	if (ctx.cr6.lt) goto loc_82EAA714;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82EAA754:
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lbzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82eaa780
	if (ctx.cr0.eq) goto loc_82EAA780;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa778
	if (ctx.cr6.eq) goto loc_82EAA778;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82EAA778:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82EAA780:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82eaa754
	if (ctx.cr6.lt) goto loc_82EAA754;
	// b 0x82eaa9dc
	goto loc_82EAA9DC;
loc_82EAA790:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82eaa818
	if (!ctx.cr6.eq) goto loc_82EAA818;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_82EAA7A0:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bne cr6,0x82eaa7e8
	if (!ctx.cr6.eq) goto loc_82EAA7E8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r9,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,1536
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1536, ctx.xer);
	// bne cr6,0x82eaa7e8
	if (!ctx.cr6.eq) goto loc_82EAA7E8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa7e0
	if (ctx.cr6.eq) goto loc_82EAA7E0;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_82EAA7E0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
loc_82EAA7E8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82eaa9dc
	if (ctx.cr6.eq) goto loc_82EAA9DC;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// bne cr6,0x82eaa808
	if (!ctx.cr6.eq) goto loc_82EAA808;
	// rlwinm r10,r10,18,15,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1FFFC;
	// b 0x82eaa80c
	goto loc_82EAA80C;
loc_82EAA808:
	// rlwinm r10,r10,10,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3C;
loc_82EAA80C:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82eaa7a0
	goto loc_82EAA7A0;
loc_82EAA818:
	// addi r11,r1,-62
	ctx.r11.s64 = ctx.r1.s64 + -62;
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// sth r30,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r30.u16);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
loc_82EAA83C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eaa894
	if (ctx.cr0.eq) goto loc_82EAA894;
	// rlwinm r10,r11,0,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// rlwinm r10,r10,0,19,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF0001FFF;
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82eaa868
	if (!ctx.cr6.eq) goto loc_82EAA868;
	// addi r10,r1,-62
	ctx.r10.s64 = ctx.r1.s64 + -62;
	// b 0x82eaa88c
	goto loc_82EAA88C;
loc_82EAA868:
	// lis r8,-12288
	ctx.r8.s64 = -805306368;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82eaa87c
	if (!ctx.cr6.eq) goto loc_82EAA87C;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// b 0x82eaa88c
	goto loc_82EAA88C;
loc_82EAA87C:
	// lis r8,-8192
	ctx.r8.s64 = -536870912;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82eaa8f0
	if (!ctx.cr6.eq) goto loc_82EAA8F0;
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
loc_82EAA88C:
	// stbx r7,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// b 0x82eaa8f0
	goto loc_82EAA8F0;
loc_82EAA894:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82eaa8f8
	if (ctx.cr6.eq) goto loc_82EAA8F8;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x82eaa8b0
	if (!ctx.cr6.eq) goto loc_82EAA8B0;
	// rlwinm r11,r11,18,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1FFFC;
	// b 0x82eaa8ec
	goto loc_82EAA8EC;
loc_82EAA8B0:
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// beq cr6,0x82eaa8d8
	if (ctx.cr6.eq) goto loc_82EAA8D8;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// beq cr6,0x82eaa8d8
	if (ctx.cr6.eq) goto loc_82EAA8D8;
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x82eaa8d8
	if (ctx.cr6.eq) goto loc_82EAA8D8;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bne cr6,0x82eaa8f0
	if (!ctx.cr6.eq) goto loc_82EAA8F0;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82eaa8f0
	goto loc_82EAA8F0;
loc_82EAA8D8:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82eaa8e8
	if (ctx.cr6.eq) goto loc_82EAA8E8;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// b 0x82eaa8f0
	goto loc_82EAA8F0;
loc_82EAA8E8:
	// rlwinm r11,r11,10,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3C;
loc_82EAA8EC:
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82EAA8F0:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82eaa83c
	goto loc_82EAA83C;
loc_82EAA8F8:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EAA900:
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// lbzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82eaa92c
	if (ctx.cr0.eq) goto loc_82EAA92C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa924
	if (ctx.cr6.eq) goto loc_82EAA924;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82EAA924:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82EAA92C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x82eaa900
	if (ctx.cr6.lt) goto loc_82EAA900;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r9,10
	ctx.r9.s64 = 10;
loc_82EAA948:
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// lbzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82eaa970
	if (ctx.cr0.eq) goto loc_82EAA970;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa968
	if (ctx.cr6.eq) goto loc_82EAA968;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82EAA968:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82EAA970:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82eaa948
	if (ctx.cr6.lt) goto loc_82EAA948;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82EAA988:
	// addi r9,r1,-62
	ctx.r9.s64 = ctx.r1.s64 + -62;
	// lbzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82eaa9d0
	if (ctx.cr0.eq) goto loc_82EAA9D0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82eaa9c8
	if (ctx.cr6.eq) goto loc_82EAA9C8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eaa9b0
	if (!ctx.cr6.eq) goto loc_82EAA9B0;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// b 0x82eaa9c4
	goto loc_82EAA9C4;
loc_82EAA9B0:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// li r9,4
	ctx.r9.s64 = 4;
	// beq cr6,0x82eaa9c0
	if (ctx.cr6.eq) goto loc_82EAA9C0;
	// li r9,11
	ctx.r9.s64 = 11;
loc_82EAA9C0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82EAA9C4:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_82EAA9C8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82EAA9D0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82eaa988
	if (ctx.cr6.lt) goto loc_82EAA988;
loc_82EAA9DC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82eaa9e8
	if (ctx.cr6.eq) goto loc_82EAA9E8;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
loc_82EAA9E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAA9EC:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAA9F8"))) PPC_WEAK_FUNC(sub_82EAA9F8);
PPC_FUNC_IMPL(__imp__sub_82EAA9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EAAA00;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eaaa18
	if (ctx.cr6.eq) goto loc_82EAAA18;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82EAAA18:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82eaaa2c
	if (!ctx.cr6.eq) goto loc_82EAAA2C;
loc_82EAAA20:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82eaaacc
	goto loc_82EAAACC;
loc_82EAAA2C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eaaa20
	if (ctx.cr6.eq) goto loc_82EAAA20;
	// lis r4,18261
	ctx.r4.s64 = 1196752896;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// ori r4,r4,16964
	ctx.r4.u64 = ctx.r4.u64 | 16964;
	// bl 0x82ec9228
	ctx.lr = 0x82EAAA48;
	sub_82EC9228(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eaaacc
	if (ctx.cr0.lt) goto loc_82EAAACC;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82eaaa84
	if (!ctx.cr6.eq) goto loc_82EAAA84;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r11,40
	ctx.r11.s64 = 40;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// std r31,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r31.u64);
	// std r31,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r31.u64);
	// std r31,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r31.u64);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82EAAA84:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ee3870
	ctx.lr = 0x82EAAA90;
	sub_82EE3870(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eaaacc
	if (ctx.cr0.lt) goto loc_82EAAACC;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAAAB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EAAAC0;
	sub_82CB1160(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82EAAACC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAAAD4"))) PPC_WEAK_FUNC(sub_82EAAAD4);
PPC_FUNC_IMPL(__imp__sub_82EAAAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAAAD8"))) PPC_WEAK_FUNC(sub_82EAAAD8);
PPC_FUNC_IMPL(__imp__sub_82EAAAD8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82eaaaf4
	if (!ctx.cr6.eq) goto loc_82EAAAF4;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82eaab68
	goto loc_82EAAB68;
loc_82EAAAF4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r6,49
	ctx.r6.s64 = 49;
	// addi r7,r11,-4776
	ctx.r7.s64 = ctx.r11.s64 + -4776;
loc_82EAAB04:
	// add r11,r6,r31
	ctx.r11.u64 = ctx.r6.u64 + ctx.r31.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mulli r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 * 12;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
loc_82EAAB18:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// beq 0x82eaab3c
	if (ctx.cr0.eq) goto loc_82EAAB3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eaab18
	if (ctx.cr6.eq) goto loc_82EAAB18;
loc_82EAAB3C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82eaab74
	if (ctx.cr0.eq) goto loc_82EAAB74;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82eaab54
	if (!ctx.cr6.lt) goto loc_82EAAB54;
	// addi r31,r9,1
	ctx.r31.s64 = ctx.r9.s64 + 1;
	// b 0x82eaab58
	goto loc_82EAAB58;
loc_82EAAB54:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_82EAAB58:
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82eaab04
	if (ctx.cr6.lt) goto loc_82EAAB04;
loc_82EAAB60:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EAAB68:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82EAAB74:
	// mulli r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 * 12;
	// addi r10,r7,8
	ctx.r10.s64 = ctx.r7.s64 + 8;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82eaab60
	if (!ctx.cr6.eq) goto loc_82EAAB60;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82eaabb0
	if (ctx.cr6.eq) goto loc_82EAABB0;
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
loc_82EAABB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eaab68
	goto loc_82EAAB68;
}

__attribute__((alias("__imp__sub_82EAABB8"))) PPC_WEAK_FUNC(sub_82EAABB8);
PPC_FUNC_IMPL(__imp__sub_82EAABB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r9,49
	ctx.r9.s64 = 49;
	// addi r10,r11,-4776
	ctx.r10.s64 = ctx.r11.s64 + -4776;
	// addi r11,r10,596
	ctx.r11.s64 = ctx.r10.s64 + 596;
loc_82EAABC8:
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82eaabec
	if (!ctx.cr6.eq) goto loc_82EAABEC;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ctx.r4.u64;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82eaac04
	if (ctx.cr6.eq) goto loc_82EAAC04;
loc_82EAABEC:
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82eaabc8
	if (ctx.cr6.gt) goto loc_82EAABC8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82EAAC04:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82eaac2c
	if (ctx.cr6.eq) goto loc_82EAAC2C;
	// mulli r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 * 12;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
loc_82EAAC2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAAC34"))) PPC_WEAK_FUNC(sub_82EAAC34);
PPC_FUNC_IMPL(__imp__sub_82EAAC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAAC38"))) PPC_WEAK_FUNC(sub_82EAAC38);
PPC_FUNC_IMPL(__imp__sub_82EAAC38) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAAC4C"))) PPC_WEAK_FUNC(sub_82EAAC4C);
PPC_FUNC_IMPL(__imp__sub_82EAAC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAAC50"))) PPC_WEAK_FUNC(sub_82EAAC50);
PPC_FUNC_IMPL(__imp__sub_82EAAC50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAAC58"))) PPC_WEAK_FUNC(sub_82EAAC58);
PPC_FUNC_IMPL(__imp__sub_82EAAC58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAAC60"))) PPC_WEAK_FUNC(sub_82EAAC60);
PPC_FUNC_IMPL(__imp__sub_82EAAC60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eaac70
	if (ctx.cr6.lt) goto loc_82EAAC70;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82EAAC70:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAAC7C"))) PPC_WEAK_FUNC(sub_82EAAC7C);
PPC_FUNC_IMPL(__imp__sub_82EAAC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAAC80"))) PPC_WEAK_FUNC(sub_82EAAC80);
PPC_FUNC_IMPL(__imp__sub_82EAAC80) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eaacb8
	if (ctx.cr6.eq) goto loc_82EAACB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAACB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EAACB8:
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

__attribute__((alias("__imp__sub_82EAACCC"))) PPC_WEAK_FUNC(sub_82EAACCC);
PPC_FUNC_IMPL(__imp__sub_82EAACCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAACD0"))) PPC_WEAK_FUNC(sub_82EAACD0);
PPC_FUNC_IMPL(__imp__sub_82EAACD0) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eaad08
	if (ctx.cr6.eq) goto loc_82EAAD08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAAD00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EAAD08:
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

__attribute__((alias("__imp__sub_82EAAD1C"))) PPC_WEAK_FUNC(sub_82EAAD1C);
PPC_FUNC_IMPL(__imp__sub_82EAAD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAAD20"))) PPC_WEAK_FUNC(sub_82EAAD20);
PPC_FUNC_IMPL(__imp__sub_82EAAD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EAAD28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bne cr6,0x82eaad4c
	if (!ctx.cr6.eq) goto loc_82EAAD4C;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,87
	ctx.r29.u64 = ctx.r29.u64 | 87;
	// b 0x82eaad80
	goto loc_82EAAD80;
loc_82EAAD4C:
	// addi r31,r4,-1
	ctx.r31.s64 = ctx.r4.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cb2578
	ctx.lr = 0x82EAAD5C;
	sub_82CB2578(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eaad74
	if (ctx.cr0.lt) goto loc_82EAAD74;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82eaad74
	if (ctx.cr6.gt) goto loc_82EAAD74;
	// bne cr6,0x82eaad80
	if (!ctx.cr6.eq) goto loc_82EAAD80;
	// b 0x82eaad7c
	goto loc_82EAAD7C;
loc_82EAAD74:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,122
	ctx.r29.u64 = ctx.r29.u64 | 122;
loc_82EAAD7C:
	// stbx r28,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u8);
loc_82EAAD80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAAD8C"))) PPC_WEAK_FUNC(sub_82EAAD8C);
PPC_FUNC_IMPL(__imp__sub_82EAAD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAAD90"))) PPC_WEAK_FUNC(sub_82EAAD90);
PPC_FUNC_IMPL(__imp__sub_82EAAD90) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAAD98"))) PPC_WEAK_FUNC(sub_82EAAD98);
PPC_FUNC_IMPL(__imp__sub_82EAAD98) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAADA0"))) PPC_WEAK_FUNC(sub_82EAADA0);
PPC_FUNC_IMPL(__imp__sub_82EAADA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r11,r11,-4128
	ctx.r11.s64 = ctx.r11.s64 + -4128;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAADC0"))) PPC_WEAK_FUNC(sub_82EAADC0);
PPC_FUNC_IMPL(__imp__sub_82EAADC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,21574
	ctx.r4.s64 = ctx.r10.s64 + 21574;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82ee1748
	sub_82EE1748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAADE4"))) PPC_WEAK_FUNC(sub_82EAADE4);
PPC_FUNC_IMPL(__imp__sub_82EAADE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAADE8"))) PPC_WEAK_FUNC(sub_82EAADE8);
PPC_FUNC_IMPL(__imp__sub_82EAADE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAADF0"))) PPC_WEAK_FUNC(sub_82EAADF0);
PPC_FUNC_IMPL(__imp__sub_82EAADF0) {
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
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-4188
	ctx.r11.s64 = ctx.r11.s64 + -4188;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82eaae1c
	if (ctx.cr0.eq) goto loc_82EAAE1C;
	// bl 0x822990f0
	ctx.lr = 0x82EAAE1C;
	sub_822990F0(ctx, base);
loc_82EAAE1C:
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

__attribute__((alias("__imp__sub_82EAAE34"))) PPC_WEAK_FUNC(sub_82EAAE34);
PPC_FUNC_IMPL(__imp__sub_82EAAE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAAE38"))) PPC_WEAK_FUNC(sub_82EAAE38);
PPC_FUNC_IMPL(__imp__sub_82EAAE38) {
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
	// bl 0x82ee7e88
	ctx.lr = 0x82EAAE58;
	sub_82EE7E88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaae6c
	if (ctx.cr0.eq) goto loc_82EAAE6C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EAAE6C;
	sub_822996C0(ctx, base);
loc_82EAAE6C:
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

__attribute__((alias("__imp__sub_82EAAE88"))) PPC_WEAK_FUNC(sub_82EAAE88);
PPC_FUNC_IMPL(__imp__sub_82EAAE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EAAE90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eaaeac
	if (ctx.cr6.eq) goto loc_82EAAEAC;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82EAAEAC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82eaaec0
	if (!ctx.cr6.eq) goto loc_82EAAEC0;
loc_82EAAEB4:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82eaaf68
	goto loc_82EAAF68;
loc_82EAAEC0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eaaeb4
	if (ctx.cr6.eq) goto loc_82EAAEB4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,4138
	ctx.r10.s64 = 271187968;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eaaefc
	if (ctx.cr6.eq) goto loc_82EAAEFC;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eaaefc
	if (ctx.cr6.eq) goto loc_82EAAEFC;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eaaf60
	if (!ctx.cr6.eq) goto loc_82EAAF60;
loc_82EAAEFC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82299698
	ctx.lr = 0x82EAAF08;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eaaf18
	if (ctx.cr0.eq) goto loc_82EAAF18;
	// bl 0x82ee8ca0
	ctx.lr = 0x82EAAF14;
	sub_82EE8CA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EAAF18:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82eaaf2c
	if (!ctx.cr6.eq) goto loc_82EAAF2C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eaaf68
	goto loc_82EAAF68;
loc_82EAAF2C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee91d8
	ctx.lr = 0x82EAAF3C;
	sub_82EE91D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82eaaf60
	if (!ctx.cr0.lt) goto loc_82EAAF60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee7e88
	ctx.lr = 0x82EAAF4C;
	sub_82EE7E88(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EAAF58;
	sub_822996C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82eaaf68
	goto loc_82EAAF68;
loc_82EAAF60:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82EAAF68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAAF70"))) PPC_WEAK_FUNC(sub_82EAAF70);
PPC_FUNC_IMPL(__imp__sub_82EAAF70) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eaae88
	sub_82EAAE88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAAF74"))) PPC_WEAK_FUNC(sub_82EAAF74);
PPC_FUNC_IMPL(__imp__sub_82EAAF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAAF78"))) PPC_WEAK_FUNC(sub_82EAAF78);
PPC_FUNC_IMPL(__imp__sub_82EAAF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EAAF80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82299698
	ctx.lr = 0x82EAAFA4;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eaafb4
	if (ctx.cr0.eq) goto loc_82EAAFB4;
	// bl 0x82ee8ca0
	ctx.lr = 0x82EAAFB0;
	sub_82EE8CA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EAAFB4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82eaafc8
	if (!ctx.cr6.eq) goto loc_82EAAFC8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eab008
	goto loc_82EAB008;
loc_82EAAFC8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee8cd0
	ctx.lr = 0x82EAAFDC;
	sub_82EE8CD0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82eab000
	if (!ctx.cr0.lt) goto loc_82EAB000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee7e88
	ctx.lr = 0x82EAAFEC;
	sub_82EE7E88(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EAAFF8;
	sub_822996C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82eab008
	goto loc_82EAB008;
loc_82EAB000:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAB008:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAB010"))) PPC_WEAK_FUNC(sub_82EAB010);
PPC_FUNC_IMPL(__imp__sub_82EAB010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EAB018;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eab03c
	if (!ctx.cr6.gt) goto loc_82EAB03C;
loc_82EAB030:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eab0b4
	goto loc_82EAB0B4;
loc_82EAB03C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82eab0b0
	if (!ctx.cr6.lt) goto loc_82EAB0B0;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82eab05c
	if (ctx.cr6.gt) goto loc_82EAB05C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EAB05C:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82eab06c
	if (!ctx.cr6.lt) goto loc_82EAB06C;
	// li r30,16
	ctx.r30.s64 = 16;
	// b 0x82eab078
	goto loc_82EAB078;
loc_82EAB06C:
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82eab078
	if (!ctx.cr6.gt) goto loc_82EAB078;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82EAB078:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82299698
	ctx.lr = 0x82EAB084;
	sub_82299698(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82eab030
	if (ctx.cr0.eq) goto loc_82EAB030;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82cb1160
	ctx.lr = 0x82EAB09C;
	sub_82CB1160(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822996c0
	ctx.lr = 0x82EAB0A8;
	sub_822996C0(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_82EAB0B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAB0B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAB0BC"))) PPC_WEAK_FUNC(sub_82EAB0BC);
PPC_FUNC_IMPL(__imp__sub_82EAB0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAB0C0"))) PPC_WEAK_FUNC(sub_82EAB0C0);
PPC_FUNC_IMPL(__imp__sub_82EAB0C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAB0CC"))) PPC_WEAK_FUNC(sub_82EAB0CC);
PPC_FUNC_IMPL(__imp__sub_82EAB0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAB0D0"))) PPC_WEAK_FUNC(sub_82EAB0D0);
PPC_FUNC_IMPL(__imp__sub_82EAB0D0) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82eab010
	ctx.lr = 0x82EAB0F8;
	sub_82EAB010(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eab118
	if (ctx.cr0.lt) goto loc_82EAB118;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stbx r30,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82EAB118:
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

__attribute__((alias("__imp__sub_82EAB130"))) PPC_WEAK_FUNC(sub_82EAB130);
PPC_FUNC_IMPL(__imp__sub_82EAB130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EAB138;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82eab164
	if (!ctx.cr6.lt) goto loc_82EAB164;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eab19c
	goto loc_82EAB19C;
loc_82EAB164:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eab010
	ctx.lr = 0x82EAB16C;
	sub_82EAB010(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82eab198
	if (ctx.cr0.lt) goto loc_82EAB198;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EAB18C;
	sub_82CB1160(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82EAB198:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82EAB19C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAB1A4"))) PPC_WEAK_FUNC(sub_82EAB1A4);
PPC_FUNC_IMPL(__imp__sub_82EAB1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAB1A8"))) PPC_WEAK_FUNC(sub_82EAB1A8);
PPC_FUNC_IMPL(__imp__sub_82EAB1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82EAB1B0;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r22,r27,24
	ctx.r22.s64 = ctx.r27.s64 + 24;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// bl 0x82ee9700
	ctx.lr = 0x82EAB1E4;
	sub_82EE9700(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eab1f8
	if (ctx.cr0.eq) goto loc_82EAB1F8;
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2905
	ctx.r31.u64 = ctx.r31.u64 | 2905;
	// b 0x82eab550
	goto loc_82EAB550;
loc_82EAB1F8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82edf678
	ctx.lr = 0x82EAB204;
	sub_82EDF678(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eab550
	if (ctx.cr0.lt) goto loc_82EAB550;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// bl 0x82ee2358
	ctx.lr = 0x82EAB224;
	sub_82EE2358(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eab550
	if (ctx.cr0.lt) goto loc_82EAB550;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r24,r11,-4116
	ctx.r24.s64 = ctx.r11.s64 + -4116;
	// b 0x82eab23c
	goto loc_82EAB23C;
loc_82EAB238:
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82EAB23C:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82eab4f0
	if (ctx.cr6.eq) goto loc_82EAB4F0;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82eab2c4
	if (ctx.cr6.eq) goto loc_82EAB2C4;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bne cr6,0x82eab2dc
	if (!ctx.cr6.eq) goto loc_82EAB2DC;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r8,r4,3
	ctx.r8.s64 = ctx.r4.s64 + 3;
loc_82EAB26C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eab28c
	if (!ctx.cr0.eq) goto loc_82EAB28C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eab26c
	if (!ctx.cr6.eq) goto loc_82EAB26C;
loc_82EAB28C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eab2dc
	if (!ctx.cr0.eq) goto loc_82EAB2DC;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
loc_82EAB2A0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eab130
	ctx.lr = 0x82EAB2A8;
	sub_82EAB130(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eab550
	if (ctx.cr0.lt) goto loc_82EAB550;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_82EAB2B4:
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82eab0d0
	ctx.lr = 0x82EAB2BC;
	sub_82EAB0D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eab550
	if (ctx.cr0.lt) goto loc_82EAB550;
loc_82EAB2C4:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ee2358
	ctx.lr = 0x82EAB2D0;
	sub_82EE2358(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82eab238
	if (!ctx.cr0.lt) goto loc_82EAB238;
	// b 0x82eab550
	goto loc_82EAB550;
loc_82EAB2DC:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bne cr6,0x82eab2fc
	if (!ctx.cr6.eq) goto loc_82EAB2FC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82eab2a0
	if (ctx.cr6.eq) goto loc_82EAB2A0;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x82eab2a0
	goto loc_82EAB2A0;
loc_82EAB2FC:
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// bne cr6,0x82eab31c
	if (!ctx.cr6.eq) goto loc_82EAB31C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82eab2a0
	if (ctx.cr6.eq) goto loc_82EAB2A0;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x82eab2a0
	if (!ctx.cr0.eq) goto loc_82EAB2A0;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// b 0x82eab2a0
	goto loc_82EAB2A0;
loc_82EAB31C:
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// bne cr6,0x82eab380
	if (!ctx.cr6.eq) goto loc_82EAB380;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eab130
	ctx.lr = 0x82EAB32C;
	sub_82EAB130(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eab550
	if (ctx.cr0.lt) goto loc_82EAB550;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bne cr6,0x82eab2b4
	if (!ctx.cr6.eq) goto loc_82EAB2B4;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82eab0d0
	ctx.lr = 0x82EAB348;
	sub_82EAB0D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eab550
	if (ctx.cr0.lt) goto loc_82EAB550;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eab2c4
	if (ctx.cr6.eq) goto loc_82EAB2C4;
loc_82EAB35C:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eab0d0
	ctx.lr = 0x82EAB368;
	sub_82EAB0D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eab550
	if (ctx.cr0.lt) goto loc_82EAB550;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eab35c
	if (ctx.cr6.lt) goto loc_82EAB35C;
	// b 0x82eab2c4
	goto loc_82EAB2C4;
loc_82EAB380:
	// cmpwi cr6,r11,123
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 123, ctx.xer);
	// bne cr6,0x82eab428
	if (!ctx.cr6.eq) goto loc_82EAB428;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eab0d0
	ctx.lr = 0x82EAB394;
	sub_82EAB0D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eab550
	if (ctx.cr0.lt) goto loc_82EAB550;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eab3c8
	if (ctx.cr6.eq) goto loc_82EAB3C8;
loc_82EAB3A8:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eab0d0
	ctx.lr = 0x82EAB3B4;
	sub_82EAB0D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eab550
	if (ctx.cr0.lt) goto loc_82EAB550;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eab3a8
	if (ctx.cr6.lt) goto loc_82EAB3A8;
loc_82EAB3C8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82eab130
	ctx.lr = 0x82EAB3D8;
	sub_82EAB130(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eab550
	if (ctx.cr0.lt) goto loc_82EAB550;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82eab0d0
	ctx.lr = 0x82EAB3F0;
	sub_82EAB0D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eab550
	if (ctx.cr0.lt) goto loc_82EAB550;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eab2c4
	if (ctx.cr6.eq) goto loc_82EAB2C4;
loc_82EAB404:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eab0d0
	ctx.lr = 0x82EAB410;
	sub_82EAB0D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eab550
	if (ctx.cr0.lt) goto loc_82EAB550;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eab404
	if (ctx.cr6.lt) goto loc_82EAB404;
	// b 0x82eab2c4
	goto loc_82EAB2C4;
loc_82EAB428:
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// bne cr6,0x82eab2a0
	if (!ctx.cr6.eq) goto loc_82EAB2A0;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x82eab498
	if (ctx.cr6.lt) goto loc_82EAB498;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// ble cr6,0x82eab498
	if (!ctx.cr6.gt) goto loc_82EAB498;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x82eab494
	if (!ctx.cr6.eq) goto loc_82EAB494;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x82eab494
	if (!ctx.cr6.eq) goto loc_82EAB494;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x82eab494
	if (!ctx.cr6.eq) goto loc_82EAB494;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82eab494
	if (!ctx.cr6.eq) goto loc_82EAB494;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// bgt cr6,0x82eab48c
	if (ctx.cr6.gt) goto loc_82EAB48C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EAB48C:
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82EAB494:
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_82EAB498:
	// li r4,125
	ctx.r4.s64 = 125;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eab0d0
	ctx.lr = 0x82EAB4A4;
	sub_82EAB0D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eab550
	if (ctx.cr0.lt) goto loc_82EAB550;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eab0d0
	ctx.lr = 0x82EAB4B8;
	sub_82EAB0D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eab550
	if (ctx.cr0.lt) goto loc_82EAB550;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eab2c4
	if (ctx.cr6.eq) goto loc_82EAB2C4;
loc_82EAB4CC:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eab0d0
	ctx.lr = 0x82EAB4D8;
	sub_82EAB0D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eab550
	if (ctx.cr0.lt) goto loc_82EAB550;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eab4cc
	if (ctx.cr6.lt) goto loc_82EAB4CC;
	// b 0x82eab2c4
	goto loc_82EAB2C4;
loc_82EAB4F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eab0d0
	ctx.lr = 0x82EAB4FC;
	sub_82EAB0D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eab550
	if (ctx.cr0.lt) goto loc_82EAB550;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ee2858
	ctx.lr = 0x82EAB50C;
	sub_82EE2858(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eab550
	if (ctx.cr0.lt) goto loc_82EAB550;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ee3af8
	ctx.lr = 0x82EAB524;
	sub_82EE3AF8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAB538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82cb1160
	ctx.lr = 0x82EAB544;
	sub_82CB1160(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_82EAB550:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eab56c
	if (ctx.cr6.eq) goto loc_82EAB56C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAB56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAB56C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82eab580
	if (ctx.cr6.eq) goto loc_82EAB580;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ee9648
	ctx.lr = 0x82EAB580;
	sub_82EE9648(ctx, base);
loc_82EAB580:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822996c0
	ctx.lr = 0x82EAB58C;
	sub_822996C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAB598"))) PPC_WEAK_FUNC(sub_82EAB598);
PPC_FUNC_IMPL(__imp__sub_82EAB598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82EAB5A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82edf500
	ctx.lr = 0x82EAB5C0;
	sub_82EDF500(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82eab5e0
	if (!ctx.cr6.eq) goto loc_82EAB5E0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82edf5b8
	ctx.lr = 0x82EAB5D0;
	sub_82EDF5B8(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82EAB5D8:
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82EAB5E0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82eab600
	if (!ctx.cr6.eq) goto loc_82EAB600;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
loc_82EAB5F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82edf5b8
	ctx.lr = 0x82EAB5F8;
	sub_82EDF5B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82eab5d8
	goto loc_82EAB5D8;
loc_82EAB600:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee1648
	ctx.lr = 0x82EAB618;
	sub_82EE1648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eab630
	if (ctx.cr0.lt) goto loc_82EAB630;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eab1a8
	ctx.lr = 0x82EAB630;
	sub_82EAB1A8(ctx, base);
loc_82EAB630:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82eab5f0
	goto loc_82EAB5F0;
}

__attribute__((alias("__imp__sub_82EAB638"))) PPC_WEAK_FUNC(sub_82EAB638);
PPC_FUNC_IMPL(__imp__sub_82EAB638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82EAB640;
	__savegprlr_27(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82edf500
	ctx.lr = 0x82EAB660;
	sub_82EDF500(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82eab680
	if (!ctx.cr6.eq) goto loc_82EAB680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82edf5b8
	ctx.lr = 0x82EAB670;
	sub_82EDF5B8(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82EAB678:
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82EAB680:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82eab6a0
	if (!ctx.cr6.eq) goto loc_82EAB6A0;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
loc_82EAB690:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82edf5b8
	ctx.lr = 0x82EAB698;
	sub_82EDF5B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82eab678
	goto loc_82EAB678;
loc_82EAB6A0:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee1648
	ctx.lr = 0x82EAB6B8;
	sub_82EE1648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eab6d0
	if (ctx.cr0.lt) goto loc_82EAB6D0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eab1a8
	ctx.lr = 0x82EAB6D0;
	sub_82EAB1A8(ctx, base);
loc_82EAB6D0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82eab690
	goto loc_82EAB690;
}

__attribute__((alias("__imp__sub_82EAB6D8"))) PPC_WEAK_FUNC(sub_82EAB6D8);
PPC_FUNC_IMPL(__imp__sub_82EAB6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EAB6E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82edf500
	ctx.lr = 0x82EAB704;
	sub_82EDF500(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82eab724
	if (!ctx.cr6.eq) goto loc_82EAB724;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82edf5b8
	ctx.lr = 0x82EAB714;
	sub_82EDF5B8(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82EAB71C:
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82EAB724:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82eab744
	if (!ctx.cr6.eq) goto loc_82EAB744;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
loc_82EAB734:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82edf5b8
	ctx.lr = 0x82EAB73C;
	sub_82EDF5B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82eab71c
	goto loc_82EAB71C;
loc_82EAB744:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r4,r11,21574
	ctx.r4.s64 = ctx.r11.s64 + 21574;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee1748
	ctx.lr = 0x82EAB764;
	sub_82EE1748(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eab77c
	if (ctx.cr0.lt) goto loc_82EAB77C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eab1a8
	ctx.lr = 0x82EAB77C;
	sub_82EAB1A8(ctx, base);
loc_82EAB77C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82eab734
	goto loc_82EAB734;
}

__attribute__((alias("__imp__sub_82EAB784"))) PPC_WEAK_FUNC(sub_82EAB784);
PPC_FUNC_IMPL(__imp__sub_82EAB784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAB788"))) PPC_WEAK_FUNC(sub_82EAB788);
PPC_FUNC_IMPL(__imp__sub_82EAB788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eab7c4
	if (!ctx.cr6.gt) goto loc_82EAB7C4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82eab7d8
	goto loc_82EAB7D8;
loc_82EAB7C4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eaad20
	ctx.lr = 0x82EAB7D8;
	sub_82EAAD20(ctx, base);
loc_82EAB7D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAB7E8"))) PPC_WEAK_FUNC(sub_82EAB7E8);
PPC_FUNC_IMPL(__imp__sub_82EAB7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82EAB7F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-1056(r1)
	ea = -1056 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82edf500
	ctx.lr = 0x82EAB818;
	sub_82EDF500(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82eab824
	if (ctx.cr6.eq) goto loc_82EAB824;
	// stw r24,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r24.u32);
loc_82EAB824:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eab844
	if (ctx.cr6.eq) goto loc_82EAB844;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eab844
	if (ctx.cr6.eq) goto loc_82EAB844;
	// lis r30,-30602
	ctx.r30.s64 = -2005532672;
	// ori r30,r30,2156
	ctx.r30.u64 = ctx.r30.u64 | 2156;
	// b 0x82eabc10
	goto loc_82EABC10;
loc_82EAB844:
	// lis r12,-27
	ctx.r12.s64 = -1769472;
	// ori r12,r12,65532
	ctx.r12.u64 = ctx.r12.u64 | 65532;
	// and. r11,r28,r12
	ctx.r11.u64 = ctx.r28.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eab860
	if (ctx.cr0.eq) goto loc_82EAB860;
	// lis r30,-30602
	ctx.r30.s64 = -2005532672;
	// ori r30,r30,2156
	ctx.r30.u64 = ctx.r30.u64 | 2156;
	// b 0x82eabbf4
	goto loc_82EABBF4;
loc_82EAB860:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eabaf4
	if (ctx.cr6.eq) goto loc_82EABAF4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eabaf4
	if (ctx.cr0.eq) goto loc_82EABAF4;
	// bl 0x831fba78
	ctx.lr = 0x82EAB87C;
	sub_831FBA78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r31,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r31.u32);
	// bne 0x82eab894
	if (!ctx.cr0.eq) goto loc_82EAB894;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82eabbf4
	goto loc_82EABBF4;
loc_82EAB894:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-3968
	ctx.r4.s64 = ctx.r11.s64 + -3968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f91f0
	ctx.lr = 0x82EAB8A8;
	sub_831F91F0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAB8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eab8fc
	if (ctx.cr0.eq) goto loc_82EAB8FC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAB8D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82eab8f0
	goto loc_82EAB8F0;
loc_82EAB8E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831fc528
	ctx.lr = 0x82EAB8EC;
	sub_831FC528(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
loc_82EAB8F0:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eab8e0
	if (!ctx.cr6.eq) goto loc_82EAB8E0;
loc_82EAB8FC:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r30,r11,-12384
	ctx.r30.s64 = ctx.r11.s64 + -12384;
	// clrlwi. r9,r28,31
	ctx.r9.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r29,r10,-12392
	ctx.r29.s64 = ctx.r10.s64 + -12392;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne 0x82eab91c
	if (!ctx.cr0.eq) goto loc_82EAB91C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAB91C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3972
	ctx.r4.s64 = ctx.r11.s64 + -3972;
	// bl 0x831fbac0
	ctx.lr = 0x82EAB92C;
	sub_831FBAC0(ctx, base);
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne 0x82eab93c
	if (!ctx.cr0.eq) goto loc_82EAB93C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAB93C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3976
	ctx.r4.s64 = ctx.r11.s64 + -3976;
	// bl 0x831fbac0
	ctx.lr = 0x82EAB94C;
	sub_831FBAC0(ctx, base);
	// rlwinm. r11,r28,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne 0x82eab95c
	if (!ctx.cr0.eq) goto loc_82EAB95C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAB95C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3992
	ctx.r4.s64 = ctx.r11.s64 + -3992;
	// bl 0x831fbac0
	ctx.lr = 0x82EAB96C;
	sub_831FBAC0(ctx, base);
	// rlwinm. r11,r28,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne 0x82eab97c
	if (!ctx.cr0.eq) goto loc_82EAB97C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAB97C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4008
	ctx.r4.s64 = ctx.r11.s64 + -4008;
	// bl 0x831fbac0
	ctx.lr = 0x82EAB98C;
	sub_831FBAC0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eab9a0
	if (!ctx.cr0.eq) goto loc_82EAB9A0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAB9A0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4016
	ctx.r4.s64 = ctx.r11.s64 + -4016;
	// bl 0x831fbac0
	ctx.lr = 0x82EAB9B0;
	sub_831FBAC0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eab9c4
	if (!ctx.cr0.eq) goto loc_82EAB9C4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAB9C4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4024
	ctx.r4.s64 = ctx.r11.s64 + -4024;
	// bl 0x831fbac0
	ctx.lr = 0x82EAB9D4;
	sub_831FBAC0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,16(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r30,r11,24704
	ctx.r30.s64 = ctx.r11.s64 + 24704;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82eab788
	ctx.lr = 0x82EAB9F0;
	sub_82EAB788(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4040
	ctx.r4.s64 = ctx.r11.s64 + -4040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fbac0
	ctx.lr = 0x82EABA04;
	sub_831FBAC0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,32(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eab788
	ctx.lr = 0x82EABA18;
	sub_82EAB788(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4052
	ctx.r4.s64 = ctx.r11.s64 + -4052;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fbac0
	ctx.lr = 0x82EABA2C;
	sub_831FBAC0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,36(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eab788
	ctx.lr = 0x82EABA40;
	sub_82EAB788(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4064
	ctx.r4.s64 = ctx.r11.s64 + -4064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fbac0
	ctx.lr = 0x82EABA54;
	sub_831FBAC0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,40(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eab788
	ctx.lr = 0x82EABA68;
	sub_82EAB788(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4076
	ctx.r4.s64 = ctx.r11.s64 + -4076;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fbac0
	ctx.lr = 0x82EABA7C;
	sub_831FBAC0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,44(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eab788
	ctx.lr = 0x82EABA90;
	sub_82EAB788(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4088
	ctx.r4.s64 = ctx.r11.s64 + -4088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fbac0
	ctx.lr = 0x82EABAA4;
	sub_831FBAC0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,52(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eab788
	ctx.lr = 0x82EABAB8;
	sub_82EAB788(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4100
	ctx.r4.s64 = ctx.r11.s64 + -4100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fbac0
	ctx.lr = 0x82EABACC;
	sub_831FBAC0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,48(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eab788
	ctx.lr = 0x82EABAE0;
	sub_82EAB788(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4112
	ctx.r4.s64 = ctx.r11.s64 + -4112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fbac0
	ctx.lr = 0x82EABAF4;
	sub_831FBAC0(ctx, base);
loc_82EABAF4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// stw r27,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABB10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eabbf4
	if (ctx.cr0.lt) goto loc_82EABBF4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-4164
	ctx.r4.s64 = ctx.r11.s64 + -4164;
	// bl 0x82ee06a0
	ctx.lr = 0x82EABB28;
	sub_82EE06A0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eabbf4
	if (ctx.cr0.lt) goto loc_82EABBF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eec048
	ctx.lr = 0x82EABB3C;
	sub_82EEC048(ctx, base);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ef1338
	ctx.lr = 0x82EABB58;
	sub_82EF1338(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bge 0x82eabb6c
	if (!ctx.cr0.lt) goto loc_82EABB6C;
	// bl 0x82eeeff8
	ctx.lr = 0x82EABB68;
	sub_82EEEFF8(ctx, base);
	// b 0x82eabbf4
	goto loc_82EABBF4;
loc_82EABB6C:
	// bl 0x82eeeff8
	ctx.lr = 0x82EABB70;
	sub_82EEEFF8(ctx, base);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82ee9700
	ctx.lr = 0x82EABB78;
	sub_82EE9700(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eabb8c
	if (ctx.cr0.eq) goto loc_82EABB8C;
	// lis r30,-30602
	ctx.r30.s64 = -2005532672;
	// ori r30,r30,2905
	ctx.r30.u64 = ctx.r30.u64 | 2905;
	// b 0x82eabbf4
	goto loc_82EABBF4;
loc_82EABB8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eabbe0
	if (ctx.cr6.eq) goto loc_82EABBE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fc6b0
	ctx.lr = 0x82EABB9C;
	sub_831FC6B0(ctx, base);
	// addi r28,r27,12
	ctx.r28.s64 = ctx.r27.s64 + 12;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ee3af8
	ctx.lr = 0x82EABBAC;
	sub_82EE3AF8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eabbe0
	if (ctx.cr0.lt) goto loc_82EABBE0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABBC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fc6b8
	ctx.lr = 0x82EABBDC;
	sub_831FC6B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EABBE0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82eabbf4
	if (ctx.cr6.eq) goto loc_82EABBF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82EABBF4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eabc10
	if (ctx.cr6.eq) goto loc_82EABC10;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eabc10
	if (ctx.cr6.eq) goto loc_82EABC10;
	// bl 0x831f71b8
	ctx.lr = 0x82EABC0C;
	sub_831F71B8(ctx, base);
	// stw r24,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r24.u32);
loc_82EABC10:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82eabc24
	if (ctx.cr6.eq) goto loc_82EABC24;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82ee9648
	ctx.lr = 0x82EABC24;
	sub_82EE9648(ctx, base);
loc_82EABC24:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eabc44
	if (ctx.cr6.eq) goto loc_82EABC44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABC40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
loc_82EABC44:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82edf5b8
	ctx.lr = 0x82EABC4C;
	sub_82EDF5B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EABC58"))) PPC_WEAK_FUNC(sub_82EABC58);
PPC_FUNC_IMPL(__imp__sub_82EABC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82EABC60;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm. r11,r4,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eabc7c
	if (ctx.cr0.eq) goto loc_82EABC7C;
	// bl 0x82eab7e8
	ctx.lr = 0x82EABC78;
	sub_82EAB7E8(ctx, base);
	// b 0x82eabd14
	goto loc_82EABD14;
loc_82EABC7C:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82eab7e8
	ctx.lr = 0x82EABC94;
	sub_82EAB7E8(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82eabcb4
	if (ctx.cr0.lt) goto loc_82EABCB4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eabcb4
	if (ctx.cr6.eq) goto loc_82EABCB4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82eabcb8
	goto loc_82EABCB8;
loc_82EABCB4:
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EABCB8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eabcd4
	if (ctx.cr6.eq) goto loc_82EABCD4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82eabcd8
	goto loc_82EABCD8;
loc_82EABCD4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EABCD8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eabcf4
	if (ctx.cr6.eq) goto loc_82EABCF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABCF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82EABCF4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eabd10
	if (ctx.cr6.eq) goto loc_82EABD10;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EABD10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EABD10:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82EABD14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EABD1C"))) PPC_WEAK_FUNC(sub_82EABD1C);
PPC_FUNC_IMPL(__imp__sub_82EABD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EABD20"))) PPC_WEAK_FUNC(sub_82EABD20);
PPC_FUNC_IMPL(__imp__sub_82EABD20) {
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
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// addi r4,r7,-4176
	ctx.r4.s64 = ctx.r7.s64 + -4176;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eabc58
	ctx.lr = 0x82EABD6C;
	sub_82EABC58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EABD7C"))) PPC_WEAK_FUNC(sub_82EABD7C);
PPC_FUNC_IMPL(__imp__sub_82EABD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EABD80"))) PPC_WEAK_FUNC(sub_82EABD80);
PPC_FUNC_IMPL(__imp__sub_82EABD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EABD88;
	__savegprlr_26(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82ea9aa8
	ctx.lr = 0x82EABDB0;
	sub_82EA9AA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r11,r11,-4176
	ctx.r11.s64 = ctx.r11.s64 + -4176;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eabc58
	ctx.lr = 0x82EABDE8;
	sub_82EABC58(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EABDF0"))) PPC_WEAK_FUNC(sub_82EABDF0);
PPC_FUNC_IMPL(__imp__sub_82EABDF0) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82eabd20
	sub_82EABD20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EABDF8"))) PPC_WEAK_FUNC(sub_82EABDF8);
PPC_FUNC_IMPL(__imp__sub_82EABDF8) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82eabd80
	sub_82EABD80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EABE00"))) PPC_WEAK_FUNC(sub_82EABE00);
PPC_FUNC_IMPL(__imp__sub_82EABE00) {
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
	// lis r31,-32254
	ctx.r31.s64 = -2113798144;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r10,r31,-4128
	ctx.r10.s64 = ctx.r31.s64 + -4128;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eabc58
	ctx.lr = 0x82EABE48;
	sub_82EABC58(ctx, base);
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

__attribute__((alias("__imp__sub_82EABE5C"))) PPC_WEAK_FUNC(sub_82EABE5C);
PPC_FUNC_IMPL(__imp__sub_82EABE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EABE60"))) PPC_WEAK_FUNC(sub_82EABE60);
PPC_FUNC_IMPL(__imp__sub_82EABE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82EABE68;
	__savegprlr_25(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
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
	// bl 0x82ea9aa8
	ctx.lr = 0x82EABE94;
	sub_82EA9AA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r11,r11,-4128
	ctx.r11.s64 = ctx.r11.s64 + -4128;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82eabc58
	ctx.lr = 0x82EABEC8;
	sub_82EABC58(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EABED0"))) PPC_WEAK_FUNC(sub_82EABED0);
PPC_FUNC_IMPL(__imp__sub_82EABED0) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r10,-4128
	ctx.r10.s64 = ctx.r10.s64 + -4128;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eabc58
	ctx.lr = 0x82EABF14;
	sub_82EABC58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EABF24"))) PPC_WEAK_FUNC(sub_82EABF24);
PPC_FUNC_IMPL(__imp__sub_82EABF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EABF28"))) PPC_WEAK_FUNC(sub_82EABF28);
PPC_FUNC_IMPL(__imp__sub_82EABF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82EABF30;
	__savegprlr_19(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// bl 0x82edf500
	ctx.lr = 0x82EABF68;
	sub_82EDF500(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82eabf74
	if (ctx.cr6.eq) goto loc_82EABF74;
	// stw r21,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r21.u32);
loc_82EABF74:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82eabf80
	if (ctx.cr6.eq) goto loc_82EABF80;
	// stw r21,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r21.u32);
loc_82EABF80:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eabfa0
	if (ctx.cr6.eq) goto loc_82EABFA0;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eabfa0
	if (ctx.cr6.eq) goto loc_82EABFA0;
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
	// b 0x82eac56c
	goto loc_82EAC56C;
loc_82EABFA0:
	// lis r12,-863
	ctx.r12.s64 = -56557568;
	// ori r12,r12,57792
	ctx.r12.u64 = ctx.r12.u64 | 57792;
	// and. r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eabfbc
	if (ctx.cr0.eq) goto loc_82EABFBC;
loc_82EABFB0:
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
	// b 0x82eac550
	goto loc_82EAC550;
loc_82EABFBC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eabfb0
	if (ctx.cr6.eq) goto loc_82EABFB0;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eac404
	if (ctx.cr6.eq) goto loc_82EAC404;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eac404
	if (ctx.cr0.eq) goto loc_82EAC404;
	// bl 0x831fba78
	ctx.lr = 0x82EABFE4;
	sub_831FBA78(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// bne 0x82eabffc
	if (!ctx.cr0.eq) goto loc_82EABFFC;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82eac550
	goto loc_82EAC550;
loc_82EABFFC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-3836
	ctx.r4.s64 = ctx.r11.s64 + -3836;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831f91f0
	ctx.lr = 0x82EAC010;
	sub_831F91F0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eac064
	if (ctx.cr0.eq) goto loc_82EAC064;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82eac058
	goto loc_82EAC058;
loc_82EAC048:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831fc528
	ctx.lr = 0x82EAC054;
	sub_831FC528(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_82EAC058:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eac048
	if (!ctx.cr6.eq) goto loc_82EAC048;
loc_82EAC064:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r31,r11,-12384
	ctx.r31.s64 = ctx.r11.s64 + -12384;
	// clrlwi. r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r29,r10,-12392
	ctx.r29.s64 = ctx.r10.s64 + -12392;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne 0x82eac084
	if (!ctx.cr0.eq) goto loc_82EAC084;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC084:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-3972
	ctx.r4.s64 = ctx.r11.s64 + -3972;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC094;
	sub_831FBAC0(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne 0x82eac0a4
	if (!ctx.cr0.eq) goto loc_82EAC0A4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC0A4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-3976
	ctx.r4.s64 = ctx.r11.s64 + -3976;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC0B4;
	sub_831FBAC0(ctx, base);
	// rlwinm. r11,r30,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne 0x82eac0c4
	if (!ctx.cr0.eq) goto loc_82EAC0C4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC0C4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-3992
	ctx.r4.s64 = ctx.r11.s64 + -3992;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC0D4;
	sub_831FBAC0(ctx, base);
	// rlwinm. r11,r30,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne 0x82eac0e4
	if (!ctx.cr0.eq) goto loc_82EAC0E4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC0E4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-4008
	ctx.r4.s64 = ctx.r11.s64 + -4008;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC0F4;
	sub_831FBAC0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eac108
	if (!ctx.cr0.eq) goto loc_82EAC108;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC108:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-4016
	ctx.r4.s64 = ctx.r11.s64 + -4016;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC118;
	sub_831FBAC0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eac12c
	if (!ctx.cr0.eq) goto loc_82EAC12C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC12C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-4024
	ctx.r4.s64 = ctx.r11.s64 + -4024;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC13C;
	sub_831FBAC0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,16(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r19,r11,24704
	ctx.r19.s64 = ctx.r11.s64 + 24704;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// bl 0x82eab788
	ctx.lr = 0x82EAC158;
	sub_82EAB788(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-4040
	ctx.r4.s64 = ctx.r11.s64 + -4040;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC16C;
	sub_831FBAC0(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,32(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eab788
	ctx.lr = 0x82EAC180;
	sub_82EAB788(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-4052
	ctx.r4.s64 = ctx.r11.s64 + -4052;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC194;
	sub_831FBAC0(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,36(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eab788
	ctx.lr = 0x82EAC1A8;
	sub_82EAB788(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-4064
	ctx.r4.s64 = ctx.r11.s64 + -4064;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC1BC;
	sub_831FBAC0(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,40(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eab788
	ctx.lr = 0x82EAC1D0;
	sub_82EAB788(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-4076
	ctx.r4.s64 = ctx.r11.s64 + -4076;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC1E4;
	sub_831FBAC0(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,44(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eab788
	ctx.lr = 0x82EAC1F8;
	sub_82EAB788(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-4088
	ctx.r4.s64 = ctx.r11.s64 + -4088;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC20C;
	sub_831FBAC0(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,52(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eab788
	ctx.lr = 0x82EAC220;
	sub_82EAB788(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-4100
	ctx.r4.s64 = ctx.r11.s64 + -4100;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC234;
	sub_831FBAC0(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,48(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eab788
	ctx.lr = 0x82EAC248;
	sub_82EAB788(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-4112
	ctx.r4.s64 = ctx.r11.s64 + -4112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC25C;
	sub_831FBAC0(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne 0x82eac26c
	if (!ctx.cr0.eq) goto loc_82EAC26C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC26C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-3840
	ctx.r4.s64 = ctx.r11.s64 + -3840;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC27C;
	sub_831FBAC0(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne 0x82eac28c
	if (!ctx.cr0.eq) goto loc_82EAC28C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC28C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-3848
	ctx.r4.s64 = ctx.r11.s64 + -3848;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC29C;
	sub_831FBAC0(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne 0x82eac2ac
	if (!ctx.cr0.eq) goto loc_82EAC2AC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC2AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-3856
	ctx.r4.s64 = ctx.r11.s64 + -3856;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC2BC;
	sub_831FBAC0(ctx, base);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne 0x82eac2cc
	if (!ctx.cr0.eq) goto loc_82EAC2CC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC2CC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-3864
	ctx.r4.s64 = ctx.r11.s64 + -3864;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC2DC;
	sub_831FBAC0(ctx, base);
	// rlwinm. r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne 0x82eac2ec
	if (!ctx.cr0.eq) goto loc_82EAC2EC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC2EC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-3868
	ctx.r4.s64 = ctx.r11.s64 + -3868;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC2FC;
	sub_831FBAC0(ctx, base);
	// rlwinm. r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne 0x82eac30c
	if (!ctx.cr0.eq) goto loc_82EAC30C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC30C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-3876
	ctx.r4.s64 = ctx.r11.s64 + -3876;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC31C;
	sub_831FBAC0(ctx, base);
	// rlwinm. r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne 0x82eac32c
	if (!ctx.cr0.eq) goto loc_82EAC32C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC32C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-3884
	ctx.r4.s64 = ctx.r11.s64 + -3884;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC33C;
	sub_831FBAC0(ctx, base);
	// rlwinm. r11,r30,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne 0x82eac34c
	if (!ctx.cr0.eq) goto loc_82EAC34C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC34C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-3900
	ctx.r4.s64 = ctx.r11.s64 + -3900;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC35C;
	sub_831FBAC0(ctx, base);
	// rlwinm. r11,r30,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne 0x82eac36c
	if (!ctx.cr0.eq) goto loc_82EAC36C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC36C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-3908
	ctx.r4.s64 = ctx.r11.s64 + -3908;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC37C;
	sub_831FBAC0(ctx, base);
	// rlwinm. r11,r30,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne 0x82eac38c
	if (!ctx.cr0.eq) goto loc_82EAC38C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC38C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-3916
	ctx.r4.s64 = ctx.r11.s64 + -3916;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC39C;
	sub_831FBAC0(ctx, base);
	// rlwinm. r11,r30,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne 0x82eac3ac
	if (!ctx.cr0.eq) goto loc_82EAC3AC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC3AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-3924
	ctx.r4.s64 = ctx.r11.s64 + -3924;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC3BC;
	sub_831FBAC0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eac3d0
	if (!ctx.cr0.eq) goto loc_82EAC3D0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC3D0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-3944
	ctx.r4.s64 = ctx.r11.s64 + -3944;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC3E0;
	sub_831FBAC0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eac3f4
	if (!ctx.cr0.eq) goto loc_82EAC3F4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82EAC3F4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-3956
	ctx.r4.s64 = ctx.r11.s64 + -3956;
	// bl 0x831fbac0
	ctx.lr = 0x82EAC404;
	sub_831FBAC0(ctx, base);
loc_82EAC404:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82ea9e10
	ctx.lr = 0x82EAC410;
	sub_82EA9E10(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// stw r27,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eac550
	if (ctx.cr0.lt) goto loc_82EAC550;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82ea9d68
	ctx.lr = 0x82EAC440;
	sub_82EA9D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// beq 0x82eac458
	if (ctx.cr0.eq) goto loc_82EAC458;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-4148
	ctx.r4.s64 = ctx.r11.s64 + -4148;
	// b 0x82eac460
	goto loc_82EAC460;
loc_82EAC458:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-4164
	ctx.r4.s64 = ctx.r11.s64 + -4164;
loc_82EAC460:
	// bl 0x82ee06a0
	ctx.lr = 0x82EAC464;
	sub_82EE06A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ef1e58
	ctx.lr = 0x82EAC470;
	sub_82EF1E58(ctx, base);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// ori r9,r30,256
	ctx.r9.u64 = ctx.r30.u64 | 256;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f080c8
	ctx.lr = 0x82EAC4A0;
	sub_82F080C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bge 0x82eac4b4
	if (!ctx.cr0.lt) goto loc_82EAC4B4;
	// bl 0x82ef3f78
	ctx.lr = 0x82EAC4B0;
	sub_82EF3F78(ctx, base);
	// b 0x82eac550
	goto loc_82EAC550;
loc_82EAC4B4:
	// bl 0x82ef3f78
	ctx.lr = 0x82EAC4B8;
	sub_82EF3F78(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82ee9700
	ctx.lr = 0x82EAC4C0;
	sub_82EE9700(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eac4d4
	if (ctx.cr0.eq) goto loc_82EAC4D4;
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2905
	ctx.r31.u64 = ctx.r31.u64 | 2905;
	// b 0x82eac550
	goto loc_82EAC550;
loc_82EAC4D4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eac528
	if (ctx.cr6.eq) goto loc_82EAC528;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fc6b0
	ctx.lr = 0x82EAC4E4;
	sub_831FC6B0(ctx, base);
	// addi r29,r27,12
	ctx.r29.s64 = ctx.r27.s64 + 12;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ee3af8
	ctx.lr = 0x82EAC4F4;
	sub_82EE3AF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82eac528
	if (ctx.cr0.lt) goto loc_82EAC528;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fc6b8
	ctx.lr = 0x82EAC524;
	sub_831FC6B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EAC528:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82eac53c
	if (ctx.cr6.eq) goto loc_82EAC53C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_82EAC53C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82eac550
	if (ctx.cr6.eq) goto loc_82EAC550;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_82EAC550:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eac56c
	if (ctx.cr6.eq) goto loc_82EAC56C;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eac56c
	if (ctx.cr6.eq) goto loc_82EAC56C;
	// bl 0x831f71b8
	ctx.lr = 0x82EAC568;
	sub_831F71B8(ctx, base);
	// stw r21,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r21.u32);
loc_82EAC56C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82eac580
	if (ctx.cr6.eq) goto loc_82EAC580;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82ee9648
	ctx.lr = 0x82EAC580;
	sub_82EE9648(ctx, base);
loc_82EAC580:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eac5a0
	if (ctx.cr6.eq) goto loc_82EAC5A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC59C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
loc_82EAC5A0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eac5c0
	if (ctx.cr6.eq) goto loc_82EAC5C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
loc_82EAC5C0:
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82edf5b8
	ctx.lr = 0x82EAC5C8;
	sub_82EDF5B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAC5D4"))) PPC_WEAK_FUNC(sub_82EAC5D4);
PPC_FUNC_IMPL(__imp__sub_82EAC5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAC5D8"))) PPC_WEAK_FUNC(sub_82EAC5D8);
PPC_FUNC_IMPL(__imp__sub_82EAC5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x82EAC5E0;
	__savegprlr_16(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31890
	ctx.r30.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lbz r11,18097(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 18097);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82eac648
	if (!ctx.cr0.eq) goto loc_82EAC648;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-3600
	ctx.r3.s64 = ctx.r11.s64 + -3600;
	// bl 0x82e65b50
	ctx.lr = 0x82EAC624;
	sub_82E65B50(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82eac640
	if (ctx.cr6.eq) goto loc_82EAC640;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r11,18096(r29)
	PPC_STORE_U8(ctx.r29.u32 + 18096, ctx.r11.u8);
	// addi r3,r10,-3688
	ctx.r3.s64 = ctx.r10.s64 + -3688;
	// bl 0x82e67098
	ctx.lr = 0x82EAC640;
	sub_82E67098(ctx, base);
loc_82EAC640:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,18097(r30)
	PPC_STORE_U8(ctx.r30.u32 + 18097, ctx.r11.u8);
loc_82EAC648:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eabf28
	ctx.lr = 0x82EAC66C;
	sub_82EABF28(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// blt 0x82eaca98
	if (ctx.cr0.lt) goto loc_82EACA98;
	// lbz r11,18096(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 18096);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eaca98
	if (ctx.cr0.eq) goto loc_82EACA98;
	// rlwinm. r11,r31,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eaca98
	if (!ctx.cr0.eq) goto loc_82EACA98;
	// rlwinm. r11,r31,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eaca98
	if (!ctx.cr0.eq) goto loc_82EACA98;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82eaca98
	if (ctx.cr6.eq) goto loc_82EACA98;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eaca98
	if (ctx.cr6.eq) goto loc_82EACA98;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// oris r6,r31,16
	ctx.r6.u64 = ctx.r31.u64 | 1048576;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// oris r26,r31,512
	ctx.r26.u64 = ctx.r31.u64 | 33554432;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,118
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 118, ctx.xer);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// bne cr6,0x82eac6dc
	if (!ctx.cr6.eq) goto loc_82EAC6DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,6368
	ctx.r11.s64 = ctx.r11.s64 + 6368;
	// b 0x82eac6e4
	goto loc_82EAC6E4;
loc_82EAC6DC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,6384
	ctx.r11.s64 = ctx.r11.s64 + 6384;
loc_82EAC6E4:
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eabf28
	ctx.lr = 0x82EAC708;
	sub_82EABF28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eac724
	if (!ctx.cr0.lt) goto loc_82EAC724;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82EAC714:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eaca98
	if (ctx.cr6.eq) goto loc_82EACA98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82eaca8c
	goto loc_82EACA8C;
loc_82EAC724:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x82ee3af8
	ctx.lr = 0x82EAC730;
	sub_82EE3AF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eac77c
	if (!ctx.cr0.lt) goto loc_82EAC77C;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eac758
	if (ctx.cr6.eq) goto loc_82EAC758;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
loc_82EAC758:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eac774
	if (ctx.cr6.eq) goto loc_82EAC774;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAC774:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// b 0x82eac714
	goto loc_82EAC714;
loc_82EAC77C:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC7B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82EAC7BC;
	sub_82CB16F0(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82eac7cc
	if (ctx.cr6.eq) goto loc_82EAC7CC;
	// lwz r30,16(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// b 0x82eac7d0
	goto loc_82EAC7D0;
loc_82EAC7CC:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82EAC7D0:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
	// addi r19,r11,-25248
	ctx.r19.s64 = ctx.r11.s64 + -25248;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC7F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,124(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// bl 0x83201740
	ctx.lr = 0x82EAC870;
	sub_83201740(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eac8d0
	if (!ctx.cr0.lt) goto loc_82EAC8D0;
loc_82EAC878:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eac898
	if (ctx.cr6.eq) goto loc_82EAC898;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
loc_82EAC898:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC8AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eac8c8
	if (ctx.cr6.eq) goto loc_82EAC8C8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC8C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAC8C8:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x82eac714
	goto loc_82EAC714;
loc_82EAC8D0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,118
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 118, ctx.xer);
	// bne cr6,0x82eac8fc
	if (!ctx.cr6.eq) goto loc_82EAC8FC;
	// bl 0x831fc6d0
	ctx.lr = 0x82EAC8F8;
	sub_831FC6D0(ctx, base);
	// b 0x82eac900
	goto loc_82EAC900;
loc_82EAC8FC:
	// bl 0x831fc6d8
	ctx.lr = 0x82EAC900;
	sub_831FC6D8(ctx, base);
loc_82EAC900:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82eaca30
	if (!ctx.cr6.eq) goto loc_82EACA30;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-3824
	ctx.r3.s64 = ctx.r11.s64 + -3824;
	// bl 0x82e67098
	ctx.lr = 0x82EAC914;
	sub_82E67098(ctx, base);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82ee3af8
	ctx.lr = 0x82EAC924;
	sub_82EE3AF8(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// blt 0x82eac878
	if (ctx.cr0.lt) goto loc_82EAC878;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EAC96C;
	sub_82CB1160(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eac988
	if (ctx.cr6.eq) goto loc_82EAC988;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAC988:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC9B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eac9dc
	if (ctx.cr6.eq) goto loc_82EAC9DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAC9DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAC9DC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eaca00
	if (ctx.cr6.eq) goto loc_82EACA00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACA00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EACA00:
	// stw r28,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82eaca98
	if (ctx.cr6.eq) goto loc_82EACA98;
	// lwz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eaca98
	if (ctx.cr6.eq) goto loc_82EACA98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACA28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r29.u32);
	// b 0x82eaca98
	goto loc_82EACA98;
loc_82EACA30:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACA44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eaca60
	if (ctx.cr6.eq) goto loc_82EACA60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACA60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EACA60:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eaca7c
	if (ctx.cr6.eq) goto loc_82EACA7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACA7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EACA7C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eaca98
	if (ctx.cr6.eq) goto loc_82EACA98;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82EACA8C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EACA98:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EACAA4"))) PPC_WEAK_FUNC(sub_82EACAA4);
PPC_FUNC_IMPL(__imp__sub_82EACAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EACAA8"))) PPC_WEAK_FUNC(sub_82EACAA8);
PPC_FUNC_IMPL(__imp__sub_82EACAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EACAB0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82eac5d8
	ctx.lr = 0x82EACAD8;
	sub_82EAC5D8(ctx, base);
	// lis r11,-30602
	ctx.r11.s64 = -2005532672;
	// ori r11,r11,2924
	ctx.r11.u64 = ctx.r11.u64 | 2924;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82eacb14
	if (!ctx.cr6.eq) goto loc_82EACB14;
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eacb14
	if (!ctx.cr0.eq) goto loc_82EACB14;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// ori r6,r31,4
	ctx.r6.u64 = ctx.r31.u64 | 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eac5d8
	ctx.lr = 0x82EACB14;
	sub_82EAC5D8(ctx, base);
loc_82EACB14:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EACB1C"))) PPC_WEAK_FUNC(sub_82EACB1C);
PPC_FUNC_IMPL(__imp__sub_82EACB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EACB20"))) PPC_WEAK_FUNC(sub_82EACB20);
PPC_FUNC_IMPL(__imp__sub_82EACB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EACB28;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bne cr6,0x82eacb74
	if (!ctx.cr6.eq) goto loc_82EACB74;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EACB64:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82eacb64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EACB64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_82EACB74:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82eacba0
	if (ctx.cr6.eq) goto loc_82EACBA0;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,118
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 118, ctx.xer);
	// beq cr6,0x82eacba0
	if (ctx.cr6.eq) goto loc_82EACBA0;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// beq cr6,0x82eacba0
	if (ctx.cr6.eq) goto loc_82EACBA0;
	// li r9,1
	ctx.r9.s64 = 1;
	// oris r6,r6,16
	ctx.r6.u64 = ctx.r6.u64 | 1048576;
loc_82EACBA0:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eacc74
	if (!ctx.cr0.eq) goto loc_82EACC74;
	// rlwinm. r11,r6,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eacc74
	if (!ctx.cr0.eq) goto loc_82EACC74;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x82eacaa8
	ctx.lr = 0x82EACBC4;
	sub_82EACAA8(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82eacc00
	if (ctx.cr0.lt) goto loc_82EACC00;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eacbe4
	if (ctx.cr6.eq) goto loc_82EACBE4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82eacbe8
	goto loc_82EACBE8;
loc_82EACBE4:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EACBE8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eacc04
	if (ctx.cr6.eq) goto loc_82EACC04;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82eacc08
	goto loc_82EACC08;
loc_82EACC00:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EACC04:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EACC08:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82eacc1c
	if (ctx.cr6.eq) goto loc_82EACC1C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82EACC1C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eacc34
	if (ctx.cr6.eq) goto loc_82EACC34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACC34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EACC34:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eacc50
	if (ctx.cr6.eq) goto loc_82EACC50;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACC50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EACC50:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eacc6c
	if (ctx.cr6.eq) goto loc_82EACC6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACC6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EACC6C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82eacc88
	goto loc_82EACC88;
loc_82EACC74:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x82eacaa8
	ctx.lr = 0x82EACC88;
	sub_82EACAA8(ctx, base);
loc_82EACC88:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EACC90"))) PPC_WEAK_FUNC(sub_82EACC90);
PPC_FUNC_IMPL(__imp__sub_82EACC90) {
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
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// addi r11,r10,-4128
	ctx.r11.s64 = ctx.r10.s64 + -4128;
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lwz r9,204(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x82eacb20
	ctx.lr = 0x82EACCE0;
	sub_82EACB20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EACCF0"))) PPC_WEAK_FUNC(sub_82EACCF0);
PPC_FUNC_IMPL(__imp__sub_82EACCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EACCF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,612(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
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
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82ea9b68
	ctx.lr = 0x82EACD28;
	sub_82EA9B68(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r11,r11,-4128
	ctx.r11.s64 = ctx.r11.s64 + -4128;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,604(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r8,596(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// bl 0x82eacb20
	ctx.lr = 0x82EACD68;
	sub_82EACB20(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EACD70"))) PPC_WEAK_FUNC(sub_82EACD70);
PPC_FUNC_IMPL(__imp__sub_82EACD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82EACD78;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82eacd98
	if (ctx.cr6.eq) goto loc_82EACD98;
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
loc_82EACD98:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,4138
	ctx.r10.s64 = 271187968;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eacef0
	if (!ctx.cr6.eq) goto loc_82EACEF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82299698
	ctx.lr = 0x82EACDBC;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eacdd0
	if (ctx.cr0.eq) goto loc_82EACDD0;
	// bl 0x82ee8ca0
	ctx.lr = 0x82EACDC8;
	sub_82EE8CA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82eacdd4
	goto loc_82EACDD4;
loc_82EACDD0:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82EACDD4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82eacde8
	if (!ctx.cr6.eq) goto loc_82EACDE8;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82eacedc
	goto loc_82EACEDC;
loc_82EACDE8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee91d8
	ctx.lr = 0x82EACDF8;
	sub_82EE91D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eacec8
	if (ctx.cr0.lt) goto loc_82EACEC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACE18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eacec8
	if (ctx.cr0.lt) goto loc_82EACEC8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eacebc
	if (ctx.cr6.eq) goto loc_82EACEBC;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_82EACE34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACE50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EACE78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82eacec8
	if (ctx.cr0.lt) goto loc_82EACEC8;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82eaceac
	if (!ctx.cr6.eq) goto loc_82EACEAC;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// beq cr6,0x82eacee4
	if (ctx.cr6.eq) goto loc_82EACEE4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82eacea4
	if (ctx.cr6.eq) goto loc_82EACEA4;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82EACEA4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_82EACEAC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eace34
	if (ctx.cr6.lt) goto loc_82EACE34;
loc_82EACEBC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82eacec8
	if (ctx.cr6.eq) goto loc_82EACEC8;
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
loc_82EACEC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ee7e88
	ctx.lr = 0x82EACED0;
	sub_82EE7E88(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EACEDC;
	sub_822996C0(ctx, base);
loc_82EACEDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82eacff0
	goto loc_82EACFF0;
loc_82EACEE4:
	// lis r30,-30602
	ctx.r30.s64 = -2005532672;
	// ori r30,r30,2905
	ctx.r30.u64 = ctx.r30.u64 | 2905;
	// b 0x82eacec8
	goto loc_82EACEC8;
loc_82EACEF0:
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,18008
	ctx.r10.s64 = 1180172288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eacfec
	if (ctx.cr6.eq) goto loc_82EACFEC;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eacfec
	if (ctx.cr6.eq) goto loc_82EACFEC;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eacf54
	if (!ctx.cr6.eq) goto loc_82EACF54;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r4,16961
	ctx.r4.s64 = 1111556096;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,21571
	ctx.r4.u64 = ctx.r4.u64 | 21571;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ec9228
	ctx.lr = 0x82EACF34;
	sub_82EC9228(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eacff0
	if (ctx.cr0.lt) goto loc_82EACFF0;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82eacfec
	if (ctx.cr6.eq) goto loc_82EACFEC;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 28, ctx.xer);
	// bge cr6,0x82eacf60
	if (!ctx.cr6.lt) goto loc_82EACF60;
loc_82EACF54:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x82eacff0
	goto loc_82EACFF0;
loc_82EACF60:
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mulli r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 * 20;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eacf54
	if (ctx.cr6.lt) goto loc_82EACF54;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eacfe0
	if (ctx.cr6.eq) goto loc_82EACFE0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82EACF94:
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82eacfcc
	if (!ctx.cr6.eq) goto loc_82EACFCC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82eacf54
	if (!ctx.cr6.gt) goto loc_82EACF54;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// beq cr6,0x82eacf54
	if (ctx.cr6.eq) goto loc_82EACF54;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82eacfc4
	if (ctx.cr6.eq) goto loc_82EACFC4;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_82EACFC4:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
loc_82EACFCC:
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eacf94
	if (ctx.cr6.lt) goto loc_82EACF94;
loc_82EACFE0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82eacfec
	if (ctx.cr6.eq) goto loc_82EACFEC;
	// stw r5,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r5.u32);
loc_82EACFEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EACFF0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EACFF8"))) PPC_WEAK_FUNC(sub_82EACFF8);
PPC_FUNC_IMPL(__imp__sub_82EACFF8) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r10,r10,-4176
	ctx.r10.s64 = ctx.r10.s64 + -4176;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x82eacb20
	ctx.lr = 0x82EAD054;
	sub_82EACB20(ctx, base);
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

__attribute__((alias("__imp__sub_82EAD068"))) PPC_WEAK_FUNC(sub_82EAD068);
PPC_FUNC_IMPL(__imp__sub_82EAD068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EAD070;
	__savegprlr_24(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,604(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
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
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82ea9b68
	ctx.lr = 0x82EAD0A0;
	sub_82EA9B68(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r11,r11,-4176
	ctx.r11.s64 = ctx.r11.s64 + -4176;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r9,596(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82eacb20
	ctx.lr = 0x82EAD0E4;
	sub_82EACB20(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAD0EC"))) PPC_WEAK_FUNC(sub_82EAD0EC);
PPC_FUNC_IMPL(__imp__sub_82EAD0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD0F0"))) PPC_WEAK_FUNC(sub_82EAD0F0);
PPC_FUNC_IMPL(__imp__sub_82EAD0F0) {
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
	// lis r31,-32254
	ctx.r31.s64 = -2113798144;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r4,r31,-4128
	ctx.r4.s64 = ctx.r31.s64 + -4128;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r9,220(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eacb20
	ctx.lr = 0x82EAD144;
	sub_82EACB20(ctx, base);
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

__attribute__((alias("__imp__sub_82EAD158"))) PPC_WEAK_FUNC(sub_82EAD158);
PPC_FUNC_IMPL(__imp__sub_82EAD158) {
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
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82eacff8
	ctx.lr = 0x82EAD17C;
	sub_82EACFF8(ctx, base);
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

__attribute__((alias("__imp__sub_82EAD190"))) PPC_WEAK_FUNC(sub_82EAD190);
PPC_FUNC_IMPL(__imp__sub_82EAD190) {
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
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82ead068
	ctx.lr = 0x82EAD1B4;
	sub_82EAD068(ctx, base);
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

__attribute__((alias("__imp__sub_82EAD1C8"))) PPC_WEAK_FUNC(sub_82EAD1C8);
PPC_FUNC_IMPL(__imp__sub_82EAD1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EAD1D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ead1fc
	if (!ctx.cr6.gt) goto loc_82EAD1FC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82ead250
	goto loc_82EAD250;
loc_82EAD1FC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb2ea0
	ctx.lr = 0x82EAD20C;
	sub_82CB2EA0(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r9,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r9.u8);
loc_82EAD21C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ead21c
	if (!ctx.cr6.eq) goto loc_82EAD21C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82ead24c
	if (ctx.cr6.lt) goto loc_82EAD24C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// b 0x82ead250
	goto loc_82EAD250;
loc_82EAD24C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAD250:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAD258"))) PPC_WEAK_FUNC(sub_82EAD258);
PPC_FUNC_IMPL(__imp__sub_82EAD258) {
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
	// bl 0x82eb51f0
	ctx.lr = 0x82EAD270;
	sub_82EB51F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EAD2A0"))) PPC_WEAK_FUNC(sub_82EAD2A0);
PPC_FUNC_IMPL(__imp__sub_82EAD2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82EAD2A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82ead4b0
	if (ctx.cr6.lt) goto loc_82EAD4B0;
	// beq cr6,0x82ead390
	if (ctx.cr6.eq) goto loc_82EAD390;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82ead420
	if (!ctx.cr6.lt) goto loc_82EAD420;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD2EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82ead354
	if (!ctx.cr6.gt) goto loc_82EAD354;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ead32c
	if (!ctx.cr6.gt) goto loc_82EAD32C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82ead344
	goto loc_82EAD344;
loc_82EAD32C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r4,r3,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
loc_82EAD344:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82ee3498
	ctx.lr = 0x82EAD34C;
	sub_82EE3498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ead4b4
	if (ctx.cr0.lt) goto loc_82EAD4B4;
loc_82EAD354:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EAD37C;
	sub_82CB1160(ctx, base);
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x82ead4b0
	goto loc_82EAD4B0;
loc_82EAD390:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r29,1
	ctx.r29.s64 = 65536;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82ead3c8
	if (ctx.cr6.gt) goto loc_82EAD3C8;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EAD3B8;
	sub_82CB1160(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82ead4ac
	goto loc_82EAD4AC;
loc_82EAD3C8:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82ead3f8
	if (ctx.cr6.eq) goto loc_82EAD3F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ead448
	if (ctx.cr6.eq) goto loc_82EAD448;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// subf r5,r11,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EAD3EC;
	sub_82CB1160(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// add r28,r10,r29
	ctx.r28.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_82EAD3F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ead448
	if (ctx.cr6.eq) goto loc_82EAD448;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// bl 0x82e65318
	ctx.lr = 0x82EAD418;
	sub_82E65318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ead42c
	if (!ctx.cr0.eq) goto loc_82EAD42C;
loc_82EAD420:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82ead4b4
	goto loc_82EAD4B4;
loc_82EAD42C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// subf r27,r9,r29
	ctx.r27.s64 = ctx.r29.s64 - ctx.r9.s64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82EAD448:
	// subf r11,r27,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r27.s64;
	// rlwinm. r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ead48c
	if (ctx.cr0.eq) goto loc_82EAD48C;
	// rlwinm r29,r11,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82e65318
	ctx.lr = 0x82EAD470;
	sub_82E65318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ead420
	if (ctx.cr0.eq) goto loc_82EAD420;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r27,r29,r27
	ctx.r27.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82EAD48C:
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82ead4ac
	if (!ctx.cr6.lt) goto loc_82EAD4AC;
	// subf r29,r27,r30
	ctx.r29.s64 = ctx.r30.s64 - ctx.r27.s64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EAD4A8;
	sub_82CB1160(ctx, base);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_82EAD4AC:
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
loc_82EAD4B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAD4B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAD4BC"))) PPC_WEAK_FUNC(sub_82EAD4BC);
PPC_FUNC_IMPL(__imp__sub_82EAD4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD4C0"))) PPC_WEAK_FUNC(sub_82EAD4C0);
PPC_FUNC_IMPL(__imp__sub_82EAD4C0) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82ead4ec
	if (ctx.cr6.lt) goto loc_82EAD4EC;
	// beq cr6,0x82ead504
	if (ctx.cr6.eq) goto loc_82EAD504;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82ead52c
	if (!ctx.cr6.lt) goto loc_82EAD52C;
loc_82EAD4EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAD4F0:
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
loc_82EAD504:
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ead4ec
	if (ctx.cr6.eq) goto loc_82EAD4EC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e65318
	ctx.lr = 0x82EAD524;
	sub_82E65318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ead538
	if (!ctx.cr0.eq) goto loc_82EAD538;
loc_82EAD52C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82ead4f0
	goto loc_82EAD4F0;
loc_82EAD538:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x82ead4f0
	goto loc_82EAD4F0;
}

__attribute__((alias("__imp__sub_82EAD558"))) PPC_WEAK_FUNC(sub_82EAD558);
PPC_FUNC_IMPL(__imp__sub_82EAD558) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD580"))) PPC_WEAK_FUNC(sub_82EAD580);
PPC_FUNC_IMPL(__imp__sub_82EAD580) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ead5a4
	if (ctx.cr6.eq) goto loc_82EAD5A4;
loc_82EAD58C:
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82ead5ac
	if (ctx.cr6.eq) goto loc_82EAD5AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82ead58c
	if (ctx.cr6.lt) goto loc_82EAD58C;
loc_82EAD5A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EAD5AC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD5B4"))) PPC_WEAK_FUNC(sub_82EAD5B4);
PPC_FUNC_IMPL(__imp__sub_82EAD5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD5B8"))) PPC_WEAK_FUNC(sub_82EAD5B8);
PPC_FUNC_IMPL(__imp__sub_82EAD5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm r10,r11,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r9,r11,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f1,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD5EC"))) PPC_WEAK_FUNC(sub_82EAD5EC);
PPC_FUNC_IMPL(__imp__sub_82EAD5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD5F0"))) PPC_WEAK_FUNC(sub_82EAD5F0);
PPC_FUNC_IMPL(__imp__sub_82EAD5F0) {
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x82ff1e60
	ctx.lr = 0x82EAD624;
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
}

__attribute__((alias("__imp__sub_82EAD624"))) PPC_WEAK_FUNC(sub_82EAD624);
PPC_FUNC_IMPL(__imp__sub_82EAD624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD628"))) PPC_WEAK_FUNC(sub_82EAD628);
PPC_FUNC_IMPL(__imp__sub_82EAD628) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD62C"))) PPC_WEAK_FUNC(sub_82EAD62C);
PPC_FUNC_IMPL(__imp__sub_82EAD62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD630"))) PPC_WEAK_FUNC(sub_82EAD630);
PPC_FUNC_IMPL(__imp__sub_82EAD630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAD650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD660"))) PPC_WEAK_FUNC(sub_82EAD660);
PPC_FUNC_IMPL(__imp__sub_82EAD660) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD664"))) PPC_WEAK_FUNC(sub_82EAD664);
PPC_FUNC_IMPL(__imp__sub_82EAD664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD668"))) PPC_WEAK_FUNC(sub_82EAD668);
PPC_FUNC_IMPL(__imp__sub_82EAD668) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD684"))) PPC_WEAK_FUNC(sub_82EAD684);
PPC_FUNC_IMPL(__imp__sub_82EAD684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD688"))) PPC_WEAK_FUNC(sub_82EAD688);
PPC_FUNC_IMPL(__imp__sub_82EAD688) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD6A8"))) PPC_WEAK_FUNC(sub_82EAD6A8);
PPC_FUNC_IMPL(__imp__sub_82EAD6A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD6AC"))) PPC_WEAK_FUNC(sub_82EAD6AC);
PPC_FUNC_IMPL(__imp__sub_82EAD6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD6B0"))) PPC_WEAK_FUNC(sub_82EAD6B0);
PPC_FUNC_IMPL(__imp__sub_82EAD6B0) {
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
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82ead2a0
	ctx.lr = 0x82EAD6D8;
	sub_82EAD2A0(ctx, base);
	// li r11,4096
	ctx.r11.s64 = 4096;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EAD700"))) PPC_WEAK_FUNC(sub_82EAD700);
PPC_FUNC_IMPL(__imp__sub_82EAD700) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subfic r5,r10,4096
	ctx.xer.ca = ctx.r10.u32 <= 4096;
	ctx.r5.s64 = 4096 - ctx.r10.s64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ead730
	if (ctx.cr6.eq) goto loc_82EAD730;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82ead2a0
	ctx.lr = 0x82EAD730;
	sub_82EAD2A0(ctx, base);
loc_82EAD730:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD740"))) PPC_WEAK_FUNC(sub_82EAD740);
PPC_FUNC_IMPL(__imp__sub_82EAD740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EAD748;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,1364(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1364);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ead770
	if (!ctx.cr6.gt) goto loc_82EAD770;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-3476
	ctx.r4.s64 = ctx.r11.s64 + -3476;
	// bl 0x82f08718
	ctx.lr = 0x82EAD770;
	sub_82F08718(ctx, base);
loc_82EAD770:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EAD780;
	sub_82CB1160(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAD7A0"))) PPC_WEAK_FUNC(sub_82EAD7A0);
PPC_FUNC_IMPL(__imp__sub_82EAD7A0) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ff1e60
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
	return;
}

__attribute__((alias("__imp__sub_82EAD7A8"))) PPC_WEAK_FUNC(sub_82EAD7A8);
PPC_FUNC_IMPL(__imp__sub_82EAD7A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD7AC"))) PPC_WEAK_FUNC(sub_82EAD7AC);
PPC_FUNC_IMPL(__imp__sub_82EAD7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD7B0"))) PPC_WEAK_FUNC(sub_82EAD7B0);
PPC_FUNC_IMPL(__imp__sub_82EAD7B0) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ff1e60
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
	return;
}

__attribute__((alias("__imp__sub_82EAD7B8"))) PPC_WEAK_FUNC(sub_82EAD7B8);
PPC_FUNC_IMPL(__imp__sub_82EAD7B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD7BC"))) PPC_WEAK_FUNC(sub_82EAD7BC);
PPC_FUNC_IMPL(__imp__sub_82EAD7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD7C0"))) PPC_WEAK_FUNC(sub_82EAD7C0);
PPC_FUNC_IMPL(__imp__sub_82EAD7C0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82f08a48
	ctx.lr = 0x82EAD7E0;
	sub_82F08A48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EAD7F8;
	sub_82EAD2A0(ctx, base);
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

__attribute__((alias("__imp__sub_82EAD810"))) PPC_WEAK_FUNC(sub_82EAD810);
PPC_FUNC_IMPL(__imp__sub_82EAD810) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD814"))) PPC_WEAK_FUNC(sub_82EAD814);
PPC_FUNC_IMPL(__imp__sub_82EAD814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD818"))) PPC_WEAK_FUNC(sub_82EAD818);
PPC_FUNC_IMPL(__imp__sub_82EAD818) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAD820"))) PPC_WEAK_FUNC(sub_82EAD820);
PPC_FUNC_IMPL(__imp__sub_82EAD820) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD838"))) PPC_WEAK_FUNC(sub_82EAD838);
PPC_FUNC_IMPL(__imp__sub_82EAD838) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
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
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD860"))) PPC_WEAK_FUNC(sub_82EAD860);
PPC_FUNC_IMPL(__imp__sub_82EAD860) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2);
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
	// stw r11,2(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2, ctx.r11.u32);
	// lhz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// lwz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 10);
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
	// stw r11,10(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD8E8"))) PPC_WEAK_FUNC(sub_82EAD8E8);
PPC_FUNC_IMPL(__imp__sub_82EAD8E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
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
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
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
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
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
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lhz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// lhz r11,14(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r11.u16);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
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
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
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
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
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
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
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
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
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
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
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
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EADA58"))) PPC_WEAK_FUNC(sub_82EADA58);
PPC_FUNC_IMPL(__imp__sub_82EADA58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
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
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
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
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
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
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EADAC8"))) PPC_WEAK_FUNC(sub_82EADAC8);
PPC_FUNC_IMPL(__imp__sub_82EADAC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r11,r10,16,16,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r11,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
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
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
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
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
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
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
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
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
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
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwinm r11,r10,8,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r10,r9,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
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
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
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
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EADC18"))) PPC_WEAK_FUNC(sub_82EADC18);
PPC_FUNC_IMPL(__imp__sub_82EADC18) {
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
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r11.u16);
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r11.u16);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
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
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
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
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
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
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
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
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
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
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
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
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
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
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
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
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
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
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// bl 0x82eadac8
	ctx.lr = 0x82EADE60;
	sub_82EADAC8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
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
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
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
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
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
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EADEE4"))) PPC_WEAK_FUNC(sub_82EADEE4);
PPC_FUNC_IMPL(__imp__sub_82EADEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EADEE8"))) PPC_WEAK_FUNC(sub_82EADEE8);
PPC_FUNC_IMPL(__imp__sub_82EADEE8) {
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
	// bl 0x82ead4c0
	ctx.lr = 0x82EADF00;
	sub_82EAD4C0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eadf20
	if (ctx.cr6.eq) goto loc_82EADF20;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EADF20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EADF20:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eadf34
	if (ctx.cr6.eq) goto loc_82EADF34;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EADF34;
	sub_822996C0(ctx, base);
loc_82EADF34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb53f8
	ctx.lr = 0x82EADF3C;
	sub_82EB53F8(ctx, base);
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

__attribute__((alias("__imp__sub_82EADF50"))) PPC_WEAK_FUNC(sub_82EADF50);
PPC_FUNC_IMPL(__imp__sub_82EADF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EADF58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eadfb0
	if (ctx.cr6.eq) goto loc_82EADFB0;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// beq cr6,0x82eadfb0
	if (ctx.cr6.eq) goto loc_82EADFB0;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bne cr6,0x82eadfa4
	if (!ctx.cr6.eq) goto loc_82EADFA4;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// bl 0x82ee3870
	ctx.lr = 0x82EADF88;
	sub_82EE3870(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae000
	if (ctx.cr0.lt) goto loc_82EAE000;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// b 0x82eadffc
	goto loc_82EADFFC;
loc_82EADFA4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eae000
	goto loc_82EAE000;
loc_82EADFB0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x82299698
	ctx.lr = 0x82EADFBC;
	sub_82299698(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eadfd4
	if (!ctx.cr0.eq) goto loc_82EADFD4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eae000
	goto loc_82EAE000;
loc_82EADFD4:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82eb5208
	ctx.lr = 0x82EADFEC;
	sub_82EB5208(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eae000
	if (ctx.cr0.lt) goto loc_82EAE000;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_82EADFFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAE000:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAE008"))) PPC_WEAK_FUNC(sub_82EAE008);
PPC_FUNC_IMPL(__imp__sub_82EAE008) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eae03c
	if (ctx.cr6.eq) goto loc_82EAE03C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eae03c
	if (ctx.cr6.eq) goto loc_82EAE03C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EAE03C;
	sub_822996C0(ctx, base);
loc_82EAE03C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eae05c
	if (ctx.cr6.eq) goto loc_82EAE05C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eae05c
	if (ctx.cr6.eq) goto loc_82EAE05C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EAE05C;
	sub_822996C0(ctx, base);
loc_82EAE05C:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eae070
	if (ctx.cr6.eq) goto loc_82EAE070;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82eae098
	ctx.lr = 0x82EAE070;
	sub_82EAE098(ctx, base);
loc_82EAE070:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eae084
	if (ctx.cr6.eq) goto loc_82EAE084;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82eae098
	ctx.lr = 0x82EAE084;
	sub_82EAE098(ctx, base);
loc_82EAE084:
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

__attribute__((alias("__imp__sub_82EAE098"))) PPC_WEAK_FUNC(sub_82EAE098);
PPC_FUNC_IMPL(__imp__sub_82EAE098) {
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
	// bl 0x82eae008
	ctx.lr = 0x82EAE0B8;
	sub_82EAE008(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eae0cc
	if (ctx.cr0.eq) goto loc_82EAE0CC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EAE0CC;
	sub_822996C0(ctx, base);
loc_82EAE0CC:
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

__attribute__((alias("__imp__sub_82EAE0E8"))) PPC_WEAK_FUNC(sub_82EAE0E8);
PPC_FUNC_IMPL(__imp__sub_82EAE0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EAE0F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eae11c
	if (ctx.cr6.eq) goto loc_82EAE11C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eae11c
	if (ctx.cr6.eq) goto loc_82EAE11C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EAE11C;
	sub_822996C0(ctx, base);
loc_82EAE11C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eae13c
	if (ctx.cr6.eq) goto loc_82EAE13C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eae13c
	if (ctx.cr6.eq) goto loc_82EAE13C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EAE13C;
	sub_822996C0(ctx, base);
loc_82EAE13C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82EAE168;
	sub_82CB1160(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// ori r10,r10,11
	ctx.r10.u64 = ctx.r10.u64 | 11;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// blt cr6,0x82eae1f4
	if (ctx.cr6.lt) goto loc_82EAE1F4;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eae1e8
	if (!ctx.cr6.gt) goto loc_82EAE1E8;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 | 10;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eae1f4
	if (!ctx.cr6.gt) goto loc_82EAE1F4;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eae1e8
	if (!ctx.cr6.gt) goto loc_82EAE1E8;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addi r11,r11,-338
	ctx.r11.s64 = ctx.r11.s64 + -338;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82eae1f4
	if (ctx.cr6.gt) goto loc_82EAE1F4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// b 0x82eae1f0
	goto loc_82EAE1F0;
loc_82EAE1E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_82EAE1F0:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82EAE1F4:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// subf r10,r6,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r6.s64;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAE23C"))) PPC_WEAK_FUNC(sub_82EAE23C);
PPC_FUNC_IMPL(__imp__sub_82EAE23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAE240"))) PPC_WEAK_FUNC(sub_82EAE240);
PPC_FUNC_IMPL(__imp__sub_82EAE240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82EAE248;
	__savegprlr_25(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// ble cr6,0x82eae638
	if (!ctx.cr6.gt) goto loc_82EAE638;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,-3444
	ctx.r11.s64 = ctx.r11.s64 + -3444;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
loc_82EAE268:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eae288
	if (!ctx.cr0.eq) goto loc_82EAE288;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eae268
	if (!ctx.cr6.eq) goto loc_82EAE268;
loc_82EAE288:
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eae29c
	if (!ctx.cr0.eq) goto loc_82EAE29C;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x82eae2d8
	goto loc_82EAE2D8;
loc_82EAE29C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,-3448
	ctx.r11.s64 = ctx.r11.s64 + -3448;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
loc_82EAE2AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eae2cc
	if (!ctx.cr0.eq) goto loc_82EAE2CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eae2ac
	if (!ctx.cr6.eq) goto loc_82EAE2AC;
loc_82EAE2CC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eae638
	if (!ctx.cr0.eq) goto loc_82EAE638;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_82EAE2D8:
	// addi r30,r5,-3
	ctx.r30.s64 = ctx.r5.s64 + -3;
	// addi r29,r4,3
	ctx.r29.s64 = ctx.r4.s64 + 3;
	// cmplwi cr6,r30,256
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 256, ctx.xer);
	// li r11,256
	ctx.r11.s64 = 256;
	// bgt cr6,0x82eae2f0
	if (ctx.cr6.gt) goto loc_82EAE2F0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EAE2F0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eae314
	if (ctx.cr6.eq) goto loc_82EAE314;
loc_82EAE2FC:
	// lbzx r10,r31,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82eae318
	if (ctx.cr6.eq) goto loc_82EAE318;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eae2fc
	if (ctx.cr6.lt) goto loc_82EAE2FC;
loc_82EAE314:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EAE318:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82eae638
	if (ctx.cr6.eq) goto loc_82EAE638;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ead1c8
	ctx.lr = 0x82EAE330;
	sub_82EAD1C8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,368
	ctx.r7.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-3456
	ctx.r4.s64 = ctx.r11.s64 + -3456;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cb81f0
	ctx.lr = 0x82EAE34C;
	sub_82CB81F0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82eae638
	if (!ctx.cr6.eq) goto loc_82EAE638;
	// subf r10,r31,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// beq 0x82eae638
	if (ctx.cr0.eq) goto loc_82EAE638;
	// cmplwi cr6,r30,256
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 256, ctx.xer);
	// li r10,256
	ctx.r10.s64 = 256;
	// bgt cr6,0x82eae378
	if (ctx.cr6.gt) goto loc_82EAE378;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82EAE378:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eae39c
	if (ctx.cr6.eq) goto loc_82EAE39C;
loc_82EAE384:
	// lbzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// beq cr6,0x82eae474
	if (ctx.cr6.eq) goto loc_82EAE474;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eae384
	if (ctx.cr6.lt) goto loc_82EAE384;
loc_82EAE39C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EAE3A0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82eae638
	if (ctx.cr6.eq) goto loc_82EAE638;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ead1c8
	ctx.lr = 0x82EAE3B8;
	sub_82EAD1C8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-3464
	ctx.r4.s64 = ctx.r11.s64 + -3464;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cb81f0
	ctx.lr = 0x82EAE3D0;
	sub_82CB81F0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82eae638
	if (!ctx.cr6.eq) goto loc_82EAE638;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82eae3f4
	if (ctx.cr6.lt) goto loc_82EAE3F4;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82EAE3F4:
	// cntlzw r8,r26
	ctx.r8.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// rlwinm r8,r8,28,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x2;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eae638
	if (ctx.cr6.lt) goto loc_82EAE638;
	// lis r9,6690
	ctx.r9.s64 = 438435840;
	// stw r11,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r10.u32);
	// ori r9,r9,43686
	ctx.r9.u64 = ctx.r9.u64 | 43686;
	// stw r28,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r11.u32);
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r8,52(r25)
	PPC_STORE_U32(ctx.r25.u32 + 52, ctx.r8.u32);
	// stw r28,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r28.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EAE45C;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
	// bne 0x82eae47c
	if (!ctx.cr0.eq) goto loc_82EAE47C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eae640
	goto loc_82EAE640;
loc_82EAE474:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x82eae3a0
	goto loc_82EAE3A0;
loc_82EAE47C:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addic. r4,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r4.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// blt 0x82eae630
	if (ctx.cr0.lt) goto loc_82EAE630;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
loc_82EAE498:
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mullw r9,r4,r8
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// beq cr6,0x82eae548
	if (ctx.cr6.eq) goto loc_82EAE548;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82eae53c
	if (ctx.cr6.eq) goto loc_82EAE53C;
	// b 0x82eae514
	goto loc_82EAE514;
loc_82EAE4C8:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r7,r9,0,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// rlwinm r6,r9,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r5,r9,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82EAE514:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82eae4c8
	if (!ctx.cr6.eq) goto loc_82EAE4C8;
	// b 0x82eae628
	goto loc_82EAE628;
loc_82EAE520:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82EAE53C:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82eae520
	if (!ctx.cr6.eq) goto loc_82EAE520;
	// b 0x82eae628
	goto loc_82EAE628;
loc_82EAE548:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82eae620
	if (ctx.cr6.eq) goto loc_82EAE620;
	// b 0x82eae5f0
	goto loc_82EAE5F0;
loc_82EAE554:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r5,r9,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// rlwinm r6,r9,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r5,r9,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// rlwinm r6,r9,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// rlwinm r5,r9,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// rlwinm r6,r9,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82EAE5F0:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82eae554
	if (!ctx.cr6.eq) goto loc_82EAE554;
	// b 0x82eae628
	goto loc_82EAE628;
loc_82EAE5FC:
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
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82EAE620:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82eae5fc
	if (!ctx.cr6.eq) goto loc_82EAE5FC;
loc_82EAE628:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x82eae498
	if (!ctx.cr0.lt) goto loc_82EAE498;
loc_82EAE630:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eae640
	goto loc_82EAE640;
loc_82EAE638:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EAE640:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAE648"))) PPC_WEAK_FUNC(sub_82EAE648);
PPC_FUNC_IMPL(__imp__sub_82EAE648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x82EAE650;
	__savegprlr_18(ctx, base);
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f29.u64);
	// stfd f30,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r24,10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 10, ctx.xer);
	// ble cr6,0x82eaf174
	if (!ctx.cr6.gt) goto loc_82EAF174;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-3384
	ctx.r10.s64 = ctx.r10.s64 + -3384;
	// addi r8,r4,10
	ctx.r8.s64 = ctx.r4.s64 + 10;
loc_82EAE684:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eae6a4
	if (!ctx.cr0.eq) goto loc_82EAE6A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eae684
	if (!ctx.cr6.eq) goto loc_82EAE684;
loc_82EAE6A4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eaf174
	if (!ctx.cr0.eq) goto loc_82EAF174;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// lfs f29,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f29.f64 = double(temp.f32);
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// ble cr6,0x82eaf174
	if (!ctx.cr6.gt) goto loc_82EAF174;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// li r18,1
	ctx.r18.s64 = 1;
	// addi r22,r11,-3464
	ctx.r22.s64 = ctx.r11.s64 + -3464;
	// addi r21,r10,-3400
	ctx.r21.s64 = ctx.r10.s64 + -3400;
	// addi r20,r9,-3416
	ctx.r20.s64 = ctx.r9.s64 + -3416;
	// addi r27,r8,-3428
	ctx.r27.s64 = ctx.r8.s64 + -3428;
	// addi r26,r7,-3436
	ctx.r26.s64 = ctx.r7.s64 + -3436;
loc_82EAE6F4:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82eaea74
	if (ctx.cr6.eq) goto loc_82EAEA74;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EAE708:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eae708
	if (!ctx.cr6.eq) goto loc_82EAE708;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82eae8a4
	if (!ctx.cr6.gt) goto loc_82EAE8A4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EAE734:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eae734
	if (!ctx.cr6.eq) goto loc_82EAE734;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// rotlwi. r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// beq 0x82eae784
	if (ctx.cr0.eq) goto loc_82EAE784;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EAE764:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eae784
	if (!ctx.cr0.eq) goto loc_82EAE784;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82eae764
	if (!ctx.cr6.eq) goto loc_82EAE764;
loc_82EAE784:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eae8a4
	if (!ctx.cr0.eq) goto loc_82EAE8A4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EAE794:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eae794
	if (!ctx.cr6.eq) goto loc_82EAE794;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r31,r10,r25
	ctx.r31.u64 = ctx.r10.u64 + ctx.r25.u64;
loc_82EAE7BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eae7bc
	if (!ctx.cr6.eq) goto loc_82EAE7BC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r30,r11,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r11.s64;
loc_82EAE7DC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82eae7f4
	if (ctx.cr6.eq) goto loc_82EAE7F4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82eae804
	if (!ctx.cr6.eq) goto loc_82EAE804;
loc_82EAE7F4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82eaf174
	if (ctx.cr0.eq) goto loc_82EAF174;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82eae7dc
	goto loc_82EAE7DC;
loc_82EAE804:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82cb1160
	ctx.lr = 0x82EAE814;
	sub_82CB1160(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82cb1160
	ctx.lr = 0x82EAE824;
	sub_82CB1160(ctx, base);
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x82eaf174
	if (ctx.cr6.lt) goto loc_82EAF174;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r31,15
	ctx.r8.s64 = ctx.r31.s64 + 15;
loc_82EAE838:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eae858
	if (!ctx.cr0.eq) goto loc_82EAE858;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eae838
	if (!ctx.cr6.eq) goto loc_82EAE838;
loc_82EAE858:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82eae894
	if (ctx.cr0.eq) goto loc_82EAE894;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r31,15
	ctx.r8.s64 = ctx.r31.s64 + 15;
loc_82EAE86C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eae88c
	if (!ctx.cr0.eq) goto loc_82EAE88C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82eae86c
	if (!ctx.cr6.eq) goto loc_82EAE86C;
loc_82EAE88C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eaf174
	if (!ctx.cr0.eq) goto loc_82EAF174;
loc_82EAE894:
	// addi r25,r31,16
	ctx.r25.s64 = ctx.r31.s64 + 16;
	// addi r24,r30,-16
	ctx.r24.s64 = ctx.r30.s64 + -16;
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// b 0x82eaea68
	goto loc_82EAEA68;
loc_82EAE8A4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EAE8AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eae8ac
	if (!ctx.cr6.eq) goto loc_82EAE8AC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82eaea30
	if (!ctx.cr6.gt) goto loc_82EAEA30;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EAE8D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eae8d8
	if (!ctx.cr6.eq) goto loc_82EAE8D8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// rotlwi. r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// beq 0x82eae928
	if (ctx.cr0.eq) goto loc_82EAE928;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EAE908:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eae928
	if (!ctx.cr0.eq) goto loc_82EAE928;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82eae908
	if (!ctx.cr6.eq) goto loc_82EAE908;
loc_82EAE928:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82eaea30
	if (!ctx.cr0.eq) goto loc_82EAEA30;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EAE938:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eae938
	if (!ctx.cr6.eq) goto loc_82EAE938;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r30,r10,r25
	ctx.r30.u64 = ctx.r10.u64 + ctx.r25.u64;
loc_82EAE960:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eae960
	if (!ctx.cr6.eq) goto loc_82EAE960;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r28,r11,r24
	ctx.r28.s64 = ctx.r24.s64 - ctx.r11.s64;
loc_82EAE980:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82eae998
	if (ctx.cr6.eq) goto loc_82EAE998;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82eae9a8
	if (!ctx.cr6.eq) goto loc_82EAE9A8;
loc_82EAE998:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82eaf174
	if (ctx.cr0.eq) goto loc_82EAF174;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82eae980
	goto loc_82EAE980;
loc_82EAE9A8:
	// cmpwi cr6,r28,256
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 256, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// blt cr6,0x82eae9b8
	if (ctx.cr6.lt) goto loc_82EAE9B8;
	// li r11,256
	ctx.r11.s64 = 256;
loc_82EAE9B8:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eae9dc
	if (ctx.cr6.eq) goto loc_82EAE9DC;
loc_82EAE9C4:
	// lbzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82eae9e0
	if (ctx.cr6.eq) goto loc_82EAE9E0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eae9c4
	if (ctx.cr6.lt) goto loc_82EAE9C4;
loc_82EAE9DC:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82EAE9E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eaf174
	if (ctx.cr6.eq) goto loc_82EAF174;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ead1c8
	ctx.lr = 0x82EAE9F8;
	sub_82EAD1C8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82cb81f0
	ctx.lr = 0x82EAEA0C;
	sub_82CB81F0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82eaf174
	if (!ctx.cr6.eq) goto loc_82EAF174;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// subf r10,r31,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r31.s64;
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// addi r24,r10,-1
	ctx.r24.s64 = ctx.r10.s64 + -1;
	// b 0x82eaea68
	goto loc_82EAEA68;
loc_82EAEA30:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82eaea54
	if (ctx.cr6.eq) goto loc_82EAEA54;
loc_82EAEA3C:
	// lbzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82eaea58
	if (ctx.cr6.eq) goto loc_82EAEA58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82eaea3c
	if (ctx.cr6.lt) goto loc_82EAEA3C;
loc_82EAEA54:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82EAEA58:
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// subf r11,r11,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r11.s64;
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
loc_82EAEA68:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bgt cr6,0x82eae6f4
	if (ctx.cr6.gt) goto loc_82EAE6F4;
	// b 0x82eaea7c
	goto loc_82EAEA7C;
loc_82EAEA74:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
loc_82EAEA7C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82eaf174
	if (ctx.cr6.eq) goto loc_82EAF174;
	// cmpwi cr6,r24,256
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 256, ctx.xer);
	// li r10,256
	ctx.r10.s64 = 256;
	// bgt cr6,0x82eaea94
	if (ctx.cr6.gt) goto loc_82EAEA94;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82EAEA94:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eaeab8
	if (ctx.cr6.eq) goto loc_82EAEAB8;
loc_82EAEAA0:
	// lbzx r9,r11,r25
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// beq cr6,0x82eaeb08
	if (ctx.cr6.eq) goto loc_82EAEB08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eaeaa0
	if (ctx.cr6.lt) goto loc_82EAEAA0;
loc_82EAEAB8:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82EAEABC:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// ble cr6,0x82eaf174
	if (!ctx.cr6.gt) goto loc_82EAF174;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ead1c8
	ctx.lr = 0x82EAEAD4;
	sub_82EAD1C8(ctx, base);
	// lbz r11,209(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 209);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,89
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 89, ctx.xer);
	// bne cr6,0x82eaeb24
	if (!ctx.cr6.eq) goto loc_82EAEB24;
	// lbz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82eaeb10
	if (!ctx.cr6.eq) goto loc_82EAEB10;
	// lbz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// b 0x82eaeb5c
	goto loc_82EAEB5C;
loc_82EAEB08:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82eaeabc
	goto loc_82EAEABC;
loc_82EAEB10:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x82eaf174
	if (!ctx.cr6.eq) goto loc_82EAF174;
	// lbz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// b 0x82eaeb5c
	goto loc_82EAEB5C;
loc_82EAEB24:
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bne cr6,0x82eaf174
	if (!ctx.cr6.eq) goto loc_82EAF174;
	// lbz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82eaeb4c
	if (!ctx.cr6.eq) goto loc_82EAEB4C;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// b 0x82eaeb58
	goto loc_82EAEB58;
loc_82EAEB4C:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x82eaf174
	if (!ctx.cr6.eq) goto loc_82EAF174;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_82EAEB58:
	// lbz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82EAEB5C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,210
	ctx.r3.s64 = ctx.r1.s64 + 210;
	// addi r31,r11,-3440
	ctx.r31.s64 = ctx.r11.s64 + -3440;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cb81f0
	ctx.lr = 0x82EAEB70;
	sub_82CB81F0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82eaf174
	if (!ctx.cr6.eq) goto loc_82EAF174;
	// lbz r11,210(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 210);
	// addi r10,r1,210
	ctx.r10.s64 = ctx.r1.s64 + 210;
	// b 0x82eaeb9c
	goto loc_82EAEB9C;
loc_82EAEB84:
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82eaeba4
	if (ctx.cr6.eq) goto loc_82EAEBA4;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82eaeba4
	if (ctx.cr6.eq) goto loc_82EAEBA4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
loc_82EAEB9C:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eaeb84
	if (!ctx.cr0.eq) goto loc_82EAEB84;
loc_82EAEBA4:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaf174
	if (ctx.cr0.eq) goto loc_82EAF174;
	// addi r11,r11,-43
	ctx.r11.s64 = ctx.r11.s64 + -43;
	// clrlwi. r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// beq 0x82eaebcc
	if (ctx.cr0.eq) goto loc_82EAEBCC;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82eaebd4
	goto loc_82EAEBD4;
loc_82EAEBCC:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82EAEBD4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaf174
	if (ctx.cr0.eq) goto loc_82EAF174;
	// cmpwi cr6,r11,89
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 89, ctx.xer);
	// beq cr6,0x82eaebf4
	if (ctx.cr6.eq) goto loc_82EAEBF4;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bne cr6,0x82eaf174
	if (!ctx.cr6.eq) goto loc_82EAF174;
loc_82EAEBF4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// bl 0x82cb81f0
	ctx.lr = 0x82EAEC00;
	sub_82CB81F0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82eaf174
	if (!ctx.cr6.eq) goto loc_82EAF174;
	// lis r9,6690
	ctx.r9.s64 = 438435840;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r8,r28,r25
	ctx.r8.u64 = ctx.r28.u64 + ctx.r25.u64;
	// ori r6,r9,43686
	ctx.r6.u64 = ctx.r9.u64 | 43686;
	// stw r29,52(r19)
	PPC_STORE_U32(ctx.r19.u32 + 52, ctx.r29.u32);
	// subf r7,r28,r24
	ctx.r7.s64 = ctx.r24.s64 - ctx.r28.s64;
	// stw r18,20(r19)
	PPC_STORE_U32(ctx.r19.u32 + 20, ctx.r18.u32);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r6.u32);
	// mullw. r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,12(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12, ctx.r11.u32);
	// stw r10,16(r19)
	PPC_STORE_U32(ctx.r19.u32 + 16, ctx.r10.u32);
	// addi r31,r8,1
	ctx.r31.s64 = ctx.r8.s64 + 1;
	// stw r9,48(r19)
	PPC_STORE_U32(ctx.r19.u32 + 48, ctx.r9.u32);
	// addi r24,r7,-1
	ctx.r24.s64 = ctx.r7.s64 + -1;
	// beq 0x82eaf174
	if (ctx.cr0.eq) goto loc_82EAF174;
	// stw r18,56(r19)
	PPC_STORE_U32(ctx.r19.u32 + 56, ctx.r18.u32);
	// mullw r3,r9,r10
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EAEC5C;
	sub_82299698(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r11.u32);
	// bne 0x82eaec74
	if (!ctx.cr0.eq) goto loc_82EAEC74;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eaf17c
	goto loc_82EAF17C;
loc_82EAEC74:
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// bne cr6,0x82eaec90
	if (!ctx.cr6.eq) goto loc_82EAEC90;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// beq cr6,0x82eaec98
	if (ctx.cr6.eq) goto loc_82EAEC98;
loc_82EAEC90:
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// b 0x82eaec9c
	goto loc_82EAEC9C;
loc_82EAEC98:
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
loc_82EAEC9C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// clrlwi. r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eaed34
	if (ctx.cr6.eq) goto loc_82EAED34;
	// beq 0x82eaecc0
	if (ctx.cr0.eq) goto loc_82EAECC0;
	// clrlwi. r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eaecc0
	if (!ctx.cr0.eq) goto loc_82EAECC0;
	// lwz r10,48(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82eaed0c
	goto loc_82EAED0C;
loc_82EAECC0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eaed14
	if (!ctx.cr6.eq) goto loc_82EAED14;
	// clrlwi. r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eaece4
	if (!ctx.cr0.eq) goto loc_82EAECE4;
	// lwz r10,48(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// li r4,-4
	ctx.r4.s64 = -4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82eaedac
	goto loc_82EAEDAC;
loc_82EAECE4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eaed14
	if (!ctx.cr6.eq) goto loc_82EAED14;
	// clrlwi. r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eaed14
	if (ctx.cr0.eq) goto loc_82EAED14;
	// lwz r9,48(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// li r4,-4
	ctx.r4.s64 = -4;
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// neg r10,r9
	ctx.r10.s64 = -ctx.r9.s64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_82EAED0C:
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82eaedc0
	goto loc_82EAEDC0;
loc_82EAED14:
	// lwz r9,48(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82eaedc0
	goto loc_82EAEDC0;
loc_82EAED34:
	// beq 0x82eaed5c
	if (ctx.cr0.eq) goto loc_82EAED5C;
	// clrlwi. r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82eaed5c
	if (ctx.cr0.eq) goto loc_82EAED5C;
	// lwz r9,48(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// neg r5,r9
	ctx.r5.s64 = -ctx.r9.s64;
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r4,r5,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82eaedbc
	goto loc_82EAEDBC;
loc_82EAED5C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eaedb4
	if (!ctx.cr6.eq) goto loc_82EAEDB4;
	// clrlwi. r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82eaed8c
	if (ctx.cr0.eq) goto loc_82EAED8C;
	// lwz r6,48(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// li r10,-4
	ctx.r10.s64 = -4;
	// mullw r9,r6,r8
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// neg r9,r6
	ctx.r9.s64 = -ctx.r6.s64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82eaedc0
	goto loc_82EAEDC0;
loc_82EAED8C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eaedb4
	if (!ctx.cr6.eq) goto loc_82EAEDB4;
	// clrlwi. r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82eaedb4
	if (!ctx.cr0.eq) goto loc_82EAEDB4;
	// lwz r9,48(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// li r10,-4
	ctx.r10.s64 = -4;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
loc_82EAEDAC:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// b 0x82eaedc0
	goto loc_82EAEDC0;
loc_82EAEDB4:
	// lwz r9,48(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
loc_82EAEDBC:
	// li r10,4
	ctx.r10.s64 = 4;
loc_82EAEDC0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82eaf0b8
	if (!ctx.cr6.gt) goto loc_82EAF0B8;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82EAEDD8:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// blt cr6,0x82eaf164
	if (ctx.cr6.lt) goto loc_82EAF164;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r24,r24,-4
	ctx.r24.s64 = ctx.r24.s64 + -4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lbz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// beq cr6,0x82eaef88
	if (ctx.cr6.eq) goto loc_82EAEF88;
	// lbz r9,85(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x82eaee18
	if (!ctx.cr6.eq) goto loc_82EAEE18;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x82eaef88
	if (ctx.cr6.lt) goto loc_82EAEF88;
loc_82EAEE18:
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f11,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// lfd f0,152(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f12,200(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// std r10,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r10.u64);
	// lfd f13,184(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// frsp f11,f10
	ctx.f11.f64 = double(float(ctx.f10.f64));
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// ble cr6,0x82eaf0a0
	if (!ctx.cr6.gt) goto loc_82EAF0A0;
loc_82EAEE80:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// blt cr6,0x82eaf164
	if (ctx.cr6.lt) goto loc_82EAF164;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r24,r24,-4
	ctx.r24.s64 = ctx.r24.s64 + -4;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lbz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r7,86(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r6,85(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82eaef08
	if (!ctx.cr6.eq) goto loc_82EAEF08;
	// clrlwi r3,r6,24
	ctx.r3.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82eaef08
	if (!ctx.cr6.eq) goto loc_82EAEF08;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82eaef08
	if (!ctx.cr6.eq) goto loc_82EAEF08;
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x82eaf164
	if (ctx.cr6.gt) goto loc_82EAF164;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82eaef00
	if (!ctx.cr6.gt) goto loc_82EAEF00;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EAEEE4:
	// stfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bne 0x82eaeee4
	if (!ctx.cr0.eq) goto loc_82EAEEE4;
loc_82EAEF00:
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// b 0x82eaef7c
	goto loc_82EAEF7C;
loc_82EAEF08:
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// lbz r7,87(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r8,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f11,144(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r7,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r7.u64);
	// lfd f13,176(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82EAEF7C:
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82eaee80
	if (ctx.cr6.lt) goto loc_82EAEE80;
	// b 0x82eaf0a0
	goto loc_82EAF0A0;
loc_82EAEF88:
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// rlwinm r11,r10,8,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x82eaf164
	if (!ctx.cr6.eq) goto loc_82EAF164;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82EAEFA4:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82eaf090
	if (!ctx.cr6.gt) goto loc_82EAF090;
loc_82EAEFB4:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// blt cr6,0x82eaf164
	if (ctx.cr6.lt) goto loc_82EAF164;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// ble cr6,0x82eaf020
	if (!ctx.cr6.gt) goto loc_82EAF020;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x82eaf164
	if (ctx.cr6.gt) goto loc_82EAF164;
	// lbz r9,1(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r9,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// beq cr6,0x82eaf014
	if (ctx.cr6.eq) goto loc_82EAF014;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82EAEFFC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eaeffc
	if (ctx.cr6.lt) goto loc_82EAEFFC;
loc_82EAF014:
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r24,r24,-2
	ctx.r24.s64 = ctx.r24.s64 + -2;
	// b 0x82eaf088
	goto loc_82EAF088;
loc_82EAF020:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82eaf164
	if (ctx.cr6.lt) goto loc_82EAF164;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x82eaf164
	if (ctx.cr6.gt) goto loc_82EAF164;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eaf078
	if (ctx.cr6.eq) goto loc_82EAF078;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82EAF048:
	// add r27,r9,r5
	ctx.r27.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lbz r27,1(r27)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// std r27,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r27.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// blt cr6,0x82eaf048
	if (ctx.cr6.lt) goto loc_82EAF048;
loc_82EAF078:
	// subf r9,r11,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r11.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r24,r9,-1
	ctx.r24.s64 = ctx.r9.s64 + -1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
loc_82EAF088:
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82eaefb4
	if (ctx.cr6.lt) goto loc_82EAEFB4;
loc_82EAF090:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x82eaefa4
	if (ctx.cr6.lt) goto loc_82EAEFA4;
loc_82EAF0A0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82eaedd8
	if (ctx.cr6.lt) goto loc_82EAEDD8;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82EAF0B8:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// mullw. r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eaf15c
	if (ctx.cr0.eq) goto loc_82EAF15C;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// fdivs f31,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f29.f64 / ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f30.f64 = double(temp.f32);
loc_82EAF0D4:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lfs f0,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r30,r11,-136
	ctx.r30.s64 = ctx.r11.s64 + -136;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb5328
	ctx.lr = 0x82EAF0F8;
	sub_82CB5328(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,-8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// bl 0x82cb5328
	ctx.lr = 0x82EAF114;
	sub_82CB5328(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,-4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// bl 0x82cb5328
	ctx.lr = 0x82EAF130;
	sub_82CB5328(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f29,4(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eaf0d4
	if (ctx.cr6.lt) goto loc_82EAF0D4;
loc_82EAF15C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eaf17c
	goto loc_82EAF17C;
loc_82EAF164:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,4(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// bl 0x822996c0
	ctx.lr = 0x82EAF170;
	sub_822996C0(ctx, base);
	// stw r29,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r29.u32);
loc_82EAF174:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EAF17C:
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAF190"))) PPC_WEAK_FUNC(sub_82EAF190);
PPC_FUNC_IMPL(__imp__sub_82EAF190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EAF198;
	__savegprlr_14(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// bge cr6,0x82eaf1bc
	if (!ctx.cr6.lt) goto loc_82EAF1BC;
loc_82EAF1B0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eafd3c
	goto loc_82EAFD3C;
loc_82EAF1BC:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r31,r1,176
	ctx.r31.s64 = ctx.r1.s64 + 176;
	// bl 0x82cb1160
	ctx.lr = 0x82EAF1D0;
	sub_82CB1160(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ead8e8
	ctx.lr = 0x82EAF1DC;
	sub_82EAD8E8(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eaf1b0
	if (ctx.cr6.lt) goto loc_82EAF1B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82eaf23c
	if (!ctx.cr6.eq) goto loc_82EAF23C;
	// lha r11,180(r1)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 180));
	// li r10,12
	ctx.r10.s64 = 12;
	// lha r9,182(r1)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 182));
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// lhz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 184);
	// lhz r7,186(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 186);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// sth r8,140(r1)
	PPC_STORE_U16(ctx.r1.u32 + 140, ctx.r8.u16);
	// sth r7,142(r1)
	PPC_STORE_U16(ctx.r1.u32 + 142, ctx.r7.u16);
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// b 0x82eaf244
	goto loc_82EAF244;
loc_82EAF23C:
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// blt cr6,0x82eaf1b0
	if (ctx.cr6.lt) goto loc_82EAF1B0;
loc_82EAF244:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r15,8(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bgt cr6,0x82eaf260
	if (ctx.cr6.gt) goto loc_82EAF260;
	// neg r23,r15
	ctx.r23.s64 = -ctx.r15.s64;
loc_82EAF260:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r14,1
	ctx.r14.s64 = 1;
	// lhz r6,14(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r9,r10,-12
	ctx.r9.s64 = ctx.r10.s64 + -12;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// bgt cr6,0x82eaf29c
	if (ctx.cr6.gt) goto loc_82EAF29C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eaf29c
	if (!ctx.cr6.eq) goto loc_82EAF29C;
	// slw r11,r14,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r6.u8 & 0x3F));
loc_82EAF29C:
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x82eaf1b0
	if (ctx.cr6.gt) goto loc_82EAF1B0;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82eaf1b0
	if (!ctx.cr6.eq) goto loc_82EAF1B0;
	// lwz r19,16(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 3, ctx.xer);
	// blt cr6,0x82eaf56c
	if (ctx.cr6.lt) goto loc_82EAF56C;
	// bne cr6,0x82eaf1b0
	if (!ctx.cr6.eq) goto loc_82EAF1B0;
	// cmplwi cr6,r10,52
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 52, ctx.xer);
	// blt cr6,0x82eaf1b0
	if (ctx.cr6.lt) goto loc_82EAF1B0;
	// lwz r16,48(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r10,56
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 56, ctx.xer);
	// lwz r17,44(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r18,40(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// blt cr6,0x82eaf2ec
	if (ctx.cr6.lt) goto loc_82EAF2EC;
	// lwz r21,52(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x82eaf2f0
	goto loc_82EAF2F0;
loc_82EAF2EC:
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
loc_82EAF2F0:
	// lis r26,6690
	ctx.r26.s64 = 438435840;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// ori r26,r26,43686
	ctx.r26.u64 = ctx.r26.u64 | 43686;
	// beq cr6,0x82eaf484
	if (ctx.cr6.eq) goto loc_82EAF484;
	// cmpwi cr6,r6,24
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 24, ctx.xer);
	// beq cr6,0x82eaf454
	if (ctx.cr6.eq) goto loc_82EAF454;
	// cmpwi cr6,r6,32
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32, ctx.xer);
	// bne cr6,0x82eaf1b0
	if (!ctx.cr6.eq) goto loc_82EAF1B0;
	// cmplwi cr6,r16,255
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 255, ctx.xer);
	// bne cr6,0x82eaf348
	if (!ctx.cr6.eq) goto loc_82EAF348;
	// cmplwi cr6,r17,65280
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 65280, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82eaf478
	if (ctx.cr6.eq) goto loc_82EAF478;
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,6184
	ctx.r26.s64 = 405274624;
	// b 0x82eaf47c
	goto loc_82EAF47C;
loc_82EAF348:
	// lis r10,16368
	ctx.r10.s64 = 1072693248;
	// cmplw cr6,r16,r10
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eaf380
	if (!ctx.cr6.eq) goto loc_82EAF380;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r11,r11,64512
	ctx.r11.u64 = ctx.r11.u64 | 64512;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r18,1023
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 1023, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,6688
	ctx.r26.s64 = 438304768;
	// b 0x82eaf420
	goto loc_82EAF420;
loc_82EAF380:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf3c0
	if (!ctx.cr6.eq) goto loc_82EAF3C0;
	// cmplwi cr6,r17,65280
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 65280, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r18,255
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 255, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf3b0
	if (!ctx.cr6.eq) goto loc_82EAF3B0;
	// lis r26,6688
	ctx.r26.s64 = 438304768;
	// b 0x82eaf47c
	goto loc_82EAF47C;
loc_82EAF3B0:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,10784
	ctx.r26.s64 = 706740224;
	// b 0x82eaf47c
	goto loc_82EAF47C;
loc_82EAF3C0:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x82eaf3f0
	if (!ctx.cr6.eq) goto loc_82EAF3F0;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r18,65535
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 65535, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,11552
	ctx.r26.s64 = 757071872;
	// ori r26,r26,153
	ctx.r26.u64 = ctx.r26.u64 | 153;
	// b 0x82eaf5b8
	goto loc_82EAF5B8;
loc_82EAF3F0:
	// cmplwi cr6,r16,1023
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 1023, ctx.xer);
	// bne cr6,0x82eaf428
	if (!ctx.cr6.eq) goto loc_82EAF428;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r11,r11,64512
	ctx.r11.u64 = ctx.r11.u64 | 64512;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplw cr6,r18,r10
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,6184
	ctx.r26.s64 = 405274624;
loc_82EAF420:
	// ori r26,r26,182
	ctx.r26.u64 = ctx.r26.u64 | 182;
	// b 0x82eaf5b8
	goto loc_82EAF5B8;
loc_82EAF428:
	// cmplwi cr6,r16,65280
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 65280, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82eaf478
	goto loc_82EAF478;
loc_82EAF454:
	// cmplwi cr6,r16,255
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 255, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r17,65280
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 65280, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
loc_82EAF478:
	// lis r26,10280
	ctx.r26.s64 = 673710080;
loc_82EAF47C:
	// ori r26,r26,134
	ctx.r26.u64 = ctx.r26.u64 | 134;
	// b 0x82eaf5b8
	goto loc_82EAF5B8;
loc_82EAF484:
	// cmplwi cr6,r16,255
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 255, ctx.xer);
	// bne cr6,0x82eaf4b0
	if (!ctx.cr6.eq) goto loc_82EAF4B0;
	// cmplwi cr6,r17,255
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 255, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r18,255
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 255, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r21,65280
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 65280, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,2048
	ctx.r26.s64 = 134217728;
	// ori r26,r26,74
	ctx.r26.u64 = ctx.r26.u64 | 74;
	// b 0x82eaf5b8
	goto loc_82EAF5B8;
loc_82EAF4B0:
	// cmplwi cr6,r16,31
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 31, ctx.xer);
	// bne cr6,0x82eaf504
	if (!ctx.cr6.eq) goto loc_82EAF504;
	// cmplwi cr6,r17,2016
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 2016, ctx.xer);
	// bne cr6,0x82eaf4dc
	if (!ctx.cr6.eq) goto loc_82EAF4DC;
	// cmplwi cr6,r18,63488
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 63488, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,10280
	ctx.r26.s64 = 673710080;
	// ori r26,r26,68
	ctx.r26.u64 = ctx.r26.u64 | 68;
	// b 0x82eaf5b8
	goto loc_82EAF5B8;
loc_82EAF4DC:
	// cmplwi cr6,r17,992
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 992, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r18,31744
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 31744, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82eaf5b0
	if (ctx.cr6.eq) goto loc_82EAF5B0;
	// cmplwi cr6,r21,32768
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 32768, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,6184
	ctx.r26.s64 = 405274624;
	// b 0x82eaf5b4
	goto loc_82EAF5B4;
loc_82EAF504:
	// cmplwi cr6,r16,15
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 15, ctx.xer);
	// bne cr6,0x82eaf540
	if (!ctx.cr6.eq) goto loc_82EAF540;
	// cmplwi cr6,r17,240
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 240, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r18,3840
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 3840, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r21,61440
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 61440, ctx.xer);
	// bne cr6,0x82eaf52c
	if (!ctx.cr6.eq) goto loc_82EAF52C;
	// lis r26,6184
	ctx.r26.s64 = 405274624;
	// b 0x82eaf538
	goto loc_82EAF538;
loc_82EAF52C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,10280
	ctx.r26.s64 = 673710080;
loc_82EAF538:
	// ori r26,r26,79
	ctx.r26.u64 = ctx.r26.u64 | 79;
	// b 0x82eaf5b8
	goto loc_82EAF5B8;
loc_82EAF540:
	// cmplwi cr6,r16,65535
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 65535, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r17,65535
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 65535, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r18,65535
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 65535, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82eaf5b8
	if (!ctx.cr6.eq) goto loc_82EAF5B8;
	// lis r26,10240
	ctx.r26.s64 = 671088640;
	// ori r26,r26,88
	ctx.r26.u64 = ctx.r26.u64 | 88;
	// b 0x82eaf5b8
	goto loc_82EAF5B8;
loc_82EAF56C:
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// beq cr6,0x82eaf5a0
	if (ctx.cr6.eq) goto loc_82EAF5A0;
	// cmpwi cr6,r6,24
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 24, ctx.xer);
	// beq cr6,0x82eaf584
	if (ctx.cr6.eq) goto loc_82EAF584;
	// cmpwi cr6,r6,32
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32, ctx.xer);
	// bne cr6,0x82eaf1b0
	if (!ctx.cr6.eq) goto loc_82EAF1B0;
loc_82EAF584:
	// lis r26,10280
	ctx.r26.s64 = 673710080;
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r18,80(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r26,r26,134
	ctx.r26.u64 = ctx.r26.u64 | 134;
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82eaf5b8
	goto loc_82EAF5B8;
loc_82EAF5A0:
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r18,80(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EAF5B0:
	// lis r26,10280
	ctx.r26.s64 = 673710080;
loc_82EAF5B4:
	// ori r26,r26,67
	ctx.r26.u64 = ctx.r26.u64 | 67;
loc_82EAF5B8:
	// rlwinm r9,r26,0,26,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r9,-449
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -449, ctx.xer);
	// beq cr6,0x82eaf1b0
	if (ctx.cr6.eq) goto loc_82EAF1B0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82eaf604
	if (ctx.cr6.eq) goto loc_82EAF604;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x82eaf5f8
	if (ctx.cr6.eq) goto loc_82EAF5F8;
	// cmpwi cr6,r6,24
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 24, ctx.xer);
	// beq cr6,0x82eaf5ec
	if (ctx.cr6.eq) goto loc_82EAF5EC;
	// rlwinm r11,r6,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r29,r11,r7
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82eaf610
	goto loc_82EAF610;
loc_82EAF5EC:
	// rlwinm r29,r7,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r7,3
	ctx.r11.s64 = ctx.r7.s64 * 3;
	// b 0x82eaf610
	goto loc_82EAF610;
loc_82EAF5F8:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x82eaf60c
	goto loc_82EAF60C;
loc_82EAF604:
	// addi r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_82EAF60C:
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
loc_82EAF610:
	// lis r10,6690
	ctx.r10.s64 = 438435840;
	// ori r28,r10,43558
	ctx.r28.u64 = ctx.r10.u64 | 43558;
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82eaf624
	if (!ctx.cr6.eq) goto loc_82EAF624;
	// rlwinm r29,r7,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
loc_82EAF624:
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// rlwinm r24,r10,0,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// beq cr6,0x82eaf63c
	if (ctx.cr6.eq) goto loc_82EAF63C;
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 3, ctx.xer);
	// bne cr6,0x82eaf654
	if (!ctx.cr6.eq) goto loc_82EAF654;
loc_82EAF63C:
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// mullw r10,r10,r24
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x82eaf1b0
	if (ctx.cr6.gt) goto loc_82EAF1B0;
loc_82EAF654:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82eaf6cc
	if (!ctx.cr6.eq) goto loc_82EAF6CC;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82eaf6cc
	if (!ctx.cr6.eq) goto loc_82EAF6CC;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82eaf6cc
	if (ctx.cr6.eq) goto loc_82EAF6CC;
	// add r9,r30,r20
	ctx.r9.u64 = ctx.r30.u64 + ctx.r20.u64;
loc_82EAF67C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82eaf6bc
	if (ctx.cr6.eq) goto loc_82EAF6BC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82EAF68C:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r4,r4,0,0,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF000000;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82eaf6ac
	if (!ctx.cr0.eq) goto loc_82EAF6AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82eaf68c
	if (ctx.cr6.lt) goto loc_82EAF68C;
	// b 0x82eaf6b4
	goto loc_82EAF6B4;
loc_82EAF6AC:
	// lis r26,6184
	ctx.r26.s64 = 405274624;
	// ori r26,r26,134
	ctx.r26.u64 = ctx.r26.u64 | 134;
loc_82EAF6B4:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82eaf6cc
	if (ctx.cr6.lt) goto loc_82EAF6CC;
loc_82EAF6BC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// cmplw cr6,r8,r23
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82eaf67c
	if (ctx.cr6.lt) goto loc_82EAF67C;
loc_82EAF6CC:
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// lwz r10,64(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r7,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r7.u32);
	// stw r23,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r23.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r5,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r5.u32);
	// stw r11,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
	// stw r14,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r14.u32);
	// beq cr6,0x82eafd38
	if (ctx.cr6.eq) goto loc_82EAFD38;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82eaf708
	if (ctx.cr6.eq) goto loc_82EAF708;
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 3, ctx.xer);
	// bne cr6,0x82eaf73c
	if (!ctx.cr6.eq) goto loc_82EAF73C;
loc_82EAF708:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bge cr6,0x82eaf73c
	if (!ctx.cr6.lt) goto loc_82EAF73C;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// blt cr6,0x82eaf73c
	if (ctx.cr6.lt) goto loc_82EAF73C;
	// cmplwi cr6,r6,24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 24, ctx.xer);
	// beq cr6,0x82eaf73c
	if (ctx.cr6.eq) goto loc_82EAF73C;
	// rlwinm r10,r26,0,26,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82eaf73c
	if (ctx.cr6.eq) goto loc_82EAF73C;
	// add r11,r30,r20
	ctx.r11.u64 = ctx.r30.u64 + ctx.r20.u64;
	// stw r5,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r5.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// b 0x82eafd38
	goto loc_82EAFD38;
loc_82EAF73C:
	// stw r14,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r14.u32);
	// mullw r3,r11,r23
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EAF74C;
	sub_82299698(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r22,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r22.u32);
	// bne 0x82eaf764
	if (!ctx.cr0.eq) goto loc_82EAF764;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eafd3c
	goto loc_82EAFD3C;
loc_82EAF764:
	// add r30,r30,r20
	ctx.r30.u64 = ctx.r30.u64 + ctx.r20.u64;
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// add r25,r20,r25
	ctx.r25.u64 = ctx.r20.u64 + ctx.r25.u64;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bge cr6,0x82eaf788
	if (!ctx.cr6.lt) goto loc_82EAF788;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// b 0x82eaf798
	goto loc_82EAF798;
loc_82EAF788:
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// neg r15,r11
	ctx.r15.s64 = -ctx.r11.s64;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r31,r10,r22
	ctx.r31.u64 = ctx.r10.u64 + ctx.r22.u64;
loc_82EAF798:
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// add r23,r11,r22
	ctx.r23.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmplwi cr6,r19,2
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 2, ctx.xer);
	// bne cr6,0x82eaf920
	if (!ctx.cr6.eq) goto loc_82EAF920;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eafd38
	if (ctx.cr6.lt) goto loc_82EAFD38;
loc_82EAF7B4:
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82eafd38
	if (!ctx.cr6.lt) goto loc_82EAFD38;
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x82eaf1b0
	if (ctx.cr6.lt) goto loc_82EAF1B0;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82eaf1b0
	if (!ctx.cr6.lt) goto loc_82EAF1B0;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82eaf8bc
	if (!ctx.cr0.eq) goto loc_82EAF8BC;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82eaf8b0
	if (ctx.cr6.lt) goto loc_82EAF8B0;
	// beq cr6,0x82eaf8a8
	if (ctx.cr6.eq) goto loc_82EAF8A8;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82eaf884
	if (ctx.cr6.lt) goto loc_82EAF884;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eaf1b0
	if (ctx.cr6.lt) goto loc_82EAF1B0;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x82eaf1b0
	if (ctx.cr6.gt) goto loc_82EAF1B0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eaf828
	if (ctx.cr6.eq) goto loc_82EAF828;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82eaf1b0
	if (!ctx.cr6.lt) goto loc_82EAF1B0;
loc_82EAF828:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82eaf868
	if (!ctx.cr6.gt) goto loc_82EAF868;
loc_82EAF834:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// beq 0x82eaf850
	if (ctx.cr0.eq) goto loc_82EAF850;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// b 0x82eaf854
	goto loc_82EAF854;
loc_82EAF850:
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
loc_82EAF854:
	// stbx r10,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82eaf834
	if (ctx.cr6.lt) goto loc_82EAF834;
loc_82EAF868:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82eaf910
	goto loc_82EAF910;
loc_82EAF884:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82eaf1b0
	if (!ctx.cr6.lt) goto loc_82EAF1B0;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r11,r11,r15
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82eaf90c
	goto loc_82EAF90C;
loc_82EAF8A8:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// b 0x82eaf910
	goto loc_82EAF910;
loc_82EAF8B0:
	// add r27,r27,r15
	ctx.r27.u64 = ctx.r27.u64 + ctx.r15.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x82eaf910
	goto loc_82EAF910;
loc_82EAF8BC:
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eaf1b0
	if (ctx.cr6.lt) goto loc_82EAF1B0;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x82eaf1b0
	if (ctx.cr6.gt) goto loc_82EAF1B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82eaf908
	if (!ctx.cr6.gt) goto loc_82EAF908;
loc_82EAF8DC:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// beq 0x82eaf8f0
	if (ctx.cr0.eq) goto loc_82EAF8F0;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// b 0x82eaf8f4
	goto loc_82EAF8F4;
loc_82EAF8F0:
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
loc_82EAF8F4:
	// stbx r10,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82eaf8dc
	if (ctx.cr6.lt) goto loc_82EAF8DC;
loc_82EAF908:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
loc_82EAF90C:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82EAF910:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r27,r22
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82eaf7b4
	if (!ctx.cr6.lt) goto loc_82EAF7B4;
	// b 0x82eafd38
	goto loc_82EAFD38;
loc_82EAF920:
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// bne cr6,0x82eafa28
	if (!ctx.cr6.eq) goto loc_82EAFA28;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eafd38
	if (ctx.cr6.lt) goto loc_82EAFD38;
loc_82EAF930:
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82eafd38
	if (!ctx.cr6.lt) goto loc_82EAFD38;
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x82eaf1b0
	if (ctx.cr6.lt) goto loc_82EAF1B0;
	// addi r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82eaf1b0
	if (!ctx.cr6.lt) goto loc_82EAF1B0;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82eaf9f0
	if (!ctx.cr0.eq) goto loc_82EAF9F0;
	// lbz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x82eaf9e4
	if (ctx.cr6.lt) goto loc_82EAF9E4;
	// beq cr6,0x82eaf9dc
	if (ctx.cr6.eq) goto loc_82EAF9DC;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x82eaf9b8
	if (ctx.cr6.lt) goto loc_82EAF9B8;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eaf1b0
	if (ctx.cr6.lt) goto loc_82EAF1B0;
	// add r11,r5,r31
	ctx.r11.u64 = ctx.r5.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x82eaf1b0
	if (ctx.cr6.gt) goto loc_82EAF1B0;
	// add r11,r5,r30
	ctx.r11.u64 = ctx.r5.u64 + ctx.r30.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x82eaf1b0
	if (ctx.cr6.gt) goto loc_82EAF1B0;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EAF9A0;
	sub_82CB1160(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82eafa18
	goto loc_82EAFA18;
loc_82EAF9B8:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82eaf1b0
	if (!ctx.cr6.lt) goto loc_82EAF1B0;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r11,r11,r15
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82eafa14
	goto loc_82EAFA14;
loc_82EAF9DC:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// b 0x82eafa18
	goto loc_82EAFA18;
loc_82EAF9E4:
	// add r27,r27,r15
	ctx.r27.u64 = ctx.r27.u64 + ctx.r15.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x82eafa18
	goto loc_82EAFA18;
loc_82EAF9F0:
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eaf1b0
	if (ctx.cr6.lt) goto loc_82EAF1B0;
	// add r11,r5,r31
	ctx.r11.u64 = ctx.r5.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x82eaf1b0
	if (ctx.cr6.gt) goto loc_82EAF1B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x82cb16f0
	ctx.lr = 0x82EAFA10;
	sub_82CB16F0(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
loc_82EAFA14:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82EAFA18:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r27,r22
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82eaf930
	if (!ctx.cr6.lt) goto loc_82EAF930;
	// b 0x82eafd38
	goto loc_82EAFD38;
loc_82EAFA28:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x82eafa94
	if (!ctx.cr6.eq) goto loc_82EAFA94;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eafd38
	if (ctx.cr6.lt) goto loc_82EAFD38;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EAFA40:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82eafd38
	if (!ctx.cr6.lt) goto loc_82EAFD38;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eafa80
	if (ctx.cr6.eq) goto loc_82EAFA80;
loc_82EAFA54:
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	// subfic r8,r8,7
	ctx.xer.ca = ctx.r8.u32 <= 7;
	ctx.r8.s64 = 7 - ctx.r8.s64;
	// lbzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stbx r9,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eafa54
	if (ctx.cr6.lt) goto loc_82EAFA54;
loc_82EAFA80:
	// add r31,r31,r15
	ctx.r31.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82eafa40
	if (!ctx.cr6.lt) goto loc_82EAFA40;
	// b 0x82eafd38
	goto loc_82EAFD38;
loc_82EAFA94:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bne cr6,0x82eafafc
	if (!ctx.cr6.eq) goto loc_82EAFAFC;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eafd38
	if (ctx.cr6.lt) goto loc_82EAFD38;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EAFAA8:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82eafd38
	if (!ctx.cr6.lt) goto loc_82EAFD38;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82eafae8
	if (ctx.cr6.eq) goto loc_82EAFAE8;
loc_82EAFABC:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// beq 0x82eafad4
	if (ctx.cr0.eq) goto loc_82EAFAD4;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// b 0x82eafad8
	goto loc_82EAFAD8;
loc_82EAFAD4:
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
loc_82EAFAD8:
	// stbx r10,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eafabc
	if (ctx.cr6.lt) goto loc_82EAFABC;
loc_82EAFAE8:
	// add r31,r31,r15
	ctx.r31.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82eafaa8
	if (!ctx.cr6.lt) goto loc_82EAFAA8;
	// b 0x82eafd38
	goto loc_82EAFD38;
loc_82EAFAFC:
	// cmplwi cr6,r4,24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24, ctx.xer);
	// bne cr6,0x82eafb70
	if (!ctx.cr6.eq) goto loc_82EAFB70;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eafd38
	if (ctx.cr6.lt) goto loc_82EAFD38;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EAFB10:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82eafd38
	if (!ctx.cr6.lt) goto loc_82EAFD38;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82eafb5c
	if (ctx.cr6.eq) goto loc_82EAFB5C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82EAFB2C:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r6,255
	ctx.r6.s64 = 255;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// stb r6,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82eafb2c
	if (!ctx.cr0.eq) goto loc_82EAFB2C;
loc_82EAFB5C:
	// add r31,r31,r15
	ctx.r31.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82eafb10
	if (!ctx.cr6.lt) goto loc_82EAFB10;
	// b 0x82eafd38
	goto loc_82EAFD38;
loc_82EAFB70:
	// rlwinm r11,r26,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82eafcac
	if (!ctx.cr6.eq) goto loc_82EAFCAC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// lfs f13,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
loc_82EAFB98:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r7,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82eafc00
	if (ctx.cr6.eq) goto loc_82EAFC00;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eafbe0
	if (!ctx.cr0.eq) goto loc_82EAFBE0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EAFBC0:
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82eafbc0
	if (ctx.cr0.eq) goto loc_82EAFBC0;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
loc_82EAFBE0:
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
loc_82EAFC00:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82eafb98
	if (ctx.cr6.lt) goto loc_82EAFB98;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x82eafc44
	if (!ctx.cr6.eq) goto loc_82EAFC44;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x82eafc44
	if (!ctx.cr6.eq) goto loc_82EAFC44;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x82eafc44
	if (!ctx.cr6.eq) goto loc_82EAFC44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r14,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r14.u32);
	// stw r14,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r14.u32);
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_82EAFC44:
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eafd38
	if (ctx.cr6.lt) goto loc_82EAFD38;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EAFC54:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82eafd38
	if (!ctx.cr6.lt) goto loc_82EAFD38;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82eafd28
	if (ctx.cr6.eq) goto loc_82EAFD28;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_82EAFC70:
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// beq cr6,0x82eafcb8
	if (ctx.cr6.eq) goto loc_82EAFCB8;
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// bne cr6,0x82eafcc0
	if (!ctx.cr6.eq) goto loc_82EAFCC0;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82eafcc0
	goto loc_82EAFCC0;
loc_82EAFC8C:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82eafd38
	if (!ctx.cr6.lt) goto loc_82EAFD38;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EAFCA4;
	sub_82CB1160(ctx, base);
	// add r31,r31,r15
	ctx.r31.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
loc_82EAFCAC:
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82eafc8c
	if (!ctx.cr6.lt) goto loc_82EAFC8C;
	// b 0x82eafd38
	goto loc_82EAFD38;
loc_82EAFCB8:
	// lhz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
loc_82EAFCC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EAFCC4:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eafd08
	if (ctx.cr6.eq) goto loc_82EAFD08;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lfsx f0,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// srw r3,r6,r3
	ctx.r3.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r3.u8 & 0x3F));
	// and r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 & ctx.r10.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x82eafd0c
	goto loc_82EAFD0C;
loc_82EAFD08:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82EAFD0C:
	// stfsx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82eafcc4
	if (ctx.cr6.lt) goto loc_82EAFCC4;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bne 0x82eafc70
	if (!ctx.cr0.eq) goto loc_82EAFC70;
loc_82EAFD28:
	// add r31,r31,r15
	ctx.r31.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82eafc54
	if (!ctx.cr6.lt) goto loc_82EAFC54;
loc_82EAFD38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAFD3C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAFD44"))) PPC_WEAK_FUNC(sub_82EAFD44);
PPC_FUNC_IMPL(__imp__sub_82EAFD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAFD48"))) PPC_WEAK_FUNC(sub_82EAFD48);
PPC_FUNC_IMPL(__imp__sub_82EAFD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82EAFD50;
	__savegprlr_23(ctx, base);
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// li r5,108
	ctx.r5.s64 = 108;
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r31,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82EAFD88;
	sub_82CB16F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,10240
	ctx.r10.s64 = 671088640;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82eaff38
	if (ctx.cr6.gt) goto loc_82EAFF38;
	// beq cr6,0x82eafef0
	if (ctx.cr6.eq) goto loc_82EAFEF0;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// ori r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 | 10;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eafec4
	if (ctx.cr6.eq) goto loc_82EAFEC4;
	// addis r11,r11,-6184
	ctx.r11.s64 = ctx.r11.s64 + -405274624;
	// addic. r11,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eafea0
	if (ctx.cr0.eq) goto loc_82EAFEA0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82eafe90
	if (ctx.cr6.eq) goto loc_82EAFE90;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x82eafe5c
	if (ctx.cr6.eq) goto loc_82EAFE5C;
	// cmplwi cr6,r11,51
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51, ctx.xer);
	// beq cr6,0x82eafe48
	if (ctx.cr6.eq) goto loc_82EAFE48;
	// addis r11,r11,-504
	ctx.r11.s64 = ctx.r11.s64 + -33030144;
	// addic. r11,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eafe24
	if (ctx.cr0.eq) goto loc_82EAFE24;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82eaff8c
	if (!ctx.cr6.eq) goto loc_82EAFF8C;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,1023
	ctx.r9.s64 = 1023;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r10,16368
	ctx.r10.s64 = 1072693248;
loc_82EAFDFC:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r11,r11,64512
	ctx.r11.u64 = ctx.r11.u64 | 64512;
loc_82EAFE0C:
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// b 0x82eb0068
	goto loc_82EB0068;
loc_82EAFE24:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,255
	ctx.r9.s64 = 255;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 65280;
	// lis r9,-256
	ctx.r9.s64 = -16777216;
	// b 0x82eafe0c
	goto loc_82EAFE0C;
loc_82EAFE48:
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r9,16368
	ctx.r9.s64 = 1072693248;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r10,1023
	ctx.r10.s64 = 1023;
	// b 0x82eafdfc
	goto loc_82EAFDFC;
loc_82EAFE5C:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,3840
	ctx.r9.s64 = 3840;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// li r8,240
	ctx.r8.s64 = 240;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r9,r11,61440
	ctx.r9.u64 = ctx.r11.u64 | 61440;
loc_82EAFE7C:
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// b 0x82eb0064
	goto loc_82EB0064;
loc_82EAFE90:
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82eb0068
	goto loc_82EB0068;
loc_82EAFEA0:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,31744
	ctx.r9.s64 = 31744;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// li r8,992
	ctx.r8.s64 = 992;
	// li r10,31
	ctx.r10.s64 = 31;
	// ori r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 32768;
	// b 0x82eafe7c
	goto loc_82EAFE7C;
loc_82EAFEC4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// ori r8,r11,65280
	ctx.r8.u64 = ctx.r11.u64 | 65280;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// b 0x82eb0064
	goto loc_82EB0064;
loc_82EAFEF0:
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r27,1024
	ctx.r27.s64 = 1024;
	// sth r10,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r10.u16);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r9,r1,225
	ctx.r9.s64 = ctx.r1.s64 + 225;
loc_82EAFF10:
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stb r31,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r31.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r7,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// cmplwi cr6,r8,256
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 256, ctx.xer);
	// stb r7,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r7.u8);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// blt cr6,0x82eaff10
	if (ctx.cr6.lt) goto loc_82EAFF10;
	// b 0x82eb0070
	goto loc_82EB0070;
loc_82EAFF38:
	// lis r10,10240
	ctx.r10.s64 = 671088640;
	// ori r10,r10,24
	ctx.r10.u64 = ctx.r10.u64 | 24;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eb003c
	if (ctx.cr6.eq) goto loc_82EB003C;
	// addis r11,r11,-10280
	ctx.r11.s64 = ctx.r11.s64 + -673710080;
	// addic. r11,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb0030
	if (ctx.cr0.eq) goto loc_82EB0030;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82eb0010
	if (ctx.cr6.eq) goto loc_82EB0010;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82eafe90
	if (ctx.cr6.eq) goto loc_82EAFE90;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x82eafff4
	if (ctx.cr6.eq) goto loc_82EAFFF4;
	// lis r10,504
	ctx.r10.s64 = 33030144;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eaffc4
	if (ctx.cr6.eq) goto loc_82EAFFC4;
	// lis r10,1272
	ctx.r10.s64 = 83361792;
	// ori r10,r10,22
	ctx.r10.u64 = ctx.r10.u64 | 22;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eaff98
	if (ctx.cr6.eq) goto loc_82EAFF98;
loc_82EAFF8C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eb0284
	goto loc_82EB0284;
loc_82EAFF98:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// lis r8,-1
	ctx.r8.s64 = -65536;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r11,52
	ctx.r11.s64 = 52;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// b 0x82eb0068
	goto loc_82EB0068;
loc_82EAFFC4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r8,r11,65280
	ctx.r8.u64 = ctx.r11.u64 | 65280;
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r7,255
	ctx.r7.s64 = 16711680;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// li r11,52
	ctx.r11.s64 = 52;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// b 0x82eb0068
	goto loc_82EB0068;
loc_82EAFFF4:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,3840
	ctx.r10.s64 = 3840;
	// li r9,240
	ctx.r9.s64 = 240;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// b 0x82eb0058
	goto loc_82EB0058;
loc_82EB0010:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,63488
	ctx.r11.u64 = ctx.r11.u64 | 63488;
	// li r9,2016
	ctx.r9.s64 = 2016;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r8,31
	ctx.r8.s64 = 31;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// b 0x82eb0058
	goto loc_82EB0058;
loc_82EB0030:
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// b 0x82eb0064
	goto loc_82EB0064;
loc_82EB003C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82EB0058:
	// li r11,52
	ctx.r11.s64 = 52;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
loc_82EB0064:
	// li r10,16
	ctx.r10.s64 = 16;
loc_82EB0068:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// sth r10,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r10.u16);
loc_82EB0070:
	// rlwinm r29,r10,29,19,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFF;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mullw r28,r10,r29
	ctx.r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// sth r31,12(r9)
	PPC_STORE_U16(ctx.r9.u32 + 12, ctx.r31.u16);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r10,r28,3
	ctx.r10.s64 = ctx.r28.s64 + 3;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r26,r10,0,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// li r8,2834
	ctx.r8.s64 = 2834;
	// mullw r10,r7,r26
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r26.s32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r9,14
	ctx.r9.s64 = ctx.r9.s64 + 14;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,218(r1)
	PPC_STORE_U32(ctx.r1.u32 + 218, ctx.r9.u32);
	// addi r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 + 14;
	// li r9,19778
	ctx.r9.s64 = 19778;
	// sth r8,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// sth r9,208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 208, ctx.r9.u16);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// rlwinm r9,r8,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// subf r25,r10,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r11,r25,r10
	ctx.r11.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stw r11,210(r1)
	PPC_STORE_U32(ctx.r1.u32 + 210, ctx.r11.u32);
	// bl 0x82ead860
	ctx.lr = 0x82EB0100;
	sub_82EAD860(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eadc18
	ctx.lr = 0x82EB010C;
	sub_82EADC18(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82eb0130
	if (ctx.cr6.eq) goto loc_82EB0130;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB0128;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eaff8c
	if (ctx.cr0.lt) goto loc_82EAFF8C;
loc_82EB0130:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb0154
	if (ctx.cr6.eq) goto loc_82EB0154;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB014C;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eaff8c
	if (ctx.cr0.lt) goto loc_82EAFF8C;
loc_82EB0154:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb0178
	if (ctx.cr6.eq) goto loc_82EB0178;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB0170;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eaff8c
	if (ctx.cr0.lt) goto loc_82EAFF8C;
loc_82EB0178:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mullw r3,r10,r11
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x82299698
	ctx.lr = 0x82EB018C;
	sub_82299698(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x82eb01a0
	if (!ctx.cr0.eq) goto loc_82EB01A0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb0284
	goto loc_82EB0284;
loc_82EB01A0:
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83204390
	ctx.lr = 0x82EB01C0;
	sub_83204390(ctx, base);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mullw r11,r8,r29
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r11,r6,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r6.s64;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82eb023c
	goto loc_82EB023C;
loc_82EB01F4:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB0208;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb028c
	if (ctx.cr0.lt) goto loc_82EB028C;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82eb0234
	if (!ctx.cr6.lt) goto loc_82EB0234;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// subf r5,r28,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r28.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB022C;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb028c
	if (ctx.cr0.lt) goto loc_82EB028C;
loc_82EB0234:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_82EB023C:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82eb01f4
	if (!ctx.cr6.lt) goto loc_82EB01F4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82eb0268
	if (ctx.cr6.eq) goto loc_82EB0268;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB0260;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb028c
	if (ctx.cr0.lt) goto loc_82EB028C;
loc_82EB0268:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eb0280
	if (ctx.cr6.eq) goto loc_82EB0280;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB0280;
	sub_822996C0(ctx, base);
loc_82EB0280:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB0284:
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82EB028C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eaff8c
	if (ctx.cr6.eq) goto loc_82EAFF8C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB02A4;
	sub_822996C0(ctx, base);
	// b 0x82eaff8c
	goto loc_82EAFF8C;
}

__attribute__((alias("__imp__sub_82EB02A8"))) PPC_WEAK_FUNC(sub_82EB02A8);
PPC_FUNC_IMPL(__imp__sub_82EB02A8) {
	PPC_FUNC_PROLOGUE();
	PPCContext env{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EB02B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-2112(r1)
	ea = -2112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,2132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2132, ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,2140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2140, ctx.r4.u32);
	// stw r5,2148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2148, ctx.r5.u32);
	// beq cr6,0x82eb0584
	if (ctx.cr6.eq) goto loc_82EB0584;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82eb0584
	if (ctx.cr6.eq) goto loc_82EB0584;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82f0c398
	ctx.lr = 0x82EB02D8;
	sub_82F0C398(ctx, base);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r11,r11,-10768
	ctx.r11.s64 = ctx.r11.s64 + -10768;
	// addi r10,r10,-10712
	ctx.r10.s64 = ctx.r10.s64 + -10712;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// stw r11,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r11.u32);
	// stw r10,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r10.u32);
	// bl 0x82ff2180
	ctx.lr = 0x82EB02FC;
	env = ctx;
	ctx.r3.s64 = setjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32));
	if (ctx.r3.s64 != 0) ctx = env;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb03d8
	if (!ctx.cr0.eq) goto loc_82EB03D8;
	// li r5,472
	ctx.r5.s64 = 472;
	// li r4,62
	ctx.r4.s64 = 62;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f08b20
	ctx.lr = 0x82EB0314;
	sub_82F08B20(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,2148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2148);
	// lis r9,-32021
	ctx.r9.s64 = -2098528256;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r7,2140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2140);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r6,-32021
	ctx.r6.s64 = -2098528256;
	// lis r5,-32021
	ctx.r5.s64 = -2098528256;
	// lis r4,-32015
	ctx.r4.s64 = -2098135040;
	// lis r3,-32021
	ctx.r3.s64 = -2098528256;
	// stw r10,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r10.u32);
	// addi r10,r9,-10656
	ctx.r10.s64 = ctx.r9.s64 + -10656;
	// stw r7,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r7.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r11,r4,-17160
	ctx.r11.s64 = ctx.r4.s64 + -17160;
	// addi r10,r3,-10584
	ctx.r10.s64 = ctx.r3.s64 + -10584;
	// stw r28,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r28.u32);
	// addi r9,r6,-10648
	ctx.r9.s64 = ctx.r6.s64 + -10648;
	// stw r11,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r11.u32);
	// addi r7,r5,-10616
	ctx.r7.s64 = ctx.r5.s64 + -10616;
	// stw r10,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r7,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r7.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// bl 0x82f09230
	ctx.lr = 0x82EB03A0;
	sub_82F09230(ctx, base);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-10704
	ctx.r11.s64 = ctx.r11.s64 + -10704;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r11.u32);
	// bl 0x82f09788
	ctx.lr = 0x82EB03BC;
	sub_82F09788(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lis r10,10240
	ctx.r10.s64 = 671088640;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ori r29,r10,2
	ctx.r29.u64 = ctx.r10.u64 | 2;
	// beq cr6,0x82eb0404
	if (ctx.cr6.eq) goto loc_82EB0404;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82eb03e4
	if (ctx.cr6.eq) goto loc_82EB03E4;
loc_82EB03D8:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
	// b 0x82eb0574
	goto loc_82EB0574;
loc_82EB03E4:
	// lwz r31,2132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2132);
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// ori r10,r10,134
	ctx.r10.u64 = ctx.r10.u64 | 134;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// b 0x82eb0414
	goto loc_82EB0414;
loc_82EB0404:
	// lwz r31,2132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2132);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82EB0414:
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82eb0570
	if (ctx.cr6.eq) goto loc_82EB0570;
	// lis r11,9345
	ctx.r11.s64 = 612433920;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mullw r3,r9,r10
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// bl 0x82299698
	ctx.lr = 0x82EB0450;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq 0x82eb048c
	if (ctx.cr0.eq) goto loc_82EB048C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mullw r5,r9,r10
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82eb0498
	if (!ctx.cr0.eq) goto loc_82EB0498;
loc_82EB048C:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82eb0574
	goto loc_82EB0574;
loc_82EB0498:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82eb04ec
	if (!ctx.cr6.eq) goto loc_82EB04EC;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82eb04d8
	goto loc_82EB04D8;
loc_82EB04B0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f093b0
	ctx.lr = 0x82EB04C0;
	sub_82F093B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82cb1160
	ctx.lr = 0x82EB04D0;
	sub_82CB1160(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_82EB04D8:
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb04b0
	if (ctx.cr6.lt) goto loc_82EB04B0;
	// b 0x82eb0568
	goto loc_82EB0568;
loc_82EB04EC:
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// ori r10,r10,6
	ctx.r10.u64 = ctx.r10.u64 | 6;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82eb0568
	if (!ctx.cr6.eq) goto loc_82EB0568;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82eb0558
	goto loc_82EB0558;
loc_82EB0504:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f093b0
	ctx.lr = 0x82EB0514;
	sub_82F093B0(ctx, base);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// b 0x82eb0550
	goto loc_82EB0550;
loc_82EB0528:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82EB0550:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb0528
	if (ctx.cr6.lt) goto loc_82EB0528;
loc_82EB0558:
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb0504
	if (ctx.cr6.lt) goto loc_82EB0504;
loc_82EB0568:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f090d8
	ctx.lr = 0x82EB0570;
	sub_82F090D8(ctx, base);
loc_82EB0570:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82EB0574:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f08c40
	ctx.lr = 0x82EB057C;
	sub_82F08C40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82eb058c
	goto loc_82EB058C;
loc_82EB0584:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EB058C:
	// addi r1,r1,2112
	ctx.r1.s64 = ctx.r1.s64 + 2112;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0594"))) PPC_WEAK_FUNC(sub_82EB0594);
PPC_FUNC_IMPL(__imp__sub_82EB0594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0598"))) PPC_WEAK_FUNC(sub_82EB0598);
PPC_FUNC_IMPL(__imp__sub_82EB0598) {
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
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x82299698
	ctx.lr = 0x82EB05B8;
	sub_82299698(ctx, base);
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EB05DC"))) PPC_WEAK_FUNC(sub_82EB05DC);
PPC_FUNC_IMPL(__imp__sub_82EB05DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB05E0"))) PPC_WEAK_FUNC(sub_82EB05E0);
PPC_FUNC_IMPL(__imp__sub_82EB05E0) {
	PPC_FUNC_PROLOGUE();
	PPCContext env{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82EB05E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-2064(r1)
	ea = -2064 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// stw r3,2084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2084, ctx.r3.u32);
	// lis r9,-32021
	ctx.r9.s64 = -2098528256;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,1432
	ctx.r11.s64 = ctx.r11.s64 + 1432;
	// addi r10,r10,-10576
	ctx.r10.s64 = ctx.r10.s64 + -10576;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r9,r9,-10496
	ctx.r9.s64 = ctx.r9.s64 + -10496;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82ea1f20
	ctx.lr = 0x82EB0630;
	sub_82EA1F20(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,384
	ctx.r5.s64 = 384;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r4,62
	ctx.r4.s64 = 62;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82f0c408
	ctx.lr = 0x82EB064C;
	sub_82F0C408(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82f0c398
	ctx.lr = 0x82EB0654;
	sub_82F0C398(ctx, base);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r11,r11,-10768
	ctx.r11.s64 = ctx.r11.s64 + -10768;
	// addi r10,r10,-10712
	ctx.r10.s64 = ctx.r10.s64 + -10712;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stw r11,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r11.u32);
	// stw r10,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r10.u32);
	// bl 0x82ff2180
	ctx.lr = 0x82EB0678;
	env = ctx;
	ctx.r3.s64 = setjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32));
	if (ctx.r3.s64 != 0) ctx = env;
	// lis r27,9345
	ctx.r27.s64 = 612433920;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb0690
	if (ctx.cr0.eq) goto loc_82EB0690;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x82eb0704
	goto loc_82EB0704;
loc_82EB0690:
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// bl 0x82f0dcf8
	ctx.lr = 0x82EB06A0;
	sub_82F0DCF8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r31,2084(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2084);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfd f0,-3368(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3368);
	// stfd f0,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.f0.u64);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x82f0c970
	ctx.lr = 0x82EB06DC;
	sub_82F0C970(ctx, base);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mulli r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 * 3;
	// bl 0x82299698
	ctx.lr = 0x82EB06F0;
	sub_82299698(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb070c
	if (!ctx.cr0.eq) goto loc_82EB070C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
loc_82EB0704:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82eb07d8
	goto loc_82EB07D8;
loc_82EB070C:
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r11,r7,r6
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r5,r8
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82eb07c8
	if (!ctx.cr6.lt) goto loc_82EB07C8;
loc_82EB0748:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb07a8
	if (!ctx.cr6.gt) goto loc_82EB07A8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82EB0760:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r8,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF;
	// rlwinm r5,r8,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stbx r6,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u8);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r5,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r4,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r4.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eb0760
	if (ctx.cr6.lt) goto loc_82EB0760;
loc_82EB07A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f0ca50
	ctx.lr = 0x82EB07B8;
	sub_82F0CA50(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eb0748
	if (ctx.cr6.lt) goto loc_82EB0748;
loc_82EB07C8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f0c5a8
	ctx.lr = 0x82EB07D0;
	sub_82F0C5A8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f0c520
	ctx.lr = 0x82EB07D8;
	sub_82F0C520(ctx, base);
loc_82EB07D8:
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822996c0
	ctx.lr = 0x82EB07E8;
	sub_822996C0(ctx, base);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x822996c0
	ctx.lr = 0x82EB07F8;
	sub_822996C0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,2064
	ctx.r1.s64 = ctx.r1.s64 + 2064;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0804"))) PPC_WEAK_FUNC(sub_82EB0804);
PPC_FUNC_IMPL(__imp__sub_82EB0804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0808"))) PPC_WEAK_FUNC(sub_82EB0808);
PPC_FUNC_IMPL(__imp__sub_82EB0808) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,3(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 3);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,3(r3)
	PPC_STORE_U16(ctx.r3.u32 + 3, ctx.r11.u16);
	// lhz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 5);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,5(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5, ctx.r11.u16);
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// lhz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// lhz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// lhz r11,14(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB0884"))) PPC_WEAK_FUNC(sub_82EB0884);
PPC_FUNC_IMPL(__imp__sub_82EB0884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0888"))) PPC_WEAK_FUNC(sub_82EB0888);
PPC_FUNC_IMPL(__imp__sub_82EB0888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82EB0890;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r14,0
	ctx.r14.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r31,18
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 18, ctx.xer);
	// blt cr6,0x82eb09d4
	if (ctx.cr6.lt) goto loc_82EB09D4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,18
	ctx.r5.s64 = 18;
	// bl 0x82cb1160
	ctx.lr = 0x82EB08C0;
	sub_82CB1160(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb0808
	ctx.lr = 0x82EB08CC;
	sub_82EB0808(ctx, base);
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// rlwinm. r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x82eb09d4
	if (!ctx.cr0.eq) goto loc_82EB09D4;
	// lbz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// andi. r9,r11,244
	ctx.r9.u64 = ctx.r11.u64 & 244;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82eb09d4
	if (!ctx.cr0.eq) goto loc_82EB09D4;
	// lhz r19,108(r1)
	ctx.r19.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// cmplwi r19,0
	ctx.cr0.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq 0x82eb09d4
	if (ctx.cr0.eq) goto loc_82EB09D4;
	// lhz r15,110(r1)
	ctx.r15.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// cmplwi r15,0
	ctx.cr0.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// beq 0x82eb09d4
	if (ctx.cr0.eq) goto loc_82EB09D4;
	// lbz r11,103(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lis r8,10280
	ctx.r8.s64 = 673710080;
	// lis r9,6184
	ctx.r9.s64 = 405274624;
	// addi r6,r11,7
	ctx.r6.s64 = ctx.r11.s64 + 7;
	// ori r24,r8,67
	ctx.r24.u64 = ctx.r8.u64 | 67;
	// li r25,-1
	ctx.r25.s64 = -1;
	// ori r9,r9,134
	ctx.r9.u64 = ctx.r9.u64 | 134;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r8,r6,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// beq cr6,0x82eb0978
	if (ctx.cr6.eq) goto loc_82EB0978;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x82eb0974
	if (ctx.cr6.eq) goto loc_82EB0974;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x82eb0968
	if (ctx.cr6.eq) goto loc_82EB0968;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x82eb095c
	if (ctx.cr6.eq) goto loc_82EB095C;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x82eb09d4
	if (!ctx.cr6.eq) goto loc_82EB09D4;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// b 0x82eb0978
	goto loc_82EB0978;
loc_82EB095C:
	// lis r25,10280
	ctx.r25.s64 = 673710080;
	// ori r25,r25,134
	ctx.r25.u64 = ctx.r25.u64 | 134;
	// b 0x82eb0978
	goto loc_82EB0978;
loc_82EB0968:
	// lis r25,6184
	ctx.r25.s64 = 405274624;
	// ori r25,r25,67
	ctx.r25.u64 = ctx.r25.u64 | 67;
	// b 0x82eb0978
	goto loc_82EB0978;
loc_82EB0974:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_82EB0978:
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// li r23,1
	ctx.r23.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82eb09fc
	if (ctx.cr6.eq) goto loc_82EB09FC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82eb09b0
	if (ctx.cr6.eq) goto loc_82EB09B0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82eb09d4
	if (!ctx.cr6.eq) goto loc_82EB09D4;
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82eb09d4
	if (!ctx.cr6.eq) goto loc_82EB09D4;
	// lis r24,10240
	ctx.r24.s64 = 671088640;
	// ori r24,r24,2
	ctx.r24.u64 = ctx.r24.u64 | 2;
	// b 0x82eb0a1c
	goto loc_82EB0A1C;
loc_82EB09B0:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x82eb0a1c
	if (ctx.cr6.eq) goto loc_82EB0A1C;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x82eb09f0
	if (ctx.cr6.eq) goto loc_82EB09F0;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x82eb09e4
	if (ctx.cr6.eq) goto loc_82EB09E4;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82eb0a18
	if (ctx.cr6.eq) goto loc_82EB0A18;
loc_82EB09D4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EB09DC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82EB09E4:
	// lis r24,10280
	ctx.r24.s64 = 673710080;
	// ori r24,r24,134
	ctx.r24.u64 = ctx.r24.u64 | 134;
	// b 0x82eb0a1c
	goto loc_82EB0A1C;
loc_82EB09F0:
	// lis r24,6184
	ctx.r24.s64 = 405274624;
	// ori r24,r24,67
	ctx.r24.u64 = ctx.r24.u64 | 67;
	// b 0x82eb0a1c
	goto loc_82EB0A1C;
loc_82EB09FC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb09d4
	if (ctx.cr6.eq) goto loc_82EB09D4;
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82eb09d4
	if (!ctx.cr6.eq) goto loc_82EB09D4;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_82EB0A18:
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
loc_82EB0A1C:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// rlwinm r20,r11,29,3,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bne cr6,0x82eb0a38
	if (!ctx.cr6.eq) goto loc_82EB0A38;
	// cmplwi cr6,r20,3
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 3, ctx.xer);
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// bne cr6,0x82eb0a3c
	if (!ctx.cr6.eq) goto loc_82EB0A3C;
loc_82EB0A38:
	// li r22,4
	ctx.r22.s64 = 4;
loc_82EB0A3C:
	// rlwinm r7,r7,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// lbz r9,113(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r10,r31,-18
	ctx.r10.s64 = ctx.r31.s64 + -18;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// not r7,r9
	ctx.r7.u64 = ~ctx.r9.u64;
	// rlwinm r17,r9,27,31,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r16,r7,28,31,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb09d4
	if (ctx.cr6.lt) goto loc_82EB09D4;
	// lhz r31,101(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 101);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r26,r11,r10
	ctx.r26.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mullw r27,r31,r8
	ctx.r27.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// addi r28,r9,18
	ctx.r28.s64 = ctx.r9.s64 + 18;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82eb09d4
	if (ctx.cr6.lt) goto loc_82EB09D4;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// li r21,255
	ctx.r21.s64 = 255;
	// ori r18,r10,3
	ctx.r18.u64 = ctx.r10.u64 | 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb0c28
	if (ctx.cr6.eq) goto loc_82EB0C28;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb0c28
	if (ctx.cr6.eq) goto loc_82EB0C28;
	// lhz r30,99(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 99);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bgt cr6,0x82eb09d4
	if (ctx.cr6.gt) goto loc_82EB09D4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// bl 0x82299698
	ctx.lr = 0x82EB0AC0;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// bne 0x82eb0ad8
	if (!ctx.cr0.eq) goto loc_82EB0AD8;
loc_82EB0ACC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb09dc
	goto loc_82EB09DC;
loc_82EB0AD8:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// stw r23,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r23.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82cb16f0
	ctx.lr = 0x82EB0AE8;
	sub_82CB16F0(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82eb0c0c
	if (!ctx.cr6.lt) goto loc_82EB0C0C;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r31,r25,0,26,22
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82EB0B20:
	// subf. r5,r18,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r18.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82eb0b9c
	if (ctx.cr0.eq) goto loc_82EB0B9C;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// beq cr6,0x82eb0b80
	if (ctx.cr6.eq) goto loc_82EB0B80;
	// addis r5,r5,-4096
	ctx.r5.s64 = ctx.r5.s64 + -268435456;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x82eb0b5c
	if (ctx.cr0.eq) goto loc_82EB0B5C;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bne cr6,0x82eb0bd0
	if (!ctx.cr6.eq) goto loc_82EB0BD0;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x82eb0bd0
	goto loc_82EB0BD0;
loc_82EB0B5C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// rlwinm r7,r8,20,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x7;
	// rlwinm r6,r8,25,24,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0xF8;
	// rlwinm r5,r8,25,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x7;
	// rlwinm r25,r8,30,24,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xF8;
	// rlwinm r15,r8,30,29,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x7;
	// rlwinm r14,r8,3,24,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xF8;
	// b 0x82eb0bc0
	goto loc_82EB0BC0;
loc_82EB0B80:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r6,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// rlwinm r8,r6,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF;
	// rlwinm r7,r6,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// b 0x82eb0bd0
	goto loc_82EB0BD0;
loc_82EB0B9C:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r8,r9,17,15,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r7,r9,20,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x7;
	// rlwinm r6,r9,25,24,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0xF8;
	// rlwinm r5,r9,25,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7;
	// rlwinm r25,r9,30,24,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xF8;
	// rlwinm r15,r9,30,29,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x7;
	// rlwinm r14,r9,3,24,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// mulli r9,r8,255
	ctx.r9.s64 = ctx.r8.s64 * 255;
loc_82EB0BC0:
	// or r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r6,r15,r14
	ctx.r6.u64 = ctx.r15.u64 | ctx.r14.u64;
	// or r7,r5,r25
	ctx.r7.u64 = ctx.r5.u64 | ctx.r25.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82EB0BD0:
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// stb r9,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r9.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// xori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 ^ 1;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// or r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 | ctx.r3.u64;
	// blt cr6,0x82eb0b20
	if (ctx.cr6.lt) goto loc_82EB0B20;
	// lwz r15,84(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r14,0
	ctx.r14.s64 = 0;
	// bne cr6,0x82eb0c28
	if (!ctx.cr6.eq) goto loc_82EB0C28;
loc_82EB0C0C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82eb0c20
	goto loc_82EB0C20;
loc_82EB0C18:
	// stb r21,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r21.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82EB0C20:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82eb0c18
	if (ctx.cr6.lt) goto loc_82EB0C18;
loc_82EB0C28:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// mullw r10,r15,r19
	ctx.r10.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r19.s32);
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// stw r19,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r19.u32);
	// stw r15,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r15.u32);
	// stw r14,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r14.u32);
	// stw r23,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r23.u32);
	// mullw r9,r19,r22
	ctx.r9.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r22.s32);
	// stw r9,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r9.u32);
	// subf r24,r27,r26
	ctx.r24.s64 = ctx.r26.s64 - ctx.r27.s64;
	// mullw r3,r10,r22
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r22.s32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb0f38
	if (ctx.cr6.eq) goto loc_82EB0F38;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82eb0ca8
	if (!ctx.cr6.eq) goto loc_82EB0CA8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82eb0ca8
	if (!ctx.cr6.eq) goto loc_82EB0CA8;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82eb0ca8
	if (ctx.cr6.eq) goto loc_82EB0CA8;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82eb0ca8
	if (ctx.cr6.eq) goto loc_82EB0CA8;
	// cmplwi cr6,r20,3
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 3, ctx.xer);
	// beq cr6,0x82eb0ca8
	if (ctx.cr6.eq) goto loc_82EB0CA8;
	// cmplw cr6,r24,r3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82eb09d4
	if (ctx.cr6.lt) goto loc_82EB09D4;
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// stw r14,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r14.u32);
	// b 0x82eb0e38
	goto loc_82EB0E38;
loc_82EB0CA8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EB0CB0;
	sub_82299698(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb0acc
	if (ctx.cr0.eq) goto loc_82EB0ACC;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// stw r23,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r23.u32);
	// beq cr6,0x82eb0cd0
	if (ctx.cr6.eq) goto loc_82EB0CD0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82eb0ce0
	goto loc_82EB0CE0;
loc_82EB0CD0:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addi r10,r15,-1
	ctx.r10.s64 = ctx.r15.s64 + -1;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r25,r11,r3
	ctx.r25.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82EB0CE0:
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82eb0e38
	if (ctx.cr6.eq) goto loc_82EB0E38;
loc_82EB0CEC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82eb0cfc
	if (ctx.cr6.eq) goto loc_82EB0CFC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82eb0d08
	goto loc_82EB0D08;
loc_82EB0CFC:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_82EB0D08:
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82eb0e14
	if (ctx.cr6.eq) goto loc_82EB0E14;
loc_82EB0D14:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb0d58
	if (ctx.cr6.eq) goto loc_82EB0D58;
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// blt cr6,0x82eb09d4
	if (ctx.cr6.lt) goto loc_82EB09D4;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// subf r11,r26,r19
	ctx.r11.s64 = ctx.r19.s64 - ctx.r26.s64;
	// clrlwi r10,r9,25
	ctx.r10.u64 = ctx.r9.u32 & 0x7F;
	// rlwinm r27,r9,0,0,24
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// blt cr6,0x82eb0d4c
	if (ctx.cr6.lt) goto loc_82EB0D4C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82EB0D4C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// b 0x82eb0d60
	goto loc_82EB0D60;
loc_82EB0D58:
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_82EB0D60:
	// add r26,r30,r26
	ctx.r26.u64 = ctx.r30.u64 + ctx.r26.u64;
	// b 0x82eb0df4
	goto loc_82EB0DF4;
loc_82EB0D68:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplw cr6,r24,r20
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x82eb09d4
	if (ctx.cr6.lt) goto loc_82EB09D4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb0db4
	if (ctx.cr6.eq) goto loc_82EB0DB4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lbz r11,1(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// lbz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// lbz r11,3(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// b 0x82eb0dd0
	goto loc_82EB0DD0;
loc_82EB0DB4:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EB0DC4;
	sub_82CB1160(ctx, base);
	// cmplwi cr6,r20,3
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 3, ctx.xer);
	// bne cr6,0x82eb0dd0
	if (!ctx.cr6.eq) goto loc_82EB0DD0;
	// stb r21,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r21.u8);
loc_82EB0DD0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82eb0de0
	if (!ctx.cr6.eq) goto loc_82EB0DE0;
	// add r28,r20,r28
	ctx.r28.u64 = ctx.r20.u64 + ctx.r28.u64;
	// subf r24,r20,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r20.s64;
loc_82EB0DE0:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82eb0df0
	if (ctx.cr6.eq) goto loc_82EB0DF0;
	// add r31,r31,r22
	ctx.r31.u64 = ctx.r31.u64 + ctx.r22.u64;
	// b 0x82eb0df4
	goto loc_82EB0DF4;
loc_82EB0DF0:
	// subf r31,r22,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r22.s64;
loc_82EB0DF4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82eb0d68
	if (!ctx.cr6.eq) goto loc_82EB0D68;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82eb0e0c
	if (ctx.cr6.eq) goto loc_82EB0E0C;
	// add r28,r20,r28
	ctx.r28.u64 = ctx.r20.u64 + ctx.r28.u64;
	// subf r24,r20,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r20.s64;
loc_82EB0E0C:
	// cmplw cr6,r26,r19
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x82eb0d14
	if (ctx.cr6.lt) goto loc_82EB0D14;
loc_82EB0E14:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82eb0e28
	if (ctx.cr6.eq) goto loc_82EB0E28;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x82eb0e2c
	goto loc_82EB0E2C;
loc_82EB0E28:
	// subf r25,r11,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r11.s64;
loc_82EB0E2C:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplw cr6,r23,r15
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x82eb0cec
	if (ctx.cr6.lt) goto loc_82EB0CEC;
loc_82EB0E38:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// subf. r11,r18,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r18.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb0ec4
	if (ctx.cr0.eq) goto loc_82EB0EC4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82eb0f38
	if (!ctx.cr6.eq) goto loc_82EB0F38;
	// lwz r7,48(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82eb0eb4
	if (!ctx.cr6.lt) goto loc_82EB0EB4;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EB0E74:
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82eb0ea4
	if (!ctx.cr6.lt) goto loc_82EB0EA4;
loc_82EB0E84:
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82eb0e9c
	if (!ctx.cr0.eq) goto loc_82EB0E9C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb0e84
	if (ctx.cr6.lt) goto loc_82EB0E84;
loc_82EB0E9C:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb0eb0
	if (ctx.cr6.lt) goto loc_82EB0EB0;
loc_82EB0EA4:
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eb0e74
	if (ctx.cr6.lt) goto loc_82EB0E74;
loc_82EB0EB0:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
loc_82EB0EB4:
	// bne cr6,0x82eb0f38
	if (!ctx.cr6.eq) goto loc_82EB0F38;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,134
	ctx.r11.u64 = ctx.r11.u64 | 134;
	// b 0x82eb0f34
	goto loc_82EB0F34;
loc_82EB0EC4:
	// lwz r7,48(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82eb0f28
	if (!ctx.cr6.lt) goto loc_82EB0F28;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82EB0EE8:
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82eb0f18
	if (!ctx.cr6.lt) goto loc_82EB0F18;
loc_82EB0EF8:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm. r5,r5,0,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82eb0f10
	if (!ctx.cr0.eq) goto loc_82EB0F10;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb0ef8
	if (ctx.cr6.lt) goto loc_82EB0EF8;
loc_82EB0F10:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb0f24
	if (ctx.cr6.lt) goto loc_82EB0F24;
loc_82EB0F18:
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eb0ee8
	if (ctx.cr6.lt) goto loc_82EB0EE8;
loc_82EB0F24:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
loc_82EB0F28:
	// bne cr6,0x82eb0f38
	if (!ctx.cr6.eq) goto loc_82EB0F38;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,67
	ctx.r11.u64 = ctx.r11.u64 | 67;
loc_82EB0F34:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82EB0F38:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb0f60
	if (ctx.cr6.eq) goto loc_82EB0F60;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb0f5c
	if (ctx.cr6.eq) goto loc_82EB0F5C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EB0F58;
	sub_822996C0(ctx, base);
	// stw r14,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r14.u32);
loc_82EB0F5C:
	// stw r14,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r14.u32);
loc_82EB0F60:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb09dc
	goto loc_82EB09DC;
}

__attribute__((alias("__imp__sub_82EB0F68"))) PPC_WEAK_FUNC(sub_82EB0F68);
PPC_FUNC_IMPL(__imp__sub_82EB0F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82EB0F70;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// blt cr6,0x82eb1190
	if (ctx.cr6.lt) goto loc_82EB1190;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// bne cr6,0x82eb1190
	if (!ctx.cr6.eq) goto loc_82EB1190;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r10,51
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51, ctx.xer);
	// bne cr6,0x82eb0fa4
	if (!ctx.cr6.eq) goto loc_82EB0FA4;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// b 0x82eb0fbc
	goto loc_82EB0FBC;
loc_82EB0FA4:
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// bne cr6,0x82eb1190
	if (!ctx.cr6.eq) goto loc_82EB1190;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// bne cr6,0x82eb1190
	if (!ctx.cr6.eq) goto loc_82EB1190;
	// li r21,0
	ctx.r21.s64 = 0;
loc_82EB0FBC:
	// addic. r29,r5,-2
	ctx.xer.ca = ctx.r5.u32 > 1;
	ctx.r29.s64 = ctx.r5.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r27,r4,2
	ctx.r27.s64 = ctx.r4.s64 + 2;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,255
	ctx.r24.s64 = 255;
	// beq 0x82eb1190
	if (ctx.cr0.eq) goto loc_82EB1190;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EB0FDC:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x82eb0fec
	if (!ctx.cr6.eq) goto loc_82EB0FEC;
	// cmplwi cr6,r23,3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 3, ctx.xer);
	// beq cr6,0x82eb11a0
	if (ctx.cr6.eq) goto loc_82EB11A0;
loc_82EB0FEC:
	// lbz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// bl 0x82cbdde8
	ctx.lr = 0x82EB0FF4;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb1028
	if (!ctx.cr0.eq) goto loc_82EB1028;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bne cr6,0x82eb1034
	if (!ctx.cr6.eq) goto loc_82EB1034;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eb1028
	if (ctx.cr6.eq) goto loc_82EB1028;
loc_82EB1010:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82eb1028
	if (ctx.cr6.eq) goto loc_82EB1028;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// bne 0x82eb1010
	if (!ctx.cr0.eq) goto loc_82EB1010;
loc_82EB1028:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// b 0x82eb1188
	goto loc_82EB1188;
loc_82EB1034:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eb107c
	if (ctx.cr6.eq) goto loc_82EB107C;
loc_82EB1040:
	// lbz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// bl 0x82cbdde8
	ctx.lr = 0x82EB1048;
	sub_82CBDDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb107c
	if (!ctx.cr0.eq) goto loc_82EB107C;
	// lbz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// bl 0x82cbdd38
	ctx.lr = 0x82EB1058;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb1190
	if (ctx.cr0.eq) goto loc_82EB1190;
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mulli r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 * 10;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r11,-48
	ctx.r31.s64 = ctx.r11.s64 + -48;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// bne 0x82eb1040
	if (!ctx.cr0.eq) goto loc_82EB1040;
loc_82EB107C:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// blt cr6,0x82eb1178
	if (ctx.cr6.lt) goto loc_82EB1178;
	// beq cr6,0x82eb1118
	if (ctx.cr6.eq) goto loc_82EB1118;
	// cmplwi cr6,r23,3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 3, ctx.xer);
	// blt cr6,0x82eb1110
	if (ctx.cr6.lt) goto loc_82EB1110;
	// beq cr6,0x82eb10ec
	if (ctx.cr6.eq) goto loc_82EB10EC;
	// cmplwi cr6,r23,5
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 5, ctx.xer);
	// blt cr6,0x82eb10cc
	if (ctx.cr6.lt) goto loc_82EB10CC;
	// bne cr6,0x82eb1184
	if (!ctx.cr6.eq) goto loc_82EB1184;
	// mulli r11,r31,255
	ctx.r11.s64 = ctx.r31.s64 * 255;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// divwu r11,r11,r24
	ctx.r11.u32 = ctx.r11.u32 / ctx.r24.u32;
	// twllei r24,0
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82eb1238
	if (ctx.cr6.eq) goto loc_82EB1238;
	// li r23,2
	ctx.r23.s64 = 2;
	// b 0x82eb1184
	goto loc_82EB1184;
loc_82EB10CC:
	// mulli r11,r31,255
	ctx.r11.s64 = ctx.r31.s64 * 255;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// divwu r11,r11,r24
	ctx.r11.u32 = ctx.r11.u32 / ctx.r24.u32;
	// twllei r24,0
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82eb1184
	goto loc_82EB1184;
loc_82EB10EC:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82eb1190
	if (!ctx.cr6.lt) goto loc_82EB1190;
	// mulli r11,r31,255
	ctx.r11.s64 = ctx.r31.s64 * 255;
	// divwu r11,r11,r24
	ctx.r11.u32 = ctx.r11.u32 / ctx.r24.u32;
	// lis r10,-256
	ctx.r10.s64 = -16777216;
	// twllei r24,0
	// rlwimi r10,r11,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// b 0x82eb1184
	goto loc_82EB1184;
loc_82EB1110:
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// b 0x82eb117c
	goto loc_82EB117C;
loc_82EB1118:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb1190
	if (ctx.cr6.eq) goto loc_82EB1190;
	// mullw r11,r31,r25
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r25.s32);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82299698
	ctx.lr = 0x82EB1134;
	sub_82299698(ctx, base);
	// stw r3,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb1240
	if (ctx.cr0.eq) goto loc_82EB1240;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// stw r25,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r25.u32);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r31.u32);
	// ori r11,r11,134
	ctx.r11.u64 = ctx.r11.u64 | 134;
	// stw r22,56(r26)
	PPC_STORE_U32(ctx.r26.u32 + 56, ctx.r22.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,48(r26)
	PPC_STORE_U32(ctx.r26.u32 + 48, ctx.r10.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,52(r26)
	PPC_STORE_U32(ctx.r26.u32 + 52, ctx.r9.u32);
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// stw r22,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r22.u32);
	// b 0x82eb1184
	goto loc_82EB1184;
loc_82EB1178:
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82EB117C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb1190
	if (ctx.cr6.eq) goto loc_82EB1190;
loc_82EB1184:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_82EB1188:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82eb0fdc
	if (!ctx.cr6.eq) goto loc_82EB0FDC;
loc_82EB1190:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EB1198:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82EB11A0:
	// cmplwi cr6,r24,255
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 255, ctx.xer);
	// bgt cr6,0x82eb1190
	if (ctx.cr6.gt) goto loc_82EB1190;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// ble cr6,0x82eb11c4
	if (!ctx.cr6.gt) goto loc_82EB11C4;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x82eb11c4
	if (!ctx.cr6.eq) goto loc_82EB11C4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
loc_82EB11C4:
	// addic. r10,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r10.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// beq 0x82eb1230
	if (ctx.cr0.eq) goto loc_82EB1230;
loc_82EB11D0:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82eb1234
	if (!ctx.cr6.lt) goto loc_82EB1234;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lis r8,-1
	ctx.r8.s64 = -65536;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addic. r10,r10,-3
	ctx.xer.ca = ctx.r10.u32 > 2;
	ctx.r10.s64 = ctx.r10.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mulli r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 * 255;
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// divwu r9,r9,r24
	ctx.r9.u32 = ctx.r9.u32 / ctx.r24.u32;
	// mulli r7,r7,255
	ctx.r7.s64 = ctx.r7.s64 * 255;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// divwu r9,r7,r24
	ctx.r9.u32 = ctx.r7.u32 / ctx.r24.u32;
	// mulli r7,r6,255
	ctx.r7.s64 = ctx.r6.s64 * 255;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// divwu r8,r7,r24
	ctx.r8.u32 = ctx.r7.u32 / ctx.r24.u32;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// twllei r24,0
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// twllei r24,0
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// twllei r24,0
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82eb11d0
	if (!ctx.cr0.eq) goto loc_82EB11D0;
loc_82EB1230:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
loc_82EB1234:
	// bne cr6,0x82eb1190
	if (!ctx.cr6.eq) goto loc_82EB1190;
loc_82EB1238:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb1198
	goto loc_82EB1198;
loc_82EB1240:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb1198
	goto loc_82EB1198;
}

__attribute__((alias("__imp__sub_82EB124C"))) PPC_WEAK_FUNC(sub_82EB124C);
PPC_FUNC_IMPL(__imp__sub_82EB124C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB1250"))) PPC_WEAK_FUNC(sub_82EB1250);
PPC_FUNC_IMPL(__imp__sub_82EB1250) {
	PPC_FUNC_PROLOGUE();
	PPCContext env{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EB1258;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r11,-10312
	ctx.r6.s64 = ctx.r11.s64 + -10312;
	// addi r3,r9,-3360
	ctx.r3.s64 = ctx.r9.s64 + -3360;
	// addi r5,r10,-10320
	ctx.r5.s64 = ctx.r10.s64 + -10320;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f0e9d0
	ctx.lr = 0x82EB1290;
	sub_82F0E9D0(ctx, base);
	// lis r28,9345
	ctx.r28.s64 = 612433920;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb1404
	if (ctx.cr0.eq) goto loc_82EB1404;
	// bl 0x82f08a68
	ctx.lr = 0x82EB12A4;
	sub_82F08A68(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb1404
	if (ctx.cr0.eq) goto loc_82EB1404;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ff2180
	ctx.lr = 0x82EB12B8;
	env = ctx;
	ctx.r3.s64 = setjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32));
	if (ctx.r3.s64 != 0) ctx = env;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb12cc
	if (ctx.cr0.eq) goto loc_82EB12CC;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
	// b 0x82eb140c
	goto loc_82EB140C;
loc_82EB12CC:
	// lwz r31,180(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82f0ed40
	ctx.lr = 0x82EB12F8;
	sub_82F0ED40(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfd f1,-3368(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3368);
	// bl 0x82f0ed18
	ctx.lr = 0x82EB130C;
	sub_82F0ED18(ctx, base);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 * 3;
	// bl 0x82299698
	ctx.lr = 0x82EB1320;
	sub_82299698(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb1404
	if (ctx.cr0.eq) goto loc_82EB1404;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r11,-10224
	ctx.r6.s64 = ctx.r11.s64 + -10224;
	// addi r5,r10,-10304
	ctx.r5.s64 = ctx.r10.s64 + -10304;
	// bl 0x82f0ecb0
	ctx.lr = 0x82EB1348;
	sub_82F0ECB0(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f0deb0
	ctx.lr = 0x82EB1354;
	sub_82F0DEB0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb13f0
	if (!ctx.cr6.gt) goto loc_82EB13F0;
loc_82EB1364:
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r9,r30,r9
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x82eb13d0
	if (!ctx.cr6.gt) goto loc_82EB13D0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82EB1388:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r6,r8,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF;
	// rlwinm r5,r8,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stbx r6,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u8);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r5,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r4,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r4.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eb1388
	if (ctx.cr6.lt) goto loc_82EB1388;
loc_82EB13D0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82f0eb68
	ctx.lr = 0x82EB13E0;
	sub_82F0EB68(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb1364
	if (ctx.cr6.lt) goto loc_82EB1364;
loc_82EB13F0:
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f0df48
	ctx.lr = 0x82EB13FC;
	sub_82F0DF48(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x82eb140c
	goto loc_82EB140C;
loc_82EB1404:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_82EB140C:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb1424
	if (ctx.cr6.eq) goto loc_82EB1424;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EB1424;
	sub_822996C0(ctx, base);
loc_82EB1424:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb143c
	if (ctx.cr6.eq) goto loc_82EB143C;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f0ec10
	ctx.lr = 0x82EB143C;
	sub_82F0EC10(ctx, base);
loc_82EB143C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB1448"))) PPC_WEAK_FUNC(sub_82EB1448);
PPC_FUNC_IMPL(__imp__sub_82EB1448) {
	PPC_FUNC_PROLOGUE();
	PPCContext env{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x82EB1450;
	__savegprlr_18(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r3,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r5,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r3.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// bl 0x82f08868
	ctx.lr = 0x82EB1484;
	sub_82F08868(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb1498
	if (ctx.cr0.eq) goto loc_82EB1498;
loc_82EB148C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eb1954
	goto loc_82EB1954;
loc_82EB1498:
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r11,-10328
	ctx.r6.s64 = ctx.r11.s64 + -10328;
	// addi r3,r9,-3360
	ctx.r3.s64 = ctx.r9.s64 + -3360;
	// addi r5,r10,-10336
	ctx.r5.s64 = ctx.r10.s64 + -10336;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f0ef58
	ctx.lr = 0x82EB14B8;
	sub_82F0EF58(ctx, base);
	// lis r18,9345
	ctx.r18.s64 = 612433920;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb1908
	if (ctx.cr0.eq) goto loc_82EB1908;
	// bl 0x82f08a68
	ctx.lr = 0x82EB14CC;
	sub_82F08A68(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb1908
	if (ctx.cr0.eq) goto loc_82EB1908;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ff2180
	ctx.lr = 0x82EB14E0;
	env = ctx;
	ctx.r3.s64 = setjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32));
	if (ctx.r3.s64 != 0) ctx = env;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb1830
	if (!ctx.cr0.eq) goto loc_82EB1830;
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r5,r10,-10432
	ctx.r5.s64 = ctx.r10.s64 + -10432;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// bl 0x82f12c50
	ctx.lr = 0x82EB150C;
	sub_82F12C50(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f0f1c8
	ctx.lr = 0x82EB1518;
	sub_82F0F1C8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82f10098
	ctx.lr = 0x82EB1540;
	sub_82F10098(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// lis r9,10280
	ctx.r9.s64 = 673710080;
	// lis r8,10240
	ctx.r8.s64 = 671088640;
	// lis r7,2048
	ctx.r7.s64 = 134217728;
	// ori r24,r10,134
	ctx.r24.u64 = ctx.r10.u64 | 134;
	// ori r21,r9,134
	ctx.r21.u64 = ctx.r9.u64 | 134;
	// li r20,1
	ctx.r20.s64 = 1;
	// ori r22,r8,2
	ctx.r22.u64 = ctx.r8.u64 | 2;
	// ori r27,r7,74
	ctx.r27.u64 = ctx.r7.u64 | 74;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb15b0
	if (ctx.cr6.eq) goto loc_82EB15B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82eb15a0
	if (ctx.cr6.eq) goto loc_82EB15A0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82eb1594
	if (ctx.cr6.eq) goto loc_82EB1594;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82eb148c
	if (!ctx.cr6.eq) goto loc_82EB148C;
	// lwz r31,308(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// b 0x82eb15b8
	goto loc_82EB15B8;
loc_82EB1594:
	// lwz r31,308(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// b 0x82eb15b8
	goto loc_82EB15B8;
loc_82EB15A0:
	// lwz r31,308(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// b 0x82eb15b8
	goto loc_82EB15B8;
loc_82EB15B0:
	// lwz r31,308(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
loc_82EB15B8:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// lis r9,13873
	ctx.r9.s64 = 909180928;
	// lis r8,6688
	ctx.r8.s64 = 438304768;
	// lis r7,13873
	ctx.r7.s64 = 909180928;
	// lis r6,2048
	ctx.r6.s64 = 134217728;
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// ori r23,r10,6
	ctx.r23.u64 = ctx.r10.u64 | 6;
	// ori r28,r9,21024
	ctx.r28.u64 = ctx.r9.u64 | 21024;
	// ori r29,r8,90
	ctx.r29.u64 = ctx.r8.u64 | 90;
	// ori r30,r7,19521
	ctx.r30.u64 = ctx.r7.u64 | 19521;
	// ori r25,r6,10
	ctx.r25.u64 = ctx.r6.u64 | 10;
	// ori r26,r5,6
	ctx.r26.u64 = ctx.r5.u64 | 6;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x82eb1648
	if (!ctx.cr6.eq) goto loc_82EB1648;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f10298
	ctx.lr = 0x82EB15FC;
	sub_82F10298(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x82eb1644
	if (ctx.cr6.eq) goto loc_82EB1644;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x82eb163c
	if (ctx.cr6.eq) goto loc_82EB163C;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x82eb162c
	if (ctx.cr6.eq) goto loc_82EB162C;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x82eb148c
	if (!ctx.cr6.eq) goto loc_82EB148C;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82eb1648
	goto loc_82EB1648;
loc_82EB162C:
	// lis r11,10240
	ctx.r11.s64 = 671088640;
	// ori r11,r11,88
	ctx.r11.u64 = ctx.r11.u64 | 88;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82eb1648
	goto loc_82EB1648;
loc_82EB163C:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// b 0x82eb1648
	goto loc_82EB1648;
loc_82EB1644:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82EB1648:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x82eb165c
	if (!ctx.cr6.lt) goto loc_82EB165C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f102b8
	ctx.lr = 0x82EB165C;
	sub_82F102B8(ctx, base);
loc_82EB165C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82eb167c
	if (!ctx.cr6.eq) goto loc_82EB167C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x82eb167c
	if (!ctx.cr6.lt) goto loc_82EB167C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f10da0
	ctx.lr = 0x82EB167C;
	sub_82F10DA0(ctx, base);
loc_82EB167C:
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f10058
	ctx.lr = 0x82EB168C;
	sub_82F10058(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// beq 0x82eb16a8
	if (ctx.cr0.eq) goto loc_82EB16A8;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82f0ee88
	ctx.lr = 0x82EB16A4;
	sub_82F0EE88(ctx, base);
	// b 0x82eb16cc
	goto loc_82EB16CC;
loc_82EB16A8:
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// bl 0x82f10018
	ctx.lr = 0x82EB16B0;
	sub_82F10018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb16cc
	if (ctx.cr0.eq) goto loc_82EB16CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfd f2,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f1,-3368(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3368);
	// bl 0x82f10d40
	ctx.lr = 0x82EB16CC;
	sub_82F10D40(ctx, base);
loc_82EB16CC:
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f0ff90
	ctx.lr = 0x82EB16DC;
	sub_82F0FF90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb1740
	if (ctx.cr0.eq) goto loc_82EB1740;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f10db0
	ctx.lr = 0x82EB16EC;
	sub_82F10DB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// subf. r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb173c
	if (ctx.cr0.eq) goto loc_82EB173C;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x82eb1734
	if (ctx.cr6.eq) goto loc_82EB1734;
	// lis r10,40
	ctx.r10.s64 = 2621440;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eb172c
	if (ctx.cr6.eq) goto loc_82EB172C;
	// lis r10,3633
	ctx.r10.s64 = 238092288;
	// ori r10,r10,21022
	ctx.r10.u64 = ctx.r10.u64 | 21022;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eb1740
	if (!ctx.cr6.eq) goto loc_82EB1740;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// b 0x82eb1740
	goto loc_82EB1740;
loc_82EB172C:
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// b 0x82eb1740
	goto loc_82EB1740;
loc_82EB1734:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82eb1740
	goto loc_82EB1740;
loc_82EB173C:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82EB1740:
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82eb1764
	if (!ctx.cr6.eq) goto loc_82EB1764;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82eb1764
	if (ctx.cr6.eq) goto loc_82EB1764;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82eb176c
	if (!ctx.cr6.eq) goto loc_82EB176C;
loc_82EB1764:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f10288
	ctx.lr = 0x82EB176C;
	sub_82F10288(ctx, base);
loc_82EB176C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82eb1788
	if (ctx.cr6.eq) goto loc_82EB1788;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82f10348
	ctx.lr = 0x82EB1784;
	sub_82F10348(ctx, base);
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
loc_82EB1788:
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f0f4e0
	ctx.lr = 0x82EB1794;
	sub_82F0F4E0(ctx, base);
	// lis r11,10240
	ctx.r11.s64 = 671088640;
	// ori r10,r11,24
	ctx.r10.u64 = ctx.r11.u64 | 24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82eb17e8
	if (ctx.cr6.gt) goto loc_82EB17E8;
	// beq cr6,0x82eb17d8
	if (ctx.cr6.eq) goto loc_82EB17D8;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x82eb17e0
	if (ctx.cr6.eq) goto loc_82EB17E0;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x82eb1814
	if (ctx.cr6.eq) goto loc_82EB1814;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,26
	ctx.r10.u64 = ctx.r10.u64 | 26;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82eb1814
	if (ctx.cr6.eq) goto loc_82EB1814;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x82eb1804
	if (!ctx.cr6.eq) goto loc_82EB1804;
loc_82EB17D8:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// b 0x82eb1818
	goto loc_82EB1818;
loc_82EB17E0:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82eb1818
	goto loc_82EB1818;
loc_82EB17E8:
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82eb1814
	if (ctx.cr6.eq) goto loc_82EB1814;
	// addis r11,r11,-13873
	ctx.r11.s64 = ctx.r11.s64 + -909180928;
	// addic. r11,r11,-19457
	ctx.xer.ca = ctx.r11.u32 > 19456;
	ctx.r11.s64 = ctx.r11.s64 + -19457;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb17e0
	if (ctx.cr0.eq) goto loc_82EB17E0;
	// cmplwi cr6,r11,1567
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1567, ctx.xer);
	// beq cr6,0x82eb180c
	if (ctx.cr6.eq) goto loc_82EB180C;
loc_82EB1804:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// b 0x82eb1818
	goto loc_82EB1818;
loc_82EB180C:
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x82eb1818
	goto loc_82EB1818;
loc_82EB1814:
	// li r30,4
	ctx.r30.s64 = 4;
loc_82EB1818:
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f0ffd8
	ctx.lr = 0x82EB1824;
	sub_82F0FFD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82eb1840
	if (ctx.cr6.eq) goto loc_82EB1840;
loc_82EB1830:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
	// b 0x82eb191c
	goto loc_82EB191C;
loc_82EB1840:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r20,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r20.u32);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x82f0ffb8
	ctx.lr = 0x82EB1860;
	sub_82F0FFB8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r19,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r19.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x82eb1914
	if (ctx.cr6.eq) goto loc_82EB1914;
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mullw r3,r3,r11
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// bl 0x82299698
	ctx.lr = 0x82EB1888;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq 0x82eb1904
	if (ctx.cr0.eq) goto loc_82EB1904;
	// stw r20,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r20.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r18.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82299698
	ctx.lr = 0x82EB18AC;
	sub_82299698(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// beq 0x82eb1908
	if (ctx.cr0.eq) goto loc_82EB1908;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb18f4
	if (ctx.cr6.eq) goto loc_82EB18F4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82EB18CC:
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb18cc
	if (ctx.cr6.lt) goto loc_82EB18CC;
loc_82EB18F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f0fa90
	ctx.lr = 0x82EB1900;
	sub_82F0FA90(ctx, base);
	// b 0x82eb1918
	goto loc_82EB1918;
loc_82EB1904:
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82EB1908:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82eb191c
	goto loc_82EB191C;
loc_82EB1914:
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82EB1918:
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_82EB191C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb1938
	if (ctx.cr6.eq) goto loc_82EB1938;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f0fee8
	ctx.lr = 0x82EB1938;
	sub_82F0FEE8(ctx, base);
loc_82EB1938:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eb1950
	if (ctx.cr6.eq) goto loc_82EB1950;
	// stw r18,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB1950;
	sub_822996C0(ctx, base);
loc_82EB1950:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EB1954:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB195C"))) PPC_WEAK_FUNC(sub_82EB195C);
PPC_FUNC_IMPL(__imp__sub_82EB195C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB1960"))) PPC_WEAK_FUNC(sub_82EB1960);
PPC_FUNC_IMPL(__imp__sub_82EB1960) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
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
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
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
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
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
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
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
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
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
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
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
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
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
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
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
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB1A84"))) PPC_WEAK_FUNC(sub_82EB1A84);
PPC_FUNC_IMPL(__imp__sub_82EB1A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB1A88"))) PPC_WEAK_FUNC(sub_82EB1A88);
PPC_FUNC_IMPL(__imp__sub_82EB1A88) {
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
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rlwimi r8,r10,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// li r10,11
	ctx.r10.s64 = 11;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r7,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r7,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r7,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r7,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r7,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r8.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r7,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r8.u32);
loc_82EB1BAC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r7,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82eb1bac
	if (!ctx.cr0.eq) goto loc_82EB1BAC;
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// bl 0x82eb1960
	ctx.lr = 0x82EB1BE8;
	sub_82EB1960(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
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
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
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
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
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
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
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
	// stw r11,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r11.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
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
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EB1CB4"))) PPC_WEAK_FUNC(sub_82EB1CB4);
PPC_FUNC_IMPL(__imp__sub_82EB1CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB1CB8"))) PPC_WEAK_FUNC(sub_82EB1CB8);
PPC_FUNC_IMPL(__imp__sub_82EB1CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x82EB1CC0;
	__savegprlr_15(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x82eb2148
	if (ctx.cr6.lt) goto loc_82EB2148;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,8275
	ctx.r10.s64 = 542310400;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// ori r10,r10,17476
	ctx.r10.u64 = ctx.r10.u64 | 17476;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eb2148
	if (!ctx.cr6.eq) goto loc_82EB2148;
	// addi r30,r5,-4
	ctx.r30.s64 = ctx.r5.s64 + -4;
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r30,124
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 124, ctx.xer);
	// blt cr6,0x82eb2148
	if (ctx.cr6.lt) goto loc_82EB2148;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EB1D20;
	sub_82CB1160(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb1a88
	ctx.lr = 0x82EB1D2C;
	sub_82EB1A88(ctx, base);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r19,r31,124
	ctx.r19.s64 = ctx.r31.s64 + 124;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r18,r30,-124
	ctx.r18.s64 = ctx.r30.s64 + -124;
	// rlwinm. r31,r11,0,8,8
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,12(r17)
	PPC_STORE_U32(ctx.r17.u32 + 12, ctx.r10.u32);
	// stw r9,16(r17)
	PPC_STORE_U32(ctx.r17.u32 + 16, ctx.r9.u32);
	// bne 0x82eb1d58
	if (!ctx.cr0.eq) goto loc_82EB1D58;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EB1D58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,20(r17)
	PPC_STORE_U32(ctx.r17.u32 + 20, ctx.r11.u32);
	// bne cr6,0x82eb1d6c
	if (!ctx.cr6.eq) goto loc_82EB1D6C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r17)
	PPC_STORE_U32(ctx.r17.u32 + 20, ctx.r11.u32);
loc_82EB1D6C:
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// rlwinm r11,r11,0,16,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC00;
	// cmplwi cr6,r11,64512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64512, ctx.xer);
	// bne cr6,0x82eb1d84
	if (!ctx.cr6.eq) goto loc_82EB1D84;
	// li r15,6
	ctx.r15.s64 = 6;
	// b 0x82eb1d90
	goto loc_82EB1D90;
loc_82EB1D84:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb2148
	if (!ctx.cr6.eq) goto loc_82EB2148;
	// li r15,1
	ctx.r15.s64 = 1;
loc_82EB1D90:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb1da4
	if (!ctx.cr6.eq) goto loc_82EB1DA4;
	// li r16,1
	ctx.r16.s64 = 1;
loc_82EB1DA4:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eb1db4
	if (ctx.cr0.eq) goto loc_82EB1DB4;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82EB1DB4:
	// lis r12,12
	ctx.r12.s64 = 786432;
	// lis r10,-31908
	ctx.r10.s64 = -2091122688;
	// ori r12,r12,17506
	ctx.r12.u64 = ctx.r12.u64 | 17506;
	// addi r9,r10,18592
	ctx.r9.s64 = ctx.r10.s64 + 18592;
	// and r7,r11,r12
	ctx.r7.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,14
	ctx.r12.s64 = 917504;
	// lwz r10,18592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18592);
	// clrlwi r4,r11,12
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFFF;
	// ori r12,r12,16448
	ctx.r12.u64 = ctx.r12.u64 | 16448;
	// rlwinm r3,r10,0,26,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// and r6,r11,r12
	ctx.r6.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,12
	ctx.r12.s64 = 786432;
	// rlwinm r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// ori r12,r12,17472
	ctx.r12.u64 = ctx.r12.u64 | 17472;
	// rlwinm r4,r4,0,30,12
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFF80003;
	// and r5,r11,r12
	ctx.r5.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,12
	ctx.r12.s64 = 786432;
	// ori r12,r12,16448
	ctx.r12.u64 = ctx.r12.u64 | 16448;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// b 0x82eb1eb8
	goto loc_82EB1EB8;
loc_82EB1E04:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// bne cr6,0x82eb1eac
	if (!ctx.cr6.eq) goto loc_82EB1EAC;
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eb1eac
	if (!ctx.cr6.eq) goto loc_82EB1EAC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eb1e34
	if (ctx.cr6.eq) goto loc_82EB1E34;
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r30,176(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82eb1eac
	if (!ctx.cr6.eq) goto loc_82EB1EAC;
loc_82EB1E34:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82eb1e4c
	if (ctx.cr6.eq) goto loc_82EB1E4C;
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r30,180(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82eb1eac
	if (!ctx.cr6.eq) goto loc_82EB1EAC;
loc_82EB1E4C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82eb1e64
	if (ctx.cr6.eq) goto loc_82EB1E64;
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82eb1eac
	if (!ctx.cr6.eq) goto loc_82EB1EAC;
loc_82EB1E64:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82eb1e7c
	if (ctx.cr6.eq) goto loc_82EB1E7C;
	// lwz r3,24(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r30,188(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82eb1eac
	if (!ctx.cr6.eq) goto loc_82EB1EAC;
loc_82EB1E7C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eb1e94
	if (ctx.cr6.eq) goto loc_82EB1E94;
	// lwz r3,28(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r30,192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82eb1eac
	if (!ctx.cr6.eq) goto loc_82EB1EAC;
loc_82EB1E94:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82eb1ec0
	if (ctx.cr6.eq) goto loc_82EB1EC0;
	// lwz r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r30,196(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82eb1ec0
	if (ctx.cr6.eq) goto loc_82EB1EC0;
loc_82EB1EAC:
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r3,r3,0,26,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
loc_82EB1EB8:
	// cmpwi cr6,r3,-449
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -449, ctx.xer);
	// bne cr6,0x82eb1e04
	if (!ctx.cr6.eq) goto loc_82EB1E04;
loc_82EB1EC0:
	// lwz r23,0(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r23,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// beq cr6,0x82eb2148
	if (ctx.cr6.eq) goto loc_82EB2148;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ea1f20
	ctx.lr = 0x82EB1ED8;
	sub_82EA1F20(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb1eec
	if (ctx.cr6.eq) goto loc_82EB1EEC;
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x82eb1efc
	goto loc_82EB1EFC;
loc_82EB1EEC:
	// cmplwi cr6,r15,6
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 6, ctx.xer);
	// li r11,18
	ctx.r11.s64 = 18;
	// beq cr6,0x82eb1efc
	if (ctx.cr6.eq) goto loc_82EB1EFC;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82EB1EFC:
	// stw r11,68(r17)
	PPC_STORE_U32(ctx.r17.u32 + 68, ctx.r11.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82eb1f28
	if (!ctx.cr6.eq) goto loc_82EB1F28;
	// cmplwi cr6,r18,1024
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 1024, ctx.xer);
	// blt cr6,0x82eb2148
	if (ctx.cr6.lt) goto loc_82EB2148;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// addi r19,r19,1024
	ctx.r19.s64 = ctx.r19.s64 + 1024;
	// addi r18,r18,-1024
	ctx.r18.s64 = ctx.r18.s64 + -1024;
	// b 0x82eb1f2c
	goto loc_82EB1F2C;
loc_82EB1F28:
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
loc_82EB1F2C:
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82eb2134
	if (ctx.cr6.eq) goto loc_82EB2134;
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r22,-1
	ctx.r22.s64 = -1;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EB1F44:
	// lwz r30,12(r17)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r28,16(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// lwz r29,20(r17)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// bne cr6,0x82eb1f60
	if (!ctx.cr6.eq) goto loc_82EB1F60;
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// b 0x82eb1fac
	goto loc_82EB1FAC;
loc_82EB1F60:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82299698
	ctx.lr = 0x82EB1F6C;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb1f98
	if (ctx.cr0.eq) goto loc_82EB1F98;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r27,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r27.u32);
	// stw r27,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r27.u32);
	// stw r27,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r27.u32);
	// stw r27,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r27.u32);
	// b 0x82eb1f9c
	goto loc_82EB1F9C;
loc_82EB1F98:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82EB1F9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb213c
	if (ctx.cr6.eq) goto loc_82EB213C;
	// stw r11,80(r21)
	PPC_STORE_U32(ctx.r21.u32 + 80, ctx.r11.u32);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
loc_82EB1FAC:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82eb2128
	if (ctx.cr6.eq) goto loc_82EB2128;
loc_82EB1FB8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82eb1fc8
	if (!ctx.cr6.eq) goto loc_82EB1FC8;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// b 0x82eb2014
	goto loc_82EB2014;
loc_82EB1FC8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82299698
	ctx.lr = 0x82EB1FD4;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb2000
	if (ctx.cr0.eq) goto loc_82EB2000;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r27,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r27.u32);
	// stw r27,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r27.u32);
	// stw r27,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r27.u32);
	// stw r27,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r27.u32);
	// b 0x82eb2004
	goto loc_82EB2004;
loc_82EB2000:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82EB2004:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb213c
	if (ctx.cr6.eq) goto loc_82EB213C;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82EB2014:
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// rlwinm r11,r23,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// ori r10,r10,11
	ctx.r10.u64 = ctx.r10.u64 | 11;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82eb20a8
	if (ctx.cr6.lt) goto loc_82EB20A8;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eb209c
	if (!ctx.cr6.gt) goto loc_82EB209C;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 | 10;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eb20a8
	if (!ctx.cr6.gt) goto loc_82EB20A8;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eb209c
	if (!ctx.cr6.gt) goto loc_82EB209C;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,18
	ctx.r10.u64 = ctx.r10.u64 | 18;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82eb2090
	if (ctx.cr6.eq) goto loc_82EB2090;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addi r11,r11,-19
	ctx.r11.s64 = ctx.r11.s64 + -19;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82eb20a8
	if (ctx.cr6.gt) goto loc_82EB20A8;
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// rlwinm r11,r11,2,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
loc_82EB2080:
	// addi r10,r28,3
	ctx.r10.s64 = ctx.r28.s64 + 3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x82eb20b8
	goto loc_82EB20B8;
loc_82EB2090:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// rlwinm r11,r11,1,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFF8;
	// b 0x82eb2080
	goto loc_82EB2080;
loc_82EB209C:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// rlwinm r11,r11,1,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFC;
	// b 0x82eb20b4
	goto loc_82EB20B4;
loc_82EB20A8:
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
loc_82EB20B4:
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
loc_82EB20B8:
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// stw r19,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r19.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// rlwinm r8,r23,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// cmplw cr6,r18,r9
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// blt cr6,0x82eb2148
	if (ctx.cr6.lt) goto loc_82EB2148;
	// add r19,r9,r19
	ctx.r19.u64 = ctx.r9.u64 + ctx.r19.u64;
	// subf r18,r9,r18
	ctx.r18.s64 = ctx.r18.s64 - ctx.r9.s64;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x82eb2104
	if (ctx.cr6.eq) goto loc_82EB2104;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
loc_82EB2104:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// beq cr6,0x82eb2110
	if (ctx.cr6.eq) goto loc_82EB2110;
	// rlwinm r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
loc_82EB2110:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// beq cr6,0x82eb211c
	if (ctx.cr6.eq) goto loc_82EB211C;
	// rlwinm r29,r29,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
loc_82EB211C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r16
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x82eb1fb8
	if (ctx.cr6.lt) goto loc_82EB1FB8;
loc_82EB2128:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r24,r15
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x82eb1f44
	if (ctx.cr6.lt) goto loc_82EB1F44;
loc_82EB2134:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb2150
	goto loc_82EB2150;
loc_82EB213C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb2150
	goto loc_82EB2150;
loc_82EB2148:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EB2150:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB2158"))) PPC_WEAK_FUNC(sub_82EB2158);
PPC_FUNC_IMPL(__imp__sub_82EB2158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82EB2160;
	__savegprlr_24(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82eb218c
	if (ctx.cr6.eq) goto loc_82EB218C;
loc_82EB217C:
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb217c
	if (!ctx.cr6.eq) goto loc_82EB217C;
loc_82EB218C:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r31,r11,18592
	ctx.r31.s64 = ctx.r11.s64 + 18592;
	// lwz r11,18592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18592);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// beq cr6,0x82eb21c8
	if (ctx.cr6.eq) goto loc_82EB21C8;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r10,0,26,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
loc_82EB21AC:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82eb21c8
	if (ctx.cr6.eq) goto loc_82EB21C8;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// bne cr6,0x82eb21ac
	if (!ctx.cr6.eq) goto loc_82EB21AC;
loc_82EB21C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// bne cr6,0x82eb21e4
	if (!ctx.cr6.eq) goto loc_82EB21E4;
loc_82EB21D8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82eb25e8
	goto loc_82EB25E8;
loc_82EB21E4:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82ea1f20
	ctx.lr = 0x82EB21EC;
	sub_82EA1F20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,17476
	ctx.r11.s64 = 1145307136;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,21280
	ctx.r11.u64 = ctx.r11.u64 | 21280;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r27,r10,29,3,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB2218;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb21d8
	if (ctx.cr0.lt) goto loc_82EB21D8;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cb16f0
	ctx.lr = 0x82EB2230;
	sub_82CB16F0(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r9,124
	ctx.r9.s64 = 124;
	// li r8,4103
	ctx.r8.s64 = 4103;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82EB2260;
	sub_82CB1160(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,4096
	ctx.r11.s64 = 4096;
	// clrlwi. r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// beq 0x82eb227c
	if (ctx.cr0.eq) goto loc_82EB227C;
	// li r11,4098
	ctx.r11.s64 = 4098;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
loc_82EB227C:
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eb228c
	if (ctx.cr0.eq) goto loc_82EB228C;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
loc_82EB228C:
	// lwz r10,76(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb22b4
	if (ctx.cr6.eq) goto loc_82EB22B4;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// ori r10,r10,4103
	ctx.r10.u64 = ctx.r10.u64 | 4103;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
loc_82EB22B4:
	// lwz r10,80(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb22d4
	if (ctx.cr6.eq) goto loc_82EB22D4;
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// ori r10,r10,65024
	ctx.r10.u64 = ctx.r10.u64 | 65024;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
loc_82EB22D4:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82eb22fc
	if (!ctx.cr6.gt) goto loc_82EB22FC;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,220(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// oris r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 | 2097152;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
loc_82EB22FC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb1a88
	ctx.lr = 0x82EB2308;
	sub_82EB1A88(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,124
	ctx.r5.s64 = 124;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB231C;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb21d8
	if (ctx.cr0.lt) goto loc_82EB21D8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82eb2368
	if (!ctx.cr6.eq) goto loc_82EB2368;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r7,256
	ctx.r7.s64 = 256;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83203f50
	ctx.lr = 0x82EB234C;
	sub_83203F50(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB2360;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb21d8
	if (ctx.cr0.lt) goto loc_82EB21D8;
loc_82EB2368:
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82EB236C:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82eb25d8
	if (ctx.cr6.eq) goto loc_82EB25D8;
loc_82EB2378:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r3,r11,r9
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// bl 0x82299698
	ctx.lr = 0x82EB2394;
	sub_82299698(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82eb25f0
	if (ctx.cr0.eq) goto loc_82EB25F0;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82eb23e0
	if (!ctx.cr6.gt) goto loc_82EB23E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x832043e8
	ctx.lr = 0x82EB23DC;
	sub_832043E8(ctx, base);
	// b 0x82eb23f8
	goto loc_82EB23F8;
loc_82EB23E0:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83204390
	ctx.lr = 0x82EB23F8;
	sub_83204390(ctx, base);
loc_82EB23F8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb25b4
	if (!ctx.cr6.gt) goto loc_82EB25B4;
loc_82EB2408:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb25a4
	if (!ctx.cr6.gt) goto loc_82EB25A4;
loc_82EB2418:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,11
	ctx.r10.u64 = ctx.r10.u64 | 11;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82eb2544
	if (ctx.cr6.lt) goto loc_82EB2544;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eb2504
	if (!ctx.cr6.gt) goto loc_82EB2504;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 | 10;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eb2544
	if (!ctx.cr6.gt) goto loc_82EB2544;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82eb2504
	if (!ctx.cr6.gt) goto loc_82EB2504;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,18
	ctx.r10.u64 = ctx.r10.u64 | 18;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82eb24c4
	if (ctx.cr6.eq) goto loc_82EB24C4;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addi r11,r11,-19
	ctx.r11.s64 = ctx.r11.s64 + -19;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82eb2544
	if (ctx.cr6.gt) goto loc_82EB2544;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFF0;
	// rlwinm r5,r9,2,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFF0;
loc_82EB24BC:
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// b 0x82eb2578
	goto loc_82EB2578;
loc_82EB24C4:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r7,1,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFF8;
	// rlwinm r5,r9,1,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFF8;
	// b 0x82eb24bc
	goto loc_82EB24BC;
loc_82EB2504:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r9,r6,r27
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r5,r10,1,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFC;
	// b 0x82eb257c
	goto loc_82EB257C;
loc_82EB2544:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r9,r27
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// mullw r5,r6,r27
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
loc_82EB2578:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EB257C:
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB258C;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb25fc
	if (ctx.cr0.lt) goto loc_82EB25FC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb2418
	if (ctx.cr6.lt) goto loc_82EB2418;
loc_82EB25A4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb2408
	if (ctx.cr6.lt) goto loc_82EB2408;
loc_82EB25B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eb25cc
	if (ctx.cr6.eq) goto loc_82EB25CC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB25CC;
	sub_822996C0(ctx, base);
loc_82EB25CC:
	// lwz r31,76(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82eb2378
	if (!ctx.cr6.eq) goto loc_82EB2378;
loc_82EB25D8:
	// lwz r25,80(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82eb236c
	if (!ctx.cr6.eq) goto loc_82EB236C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB25E8:
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82EB25F0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb25e8
	goto loc_82EB25E8;
loc_82EB25FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eb21d8
	if (ctx.cr6.eq) goto loc_82EB21D8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB2614;
	sub_822996C0(ctx, base);
	// b 0x82eb21d8
	goto loc_82EB21D8;
}

__attribute__((alias("__imp__sub_82EB2618"))) PPC_WEAK_FUNC(sub_82EB2618);
PPC_FUNC_IMPL(__imp__sub_82EB2618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82EB2620;
	__savegprlr_25(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// ori r25,r9,16389
	ctx.r25.u64 = ctx.r9.u64 | 16389;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 * 12;
	// bl 0x82299698
	ctx.lr = 0x82EB264C;
	sub_82299698(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82eb2660
	if (!ctx.cr0.eq) goto loc_82EB2660;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb27cc
	goto loc_82EB27CC;
loc_82EB2660:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,6690
	ctx.r10.s64 = 438435840;
	// ori r27,r10,43558
	ctx.r27.u64 = ctx.r10.u64 | 43558;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82eb2684
	if (!ctx.cr6.eq) goto loc_82EB2684;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-3444
	ctx.r4.s64 = ctx.r11.s64 + -3444;
	// b 0x82eb269c
	goto loc_82EB269C;
loc_82EB2684:
	// lis r10,11682
	ctx.r10.s64 = 765591552;
	// ori r10,r10,43556
	ctx.r10.u64 = ctx.r10.u64 | 43556;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82eb27bc
	if (!ctx.cr6.eq) goto loc_82EB27BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-3448
	ctx.r4.s64 = ctx.r11.s64 + -3448;
loc_82EB269C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB26AC;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb27bc
	if (ctx.cr0.lt) goto loc_82EB27BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r11,-3352
	ctx.r5.s64 = ctx.r11.s64 + -3352;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eab788
	ctx.lr = 0x82EB26D0;
	sub_82EAB788(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EB26D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eb26d8
	if (!ctx.cr6.eq) goto loc_82EB26D8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB2704;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb27bc
	if (ctx.cr0.lt) goto loc_82EB27BC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r9,r29
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt 0x82eb27b8
	if (ctx.cr0.lt) goto loc_82EB27B8;
loc_82EB2728:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bne cr6,0x82eb278c
	if (!ctx.cr6.eq) goto loc_82EB278C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb277c
	if (ctx.cr6.eq) goto loc_82EB277C;
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
loc_82EB2754:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82eb2754
	if (!ctx.cr6.eq) goto loc_82EB2754;
loc_82EB277C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// b 0x82eb2794
	goto loc_82EB2794;
loc_82EB278C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EB2794:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB27A0;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb27bc
	if (ctx.cr0.lt) goto loc_82EB27BC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bge 0x82eb2728
	if (!ctx.cr0.lt) goto loc_82EB2728;
loc_82EB27B8:
	// li r25,0
	ctx.r25.s64 = 0;
loc_82EB27BC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB27C8;
	sub_822996C0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82EB27CC:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB27D4"))) PPC_WEAK_FUNC(sub_82EB27D4);
PPC_FUNC_IMPL(__imp__sub_82EB27D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB27D8"))) PPC_WEAK_FUNC(sub_82EB27D8);
PPC_FUNC_IMPL(__imp__sub_82EB27D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82EB27E0;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82cb6adc
	ctx.lr = 0x82EB27E8;
	__savefpr_25(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r20,-32768
	ctx.r20.s64 = -2147483648;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// ori r20,r20,16389
	ctx.r20.u64 = ctx.r20.u64 | 16389;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bgt cr6,0x82eb2d54
	if (ctx.cr6.gt) goto loc_82EB2D54;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bgt cr6,0x82eb2d54
	if (ctx.cr6.gt) goto loc_82EB2D54;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82299698
	ctx.lr = 0x82EB282C;
	sub_82299698(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82299698
	ctx.lr = 0x82EB283C;
	sub_82299698(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82eb2d24
	if (ctx.cr6.eq) goto loc_82EB2D24;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82eb2d24
	if (ctx.cr6.eq) goto loc_82EB2D24;
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// lwz r4,18584(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18584);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EB285C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eb285c
	if (!ctx.cr6.eq) goto loc_82EB285C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82ead2a0
	ctx.lr = 0x82EB2884;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ff2768
	ctx.lr = 0x82EB2894;
	sub_82FF2768(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EB289C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eb289c
	if (!ctx.cr6.eq) goto loc_82EB289C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB28C8;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB28E8;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ff2560
	ctx.lr = 0x82EB28F8;
	sub_82FF2560(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EB2900:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eb2900
	if (!ctx.cr6.eq) goto loc_82EB2900;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB292C;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-11748
	ctx.r4.s64 = ctx.r11.s64 + -11748;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB294C;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r7,12(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r6,16(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r5,r11,-3332
	ctx.r5.s64 = ctx.r11.s64 + -3332;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eab788
	ctx.lr = 0x82EB2970;
	sub_82EAB788(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EB2978:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82eb2978
	if (!ctx.cr6.eq) goto loc_82EB2978;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB29A4;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb2b48
	if (!ctx.cr6.gt) goto loc_82EB2B48;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f26,-16900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16900);
	ctx.f26.f64 = double(temp.f32);
	// lfd f25,-17608(r10)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r10.u32 + -17608);
	// lfs f27,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f27.f64 = double(temp.f32);
loc_82EB29D4:
	// lwz r8,12(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// mullw r9,r8,r30
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r9,r23
	ctx.r31.u64 = ctx.r9.u64 + ctx.r23.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82eb2b38
	if (ctx.cr6.eq) goto loc_82EB2B38;
loc_82EB2A00:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x82eb2a14
	if (!ctx.cr6.gt) goto loc_82EB2A14;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// b 0x82eb2a18
	goto loc_82EB2A18;
loc_82EB2A14:
	// fmr f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f27.f64;
loc_82EB2A18:
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x82eb2a2c
	if (!ctx.cr6.gt) goto loc_82EB2A2C;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// b 0x82eb2a30
	goto loc_82EB2A30;
loc_82EB2A2C:
	// fmr f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f27.f64;
loc_82EB2A30:
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x82eb2a44
	if (!ctx.cr6.gt) goto loc_82EB2A44;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// b 0x82eb2a48
	goto loc_82EB2A48;
loc_82EB2A44:
	// fmr f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f27.f64;
loc_82EB2A48:
	// fcmpu cr6,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f29.f64);
	// ble cr6,0x82eb2a58
	if (!ctx.cr6.gt) goto loc_82EB2A58;
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// b 0x82eb2a5c
	goto loc_82EB2A5C;
loc_82EB2A58:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
loc_82EB2A5C:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bgt cr6,0x82eb2a68
	if (ctx.cr6.gt) goto loc_82EB2A68;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_82EB2A68:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// fcmpu cr6,f1,f25
	ctx.cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// ble cr6,0x82eb2b10
	if (!ctx.cr6.gt) goto loc_82EB2B10;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82cb5200
	ctx.lr = 0x82EB2A7C;
	sub_82CB5200(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lbz r10,103(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lbz r9,103(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lbz r11,111(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// bne 0x82eb2aec
	if (!ctx.cr0.eq) goto loc_82EB2AEC;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb2aec
	if (!ctx.cr0.eq) goto loc_82EB2AEC;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq 0x82eb2af0
	if (ctx.cr0.eq) goto loc_82EB2AF0;
loc_82EB2AEC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EB2AF0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb2b04
	if (ctx.cr0.eq) goto loc_82EB2B04;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82eb2b08
	goto loc_82EB2B08;
loc_82EB2B04:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82EB2B08:
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// b 0x82eb2b20
	goto loc_82EB2B20;
loc_82EB2B10:
	// stb r22,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r22.u8);
	// stb r22,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r22.u8);
	// stb r22,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r22.u8);
	// stb r22,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r22.u8);
loc_82EB2B20:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb2a00
	if (ctx.cr6.lt) goto loc_82EB2A00;
loc_82EB2B38:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb29d4
	if (ctx.cr6.lt) goto loc_82EB29D4;
loc_82EB2B48:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb2d1c
	if (!ctx.cr6.gt) goto loc_82EB2D1C;
	// li r25,2
	ctx.r25.s64 = 2;
loc_82EB2B5C:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stb r25,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r25.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r25,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r25.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// bl 0x82ead2a0
	ctx.lr = 0x82EB2B88;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_82EB2B94:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r30,r10,r23
	ctx.r30.u64 = ctx.r10.u64 + ctx.r23.u64;
	// beq cr6,0x82eb2d00
	if (ctx.cr6.eq) goto loc_82EB2D00;
loc_82EB2BB4:
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eb2bfc
	if (!ctx.cr6.lt) goto loc_82EB2BFC;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82EB2BC8:
	// cmplwi cr6,r9,127
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 127, ctx.xer);
	// bge cr6,0x82eb2bfc
	if (!ctx.cr6.lt) goto loc_82EB2BFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbzx r7,r7,r30
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82eb2bfc
	if (!ctx.cr6.eq) goto loc_82EB2BFC;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb2bc8
	if (ctx.cr6.lt) goto loc_82EB2BC8;
loc_82EB2BFC:
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// ble cr6,0x82eb2c40
	if (!ctx.cr6.gt) goto loc_82EB2C40;
	// addi r11,r29,128
	ctx.r11.s64 = ctx.r29.s64 + 128;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB2C2C;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// b 0x82eb2cf0
	goto loc_82EB2CF0;
loc_82EB2C40:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r11.u8);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eb2ca8
	if (!ctx.cr6.lt) goto loc_82EB2CA8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EB2C60:
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bge cr6,0x82eb2ca8
	if (!ctx.cr6.lt) goto loc_82EB2CA8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// lbz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82eb2ca8
	if (ctx.cr6.eq) goto loc_82EB2CA8;
	// stbx r10,r11,r21
	PPC_STORE_U8(ctx.r11.u32 + ctx.r21.u32, ctx.r10.u8);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb2c60
	if (ctx.cr6.lt) goto loc_82EB2C60;
loc_82EB2CA8:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB2CBC;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ead2a0
	ctx.lr = 0x82EB2CD8;
	sub_82EAD2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb2d2c
	if (ctx.cr0.lt) goto loc_82EB2D2C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_82EB2CF0:
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb2bb4
	if (ctx.cr6.lt) goto loc_82EB2BB4;
loc_82EB2D00:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x82eb2b94
	if (ctx.cr6.lt) goto loc_82EB2B94;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb2b5c
	if (ctx.cr6.lt) goto loc_82EB2B5C;
loc_82EB2D1C:
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// b 0x82eb2d2c
	goto loc_82EB2D2C;
loc_82EB2D24:
	// lis r20,-32761
	ctx.r20.s64 = -2147024896;
	// ori r20,r20,14
	ctx.r20.u64 = ctx.r20.u64 | 14;
loc_82EB2D2C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82eb2d40
	if (ctx.cr6.eq) goto loc_82EB2D40;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB2D40;
	sub_822996C0(ctx, base);
loc_82EB2D40:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82eb2d54
	if (ctx.cr6.eq) goto loc_82EB2D54;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB2D54;
	sub_822996C0(ctx, base);
loc_82EB2D54:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82cb6b28
	ctx.lr = 0x82EB2D64;
	__restfpr_25(ctx, base);
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB2D68"))) PPC_WEAK_FUNC(sub_82EB2D68);
PPC_FUNC_IMPL(__imp__sub_82EB2D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82EB2D70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,14
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 14, ctx.xer);
	// blt cr6,0x82eb2dcc
	if (ctx.cr6.lt) goto loc_82EB2DCC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x82cb1160
	ctx.lr = 0x82EB2D94;
	sub_82CB1160(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ead860
	ctx.lr = 0x82EB2DA0;
	sub_82EAD860(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,19778
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19778, ctx.xer);
	// bne cr6,0x82eb2dcc
	if (!ctx.cr6.eq) goto loc_82EB2DCC;
	// lwz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 82);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82eb2dcc
	if (ctx.cr6.gt) goto loc_82EB2DCC;
	// addi r5,r31,-14
	ctx.r5.s64 = ctx.r31.s64 + -14;
	// addi r4,r30,14
	ctx.r4.s64 = ctx.r30.s64 + 14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eaf190
	ctx.lr = 0x82EB2DC8;
	sub_82EAF190(ctx, base);
	// b 0x82eb2dd4
	goto loc_82EB2DD4;
loc_82EB2DCC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82EB2DD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB2DDC"))) PPC_WEAK_FUNC(sub_82EB2DDC);
PPC_FUNC_IMPL(__imp__sub_82EB2DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2DE0"))) PPC_WEAK_FUNC(sub_82EB2DE0);
PPC_FUNC_IMPL(__imp__sub_82EB2DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82EB2DE8;
	__savegprlr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eb31c8
	if (ctx.cr6.eq) goto loc_82EB31C8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eb31c8
	if (ctx.cr6.eq) goto loc_82EB31C8;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82eb2e28
	if (!ctx.cr6.eq) goto loc_82EB2E28;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82eb2e28
	if (!ctx.cr6.eq) goto loc_82EB2E28;
loc_82EB2E20:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb31d0
	goto loc_82EB31D0;
loc_82EB2E28:
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// li r19,1
	ctx.r19.s64 = 1;
	// li r23,3
	ctx.r23.s64 = 3;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r19,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// addi r25,r1,112
	ctx.r25.s64 = ctx.r1.s64 + 112;
loc_82EB2E7C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// stw r20,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r20.u32);
	// stw r23,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r23.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bgt cr6,0x82eb2f78
	if (ctx.cr6.gt) goto loc_82EB2F78;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-3312
	ctx.r12.s64 = ctx.r12.s64 + -3312;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32021
	ctx.r12.s64 = -2098528256;
	// addi r12,r12,11968
	ctx.r12.s64 = ctx.r12.s64 + 11968;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82EB2EC0;
	case 1:
		goto loc_82EB2F00;
	case 2:
		goto loc_82EB2F50;
	case 3:
		goto loc_82EB2F14;
	case 4:
		goto loc_82EB2EEC;
	case 5:
		goto loc_82EB2ED4;
	case 6:
		goto loc_82EB2F64;
	case 7:
		goto loc_82EB2F3C;
	case 8:
		goto loc_82EB2F28;
	default:
		__builtin_unreachable();
	}
loc_82EB2EC0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb2d68
	ctx.lr = 0x82EB2ED0;
	sub_82EB2D68(ctx, base);
	// b 0x82eb2f74
	goto loc_82EB2F74;
loc_82EB2ED4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb0f68
	ctx.lr = 0x82EB2EE4;
	sub_82EB0F68(ctx, base);
loc_82EB2EE4:
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// b 0x82eb2f74
	goto loc_82EB2F74;
loc_82EB2EEC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb1cb8
	ctx.lr = 0x82EB2EFC;
	sub_82EB1CB8(ctx, base);
	// b 0x82eb2f74
	goto loc_82EB2F74;
loc_82EB2F00:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb02a8
	ctx.lr = 0x82EB2F10;
	sub_82EB02A8(ctx, base);
	// b 0x82eb2ee4
	goto loc_82EB2EE4;
loc_82EB2F14:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb1448
	ctx.lr = 0x82EB2F24;
	sub_82EB1448(ctx, base);
	// b 0x82eb2f74
	goto loc_82EB2F74;
loc_82EB2F28:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eae240
	ctx.lr = 0x82EB2F38;
	sub_82EAE240(ctx, base);
	// b 0x82eb2f74
	goto loc_82EB2F74;
loc_82EB2F3C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eae648
	ctx.lr = 0x82EB2F4C;
	sub_82EAE648(ctx, base);
	// b 0x82eb2f74
	goto loc_82EB2F74;
loc_82EB2F50:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb0888
	ctx.lr = 0x82EB2F60;
	sub_82EB0888(ctx, base);
	// b 0x82eb2f74
	goto loc_82EB2F74;
loc_82EB2F64:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf190
	ctx.lr = 0x82EB2F74;
	sub_82EAF190(ctx, base);
loc_82EB2F74:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EB2F78:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82eb3028
	if (!ctx.cr6.lt) goto loc_82EB3028;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb2fa0
	if (ctx.cr6.eq) goto loc_82EB2FA0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb2fa0
	if (ctx.cr6.eq) goto loc_82EB2FA0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EB2FA0;
	sub_822996C0(ctx, base);
loc_82EB2FA0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb2fc0
	if (ctx.cr6.eq) goto loc_82EB2FC0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb2fc0
	if (ctx.cr6.eq) goto loc_82EB2FC0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EB2FC0;
	sub_822996C0(ctx, base);
loc_82EB2FC0:
	// lwz r27,76(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb2fe0
	if (ctx.cr6.eq) goto loc_82EB2FE0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82eae008
	ctx.lr = 0x82EB2FD4;
	sub_82EAE008(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB2FE0;
	sub_822996C0(ctx, base);
loc_82EB2FE0:
	// lwz r27,80(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb3000
	if (ctx.cr6.eq) goto loc_82EB3000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82eae008
	ctx.lr = 0x82EB2FF4;
	sub_82EAE008(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB3000;
	sub_822996C0(ctx, base);
loc_82EB3000:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stw r21,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r21.u32);
	// stw r21,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r21.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// stw r21,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r21.u32);
	// cmplwi cr6,r24,9
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 9, ctx.xer);
	// stw r21,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r21.u32);
	// stw r21,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r21.u32);
	// stw r21,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r21.u32);
	// blt cr6,0x82eb2e7c
	if (ctx.cr6.lt) goto loc_82EB2E7C;
loc_82EB3028:
	// cmplwi cr6,r24,9
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 9, ctx.xer);
	// bne cr6,0x82eb303c
	if (!ctx.cr6.eq) goto loc_82EB303C;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x82eb31d0
	goto loc_82EB31D0;
loc_82EB303C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82eb30f4
	if (ctx.cr6.eq) goto loc_82EB30F4;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82eb30f4
	if (ctx.cr6.eq) goto loc_82EB30F4;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EB3050:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82eb30e8
	if (ctx.cr6.eq) goto loc_82EB30E8;
loc_82EB305C:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r3,r11,r9
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// bl 0x82299698
	ctx.lr = 0x82EB3078;
	sub_82299698(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82eb3150
	if (ctx.cr0.eq) goto loc_82EB3150;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r28,20(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x832043e8
	ctx.lr = 0x82EB30B8;
	sub_832043E8(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r28,r30,56
	ctx.r28.s64 = ctx.r30.s64 + 56;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb30d4
	if (ctx.cr6.eq) goto loc_82EB30D4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822996c0
	ctx.lr = 0x82EB30D4;
	sub_822996C0(ctx, base);
loc_82EB30D4:
	// lwz r30,76(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r19,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r19.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82eb305c
	if (!ctx.cr6.eq) goto loc_82EB305C;
loc_82EB30E8:
	// lwz r26,80(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82eb3050
	if (!ctx.cr6.eq) goto loc_82EB3050;
loc_82EB30F4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82eb317c
	if (ctx.cr6.eq) goto loc_82EB317C;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82EB310C;
	sub_82CB16F0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r11.u32);
	// stw r19,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r19.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ea20e0
	ctx.lr = 0x82EB3130;
	sub_82EA20E0(ctx, base);
	// stw r3,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r3.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// stw r10,20(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20, ctx.r10.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r10,24(r22)
	PPC_STORE_U32(ctx.r22.u32 + 24, ctx.r10.u32);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// b 0x82eb3174
	goto loc_82EB3174;
loc_82EB3150:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82eb31d0
	goto loc_82EB31D0;
loc_82EB315C:
	// lwz r10,12(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EB3174:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82eb315c
	if (!ctx.cr6.eq) goto loc_82EB315C;
loc_82EB317C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eb31b8
	if (ctx.cr6.eq) goto loc_82EB31B8;
loc_82EB3188:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r21,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r21.u32);
	// stw r21,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r21.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stw r21,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r21.u32);
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb3188
	if (!ctx.cr6.eq) goto loc_82EB3188;
loc_82EB31B8:
	// lwz r31,80(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82eb317c
	if (!ctx.cr6.eq) goto loc_82EB317C;
	// b 0x82eb2e20
	goto loc_82EB2E20;
loc_82EB31C8:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EB31D0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB31D8"))) PPC_WEAK_FUNC(sub_82EB31D8);
PPC_FUNC_IMPL(__imp__sub_82EB31D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x82EB31E0;
	__savegprlr_18(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// bl 0x82ead258
	ctx.lr = 0x82EB31FC;
	sub_82EAD258(ctx, base);
	// cmplwi cr6,r20,8
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 8, ctx.xer);
	// bgt cr6,0x82eb35d4
	if (ctx.cr6.gt) goto loc_82EB35D4;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-3296
	ctx.r12.s64 = ctx.r12.s64 + -3296;
	// lbzx r0,r12,r20
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r20.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32021
	ctx.r12.s64 = -2098528256;
	// addi r12,r12,12844
	ctx.r12.s64 = ctx.r12.s64 + 12844;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r20.u64) {
	case 0:
		goto loc_82EB322C;
	case 1:
		goto loc_82EB3248;
	case 2:
		goto loc_82EB35D4;
	case 3:
		goto loc_82EB3248;
	case 4:
		goto loc_82EB3238;
	case 5:
		goto loc_82EB35D4;
	case 6:
		goto loc_82EB322C;
	case 7:
		goto loc_82EB3258;
	case 8:
		goto loc_82EB3258;
	default:
		__builtin_unreachable();
	}
loc_82EB322C:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r31,r11,18344
	ctx.r31.s64 = ctx.r11.s64 + 18344;
	// b 0x82eb3264
	goto loc_82EB3264;
loc_82EB3238:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r11,r11,18344
	ctx.r11.s64 = ctx.r11.s64 + 18344;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
	// b 0x82eb3264
	goto loc_82EB3264;
loc_82EB3248:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r11,r11,18344
	ctx.r11.s64 = ctx.r11.s64 + 18344;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// b 0x82eb3264
	goto loc_82EB3264;
loc_82EB3258:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r11,r11,18344
	ctx.r11.s64 = ctx.r11.s64 + 18344;
	// addi r31,r11,72
	ctx.r31.s64 = ctx.r11.s64 + 72;
loc_82EB3264:
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x82ea1f20
	ctx.lr = 0x82EB326C;
	sub_82EA1F20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,8(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea2020
	ctx.lr = 0x82EB327C;
	sub_82EA2020(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// bne cr6,0x82eb32a0
	if (!ctx.cr6.eq) goto loc_82EB32A0;
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_82EB3290:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eadee8
	ctx.lr = 0x82EB3298;
	sub_82EADEE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82eb35e4
	goto loc_82EB35E4;
loc_82EB32A0:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// xor r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r25.u64;
	// rlwinm. r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb345c
	if (ctx.cr0.eq) goto loc_82EB345C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb5410
	ctx.lr = 0x82EB32B8;
	sub_82EB5410(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ea1f20
	ctx.lr = 0x82EB32C0;
	sub_82EA1F20(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// rlwinm r23,r11,29,3,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EB32D4:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82eb3448
	if (ctx.cr6.eq) goto loc_82EB3448;
loc_82EB32E0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// mullw r3,r11,r9
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// bl 0x82299698
	ctx.lr = 0x82EB3300;
	sub_82299698(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82eb347c
	if (ctx.cr0.eq) goto loc_82EB347C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r27,r31,52
	ctx.r27.s64 = ctx.r31.s64 + 52;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82EB3340;
	sub_82CB1160(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EB3350;
	sub_82CB1160(ctx, base);
	// stw r24,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r24.u32);
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82EB33BC;
	sub_82CB1160(ctx, base);
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb9060
	ctx.lr = 0x82EB33E4;
	sub_82EB9060(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82eb3490
	if (ctx.cr0.lt) goto loc_82EB3490;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb3410
	if (ctx.cr6.eq) goto loc_82EB3410;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82eb3410
	if (ctx.cr6.eq) goto loc_82EB3410;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822996c0
	ctx.lr = 0x82EB340C;
	sub_822996C0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82EB3410:
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EB3428;
	sub_82CB1160(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r24,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r24.u32);
	// lwz r31,76(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82eb32e0
	if (!ctx.cr6.eq) goto loc_82EB32E0;
loc_82EB3448:
	// lwz r22,80(r22)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r22.u32 + 80);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82eb32d4
	if (!ctx.cr6.eq) goto loc_82EB32D4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb6330
	ctx.lr = 0x82EB345C;
	sub_82EB6330(ctx, base);
loc_82EB345C:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eadf50
	ctx.lr = 0x82EB346C;
	sub_82EADF50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82eb34ac
	if (!ctx.cr0.lt) goto loc_82EB34AC;
loc_82EB3474:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82eb3290
	goto loc_82EB3290;
loc_82EB347C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb6330
	ctx.lr = 0x82EB3484;
	sub_82EB6330(ctx, base);
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82eb3290
	goto loc_82EB3290;
loc_82EB3490:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822996c0
	ctx.lr = 0x82EB349C;
	sub_822996C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb6330
	ctx.lr = 0x82EB34A4;
	sub_82EB6330(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x82eb3290
	goto loc_82EB3290;
loc_82EB34AC:
	// cmplwi cr6,r20,1
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 1, ctx.xer);
	// blt cr6,0x82eb3544
	if (ctx.cr6.lt) goto loc_82EB3544;
	// beq cr6,0x82eb3534
	if (ctx.cr6.eq) goto loc_82EB3534;
	// cmplwi cr6,r20,3
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 3, ctx.xer);
	// beq cr6,0x82eb3524
	if (ctx.cr6.eq) goto loc_82EB3524;
	// cmplwi cr6,r20,4
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 4, ctx.xer);
	// beq cr6,0x82eb3514
	if (ctx.cr6.eq) goto loc_82EB3514;
	// cmplwi cr6,r20,6
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 6, ctx.xer);
	// beq cr6,0x82eb350c
	if (ctx.cr6.eq) goto loc_82EB350C;
	// cmplwi cr6,r20,7
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 7, ctx.xer);
	// beq cr6,0x82eb34fc
	if (ctx.cr6.eq) goto loc_82EB34FC;
	// cmplwi cr6,r20,8
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 8, ctx.xer);
	// beq cr6,0x82eb34ec
	if (ctx.cr6.eq) goto loc_82EB34EC;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16385
	ctx.r31.u64 = ctx.r31.u64 | 16385;
	// b 0x82eb3558
	goto loc_82EB3558;
loc_82EB34EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82eb2618
	ctx.lr = 0x82EB34F8;
	sub_82EB2618(ctx, base);
	// b 0x82eb3554
	goto loc_82EB3554;
loc_82EB34FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82eb27d8
	ctx.lr = 0x82EB3508;
	sub_82EB27D8(ctx, base);
	// b 0x82eb3554
	goto loc_82EB3554;
loc_82EB350C:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82eb3548
	goto loc_82EB3548;
loc_82EB3514:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82eb2158
	ctx.lr = 0x82EB3520;
	sub_82EB2158(ctx, base);
	// b 0x82eb3554
	goto loc_82EB3554;
loc_82EB3524:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82eb1250
	ctx.lr = 0x82EB3530;
	sub_82EB1250(ctx, base);
	// b 0x82eb3554
	goto loc_82EB3554;
loc_82EB3534:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82eb05e0
	ctx.lr = 0x82EB3540;
	sub_82EB05E0(ctx, base);
	// b 0x82eb3554
	goto loc_82EB3554;
loc_82EB3544:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82EB3548:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82eafd48
	ctx.lr = 0x82EB3554;
	sub_82EAFD48(ctx, base);
loc_82EB3554:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EB3558:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ead4c0
	ctx.lr = 0x82EB3560;
	sub_82EAD4C0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82eb3290
	if (ctx.cr6.lt) goto loc_82EB3290;
	// cmplwi cr6,r18,2
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 2, ctx.xer);
	// bne cr6,0x82eb35c4
	if (!ctx.cr6.eq) goto loc_82EB35C4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82ee3870
	ctx.lr = 0x82EB357C;
	sub_82EE3870(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82eb3474
	if (ctx.cr0.lt) goto loc_82EB3474;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,108(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r30,0(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB35A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB35B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82EB35C4;
	sub_82CB1160(ctx, base);
loc_82EB35C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eadee8
	ctx.lr = 0x82EB35CC;
	sub_82EADEE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb35e4
	goto loc_82EB35E4;
loc_82EB35D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eadee8
	ctx.lr = 0x82EB35DC;
	sub_82EADEE8(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82EB35E4:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB35EC"))) PPC_WEAK_FUNC(sub_82EB35EC);
PPC_FUNC_IMPL(__imp__sub_82EB35EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB35F0"))) PPC_WEAK_FUNC(sub_82EB35F0);
PPC_FUNC_IMPL(__imp__sub_82EB35F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r9,r5,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r5.s64;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfd f13,-18344(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18344);
loc_82EB360C:
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lfdx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82eb3624
	if (ctx.cr6.lt) goto loc_82EB3624;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x82eb3628
	goto loc_82EB3628;
loc_82EB3624:
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_82EB3628:
	// lfdx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stfd f0,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f0.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb360c
	if (!ctx.cr0.eq) goto loc_82EB360C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3640"))) PPC_WEAK_FUNC(sub_82EB3640);
PPC_FUNC_IMPL(__imp__sub_82EB3640) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82cb1160
	sub_82CB1160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB3654"))) PPC_WEAK_FUNC(sub_82EB3654);
PPC_FUNC_IMPL(__imp__sub_82EB3654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3658"))) PPC_WEAK_FUNC(sub_82EB3658);
PPC_FUNC_IMPL(__imp__sub_82EB3658) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82EB3670:
	// lfdx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfd f0,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb3670
	if (!ctx.cr0.eq) goto loc_82EB3670;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB368C"))) PPC_WEAK_FUNC(sub_82EB368C);
PPC_FUNC_IMPL(__imp__sub_82EB368C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3690"))) PPC_WEAK_FUNC(sub_82EB3690);
PPC_FUNC_IMPL(__imp__sub_82EB3690) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lfd f0,-18352(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -18352);
loc_82EB36B0:
	// lfdx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fdiv f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 / ctx.f13.f64;
	// stfd f13,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f13.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb36b0
	if (!ctx.cr0.eq) goto loc_82EB36B0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB36CC"))) PPC_WEAK_FUNC(sub_82EB36CC);
PPC_FUNC_IMPL(__imp__sub_82EB36CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB36D0"))) PPC_WEAK_FUNC(sub_82EB36D0);
PPC_FUNC_IMPL(__imp__sub_82EB36D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82EB36D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb3718
	if (ctx.cr6.eq) goto loc_82EB3718;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EB36F4:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfdx f1,r29,r31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x82cb2298
	ctx.lr = 0x82EB3700;
	sub_82CB2298(ctx, base);
	// lfdx f0,r29,r31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r31.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// fsub f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 - ctx.f1.f64;
	// stfdx f0,r31,r27
	PPC_STORE_U64(ctx.r31.u32 + ctx.r27.u32, ctx.f0.u64);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb36f4
	if (!ctx.cr0.eq) goto loc_82EB36F4;
loc_82EB3718:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB3720"))) PPC_WEAK_FUNC(sub_82EB3720);
PPC_FUNC_IMPL(__imp__sub_82EB3720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EB3728;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb3770
	if (ctx.cr6.eq) goto loc_82EB3770;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfd f31,-18376(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18376);
loc_82EB3750:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lfdx f2,r11,r31
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82cb59b0
	ctx.lr = 0x82EB3760;
	sub_82CB59B0(ctx, base);
	// stfdx f1,r31,r28
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + ctx.r28.u32, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb3750
	if (!ctx.cr0.eq) goto loc_82EB3750;
loc_82EB3770:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB377C"))) PPC_WEAK_FUNC(sub_82EB377C);
PPC_FUNC_IMPL(__imp__sub_82EB377C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3780"))) PPC_WEAK_FUNC(sub_82EB3780);
PPC_FUNC_IMPL(__imp__sub_82EB3780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82EB3788;
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb3800
	if (ctx.cr6.eq) goto loc_82EB3800;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfd f30,19424(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 19424);
	// lfd f31,-18344(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18344);
loc_82EB37C0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82eb37ec
	if (ctx.cr6.eq) goto loc_82EB37EC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfdx f0,r11,r31
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// fabs f1,f0
	ctx.f1.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// bl 0x82cb4db8
	ctx.lr = 0x82EB37E0;
	sub_82CB4DB8(ctx, base);
	// fmul f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f30.f64;
	// stfdx f0,r31,r27
	PPC_STORE_U64(ctx.r31.u32 + ctx.r27.u32, ctx.f0.u64);
	// b 0x82eb37f0
	goto loc_82EB37F0;
loc_82EB37EC:
	// stfdx f31,r31,r27
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + ctx.r27.u32, ctx.f31.u64);
loc_82EB37F0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb37c0
	if (!ctx.cr0.eq) goto loc_82EB37C0;
loc_82EB3800:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB3810"))) PPC_WEAK_FUNC(sub_82EB3810);
PPC_FUNC_IMPL(__imp__sub_82EB3810) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lfd f0,-18352(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -18352);
loc_82EB3830:
	// lfdx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fsqrt f13,f13
	ctx.f13.f64 = sqrt(ctx.f13.f64);
	// fdiv f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 / ctx.f13.f64;
	// stfd f13,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f13.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82eb3830
	if (!ctx.cr0.eq) goto loc_82EB3830;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3854"))) PPC_WEAK_FUNC(sub_82EB3854);
PPC_FUNC_IMPL(__imp__sub_82EB3854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3858"))) PPC_WEAK_FUNC(sub_82EB3858);
PPC_FUNC_IMPL(__imp__sub_82EB3858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EB3860;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb3898
	if (ctx.cr6.eq) goto loc_82EB3898;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EB387C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfdx f1,r11,r31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82cb4860
	ctx.lr = 0x82EB3888;
	sub_82CB4860(ctx, base);
	// stfdx f1,r31,r28
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + ctx.r28.u32, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb387c
	if (!ctx.cr0.eq) goto loc_82EB387C;
loc_82EB3898:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB38A0"))) PPC_WEAK_FUNC(sub_82EB38A0);
PPC_FUNC_IMPL(__imp__sub_82EB38A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EB38A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb38e0
	if (ctx.cr6.eq) goto loc_82EB38E0;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EB38C4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfdx f1,r11,r31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82cb4940
	ctx.lr = 0x82EB38D0;
	sub_82CB4940(ctx, base);
	// stfdx f1,r31,r28
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + ctx.r28.u32, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb38c4
	if (!ctx.cr0.eq) goto loc_82EB38C4;
loc_82EB38E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB38E8"))) PPC_WEAK_FUNC(sub_82EB38E8);
PPC_FUNC_IMPL(__imp__sub_82EB38E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82EB38F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb3928
	if (ctx.cr6.eq) goto loc_82EB3928;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82EB390C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfdx f1,r11,r31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82cb43f8
	ctx.lr = 0x82EB3918;
	sub_82CB43F8(ctx, base);
	// stfdx f1,r31,r28
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + ctx.r28.u32, ctx.f1.u64);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82eb390c
	if (!ctx.cr0.eq) goto loc_82EB390C;
loc_82EB3928:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

