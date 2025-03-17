#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82E3D3E4"))) PPC_WEAK_FUNC(sub_82E3D3E4);
PPC_FUNC_IMPL(__imp__sub_82E3D3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3D3E8"))) PPC_WEAK_FUNC(sub_82E3D3E8);
PPC_FUNC_IMPL(__imp__sub_82E3D3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E3D3F0;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// beq 0x82e3d494
	if (ctx.cr0.eq) goto loc_82E3D494;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3d420
	if (ctx.cr0.eq) goto loc_82E3D420;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82E3D420:
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e3d434
	if (!ctx.cr0.eq) goto loc_82E3D434;
	// stfs f30,184(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 184, temp.u32);
	// stfs f31,188(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 188, temp.u32);
loc_82E3D434:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e3d5a4
	if (!ctx.cr6.gt) goto loc_82E3D5A4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E3D448:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3d47c
	if (ctx.cr0.eq) goto loc_82E3D47C;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e3d47c
	if (ctx.cr6.eq) goto loc_82E3D47C;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82e3d3e8
	ctx.lr = 0x82E3D474;
	sub_82E3D3E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3d5a8
	if (!ctx.cr0.eq) goto loc_82E3D5A8;
loc_82E3D47C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e3d448
	if (ctx.cr6.lt) goto loc_82E3D448;
	// b 0x82e3d5a4
	goto loc_82E3D5A4;
loc_82E3D494:
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e3d528
	if (ctx.cr0.eq) goto loc_82E3D528;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3d528
	if (ctx.cr0.eq) goto loc_82E3D528;
	// lfs f0,188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,344(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// b 0x82e3d518
	goto loc_82E3D518;
loc_82E3D4C4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// bne cr6,0x82e3d4d4
	if (!ctx.cr6.eq) goto loc_82E3D4D4;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82E3D4D4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// bne cr6,0x82e3d4e4
	if (!ctx.cr6.eq) goto loc_82E3D4E4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E3D4E4:
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r8,32(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// rlwinm r8,r8,0,26,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// bne cr6,0x82e3d50c
	if (!ctx.cr6.eq) goto loc_82E3D50C;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f0,188(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_82E3D50C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82E3D518:
	// addi r11,r11,344
	ctx.r11.s64 = ctx.r11.s64 + 344;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e3d4c4
	if (!ctx.cr6.eq) goto loc_82E3D4C4;
	// b 0x82e3d530
	goto loc_82E3D530;
loc_82E3D528:
	// stfs f30,184(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f31,188(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
loc_82E3D530:
	// lwz r29,332(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// addi r26,r3,332
	ctx.r26.s64 = ctx.r3.s64 + 332;
	// b 0x82e3d59c
	goto loc_82E3D59C;
loc_82E3D53C:
	// lwz r31,84(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r27,r29,84
	ctx.r27.s64 = ctx.r29.s64 + 84;
	// b 0x82e3d590
	goto loc_82E3D590;
loc_82E3D548:
	// lwz r30,120(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r28,r31,120
	ctx.r28.s64 = ctx.r31.s64 + 120;
loc_82E3D554:
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e3d57c
	if (ctx.cr0.eq) goto loc_82E3D57C;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82d83a78
	ctx.lr = 0x82E3D56C;
	sub_82D83A78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e3d57c
	if (ctx.cr0.eq) goto loc_82E3D57C;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e3d5a8
	if (!ctx.cr6.eq) goto loc_82E3D5A8;
loc_82E3D57C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82e3d554
	if (!ctx.cr6.eq) goto loc_82E3D554;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E3D590:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82e3d548
	if (!ctx.cr6.eq) goto loc_82E3D548;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82E3D59C:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e3d53c
	if (!ctx.cr6.eq) goto loc_82E3D53C;
loc_82E3D5A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E3D5A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E3D5B8"))) PPC_WEAK_FUNC(sub_82E3D5B8);
PPC_FUNC_IMPL(__imp__sub_82E3D5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E3D5C0;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// beq 0x82e3d668
	if (ctx.cr0.eq) goto loc_82E3D668;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3d5f8
	if (ctx.cr0.eq) goto loc_82E3D5F8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82E3D5F8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stfs f31,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f30,196(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stfs f29,200(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e3d6ec
	if (!ctx.cr6.gt) goto loc_82E3D6EC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E3D618:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3d650
	if (ctx.cr0.eq) goto loc_82E3D650;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e3d650
	if (ctx.cr6.eq) goto loc_82E3D650;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82e3d5b8
	ctx.lr = 0x82E3D648;
	sub_82E3D5B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3d6f0
	if (!ctx.cr0.eq) goto loc_82E3D6F0;
loc_82E3D650:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e3d618
	if (ctx.cr6.lt) goto loc_82E3D618;
	// b 0x82e3d6ec
	goto loc_82E3D6EC;
loc_82E3D668:
	// lwz r29,332(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// stfs f31,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f30,196(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// addi r26,r3,332
	ctx.r26.s64 = ctx.r3.s64 + 332;
	// stfs f29,200(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// b 0x82e3d6e4
	goto loc_82E3D6E4;
loc_82E3D680:
	// lwz r31,84(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r27,r29,84
	ctx.r27.s64 = ctx.r29.s64 + 84;
	// b 0x82e3d6d8
	goto loc_82E3D6D8;
loc_82E3D68C:
	// lwz r30,120(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r28,r31,120
	ctx.r28.s64 = ctx.r31.s64 + 120;
loc_82E3D698:
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e3d6c4
	if (ctx.cr0.eq) goto loc_82E3D6C4;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d83b48
	ctx.lr = 0x82E3D6B4;
	sub_82D83B48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e3d6c4
	if (ctx.cr0.eq) goto loc_82E3D6C4;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e3d6f0
	if (!ctx.cr6.eq) goto loc_82E3D6F0;
loc_82E3D6C4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82e3d698
	if (!ctx.cr6.eq) goto loc_82E3D698;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E3D6D8:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82e3d68c
	if (!ctx.cr6.eq) goto loc_82E3D68C;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82E3D6E4:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e3d680
	if (!ctx.cr6.eq) goto loc_82E3D680;
loc_82E3D6EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E3D6F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E3D704"))) PPC_WEAK_FUNC(sub_82E3D704);
PPC_FUNC_IMPL(__imp__sub_82E3D704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3D708"))) PPC_WEAK_FUNC(sub_82E3D708);
PPC_FUNC_IMPL(__imp__sub_82E3D708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82E3D710;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e3d798
	if (ctx.cr0.eq) goto loc_82E3D798;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3d738
	if (ctx.cr0.eq) goto loc_82E3D738;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82E3D738:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stfs f31,204(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 204, temp.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e3d814
	if (!ctx.cr6.gt) goto loc_82E3D814;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E3D750:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3d780
	if (ctx.cr0.eq) goto loc_82E3D780;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e3d780
	if (ctx.cr6.eq) goto loc_82E3D780;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82e3d708
	ctx.lr = 0x82E3D778;
	sub_82E3D708(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3d818
	if (!ctx.cr0.eq) goto loc_82E3D818;
loc_82E3D780:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e3d750
	if (ctx.cr6.lt) goto loc_82E3D750;
	// b 0x82e3d814
	goto loc_82E3D814;
loc_82E3D798:
	// lwz r28,332(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// stfs f31,204(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 204, temp.u32);
	// addi r25,r30,332
	ctx.r25.s64 = ctx.r30.s64 + 332;
	// b 0x82e3d80c
	goto loc_82E3D80C;
loc_82E3D7A8:
	// lwz r31,84(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// addi r26,r28,84
	ctx.r26.s64 = ctx.r28.s64 + 84;
	// b 0x82e3d800
	goto loc_82E3D800;
loc_82E3D7B4:
	// lwz r29,120(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r27,r31,120
	ctx.r27.s64 = ctx.r31.s64 + 120;
loc_82E3D7C0:
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e3d7ec
	if (ctx.cr0.eq) goto loc_82E3D7EC;
	// lfs f1,204(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d83ff8
	ctx.lr = 0x82E3D7D4;
	sub_82D83FF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e3d7ec
	if (ctx.cr0.eq) goto loc_82E3D7EC;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82e3d7ec
	if (ctx.cr6.eq) goto loc_82E3D7EC;
	// cmpwi cr6,r3,78
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 78, ctx.xer);
	// bne cr6,0x82e3d818
	if (!ctx.cr6.eq) goto loc_82E3D818;
loc_82E3D7EC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82e3d7c0
	if (!ctx.cr6.eq) goto loc_82E3D7C0;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E3D800:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e3d7b4
	if (!ctx.cr6.eq) goto loc_82E3D7B4;
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82E3D80C:
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82e3d7a8
	if (!ctx.cr6.eq) goto loc_82E3D7A8;
loc_82E3D814:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E3D818:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E3D824"))) PPC_WEAK_FUNC(sub_82E3D824);
PPC_FUNC_IMPL(__imp__sub_82E3D824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3D828"))) PPC_WEAK_FUNC(sub_82E3D828);
PPC_FUNC_IMPL(__imp__sub_82E3D828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82E3D830;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// beq 0x82e3d8d4
	if (ctx.cr0.eq) goto loc_82E3D8D4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3d85c
	if (ctx.cr0.eq) goto loc_82E3D85C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82E3D85C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stfs f31,244(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 244, temp.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e3d9b4
	if (!ctx.cr6.gt) goto loc_82E3D9B4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E3D874:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3d8bc
	if (ctx.cr0.eq) goto loc_82E3D8BC;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e3d8bc
	if (ctx.cr6.eq) goto loc_82E3D8BC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stfs f31,244(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 244, temp.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e3d8bc
	if (ctx.cr6.eq) goto loc_82E3D8BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82e3d828
	ctx.lr = 0x82E3D8B4;
	sub_82E3D828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3d9b8
	if (!ctx.cr0.eq) goto loc_82E3D9B8;
loc_82E3D8BC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e3d874
	if (ctx.cr6.lt) goto loc_82E3D874;
	// b 0x82e3d9b4
	goto loc_82E3D9B4;
loc_82E3D8D4:
	// lwz r28,332(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// addi r25,r3,332
	ctx.r25.s64 = ctx.r3.s64 + 332;
	// stfs f31,244(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82e3d9b4
	if (ctx.cr6.eq) goto loc_82E3D9B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,6148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f30.f64 = double(temp.f32);
loc_82E3D8F0:
	// lwz r30,84(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// addi r26,r28,84
	ctx.r26.s64 = ctx.r28.s64 + 84;
	// b 0x82e3d9a0
	goto loc_82E3D9A0;
loc_82E3D8FC:
	// lwz r29,120(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r27,r30,120
	ctx.r27.s64 = ctx.r30.s64 + 120;
loc_82E3D908:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e3d98c
	if (ctx.cr0.eq) goto loc_82E3D98C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82E3D924:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82e3d924
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E3D924;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d83858
	ctx.lr = 0x82E3D938;
	sub_82D83858(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e3d948
	if (ctx.cr0.eq) goto loc_82E3D948;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e3d9b8
	if (!ctx.cr6.eq) goto loc_82E3D9B8;
loc_82E3D948:
	// fmuls f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// bl 0x82d83810
	ctx.lr = 0x82E3D974;
	sub_82D83810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e3d98c
	if (ctx.cr0.eq) goto loc_82E3D98C;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82e3d98c
	if (ctx.cr6.eq) goto loc_82E3D98C;
	// cmpwi cr6,r3,78
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 78, ctx.xer);
	// bne cr6,0x82e3d9b8
	if (!ctx.cr6.eq) goto loc_82E3D9B8;
loc_82E3D98C:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82e3d908
	if (!ctx.cr6.eq) goto loc_82E3D908;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82E3D9A0:
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e3d8fc
	if (!ctx.cr6.eq) goto loc_82E3D8FC;
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82e3d8f0
	if (!ctx.cr6.eq) goto loc_82E3D8F0;
loc_82E3D9B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E3D9B8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E3D9C8"))) PPC_WEAK_FUNC(sub_82E3D9C8);
PPC_FUNC_IMPL(__imp__sub_82E3D9C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82E3D9D0;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// beq 0x82e3da74
	if (ctx.cr0.eq) goto loc_82E3DA74;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3d9fc
	if (ctx.cr0.eq) goto loc_82E3D9FC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82E3D9FC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stfs f31,240(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 240, temp.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e3db54
	if (!ctx.cr6.gt) goto loc_82E3DB54;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E3DA14:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3da5c
	if (ctx.cr0.eq) goto loc_82E3DA5C;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e3da5c
	if (ctx.cr6.eq) goto loc_82E3DA5C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stfs f31,240(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 240, temp.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e3da5c
	if (ctx.cr6.eq) goto loc_82E3DA5C;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82e3d9c8
	ctx.lr = 0x82E3DA54;
	sub_82E3D9C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3db58
	if (!ctx.cr0.eq) goto loc_82E3DB58;
loc_82E3DA5C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e3da14
	if (ctx.cr6.lt) goto loc_82E3DA14;
	// b 0x82e3db54
	goto loc_82E3DB54;
loc_82E3DA74:
	// lwz r28,332(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// addi r25,r3,332
	ctx.r25.s64 = ctx.r3.s64 + 332;
	// stfs f31,240(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82e3db54
	if (ctx.cr6.eq) goto loc_82E3DB54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,6148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f30.f64 = double(temp.f32);
loc_82E3DA90:
	// lwz r30,84(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// addi r26,r28,84
	ctx.r26.s64 = ctx.r28.s64 + 84;
	// b 0x82e3db40
	goto loc_82E3DB40;
loc_82E3DA9C:
	// lwz r29,120(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r27,r30,120
	ctx.r27.s64 = ctx.r30.s64 + 120;
loc_82E3DAA8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e3db2c
	if (ctx.cr0.eq) goto loc_82E3DB2C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82E3DAC4:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82e3dac4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E3DAC4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d83858
	ctx.lr = 0x82E3DAD8;
	sub_82D83858(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e3dae8
	if (ctx.cr0.eq) goto loc_82E3DAE8;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e3db58
	if (!ctx.cr6.eq) goto loc_82E3DB58;
loc_82E3DAE8:
	// fmuls f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// bl 0x82d83810
	ctx.lr = 0x82E3DB14;
	sub_82D83810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e3db2c
	if (ctx.cr0.eq) goto loc_82E3DB2C;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82e3db2c
	if (ctx.cr6.eq) goto loc_82E3DB2C;
	// cmpwi cr6,r3,78
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 78, ctx.xer);
	// bne cr6,0x82e3db58
	if (!ctx.cr6.eq) goto loc_82E3DB58;
loc_82E3DB2C:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82e3daa8
	if (!ctx.cr6.eq) goto loc_82E3DAA8;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82E3DB40:
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e3da9c
	if (!ctx.cr6.eq) goto loc_82E3DA9C;
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82e3da90
	if (!ctx.cr6.eq) goto loc_82E3DA90;
loc_82E3DB54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E3DB58:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E3DB68"))) PPC_WEAK_FUNC(sub_82E3DB68);
PPC_FUNC_IMPL(__imp__sub_82E3DB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f0,-18332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18332);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82e3db80
	if (!ctx.cr6.gt) goto loc_82E3DB80;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82E3DB80:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82e3db94
	if (!ctx.cr6.lt) goto loc_82E3DB94;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82E3DB94:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e3dbfc
	if (ctx.cr0.eq) goto loc_82E3DBFC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3dbac
	if (ctx.cr0.eq) goto loc_82E3DBAC;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82E3DBAC:
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stfs f1,288(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 288, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e3dc00
	if (!ctx.cr6.gt) goto loc_82E3DC00;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E3DBC4:
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e3dbe4
	if (ctx.cr0.eq) goto loc_82E3DBE4;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e3dbe4
	if (ctx.cr6.eq) goto loc_82E3DBE4;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stfs f1,288(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 288, temp.u32);
loc_82E3DBE4:
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e3dbc4
	if (ctx.cr6.lt) goto loc_82E3DBC4;
	// b 0x82e3dc00
	goto loc_82E3DC00;
loc_82E3DBFC:
	// stfs f1,288(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
loc_82E3DC00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3DC08"))) PPC_WEAK_FUNC(sub_82E3DC08);
PPC_FUNC_IMPL(__imp__sub_82E3DC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82e3dc20
	if (!ctx.cr6.gt) goto loc_82E3DC20;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82E3DC20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82e3dc34
	if (!ctx.cr6.lt) goto loc_82E3DC34;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82E3DC34:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e3dc9c
	if (ctx.cr0.eq) goto loc_82E3DC9C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3dc4c
	if (ctx.cr0.eq) goto loc_82E3DC4C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82E3DC4C:
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stfs f1,292(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 292, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e3dca0
	if (!ctx.cr6.gt) goto loc_82E3DCA0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E3DC64:
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e3dc84
	if (ctx.cr0.eq) goto loc_82E3DC84;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e3dc84
	if (ctx.cr6.eq) goto loc_82E3DC84;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stfs f1,292(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 292, temp.u32);
loc_82E3DC84:
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e3dc64
	if (ctx.cr6.lt) goto loc_82E3DC64;
	// b 0x82e3dca0
	goto loc_82E3DCA0;
loc_82E3DC9C:
	// stfs f1,292(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 292, temp.u32);
loc_82E3DCA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3DCA8"))) PPC_WEAK_FUNC(sub_82E3DCA8);
PPC_FUNC_IMPL(__imp__sub_82E3DCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E3DCB0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6ad8
	ctx.lr = 0x82E3DCB8;
	__savefpr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,287(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 287);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// fmr f26,f6
	ctx.f26.f64 = ctx.f6.f64;
	// fmr f25,f7
	ctx.f25.f64 = ctx.f7.f64;
	// fmr f24,f8
	ctx.f24.f64 = ctx.f8.f64;
	// beq 0x82e3de24
	if (ctx.cr0.eq) goto loc_82E3DE24;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3dcfc
	if (ctx.cr0.eq) goto loc_82E3DCFC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82E3DCFC:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stfs f31,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stfs f30,212(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stfs f29,216(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stfs f28,220(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stfs f27,224(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f26,228(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// stfs f25,232(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stfs f24,236(r31)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// ble cr6,0x82e3de88
	if (!ctx.cr6.gt) goto loc_82E3DE88;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E3DD3C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3de0c
	if (ctx.cr0.eq) goto loc_82E3DE0C;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e3de0c
	if (ctx.cr6.eq) goto loc_82E3DE0C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stfs f31,208(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stfs f30,212(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stfs f29,216(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 216, temp.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stfs f28,220(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 220, temp.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stfs f27,224(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 224, temp.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stfs f26,228(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 228, temp.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stfs f25,232(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 232, temp.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stfs f24,236(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 236, temp.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r10,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r10.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,380(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 380);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e3de0c
	if (ctx.cr6.eq) goto loc_82E3DE0C;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lfs f8,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// lwz r3,380(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// lfs f7,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d82a70
	ctx.lr = 0x82E3DE04;
	sub_82D82A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3de8c
	if (!ctx.cr0.eq) goto loc_82E3DE8C;
loc_82E3DE0C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e3dd3c
	if (ctx.cr6.lt) goto loc_82E3DD3C;
	// b 0x82e3de88
	goto loc_82E3DE88;
loc_82E3DE24:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stfs f31,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// stfs f30,212(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stfs f29,216(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stfs f28,220(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f27,224(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// stfs f26,228(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// stfs f25,232(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stfs f24,236(r31)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// beq 0x82e3de88
	if (ctx.cr0.eq) goto loc_82E3DE88;
	// fmr f8,f24
	ctx.f8.f64 = ctx.f24.f64;
	// fmr f7,f25
	ctx.f7.f64 = ctx.f25.f64;
	// fmr f6,f26
	ctx.f6.f64 = ctx.f26.f64;
	// fmr f5,f27
	ctx.f5.f64 = ctx.f27.f64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d82a70
	ctx.lr = 0x82E3DE80;
	sub_82D82A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3de8c
	if (!ctx.cr0.eq) goto loc_82E3DE8C;
loc_82E3DE88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E3DE8C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82cb6b24
	ctx.lr = 0x82E3DE98;
	__restfpr_24(ctx, base);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E3DE9C"))) PPC_WEAK_FUNC(sub_82E3DE9C);
PPC_FUNC_IMPL(__imp__sub_82E3DE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3DEA0"))) PPC_WEAK_FUNC(sub_82E3DEA0);
PPC_FUNC_IMPL(__imp__sub_82E3DEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E3DEA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// beq 0x82e3df3c
	if (ctx.cr0.eq) goto loc_82E3DF3C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3ded0
	if (ctx.cr0.eq) goto loc_82E3DED0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82E3DED0:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// sth r29,320(r31)
	PPC_STORE_U16(ctx.r31.u32 + 320, ctx.r29.u16);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// sth r28,322(r31)
	PPC_STORE_U16(ctx.r31.u32 + 322, ctx.r28.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r30,324(r31)
	PPC_STORE_U16(ctx.r31.u32 + 324, ctx.r30.u16);
	// ble cr6,0x82e3df4c
	if (!ctx.cr6.gt) goto loc_82E3DF4C;
loc_82E3DEF0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3df24
	if (ctx.cr0.eq) goto loc_82E3DF24;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e3df24
	if (ctx.cr6.eq) goto loc_82E3DF24;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e3dea0
	ctx.lr = 0x82E3DF1C;
	sub_82E3DEA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3df50
	if (!ctx.cr0.eq) goto loc_82E3DF50;
loc_82E3DF24:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e3def0
	if (ctx.cr6.lt) goto loc_82E3DEF0;
	// b 0x82e3df4c
	goto loc_82E3DF4C;
loc_82E3DF3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r29,320(r3)
	PPC_STORE_U16(ctx.r3.u32 + 320, ctx.r29.u16);
	// sth r28,322(r3)
	PPC_STORE_U16(ctx.r3.u32 + 322, ctx.r28.u16);
	// sth r11,324(r3)
	PPC_STORE_U16(ctx.r3.u32 + 324, ctx.r11.u16);
loc_82E3DF4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E3DF50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E3DF58"))) PPC_WEAK_FUNC(sub_82E3DF58);
PPC_FUNC_IMPL(__imp__sub_82E3DF58) {
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
	// lfs f0,252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x82e3df88
	if (!ctx.cr6.eq) goto loc_82E3DF88;
	// lfs f0,256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bne cr6,0x82e3df88
	if (!ctx.cr6.eq) goto loc_82E3DF88;
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e3e018
	if (ctx.cr0.eq) goto loc_82E3E018;
loc_82E3DF88:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82e3dfa0
	if (!ctx.cr6.lt) goto loc_82E3DFA0;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// b 0x82e3dfa4
	goto loc_82E3DFA4;
loc_82E3DFA0:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82E3DFA4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82e3dfbc
	if (!ctx.cr6.lt) goto loc_82E3DFBC;
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
	// b 0x82e3dfc8
	goto loc_82E3DFC8;
loc_82E3DFBC:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82e3dfc8
	if (ctx.cr6.lt) goto loc_82E3DFC8;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82E3DFC8:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x82e3dfd8
	if (!ctx.cr6.lt) goto loc_82E3DFD8;
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// b 0x82e3dfdc
	goto loc_82E3DFDC;
loc_82E3DFD8:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82E3DFDC:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82e3dfec
	if (!ctx.cr6.lt) goto loc_82E3DFEC;
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// b 0x82e3dff8
	goto loc_82E3DFF8;
loc_82E3DFEC:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x82e3dff8
	if (ctx.cr6.lt) goto loc_82E3DFF8;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
loc_82E3DFF8:
	// lwz r3,380(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// stfs f1,252(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 252, temp.u32);
	// stfs f2,256(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 256, temp.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e3e018
	if (ctx.cr0.eq) goto loc_82E3E018;
	// bl 0x82d826f0
	ctx.lr = 0x82E3E010;
	sub_82D826F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3e01c
	if (!ctx.cr0.eq) goto loc_82E3E01C;
loc_82E3E018:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E3E01C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3E02C"))) PPC_WEAK_FUNC(sub_82E3E02C);
PPC_FUNC_IMPL(__imp__sub_82E3E02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3E030"))) PPC_WEAK_FUNC(sub_82E3E030);
PPC_FUNC_IMPL(__imp__sub_82E3E030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82e3e048
	if (!ctx.cr6.lt) goto loc_82E3E048;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82E3E048:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e3e0b0
	if (ctx.cr0.eq) goto loc_82E3E0B0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3e060
	if (ctx.cr0.eq) goto loc_82E3E060;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82E3E060:
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stfs f1,296(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 296, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e3e0b4
	if (!ctx.cr6.gt) goto loc_82E3E0B4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E3E078:
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e3e098
	if (ctx.cr0.eq) goto loc_82E3E098;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e3e098
	if (ctx.cr6.eq) goto loc_82E3E098;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stfs f1,296(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 296, temp.u32);
loc_82E3E098:
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e3e078
	if (ctx.cr6.lt) goto loc_82E3E078;
	// b 0x82e3e0b4
	goto loc_82E3E0B4;
loc_82E3E0B0:
	// stfs f1,296(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 296, temp.u32);
loc_82E3E0B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3E0BC"))) PPC_WEAK_FUNC(sub_82E3E0BC);
PPC_FUNC_IMPL(__imp__sub_82E3E0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3E0C0"))) PPC_WEAK_FUNC(sub_82E3E0C0);
PPC_FUNC_IMPL(__imp__sub_82E3E0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82e3e0d8
	if (!ctx.cr6.lt) goto loc_82E3E0D8;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82E3E0D8:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e3e140
	if (ctx.cr0.eq) goto loc_82E3E140;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3e0f0
	if (ctx.cr0.eq) goto loc_82E3E0F0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82E3E0F0:
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stfs f1,304(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 304, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e3e144
	if (!ctx.cr6.gt) goto loc_82E3E144;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E3E108:
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e3e128
	if (ctx.cr0.eq) goto loc_82E3E128;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e3e128
	if (ctx.cr6.eq) goto loc_82E3E128;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stfs f1,304(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 304, temp.u32);
loc_82E3E128:
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e3e108
	if (ctx.cr6.lt) goto loc_82E3E108;
	// b 0x82e3e144
	goto loc_82E3E144;
loc_82E3E140:
	// stfs f1,304(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
loc_82E3E144:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3E14C"))) PPC_WEAK_FUNC(sub_82E3E14C);
PPC_FUNC_IMPL(__imp__sub_82E3E14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3E150"))) PPC_WEAK_FUNC(sub_82E3E150);
PPC_FUNC_IMPL(__imp__sub_82E3E150) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82e3e27c
	if (ctx.cr6.gt) goto loc_82E3E27C;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e3e248
	if (ctx.cr0.eq) goto loc_82E3E248;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3e178
	if (ctx.cr0.eq) goto loc_82E3E178;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82E3E178:
	// lha r11,326(r10)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 326));
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82e3e18c
	if (!ctx.cr6.eq) goto loc_82E3E18C;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// b 0x82e3e19c
	goto loc_82E3E19C;
loc_82E3E18C:
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwimi r11,r9,0,29,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
loc_82E3E19C:
	// sth r11,326(r10)
	PPC_STORE_U16(ctx.r10.u32 + 326, ctx.r11.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e3e274
	if (!ctx.cr6.gt) goto loc_82E3E274;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E3E1B4:
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82e3e230
	if (ctx.cr0.eq) goto loc_82E3E230;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e3e230
	if (ctx.cr6.eq) goto loc_82E3E230;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// bne cr6,0x82e3e1f8
	if (!ctx.cr6.eq) goto loc_82E3E1F8;
	// lha r7,326(r9)
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + 326));
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r7,326(r9)
	PPC_STORE_U16(ctx.r9.u32 + 326, ctx.r7.u16);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lha r7,326(r9)
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + 326));
	// rlwinm r7,r7,0,31,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// b 0x82e3e22c
	goto loc_82E3E22C;
loc_82E3E1F8:
	// lhz r6,326(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 326);
	// rlwinm r7,r4,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// sth r6,326(r9)
	PPC_STORE_U16(ctx.r9.u32 + 326, ctx.r6.u16);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lha r6,326(r9)
	ctx.r6.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + 326));
	// rlwinm r6,r6,0,31,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// sth r6,326(r9)
	PPC_STORE_U16(ctx.r9.u32 + 326, ctx.r6.u16);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lhz r6,326(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 326);
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
loc_82E3E22C:
	// sth r7,326(r9)
	PPC_STORE_U16(ctx.r9.u32 + 326, ctx.r7.u16);
loc_82E3E230:
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e3e1b4
	if (ctx.cr6.lt) goto loc_82E3E1B4;
	// b 0x82e3e274
	goto loc_82E3E274;
loc_82E3E248:
	// lha r11,326(r10)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 326));
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82e3e25c
	if (!ctx.cr6.eq) goto loc_82E3E25C;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// b 0x82e3e270
	goto loc_82E3E270;
loc_82E3E25C:
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,31,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_82E3E270:
	// sth r11,326(r10)
	PPC_STORE_U16(ctx.r10.u32 + 326, ctx.r11.u16);
loc_82E3E274:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E3E27C:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3E284"))) PPC_WEAK_FUNC(sub_82E3E284);
PPC_FUNC_IMPL(__imp__sub_82E3E284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3E288"))) PPC_WEAK_FUNC(sub_82E3E288);
PPC_FUNC_IMPL(__imp__sub_82E3E288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82E3E290;
	__savegprlr_14(ctx, base);
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r26,-4716(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// li r18,0
	ctx.r18.s64 = 0;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r11,r26,84
	ctx.r11.s64 = ctx.r26.s64 + 84;
	// stw r25,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r25.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82e3e2d0
	goto loc_82E3E2D0;
loc_82E3E2C8:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
loc_82E3E2D0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e3e2c8
	if (!ctx.cr6.eq) goto loc_82E3E2C8;
	// rlwinm r30,r18,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r30
	ctx.r11.s64 = -ctx.r30.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82E3E2E8;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// neg r10,r30
	ctx.r10.s64 = -ctx.r30.s64;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r23,r1,80
	ctx.r23.s64 = ctx.r1.s64 + 80;
	// stw r23,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r23.u32);
	// bl 0x82cb8074
	ctx.lr = 0x82E3E304;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r24,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82E3E324;
	sub_82CB16F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82E3E334;
	sub_82CB16F0(ctx, base);
	// lwz r29,332(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 332);
	// addi r28,r25,332
	ctx.r28.s64 = ctx.r25.s64 + 332;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e3e36c
	goto loc_82E3E36C;
loc_82E3E344:
	// addi r9,r11,84
	ctx.r9.s64 = ctx.r11.s64 + 84;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82e3e35c
	goto loc_82E3E35C;
loc_82E3E354:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82E3E35C:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e3e354
	if (!ctx.cr6.eq) goto loc_82E3E354;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r27,r8,r27
	ctx.r27.u64 = ctx.r8.u64 + ctx.r27.u64;
loc_82E3E36C:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82e3e344
	if (!ctx.cr6.eq) goto loc_82E3E344;
	// rlwinm r30,r27,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r30
	ctx.r11.s64 = -ctx.r30.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82E3E384;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r17,r1,80
	ctx.r17.s64 = ctx.r1.s64 + 80;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82E3E3A0;
	sub_82CB16F0(ctx, base);
	// neg r11,r30
	ctx.r11.s64 = -ctx.r30.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82E3E3AC;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r19,r1,80
	ctx.r19.s64 = ctx.r1.s64 + 80;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82E3E3C8;
	sub_82CB16F0(ctx, base);
	// b 0x82e3e494
	goto loc_82E3E494;
loc_82E3E3CC:
	// lwz r7,84(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r6,r29,84
	ctx.r6.s64 = ctx.r29.s64 + 84;
	// b 0x82e3e488
	goto loc_82E3E488;
loc_82E3E3D8:
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// ble cr6,0x82e3e484
	if (!ctx.cr6.gt) goto loc_82E3E484;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
loc_82E3E3F0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e3e418
	if (ctx.cr6.eq) goto loc_82E3E418;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e3e450
	if (ctx.cr6.eq) goto loc_82E3E450;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82e3e3f0
	if (ctx.cr6.lt) goto loc_82E3E3F0;
	// b 0x82e3e484
	goto loc_82E3E484;
loc_82E3E418:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r11,r9,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r19.u32);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x82e3e440
	if (ctx.cr0.eq) goto loc_82E3E440;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82e3e444
	goto loc_82E3E444;
loc_82E3E440:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82E3E444:
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stwx r10,r9,r19
	PPC_STORE_U32(ctx.r9.u32 + ctx.r19.u32, ctx.r10.u32);
	// b 0x82e3e484
	goto loc_82E3E484;
loc_82E3E450:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r8,r10,r17
	PPC_STORE_U32(ctx.r10.u32 + ctx.r17.u32, ctx.r8.u32);
	// rlwinm. r5,r11,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82e3e474
	if (ctx.cr0.eq) goto loc_82E3E474;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e3e478
	goto loc_82E3E478;
loc_82E3E474:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82E3E478:
	// rlwimi r11,r9,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// stwx r11,r10,r19
	PPC_STORE_U32(ctx.r10.u32 + ctx.r19.u32, ctx.r11.u32);
loc_82E3E484:
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82E3E488:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82e3e3d8
	if (!ctx.cr6.eq) goto loc_82E3E3D8;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82E3E494:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82e3e3cc
	if (!ctx.cr6.eq) goto loc_82E3E3CC;
	// lwz r11,184(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 184);
	// lis r14,-31909
	ctx.r14.s64 = -2091188224;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r15,r11,22184
	ctx.r15.s64 = ctx.r11.s64 + 22184;
	// beq 0x82e3e63c
	if (ctx.cr0.eq) goto loc_82E3E63C;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x82e3e504
	if (!ctx.cr6.gt) goto loc_82E3E504;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
loc_82E3E4C8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82e3e4f8
	if (!ctx.cr0.gt) goto loc_82E3E4F8;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_82E3E4DC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82e3e4ec
	if (!ctx.cr6.eq) goto loc_82E3E4EC;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
loc_82E3E4EC:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bne 0x82e3e4dc
	if (!ctx.cr0.eq) goto loc_82E3E4DC;
loc_82E3E4F8:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82e3e4c8
	if (!ctx.cr0.eq) goto loc_82E3E4C8;
loc_82E3E504:
	// rlwinm r5,r20,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,0
	ctx.r27.s64 = 0;
	// neg r11,r5
	ctx.r11.s64 = -ctx.r5.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82E3E518;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r22,r1,80
	ctx.r22.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82E3E530;
	sub_82CB16F0(ctx, base);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x82e3e5e8
	if (!ctx.cr6.gt) goto loc_82E3E5E8;
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
loc_82E3E540:
	// lwz r26,0(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e3e5d0
	if (!ctx.cr6.gt) goto loc_82E3E5D0;
	// li r25,0
	ctx.r25.s64 = 0;
loc_82E3E558:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// add r28,r25,r11
	ctx.r28.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e3e5bc
	if (!ctx.cr6.eq) goto loc_82E3E5BC;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82e3e5bc
	if (!ctx.cr6.gt) goto loc_82E3E5BC;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_82E3E57C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e3e5ac
	if (ctx.cr0.eq) goto loc_82E3E5AC;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x82da45b0
	ctx.lr = 0x82E3E590;
	sub_82DA45B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e3e5bc
	if (ctx.cr0.eq) goto loc_82E3E5BC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82e3e57c
	if (ctx.cr6.lt) goto loc_82E3E57C;
	// b 0x82e3e5bc
	goto loc_82E3E5BC;
loc_82E3E5AC:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwx r11,r10,r22
	PPC_STORE_U32(ctx.r10.u32 + ctx.r22.u32, ctx.r11.u32);
loc_82E3E5BC:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,24
	ctx.r25.s64 = ctx.r25.s64 + 24;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e3e558
	if (ctx.cr6.lt) goto loc_82E3E558;
loc_82E3E5D0:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// bne 0x82e3e540
	if (!ctx.cr0.eq) goto loc_82E3E540;
	// lwz r24,84(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r23,88(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r25,276(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
loc_82E3E5E8:
	// stw r27,408(r25)
	PPC_STORE_U32(ctx.r25.u32 + 408, ctx.r27.u32);
	// rlwinm r30,r27,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,19872(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 19872);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,9054
	ctx.r6.s64 = 9054;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82E3E610;
	sub_82D85F40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,412(r25)
	PPC_STORE_U32(ctx.r25.u32 + 412, ctx.r3.u32);
	// bne 0x82e3e624
	if (!ctx.cr0.eq) goto loc_82E3E624;
loc_82E3E61C:
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e3e9f4
	goto loc_82E3E9F4;
loc_82E3E624:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82E3E630;
	sub_82CB1160(ctx, base);
	// lwz r11,412(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 412);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82E3E63C:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x82e3e70c
	if (!ctx.cr6.gt) goto loc_82E3E70C;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_82E3E64C:
	// lwzx r11,r8,r17
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r17.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82e3e700
	if (!ctx.cr0.gt) goto loc_82E3E700;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82E3E664:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e3e6f4
	if (!ctx.cr6.eq) goto loc_82E3E6F4;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x82e3e6f4
	if (!ctx.cr6.gt) goto loc_82E3E6F4;
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82E3E680:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e3e6a8
	if (ctx.cr6.eq) goto loc_82E3E6A8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e3e6d8
	if (ctx.cr6.eq) goto loc_82E3E6D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x82e3e680
	if (ctx.cr6.lt) goto loc_82E3E680;
	// b 0x82e3e6f4
	goto loc_82E3E6F4;
loc_82E3E6A8:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r19.u32);
	// lwzx r10,r9,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// srawi r3,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 16;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// stwx r7,r9,r24
	PPC_STORE_U32(ctx.r9.u32 + ctx.r24.u32, ctx.r7.u32);
	// b 0x82e3e6f4
	goto loc_82E3E6F4;
loc_82E3E6D8:
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r19
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r19.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwx r9,r11,r23
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, ctx.r9.u32);
	// stwx r10,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u32);
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
loc_82E3E6F4:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// bne 0x82e3e664
	if (!ctx.cr0.eq) goto loc_82E3E664;
loc_82E3E700:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82e3e64c
	if (!ctx.cr0.eq) goto loc_82E3E64C;
loc_82E3E70C:
	// lwz r22,80(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r29,r22,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r29
	ctx.r11.s64 = -ctx.r29.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82E3E720;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r23,r1,80
	ctx.r23.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82E3E73C;
	sub_82CB16F0(ctx, base);
	// lwz r21,84(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82e3e860
	if (!ctx.cr6.gt) goto loc_82E3E860;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// subf r24,r21,r23
	ctx.r24.s64 = ctx.r23.s64 - ctx.r21.s64;
loc_82E3E754:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r5
	ctx.r11.s64 = -ctx.r5.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82E3E77C;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r30,r24,r27
	PPC_STORE_U32(ctx.r24.u32 + ctx.r27.u32, ctx.r30.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82E3E798;
	sub_82CB16F0(ctx, base);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x82e3e850
	if (!ctx.cr6.gt) goto loc_82E3E850;
	// rlwinm r26,r25,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_82E3E7AC:
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e3e844
	if (!ctx.cr6.gt) goto loc_82E3E844;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82E3E7C4:
	// lwz r11,28(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e3e830
	if (!ctx.cr6.eq) goto loc_82E3E830;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r26,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e3e830
	if (!ctx.cr6.eq) goto loc_82E3E830;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82e3e830
	if (!ctx.cr6.gt) goto loc_82E3E830;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82E3E800:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82e3e830
	if (ctx.cr6.eq) goto loc_82E3E830;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82e3e828
	if (ctx.cr6.eq) goto loc_82E3E828;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82e3e800
	if (ctx.cr6.lt) goto loc_82E3E800;
	// b 0x82e3e830
	goto loc_82E3E830;
loc_82E3E828:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r8.u32);
loc_82E3E830:
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e3e7c4
	if (ctx.cr6.lt) goto loc_82E3E7C4;
loc_82E3E844:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82e3e7ac
	if (!ctx.cr0.eq) goto loc_82E3E7AC;
loc_82E3E850:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x82e3e754
	if (ctx.cr6.lt) goto loc_82E3E754;
loc_82E3E860:
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// ble cr6,0x82e3e8b4
	if (!ctx.cr6.gt) goto loc_82E3E8B4;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82E3E880:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82e3e890
	goto loc_82E3E890;
loc_82E3E88C:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_82E3E890:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x82e3e88c
	if (!ctx.cr6.eq) goto loc_82E3E88C;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r27,r9,r27
	ctx.r27.u64 = ctx.r9.u64 + ctx.r27.u64;
	// bne 0x82e3e880
	if (!ctx.cr0.eq) goto loc_82E3E880;
loc_82E3E8B4:
	// lwz r26,276(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r4,388(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 388);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e3e8dc
	if (ctx.cr0.eq) goto loc_82E3E8DC;
	// lwz r11,19872(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,9171
	ctx.r6.s64 = 9171;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E3E8DC;
	sub_82D861B0(ctx, base);
loc_82E3E8DC:
	// lwz r11,19872(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 19872);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,9174
	ctx.r6.s64 = 9174;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82E3E8FC;
	sub_82D85F40(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82e3e61c
	if (ctx.cr0.eq) goto loc_82E3E61C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,388(r26)
	PPC_STORE_U32(ctx.r26.u32 + 388, ctx.r30.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82E3E918;
	sub_82CB1160(ctx, base);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,396(r26)
	PPC_STORE_U32(ctx.r26.u32 + 396, ctx.r30.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82E3E930;
	sub_82CB1160(ctx, base);
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r10,392(r26)
	PPC_STORE_U32(ctx.r26.u32 + 392, ctx.r10.u32);
	// ble cr6,0x82e3e970
	if (!ctx.cr6.gt) goto loc_82E3E970;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82E3E950:
	// lwz r7,388(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 388);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r6,392(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 392);
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r7,16(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// stwx r7,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82e3e950
	if (!ctx.cr0.eq) goto loc_82E3E950;
loc_82E3E970:
	// lwz r9,392(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 392);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r10,400(r26)
	PPC_STORE_U32(ctx.r26.u32 + 400, ctx.r10.u32);
	// ble cr6,0x82e3e9e8
	if (!ctx.cr6.gt) goto loc_82E3E9E8;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
loc_82E3E99C:
	// lwz r7,400(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 400);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r8,r10,r23
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// stwx r11,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x82e3e9c8
	goto loc_82E3E9C8;
loc_82E3E9B4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
loc_82E3E9C8:
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x82e3e9b4
	if (!ctx.cr6.eq) goto loc_82E3E9B4;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82e3e99c
	if (!ctx.cr0.eq) goto loc_82E3E99C;
loc_82E3E9E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r22,384(r26)
	PPC_STORE_U32(ctx.r26.u32 + 384, ctx.r22.u32);
	// stw r27,404(r26)
	PPC_STORE_U32(ctx.r26.u32 + 404, ctx.r27.u32);
loc_82E3E9F4:
	// addi r1,r31,256
	ctx.r1.s64 = ctx.r31.s64 + 256;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E3E9FC"))) PPC_WEAK_FUNC(sub_82E3E9FC);
PPC_FUNC_IMPL(__imp__sub_82E3E9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3EA00"))) PPC_WEAK_FUNC(sub_82E3EA00);
PPC_FUNC_IMPL(__imp__sub_82E3EA00) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e3ea18
	if (!ctx.cr6.eq) goto loc_82E3EA18;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e3eb0c
	goto loc_82E3EB0C;
loc_82E3EA18:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,332
	ctx.r31.s64 = ctx.r3.s64 + 332;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// b 0x82e3ea5c
	goto loc_82E3EA5C;
loc_82E3EA2C:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r8,r11,84
	ctx.r8.s64 = ctx.r11.s64 + 84;
	// b 0x82e3ea50
	goto loc_82E3EA50;
loc_82E3EA38:
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm. r7,r9,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82e3eb00
	if (!ctx.cr0.eq) goto loc_82E3EB00;
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e3eb00
	if (!ctx.cr0.eq) goto loc_82E3EB00;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82E3EA50:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82e3ea38
	if (!ctx.cr6.eq) goto loc_82E3EA38;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E3EA5C:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82e3ea2c
	if (!ctx.cr6.eq) goto loc_82E3EA2C;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82e3eaf4
	goto loc_82E3EAF4;
loc_82E3EA70:
	// lwz r9,84(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	// addi r3,r6,84
	ctx.r3.s64 = ctx.r6.s64 + 84;
	// b 0x82e3eae8
	goto loc_82E3EAE8;
loc_82E3EA7C:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82e3eae4
	if (!ctx.cr0.gt) goto loc_82E3EAE4;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_82E3EA98:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e3eacc
	if (!ctx.cr0.eq) goto loc_82E3EACC;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82e3ead4
	if (!ctx.cr6.gt) goto loc_82E3EAD4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82e3ead4
	goto loc_82E3EAD4;
loc_82E3EACC:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82e3eb00
	if (!ctx.cr6.eq) goto loc_82E3EB00;
loc_82E3EAD4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82e3ea98
	if (ctx.cr6.lt) goto loc_82E3EA98;
loc_82E3EAE4:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82E3EAE8:
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82e3ea7c
	if (!ctx.cr6.eq) goto loc_82E3EA7C;
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82E3EAF4:
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82e3ea70
	if (!ctx.cr6.eq) goto loc_82E3EA70;
	// b 0x82e3eb08
	goto loc_82E3EB08;
loc_82E3EB00:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82E3EB08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E3EB0C:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3EB18"))) PPC_WEAK_FUNC(sub_82E3EB18);
PPC_FUNC_IMPL(__imp__sub_82E3EB18) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e3eb30
	if (!ctx.cr6.eq) goto loc_82E3EB30;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e3eb9c
	goto loc_82E3EB9C;
loc_82E3EB30:
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// addi r31,r3,332
	ctx.r31.s64 = ctx.r3.s64 + 332;
	// lwz r7,332(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// b 0x82e3eb8c
	goto loc_82E3EB8C;
loc_82E3EB40:
	// lwz r10,84(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	// addi r5,r7,84
	ctx.r5.s64 = ctx.r7.s64 + 84;
	// b 0x82e3eb80
	goto loc_82E3EB80;
loc_82E3EB4C:
	// lwz r11,120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// addi r9,r10,120
	ctx.r9.s64 = ctx.r10.s64 + 120;
	// lwz r6,36(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// b 0x82e3eb64
	goto loc_82E3EB64;
loc_82E3EB5C:
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E3EB64:
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// bne cr6,0x82e3eb5c
	if (!ctx.cr6.eq) goto loc_82E3EB5C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82E3EB80:
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82e3eb4c
	if (!ctx.cr6.eq) goto loc_82E3EB4C;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82E3EB8C:
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82e3eb40
	if (!ctx.cr6.eq) goto loc_82E3EB40;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
loc_82E3EB9C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3EBA4"))) PPC_WEAK_FUNC(sub_82E3EBA4);
PPC_FUNC_IMPL(__imp__sub_82E3EBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3EBA8"))) PPC_WEAK_FUNC(sub_82E3EBA8);
PPC_FUNC_IMPL(__imp__sub_82E3EBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E3EBB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,32(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x82e3ebc8
	if (!ctx.cr0.eq) goto loc_82E3EBC8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82E3EBC8:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// bne cr6,0x82e3ebe0
	if (!ctx.cr6.eq) goto loc_82E3EBE0;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e3ec54
	goto loc_82E3EC54;
loc_82E3EBE0:
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e3ec4c
	if (!ctx.cr6.gt) goto loc_82E3EC4C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82E3EBF4:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e3ec38
	if (ctx.cr6.eq) goto loc_82E3EC38;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E3EC20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3ec54
	if (!ctx.cr0.eq) goto loc_82E3EC54;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e3ec38
	if (ctx.cr0.eq) goto loc_82E3EC38;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82E3EC38:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e3ebf4
	if (ctx.cr6.lt) goto loc_82E3EBF4;
loc_82E3EC4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
loc_82E3EC54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E3EC5C"))) PPC_WEAK_FUNC(sub_82E3EC5C);
PPC_FUNC_IMPL(__imp__sub_82E3EC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3EC60"))) PPC_WEAK_FUNC(sub_82E3EC60);
PPC_FUNC_IMPL(__imp__sub_82E3EC60) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e3ec70
	if (!ctx.cr6.eq) goto loc_82E3EC70;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E3EC70:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3EC80"))) PPC_WEAK_FUNC(sub_82E3EC80);
PPC_FUNC_IMPL(__imp__sub_82E3EC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lha r11,324(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 324));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82e3ec98
	if (!ctx.cr0.lt) goto loc_82E3EC98;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3ecac
	goto loc_82E3ECAC;
loc_82E3EC98:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82E3ECAC:
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e3ecd4
	if (ctx.cr0.eq) goto loc_82E3ECD4;
	// lha r11,322(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 322));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// blr 
	return;
loc_82E3ECD4:
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e3ed04
	if (ctx.cr0.eq) goto loc_82E3ED04;
	// lha r11,320(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 320));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// blr 
	return;
loc_82E3ED04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3ED10"))) PPC_WEAK_FUNC(sub_82E3ED10);
PPC_FUNC_IMPL(__imp__sub_82E3ED10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E3ED18;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82e3ed34
	if (!ctx.cr6.eq) goto loc_82E3ED34;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e3edd8
	goto loc_82E3EDD8;
loc_82E3ED34:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,332(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// addi r28,r3,332
	ctx.r28.s64 = ctx.r3.s64 + 332;
	// lfs f31,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82e3edc8
	goto loc_82E3EDC8;
loc_82E3ED48:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82e3edd0
	if (ctx.cr6.eq) goto loc_82E3EDD0;
	// lwz r29,76(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x82e3edc4
	if (ctx.cr0.eq) goto loc_82E3EDC4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d82d20
	ctx.lr = 0x82E3ED68;
	sub_82D82D20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3edd8
	if (!ctx.cr0.eq) goto loc_82E3EDD8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e3edc4
	if (!ctx.cr6.gt) goto loc_82E3EDC4;
loc_82E3ED80:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d82d68
	ctx.lr = 0x82E3ED90;
	sub_82D82D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3edd8
	if (!ctx.cr0.eq) goto loc_82E3EDD8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d84240
	ctx.lr = 0x82E3EDA4;
	sub_82D84240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3edd8
	if (!ctx.cr0.eq) goto loc_82E3EDD8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e3ed80
	if (ctx.cr6.lt) goto loc_82E3ED80;
loc_82E3EDC4:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E3EDC8:
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82e3ed48
	if (!ctx.cr0.eq) goto loc_82E3ED48;
loc_82E3EDD0:
	// stfs f31,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E3EDD8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E3EDE4"))) PPC_WEAK_FUNC(sub_82E3EDE4);
PPC_FUNC_IMPL(__imp__sub_82E3EDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3EDE8"))) PPC_WEAK_FUNC(sub_82E3EDE8);
PPC_FUNC_IMPL(__imp__sub_82E3EDE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E3EDF0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6ad4
	ctx.lr = 0x82E3EDF8;
	__savefpr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lfs f31,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// bne cr6,0x82e3ee24
	if (!ctx.cr6.eq) goto loc_82E3EE24;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e3f0ac
	goto loc_82E3F0AC;
loc_82E3EE24:
	// lis r30,-31890
	ctx.r30.s64 = -2089943040;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-4716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4716);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82d80a68
	ctx.lr = 0x82E3EE38;
	sub_82D80A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3f0ac
	if (!ctx.cr0.eq) goto loc_82E3F0AC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f23,-16892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16892);
	ctx.f23.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e3f094
	if (!ctx.cr6.gt) goto loc_82E3F094;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f25,-18328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18328);
	ctx.f25.f64 = double(temp.f32);
	// lfs f28,-18324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18324);
	ctx.f28.f64 = double(temp.f32);
	// lfs f24,-18332(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18332);
	ctx.f24.f64 = double(temp.f32);
	// lfs f26,-17972(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17972);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f27.f64 = double(temp.f32);
loc_82E3EE80:
	// lwz r11,-4716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4716);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82d80b08
	ctx.lr = 0x82E3EEA0;
	sub_82D80B08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3f0ac
	if (!ctx.cr0.eq) goto loc_82E3F0AC;
	// lwz r11,-4716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4716);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82d809d8
	ctx.lr = 0x82E3EEC0;
	sub_82D809D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3f0ac
	if (!ctx.cr0.eq) goto loc_82E3F0AC;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e3ef00
	if (ctx.cr0.eq) goto loc_82E3EF00;
	// addi r10,r31,116
	ctx.r10.s64 = ctx.r31.s64 + 116;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f10,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// b 0x82e3ef24
	goto loc_82E3EF24;
loc_82E3EF00:
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f0,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82E3EF24:
	// fmuls f0,f9,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f0,f8,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bge cr6,0x82e3f084
	if (!ctx.cr6.lt) goto loc_82E3F084;
	// rlwinm. r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmr f23,f0
	ctx.f23.f64 = ctx.f0.f64;
	// bne 0x82e3efcc
	if (!ctx.cr0.eq) goto loc_82E3EFCC;
	// lfs f12,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82e3ef58
	if (ctx.cr6.lt) goto loc_82E3EF58;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82E3EF58:
	// lfs f11,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82e3ef68
	if (!ctx.cr6.lt) goto loc_82E3EF68;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82E3EF68:
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e3ef88
	if (ctx.cr0.eq) goto loc_82E3EF88;
	// fsubs f13,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// ble cr6,0x82e3efcc
	if (!ctx.cr6.gt) goto loc_82E3EFCC;
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fdivs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x82e3efb8
	goto loc_82E3EFB8;
loc_82E3EF88:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82e3efa8
	if (!ctx.cr6.gt) goto loc_82E3EFA8;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// beq cr6,0x82e3efa8
	if (ctx.cr6.eq) goto loc_82E3EFA8;
	// lfs f13,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
loc_82E3EFA8:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x82e3efb4
	if (!ctx.cr6.lt) goto loc_82E3EFB4;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
loc_82E3EFB4:
	// fdivs f30,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
loc_82E3EFB8:
	// fcmpu cr6,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f27.f64);
	// bge cr6,0x82e3efc4
	if (!ctx.cr6.lt) goto loc_82E3EFC4;
	// fmr f30,f27
	ctx.f30.f64 = ctx.f27.f64;
loc_82E3EFC4:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x82e3efd0
	if (!ctx.cr6.gt) goto loc_82E3EFD0;
loc_82E3EFCC:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_82E3EFD0:
	// lfs f11,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f24
	ctx.cr6.compare(ctx.f11.f64, ctx.f24.f64);
	// blt cr6,0x82e3efe8
	if (ctx.cr6.lt) goto loc_82E3EFE8;
	// lfs f13,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f24
	ctx.cr6.compare(ctx.f13.f64, ctx.f24.f64);
	// bge cr6,0x82e3f084
	if (!ctx.cr6.lt) goto loc_82E3F084;
loc_82E3EFE8:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bgt cr6,0x82e3eff8
	if (ctx.cr6.gt) goto loc_82E3EFF8;
	// fmr f13,f27
	ctx.f13.f64 = ctx.f27.f64;
	// b 0x82e3f044
	goto loc_82E3F044;
loc_82E3EFF8:
	// fdivs f0,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f7,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmadds f13,f6,f12,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fnmadds f0,f5,f0,f13
	ctx.f0.f64 = double(float(-(ctx.f5.f64 * ctx.f0.f64 + ctx.f13.f64)));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x82e3f030
	if (!ctx.cr6.lt) goto loc_82E3F030;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82e3f03c
	goto loc_82E3F03C;
loc_82E3F030:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82e3f03c
	if (!ctx.cr6.gt) goto loc_82E3F03C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82E3F03C:
	// fsubs f0,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmuls f13,f0,f25
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
loc_82E3F044:
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82e3f058
	if (!ctx.cr6.lt) goto loc_82E3F058;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// b 0x82e3f084
	goto loc_82E3F084;
loc_82E3F058:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82e3f080
	if (!ctx.cr6.lt) goto loc_82E3F080;
	// lfs f0,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmadds f29,f12,f0,f13
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x82e3f084
	goto loc_82E3F084;
loc_82E3F080:
	// lfs f29,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f29.f64 = double(temp.f32);
loc_82E3F084:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e3ee80
	if (ctx.cr6.lt) goto loc_82E3EE80;
loc_82E3F094:
	// lfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f29,f30
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_82E3F0AC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82cb6b20
	ctx.lr = 0x82E3F0B8;
	__restfpr_23(ctx, base);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E3F0BC"))) PPC_WEAK_FUNC(sub_82E3F0BC);
PPC_FUNC_IMPL(__imp__sub_82E3F0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3F0C0"))) PPC_WEAK_FUNC(sub_82E3F0C0);
PPC_FUNC_IMPL(__imp__sub_82E3F0C0) {
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
	ctx.lr = 0x82E3F0D4;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3f1a4
	if (ctx.cr0.eq) goto loc_82E3F1A4;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f29,f0
	ctx.f29.f64 = double(float(ctx.f0.f64));
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f29,f0
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// bl 0x82cb2308
	ctx.lr = 0x82E3F10C;
	sub_82CB2308(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f30,-18116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18116);
	ctx.f30.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f28,f13
	ctx.f28.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fnmsubs f0,f0,f31,f29
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f29.f64)));
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// bl 0x82cb2308
	ctx.lr = 0x82E3F14C;
	sub_82CB2308(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f29,f13
	ctx.f29.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fnmsubs f0,f0,f31,f28
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f28.f64)));
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// bl 0x82cb2308
	ctx.lr = 0x82E3F184;
	sub_82CB2308(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fnmsubs f0,f0,f31,f29
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f29.f64)));
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
loc_82E3F1A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82cb6b34
	ctx.lr = 0x82E3F1B0;
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

__attribute__((alias("__imp__sub_82E3F1C0"))) PPC_WEAK_FUNC(sub_82E3F1C0);
PPC_FUNC_IMPL(__imp__sub_82E3F1C0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x82e3f2bc
	if (ctx.cr6.eq) goto loc_82E3F2BC;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// bl 0x82cb2308
	ctx.lr = 0x82E3F1F4;
	sub_82CB2308(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-18028(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18028);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// beq cr6,0x82e3f278
	if (ctx.cr6.eq) goto loc_82E3F278;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e3f2b8
	if (!ctx.cr6.eq) goto loc_82E3F2B8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,-17724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17724);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwa r11,80(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,16524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16524);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f2b4
	goto loc_82E3F2B4;
loc_82E3F278:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,-16932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16932);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwa r11,80(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-16024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16024);
	ctx.f0.f64 = double(temp.f32);
loc_82E3F2B4:
	// fmuls f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82E3F2B8:
	// fsubs f1,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
loc_82E3F2BC:
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

__attribute__((alias("__imp__sub_82E3F2D4"))) PPC_WEAK_FUNC(sub_82E3F2D4);
PPC_FUNC_IMPL(__imp__sub_82E3F2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3F2D8"))) PPC_WEAK_FUNC(sub_82E3F2D8);
PPC_FUNC_IMPL(__imp__sub_82E3F2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e3f2e8
	if (!ctx.cr6.eq) goto loc_82E3F2E8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E3F2E8:
	// lfs f0,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// beq cr6,0x82e3f320
	if (ctx.cr6.eq) goto loc_82E3F320;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82e3f314
	if (ctx.cr6.eq) goto loc_82E3F314;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82e3f330
	if (!ctx.cr6.eq) goto loc_82E3F330;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-17724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17724);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e3f328
	goto loc_82E3F328;
loc_82E3F314:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-16932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16932);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e3f328
	goto loc_82E3F328;
loc_82E3F320:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6484);
	ctx.f13.f64 = double(temp.f32);
loc_82E3F328:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82E3F330:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3F338"))) PPC_WEAK_FUNC(sub_82E3F338);
PPC_FUNC_IMPL(__imp__sub_82E3F338) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82e3f3ac
	if (ctx.cr6.eq) goto loc_82E3F3AC;
	// bl 0x82cb2308
	ctx.lr = 0x82E3F370;
	sub_82CB2308(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f12.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfs f13,-18028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18028);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmsubs f2,f12,f13,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// bl 0x82cb59b0
	ctx.lr = 0x82E3F3A4;
	sub_82CB59B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_82E3F3AC:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bgt cr6,0x82e3f3b8
	if (ctx.cr6.gt) goto loc_82E3F3B8;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_82E3F3B8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3F3D8"))) PPC_WEAK_FUNC(sub_82E3F3D8);
PPC_FUNC_IMPL(__imp__sub_82E3F3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E3F3E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e3f400
	if (!ctx.cr0.eq) goto loc_82E3F400;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e3f404
	if (!ctx.cr0.eq) goto loc_82E3F404;
loc_82E3F400:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E3F404:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82e3f438
	if (ctx.cr6.eq) goto loc_82E3F438;
	// lwz r31,356(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// addi r30,r11,356
	ctx.r30.s64 = ctx.r11.s64 + 356;
	// b 0x82e3f430
	goto loc_82E3F430;
loc_82E3F418:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82da4630
	ctx.lr = 0x82E3F424;
	sub_82DA4630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e3f444
	if (ctx.cr0.eq) goto loc_82E3F444;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E3F430:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e3f418
	if (!ctx.cr6.eq) goto loc_82E3F418;
loc_82E3F438:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E3F43C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82E3F444:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82e3f45c
	if (ctx.cr6.lt) goto loc_82E3F45C;
	// beq cr6,0x82e3f46c
	if (ctx.cr6.eq) goto loc_82E3F46C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82e3f464
	if (!ctx.cr6.lt) goto loc_82E3F464;
loc_82E3F45C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82E3F464:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e3f43c
	goto loc_82E3F43C;
loc_82E3F46C:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// b 0x82e3f464
	goto loc_82E3F464;
}

__attribute__((alias("__imp__sub_82E3F478"))) PPC_WEAK_FUNC(sub_82E3F478);
PPC_FUNC_IMPL(__imp__sub_82E3F478) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e3f4a4
	if (!ctx.cr0.eq) goto loc_82E3F4A4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3f4a4
	if (ctx.cr0.eq) goto loc_82E3F4A4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82E3F4A4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82e3f740
	if (ctx.cr6.lt) goto loc_82E3F740;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e3f740
	if (ctx.cr6.eq) goto loc_82E3F740;
	// cmplwi cr6,r9,42
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 42, ctx.xer);
	// bgt cr6,0x82e3f6d4
	if (ctx.cr6.gt) goto loc_82E3F6D4;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,22000
	ctx.r12.s64 = ctx.r12.s64 + 22000;
	// lbzx r0,r12,r9
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r9.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32028
	ctx.r12.s64 = -2098987008;
	// addi r12,r12,-2844
	ctx.r12.s64 = ctx.r12.s64 + -2844;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82E3F4E4;
	case 1:
		goto loc_82E3F4EC;
	case 2:
		goto loc_82E3F560;
	case 3:
		goto loc_82E3F4F4;
	case 4:
		goto loc_82E3F4FC;
	case 5:
		goto loc_82E3F51C;
	case 6:
		goto loc_82E3F524;
	case 7:
		goto loc_82E3F52C;
	case 8:
		goto loc_82E3F534;
	case 9:
		goto loc_82E3F548;
	case 10:
		goto loc_82E3F554;
	case 11:
		goto loc_82E3F568;
	case 12:
		goto loc_82E3F570;
	case 13:
		goto loc_82E3F578;
	case 14:
		goto loc_82E3F5CC;
	case 15:
		goto loc_82E3F5D8;
	case 16:
		goto loc_82E3F5E4;
	case 17:
		goto loc_82E3F5EC;
	case 18:
		goto loc_82E3F5F4;
	case 19:
		goto loc_82E3F608;
	case 20:
		goto loc_82E3F610;
	case 21:
		goto loc_82E3F618;
	case 22:
		goto loc_82E3F620;
	case 23:
		goto loc_82E3F628;
	case 24:
		goto loc_82E3F630;
	case 25:
		goto loc_82E3F638;
	case 26:
		goto loc_82E3F640;
	case 27:
		goto loc_82E3F648;
	case 28:
		goto loc_82E3F650;
	case 29:
		goto loc_82E3F658;
	case 30:
		goto loc_82E3F660;
	case 31:
		goto loc_82E3F668;
	case 32:
		goto loc_82E3F670;
	case 33:
		goto loc_82E3F678;
	case 34:
		goto loc_82E3F688;
	case 35:
		goto loc_82E3F694;
	case 36:
		goto loc_82E3F69C;
	case 37:
		goto loc_82E3F680;
	case 38:
		goto loc_82E3F6A4;
	case 39:
		goto loc_82E3F6AC;
	case 40:
		goto loc_82E3F6B4;
	case 41:
		goto loc_82E3F6BC;
	case 42:
		goto loc_82E3F600;
	default:
		__builtin_unreachable();
	}
loc_82E3F4E4:
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// b 0x82e3f728
	goto loc_82E3F728;
loc_82E3F4EC:
	// lfs f0,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F4F4:
	// lfs f0,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F4FC:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82E3F500:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E3F510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e3f72c
	if (ctx.cr0.eq) goto loc_82E3F72C;
	// b 0x82e3f744
	goto loc_82E3F744;
loc_82E3F51C:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82e3f500
	goto loc_82E3F500;
loc_82E3F524:
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x82e3f500
	goto loc_82E3F500;
loc_82E3F52C:
	// lfs f0,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F534:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6484);
	ctx.f0.f64 = double(temp.f32);
loc_82E3F53C:
	// lfs f13,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F548:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-16932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16932);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f53c
	goto loc_82E3F53C;
loc_82E3F554:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-17724(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17724);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f53c
	goto loc_82E3F53C;
loc_82E3F560:
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F568:
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// b 0x82e3f728
	goto loc_82E3F728;
loc_82E3F570:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x82e3f728
	goto loc_82E3F728;
loc_82E3F578:
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e3f58c
	if (ctx.cr0.eq) goto loc_82E3F58C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e3f728
	goto loc_82E3F728;
loc_82E3F58C:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e3f59c
	if (ctx.cr0.eq) goto loc_82E3F59C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82e3f728
	goto loc_82E3F728;
loc_82E3F59C:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e3f5ac
	if (ctx.cr0.eq) goto loc_82E3F5AC;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82e3f728
	goto loc_82E3F728;
loc_82E3F5AC:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e3f5bc
	if (ctx.cr0.eq) goto loc_82E3F5BC;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82e3f728
	goto loc_82E3F728;
loc_82E3F5BC:
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r10,r11,11,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 11) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// b 0x82e3f72c
	goto loc_82E3F72C;
loc_82E3F5CC:
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// b 0x82e3f728
	goto loc_82E3F728;
loc_82E3F5D8:
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// andis. r11,r11,1072
	ctx.r11.u64 = ctx.r11.u64 & 70254592;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82e3f728
	goto loc_82E3F728;
loc_82E3F5E4:
	// lfs f0,184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F5EC:
	// lfs f0,188(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F5F4:
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r11,r11,0,12,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000;
	// b 0x82e3f728
	goto loc_82E3F728;
loc_82E3F600:
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82E3F608:
	// lfs f0,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F610:
	// lfs f0,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F618:
	// lfs f0,200(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F620:
	// lfs f0,204(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F628:
	// lfs f0,288(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F630:
	// lfs f0,292(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F638:
	// lfs f0,208(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F640:
	// lfs f0,216(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F648:
	// lfs f0,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F650:
	// lfs f0,232(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F658:
	// lfs f0,236(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F660:
	// lfs f0,224(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F668:
	// lfs f0,228(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F670:
	// lfs f0,220(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F678:
	// lfs f0,244(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F680:
	// lfs f0,240(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F688:
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// rlwinm r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// b 0x82e3f728
	goto loc_82E3F728;
loc_82E3F694:
	// lha r11,320(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 320));
	// b 0x82e3f728
	goto loc_82E3F728;
loc_82E3F69C:
	// lha r11,322(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 322));
	// b 0x82e3f728
	goto loc_82E3F728;
loc_82E3F6A4:
	// lfs f0,296(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F6AC:
	// lfs f0,300(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F6B4:
	// lfs f0,304(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3f738
	goto loc_82E3F738;
loc_82E3F6BC:
	// lha r11,326(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 326));
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,31,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x3;
	// bne 0x82e3f728
	if (!ctx.cr0.eq) goto loc_82E3F728;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82e3f728
	goto loc_82E3F728;
loc_82E3F6D4:
	// addi r10,r3,356
	ctx.r10.s64 = ctx.r3.s64 + 356;
	// addi r9,r9,-43
	ctx.r9.s64 = ctx.r9.s64 + -43;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e3f740
	if (ctx.cr6.eq) goto loc_82E3F740;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e3f704
	if (!ctx.cr6.gt) goto loc_82E3F704;
loc_82E3F6F0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e3f740
	if (ctx.cr6.eq) goto loc_82E3F740;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x82e3f6f0
	if (ctx.cr0.gt) goto loc_82E3F6F0;
loc_82E3F704:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e3f740
	if (ctx.cr6.eq) goto loc_82E3F740;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82e3f724
	if (ctx.cr6.lt) goto loc_82E3F724;
	// beq cr6,0x82e3f734
	if (ctx.cr6.eq) goto loc_82E3F734;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x82e3f72c
	if (!ctx.cr6.lt) goto loc_82E3F72C;
loc_82E3F724:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_82E3F728:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82E3F72C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e3f744
	goto loc_82E3F744;
loc_82E3F734:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
loc_82E3F738:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// b 0x82e3f72c
	goto loc_82E3F72C;
loc_82E3F740:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E3F744:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3F754"))) PPC_WEAK_FUNC(sub_82E3F754);
PPC_FUNC_IMPL(__imp__sub_82E3F754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3F758"))) PPC_WEAK_FUNC(sub_82E3F758);
PPC_FUNC_IMPL(__imp__sub_82E3F758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E3F760;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e3f780
	if (!ctx.cr0.eq) goto loc_82E3F780;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e3f784
	if (!ctx.cr0.eq) goto loc_82E3F784;
loc_82E3F780:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E3F784:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82e3f7b8
	if (ctx.cr6.eq) goto loc_82E3F7B8;
	// lwz r31,356(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// addi r30,r11,356
	ctx.r30.s64 = ctx.r11.s64 + 356;
	// b 0x82e3f7b0
	goto loc_82E3F7B0;
loc_82E3F798:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82da4630
	ctx.lr = 0x82E3F7A4;
	sub_82DA4630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e3f7c4
	if (ctx.cr0.eq) goto loc_82E3F7C4;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E3F7B0:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e3f798
	if (!ctx.cr6.eq) goto loc_82E3F798;
loc_82E3F7B8:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E3F7BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82E3F7C4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82e3f7dc
	if (ctx.cr6.lt) goto loc_82E3F7DC;
	// beq cr6,0x82e3f7ec
	if (ctx.cr6.eq) goto loc_82E3F7EC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82e3f7e4
	if (!ctx.cr6.lt) goto loc_82E3F7E4;
loc_82E3F7DC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82E3F7E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e3f7bc
	goto loc_82E3F7BC;
loc_82E3F7EC:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x82e3f7e4
	goto loc_82E3F7E4;
}

__attribute__((alias("__imp__sub_82E3F7F8"))) PPC_WEAK_FUNC(sub_82E3F7F8);
PPC_FUNC_IMPL(__imp__sub_82E3F7F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e3f808
	if (!ctx.cr0.eq) goto loc_82E3F808;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E3F808:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e3f818
	if (!ctx.cr6.eq) goto loc_82E3F818;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E3F818:
	// addi r10,r11,356
	ctx.r10.s64 = ctx.r11.s64 + 356;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82e3f830
	goto loc_82E3F830;
loc_82E3F828:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82E3F830:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e3f828
	if (!ctx.cr6.eq) goto loc_82E3F828;
	// addi r11,r9,43
	ctx.r11.s64 = ctx.r9.s64 + 43;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3F848"))) PPC_WEAK_FUNC(sub_82E3F848);
PPC_FUNC_IMPL(__imp__sub_82E3F848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e3f858
	if (!ctx.cr0.eq) goto loc_82E3F858;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E3F858:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e3f868
	if (!ctx.cr6.eq) goto loc_82E3F868;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E3F868:
	// lwz r11,368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3F878"))) PPC_WEAK_FUNC(sub_82E3F878);
PPC_FUNC_IMPL(__imp__sub_82E3F878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E3F880;
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
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e3f904
	if (ctx.cr0.eq) goto loc_82E3F904;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e3f904
	if (ctx.cr6.eq) goto loc_82E3F904;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e3f904
	if (!ctx.cr6.gt) goto loc_82E3F904;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E3F8BC:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e3f8f0
	if (ctx.cr6.eq) goto loc_82E3F8F0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E3F8E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3f910
	if (!ctx.cr0.eq) goto loc_82E3F910;
loc_82E3F8F0:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e3f8bc
	if (ctx.cr6.lt) goto loc_82E3F8BC;
loc_82E3F904:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 372, ctx.r28.u32);
	// stw r27,376(r30)
	PPC_STORE_U32(ctx.r30.u32 + 376, ctx.r27.u32);
loc_82E3F910:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E3F918"))) PPC_WEAK_FUNC(sub_82E3F918);
PPC_FUNC_IMPL(__imp__sub_82E3F918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E3F920;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lfs f29,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x82e3f950
	if (!ctx.cr6.gt) goto loc_82E3F950;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
loc_82E3F950:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// bge cr6,0x82e3f964
	if (!ctx.cr6.lt) goto loc_82E3F964;
	// fmr f31,f12
	ctx.f31.f64 = ctx.f12.f64;
loc_82E3F964:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e3fa0c
	if (ctx.cr0.eq) goto loc_82E3FA0C;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3f97c
	if (ctx.cr0.eq) goto loc_82E3F97C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82E3F97C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stfs f31,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e3fa84
	if (!ctx.cr6.gt) goto loc_82E3FA84;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E3F994:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3f9f4
	if (ctx.cr0.eq) goto loc_82E3F9F4;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e3f9f4
	if (ctx.cr6.eq) goto loc_82E3F9F4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stfs f31,92(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,380(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 380);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e3f9f4
	if (ctx.cr6.eq) goto loc_82E3F9F4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// bl 0x82e3ec80
	ctx.lr = 0x82E3F9D4;
	sub_82E3EC80(ctx, base);
	// lfs f0,96(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f13,92(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,380(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 380);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82d825d0
	ctx.lr = 0x82E3F9EC;
	sub_82D825D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3fa88
	if (!ctx.cr0.eq) goto loc_82E3FA88;
loc_82E3F9F4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e3f994
	if (ctx.cr6.lt) goto loc_82E3F994;
	// b 0x82e3fa84
	goto loc_82E3FA84;
loc_82E3FA0C:
	// lwz r11,380(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 380);
	// stfs f31,92(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 92, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e3fa84
	if (ctx.cr6.eq) goto loc_82E3FA84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e3ec80
	ctx.lr = 0x82E3FA24;
	sub_82E3EC80(ctx, base);
	// lfs f0,96(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f13,108(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fmuls f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// beq cr6,0x82e3fa70
	if (ctx.cr6.eq) goto loc_82E3FA70;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// bl 0x82cb2308
	ctx.lr = 0x82E3FA44;
	sub_82CB2308(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fsubs f13,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,-18116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmuls f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
loc_82E3FA70:
	// lwz r3,380(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 380);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82d825d0
	ctx.lr = 0x82E3FA7C;
	sub_82D825D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3fa88
	if (!ctx.cr0.eq) goto loc_82E3FA88;
loc_82E3FA84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E3FA88:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82E3FA9C"))) PPC_WEAK_FUNC(sub_82E3FA9C);
PPC_FUNC_IMPL(__imp__sub_82E3FA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3FAA0"))) PPC_WEAK_FUNC(sub_82E3FAA0);
PPC_FUNC_IMPL(__imp__sub_82E3FAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e3fab0
	if (!ctx.cr6.eq) goto loc_82E3FAB0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E3FAB0:
	// lfs f0,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3FAC0"))) PPC_WEAK_FUNC(sub_82E3FAC0);
PPC_FUNC_IMPL(__imp__sub_82E3FAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E3FAC8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// beq cr6,0x82e3fb0c
	if (ctx.cr6.eq) goto loc_82E3FB0C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82e3fb00
	if (ctx.cr6.eq) goto loc_82E3FB00;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x82e3fb18
	if (!ctx.cr6.eq) goto loc_82E3FB18;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,16524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16524);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3fb14
	goto loc_82E3FB14;
loc_82E3FB00:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-16024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16024);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e3fb14
	goto loc_82E3FB14;
loc_82E3FB0C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7616);
	ctx.f0.f64 = double(temp.f32);
loc_82E3FB14:
	// fmuls f31,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_82E3FB18:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e3fb94
	if (ctx.cr0.eq) goto loc_82E3FB94;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3fb30
	if (ctx.cr0.eq) goto loc_82E3FB30;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82E3FB30:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stfs f31,100(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 100, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e3fbfc
	if (!ctx.cr6.gt) goto loc_82E3FBFC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E3FB48:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e3fb7c
	if (ctx.cr0.eq) goto loc_82E3FB7C;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e3fb7c
	if (ctx.cr6.eq) goto loc_82E3FB7C;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82e3fac0
	ctx.lr = 0x82E3FB74;
	sub_82E3FAC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3fc00
	if (!ctx.cr0.eq) goto loc_82E3FC00;
loc_82E3FB7C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e3fb48
	if (ctx.cr6.lt) goto loc_82E3FB48;
	// b 0x82e3fbfc
	goto loc_82E3FBFC;
loc_82E3FB94:
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// stfs f31,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e3fbfc
	if (ctx.cr6.eq) goto loc_82E3FBFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e3f1c0
	ctx.lr = 0x82E3FBAC;
	sub_82E3F1C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,6484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6484);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vexptefp v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	ctx.v0.f32[0] = exp2f(ctx.v0.f32[0]);
	ctx.v0.f32[1] = exp2f(ctx.v0.f32[1]);
	ctx.v0.f32[2] = exp2f(ctx.v0.f32[2]);
	ctx.v0.f32[3] = exp2f(ctx.v0.f32[3]);
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d82660
	ctx.lr = 0x82E3FBF4;
	sub_82D82660(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3fc00
	if (!ctx.cr0.eq) goto loc_82E3FC00;
loc_82E3FBFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E3FC00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E3FC0C"))) PPC_WEAK_FUNC(sub_82E3FC0C);
PPC_FUNC_IMPL(__imp__sub_82E3FC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3FC10"))) PPC_WEAK_FUNC(sub_82E3FC10);
PPC_FUNC_IMPL(__imp__sub_82E3FC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e3fc20
	if (!ctx.cr6.eq) goto loc_82E3FC20;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E3FC20:
	// lfs f0,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// beq cr6,0x82e3fc58
	if (ctx.cr6.eq) goto loc_82E3FC58;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82e3fc4c
	if (ctx.cr6.eq) goto loc_82E3FC4C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82e3fc68
	if (!ctx.cr6.eq) goto loc_82E3FC68;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-17724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17724);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e3fc60
	goto loc_82E3FC60;
loc_82E3FC4C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-16932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16932);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e3fc60
	goto loc_82E3FC60;
loc_82E3FC58:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6484);
	ctx.f13.f64 = double(temp.f32);
loc_82E3FC60:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82E3FC68:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3FC70"))) PPC_WEAK_FUNC(sub_82E3FC70);
PPC_FUNC_IMPL(__imp__sub_82E3FC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f1,104(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3FC80"))) PPC_WEAK_FUNC(sub_82E3FC80);
PPC_FUNC_IMPL(__imp__sub_82E3FC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e3fc90
	if (!ctx.cr6.eq) goto loc_82E3FC90;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E3FC90:
	// lfs f0,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3FCA0"))) PPC_WEAK_FUNC(sub_82E3FCA0);
PPC_FUNC_IMPL(__imp__sub_82E3FCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f1,108(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3FCB0"))) PPC_WEAK_FUNC(sub_82E3FCB0);
PPC_FUNC_IMPL(__imp__sub_82E3FCB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e3fcc0
	if (!ctx.cr6.eq) goto loc_82E3FCC0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E3FCC0:
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3FCD0"))) PPC_WEAK_FUNC(sub_82E3FCD0);
PPC_FUNC_IMPL(__imp__sub_82E3FCD0) {
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
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e3fd04
	if (ctx.cr0.eq) goto loc_82E3FD04;
	// bl 0x82d827a0
	ctx.lr = 0x82E3FCFC;
	sub_82D827A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3fd6c
	if (!ctx.cr0.eq) goto loc_82E3FD6C;
loc_82E3FD04:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e3fd2c
	if (ctx.cr0.eq) goto loc_82E3FD2C;
	// clrlwi. r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e3fd2c
	if (!ctx.cr0.eq) goto loc_82E3FD2C;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r11,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r11.u64);
	// b 0x82e3fd4c
	goto loc_82E3FD4C;
loc_82E3FD2C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e3fd4c
	if (!ctx.cr6.eq) goto loc_82E3FD4C;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e3fd4c
	if (ctx.cr0.eq) goto loc_82E3FD4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e3cc40
	ctx.lr = 0x82E3FD44;
	sub_82E3CC40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3fd6c
	if (!ctx.cr0.eq) goto loc_82E3FD6C;
loc_82E3FD4C:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// clrlwi. r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// beq 0x82e3fd68
	if (ctx.cr0.eq) goto loc_82E3FD68;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
loc_82E3FD68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E3FD6C:
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

__attribute__((alias("__imp__sub_82E3FD84"))) PPC_WEAK_FUNC(sub_82E3FD84);
PPC_FUNC_IMPL(__imp__sub_82E3FD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3FD88"))) PPC_WEAK_FUNC(sub_82E3FD88);
PPC_FUNC_IMPL(__imp__sub_82E3FD88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e3fd98
	if (!ctx.cr6.eq) goto loc_82E3FD98;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E3FD98:
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3FDAC"))) PPC_WEAK_FUNC(sub_82E3FDAC);
PPC_FUNC_IMPL(__imp__sub_82E3FDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3FDB0"))) PPC_WEAK_FUNC(sub_82E3FDB0);
PPC_FUNC_IMPL(__imp__sub_82E3FDB0) {
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
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e3fde4
	if (ctx.cr0.eq) goto loc_82E3FDE4;
	// bl 0x82d82830
	ctx.lr = 0x82E3FDDC;
	sub_82D82830(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e3fe04
	if (!ctx.cr0.eq) goto loc_82E3FE04;
loc_82E3FDE4:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// clrlwi. r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// beq 0x82e3fe00
	if (ctx.cr0.eq) goto loc_82E3FE00;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
loc_82E3FE00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E3FE04:
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

__attribute__((alias("__imp__sub_82E3FE1C"))) PPC_WEAK_FUNC(sub_82E3FE1C);
PPC_FUNC_IMPL(__imp__sub_82E3FE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3FE20"))) PPC_WEAK_FUNC(sub_82E3FE20);
PPC_FUNC_IMPL(__imp__sub_82E3FE20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e3fe30
	if (!ctx.cr6.eq) goto loc_82E3FE30;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E3FE30:
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E3FE44"))) PPC_WEAK_FUNC(sub_82E3FE44);
PPC_FUNC_IMPL(__imp__sub_82E3FE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E3FE48"))) PPC_WEAK_FUNC(sub_82E3FE48);
PPC_FUNC_IMPL(__imp__sub_82E3FE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82E3FE50;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e3fec0
	if (ctx.cr6.eq) goto loc_82E3FEC0;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// beq cr6,0x82e3fec0
	if (ctx.cr6.eq) goto loc_82E3FEC0;
	// lfs f0,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f13,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f12,124(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
loc_82E3FEC0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e3fee0
	if (ctx.cr6.eq) goto loc_82E3FEE0;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
loc_82E3FEE0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82e3ff00
	if (ctx.cr6.eq) goto loc_82E3FF00;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
loc_82E3FF00:
	// lwz r27,332(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r24,r31,332
	ctx.r24.s64 = ctx.r31.s64 + 332;
	// b 0x82e3ffe0
	goto loc_82E3FFE0;
loc_82E3FF0C:
	// lwz r29,84(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// addi r25,r27,84
	ctx.r25.s64 = ctx.r27.s64 + 84;
	// b 0x82e3ffd4
	goto loc_82E3FFD4;
loc_82E3FF18:
	// lwz r28,120(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r26,r29,120
	ctx.r26.s64 = ctx.r29.s64 + 120;
loc_82E3FF24:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e3ffc0
	if (ctx.cr0.eq) goto loc_82E3FFC0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d84490
	ctx.lr = 0x82E3FF38;
	sub_82D84490(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e3ff48
	if (ctx.cr0.eq) goto loc_82E3FF48;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e40040
	if (!ctx.cr6.eq) goto loc_82E40040;
loc_82E3FF48:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e3ffc0
	if (ctx.cr0.eq) goto loc_82E3FFC0;
	// lfs f13,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r31,156
	ctx.r5.s64 = ctx.r31.s64 + 156;
	// lfs f0,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f12,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lfs f11,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f0,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82d83998
	ctx.lr = 0x82E3FF94;
	sub_82D83998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e3ffa4
	if (ctx.cr0.eq) goto loc_82E3FFA4;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e40040
	if (!ctx.cr6.eq) goto loc_82E40040;
loc_82E3FFA4:
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82d83c28
	ctx.lr = 0x82E3FFB0;
	sub_82D83C28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e3ffc0
	if (ctx.cr0.eq) goto loc_82E3FFC0;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e40040
	if (!ctx.cr6.eq) goto loc_82E40040;
loc_82E3FFC0:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e3ff24
	if (!ctx.cr6.eq) goto loc_82E3FF24;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82E3FFD4:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82e3ff18
	if (!ctx.cr6.eq) goto loc_82E3FF18;
	// lwz r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82E3FFE0:
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82e3ff0c
	if (!ctx.cr6.eq) goto loc_82E3FF0C;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e4003c
	if (!ctx.cr0.eq) goto loc_82E4003C;
	// lwz r30,344(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r31,r31,344
	ctx.r31.s64 = ctx.r31.s64 + 344;
	// b 0x82e40034
	goto loc_82E40034;
loc_82E40000:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r3,r30,-4
	ctx.r3.s64 = ctx.r30.s64 + -4;
	// bne cr6,0x82e40010
	if (!ctx.cr6.eq) goto loc_82E40010;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E40010:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm. r11,r11,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e40030
	if (ctx.cr0.eq) goto loc_82E40030;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e479e0
	ctx.lr = 0x82E40028;
	sub_82E479E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40040
	if (!ctx.cr0.eq) goto loc_82E40040;
loc_82E40030:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82E40034:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82e40000
	if (!ctx.cr6.eq) goto loc_82E40000;
loc_82E4003C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E40040:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E40048"))) PPC_WEAK_FUNC(sub_82E40048);
PPC_FUNC_IMPL(__imp__sub_82E40048) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e4006c
	if (ctx.cr6.eq) goto loc_82E4006C;
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_82E4006C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e40090
	if (ctx.cr6.eq) goto loc_82E40090;
	// addi r11,r3,156
	ctx.r11.s64 = ctx.r3.s64 + 156;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
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
loc_82E40090:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82e400b4
	if (ctx.cr6.eq) goto loc_82E400B4;
	// addi r11,r3,168
	ctx.r11.s64 = ctx.r3.s64 + 168;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
loc_82E400B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E400BC"))) PPC_WEAK_FUNC(sub_82E400BC);
PPC_FUNC_IMPL(__imp__sub_82E400BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E400C0"))) PPC_WEAK_FUNC(sub_82E400C0);
PPC_FUNC_IMPL(__imp__sub_82E400C0) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82e3df58
	sub_82E3DF58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E400C8"))) PPC_WEAK_FUNC(sub_82E400C8);
PPC_FUNC_IMPL(__imp__sub_82E400C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e400e0
	if (!ctx.cr6.eq) goto loc_82E400E0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82e400f0
	if (!ctx.cr6.eq) goto loc_82E400F0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E400E0:
	// lfs f0,252(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// beq cr6,0x82e400f8
	if (ctx.cr6.eq) goto loc_82E400F8;
loc_82E400F0:
	// lfs f0,256(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82E400F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40100"))) PPC_WEAK_FUNC(sub_82E40100);
PPC_FUNC_IMPL(__imp__sub_82E40100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82E40108;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,248(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e4015c
	if (!ctx.cr0.eq) goto loc_82E4015C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,22184
	ctx.r5.s64 = ctx.r11.s64 + 22184;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,11483
	ctx.r6.s64 = 11483;
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82E40148;
	sub_82D85F40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r3.u32);
	// bne 0x82e4015c
	if (!ctx.cr0.eq) goto loc_82E4015C;
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e401e4
	goto loc_82E401E4;
loc_82E4015C:
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82E40168;
	sub_82CB1160(ctx, base);
	// lwz r29,332(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// addi r25,r30,332
	ctx.r25.s64 = ctx.r30.s64 + 332;
	// b 0x82e401d8
	goto loc_82E401D8;
loc_82E40174:
	// lwz r31,84(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r26,r29,84
	ctx.r26.s64 = ctx.r29.s64 + 84;
	// b 0x82e401cc
	goto loc_82E401CC;
loc_82E40180:
	// lwz r28,120(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r27,r31,120
	ctx.r27.s64 = ctx.r31.s64 + 120;
loc_82E4018C:
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e401b8
	if (ctx.cr0.eq) goto loc_82E401B8;
	// lwz r4,248(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// bl 0x82d83810
	ctx.lr = 0x82E401A0;
	sub_82D83810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e401b8
	if (ctx.cr0.eq) goto loc_82E401B8;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82e401b8
	if (ctx.cr6.eq) goto loc_82E401B8;
	// cmpwi cr6,r3,78
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 78, ctx.xer);
	// bne cr6,0x82e401e4
	if (!ctx.cr6.eq) goto loc_82E401E4;
loc_82E401B8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82e4018c
	if (!ctx.cr6.eq) goto loc_82E4018C;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E401CC:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e40180
	if (!ctx.cr6.eq) goto loc_82E40180;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82E401D8:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82e40174
	if (!ctx.cr6.eq) goto loc_82E40174;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E401E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E401EC"))) PPC_WEAK_FUNC(sub_82E401EC);
PPC_FUNC_IMPL(__imp__sub_82E401EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E401F0"))) PPC_WEAK_FUNC(sub_82E401F0);
PPC_FUNC_IMPL(__imp__sub_82E401F0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e40214
	if (!ctx.cr6.eq) goto loc_82E40214;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e40234
	goto loc_82E40234;
loc_82E40214:
	// lwz r4,248(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// li r5,72
	ctx.r5.s64 = 72;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x82e4022c
	if (!ctx.cr0.eq) goto loc_82E4022C;
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r4,r11,11504
	ctx.r4.s64 = ctx.r11.s64 + 11504;
loc_82E4022C:
	// bl 0x82cb1160
	ctx.lr = 0x82E40230;
	sub_82CB1160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E40234:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40244"))) PPC_WEAK_FUNC(sub_82E40244);
PPC_FUNC_IMPL(__imp__sub_82E40244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E40248"))) PPC_WEAK_FUNC(sub_82E40248);
PPC_FUNC_IMPL(__imp__sub_82E40248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82E40250;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82e4026c
	if (!ctx.cr6.eq) goto loc_82E4026C;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e40504
	goto loc_82E40504;
loc_82E4026C:
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r23,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r23.u32);
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e402e4
	if (!ctx.cr0.eq) goto loc_82E402E4;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e402dc
	if (ctx.cr0.eq) goto loc_82E402DC;
	// lwz r9,20(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82e402dc
	if (!ctx.cr0.gt) goto loc_82E402DC;
loc_82E402A4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82e402c0
	if (ctx.cr6.eq) goto loc_82E402C0;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,312(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 312);
	// rlwinm. r8,r8,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82e402d4
	if (!ctx.cr0.eq) goto loc_82E402D4;
loc_82E402C0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e402a4
	if (ctx.cr6.lt) goto loc_82E402A4;
	// b 0x82e402dc
	goto loc_82E402DC;
loc_82E402D4:
	// li r11,34
	ctx.r11.s64 = 34;
loc_82E402D8:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82E402DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e40504
	goto loc_82E40504;
loc_82E402E4:
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e404e8
	if (!ctx.cr6.eq) goto loc_82E404E8;
	// lwz r11,328(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e404e8
	if (!ctx.cr6.eq) goto loc_82E404E8;
	// lwz r11,312(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 312);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e40310
	if (ctx.cr0.eq) goto loc_82E40310;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82E40310:
	// lwz r27,332(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 332);
	// addi r24,r26,332
	ctx.r24.s64 = ctx.r26.s64 + 332;
	// b 0x82e404b0
	goto loc_82E404B0;
loc_82E4031C:
	// lwz r29,84(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// addi r25,r27,84
	ctx.r25.s64 = ctx.r27.s64 + 84;
	// b 0x82e40494
	goto loc_82E40494;
loc_82E40328:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e403fc
	if (!ctx.cr0.eq) goto loc_82E403FC;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e403fc
	if (!ctx.cr0.eq) goto loc_82E403FC;
	// lwz r31,120(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r30,r29,120
	ctx.r30.s64 = ctx.r29.s64 + 120;
	// b 0x82e403e0
	goto loc_82E403E0;
loc_82E40348:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82d84170
	ctx.lr = 0x82E40354;
	sub_82D84170(ctx, base);
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82e40370
	if (ctx.cr6.eq) goto loc_82E40370;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x82e40370
	if (ctx.cr6.eq) goto loc_82E40370;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e40504
	if (!ctx.cr6.eq) goto loc_82E40504;
	// b 0x82e40374
	goto loc_82E40374;
loc_82E40370:
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
loc_82E40374:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e403d0
	if (ctx.cr0.eq) goto loc_82E403D0;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82d85188
	ctx.lr = 0x82E40390;
	sub_82D85188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40504
	if (!ctx.cr0.eq) goto loc_82E40504;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e403b0
	if (ctx.cr0.eq) goto loc_82E403B0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82E403B0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e403d0
	if (ctx.cr6.eq) goto loc_82E403D0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82e403d0
	if (ctx.cr6.eq) goto loc_82E403D0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82E403D0:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e403ec
	if (!ctx.cr0.eq) goto loc_82E403EC;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E403E0:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e40348
	if (!ctx.cr6.eq) goto loc_82E40348;
	// b 0x82e40490
	goto loc_82E40490;
loc_82E403EC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82e40490
	goto loc_82E40490;
loc_82E403FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x82d84170
	ctx.lr = 0x82E40408;
	sub_82D84170(ctx, base);
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82e40424
	if (ctx.cr6.eq) goto loc_82E40424;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x82e40424
	if (ctx.cr6.eq) goto loc_82E40424;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e40504
	if (!ctx.cr6.eq) goto loc_82E40504;
	// b 0x82e40428
	goto loc_82E40428;
loc_82E40424:
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
loc_82E40428:
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e40484
	if (ctx.cr0.eq) goto loc_82E40484;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82d85188
	ctx.lr = 0x82E40444;
	sub_82D85188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40504
	if (!ctx.cr0.eq) goto loc_82E40504;
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e40464
	if (ctx.cr0.eq) goto loc_82E40464;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82E40464:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e40484
	if (ctx.cr6.eq) goto loc_82E40484;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82e40484
	if (ctx.cr6.eq) goto loc_82E40484;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82E40484:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e404a0
	if (!ctx.cr0.eq) goto loc_82E404A0;
loc_82E40490:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82E40494:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82e40328
	if (!ctx.cr6.eq) goto loc_82E40328;
	// b 0x82e404ac
	goto loc_82E404AC;
loc_82E404A0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82E404AC:
	// lwz r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82E404B0:
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82e4031c
	if (!ctx.cr6.eq) goto loc_82E4031C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// andi. r10,r11,20
	ctx.r10.u64 = ctx.r11.u64 & 20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82e404d0
	if (!ctx.cr0.eq) goto loc_82E404D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82E404D0:
	// lwz r11,312(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 312);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e402dc
	if (ctx.cr0.eq) goto loc_82E402DC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x82e402d8
	goto loc_82E402D8;
loc_82E404E8:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lwz r3,328(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40504
	if (!ctx.cr0.eq) goto loc_82E40504;
	// lwz r3,328(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 328);
loc_82E40504:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4050C"))) PPC_WEAK_FUNC(sub_82E4050C);
PPC_FUNC_IMPL(__imp__sub_82E4050C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E40510"))) PPC_WEAK_FUNC(sub_82E40510);
PPC_FUNC_IMPL(__imp__sub_82E40510) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e40520
	if (!ctx.cr6.eq) goto loc_82E40520;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E40520:
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40530"))) PPC_WEAK_FUNC(sub_82E40530);
PPC_FUNC_IMPL(__imp__sub_82E40530) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e40540
	if (!ctx.cr6.eq) goto loc_82E40540;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E40540:
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40550"))) PPC_WEAK_FUNC(sub_82E40550);
PPC_FUNC_IMPL(__imp__sub_82E40550) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40560"))) PPC_WEAK_FUNC(sub_82E40560);
PPC_FUNC_IMPL(__imp__sub_82E40560) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e40570
	if (!ctx.cr6.eq) goto loc_82E40570;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E40570:
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40580"))) PPC_WEAK_FUNC(sub_82E40580);
PPC_FUNC_IMPL(__imp__sub_82E40580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82E40588;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82e405a4
	if (!ctx.cr6.eq) goto loc_82E405A4;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e406b0
	goto loc_82E406B0;
loc_82E405A4:
	// lis r26,-31890
	ctx.r26.s64 = -2089943040;
	// lwz r11,-4716(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e405bc
	if (ctx.cr6.eq) goto loc_82E405BC;
	// li r3,32
	ctx.r3.s64 = 32;
	// b 0x82e406b0
	goto loc_82E406B0;
loc_82E405BC:
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// addi r30,r11,19872
	ctx.r30.s64 = ctx.r11.s64 + 19872;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d8b768
	ctx.lr = 0x82E405CC;
	sub_82D8B768(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r28,r11,22184
	ctx.r28.s64 = ctx.r11.s64 + 22184;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,11874
	ctx.r6.s64 = 11874;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,232
	ctx.r4.s64 = 232;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82E405F4;
	sub_82D85F40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e40608
	if (ctx.cr0.eq) goto loc_82E40608;
	// bl 0x82e507f0
	ctx.lr = 0x82E40600;
	sub_82E507F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e4060c
	goto loc_82E4060C;
loc_82E40608:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E4060C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e4061c
	if (!ctx.cr6.eq) goto loc_82E4061C;
loc_82E40614:
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e406b0
	goto loc_82E406B0;
loc_82E4061C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,22368
	ctx.r3.s64 = ctx.r11.s64 + 22368;
	// bl 0x82da4828
	ctx.lr = 0x82E40628;
	sub_82DA4828(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// beq 0x82e40614
	if (ctx.cr0.eq) goto loc_82E40614;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// beq cr6,0x82e40648
	if (ctx.cr6.eq) goto loc_82E40648;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// b 0x82e40658
	goto loc_82E40658;
loc_82E40648:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d7c660
	ctx.lr = 0x82E40650;
	sub_82D7C660(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e406b0
	if (!ctx.cr0.eq) goto loc_82E406B0;
loc_82E40658:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,11899
	ctx.r6.s64 = 11899;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82E40678;
	sub_82D85F40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e40688
	if (ctx.cr0.eq) goto loc_82E40688;
	// bl 0x82e54040
	ctx.lr = 0x82E40684;
	sub_82E54040(ctx, base);
	// b 0x82e4068c
	goto loc_82E4068C;
loc_82E40688:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4068C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// beq cr6,0x82e40614
	if (ctx.cr6.eq) goto loc_82E40614;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82e53a98
	ctx.lr = 0x82E406A0;
	sub_82E53A98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e406b0
	if (!ctx.cr0.eq) goto loc_82E406B0;
	// stw r31,-4716(r26)
	PPC_STORE_U32(ctx.r26.u32 + -4716, ctx.r31.u32);
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
loc_82E406B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E406B8"))) PPC_WEAK_FUNC(sub_82E406B8);
PPC_FUNC_IMPL(__imp__sub_82E406B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e406c8
	if (!ctx.cr6.eq) goto loc_82E406C8;
loc_82E406C0:
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_82E406C8:
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// rlwinm r11,r3,13,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 13) & 0x1FFF;
	// rlwinm r8,r3,21,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0xFF;
	// clrlwi r7,r3,21
	ctx.r7.u64 = ctx.r3.u32 & 0x7FF;
	// lwz r10,-4716(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4716);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e406c0
	if (!ctx.cr6.lt) goto loc_82E406C0;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e406c0
	if (ctx.cr6.eq) goto loc_82E406C0;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e40730
	if (!ctx.cr0.eq) goto loc_82E40730;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82e406c0
	if (!ctx.cr6.lt) goto loc_82E406C0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e406c0
	if (ctx.cr0.eq) goto loc_82E406C0;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82E40730:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e406c0
	if (ctx.cr6.eq) goto loc_82E406C0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82e4074c
	if (!ctx.cr6.eq) goto loc_82E4074C;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82e406c0
	if (!ctx.cr6.eq) goto loc_82E406C0;
loc_82E4074C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40758"))) PPC_WEAK_FUNC(sub_82E40758);
PPC_FUNC_IMPL(__imp__sub_82E40758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// rlwinm r10,r3,15,17,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x7FFC;
	// rlwinm r8,r3,25,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0xF;
	// clrlwi r7,r3,25
	ctx.r7.u64 = ctx.r3.u32 & 0x7F;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwinm r11,r3,21,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0xFF;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82e4079c
	if (ctx.cr6.eq) goto loc_82E4079C;
	// blt cr6,0x82e40790
	if (ctx.cr6.lt) goto loc_82E40790;
loc_82E40788:
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_82E40790:
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82E4079C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e40788
	if (ctx.cr6.eq) goto loc_82E40788;
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82e40788
	if (!ctx.cr6.eq) goto loc_82E40788;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r10,344
	ctx.r10.s64 = ctx.r10.s64 + 344;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e407ec
	if (ctx.cr6.eq) goto loc_82E407EC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82e407e0
	if (!ctx.cr6.gt) goto loc_82E407E0;
loc_82E407D0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e407ec
	if (ctx.cr6.eq) goto loc_82E407EC;
	// bdnz 0x82e407d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E407D0;
loc_82E407E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82e407f0
	if (!ctx.cr6.eq) goto loc_82E407F0;
loc_82E407EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E407F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E407FC"))) PPC_WEAK_FUNC(sub_82E407FC);
PPC_FUNC_IMPL(__imp__sub_82E407FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E40800"))) PPC_WEAK_FUNC(sub_82E40800);
PPC_FUNC_IMPL(__imp__sub_82E40800) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E4081C;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4083c
	if (!ctx.cr0.eq) goto loc_82E4083C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4083C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E4083C:
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

__attribute__((alias("__imp__sub_82E40850"))) PPC_WEAK_FUNC(sub_82E40850);
PPC_FUNC_IMPL(__imp__sub_82E40850) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40864;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40880
	if (!ctx.cr0.eq) goto loc_82E40880;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40880:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40890"))) PPC_WEAK_FUNC(sub_82E40890);
PPC_FUNC_IMPL(__imp__sub_82E40890) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E408A8;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e408c8
	if (!ctx.cr0.eq) goto loc_82E408C8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E408C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E408C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E408D8"))) PPC_WEAK_FUNC(sub_82E408D8);
PPC_FUNC_IMPL(__imp__sub_82E408D8) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E408F0;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40910
	if (!ctx.cr0.eq) goto loc_82E40910;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40910:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40920"))) PPC_WEAK_FUNC(sub_82E40920);
PPC_FUNC_IMPL(__imp__sub_82E40920) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40938;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40958
	if (!ctx.cr0.eq) goto loc_82E40958;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40958:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40968"))) PPC_WEAK_FUNC(sub_82E40968);
PPC_FUNC_IMPL(__imp__sub_82E40968) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40980;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e409a0
	if (!ctx.cr0.eq) goto loc_82E409A0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E409A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E409A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E409B0"))) PPC_WEAK_FUNC(sub_82E409B0);
PPC_FUNC_IMPL(__imp__sub_82E409B0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E409CC;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e409ec
	if (!ctx.cr0.eq) goto loc_82E409EC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E409EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E409EC:
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

__attribute__((alias("__imp__sub_82E40A00"))) PPC_WEAK_FUNC(sub_82E40A00);
PPC_FUNC_IMPL(__imp__sub_82E40A00) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40A1C;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40a3c
	if (!ctx.cr0.eq) goto loc_82E40A3C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40A3C:
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

__attribute__((alias("__imp__sub_82E40A50"))) PPC_WEAK_FUNC(sub_82E40A50);
PPC_FUNC_IMPL(__imp__sub_82E40A50) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40A6C;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40a8c
	if (!ctx.cr0.eq) goto loc_82E40A8C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40A8C:
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

__attribute__((alias("__imp__sub_82E40AA0"))) PPC_WEAK_FUNC(sub_82E40AA0);
PPC_FUNC_IMPL(__imp__sub_82E40AA0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40ABC;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40adc
	if (!ctx.cr0.eq) goto loc_82E40ADC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40ADC:
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

__attribute__((alias("__imp__sub_82E40AF0"))) PPC_WEAK_FUNC(sub_82E40AF0);
PPC_FUNC_IMPL(__imp__sub_82E40AF0) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40B08;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40b28
	if (!ctx.cr0.eq) goto loc_82E40B28;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40B28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40B38"))) PPC_WEAK_FUNC(sub_82E40B38);
PPC_FUNC_IMPL(__imp__sub_82E40B38) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40B50;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40b70
	if (!ctx.cr0.eq) goto loc_82E40B70;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40B70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40B70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40B80"))) PPC_WEAK_FUNC(sub_82E40B80);
PPC_FUNC_IMPL(__imp__sub_82E40B80) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40B98;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40bb8
	if (!ctx.cr0.eq) goto loc_82E40BB8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40BB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40BC8"))) PPC_WEAK_FUNC(sub_82E40BC8);
PPC_FUNC_IMPL(__imp__sub_82E40BC8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40BDC;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40bf8
	if (!ctx.cr0.eq) goto loc_82E40BF8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40BF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40BF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40C08"))) PPC_WEAK_FUNC(sub_82E40C08);
PPC_FUNC_IMPL(__imp__sub_82E40C08) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40C20;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40c40
	if (!ctx.cr0.eq) goto loc_82E40C40;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40C40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40C50"))) PPC_WEAK_FUNC(sub_82E40C50);
PPC_FUNC_IMPL(__imp__sub_82E40C50) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40C64;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40c80
	if (!ctx.cr0.eq) goto loc_82E40C80;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40C80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40C90"))) PPC_WEAK_FUNC(sub_82E40C90);
PPC_FUNC_IMPL(__imp__sub_82E40C90) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40CA8;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40cc8
	if (!ctx.cr0.eq) goto loc_82E40CC8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40CC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40CD8"))) PPC_WEAK_FUNC(sub_82E40CD8);
PPC_FUNC_IMPL(__imp__sub_82E40CD8) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40CF0;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40d10
	if (!ctx.cr0.eq) goto loc_82E40D10;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40D10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40D20"))) PPC_WEAK_FUNC(sub_82E40D20);
PPC_FUNC_IMPL(__imp__sub_82E40D20) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40D38;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40d58
	if (!ctx.cr0.eq) goto loc_82E40D58;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40D58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40D68"))) PPC_WEAK_FUNC(sub_82E40D68);
PPC_FUNC_IMPL(__imp__sub_82E40D68) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40D80;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40da0
	if (!ctx.cr0.eq) goto loc_82E40DA0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40DA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40DB0"))) PPC_WEAK_FUNC(sub_82E40DB0);
PPC_FUNC_IMPL(__imp__sub_82E40DB0) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40DC8;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40de8
	if (!ctx.cr0.eq) goto loc_82E40DE8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40DE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40DF8"))) PPC_WEAK_FUNC(sub_82E40DF8);
PPC_FUNC_IMPL(__imp__sub_82E40DF8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40E14;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40e34
	if (!ctx.cr0.eq) goto loc_82E40E34;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40E34:
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

__attribute__((alias("__imp__sub_82E40E48"))) PPC_WEAK_FUNC(sub_82E40E48);
PPC_FUNC_IMPL(__imp__sub_82E40E48) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40E64;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40e84
	if (!ctx.cr0.eq) goto loc_82E40E84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40E84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40E84:
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

__attribute__((alias("__imp__sub_82E40E98"))) PPC_WEAK_FUNC(sub_82E40E98);
PPC_FUNC_IMPL(__imp__sub_82E40E98) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40EAC;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40ec8
	if (!ctx.cr0.eq) goto loc_82E40EC8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40EC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40EC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40ED8"))) PPC_WEAK_FUNC(sub_82E40ED8);
PPC_FUNC_IMPL(__imp__sub_82E40ED8) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40EF0;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40f10
	if (!ctx.cr0.eq) goto loc_82E40F10;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40F10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40F20"))) PPC_WEAK_FUNC(sub_82E40F20);
PPC_FUNC_IMPL(__imp__sub_82E40F20) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40F38;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40f58
	if (!ctx.cr0.eq) goto loc_82E40F58;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40F58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40F58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40F68"))) PPC_WEAK_FUNC(sub_82E40F68);
PPC_FUNC_IMPL(__imp__sub_82E40F68) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40F80;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40fa0
	if (!ctx.cr0.eq) goto loc_82E40FA0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40FA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40FA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40FB0"))) PPC_WEAK_FUNC(sub_82E40FB0);
PPC_FUNC_IMPL(__imp__sub_82E40FB0) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E40FC8;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e40fe8
	if (!ctx.cr0.eq) goto loc_82E40FE8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E40FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E40FE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E40FF8"))) PPC_WEAK_FUNC(sub_82E40FF8);
PPC_FUNC_IMPL(__imp__sub_82E40FF8) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E41010;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41030
	if (!ctx.cr0.eq) goto loc_82E41030;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E41030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E41030:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E41040"))) PPC_WEAK_FUNC(sub_82E41040);
PPC_FUNC_IMPL(__imp__sub_82E41040) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E41058;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41078
	if (!ctx.cr0.eq) goto loc_82E41078;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E41078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E41078:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E41088"))) PPC_WEAK_FUNC(sub_82E41088);
PPC_FUNC_IMPL(__imp__sub_82E41088) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E410A0;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e410c0
	if (!ctx.cr0.eq) goto loc_82E410C0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E410C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E410C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E410D0"))) PPC_WEAK_FUNC(sub_82E410D0);
PPC_FUNC_IMPL(__imp__sub_82E410D0) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e406b8
	ctx.lr = 0x82E410E8;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e41104
	if (ctx.cr0.eq) goto loc_82E41104;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82e4111c
	if (ctx.cr6.eq) goto loc_82E4111C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// b 0x82e4111c
	goto loc_82E4111C;
loc_82E41104:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4111C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E4111C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4112C"))) PPC_WEAK_FUNC(sub_82E4112C);
PPC_FUNC_IMPL(__imp__sub_82E4112C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E41130"))) PPC_WEAK_FUNC(sub_82E41130);
PPC_FUNC_IMPL(__imp__sub_82E41130) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E41144"))) PPC_WEAK_FUNC(sub_82E41144);
PPC_FUNC_IMPL(__imp__sub_82E41144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E41148"))) PPC_WEAK_FUNC(sub_82E41148);
PPC_FUNC_IMPL(__imp__sub_82E41148) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E41168"))) PPC_WEAK_FUNC(sub_82E41168);
PPC_FUNC_IMPL(__imp__sub_82E41168) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E41198"))) PPC_WEAK_FUNC(sub_82E41198);
PPC_FUNC_IMPL(__imp__sub_82E41198) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stb r11,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r11.u8);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E41200"))) PPC_WEAK_FUNC(sub_82E41200);
PPC_FUNC_IMPL(__imp__sub_82E41200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82E41208;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r23,-4740(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4740);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82da41c0
	ctx.lr = 0x82E41228;
	sub_82DA41C0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82da4420
	ctx.lr = 0x82E41230;
	sub_82DA4420(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r3,5
	ctx.r30.s64 = ctx.r3.s64 + 5;
	// beq cr6,0x82e4124c
	if (ctx.cr6.eq) goto loc_82E4124C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da4420
	ctx.lr = 0x82E41244;
	sub_82DA4420(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_82E4124C:
	// lis r26,-31909
	ctx.r26.s64 = -2091188224;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r27,r11,22184
	ctx.r27.s64 = ctx.r11.s64 + 22184;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,19872(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19872);
	// li r6,822
	ctx.r6.s64 = 822;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82E41278;
	sub_82D85F40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// bne 0x82e41298
	if (!ctx.cr0.eq) goto loc_82E41298;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82da4200
	ctx.lr = 0x82E4128C;
	sub_82DA4200(ctx, base);
	// li r3,42
	ctx.r3.s64 = 42;
loc_82E41290:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E41298:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stb r24,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r24.u8);
	// beq cr6,0x82e412b4
	if (ctx.cr6.eq) goto loc_82E412B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82da4448
	ctx.lr = 0x82E412B4;
	sub_82DA4448(ctx, base);
loc_82E412B4:
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4420
	ctx.lr = 0x82E412C0;
	sub_82DA4420(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82da4498
	ctx.lr = 0x82E412D4;
	sub_82DA4498(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r11,22372
	ctx.r29.s64 = ctx.r11.s64 + 22372;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82da4498
	ctx.lr = 0x82E412E8;
	sub_82DA4498(ctx, base);
	// lis r28,-31890
	ctx.r28.s64 = -2089943040;
	// lwz r11,-4716(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4716);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e41304
	if (ctx.cr0.eq) goto loc_82E41304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4568
	ctx.lr = 0x82E41304;
	sub_82DA4568(ctx, base);
loc_82E41304:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82e413c0
	if (ctx.cr6.eq) goto loc_82E413C0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82da4420
	ctx.lr = 0x82E41314;
	sub_82DA4420(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r30,r11,5
	ctx.r30.s64 = ctx.r11.s64 + 5;
	// bl 0x82da4420
	ctx.lr = 0x82E41324;
	sub_82DA4420(ctx, base);
	// lwz r11,19872(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19872);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,852
	ctx.r6.s64 = 852;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d85f40
	ctx.lr = 0x82E4134C;
	sub_82D85F40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// bne 0x82e4136c
	if (!ctx.cr0.eq) goto loc_82E4136C;
	// li r31,42
	ctx.r31.s64 = 42;
loc_82E4135C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82da4200
	ctx.lr = 0x82E41364;
	sub_82DA4200(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e41290
	goto loc_82E41290;
loc_82E4136C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stb r24,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r24.u8);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82da4448
	ctx.lr = 0x82E4137C;
	sub_82DA4448(ctx, base);
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4420
	ctx.lr = 0x82E41388;
	sub_82DA4420(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82da4498
	ctx.lr = 0x82E4139C;
	sub_82DA4498(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82da4498
	ctx.lr = 0x82E413A8;
	sub_82DA4498(ctx, base);
	// lwz r11,-4716(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4716);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e413c0
	if (ctx.cr0.eq) goto loc_82E413C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da4568
	ctx.lr = 0x82E413C0;
	sub_82DA4568(ctx, base);
loc_82E413C0:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x82e4135c
	goto loc_82E4135C;
}

__attribute__((alias("__imp__sub_82E413C8"))) PPC_WEAK_FUNC(sub_82E413C8);
PPC_FUNC_IMPL(__imp__sub_82E413C8) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82e3a240
	sub_82E3A240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E413D0"))) PPC_WEAK_FUNC(sub_82E413D0);
PPC_FUNC_IMPL(__imp__sub_82E413D0) {
	PPC_FUNC_PROLOGUE();
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x82e3a240
	sub_82E3A240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E413D8"))) PPC_WEAK_FUNC(sub_82E413D8);
PPC_FUNC_IMPL(__imp__sub_82E413D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82E413E0;
	__savegprlr_14(ctx, base);
	// addi r31,r1,-400
	ctx.r31.s64 = ctx.r1.s64 + -400;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// stw r29,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r29.u32);
	// beq cr6,0x82e4140c
	if (ctx.cr6.eq) goto loc_82E4140C;
	// lwz r29,68(r14)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r14.u32 + 68);
	// stw r29,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r29.u32);
loc_82E4140C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82e41420
	if (!ctx.cr6.eq) goto loc_82E41420;
	// li r3,33
	ctx.r3.s64 = 33;
loc_82E41418:
	// addi r1,r31,400
	ctx.r1.s64 = ctx.r31.s64 + 400;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82E41420:
	// lwz r11,12(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// rlwinm. r11,r11,0,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e41434
	if (!ctx.cr0.eq) goto loc_82E41434;
loc_82E4142C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e41418
	goto loc_82E41418;
loc_82E41434:
	// clrlwi. r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e41494
	if (ctx.cr0.eq) goto loc_82E41494;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e4a0a0
	ctx.lr = 0x82E41448;
	sub_82E4A0A0(ctx, base);
	// bl 0x82e43c98
	ctx.lr = 0x82E4144C;
	sub_82E43C98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41418
	if (!ctx.cr0.eq) goto loc_82E41418;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82e3a0c8
	ctx.lr = 0x82E41470;
	sub_82E3A0C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e41484
	if (ctx.cr0.eq) goto loc_82E41484;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82e41418
	if (!ctx.cr6.eq) goto loc_82E41418;
	// b 0x82e4142c
	goto loc_82E4142C;
loc_82E41484:
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r3,-4724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4724);
	// bl 0x82dec790
	ctx.lr = 0x82E41490;
	sub_82DEC790(ctx, base);
	// b 0x82e41418
	goto loc_82E41418;
loc_82E41494:
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r28,-4740(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4740);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// bl 0x82da41c0
	ctx.lr = 0x82E414A8;
	sub_82DA41C0(ctx, base);
	// li r5,108
	ctx.r5.s64 = 108;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82cb16f0
	ctx.lr = 0x82E414B8;
	sub_82CB16F0(ctx, base);
	// lwz r11,80(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 80);
	// li r15,108
	ctx.r15.s64 = 108;
	// li r16,8
	ctx.r16.s64 = 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r15,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r15.u32);
	// stw r16,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r16.u32);
	// beq cr6,0x82e41534
	if (ctx.cr6.eq) goto loc_82E41534;
	// lwz r9,384(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 384);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82e4150c
	if (!ctx.cr0.gt) goto loc_82E4150C;
	// lwz r10,388(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 388);
loc_82E414F0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x82e4150c
	if (ctx.cr6.eq) goto loc_82E4150C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e414f0
	if (ctx.cr6.lt) goto loc_82E414F0;
loc_82E4150C:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e41524
	if (ctx.cr6.lt) goto loc_82E41524;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da4200
	ctx.lr = 0x82E4151C;
	sub_82DA4200(ctx, base);
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e41418
	goto loc_82E41418;
loc_82E41524:
	// lwz r10,400(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 400);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82e41588
	goto loc_82E41588;
loc_82E41534:
	// lwz r9,80(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82e41560
	if (!ctx.cr0.gt) goto loc_82E41560;
	// lwz r10,84(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
loc_82E41544:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x82e41560
	if (ctx.cr6.eq) goto loc_82E41560;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e41544
	if (ctx.cr6.lt) goto loc_82E41544;
loc_82E41560:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e4157c
	if (ctx.cr6.lt) goto loc_82E4157C;
	// li r30,37
	ctx.r30.s64 = 37;
loc_82E4156C:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82da4200
	ctx.lr = 0x82E41574;
	sub_82DA4200(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82e41418
	goto loc_82E41418;
loc_82E4157C:
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82E41588:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e415b0
	if (ctx.cr6.eq) goto loc_82E415B0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82E4159C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82e4159c
	if (!ctx.cr6.eq) goto loc_82E4159C;
loc_82E415B0:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82E415C4;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r9,28(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82e4163c
	if (ctx.cr6.eq) goto loc_82E4163C;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82e41664
	if (!ctx.cr6.gt) goto loc_82E41664;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_82E415F0:
	// addi r5,r31,100
	ctx.r5.s64 = ctx.r31.s64 + 100;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,28(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// bl 0x82d84de0
	ctx.lr = 0x82E41604;
	sub_82D84DE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41ba0
	if (!ctx.cr0.eq) goto loc_82E41BA0;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e41628
	if (!ctx.cr6.eq) goto loc_82E41628;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_82E41628:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82e415f0
	if (ctx.cr6.lt) goto loc_82E415F0;
	// b 0x82e41664
	goto loc_82E41664;
loc_82E4163C:
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82e41664
	if (!ctx.cr6.gt) goto loc_82E41664;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// subf r9,r24,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r24.s64;
loc_82E41650:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82e41650
	if (!ctx.cr0.eq) goto loc_82E41650;
loc_82E41664:
	// stw r18,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r18.u32);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// stw r24,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r24.u32);
	// beq cr6,0x82e41b80
	if (ctx.cr6.eq) goto loc_82E41B80;
	// lis r19,-31890
	ctx.r19.s64 = -2089943040;
	// lwz r4,20(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// lwz r3,-4716(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + -4716);
	// bl 0x82e50188
	ctx.lr = 0x82E41694;
	sub_82E50188(ctx, base);
	// lis r11,6144
	ctx.r11.s64 = 402653184;
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// ori r17,r11,2
	ctx.r17.u64 = ctx.r11.u64 | 2;
	// bne cr6,0x82e416c0
	if (!ctx.cr6.eq) goto loc_82E416C0;
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e416e0
	if (ctx.cr0.eq) goto loc_82E416E0;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// lwz r3,-4716(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + -4716);
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// bl 0x82e50188
	ctx.lr = 0x82E416C0;
	sub_82E50188(ctx, base);
loc_82E416C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e416e0
	if (!ctx.cr6.eq) goto loc_82E416E0;
	// lwz r11,12(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// or r5,r11,r17
	ctx.r5.u64 = ctx.r11.u64 | ctx.r17.u64;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// b 0x82e4172c
	goto loc_82E4172C;
loc_82E416E0:
	// rlwinm. r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e416f0
	if (ctx.cr0.eq) goto loc_82E416F0;
	// li r30,24
	ctx.r30.s64 = 24;
	// b 0x82e4156c
	goto loc_82E4156C;
loc_82E416F0:
	// lwz r11,12(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,128
	ctx.r6.s64 = ctx.r31.s64 + 128;
	// lwz r4,20(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// ori r5,r11,2
	ctx.r5.u64 = ctx.r11.u64 | 2;
	// lwz r11,-4716(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -4716);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82d81020
	ctx.lr = 0x82E41710;
	sub_82D81020(ctx, base);
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// bne cr6,0x82e41740
	if (!ctx.cr6.eq) goto loc_82E41740;
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e41ba0
	if (ctx.cr0.eq) goto loc_82E41BA0;
	// lwz r10,12(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// ori r5,r10,2
	ctx.r5.u64 = ctx.r10.u64 | 2;
loc_82E4172C:
	// lwz r11,-4716(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -4716);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,128
	ctx.r6.s64 = ctx.r31.s64 + 128;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82d81020
	ctx.lr = 0x82E41740;
	sub_82D81020(ctx, base);
loc_82E41740:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e41ba0
	if (!ctx.cr6.eq) goto loc_82E41BA0;
	// lwz r11,28(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e41858
	if (ctx.cr6.eq) goto loc_82E41858;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x82e417dc
	if (!ctx.cr6.gt) goto loc_82E417DC;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82E41764:
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82d84de0
	ctx.lr = 0x82E41774;
	sub_82D84DE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41ba0
	if (!ctx.cr0.eq) goto loc_82E41BA0;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e41850
	if (ctx.cr6.eq) goto loc_82E41850;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d84d68
	ctx.lr = 0x82E41798;
	sub_82D84D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41ba0
	if (!ctx.cr0.eq) goto loc_82E41BA0;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r30.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r10,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r10.u32);
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,28(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// bl 0x82d84d68
	ctx.lr = 0x82E417C4;
	sub_82D84D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41ba0
	if (!ctx.cr0.eq) goto loc_82E41BA0;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r18
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x82e41764
	if (ctx.cr6.lt) goto loc_82E41764;
loc_82E417DC:
	// lwz r11,28(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r9,248(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// lwz r10,248(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r10.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82d84718
	ctx.lr = 0x82E417FC;
	sub_82D84718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41ba0
	if (!ctx.cr0.eq) goto loc_82E41BA0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x82e418c8
	if (!ctx.cr6.gt) goto loc_82E418C8;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82E41814:
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,28(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// bl 0x82d84de0
	ctx.lr = 0x82E41824;
	sub_82D84DE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41ba0
	if (!ctx.cr0.eq) goto loc_82E41BA0;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e41850
	if (ctx.cr6.eq) goto loc_82E41850;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r30,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r30.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r18
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x82e41814
	if (ctx.cr6.lt) goto loc_82E41814;
	// b 0x82e418c8
	goto loc_82E418C8;
loc_82E41850:
	// li r30,33
	ctx.r30.s64 = 33;
	// b 0x82e4156c
	goto loc_82E4156C;
loc_82E41858:
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82d85030
	ctx.lr = 0x82E41864;
	sub_82D85030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41ba0
	if (!ctx.cr0.eq) goto loc_82E41BA0;
	// lwz r3,72(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 72);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e418b4
	if (!ctx.cr0.eq) goto loc_82E418B4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,22184
	ctx.r5.s64 = ctx.r11.s64 + 22184;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,1442
	ctx.r6.s64 = 1442;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82E418A0;
	sub_82D862B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,72(r20)
	PPC_STORE_U32(ctx.r20.u32 + 72, ctx.r3.u32);
	// bne 0x82e418c0
	if (!ctx.cr0.eq) goto loc_82E418C0;
	// li r30,42
	ctx.r30.s64 = 42;
	// b 0x82e4156c
	goto loc_82E4156C;
loc_82E418B4:
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82E418C0;
	sub_82CB16F0(ctx, base);
loc_82E418C0:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,28(r20)
	PPC_STORE_U32(ctx.r20.u32 + 28, ctx.r11.u32);
loc_82E418C8:
	// lwz r3,28(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r22,280(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// bl 0x82d85030
	ctx.lr = 0x82E418DC;
	sub_82D85030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41ba0
	if (!ctx.cr0.eq) goto loc_82E41BA0;
	// rlwinm r11,r18,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 4) & 0xFFFFFFF0;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82E418F4;
	sub_82CB8074(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// ble cr6,0x82e41b80
	if (!ctx.cr6.gt) goto loc_82E41B80;
loc_82E41910:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r25,r10,r29
	ctx.r25.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// add r27,r10,r22
	ctx.r27.u64 = ctx.r10.u64 + ctx.r22.u64;
loc_82E41930:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82e419dc
	if (!ctx.cr6.lt) goto loc_82E419DC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e41958
	if (!ctx.cr0.eq) goto loc_82E41958;
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e419dc
	if (!ctx.cr6.eq) goto loc_82E419DC;
loc_82E41958:
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// lwz r3,28(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d84de0
	ctx.lr = 0x82E41968;
	sub_82D84DE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41ba0
	if (!ctx.cr0.eq) goto loc_82E41BA0;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e419c8
	if (!ctx.cr6.eq) goto loc_82E419C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82e419b4
	if (!ctx.cr6.gt) goto loc_82E419B4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82E41990:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82e419b0
	if (ctx.cr6.eq) goto loc_82E419B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82e41990
	if (ctx.cr6.lt) goto loc_82E41990;
	// b 0x82e419b4
	goto loc_82E419B4;
loc_82E419B0:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82E419B4:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e419c8
	if (ctx.cr0.eq) goto loc_82E419C8;
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_82E419C8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x82e41930
	if (ctx.cr6.lt) goto loc_82E41930;
loc_82E419DC:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r21,r18
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x82e41910
	if (ctx.cr6.lt) goto loc_82E41910;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82e41b80
	if (ctx.cr6.eq) goto loc_82E41B80;
	// li r5,108
	ctx.r5.s64 = 108;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82cb16f0
	ctx.lr = 0x82E41A04;
	sub_82CB16F0(ctx, base);
	// lwz r11,80(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 80);
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// lwz r3,-4716(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + -4716);
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// lwz r4,20(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// stw r15,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r15.u32);
	// stw r23,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r23.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
	// stw r16,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r16.u32);
	// bl 0x82e50188
	ctx.lr = 0x82E41A30;
	sub_82E50188(ctx, base);
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// bne cr6,0x82e41a54
	if (!ctx.cr6.eq) goto loc_82E41A54;
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e41a74
	if (ctx.cr0.eq) goto loc_82E41A74;
	// addi r6,r31,92
	ctx.r6.s64 = ctx.r31.s64 + 92;
	// lwz r3,-4716(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + -4716);
	// addi r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 + 84;
	// bl 0x82e50188
	ctx.lr = 0x82E41A54;
	sub_82E50188(ctx, base);
loc_82E41A54:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e41a74
	if (!ctx.cr6.eq) goto loc_82E41A74;
	// lwz r11,12(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// or r5,r11,r17
	ctx.r5.u64 = ctx.r11.u64 | ctx.r17.u64;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// b 0x82e41ab0
	goto loc_82E41AB0;
loc_82E41A74:
	// lwz r11,12(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,128
	ctx.r6.s64 = ctx.r31.s64 + 128;
	// lwz r4,20(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// ori r5,r11,2
	ctx.r5.u64 = ctx.r11.u64 | 2;
	// lwz r11,-4716(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -4716);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82d81020
	ctx.lr = 0x82E41A94;
	sub_82D81020(ctx, base);
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// bne cr6,0x82e41ac4
	if (!ctx.cr6.eq) goto loc_82E41AC4;
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e41ba0
	if (ctx.cr0.eq) goto loc_82E41BA0;
	// lwz r10,12(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// ori r5,r10,2
	ctx.r5.u64 = ctx.r10.u64 | 2;
loc_82E41AB0:
	// lwz r11,-4716(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -4716);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r31,128
	ctx.r6.s64 = ctx.r31.s64 + 128;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82d81020
	ctx.lr = 0x82E41AC4;
	sub_82D81020(ctx, base);
loc_82E41AC4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e41ba0
	if (!ctx.cr6.eq) goto loc_82E41BA0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82e41b58
	if (!ctx.cr6.gt) goto loc_82E41B58;
loc_82E41AD8:
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82d84de0
	ctx.lr = 0x82E41AE8;
	sub_82D84DE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41ba0
	if (!ctx.cr0.eq) goto loc_82E41BA0;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e41850
	if (ctx.cr6.eq) goto loc_82E41850;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d84d68
	ctx.lr = 0x82E41B0C;
	sub_82D84D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41ba0
	if (!ctx.cr0.eq) goto loc_82E41BA0;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r30.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82da0168
	ctx.lr = 0x82E41B28;
	sub_82DA0168(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41ba0
	if (!ctx.cr0.eq) goto loc_82E41BA0;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,28(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// bl 0x82d84d68
	ctx.lr = 0x82E41B40;
	sub_82D84D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41ba0
	if (!ctx.cr0.eq) goto loc_82E41BA0;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82e41ad8
	if (ctx.cr6.lt) goto loc_82E41AD8;
loc_82E41B58:
	// lwz r11,28(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r9,248(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// lwz r10,248(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r10.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82d84718
	ctx.lr = 0x82E41B78;
	sub_82D84718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41ba0
	if (!ctx.cr0.eq) goto loc_82E41BA0;
loc_82E41B80:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82e41ba8
	if (ctx.cr6.eq) goto loc_82E41BA8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82e3a240
	ctx.lr = 0x82E41B98;
	sub_82E3A240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4156c
	if (ctx.cr0.eq) goto loc_82E4156C;
loc_82E41BA0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e4156c
	goto loc_82E4156C;
loc_82E41BA8:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// addi r28,r11,48
	ctx.r28.s64 = ctx.r11.s64 + 48;
	// lwz r29,48(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82e41bf8
	goto loc_82E41BF8;
loc_82E41BB8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// bne cr6,0x82e41bc8
	if (!ctx.cr6.eq) goto loc_82E41BC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82E41BC8:
	// lwz r11,312(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 312);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e41bf4
	if (ctx.cr0.eq) goto loc_82E41BF4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82e3a240
	ctx.lr = 0x82E41BE0;
	sub_82E3A240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41ba0
	if (!ctx.cr0.eq) goto loc_82E41BA0;
	// lwz r11,312(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 312);
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,312(r4)
	PPC_STORE_U32(ctx.r4.u32 + 312, ctx.r11.u32);
loc_82E41BF4:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82E41BF8:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82e41bb8
	if (!ctx.cr6.eq) goto loc_82E41BB8;
	// b 0x82e4156c
	goto loc_82E4156C;
}

__attribute__((alias("__imp__sub_82E41C04"))) PPC_WEAK_FUNC(sub_82E41C04);
PPC_FUNC_IMPL(__imp__sub_82E41C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E41C08"))) PPC_WEAK_FUNC(sub_82E41C08);
PPC_FUNC_IMPL(__imp__sub_82E41C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E41C10;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e41e1c
	if (ctx.cr6.eq) goto loc_82E41E1C;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r26,-4740(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4740);
	// bl 0x82e39ea8
	ctx.lr = 0x82E41C34;
	sub_82E39EA8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da41c0
	ctx.lr = 0x82E41C3C;
	sub_82DA41C0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e41d84
	if (ctx.cr6.eq) goto loc_82E41D84;
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e41c68
	if (!ctx.cr6.eq) goto loc_82E41C68;
loc_82E41C54:
	// li r31,33
	ctx.r31.s64 = 33;
loc_82E41C58:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da4200
	ctx.lr = 0x82E41C60;
	sub_82DA4200(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e41e20
	goto loc_82E41E20;
loc_82E41C68:
	// lwz r9,384(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82e41c98
	if (!ctx.cr0.gt) goto loc_82E41C98;
	// lwz r10,388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
loc_82E41C7C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82e41c98
	if (ctx.cr6.eq) goto loc_82E41C98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e41c7c
	if (ctx.cr6.lt) goto loc_82E41C7C;
loc_82E41C98:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e41ca8
	if (ctx.cr6.lt) goto loc_82E41CA8;
	// li r31,37
	ctx.r31.s64 = 37;
	// b 0x82e41c58
	goto loc_82E41C58;
loc_82E41CA8:
	// lwz r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e41d84
	if (ctx.cr6.eq) goto loc_82E41D84;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82E41CC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e41d6c
	if (!ctx.cr6.eq) goto loc_82E41D6C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x82d9ee20
	ctx.lr = 0x82E41CEC;
	sub_82D9EE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41c54
	if (!ctx.cr0.eq) goto loc_82E41C54;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E41D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41e28
	if (!ctx.cr0.eq) goto loc_82E41E28;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e41d6c
	if (ctx.cr6.eq) goto loc_82E41D6C;
	// stw r27,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E41D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41e28
	if (!ctx.cr0.eq) goto loc_82E41E28;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E41D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41e28
	if (!ctx.cr0.eq) goto loc_82E41E28;
loc_82E41D6C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e41cc8
	if (!ctx.cr6.eq) goto loc_82E41CC8;
loc_82E41D84:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x82d85030
	ctx.lr = 0x82E41D90;
	sub_82D85030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41e28
	if (!ctx.cr0.eq) goto loc_82E41E28;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e41dc8
	if (!ctx.cr6.gt) goto loc_82E41DC8;
	// lwz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
loc_82E41DAC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82e41dc8
	if (!ctx.cr6.eq) goto loc_82E41DC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e41dac
	if (ctx.cr6.lt) goto loc_82E41DAC;
loc_82E41DC8:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82e41e14
	if (!ctx.cr6.eq) goto loc_82E41E14;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stw r27,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r27.u32);
	// bl 0x82d84718
	ctx.lr = 0x82E41DDC;
	sub_82D84718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41e28
	if (!ctx.cr0.eq) goto loc_82E41E28;
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e41e10
	if (ctx.cr0.eq) goto loc_82E41E10;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,22184
	ctx.r5.s64 = ctx.r11.s64 + 22184;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,1909
	ctx.r6.s64 = 1909;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E41E10;
	sub_82D861B0(ctx, base);
loc_82E41E10:
	// stw r27,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r27.u32);
loc_82E41E14:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da4200
	ctx.lr = 0x82E41E1C;
	sub_82DA4200(ctx, base);
loc_82E41E1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E41E20:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E41E28:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e41c58
	goto loc_82E41C58;
}

__attribute__((alias("__imp__sub_82E41E30"))) PPC_WEAK_FUNC(sub_82E41E30);
PPC_FUNC_IMPL(__imp__sub_82E41E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E41E38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// lwz r26,-4740(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4740);
	// bne cr6,0x82e41eb8
	if (!ctx.cr6.eq) goto loc_82E41EB8;
	// bl 0x82e39ea8
	ctx.lr = 0x82E41E5C;
	sub_82E39EA8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da41c0
	ctx.lr = 0x82E41E64;
	sub_82DA41C0(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e41e94
	if (ctx.cr6.eq) goto loc_82E41E94;
loc_82E41E74:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82e39d30
	ctx.lr = 0x82E41E80;
	sub_82E39D30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41ea4
	if (!ctx.cr0.eq) goto loc_82E41EA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e41e74
	if (!ctx.cr6.eq) goto loc_82E41E74;
loc_82E41E94:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x82e41ea8
	goto loc_82E41EA8;
loc_82E41EA4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82E41EA8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da4200
	ctx.lr = 0x82E41EB0;
	sub_82DA4200(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e41f78
	goto loc_82E41F78;
loc_82E41EB8:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e41f74
	if (ctx.cr6.eq) goto loc_82E41F74;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82e41f74
	if (ctx.cr6.eq) goto loc_82E41F74;
	// bl 0x82e39ea8
	ctx.lr = 0x82E41ED0;
	sub_82E39EA8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da41c0
	ctx.lr = 0x82E41ED8;
	sub_82DA41C0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82E41EDC:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e41f50
	if (ctx.cr0.eq) goto loc_82E41F50;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82e41f50
	if (ctx.cr6.gt) goto loc_82E41F50;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e41f14
	goto loc_82E41F14;
loc_82E41F04:
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e41f20
	if (ctx.cr0.eq) goto loc_82E41F20;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82E41F14:
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e41f04
	if (!ctx.cr6.eq) goto loc_82E41F04;
	// b 0x82e41f34
	goto loc_82E41F34;
loc_82E41F20:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82e39d30
	ctx.lr = 0x82E41F28;
	sub_82E39D30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e41ea4
	if (!ctx.cr0.eq) goto loc_82E41EA4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82E41F34:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e41f50
	if (!ctx.cr0.eq) goto loc_82E41F50;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82e41f48
	goto loc_82E41F48;
loc_82E41F44:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E41F48:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e41f44
	if (!ctx.cr6.eq) goto loc_82E41F44;
loc_82E41F50:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bge 0x82e41f64
	if (!ctx.cr0.lt) goto loc_82E41F64;
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
loc_82E41F64:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82e41edc
	if (!ctx.cr0.eq) goto loc_82E41EDC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da4200
	ctx.lr = 0x82E41F74;
	sub_82DA4200(ctx, base);
loc_82E41F74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E41F78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E41F80"))) PPC_WEAK_FUNC(sub_82E41F80);
PPC_FUNC_IMPL(__imp__sub_82E41F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82E41F88;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31890
	ctx.r28.s64 = -2089943040;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,-4728(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4728);
	// lwz r3,-4736(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4736);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-4728(r28)
	PPC_STORE_U32(ctx.r28.u32 + -4728, ctx.r11.u32);
	// bl 0x82da41c0
	ctx.lr = 0x82E41FAC;
	sub_82DA41C0(ctx, base);
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r27,r11,11576
	ctx.r27.s64 = ctx.r11.s64 + 11576;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82e42124
	if (ctx.cr6.eq) goto loc_82E42124;
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// lis r25,-31890
	ctx.r25.s64 = -2089943040;
	// addi r26,r11,11608
	ctx.r26.s64 = ctx.r11.s64 + 11608;
loc_82E41FCC:
	// lwz r11,-4732(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4732);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82e42118
	if (!ctx.cr6.lt) goto loc_82E42118;
	// lwz r3,-4736(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4736);
	// bl 0x82da4200
	ctx.lr = 0x82E41FE0;
	sub_82DA4200(ctx, base);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e42004
	if (ctx.cr0.eq) goto loc_82E42004;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82e413d8
	ctx.lr = 0x82E42000;
	sub_82E413D8(ctx, base);
	// b 0x82e4201c
	goto loc_82E4201C;
loc_82E42004:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// oris r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 | 65536;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82e46270
	ctx.lr = 0x82E4201C;
	sub_82E46270(ctx, base);
loc_82E4201C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82e42088
	if (ctx.cr6.eq) goto loc_82E42088;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e42044
	if (ctx.cr0.eq) goto loc_82E42044;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// rlwinm r10,r10,0,10,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r10,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r10.u32);
	// b 0x82e42088
	goto loc_82E42088;
loc_82E42044:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e42088
	if (ctx.cr0.eq) goto loc_82E42088;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// b 0x82e4207c
	goto loc_82E4207C;
loc_82E42058:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x82e42068
	if (!ctx.cr6.eq) goto loc_82E42068;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E42068:
	// lwz r9,312(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// rlwinm r9,r9,0,10,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r9,312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 312, ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_82E4207C:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e42058
	if (!ctx.cr6.eq) goto loc_82E42058;
loc_82E42088:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e420a4
	if (ctx.cr0.eq) goto loc_82E420A4;
	// stw r30,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r30.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
loc_82E420A4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e420b8
	if (ctx.cr6.eq) goto loc_82E420B8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// bl 0x82e4a0a0
	ctx.lr = 0x82E420B8;
	sub_82E4A0A0(ctx, base);
loc_82E420B8:
	// lwz r3,-4736(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4736);
	// bl 0x82da41c0
	ctx.lr = 0x82E420C0;
	sub_82DA41C0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bne cr6,0x82e42124
	if (!ctx.cr6.eq) goto loc_82E42124;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82e41fcc
	if (!ctx.cr6.eq) goto loc_82E41FCC;
	// b 0x82e42124
	goto loc_82E42124;
loc_82E42118:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,-4732(r25)
	PPC_STORE_U32(ctx.r25.u32 + -4732, ctx.r11.u32);
loc_82E42124:
	// lwz r3,-4736(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4736);
	// bl 0x82da4200
	ctx.lr = 0x82E4212C;
	sub_82DA4200(ctx, base);
	// lwz r11,-4728(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4728);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-4728(r28)
	PPC_STORE_U32(ctx.r28.u32 + -4728, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E42144"))) PPC_WEAK_FUNC(sub_82E42144);
PPC_FUNC_IMPL(__imp__sub_82E42144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E42148"))) PPC_WEAK_FUNC(sub_82E42148);
PPC_FUNC_IMPL(__imp__sub_82E42148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E42174"))) PPC_WEAK_FUNC(sub_82E42174);
PPC_FUNC_IMPL(__imp__sub_82E42174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E42178"))) PPC_WEAK_FUNC(sub_82E42178);
PPC_FUNC_IMPL(__imp__sub_82E42178) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// sth r11,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E421A0"))) PPC_WEAK_FUNC(sub_82E421A0);
PPC_FUNC_IMPL(__imp__sub_82E421A0) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e421e8
	if (ctx.cr0.eq) goto loc_82E421E8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e421e8
	if (!ctx.cr6.eq) goto loc_82E421E8;
	// bl 0x82e3a3f8
	ctx.lr = 0x82E421E0;
	sub_82E3A3F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e42248
	if (!ctx.cr0.eq) goto loc_82E42248;
loc_82E421E8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e42204
	if (!ctx.cr6.eq) goto loc_82E42204;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e42204
	if (ctx.cr0.eq) goto loc_82E42204;
	// bl 0x82d81cd8
	ctx.lr = 0x82E42204;
	sub_82D81CD8(ctx, base);
loc_82E42204:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r11,424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e42244
	if (!ctx.cr6.eq) goto loc_82E42244;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,22184
	ctx.r5.s64 = ctx.r11.s64 + 22184;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,2455
	ctx.r6.s64 = 2455;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E42244;
	sub_82D861B0(ctx, base);
loc_82E42244:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E42248:
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

__attribute__((alias("__imp__sub_82E4225C"))) PPC_WEAK_FUNC(sub_82E4225C);
PPC_FUNC_IMPL(__imp__sub_82E4225C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E42260"))) PPC_WEAK_FUNC(sub_82E42260);
PPC_FUNC_IMPL(__imp__sub_82E42260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,4
	ctx.r8.s64 = 4;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E422B0"))) PPC_WEAK_FUNC(sub_82E422B0);
PPC_FUNC_IMPL(__imp__sub_82E422B0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x82e3a780
	ctx.lr = 0x82E422EC;
	sub_82E3A780(ctx, base);
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

__attribute__((alias("__imp__sub_82E42304"))) PPC_WEAK_FUNC(sub_82E42304);
PPC_FUNC_IMPL(__imp__sub_82E42304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E42308"))) PPC_WEAK_FUNC(sub_82E42308);
PPC_FUNC_IMPL(__imp__sub_82E42308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E42310;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,76(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x82e42328
	if (!ctx.cr0.eq) goto loc_82E42328;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E42328:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e3a830
	ctx.lr = 0x82E42338;
	sub_82E3A830(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e42400
	if (!ctx.cr0.eq) goto loc_82E42400;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e423dc
	if (ctx.cr6.eq) goto loc_82E423DC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82e42388
	if (!ctx.cr6.eq) goto loc_82E42388;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,372(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 372);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e423dc
	if (ctx.cr6.eq) goto loc_82E423DC;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// b 0x82e423bc
	goto loc_82E423BC;
loc_82E42388:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82e423dc
	if (!ctx.cr6.eq) goto loc_82E423DC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e423dc
	if (!ctx.cr6.eq) goto loc_82E423DC;
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x82e423dc
	if (ctx.cr0.eq) goto loc_82E423DC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,372(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e423dc
	if (ctx.cr6.eq) goto loc_82E423DC;
loc_82E423BC:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,376(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E423DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E423DC:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// beq 0x82e423fc
	if (ctx.cr0.eq) goto loc_82E423FC;
	// bl 0x82d81cd8
	ctx.lr = 0x82E423F8;
	sub_82D81CD8(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_82E423FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E42400:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E42408"))) PPC_WEAK_FUNC(sub_82E42408);
PPC_FUNC_IMPL(__imp__sub_82E42408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E42410;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r28,r30,120
	ctx.r28.s64 = ctx.r30.s64 + 120;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82e42504
	if (!ctx.cr6.eq) goto loc_82E42504;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e42504
	if (!ctx.cr6.gt) goto loc_82E42504;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r27,r11,22184
	ctx.r27.s64 = ctx.r11.s64 + 22184;
loc_82E42450:
	// li r6,3435
	ctx.r6.s64 = 3435;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,140
	ctx.r4.s64 = 140;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e54278
	ctx.lr = 0x82E42464;
	sub_82E54278(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e42478
	if (ctx.cr0.eq) goto loc_82E42478;
	// bl 0x82e422b0
	ctx.lr = 0x82E42470;
	sub_82E422B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82e4247c
	goto loc_82E4247C;
loc_82E42478:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E4247C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e42510
	if (ctx.cr6.eq) goto loc_82E42510;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82e3a780
	ctx.lr = 0x82E42490;
	sub_82E3A780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e42508
	if (!ctx.cr0.eq) goto loc_82E42508;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e424cc
	if (ctx.cr0.eq) goto loc_82E424CC;
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82E424CC:
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e42450
	if (ctx.cr6.lt) goto loc_82E42450;
loc_82E42504:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E42508:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E42510:
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e42508
	goto loc_82E42508;
}

__attribute__((alias("__imp__sub_82E42518"))) PPC_WEAK_FUNC(sub_82E42518);
PPC_FUNC_IMPL(__imp__sub_82E42518) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e42540
	if (ctx.cr0.eq) goto loc_82E42540;
	// b 0x82e42530
	goto loc_82E42530;
loc_82E4252C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82E42530:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82e4252c
	if (!ctx.cr0.eq) goto loc_82E4252C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82E42540:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82e42558
	if (!ctx.cr6.eq) goto loc_82E42558;
loc_82E42550:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82E42558:
	// lwz r11,120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// addi r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 + 120;
	// b 0x82e42578
	goto loc_82E42578;
loc_82E42564:
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// beq cr6,0x82e42550
	if (ctx.cr6.eq) goto loc_82E42550;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E42578:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e42564
	if (!ctx.cr6.eq) goto loc_82E42564;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E42588"))) PPC_WEAK_FUNC(sub_82E42588);
PPC_FUNC_IMPL(__imp__sub_82E42588) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e425a0
	if (!ctx.cr0.eq) goto loc_82E425A0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82e425ac
	goto loc_82E425AC;
loc_82E4259C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82E425A0:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82e4259c
	if (!ctx.cr0.eq) goto loc_82E4259C;
loc_82E425AC:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e425c4
	if (!ctx.cr6.eq) goto loc_82E425C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
loc_82E425C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E425CC"))) PPC_WEAK_FUNC(sub_82E425CC);
PPC_FUNC_IMPL(__imp__sub_82E425CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E425D0"))) PPC_WEAK_FUNC(sub_82E425D0);
PPC_FUNC_IMPL(__imp__sub_82E425D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e425e8
	if (!ctx.cr0.eq) goto loc_82E425E8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82e425f4
	goto loc_82E425F4;
loc_82E425E4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82E425E8:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82e425e4
	if (!ctx.cr0.eq) goto loc_82E425E4;
loc_82E425F4:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4260C"))) PPC_WEAK_FUNC(sub_82E4260C);
PPC_FUNC_IMPL(__imp__sub_82E4260C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E42610"))) PPC_WEAK_FUNC(sub_82E42610);
PPC_FUNC_IMPL(__imp__sub_82E42610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,34
	ctx.r8.s64 = 34;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f12,-18324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4266C"))) PPC_WEAK_FUNC(sub_82E4266C);
PPC_FUNC_IMPL(__imp__sub_82E4266C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E42670"))) PPC_WEAK_FUNC(sub_82E42670);
PPC_FUNC_IMPL(__imp__sub_82E42670) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r9,r10,22380
	ctx.r9.s64 = ctx.r10.s64 + 22380;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// stw r10,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4269C"))) PPC_WEAK_FUNC(sub_82E4269C);
PPC_FUNC_IMPL(__imp__sub_82E4269C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E426A0"))) PPC_WEAK_FUNC(sub_82E426A0);
PPC_FUNC_IMPL(__imp__sub_82E426A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,22136
	ctx.r11.s64 = ctx.r11.s64 + 22136;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E426B0"))) PPC_WEAK_FUNC(sub_82E426B0);
PPC_FUNC_IMPL(__imp__sub_82E426B0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,22136
	ctx.r11.s64 = ctx.r11.s64 + 22136;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82e426dc
	if (ctx.cr0.eq) goto loc_82E426DC;
	// bl 0x822990f0
	ctx.lr = 0x82E426DC;
	sub_822990F0(ctx, base);
loc_82E426DC:
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

__attribute__((alias("__imp__sub_82E426F4"))) PPC_WEAK_FUNC(sub_82E426F4);
PPC_FUNC_IMPL(__imp__sub_82E426F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E426F8"))) PPC_WEAK_FUNC(sub_82E426F8);
PPC_FUNC_IMPL(__imp__sub_82E426F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// addi r10,r3,84
	ctx.r10.s64 = ctx.r3.s64 + 84;
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// addi r9,r3,96
	ctx.r9.s64 = ctx.r3.s64 + 96;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E42780"))) PPC_WEAK_FUNC(sub_82E42780);
PPC_FUNC_IMPL(__imp__sub_82E42780) {
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
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e427a4
	if (!ctx.cr0.eq) goto loc_82E427A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e427c8
	goto loc_82E427C8;
loc_82E427A4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82e427c4
	if (!ctx.cr6.eq) goto loc_82E427C4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82e42518
	ctx.lr = 0x82E427B4;
	sub_82E42518(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82e427c8
	goto loc_82E427C8;
loc_82E427C4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E427C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E427D8"))) PPC_WEAK_FUNC(sub_82E427D8);
PPC_FUNC_IMPL(__imp__sub_82E427D8) {
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
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r5,22424
	ctx.r4.s64 = ctx.r5.s64 + 22424;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// addi r8,r31,332
	ctx.r8.s64 = ctx.r31.s64 + 332;
	// addi r7,r31,344
	ctx.r7.s64 = ctx.r31.s64 + 344;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// addi r6,r31,356
	ctx.r6.s64 = ctx.r31.s64 + 356;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// stw r7,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r7.u32);
	// stw r7,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r7.u32);
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// stw r6,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r6.u32);
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// stw r5,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// bl 0x82e3bb40
	ctx.lr = 0x82E42860;
	sub_82E3BB40(ctx, base);
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

__attribute__((alias("__imp__sub_82E42878"))) PPC_WEAK_FUNC(sub_82E42878);
PPC_FUNC_IMPL(__imp__sub_82E42878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82E42880;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e4289c
	if (!ctx.cr6.eq) goto loc_82E4289C;
	// li r3,82
	ctx.r3.s64 = 82;
	// b 0x82e42b28
	goto loc_82E42B28;
loc_82E4289C:
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e4297c
	if (!ctx.cr0.eq) goto loc_82E4297C;
	// lhz r8,322(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 322);
	// extsh. r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e428bc
	if (!ctx.cr0.eq) goto loc_82E428BC;
	// lhz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4297c
	if (ctx.cr6.eq) goto loc_82E4297C;
loc_82E428BC:
	// lwz r7,312(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm. r11,r7,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4297c
	if (ctx.cr0.eq) goto loc_82E4297C;
	// rlwinm. r11,r7,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e42970
	if (!ctx.cr0.eq) goto loc_82E42970;
	// rlwinm. r11,r7,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e42960
	if (ctx.cr0.eq) goto loc_82E42960;
	// lha r10,320(r31)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 320));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e42950
	if (ctx.cr0.eq) goto loc_82E42950;
	// lha r11,324(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 324));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e42950
	if (ctx.cr0.eq) goto loc_82E42950;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// sth r11,324(r31)
	PPC_STORE_U16(ctx.r31.u32 + 324, ctx.r11.u16);
	// b 0x82e42954
	goto loc_82E42954;
loc_82E42950:
	// sth r8,324(r31)
	PPC_STORE_U16(ctx.r31.u32 + 324, ctx.r8.u16);
loc_82E42954:
	// rlwinm r11,r7,0,11,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// b 0x82e42964
	goto loc_82E42964;
loc_82E42960:
	// sth r8,324(r31)
	PPC_STORE_U16(ctx.r31.u32 + 324, ctx.r8.u16);
loc_82E42964:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
loc_82E42970:
	// lhz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e42b24
	if (!ctx.cr6.eq) goto loc_82E42B24;
loc_82E4297C:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// li r24,0
	ctx.r24.s64 = 0;
	// rlwinm r11,r11,0,12,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// sth r24,324(r31)
	PPC_STORE_U16(ctx.r31.u32 + 324, ctx.r24.u16);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e42a18
	if (ctx.cr0.eq) goto loc_82E42A18;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e429fc
	if (ctx.cr0.eq) goto loc_82E429FC;
	// lhz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lhz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e429cc
	if (!ctx.cr6.eq) goto loc_82E429CC;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r10,r10,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82E429CC:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e429fc
	if (ctx.cr0.eq) goto loc_82E429FC;
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e429fc
	if (ctx.cr0.eq) goto loc_82E429FC;
	// lwz r7,376(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E429FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E429FC:
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e42a18
	if (ctx.cr0.eq) goto loc_82E42A18;
	// lhz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_82E42A18:
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r10,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
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
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// bl 0x82e3cf48
	ctx.lr = 0x82E42A58;
	sub_82E3CF48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e42b28
	if (!ctx.cr0.eq) goto loc_82E42B28;
	// lwz r27,332(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r25,r31,332
	ctx.r25.s64 = ctx.r31.s64 + 332;
	// b 0x82e42ae8
	goto loc_82E42AE8;
loc_82E42A6C:
	// lwz r30,84(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// addi r26,r27,84
	ctx.r26.s64 = ctx.r27.s64 + 84;
	// b 0x82e42adc
	goto loc_82E42ADC;
loc_82E42A78:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e42ac8
	if (!ctx.cr0.eq) goto loc_82E42AC8;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e42ac8
	if (!ctx.cr0.eq) goto loc_82E42AC8;
	// lwz r29,120(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// addi r28,r30,120
	ctx.r28.s64 = ctx.r30.s64 + 120;
	// b 0x82e42ab8
	goto loc_82E42AB8;
loc_82E42A98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e42308
	ctx.lr = 0x82E42AA0;
	sub_82E42308(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e42b28
	if (!ctx.cr0.eq) goto loc_82E42B28;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82E42AB8:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82e42a98
	if (!ctx.cr6.eq) goto loc_82E42A98;
	// stw r24,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r24.u32);
	// b 0x82e42ad8
	goto loc_82E42AD8;
loc_82E42AC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e42308
	ctx.lr = 0x82E42AD0;
	sub_82E42308(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e42b28
	if (!ctx.cr0.eq) goto loc_82E42B28;
loc_82E42AD8:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82E42ADC:
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82e42a78
	if (!ctx.cr6.eq) goto loc_82E42A78;
	// lwz r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82E42AE8:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82e42a6c
	if (!ctx.cr6.eq) goto loc_82E42A6C;
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r9,r31,344
	ctx.r9.s64 = ctx.r31.s64 + 344;
	// b 0x82e42b1c
	goto loc_82E42B1C;
loc_82E42AFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82e42b0c
	if (!ctx.cr6.eq) goto loc_82E42B0C;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82E42B0C:
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r8,r8,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r8,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r8.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E42B1C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e42afc
	if (!ctx.cr6.eq) goto loc_82E42AFC;
loc_82E42B24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E42B28:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E42B30"))) PPC_WEAK_FUNC(sub_82E42B30);
PPC_FUNC_IMPL(__imp__sub_82E42B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E42B38;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r28,r30,380
	ctx.r28.s64 = ctx.r30.s64 + 380;
	// lwz r11,380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e42cac
	if (!ctx.cr6.eq) goto loc_82E42CAC;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82d811c8
	ctx.lr = 0x82E42B7C;
	sub_82D811C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e42cb0
	if (!ctx.cr0.eq) goto loc_82E42CB0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d82c28
	ctx.lr = 0x82E42B90;
	sub_82D82C28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e42bac
	if (!ctx.cr0.eq) goto loc_82E42BAC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e42bac
	if (ctx.cr6.eq) goto loc_82E42BAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d81dd0
	ctx.lr = 0x82E42BAC;
	sub_82D81DD0(ctx, base);
loc_82E42BAC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f31,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82e42c00
	if (ctx.cr6.eq) goto loc_82E42C00;
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
	// bl 0x82cb2308
	ctx.lr = 0x82E42BD4;
	sub_82CB2308(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fsubs f13,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,-18116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f0,f0,f30,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fmuls f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
loc_82E42C00:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82d825d0
	ctx.lr = 0x82E42C0C;
	sub_82D825D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e42cb0
	if (!ctx.cr0.eq) goto loc_82E42CB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f30,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x82e3f1c0
	ctx.lr = 0x82E42C20;
	sub_82E3F1C0(ctx, base);
	// fadds f13,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,6484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6484);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vexptefp v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	ctx.v0.f32[0] = exp2f(ctx.v0.f32[0]);
	ctx.v0.f32[1] = exp2f(ctx.v0.f32[1]);
	ctx.v0.f32[2] = exp2f(ctx.v0.f32[2]);
	ctx.v0.f32[3] = exp2f(ctx.v0.f32[3]);
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d82660
	ctx.lr = 0x82E42C60;
	sub_82D82660(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e42cb0
	if (!ctx.cr0.eq) goto loc_82E42CB0;
	// lwz r31,332(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// addi r29,r30,332
	ctx.r29.s64 = ctx.r30.s64 + 332;
	// b 0x82e42ca4
	goto loc_82E42CA4;
loc_82E42C74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82e3b3c0
	ctx.lr = 0x82E42C80;
	sub_82E3B3C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e42cb0
	if (!ctx.cr0.eq) goto loc_82E42CB0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e42ca0
	if (ctx.cr6.eq) goto loc_82E42CA0;
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 312, ctx.r11.u32);
loc_82E42CA0:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E42CA4:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e42c74
	if (!ctx.cr6.eq) goto loc_82E42C74;
loc_82E42CAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E42CB0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82E42CC4"))) PPC_WEAK_FUNC(sub_82E42CC4);
PPC_FUNC_IMPL(__imp__sub_82E42CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E42CC8"))) PPC_WEAK_FUNC(sub_82E42CC8);
PPC_FUNC_IMPL(__imp__sub_82E42CC8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e42cf8
	if (!ctx.cr0.eq) goto loc_82E42CF8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82E42CF8:
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e42d24
	if (!ctx.cr0.eq) goto loc_82E42D24;
	// lwz r11,368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// lwz r4,380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e42e00
	if (ctx.cr0.eq) goto loc_82E42E00;
loc_82E42D14:
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x82d82af8
	ctx.lr = 0x82E42D1C;
	sub_82D82AF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e42de0
	if (!ctx.cr0.eq) goto loc_82E42DE0;
loc_82E42D24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// lfs f31,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82e42d80
	if (ctx.cr6.eq) goto loc_82E42D80;
	// fmr f30,f12
	ctx.f30.f64 = ctx.f12.f64;
	// bl 0x82cb2308
	ctx.lr = 0x82E42D54;
	sub_82CB2308(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fsubs f13,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,-18116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f0,f0,f30,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fmuls f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
loc_82E42D80:
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82d825d0
	ctx.lr = 0x82E42D8C;
	sub_82D825D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e42de0
	if (!ctx.cr0.eq) goto loc_82E42DE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f30,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x82e3f1c0
	ctx.lr = 0x82E42DA0;
	sub_82E3F1C0(ctx, base);
	// fadds f13,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,6484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6484);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vexptefp v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	ctx.v0.f32[0] = exp2f(ctx.v0.f32[0]);
	ctx.v0.f32[1] = exp2f(ctx.v0.f32[1]);
	ctx.v0.f32[2] = exp2f(ctx.v0.f32[2]);
	ctx.v0.f32[3] = exp2f(ctx.v0.f32[3]);
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d82660
	ctx.lr = 0x82E42DE0;
	sub_82D82660(ctx, base);
loc_82E42DE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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
loc_82E42E00:
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// b 0x82e42d14
	goto loc_82E42D14;
}

__attribute__((alias("__imp__sub_82E42E10"))) PPC_WEAK_FUNC(sub_82E42E10);
PPC_FUNC_IMPL(__imp__sub_82E42E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E42E18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// beq 0x82e42e9c
	if (ctx.cr0.eq) goto loc_82E42E9C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e42e3c
	if (ctx.cr0.eq) goto loc_82E42E3C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82E42E3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r28.u32);
	// bl 0x82e3f0c0
	ctx.lr = 0x82E42E48;
	sub_82E3F0C0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e42ea4
	if (!ctx.cr6.gt) goto loc_82E42EA4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E42E5C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e42e84
	if (ctx.cr0.eq) goto loc_82E42E84;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e42e84
	if (ctx.cr6.eq) goto loc_82E42E84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82e42e10
	ctx.lr = 0x82E42E84;
	sub_82E42E10(ctx, base);
loc_82E42E84:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e42e5c
	if (ctx.cr6.lt) goto loc_82E42E5C;
	// b 0x82e42ea4
	goto loc_82E42EA4;
loc_82E42E9C:
	// stw r28,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r28.u32);
	// bl 0x82e3f0c0
	ctx.lr = 0x82E42EA4;
	sub_82E3F0C0(ctx, base);
loc_82E42EA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E42EB0"))) PPC_WEAK_FUNC(sub_82E42EB0);
PPC_FUNC_IMPL(__imp__sub_82E42EB0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e3db68
	sub_82E3DB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E42EB8"))) PPC_WEAK_FUNC(sub_82E42EB8);
PPC_FUNC_IMPL(__imp__sub_82E42EB8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e3dc08
	sub_82E3DC08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E42EC0"))) PPC_WEAK_FUNC(sub_82E42EC0);
PPC_FUNC_IMPL(__imp__sub_82E42EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E42EC8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82e42ef0
	if (!ctx.cr6.lt) goto loc_82E42EF0;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82E42EF0:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e42f7c
	if (ctx.cr0.eq) goto loc_82E42F7C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e42f08
	if (ctx.cr0.eq) goto loc_82E42F08;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82E42F08:
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e42ec0
	ctx.lr = 0x82E42F18;
	sub_82E42EC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e42f90
	if (!ctx.cr0.eq) goto loc_82E42F90;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e42f8c
	if (!ctx.cr6.gt) goto loc_82E42F8C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E42F34:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e42f64
	if (ctx.cr0.eq) goto loc_82E42F64;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e42f64
	if (ctx.cr6.eq) goto loc_82E42F64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82e42ec0
	ctx.lr = 0x82E42F5C;
	sub_82E42EC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e42f90
	if (!ctx.cr0.eq) goto loc_82E42F90;
loc_82E42F64:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e42f34
	if (ctx.cr6.lt) goto loc_82E42F34;
	// b 0x82e42f8c
	goto loc_82E42F8C;
loc_82E42F7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// bl 0x82e3f338
	ctx.lr = 0x82E42F88;
	sub_82E3F338(ctx, base);
	// stfs f1,308(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
loc_82E42F8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E42F90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E42F9C"))) PPC_WEAK_FUNC(sub_82E42F9C);
PPC_FUNC_IMPL(__imp__sub_82E42F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E42FA0"))) PPC_WEAK_FUNC(sub_82E42FA0);
PPC_FUNC_IMPL(__imp__sub_82E42FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82E42FA8;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e43020
	if (ctx.cr0.eq) goto loc_82E43020;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e43020
	if (ctx.cr6.eq) goto loc_82E43020;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e43020
	if (!ctx.cr6.gt) goto loc_82E43020;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82E42FE8:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e4300c
	if (ctx.cr6.eq) goto loc_82E4300C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82e42fa0
	ctx.lr = 0x82E43004;
	sub_82E42FA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e432bc
	if (!ctx.cr0.eq) goto loc_82E432BC;
loc_82E4300C:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e42fe8
	if (ctx.cr6.lt) goto loc_82E42FE8;
loc_82E43020:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
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
	// or. r22,r11,r10
	ctx.r22.u64 = ctx.r11.u64 | ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble 0x82e432b8
	if (!ctx.cr0.gt) goto loc_82E432B8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r25,r28,332
	ctx.r25.s64 = ctx.r28.s64 + 332;
	// addi r24,r11,22184
	ctx.r24.s64 = ctx.r11.s64 + 22184;
	// lis r23,-31909
	ctx.r23.s64 = -2091188224;
	// lfs f31,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
loc_82E43064:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// extsb. r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r11,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r5,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
	// ble 0x82e430c4
	if (!ctx.cr0.gt) goto loc_82E430C4;
loc_82E430AC:
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82e430cc
	if (ctx.cr6.eq) goto loc_82E430CC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82e430ac
	if (ctx.cr6.lt) goto loc_82E430AC;
loc_82E430C4:
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82e430d4
	if (!ctx.cr6.eq) goto loc_82E430D4;
loc_82E430CC:
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// b 0x82e432ac
	goto loc_82E432AC;
loc_82E430D4:
	// lwz r11,96(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// addi r8,r9,96
	ctx.r8.s64 = ctx.r9.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82e43100
	if (!ctx.cr6.gt) goto loc_82E43100;
loc_82E430E8:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e430cc
	if (ctx.cr6.eq) goto loc_82E430CC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82e430e8
	if (ctx.cr6.lt) goto loc_82E430E8;
loc_82E43100:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e430cc
	if (ctx.cr6.eq) goto loc_82E430CC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r4,36(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// ble cr6,0x82e43240
	if (!ctx.cr6.gt) goto loc_82E43240;
loc_82E43124:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e431a4
	if (!ctx.cr6.eq) goto loc_82E431A4;
	// lwz r11,19872(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,9330
	ctx.r6.s64 = 9330;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82E43150;
	sub_82D862B0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82e43178
	if (ctx.cr0.eq) goto loc_82E43178;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f31,16(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// stw r4,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r4.u32);
	// stw r4,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r4.u32);
	// stw r26,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r26.u32);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// b 0x82e4317c
	goto loc_82E4317C;
loc_82E43178:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82E4317C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e432c8
	if (ctx.cr6.eq) goto loc_82E432C8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
loc_82E431A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
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
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
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
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r9,r11,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00;
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// rlwinm r10,r10,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 20);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// blt cr6,0x82e43124
	if (ctx.cr6.lt) goto loc_82E43124;
loc_82E43240:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e432a0
	if (ctx.cr6.eq) goto loc_82E432A0;
loc_82E43250:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r6,9380
	ctx.r6.s64 = 9380;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r4,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r4.u32);
	// stw r4,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r4.u32);
	// stw r26,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r26.u32);
	// lwz r11,19872(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E4328C;
	sub_82D861B0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e43250
	if (!ctx.cr6.eq) goto loc_82E43250;
loc_82E432A0:
	// lhz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 28);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// sth r11,28(r27)
	PPC_STORE_U16(ctx.r27.u32 + 28, ctx.r11.u16);
loc_82E432AC:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmpw cr6,r21,r22
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x82e43064
	if (ctx.cr6.lt) goto loc_82E43064;
loc_82E432B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E432BC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82E432C8:
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e432bc
	goto loc_82E432BC;
}

__attribute__((alias("__imp__sub_82E432D0"))) PPC_WEAK_FUNC(sub_82E432D0);
PPC_FUNC_IMPL(__imp__sub_82E432D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E432D8;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82e43300
	if (!ctx.cr6.eq) goto loc_82E43300;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82e43450
	goto loc_82E43450;
loc_82E43300:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r30,332(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// addi r27,r28,332
	ctx.r27.s64 = ctx.r28.s64 + 332;
	// lfs f29,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f29.f64 = double(temp.f32);
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// b 0x82e433e8
	goto loc_82E433E8;
loc_82E43318:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82e433f0
	if (ctx.cr6.eq) goto loc_82E433F0;
	// lwz r31,84(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f29.f64;
	// addi r29,r30,84
	ctx.r29.s64 = ctx.r30.s64 + 84;
	// b 0x82e4337c
	goto loc_82E4337C;
loc_82E43330:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e43390
	if (ctx.cr6.eq) goto loc_82E43390;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e43364
	if (ctx.cr0.eq) goto loc_82E43364;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f2,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e46dd8
	ctx.lr = 0x82E43358;
	sub_82E46DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e43450
	if (!ctx.cr0.eq) goto loc_82E43450;
	// b 0x82e4336c
	goto loc_82E4336C;
loc_82E43364:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_82E4336C:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e43388
	if (!ctx.cr0.eq) goto loc_82E43388;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E4337C:
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82e43330
	if (!ctx.cr0.eq) goto loc_82E43330;
	// b 0x82e43390
	goto loc_82E43390;
loc_82E43388:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f30,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f30.f64 = double(temp.f32);
loc_82E43390:
	// lwz r31,96(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r29,r30,96
	ctx.r29.s64 = ctx.r30.s64 + 96;
	// b 0x82e433d8
	goto loc_82E433D8;
loc_82E4339C:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e433e0
	if (ctx.cr6.eq) goto loc_82E433E0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e433d4
	if (ctx.cr0.eq) goto loc_82E433D4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f1,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e3a4c0
	ctx.lr = 0x82E433C4;
	sub_82E3A4C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e43450
	if (!ctx.cr0.eq) goto loc_82E43450;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
loc_82E433D4:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E433D8:
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82e4339c
	if (!ctx.cr0.eq) goto loc_82E4339C;
loc_82E433E0:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fadds f31,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
loc_82E433E8:
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x82e43318
	if (!ctx.cr0.eq) goto loc_82E43318;
loc_82E433F0:
	// lwz r11,180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e43418
	if (!ctx.cr0.eq) goto loc_82E43418;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e3ede8
	ctx.lr = 0x82E43408;
	sub_82E3EDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e43450
	if (!ctx.cr0.eq) goto loc_82E43450;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_82E43418:
	// lwz r11,368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 368);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e43438
	if (ctx.cr0.eq) goto loc_82E43438;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e43438
	if (ctx.cr0.eq) goto loc_82E43438;
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_82E43438:
	// lfs f0,96(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,92(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_82E43450:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E43464"))) PPC_WEAK_FUNC(sub_82E43464);
PPC_FUNC_IMPL(__imp__sub_82E43464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E43468"))) PPC_WEAK_FUNC(sub_82E43468);
PPC_FUNC_IMPL(__imp__sub_82E43468) {
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
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// clrlwi. r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82e4348c
	if (!ctx.cr0.eq) goto loc_82E4348C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e43490
	if (!ctx.cr0.eq) goto loc_82E43490;
loc_82E4348C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E43490:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82e43a24
	if (ctx.cr6.lt) goto loc_82E43A24;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e43a24
	if (ctx.cr6.eq) goto loc_82E43A24;
	// cmplwi cr6,r4,42
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 42, ctx.xer);
	// bgt cr6,0x82e439b8
	if (ctx.cr6.gt) goto loc_82E439B8;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,22048
	ctx.r12.s64 = ctx.r12.s64 + 22048;
	// rlwinm r0,r4,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32028
	ctx.r12.s64 = -2098987008;
	// addi r12,r12,13520
	ctx.r12.s64 = ctx.r12.s64 + 13520;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82E434D0;
	case 1:
		goto loc_82E434D8;
	case 2:
		goto loc_82E43558;
	case 3:
		goto loc_82E434F0;
	case 4:
		goto loc_82E4350C;
	case 5:
		goto loc_82E43514;
	case 6:
		goto loc_82E4351C;
	case 7:
		goto loc_82E43524;
	case 8:
		goto loc_82E43540;
	case 9:
		goto loc_82E43548;
	case 10:
		goto loc_82E43550;
	case 11:
		goto loc_82E43570;
	case 12:
		goto loc_82E434D0;
	case 13:
		goto loc_82E43588;
	case 14:
		goto loc_82E43604;
	case 15:
		goto loc_82E4362C;
	case 16:
		goto loc_82E43640;
	case 17:
		goto loc_82E43658;
	case 18:
		goto loc_82E43664;
	case 19:
		goto loc_82E43688;
	case 20:
		goto loc_82E436A4;
	case 21:
		goto loc_82E436B4;
	case 22:
		goto loc_82E436C0;
	case 23:
		goto loc_82E436D8;
	case 24:
		goto loc_82E436F0;
	case 25:
		goto loc_82E43708;
	case 26:
		goto loc_82E43740;
	case 27:
		goto loc_82E43778;
	case 28:
		goto loc_82E437B0;
	case 29:
		goto loc_82E437E8;
	case 30:
		goto loc_82E43820;
	case 31:
		goto loc_82E43858;
	case 32:
		goto loc_82E43890;
	case 33:
		goto loc_82E438C8;
	case 34:
		goto loc_82E438E0;
	case 35:
		goto loc_82E43910;
	case 36:
		goto loc_82E43930;
	case 37:
		goto loc_82E43940;
	case 38:
		goto loc_82E43958;
	case 39:
		goto loc_82E43970;
	case 40:
		goto loc_82E43988;
	case 41:
		goto loc_82E439A0;
	case 42:
		goto loc_82E43674;
	default:
		__builtin_unreachable();
	}
loc_82E434D0:
	// li r3,76
	ctx.r3.s64 = 76;
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E434D8:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82e3f918
	ctx.lr = 0x82E434EC;
	sub_82E3F918(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E434F0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82E434F4:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82e3fac0
	ctx.lr = 0x82E43508;
	sub_82E3FAC0(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E4350C:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82e434f4
	goto loc_82E434F4;
loc_82E43514:
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x82e434f4
	goto loc_82E434F4;
loc_82E4351C:
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x82e434f4
	goto loc_82E434F4;
loc_82E43524:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82E43528:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82e3cfd8
	ctx.lr = 0x82E4353C;
	sub_82E3CFD8(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E43540:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82e43528
	goto loc_82E43528;
loc_82E43548:
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x82e43528
	goto loc_82E43528;
loc_82E43550:
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x82e43528
	goto loc_82E43528;
loc_82E43558:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82e3d0c0
	ctx.lr = 0x82E4356C;
	sub_82E3D0C0(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E43570:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82e3d168
	ctx.lr = 0x82E43584;
	sub_82E3D168(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E43588:
	// lwz r8,312(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// rlwinm r8,r8,0,24,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// rlwinm r8,r8,0,9,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r8,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r8.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82e435e4
	if (ctx.cr6.eq) goto loc_82E435E4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82e435dc
	if (ctx.cr6.eq) goto loc_82E435DC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82e435d4
	if (ctx.cr6.eq) goto loc_82E435D4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82e435cc
	if (ctx.cr6.eq) goto loc_82E435CC;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82e435e4
	if (!ctx.cr6.eq) goto loc_82E435E4;
	// oris r10,r8,128
	ctx.r10.u64 = ctx.r8.u64 | 8388608;
	// b 0x82e435e8
	goto loc_82E435E8;
loc_82E435CC:
	// ori r10,r8,2048
	ctx.r10.u64 = ctx.r8.u64 | 2048;
	// b 0x82e435e8
	goto loc_82E435E8;
loc_82E435D4:
	// ori r10,r8,1024
	ctx.r10.u64 = ctx.r8.u64 | 1024;
	// b 0x82e435e8
	goto loc_82E435E8;
loc_82E435DC:
	// ori r10,r8,512
	ctx.r10.u64 = ctx.r8.u64 | 512;
	// b 0x82e435e8
	goto loc_82E435E8;
loc_82E435E4:
	// ori r10,r8,256
	ctx.r10.u64 = ctx.r8.u64 | 256;
loc_82E435E8:
	// stw r10,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r10.u32);
	// cntlzw r10,r9
	ctx.r10.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r4,312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82E435F8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82e3d208
	ctx.lr = 0x82E43600;
	sub_82E3D208(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E43604:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,180(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// rlwimi r10,r8,0,29,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFFFFFE7) | (ctx.r10.u64 & 0x18);
loc_82E43610:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r10,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x82e3d2d8
	ctx.lr = 0x82E43628;
	sub_82E3D2D8(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E4362C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,180(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// rlwimi r10,r8,0,12,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFF80FFFFF) | (ctx.r10.u64 & 0x7F00000);
	// rlwimi r10,r8,0,6,9
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3C00000) | (ctx.r10.u64 & 0xFFFFFFFFFC3FFFFF);
	// b 0x82e43610
	goto loc_82E43610;
loc_82E43640:
	// lfs f2,188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
loc_82E43648:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82e3d3e8
	ctx.lr = 0x82E43654;
	sub_82E3D3E8(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E43658:
	// lfs f2,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82e43648
	goto loc_82E43648;
loc_82E43664:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,180(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// rlwimi r10,r8,0,14,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF3FFFF) | (ctx.r10.u64 & 0xC0000);
	// b 0x82e43610
	goto loc_82E43610;
loc_82E43674:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82e42e10
	ctx.lr = 0x82E43684;
	sub_82E42E10(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E43688:
	// lfs f3,200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
loc_82E43694:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82e3d5b8
	ctx.lr = 0x82E436A0;
	sub_82E3D5B8(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E436A4:
	// lfs f3,200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
loc_82E436AC:
	// lfs f1,192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82e43694
	goto loc_82E43694;
loc_82E436B4:
	// lfs f3,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f2.f64 = double(temp.f32);
	// b 0x82e436ac
	goto loc_82E436AC;
loc_82E436C0:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82e3d708
	ctx.lr = 0x82E436D4;
	sub_82E3D708(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E436D8:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82e3db68
	ctx.lr = 0x82E436EC;
	sub_82E3DB68(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E436F0:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82e3dc08
	ctx.lr = 0x82E43704;
	sub_82E3DC08(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E43708:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f8,236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f7,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lfs f6,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stb r9,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r9.u8);
	// bl 0x82e3dca8
	ctx.lr = 0x82E4373C;
	sub_82E3DCA8(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E43740:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f8,236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f7,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lfs f6,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f1.f64 = double(temp.f32);
	// stb r9,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r9.u8);
	// bl 0x82e3dca8
	ctx.lr = 0x82E43774;
	sub_82E3DCA8(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E43778:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f8,236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f7,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lfs f6,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f1.f64 = double(temp.f32);
	// stb r9,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r9.u8);
	// bl 0x82e3dca8
	ctx.lr = 0x82E437AC;
	sub_82E3DCA8(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E437B0:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f7,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f8,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lfs f6,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f1.f64 = double(temp.f32);
	// stb r10,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// bl 0x82e3dca8
	ctx.lr = 0x82E437E4;
	sub_82E3DCA8(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E437E8:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f8,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f7,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lfs f6,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f1.f64 = double(temp.f32);
	// stb r10,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// bl 0x82e3dca8
	ctx.lr = 0x82E4381C;
	sub_82E3DCA8(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E43820:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f8,236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f7,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lfs f6,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f1.f64 = double(temp.f32);
	// stb r9,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r9.u8);
	// bl 0x82e3dca8
	ctx.lr = 0x82E43854;
	sub_82E3DCA8(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E43858:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f8,236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f7,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f1.f64 = double(temp.f32);
	// stb r9,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r9.u8);
	// bl 0x82e3dca8
	ctx.lr = 0x82E4388C;
	sub_82E3DCA8(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E43890:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f8,236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f7,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lfs f6,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f1.f64 = double(temp.f32);
	// stb r9,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r9.u8);
	// bl 0x82e3dca8
	ctx.lr = 0x82E438C4;
	sub_82E3DCA8(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E438C8:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82e3d828
	ctx.lr = 0x82E438DC;
	sub_82E3D828(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E438E0:
	// lwz r8,312(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,0,13,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r9,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// or r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r4,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r4.u32);
	// b 0x82e435f8
	goto loc_82E435F8;
loc_82E43910:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r5,322(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 322);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
loc_82E4391C:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82e3dea0
	ctx.lr = 0x82E4392C;
	sub_82E3DEA0(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E43930:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r4,320(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 320);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// b 0x82e4391c
	goto loc_82E4391C;
loc_82E43940:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82e3d9c8
	ctx.lr = 0x82E43954;
	sub_82E3D9C8(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E43958:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82e3e030
	ctx.lr = 0x82E4396C;
	sub_82E3E030(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E43970:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82e42ec0
	ctx.lr = 0x82E43984;
	sub_82E42EC0(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E43988:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82e3e0c0
	ctx.lr = 0x82E4399C;
	sub_82E3E0C0(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E439A0:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82e3e150
	ctx.lr = 0x82E439B4;
	sub_82E3E150(ctx, base);
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E439B8:
	// addi r9,r11,356
	ctx.r9.s64 = ctx.r11.s64 + 356;
	// addi r8,r4,-43
	ctx.r8.s64 = ctx.r4.s64 + -43;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e43a24
	if (ctx.cr6.eq) goto loc_82E43A24;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82e439e8
	if (!ctx.cr6.gt) goto loc_82E439E8;
loc_82E439D4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e43a24
	if (ctx.cr6.eq) goto loc_82E43A24;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt 0x82e439d4
	if (ctx.cr0.gt) goto loc_82E439D4;
loc_82E439E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e43a24
	if (ctx.cr6.eq) goto loc_82E43A24;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x82e43a08
	if (ctx.cr6.lt) goto loc_82E43A08;
	// beq cr6,0x82e43a18
	if (ctx.cr6.eq) goto loc_82E43A18;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x82e43a10
	if (!ctx.cr6.lt) goto loc_82E43A10;
loc_82E43A08:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82E43A10:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e43a28
	goto loc_82E43A28;
loc_82E43A18:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// b 0x82e43a10
	goto loc_82E43A10;
loc_82E43A24:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E43A28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E43A38"))) PPC_WEAK_FUNC(sub_82E43A38);
PPC_FUNC_IMPL(__imp__sub_82E43A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82e43a50
	if (!ctx.cr6.gt) goto loc_82E43A50;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82E43A50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82e43a64
	if (!ctx.cr6.lt) goto loc_82E43A64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82E43A64:
	// lfs f1,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// b 0x82e3f918
	sub_82E3F918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E43A74"))) PPC_WEAK_FUNC(sub_82E43A74);
PPC_FUNC_IMPL(__imp__sub_82E43A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E43A78"))) PPC_WEAK_FUNC(sub_82E43A78);
PPC_FUNC_IMPL(__imp__sub_82E43A78) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e3fac0
	sub_82E3FAC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E43A84"))) PPC_WEAK_FUNC(sub_82E43A84);
PPC_FUNC_IMPL(__imp__sub_82E43A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E43A88"))) PPC_WEAK_FUNC(sub_82E43A88);
PPC_FUNC_IMPL(__imp__sub_82E43A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E43A90;
	__savegprlr_29(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82d7ef88
	ctx.lr = 0x82E43AA8;
	sub_82D7EF88(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82e406b8
	ctx.lr = 0x82E43AB4;
	sub_82E406B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e43b2c
	if (!ctx.cr0.eq) goto loc_82E43B2C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d7ee80
	ctx.lr = 0x82E43AC8;
	sub_82D7EE80(ctx, base);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82e43b2c
	if (!ctx.cr6.eq) goto loc_82E43B2C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d7e670
	ctx.lr = 0x82E43AE0;
	sub_82D7E670(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,256
	ctx.r6.s64 = 256;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x82d7e688
	ctx.lr = 0x82E43AFC;
	sub_82D7E688(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,372(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e43b2c
	if (ctx.cr6.eq) goto loc_82E43B2C;
	// lwz r7,376(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E43B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E43B2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E43B38"))) PPC_WEAK_FUNC(sub_82E43B38);
PPC_FUNC_IMPL(__imp__sub_82E43B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E43B40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r26,-4740(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4740);
	// bl 0x82e39ea8
	ctx.lr = 0x82E43B58;
	sub_82E39EA8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da41c0
	ctx.lr = 0x82E43B60;
	sub_82DA41C0(ctx, base);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lis r29,-31909
	ctx.r29.s64 = -2091188224;
	// addi r30,r11,22184
	ctx.r30.s64 = ctx.r11.s64 + 22184;
	// beq 0x82e43b90
	if (ctx.cr0.eq) goto loc_82E43B90;
	// lwz r11,19872(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,904
	ctx.r6.s64 = 904;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E43B90;
	sub_82D861B0(ctx, base);
loc_82E43B90:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e43ba8
	if (ctx.cr0.eq) goto loc_82E43BA8;
	// bl 0x82d84718
	ctx.lr = 0x82E43BA4;
	sub_82D84718(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
loc_82E43BA8:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e43bcc
	if (ctx.cr0.eq) goto loc_82E43BCC;
	// lwz r11,19872(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,915
	ctx.r6.s64 = 915;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E43BCC;
	sub_82D861B0(ctx, base);
loc_82E43BCC:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e43bf0
	if (ctx.cr0.eq) goto loc_82E43BF0;
	// lwz r11,19872(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,920
	ctx.r6.s64 = 920;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E43BF0;
	sub_82D861B0(ctx, base);
loc_82E43BF0:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e43c14
	if (ctx.cr0.eq) goto loc_82E43C14;
	// lwz r11,19872(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,925
	ctx.r6.s64 = 925;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E43C14;
	sub_82D861B0(ctx, base);
loc_82E43C14:
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e43c38
	if (ctx.cr0.eq) goto loc_82E43C38;
	// lwz r11,19872(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,930
	ctx.r6.s64 = 930;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E43C38;
	sub_82D861B0(ctx, base);
loc_82E43C38:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e41e30
	ctx.lr = 0x82E43C48;
	sub_82E41E30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e43c68
	if (ctx.cr0.eq) goto loc_82E43C68;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82E43C54:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82da4200
	ctx.lr = 0x82E43C5C;
	sub_82DA4200(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82E43C68:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e43c8c
	if (ctx.cr0.eq) goto loc_82E43C8C;
	// lwz r11,19872(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,941
	ctx.r6.s64 = 941;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E43C8C;
	sub_82D861B0(ctx, base);
loc_82E43C8C:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x82e43c54
	goto loc_82E43C54;
}

__attribute__((alias("__imp__sub_82E43C94"))) PPC_WEAK_FUNC(sub_82E43C94);
PPC_FUNC_IMPL(__imp__sub_82E43C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E43C98"))) PPC_WEAK_FUNC(sub_82E43C98);
PPC_FUNC_IMPL(__imp__sub_82E43C98) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lbz r11,-4720(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -4720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e43e40
	if (!ctx.cr0.eq) goto loc_82E43E40;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-4736
	ctx.r3.s64 = ctx.r11.s64 + -4736;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-4720(r10)
	PPC_STORE_U8(ctx.r10.u32 + -4720, ctx.r11.u8);
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4732(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4732, ctx.r11.u32);
	// bl 0x82da4098
	ctx.lr = 0x82E43CE0;
	sub_82DA4098(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e43e44
	if (!ctx.cr0.eq) goto loc_82E43E44;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-4740
	ctx.r3.s64 = ctx.r11.s64 + -4740;
	// bl 0x82da4098
	ctx.lr = 0x82E43CF8;
	sub_82DA4098(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e43e44
	if (!ctx.cr0.eq) goto loc_82E43E44;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r4,r11,-4724
	ctx.r4.s64 = ctx.r11.s64 + -4724;
	// lis r11,-32028
	ctx.r11.s64 = -2098987008;
	// addi r3,r11,8064
	ctx.r3.s64 = ctx.r11.s64 + 8064;
	// bl 0x82decd60
	ctx.lr = 0x82E43D14;
	sub_82DECD60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e43e44
	if (!ctx.cr0.eq) goto loc_82E43E44;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E43D2C:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82e43d2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E43D2C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r11,68
	ctx.r11.s64 = 68;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82d804f0
	ctx.lr = 0x82E43D58;
	sub_82D804F0(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r30,-31908
	ctx.r30.s64 = -2091122688;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e43d70
	if (ctx.cr6.eq) goto loc_82E43D70;
	// stw r10,11496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11496, ctx.r10.u32);
	// b 0x82e43d74
	goto loc_82E43D74;
loc_82E43D70:
	// lwz r10,11496(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11496);
loc_82E43D74:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r4,r10,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r5,r11,22184
	ctx.r5.s64 = ctx.r11.s64 + 22184;
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,11608
	ctx.r31.s64 = ctx.r11.s64 + 11608;
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,11576
	ctx.r11.s64 = ctx.r11.s64 + 11576;
	// li r6,2247
	ctx.r6.s64 = 2247;
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82E43DC4;
	sub_82D862B0(ctx, base);
	// lis r8,-31890
	ctx.r8.s64 = -2089943040;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,-4744(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4744, ctx.r3.u32);
	// bne 0x82e43ddc
	if (!ctx.cr0.eq) goto loc_82E43DDC;
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e43e44
	goto loc_82E43E44;
loc_82E43DDC:
	// lwz r11,11496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11496);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e43e40
	if (!ctx.cr6.gt) goto loc_82E43E40;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e43df8
	goto loc_82E43DF8;
loc_82E43DF4:
	// lwz r3,-4744(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4744);
loc_82E43DF8:
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,-4744(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4744);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,11496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11496);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e43df4
	if (ctx.cr6.lt) goto loc_82E43DF4;
loc_82E43E40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E43E44:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82E43E5C"))) PPC_WEAK_FUNC(sub_82E43E5C);
PPC_FUNC_IMPL(__imp__sub_82E43E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E43E60"))) PPC_WEAK_FUNC(sub_82E43E60);
PPC_FUNC_IMPL(__imp__sub_82E43E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E43E68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r11,-4720(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + -4720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e43f30
	if (ctx.cr0.eq) goto loc_82E43F30;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// stw r11,-4732(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4732, ctx.r11.u32);
	// b 0x82e43e9c
	goto loc_82E43E9C;
loc_82E43E94:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82da3e20
	ctx.lr = 0x82E43E9C;
	sub_82DA3E20(ctx, base);
loc_82E43E9C:
	// lwz r11,-4728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e43e94
	if (!ctx.cr6.eq) goto loc_82E43E94;
	// lis r11,-32028
	ctx.r11.s64 = -2098987008;
	// addi r3,r11,8064
	ctx.r3.s64 = ctx.r11.s64 + 8064;
	// bl 0x82dec5a8
	ctx.lr = 0x82E43EB4;
	sub_82DEC5A8(ctx, base);
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-4736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e43ed4
	if (ctx.cr6.eq) goto loc_82E43ED4;
	// bl 0x82da4150
	ctx.lr = 0x82E43ECC;
	sub_82DA4150(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4736(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4736, ctx.r11.u32);
loc_82E43ED4:
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// lwz r3,-4740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4740);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e43ef0
	if (ctx.cr6.eq) goto loc_82E43EF0;
	// bl 0x82da4150
	ctx.lr = 0x82E43EE8;
	sub_82DA4150(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4740(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4740, ctx.r11.u32);
loc_82E43EF0:
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// lwz r4,-4744(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4744);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e43f28
	if (ctx.cr6.eq) goto loc_82E43F28;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,22184
	ctx.r5.s64 = ctx.r11.s64 + 22184;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,2294
	ctx.r6.s64 = 2294;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E43F20;
	sub_82D861B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4744, ctx.r11.u32);
loc_82E43F28:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-4720(r29)
	PPC_STORE_U8(ctx.r29.u32 + -4720, ctx.r11.u8);
loc_82E43F30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E43F3C"))) PPC_WEAK_FUNC(sub_82E43F3C);
PPC_FUNC_IMPL(__imp__sub_82E43F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E43F40"))) PPC_WEAK_FUNC(sub_82E43F40);
PPC_FUNC_IMPL(__imp__sub_82E43F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E43F48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e42308
	ctx.lr = 0x82E43F54;
	sub_82E42308(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44028
	if (!ctx.cr0.eq) goto loc_82E44028;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e43f98
	if (ctx.cr6.eq) goto loc_82E43F98;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e43f98
	if (!ctx.cr6.eq) goto loc_82E43F98;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82e3abc8
	ctx.lr = 0x82E43F90;
	sub_82E3ABC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44028
	if (!ctx.cr0.eq) goto loc_82E44028;
loc_82E43F98:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r29,r31,120
	ctx.r29.s64 = ctx.r31.s64 + 120;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e43fc4
	if (ctx.cr6.eq) goto loc_82E43FC4;
loc_82E43FA8:
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82e43f40
	ctx.lr = 0x82E43FB0;
	sub_82E43F40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44028
	if (!ctx.cr0.eq) goto loc_82E44028;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e43fa8
	if (!ctx.cr6.eq) goto loc_82E43FA8;
loc_82E43FC4:
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r29,-31909
	ctx.r29.s64 = -2091188224;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,22184
	ctx.r30.s64 = ctx.r11.s64 + 22184;
	// beq 0x82e43ff4
	if (ctx.cr0.eq) goto loc_82E43FF4;
	// lwz r11,19872(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2749
	ctx.r6.s64 = 2749;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E43FF4;
	sub_82D861B0(ctx, base);
loc_82E43FF4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e44024
	if (!ctx.cr6.eq) goto loc_82E44024;
	// lwz r11,19872(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2756
	ctx.r6.s64 = 2756;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E44024;
	sub_82D861B0(ctx, base);
loc_82E44024:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E44028:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E44030"))) PPC_WEAK_FUNC(sub_82E44030);
PPC_FUNC_IMPL(__imp__sub_82E44030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82E44038;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// bne 0x82e44058
	if (!ctx.cr0.eq) goto loc_82E44058;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
loc_82E44058:
	// rlwinm r25,r4,0,25,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x78;
	// li r24,1
	ctx.r24.s64 = 1;
	// lis r30,-31890
	ctx.r30.s64 = -2089943040;
	// rlwinm. r11,r25,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e440a8
	if (ctx.cr0.eq) goto loc_82E440A8;
	// lwz r11,-4716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4716);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82d80df8
	ctx.lr = 0x82E44084;
	sub_82D80DF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44604
	if (!ctx.cr0.eq) goto loc_82E44604;
	// rlwinm. r11,r25,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne 0x82e4409c
	if (!ctx.cr0.eq) goto loc_82E4409C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E4409C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e440a8
	if (!ctx.cr6.eq) goto loc_82E440A8;
	// rlwimi r25,r24,6,25,26
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r24.u32, 6) & 0x60) | (ctx.r25.u64 & 0xFFFFFFFFFFFFFF9F);
loc_82E440A8:
	// lwz r11,44(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 44);
	// addi r22,r21,44
	ctx.r22.s64 = ctx.r21.s64 + 44;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e44168
	if (!ctx.cr6.eq) goto loc_82E44168;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82e44154
	if (!ctx.cr6.eq) goto loc_82E44154;
	// stw r29,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r29.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,372(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e44168
	if (ctx.cr6.eq) goto loc_82E44168;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,376(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E44124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44168
	if (!ctx.cr0.eq) goto loc_82E44168;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82e44168
	if (ctx.cr6.lt) goto loc_82E44168;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82e44168
	if (!ctx.cr6.lt) goto loc_82E44168;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// b 0x82e44168
	goto loc_82E44168;
loc_82E44154:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82e54f48
	ctx.lr = 0x82E44160;
	sub_82E54F48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44604
	if (!ctx.cr0.eq) goto loc_82E44604;
loc_82E44168:
	// lbz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e44184
	if (!ctx.cr0.eq) goto loc_82E44184;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e42308
	ctx.lr = 0x82E4417C;
	sub_82E42308(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44604
	if (!ctx.cr0.eq) goto loc_82E44604;
loc_82E44184:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e4419c
	if (!ctx.cr6.eq) goto loc_82E4419C;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,48(r21)
	PPC_STORE_U32(ctx.r21.u32 + 48, ctx.r11.u32);
	// b 0x82e44604
	goto loc_82E44604;
loc_82E4419C:
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mulli r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 * 24;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82e441bc
	if (ctx.cr6.eq) goto loc_82E441BC;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
loc_82E441BC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r23,-1
	ctx.r23.s64 = -1;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e44484
	if (!ctx.cr0.eq) goto loc_82E44484;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e442e8
	if (!ctx.cr0.eq) goto loc_82E442E8;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e442e8
	if (ctx.cr6.eq) goto loc_82E442E8;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r28,r27,24
	ctx.r28.s64 = ctx.r27.s64 + 24;
	// stw r29,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r29.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,372(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e44260
	if (ctx.cr6.eq) goto loc_82E44260;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r5,20(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r7,376(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E44228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4423c
	if (ctx.cr0.eq) goto loc_82E4423C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82e44240
	goto loc_82E44240;
loc_82E4423C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E44240:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e4425c
	if (ctx.cr6.eq) goto loc_82E4425C;
	// rlwinm r4,r25,0,27,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x18;
	// bl 0x82d85600
	ctx.lr = 0x82E44250;
	sub_82D85600(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44604
	if (!ctx.cr0.eq) goto loc_82E44604;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E4425C:
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_82E44260:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r10,r25,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x18;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x82d85600
	ctx.lr = 0x82E44284;
	sub_82D85600(ctx, base);
loc_82E44284:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44604
	if (!ctx.cr0.eq) goto loc_82E44604;
loc_82E4428C:
	// lwz r6,24(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82e442d4
	if (ctx.cr0.eq) goto loc_82E442D4;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,372(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e442d4
	if (ctx.cr6.eq) goto loc_82E442D4;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,376(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E442D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E442D4:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r23,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r23.u32);
	// stw r11,48(r21)
	PPC_STORE_U32(ctx.r21.u32 + 48, ctx.r11.u32);
	// b 0x82e44604
	goto loc_82E44604;
loc_82E442E8:
	// lbz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 28);
	// addi r28,r27,24
	ctx.r28.s64 = ctx.r27.s64 + 24;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e44338
	if (ctx.cr0.eq) goto loc_82E44338;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d85188
	ctx.lr = 0x82E4430C;
	sub_82D85188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44604
	if (!ctx.cr0.eq) goto loc_82E44604;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e44330
	if (ctx.cr6.eq) goto loc_82E44330;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82e44330
	if (ctx.cr6.eq) goto loc_82E44330;
loc_82E44328:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e44604
	goto loc_82E44604;
loc_82E44330:
	// stb r29,28(r27)
	PPC_STORE_U8(ctx.r27.u32 + 28, ctx.r29.u8);
	// b 0x82e44260
	goto loc_82E44260;
loc_82E44338:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82e39f38
	ctx.lr = 0x82E44344;
	sub_82E39F38(ctx, base);
	// cmpwi cr6,r3,75
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 75, ctx.xer);
	// beq cr6,0x82e44604
	if (ctx.cr6.eq) goto loc_82E44604;
	// cmpwi cr6,r3,54
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 54, ctx.xer);
	// bne cr6,0x82e4435c
	if (!ctx.cr6.eq) goto loc_82E4435C;
loc_82E44354:
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82e44604
	goto loc_82E44604;
loc_82E4435C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e44604
	if (!ctx.cr6.eq) goto loc_82E44604;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e44354
	if (ctx.cr0.eq) goto loc_82E44354;
	// lwz r31,12(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82e4442c
	if (!ctx.cr6.lt) goto loc_82E4442C;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E44384:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r30,r11,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82e44354
	if (ctx.cr0.eq) goto loc_82E44354;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82e443c0
	if (!ctx.cr6.gt) goto loc_82E443C0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da0178
	ctx.lr = 0x82E443AC;
	sub_82DA0178(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44604
	if (!ctx.cr0.eq) goto loc_82E44604;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e4442c
	if (!ctx.cr6.eq) goto loc_82E4442C;
loc_82E443C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E443D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44604
	if (!ctx.cr0.eq) goto loc_82E44604;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,0,25,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x78;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e443fc
	if (ctx.cr0.eq) goto loc_82E443FC;
	// rlwinm. r10,r25,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e44434
	if (!ctx.cr0.eq) goto loc_82E44434;
loc_82E443FC:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4440c
	if (ctx.cr0.eq) goto loc_82E4440C;
	// rlwinm. r10,r25,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e44434
	if (!ctx.cr0.eq) goto loc_82E44434;
loc_82E4440C:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82e44434
	if (ctx.cr6.eq) goto loc_82E44434;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e44384
	if (ctx.cr6.lt) goto loc_82E44384;
loc_82E4442C:
	// li r3,85
	ctx.r3.s64 = 85;
	// b 0x82e44604
	goto loc_82E44604;
loc_82E44434:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d84de0
	ctx.lr = 0x82E44444;
	sub_82D84DE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44604
	if (!ctx.cr0.eq) goto loc_82E44604;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d85188
	ctx.lr = 0x82E44460;
	sub_82D85188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44604
	if (!ctx.cr0.eq) goto loc_82E44604;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e44260
	if (ctx.cr6.eq) goto loc_82E44260;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82e44260
	if (ctx.cr6.eq) goto loc_82E44260;
loc_82E4447C:
	// stb r24,28(r27)
	PPC_STORE_U8(ctx.r27.u32 + 28, ctx.r24.u8);
	// b 0x82e44604
	goto loc_82E44604;
loc_82E44484:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82e444e8
	if (!ctx.cr6.eq) goto loc_82E444E8;
	// lwz r11,-4716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4716);
	// addi r31,r27,32
	ctx.r31.s64 = ctx.r27.s64 + 32;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82d81118
	ctx.lr = 0x82E444A4;
	sub_82D81118(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44604
	if (!ctx.cr0.eq) goto loc_82E44604;
	// lwa r11,8(r26)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r26.u32 + 8));
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82d82160
	ctx.lr = 0x82E444CC;
	sub_82D82160(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44604
	if (!ctx.cr0.eq) goto loc_82E44604;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d82160
	ctx.lr = 0x82E444E4;
	sub_82D82160(ctx, base);
	// b 0x82e44284
	goto loc_82E44284;
loc_82E444E8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82e44504
	if (!ctx.cr6.eq) goto loc_82E44504;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r29,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r29.u32);
	// beq cr6,0x82e4428c
	if (ctx.cr6.eq) goto loc_82E4428C;
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
	// b 0x82e4428c
	goto loc_82E4428C;
loc_82E44504:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82e44600
	if (!ctx.cr6.eq) goto loc_82E44600;
	// lbz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e44550
	if (ctx.cr0.eq) goto loc_82E44550;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82d85188
	ctx.lr = 0x82E4452C;
	sub_82D85188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44604
	if (!ctx.cr0.eq) goto loc_82E44604;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e44548
	if (ctx.cr6.eq) goto loc_82E44548;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82e44328
	if (!ctx.cr6.eq) goto loc_82E44328;
loc_82E44548:
	// stb r29,28(r27)
	PPC_STORE_U8(ctx.r27.u32 + 28, ctx.r29.u8);
	// b 0x82e4428c
	goto loc_82E4428C;
loc_82E44550:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r29.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,372(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e4428c
	if (ctx.cr6.eq) goto loc_82E4428C;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,376(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4459C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e445b8
	if (ctx.cr0.eq) goto loc_82E445B8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpwi cr6,r3,54
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 54, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82e445bc
	if (ctx.cr6.eq) goto loc_82E445BC;
	// b 0x82e44604
	goto loc_82E44604;
loc_82E445B8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E445BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r11.u32);
	// beq cr6,0x82e4428c
	if (ctx.cr6.eq) goto loc_82E4428C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d85188
	ctx.lr = 0x82E445DC;
	sub_82D85188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44604
	if (!ctx.cr0.eq) goto loc_82E44604;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e4428c
	if (ctx.cr6.eq) goto loc_82E4428C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82e4428c
	if (ctx.cr6.eq) goto loc_82E4428C;
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82e4447c
	goto loc_82E4447C;
loc_82E44600:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82E44604:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4460C"))) PPC_WEAK_FUNC(sub_82E4460C);
PPC_FUNC_IMPL(__imp__sub_82E4460C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E44610"))) PPC_WEAK_FUNC(sub_82E44610);
PPC_FUNC_IMPL(__imp__sub_82E44610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E44618;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,120(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// addi r29,r3,120
	ctx.r29.s64 = ctx.r3.s64 + 120;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e44670
	if (ctx.cr6.eq) goto loc_82E44670;
loc_82E4462C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x82e42308
	ctx.lr = 0x82E4465C;
	sub_82E42308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e43f40
	ctx.lr = 0x82E44664;
	sub_82E43F40(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e4462c
	if (!ctx.cr6.eq) goto loc_82E4462C;
loc_82E44670:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4467C"))) PPC_WEAK_FUNC(sub_82E4467C);
PPC_FUNC_IMPL(__imp__sub_82E4467C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E44680"))) PPC_WEAK_FUNC(sub_82E44680);
PPC_FUNC_IMPL(__imp__sub_82E44680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E44688;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e3b838
	ctx.lr = 0x82E44694;
	sub_82E3B838(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r29,r31,84
	ctx.r29.s64 = ctx.r31.s64 + 84;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e446dc
	if (ctx.cr6.eq) goto loc_82E446DC;
loc_82E446A8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// bl 0x82e43f40
	ctx.lr = 0x82E446D0;
	sub_82E43F40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e446a8
	if (!ctx.cr6.eq) goto loc_82E446A8;
loc_82E446DC:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e44720
	if (ctx.cr6.eq) goto loc_82E44720;
loc_82E446EC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// bl 0x82e421a0
	ctx.lr = 0x82E44714;
	sub_82E421A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e446ec
	if (!ctx.cr6.eq) goto loc_82E446EC;
loc_82E44720:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e44754
	if (!ctx.cr6.eq) goto loc_82E44754;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,22184
	ctx.r5.s64 = ctx.r11.s64 + 22184;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// li r6,3861
	ctx.r6.s64 = 3861;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E44754;
	sub_82D861B0(ctx, base);
loc_82E44754:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E44760"))) PPC_WEAK_FUNC(sub_82E44760);
PPC_FUNC_IMPL(__imp__sub_82E44760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E44768;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e44b0c
	if (!ctx.cr0.eq) goto loc_82E44B0C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E4479C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e3ced8
	ctx.lr = 0x82E447A4;
	sub_82E3CED8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e447bc
	if (ctx.cr0.eq) goto loc_82E447BC;
loc_82E447AC:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// b 0x82e44b10
	goto loc_82E44B10;
loc_82E447BC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e44850
	if (ctx.cr0.eq) goto loc_82E44850;
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e44850
	if (ctx.cr6.eq) goto loc_82E44850;
	// lwz r11,384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e44850
	if (!ctx.cr6.gt) goto loc_82E44850;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82E447EC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm. r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e44838
	if (ctx.cr0.eq) goto loc_82E44838;
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm. r10,r10,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e44838
	if (ctx.cr0.eq) goto loc_82E44838;
	// lwz r11,396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e41e30
	ctx.lr = 0x82E44830;
	sub_82E41E30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e447ac
	if (!ctx.cr0.eq) goto loc_82E447AC;
loc_82E44838:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e447ec
	if (ctx.cr6.lt) goto loc_82E447EC;
loc_82E44850:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lis r27,-31909
	ctx.r27.s64 = -2091188224;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,0,16,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,22184
	ctx.r28.s64 = ctx.r11.s64 + 22184;
	// beq cr6,0x82e448d8
	if (ctx.cr6.eq) goto loc_82E448D8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e448bc
	if (!ctx.cr6.gt) goto loc_82E448BC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82E44888:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82e448a8
	if (ctx.cr6.eq) goto loc_82E448A8;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r26,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r26.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stwx r26,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r26.u32);
loc_82E448A8:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e44888
	if (ctx.cr6.lt) goto loc_82E44888;
loc_82E448BC:
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4933
	ctx.r6.s64 = 4933;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E448D8;
	sub_82D861B0(ctx, base);
loc_82E448D8:
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r29,r31,332
	ctx.r29.s64 = ctx.r31.s64 + 332;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e4491c
	if (ctx.cr6.eq) goto loc_82E4491C;
loc_82E448E8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// bl 0x82e44680
	ctx.lr = 0x82E44910;
	sub_82E44680(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e448e8
	if (!ctx.cr6.eq) goto loc_82E448E8;
loc_82E4491C:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r29,r31,344
	ctx.r29.s64 = ctx.r31.s64 + 344;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e4496c
	if (ctx.cr6.eq) goto loc_82E4496C;
loc_82E4492C:
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
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
	// bl 0x82e476d8
	ctx.lr = 0x82E44960;
	sub_82E476D8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e4492c
	if (!ctx.cr6.eq) goto loc_82E4492C;
loc_82E4496C:
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r29,r31,356
	ctx.r29.s64 = ctx.r31.s64 + 356;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e449b0
	if (ctx.cr6.eq) goto loc_82E449B0;
loc_82E4497C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// bl 0x82e39b10
	ctx.lr = 0x82E449A4;
	sub_82E39B10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e4497c
	if (!ctx.cr6.eq) goto loc_82E4497C;
loc_82E449B0:
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
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
	// lwz r4,388(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e449fc
	if (ctx.cr0.eq) goto loc_82E449FC;
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4976
	ctx.r6.s64 = 4976;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E449FC;
	sub_82D861B0(ctx, base);
loc_82E449FC:
	// lwz r4,412(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e44a20
	if (ctx.cr0.eq) goto loc_82E44A20;
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4981
	ctx.r6.s64 = 4981;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E44A20;
	sub_82D861B0(ctx, base);
loc_82E44A20:
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e44a50
	if (ctx.cr0.eq) goto loc_82E44A50;
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e44a50
	if (!ctx.cr6.eq) goto loc_82E44A50;
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4990
	ctx.r6.s64 = 4990;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E44A50;
	sub_82D861B0(ctx, base);
loc_82E44A50:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e44a64
	if (ctx.cr0.eq) goto loc_82E44A64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e3c020
	ctx.lr = 0x82E44A64;
	sub_82E3C020(ctx, base);
loc_82E44A64:
	// lwz r4,248(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e44a88
	if (ctx.cr0.eq) goto loc_82E44A88;
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5003
	ctx.r6.s64 = 5003;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E44A88;
	sub_82D861B0(ctx, base);
loc_82E44A88:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e44ab4
	if (!ctx.cr6.eq) goto loc_82E44AB4;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-4716(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E44AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E44AB4:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
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
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e44af0
	if (ctx.cr0.eq) goto loc_82E44AF0;
	// bl 0x82e54190
	ctx.lr = 0x82E44AEC;
	sub_82E54190(ctx, base);
	// b 0x82e44b0c
	goto loc_82E44B0C;
loc_82E44AF0:
	// lwz r11,19872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19872);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5023
	ctx.r6.s64 = 5023;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d861b0
	ctx.lr = 0x82E44B0C;
	sub_82D861B0(ctx, base);
loc_82E44B0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E44B10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E44B18"))) PPC_WEAK_FUNC(sub_82E44B18);
PPC_FUNC_IMPL(__imp__sub_82E44B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E44B20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bne 0x82e44b40
	if (!ctx.cr0.eq) goto loc_82E44B40;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82E44B40:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e44b90
	if (ctx.cr6.eq) goto loc_82E44B90;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r8,r28,8
	ctx.r8.s64 = ctx.r28.s64 + 8;
	// bne cr6,0x82e44b5c
	if (!ctx.cr6.eq) goto loc_82E44B5C;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82E44B5C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82e44b80
	goto loc_82E44B80;
loc_82E44B70:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e44b8c
	if (ctx.cr6.eq) goto loc_82E44B8C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82E44B80:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e44b70
	if (!ctx.cr6.eq) goto loc_82E44B70;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82E44B8C:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
loc_82E44B90:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e44ba0
	if (ctx.cr6.eq) goto loc_82E44BA0;
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82E44BA0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e44d48
	if (ctx.cr6.eq) goto loc_82E44D48;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e3ea00
	ctx.lr = 0x82E44BB8;
	sub_82E3EA00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44d4c
	if (!ctx.cr0.eq) goto loc_82E44D4C;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e3eb18
	ctx.lr = 0x82E44BCC;
	sub_82E3EB18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44d4c
	if (!ctx.cr0.eq) goto loc_82E44D4C;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e3eba8
	ctx.lr = 0x82E44BE0;
	sub_82E3EBA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44d4c
	if (!ctx.cr0.eq) goto loc_82E44D4C;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e44c04
	if (ctx.cr0.eq) goto loc_82E44C04;
	// lwz r11,412(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 412);
	// b 0x82e44c08
	goto loc_82E44C08;
loc_82E44C04:
	// lwz r11,392(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
loc_82E44C08:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x82da3de8
	ctx.lr = 0x82E44C14;
	sub_82DA3DE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44d4c
	if (!ctx.cr0.eq) goto loc_82E44D4C;
	// lwz r9,280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e44c74
	if (ctx.cr0.eq) goto loc_82E44C74;
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e44c74
	if (!ctx.cr0.eq) goto loc_82E44C74;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e44c70
	if (ctx.cr0.eq) goto loc_82E44C70;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,272(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82e44c74
	goto loc_82E44C74;
loc_82E44C70:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_82E44C74:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,8044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8044);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e44d54
	if (ctx.cr6.eq) goto loc_82E44D54;
	// bl 0x82e3ed10
	ctx.lr = 0x82E44CD0;
	sub_82E3ED10(ctx, base);
loc_82E44CD0:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e44d4c
	if (!ctx.cr0.eq) goto loc_82E44D4C;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e44d44
	if (!ctx.cr6.gt) goto loc_82E44D44;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82E44CF4:
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e44d30
	if (ctx.cr6.eq) goto loc_82E44D30;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e44d28
	if (ctx.cr0.eq) goto loc_82E44D28;
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82e44d28
	if (!ctx.cr6.lt) goto loc_82E44D28;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r9,40(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82E44D28:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_82E44D30:
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e44cf4
	if (ctx.cr6.lt) goto loc_82E44CF4;
loc_82E44D44:
	// stw r6,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r6.u32);
loc_82E44D48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E44D4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82E44D54:
	// bl 0x82e432d0
	ctx.lr = 0x82E44D58;
	sub_82E432D0(ctx, base);
	// b 0x82e44cd0
	goto loc_82E44CD0;
}

__attribute__((alias("__imp__sub_82E44D5C"))) PPC_WEAK_FUNC(sub_82E44D5C);
PPC_FUNC_IMPL(__imp__sub_82E44D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E44D60"))) PPC_WEAK_FUNC(sub_82E44D60);
PPC_FUNC_IMPL(__imp__sub_82E44D60) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82e42878
	sub_82E42878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E44D68"))) PPC_WEAK_FUNC(sub_82E44D68);
PPC_FUNC_IMPL(__imp__sub_82E44D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E44D70;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r28,r31,36
	ctx.r28.s64 = ctx.r31.s64 + 36;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e44db4
	if (!ctx.cr0.eq) goto loc_82E44DB4;
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq 0x82e44db8
	if (ctx.cr0.eq) goto loc_82E44DB8;
loc_82E44DB4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82E44DB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// or r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x82e44030
	ctx.lr = 0x82E44DE0;
	sub_82E44030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e44e00
	if (ctx.cr0.eq) goto loc_82E44E00;
	// cmpwi cr6,r3,54
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 54, ctx.xer);
	// bne cr6,0x82e455d0
	if (!ctx.cr6.eq) goto loc_82E455D0;
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 312, ctx.r11.u32);
	// b 0x82e455d0
	goto loc_82E455D0;
loc_82E44E00:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x82e45020
	if (ctx.cr0.eq) goto loc_82E45020;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E44E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e44e98
	if (ctx.cr0.eq) goto loc_82E44E98;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e44e5c
	if (!ctx.cr0.eq) goto loc_82E44E5C;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r9,148(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r10,168(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82e44e98
	if (ctx.cr6.eq) goto loc_82E44E98;
loc_82E44E5C:
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e44e98
	if (ctx.cr6.eq) goto loc_82E44E98;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E44E84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,268(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82e44e98
	if (!ctx.cr6.eq) goto loc_82E44E98;
	// li r3,54
	ctx.r3.s64 = 54;
	// b 0x82e455d0
	goto loc_82E455D0;
loc_82E44E98:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82d84938
	ctx.lr = 0x82E44EB0;
	sub_82D84938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e455d0
	if (!ctx.cr0.eq) goto loc_82E455D0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge 0x82e44ecc
	if (!ctx.cr0.lt) goto loc_82E44ECC;
	// lwz r7,112(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
loc_82E44ECC:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f3,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d848a0
	ctx.lr = 0x82E44EE0;
	sub_82D848A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e455d0
	if (!ctx.cr0.eq) goto loc_82E455D0;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// andis. r4,r11,1072
	ctx.r4.u64 = ctx.r11.u64 & 70254592;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bl 0x82d85600
	ctx.lr = 0x82E44EF8;
	sub_82D85600(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e455d0
	if (!ctx.cr0.eq) goto loc_82E455D0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e44f84
	if (ctx.cr0.eq) goto loc_82E44F84;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e44f84
	if (!ctx.cr0.eq) goto loc_82E44F84;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f1,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e3a4c0
	ctx.lr = 0x82E44F38;
	sub_82E3A4C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e455d0
	if (!ctx.cr0.eq) goto loc_82E455D0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,22276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22276);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82cb4c00
	ctx.lr = 0x82E44F54;
	sub_82CB4C00(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,296(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,22280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22280);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// lfs f13,8044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8044);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmadds f12,f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// b 0x82e44f9c
	goto loc_82E44F9C;
loc_82E44F84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,296(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8044);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
loc_82E44F9C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// addi r10,r31,132
	ctx.r10.s64 = ctx.r31.s64 + 132;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82d812c0
	ctx.lr = 0x82E44FD0;
	sub_82D812C0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e44ff8
	if (ctx.cr0.eq) goto loc_82E44FF8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,44(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// ble cr6,0x82e44ff8
	if (!ctx.cr6.gt) goto loc_82E44FF8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d844f8
	ctx.lr = 0x82E44FF8;
	sub_82D844F8(ctx, base);
loc_82E44FF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e42588
	ctx.lr = 0x82E45000;
	sub_82E42588(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// b 0x82e450a4
	goto loc_82E450A4;
loc_82E45020:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e455c4
	if (ctx.cr0.eq) goto loc_82E455C4;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82d82468
	ctx.lr = 0x82E45040;
	sub_82D82468(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e455d0
	if (!ctx.cr0.eq) goto loc_82E455D0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge 0x82e4505c
	if (!ctx.cr0.lt) goto loc_82E4505C;
	// lwz r7,112(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
loc_82E4505C:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f3,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d823e8
	ctx.lr = 0x82E45070;
	sub_82D823E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e455d0
	if (!ctx.cr0.eq) goto loc_82E455D0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82d81310
	ctx.lr = 0x82E450A0;
	sub_82D81310(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82E450A4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82e450b4
	if (ctx.cr6.eq) goto loc_82E450B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82e455d0
	goto loc_82E455D0;
loc_82E450B4:
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d84668
	ctx.lr = 0x82E450C0;
	sub_82D84668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e455d0
	if (!ctx.cr0.eq) goto loc_82E455D0;
	// lwz r11,372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e45158
	if (ctx.cr6.eq) goto loc_82E45158;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e45120
	if (ctx.cr0.eq) goto loc_82E45120;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// bl 0x82d853a8
	ctx.lr = 0x82E450EC;
	sub_82D853A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e45120
	if (!ctx.cr0.eq) goto loc_82E45120;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e45120
	if (ctx.cr6.eq) goto loc_82E45120;
	// lis r11,-32028
	ctx.r11.s64 = -2098987008;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14984
	ctx.r5.s64 = ctx.r11.s64 + 14984;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d83950
	ctx.lr = 0x82E45118;
	sub_82D83950(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e455d0
	if (!ctx.cr0.eq) goto loc_82E455D0;
loc_82E45120:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e45130
	if (!ctx.cr0.eq) goto loc_82E45130;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82E45130:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r7,376(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E45158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E45158:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x82d838a0
	ctx.lr = 0x82E45168;
	sub_82D838A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e45178
	if (ctx.cr0.eq) goto loc_82E45178;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e455d0
	if (!ctx.cr6.eq) goto loc_82E455D0;
loc_82E45178:
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r4,r11,18,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// bl 0x82d835f0
	ctx.lr = 0x82E45188;
	sub_82D835F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e45198
	if (ctx.cr0.eq) goto loc_82E45198;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e455d0
	if (!ctx.cr6.eq) goto loc_82E455D0;
loc_82E45198:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e451b8
	if (ctx.cr0.eq) goto loc_82E451B8;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r4,r11,0,29,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
loc_82E451B8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d84448
	ctx.lr = 0x82E451C0;
	sub_82D84448(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e451d0
	if (ctx.cr0.eq) goto loc_82E451D0;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e455d0
	if (!ctx.cr6.eq) goto loc_82E455D0;
loc_82E451D0:
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d84490
	ctx.lr = 0x82E451DC;
	sub_82D84490(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e451ec
	if (ctx.cr0.eq) goto loc_82E451EC;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e455d0
	if (!ctx.cr6.eq) goto loc_82E455D0;
loc_82E451EC:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f30.f64 = double(temp.f32);
	// beq 0x82e453cc
	if (ctx.cr0.eq) goto loc_82E453CC;
	// rlwinm. r11,r10,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e45228
	if (!ctx.cr0.eq) goto loc_82E45228;
	// lfs f2,188(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f1,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d83a78
	ctx.lr = 0x82E45218;
	sub_82D83A78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e45228
	if (ctx.cr0.eq) goto loc_82E45228;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e455d0
	if (!ctx.cr6.eq) goto loc_82E455D0;
loc_82E45228:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,192(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,-18332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18332);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82e45254
	if (!ctx.cr6.eq) goto loc_82E45254;
	// lfs f13,196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82e45254
	if (!ctx.cr6.eq) goto loc_82E45254;
	// lfs f0,200(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82e45290
	if (ctx.cr6.eq) goto loc_82E45290;
loc_82E45254:
	// lfs f3,200(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f3.f64 = double(temp.f32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f2,196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82d83b48
	ctx.lr = 0x82E45264;
	sub_82D83B48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e45274
	if (ctx.cr0.eq) goto loc_82E45274;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e455d0
	if (!ctx.cr6.eq) goto loc_82E455D0;
loc_82E45274:
	// addi r4,r30,168
	ctx.r4.s64 = ctx.r30.s64 + 168;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d83c28
	ctx.lr = 0x82E45280;
	sub_82D83C28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e45290
	if (ctx.cr0.eq) goto loc_82E45290;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e455d0
	if (!ctx.cr6.eq) goto loc_82E455D0;
loc_82E45290:
	// lfs f1,204(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d83ff8
	ctx.lr = 0x82E4529C;
	sub_82D83FF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e452ac
	if (ctx.cr0.eq) goto loc_82E452AC;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e455d0
	if (!ctx.cr6.eq) goto loc_82E455D0;
loc_82E452AC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82e54dc8
	ctx.lr = 0x82E452BC;
	sub_82E54DC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r30,156
	ctx.r5.s64 = ctx.r30.s64 + 156;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lfs f12,116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f0,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82d83998
	ctx.lr = 0x82E45318;
	sub_82D83998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e45328
	if (ctx.cr0.eq) goto loc_82E45328;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e455d0
	if (!ctx.cr6.eq) goto loc_82E455D0;
loc_82E45328:
	// lwz r4,248(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82e45358
	if (ctx.cr0.eq) goto loc_82E45358;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d83810
	ctx.lr = 0x82E4533C;
	sub_82D83810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e45388
	if (ctx.cr0.eq) goto loc_82E45388;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82e45388
	if (ctx.cr6.eq) goto loc_82E45388;
	// cmpwi cr6,r3,78
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 78, ctx.xer);
	// beq cr6,0x82e45388
	if (ctx.cr6.eq) goto loc_82E45388;
	// b 0x82e455d0
	goto loc_82E455D0;
loc_82E45358:
	// lfs f1,252(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bne cr6,0x82e45370
	if (!ctx.cr6.eq) goto loc_82E45370;
	// lfs f0,256(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82e45388
	if (ctx.cr6.eq) goto loc_82E45388;
loc_82E45370:
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f2,256(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e3df58
	ctx.lr = 0x82E45380;
	sub_82E3DF58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e455d0
	if (!ctx.cr0.eq) goto loc_82E455D0;
loc_82E45388:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e453cc
	if (ctx.cr0.eq) goto loc_82E453CC;
	// lfs f1,288(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d83e88
	ctx.lr = 0x82E453A0;
	sub_82D83E88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e453b0
	if (ctx.cr0.eq) goto loc_82E453B0;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e455d0
	if (!ctx.cr6.eq) goto loc_82E455D0;
loc_82E453B0:
	// lfs f1,292(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d83f40
	ctx.lr = 0x82E453BC;
	sub_82D83F40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e453cc
	if (ctx.cr0.eq) goto loc_82E453CC;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e455d0
	if (!ctx.cr6.eq) goto loc_82E455D0;
loc_82E453CC:
	// lfs f0,244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82e453e4
	if (!ctx.cr6.eq) goto loc_82E453E4;
	// lfs f0,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82e45480
	if (ctx.cr6.eq) goto loc_82E45480;
loc_82E453E4:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82E453F4:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82e453f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E453F4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d83858
	ctx.lr = 0x82E4540C;
	sub_82D83858(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e4541c
	if (ctx.cr0.eq) goto loc_82E4541C;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e455d0
	if (!ctx.cr6.eq) goto loc_82E455D0;
loc_82E4541C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f0,6148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// bl 0x82d83810
	ctx.lr = 0x82E45468;
	sub_82D83810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e45480
	if (ctx.cr0.eq) goto loc_82E45480;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82e45480
	if (ctx.cr6.eq) goto loc_82E45480;
	// cmpwi cr6,r3,78
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 78, ctx.xer);
	// bne cr6,0x82e455d0
	if (!ctx.cr6.eq) goto loc_82E455D0;
loc_82E45480:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82e54a10
	ctx.lr = 0x82E4548C;
	sub_82E54A10(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82e54b90
	ctx.lr = 0x82E4549C;
	sub_82E54B90(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stfs f1,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e454e8
	if (!ctx.cr6.eq) goto loc_82E454E8;
	// lfs f8,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f7,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,228(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,224(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,220(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,216(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,212(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,208(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d83310
	ctx.lr = 0x82E454D8;
	sub_82D83310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e454e8
	if (ctx.cr0.eq) goto loc_82E454E8;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e455d0
	if (!ctx.cr6.eq) goto loc_82E455D0;
loc_82E454E8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e45568
	if (ctx.cr0.eq) goto loc_82E45568;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e45568
	if (ctx.cr0.eq) goto loc_82E45568;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x82d84f48
	ctx.lr = 0x82E45518;
	sub_82D84F48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e455d0
	if (!ctx.cr0.eq) goto loc_82E455D0;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e45544
	if (ctx.cr6.lt) goto loc_82E45544;
	// divwu r9,r11,r10
	ctx.r9.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82E45544:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d83750
	ctx.lr = 0x82E45554;
	sub_82D83750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e45564
	if (ctx.cr0.eq) goto loc_82E45564;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e455d0
	if (!ctx.cr6.eq) goto loc_82E455D0;
loc_82E45564:
	// stw r26,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r26.u32);
loc_82E45568:
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82E45578:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82e45578
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E45578;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d83858
	ctx.lr = 0x82E45590;
	sub_82D83858(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e455a8
	if (!ctx.cr0.eq) goto loc_82E455A8;
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// b 0x82e455b0
	goto loc_82E455B0;
loc_82E455A8:
	// li r11,-666
	ctx.r11.s64 = -666;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_82E455B0:
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82e455cc
	goto loc_82E455CC;
loc_82E455C4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82E455CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E455D0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E455E0"))) PPC_WEAK_FUNC(sub_82E455E0);
PPC_FUNC_IMPL(__imp__sub_82E455E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82E455E8;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r15,r18
	ctx.r15.u64 = ctx.r18.u64;
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// lwz r11,312(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 312);
	// mr r14,r28
	ctx.r14.u64 = ctx.r28.u64;
	// rlwinm r10,r11,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// rlwinm r16,r11,0,27,27
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stw r10,312(r25)
	PPC_STORE_U32(ctx.r25.u32 + 312, ctx.r10.u32);
	// rlwinm. r11,r10,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e46120
	if (ctx.cr0.eq) goto loc_82E46120;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82da3de8
	ctx.lr = 0x82E4562C;
	sub_82DA3DE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46124
	if (!ctx.cr0.eq) goto loc_82E46124;
	// lwz r11,316(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bne cr6,0x82e45648
	if (!ctx.cr6.eq) goto loc_82E45648;
	// stw r11,316(r25)
	PPC_STORE_U32(ctx.r25.u32 + 316, ctx.r11.u32);
loc_82E45648:
	// lwz r10,316(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 316);
	// subf. r21,r10,r11
	ctx.r21.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bge 0x82e45658
	if (!ctx.cr0.lt) goto loc_82E45658;
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
loc_82E45658:
	// lwz r10,312(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 312);
	// stw r11,316(r25)
	PPC_STORE_U32(ctx.r25.u32 + 316, ctx.r11.u32);
	// rlwinm. r11,r10,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// bne 0x82e45718
	if (!ctx.cr0.eq) goto loc_82E45718;
	// lha r11,324(r25)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r25.u32 + 324));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e45708
	if (ctx.cr0.eq) goto loc_82E45708;
	// subf r11,r21,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r21.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,324(r25)
	PPC_STORE_U16(ctx.r25.u32 + 324, ctx.r11.u16);
	// bgt 0x82e456d4
	if (ctx.cr0.gt) goto loc_82E456D4;
	// lwz r3,380(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 380);
	// sth r18,324(r25)
	PPC_STORE_U16(ctx.r25.u32 + 324, ctx.r18.u16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e456c4
	if (ctx.cr0.eq) goto loc_82E456C4;
	// rlwinm. r11,r10,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e456ac
	if (ctx.cr0.eq) goto loc_82E456AC;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82e456b8
	goto loc_82E456B8;
loc_82E456AC:
	// lfs f0,96(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82E456B8:
	// bl 0x82d825d0
	ctx.lr = 0x82E456BC;
	sub_82D825D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46124
	if (!ctx.cr0.eq) goto loc_82E46124;
loc_82E456C4:
	// lwz r11,312(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 312);
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e45708
	if (ctx.cr0.eq) goto loc_82E45708;
	// b 0x82e46108
	goto loc_82E46108;
loc_82E456D4:
	// lwz r9,380(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 380);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82e45708
	if (ctx.cr0.eq) goto loc_82E45708;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e3ec80
	ctx.lr = 0x82E456E8;
	sub_82E3EC80(ctx, base);
	// lfs f0,96(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f13,92(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82d825d0
	ctx.lr = 0x82E45700;
	sub_82D825D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46124
	if (!ctx.cr0.eq) goto loc_82E46124;
loc_82E45708:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e3cc40
	ctx.lr = 0x82E45710;
	sub_82E3CC40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46124
	if (!ctx.cr0.eq) goto loc_82E46124;
loc_82E45718:
	// lwz r23,332(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 332);
	// addi r17,r25,332
	ctx.r17.s64 = ctx.r25.s64 + 332;
	// cmplw cr6,r23,r17
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x82e46030
	if (ctx.cr6.eq) goto loc_82E46030;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r19,-31890
	ctx.r19.s64 = -2089943040;
	// lfs f30,22568(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22568);
	ctx.f30.f64 = double(temp.f32);
loc_82E45734:
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e46024
	if (!ctx.cr0.eq) goto loc_82E46024;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e45758
	if (ctx.cr0.eq) goto loc_82E45758;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e3af78
	ctx.lr = 0x82E45750;
	sub_82E3AF78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46124
	if (!ctx.cr0.eq) goto loc_82E46124;
loc_82E45758:
	// lwz r31,84(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// addi r20,r23,84
	ctx.r20.s64 = ctx.r23.s64 + 84;
	// b 0x82e457e4
	goto loc_82E457E4;
loc_82E45764:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x82e457d0
	if (!ctx.cr6.eq) goto loc_82E457D0;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stb r18,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r18.u8);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e457a4
	if (ctx.cr0.eq) goto loc_82E457A4;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// bl 0x82d84170
	ctx.lr = 0x82E4578C;
	sub_82D84170(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e457a4
	if (ctx.cr0.eq) goto loc_82E457A4;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82e457a4
	if (ctx.cr6.eq) goto loc_82E457A4;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x82e46124
	if (!ctx.cr6.eq) goto loc_82E46124;
loc_82E457A4:
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e457b8
	if (ctx.cr0.eq) goto loc_82E457B8;
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// b 0x82e457d0
	goto loc_82E457D0;
loc_82E457B8:
	// lwz r11,24(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82E457D0:
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e457e0
	if (ctx.cr0.eq) goto loc_82E457E0;
	// mr r14,r18
	ctx.r14.u64 = ctx.r18.u64;
loc_82E457E0:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E457E4:
	// cmplw cr6,r31,r20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x82e45764
	if (!ctx.cr6.eq) goto loc_82E45764;
	// lwz r31,0(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r24,72(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 72);
	// b 0x82e45e4c
	goto loc_82E45E4C;
loc_82E457F8:
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// stb r18,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r18.u8);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82e458bc
	if (ctx.cr6.eq) goto loc_82E458BC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f2,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e46dd8
	ctx.lr = 0x82E45820;
	sub_82E46DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46124
	if (!ctx.cr0.eq) goto loc_82E46124;
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e4583c
	if (ctx.cr0.eq) goto loc_82E4583C;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// b 0x82e45878
	goto loc_82E45878;
loc_82E4583C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e45858
	if (!ctx.cr0.eq) goto loc_82E45858;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e45878
	if (ctx.cr0.eq) goto loc_82E45878;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e45878
	if (!ctx.cr0.eq) goto loc_82E45878;
loc_82E45858:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f2,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e46e58
	ctx.lr = 0x82E45870;
	sub_82E46E58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46124
	if (!ctx.cr0.eq) goto loc_82E46124;
loc_82E45878:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e458c0
	if (!ctx.cr0.eq) goto loc_82E458C0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stfs f31,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e458b0
	if (ctx.cr0.eq) goto loc_82E458B0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82e458c0
	if (!ctx.cr6.lt) goto loc_82E458C0;
loc_82E458B0:
	// rlwinm r11,r11,0,25,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE7F;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82e458c0
	goto loc_82E458C0;
loc_82E458BC:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
loc_82E458C0:
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// cntlzw r10,r9
	ctx.r10.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r27,r10,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bne 0x82e458e8
	if (!ctx.cr0.eq) goto loc_82E458E8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82e458f4
	goto loc_82E458F4;
loc_82E458E4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82E458E8:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82e458e4
	if (!ctx.cr0.eq) goto loc_82E458E4;
loc_82E458F4:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e45924
	if (!ctx.cr6.eq) goto loc_82E45924;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e42780
	ctx.lr = 0x82E45910;
	sub_82E42780(ctx, base);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e45970
	if (ctx.cr0.eq) goto loc_82E45970;
loc_82E4591C:
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// b 0x82e45974
	goto loc_82E45974;
loc_82E45924:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e45978
	if (ctx.cr6.eq) goto loc_82E45978;
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e45978
	if (!ctx.cr0.eq) goto loc_82E45978;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e45978
	if (ctx.cr0.eq) goto loc_82E45978;
	// lwz r11,24(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e45978
	if (ctx.cr6.eq) goto loc_82E45978;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e42518
	ctx.lr = 0x82E45958;
	sub_82E42518(ctx, base);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e45970
	if (!ctx.cr0.eq) goto loc_82E45970;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r31,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r31.u32);
	// b 0x82e4591c
	goto loc_82E4591C;
loc_82E45970:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_82E45974:
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
loc_82E45978:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e45ddc
	if (ctx.cr0.eq) goto loc_82E45DDC;
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e45ddc
	if (!ctx.cr0.eq) goto loc_82E45DDC;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stb r18,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r18.u8);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e45a00
	if (ctx.cr0.eq) goto loc_82E45A00;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// bl 0x82d84170
	ctx.lr = 0x82E459A4;
	sub_82D84170(ctx, base);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x82e459c0
	if (ctx.cr6.eq) goto loc_82E459C0;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82e459c0
	if (ctx.cr6.eq) goto loc_82E459C0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e46124
	if (!ctx.cr6.eq) goto loc_82E46124;
	// b 0x82e45a00
	goto loc_82E45A00;
loc_82E459C0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e3a830
	ctx.lr = 0x82E459CC;
	sub_82E3A830(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46124
	if (!ctx.cr0.eq) goto loc_82E46124;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e45a00
	if (ctx.cr6.eq) goto loc_82E45A00;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e459f8
	if (!ctx.cr0.eq) goto loc_82E459F8;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e45a00
	if (ctx.cr0.eq) goto loc_82E45A00;
loc_82E459F8:
	// rlwimi r11,r28,8,23,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0x180) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE7F);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82E45A00:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm. r11,r10,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e45a10
	if (ctx.cr0.eq) goto loc_82E45A10;
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
loc_82E45A10:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e45d54
	if (!ctx.cr0.eq) goto loc_82E45D54;
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e45ce0
	if (!ctx.cr0.eq) goto loc_82E45CE0;
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e45ce0
	if (!ctx.cr0.eq) goto loc_82E45CE0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82e45cd8
	if (!ctx.cr6.lt) goto loc_82E45CD8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi r29,0
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x82e45b8c
	if (!ctx.cr0.gt) goto loc_82E45B8C;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x82e45b8c
	if (ctx.cr6.gt) goto loc_82E45B8C;
	// extsw r10,r21
	ctx.r10.s64 = ctx.r21.s32;
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// beq 0x82e45aa4
	if (ctx.cr0.eq) goto loc_82E45AA4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e45aa4
	if (!ctx.cr0.eq) goto loc_82E45AA4;
	// lfs f13,28(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82E45AA4:
	// lfs f13,308(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f13,f0,f12
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82e45ba8
	if (ctx.cr6.gt) goto loc_82E45BA8;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82e45b08
	if (ctx.cr6.eq) goto loc_82E45B08;
	// bl 0x82cb2308
	ctx.lr = 0x82E45ACC;
	sub_82CB2308(ctx, base);
	// subf r10,r30,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r30.s64;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// divw r9,r3,r10
	ctx.r9.s32 = ctx.r3.s32 / ctx.r10.s32;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// twllei r10,0
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// twlgei r10,-1
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x82e45b14
	goto loc_82E45B14;
loc_82E45B08:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
loc_82E45B14:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82e45ba8
	if (ctx.cr6.gt) goto loc_82E45BA8;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82e45b70
	if (ctx.cr6.eq) goto loc_82E45B70;
	// bl 0x82cb2308
	ctx.lr = 0x82E45B38;
	sub_82CB2308(ctx, base);
	// subf r10,r30,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r30.s64;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r9,r3,r10
	ctx.r9.s32 = ctx.r3.s32 / ctx.r10.s32;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// twllei r10,0
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// twlgei r10,-1
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// b 0x82e45b7c
	goto loc_82E45B7C;
loc_82E45B70:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
loc_82E45B7C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// b 0x82e45ba8
	goto loc_82E45BA8;
loc_82E45B8C:
	// rlwinm. r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e45ba4
	if (!ctx.cr0.eq) goto loc_82E45BA4;
	// ori r11,r10,256
	ctx.r11.u64 = ctx.r10.u64 | 256;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82e45ba8
	goto loc_82E45BA8;
loc_82E45BA4:
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
loc_82E45BA8:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e45c2c
	if (ctx.cr0.eq) goto loc_82E45C2C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x82e45c00
	if (!ctx.cr6.gt) goto loc_82E45C00;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 * 24;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e45bf4
	if (!ctx.cr0.eq) goto loc_82E45BF4;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e45c00
	if (ctx.cr6.lt) goto loc_82E45C00;
	// b 0x82e45bfc
	goto loc_82E45BFC;
loc_82E45BF4:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82e45c00
	if (!ctx.cr6.eq) goto loc_82E45C00;
loc_82E45BFC:
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
loc_82E45C00:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e45c2c
	if (ctx.cr0.eq) goto loc_82E45C2C;
	// lwz r30,120(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
	// b 0x82e45c24
	goto loc_82E45C24;
loc_82E45C14:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e45c34
	if (ctx.cr0.eq) goto loc_82E45C34;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82E45C24:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e45c14
	if (!ctx.cr6.eq) goto loc_82E45C14;
loc_82E45C2C:
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// b 0x82e45d64
	goto loc_82E45D64;
loc_82E45C34:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stb r18,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r18.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x82e44d68
	ctx.lr = 0x82E45C58;
	sub_82E44D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e45c90
	if (!ctx.cr0.eq) goto loc_82E45C90;
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e45d64
	if (!ctx.cr0.eq) goto loc_82E45D64;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// b 0x82e45d64
	goto loc_82E45D64;
loc_82E45C90:
	// cmpwi cr6,r3,54
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 54, ctx.xer);
	// beq cr6,0x82e45cc4
	if (ctx.cr6.eq) goto loc_82E45CC4;
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// beq cr6,0x82e45cc4
	if (ctx.cr6.eq) goto loc_82E45CC4;
	// cmpwi cr6,r3,75
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 75, ctx.xer);
	// bne cr6,0x82e46124
	if (!ctx.cr6.eq) goto loc_82E46124;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stfs f31,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x82e45d1c
	goto loc_82E45D1C;
loc_82E45CC4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stfs f31,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82e45d64
	goto loc_82E45D64;
loc_82E45CD8:
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// b 0x82e45ddc
	goto loc_82E45DDC;
loc_82E45CE0:
	// rlwinm. r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e45d64
	if (!ctx.cr0.eq) goto loc_82E45D64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// bl 0x82e44d68
	ctx.lr = 0x82E45D00;
	sub_82E44D68(ctx, base);
	// cmpwi cr6,r3,54
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 54, ctx.xer);
	// beq cr6,0x82e45d10
	if (ctx.cr6.eq) goto loc_82E45D10;
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// bne cr6,0x82e45d14
	if (!ctx.cr6.eq) goto loc_82E45D14;
loc_82E45D10:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_82E45D14:
	// cmpwi cr6,r3,75
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 75, ctx.xer);
	// bne cr6,0x82e45d48
	if (!ctx.cr6.eq) goto loc_82E45D48;
loc_82E45D1C:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,-4716(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -4716);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e45d64
	if (ctx.cr0.eq) goto loc_82E45D64;
	// lwz r11,312(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 312);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,312(r25)
	PPC_STORE_U32(ctx.r25.u32 + 312, ctx.r11.u32);
	// b 0x82e45d64
	goto loc_82E45D64;
loc_82E45D48:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e46124
	if (!ctx.cr6.eq) goto loc_82E46124;
	// b 0x82e45d64
	goto loc_82E45D64;
loc_82E45D54:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f30,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82E45D64:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82e45dd8
	if (ctx.cr6.eq) goto loc_82E45DD8;
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e45dd8
	if (ctx.cr6.eq) goto loc_82E45DD8;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// lbz r5,81(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e3c108
	ctx.lr = 0x82E45D8C;
	sub_82E3C108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46124
	if (!ctx.cr0.eq) goto loc_82E46124;
	// addi r4,r1,85
	ctx.r4.s64 = ctx.r1.s64 + 85;
	// lwz r3,36(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// bl 0x82d82fd0
	ctx.lr = 0x82E45DA0;
	sub_82D82FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e45db0
	if (ctx.cr0.eq) goto loc_82E45DB0;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e46124
	if (!ctx.cr6.eq) goto loc_82E46124;
loc_82E45DB0:
	// lbz r11,85(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e45dd8
	if (ctx.cr0.eq) goto loc_82E45DD8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,36(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// bl 0x82d82f88
	ctx.lr = 0x82E45DC8;
	sub_82D82F88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e45dd8
	if (ctx.cr0.eq) goto loc_82E45DD8;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e46124
	if (!ctx.cr6.eq) goto loc_82E46124;
loc_82E45DD8:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82E45DDC:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e45e48
	if (ctx.cr0.eq) goto loc_82E45E48;
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e45e30
	if (ctx.cr6.eq) goto loc_82E45E30;
	// lwz r10,372(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 372);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e45e30
	if (ctx.cr0.eq) goto loc_82E45E30;
	// lwz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e45e0c
	if (!ctx.cr0.eq) goto loc_82E45E0C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82E45E0C:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r7,376(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 376);
	// lwz r3,40(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E45E30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E45E30:
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r18,132(r26)
	PPC_STORE_U32(ctx.r26.u32 + 132, ctx.r18.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e3a830
	ctx.lr = 0x82E45E40;
	sub_82E3A830(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46124
	if (!ctx.cr0.eq) goto loc_82E46124;
loc_82E45E48:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E45E4C:
	// cmplw cr6,r31,r20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x82e457f8
	if (!ctx.cr6.eq) goto loc_82E457F8;
	// lwz r29,0(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x82e46024
	if (ctx.cr6.eq) goto loc_82E46024;
loc_82E45E60:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e46014
	if (ctx.cr0.eq) goto loc_82E46014;
	// lwz r31,120(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r28,r29,120
	ctx.r28.s64 = ctx.r29.s64 + 120;
	// b 0x82e4600c
	goto loc_82E4600C;
loc_82E45E78:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e46008
	if (ctx.cr0.eq) goto loc_82E46008;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x82e45f20
	if (!ctx.cr6.eq) goto loc_82E45F20;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x82e44d68
	ctx.lr = 0x82E45EA8;
	sub_82E44D68(ctx, base);
	// cmpwi cr6,r3,54
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 54, ctx.xer);
	// beq cr6,0x82e45eb8
	if (ctx.cr6.eq) goto loc_82E45EB8;
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// bne cr6,0x82e45ebc
	if (!ctx.cr6.eq) goto loc_82E45EBC;
loc_82E45EB8:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_82E45EBC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e45ecc
	if (ctx.cr6.eq) goto loc_82E45ECC;
	// cmpwi cr6,r3,75
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 75, ctx.xer);
	// bne cr6,0x82e46124
	if (!ctx.cr6.eq) goto loc_82E46124;
loc_82E45ECC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e46004
	if (ctx.cr6.eq) goto loc_82E46004;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x82d82fd0
	ctx.lr = 0x82E45EE4;
	sub_82D82FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e45ef4
	if (ctx.cr0.eq) goto loc_82E45EF4;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e46124
	if (!ctx.cr6.eq) goto loc_82E46124;
loc_82E45EF4:
	// lbz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e46004
	if (ctx.cr0.eq) goto loc_82E46004;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82d82f88
	ctx.lr = 0x82E45F0C;
	sub_82D82F88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e46004
	if (ctx.cr0.eq) goto loc_82E46004;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82e46124
	if (!ctx.cr6.eq) goto loc_82E46124;
	// b 0x82e46004
	goto loc_82E46004;
loc_82E45F20:
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e3c108
	ctx.lr = 0x82E45F2C;
	sub_82E3C108(ctx, base);
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82e45f50
	if (ctx.cr6.eq) goto loc_82E45F50;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x82e45f50
	if (ctx.cr6.eq) goto loc_82E45F50;
	// cmpwi cr6,r3,37
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 37, ctx.xer);
	// beq cr6,0x82e45f50
	if (ctx.cr6.eq) goto loc_82E45F50;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e46124
	if (!ctx.cr6.eq) goto loc_82E46124;
	// b 0x82e45f54
	goto loc_82E45F54;
loc_82E45F50:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82E45F54:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e45f94
	if (!ctx.cr0.eq) goto loc_82E45F94;
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82d84170
	ctx.lr = 0x82E45F68;
	sub_82D84170(ctx, base);
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82e45f84
	if (ctx.cr6.eq) goto loc_82E45F84;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x82e45f84
	if (ctx.cr6.eq) goto loc_82E45F84;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e46124
	if (!ctx.cr6.eq) goto loc_82E46124;
	// b 0x82e45f88
	goto loc_82E45F88;
loc_82E45F84:
	// stb r18,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r18.u8);
loc_82E45F88:
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82E45F94:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e46000
	if (ctx.cr0.eq) goto loc_82E46000;
	// lwz r10,372(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 372);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e45fdc
	if (ctx.cr0.eq) goto loc_82E45FDC;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e45fb8
	if (!ctx.cr0.eq) goto loc_82E45FB8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82E45FB8:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r7,376(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 376);
	// lwz r3,40(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E45FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E45FDC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82e42308
	ctx.lr = 0x82E45FF0;
	sub_82E42308(ctx, base);
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// b 0x82e46004
	goto loc_82E46004;
loc_82E46000:
	// li r15,1
	ctx.r15.s64 = 1;
loc_82E46004:
	// li r22,1
	ctx.r22.s64 = 1;
loc_82E46008:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E4600C:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82e45e78
	if (!ctx.cr6.eq) goto loc_82E45E78;
loc_82E46014:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x82e45e60
	if (!ctx.cr6.eq) goto loc_82E45E60;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82E46024:
	// lwz r23,0(r23)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r23,r17
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x82e45734
	if (!ctx.cr6.eq) goto loc_82E45734;
loc_82E46030:
	// lwz r11,312(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 312);
	// clrlwi. r9,r15,24
	ctx.r9.u64 = ctx.r15.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r10,r11,0,14,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// stw r10,312(r25)
	PPC_STORE_U32(ctx.r25.u32 + 312, ctx.r10.u32);
	// bne 0x82e4604c
	if (!ctx.cr0.eq) goto loc_82E4604C;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82E4604C:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// andc r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r16.u64;
	// stw r11,312(r25)
	PPC_STORE_U32(ctx.r25.u32 + 312, ctx.r11.u32);
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e46134
	if (ctx.cr0.eq) goto loc_82E46134;
	// clrlwi. r10,r22,24
	ctx.r10.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e46134
	if (!ctx.cr0.eq) goto loc_82E46134;
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e46134
	if (!ctx.cr0.eq) goto loc_82E46134;
	// clrlwi. r10,r14,24
	ctx.r10.u64 = ctx.r14.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e46134
	if (ctx.cr0.eq) goto loc_82E46134;
	// lwz r31,344(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 344);
	// addi r30,r25,344
	ctx.r30.s64 = ctx.r25.s64 + 344;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// b 0x82e460f8
	goto loc_82E460F8;
loc_82E46088:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e46098
	if (!ctx.cr6.eq) goto loc_82E46098;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_82E46098:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e460f4
	if (ctx.cr0.eq) goto loc_82E460F4;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82e460f4
	if (!ctx.cr0.gt) goto loc_82E460F4;
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82E460C0:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82e460e0
	if (ctx.cr6.gt) goto loc_82E460E0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e460c0
	if (ctx.cr6.lt) goto loc_82E460C0;
	// b 0x82e460f4
	goto loc_82E460F4;
loc_82E460E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E460F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
loc_82E460F4:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E460F8:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82e46088
	if (!ctx.cr6.eq) goto loc_82E46088;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e46120
	if (ctx.cr0.eq) goto loc_82E46120;
loc_82E46108:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E46120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E46120:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E46124:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82E46134:
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4617c
	if (ctx.cr0.eq) goto loc_82E4617C;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e4617c
	if (!ctx.cr0.eq) goto loc_82E4617C;
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e4617c
	if (!ctx.cr0.eq) goto loc_82E4617C;
	// clrlwi. r10,r22,24
	ctx.r10.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e4617c
	if (!ctx.cr0.eq) goto loc_82E4617C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4616C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,312(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 312);
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r11,312(r25)
	PPC_STORE_U32(ctx.r25.u32 + 312, ctx.r11.u32);
	// b 0x82e46120
	goto loc_82E46120;
loc_82E4617C:
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e46120
	if (ctx.cr0.eq) goto loc_82E46120;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4619C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,312(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 312);
	// li r3,84
	ctx.r3.s64 = 84;
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r11,312(r25)
	PPC_STORE_U32(ctx.r25.u32 + 312, ctx.r11.u32);
	// b 0x82e46124
	goto loc_82E46124;
}

__attribute__((alias("__imp__sub_82E461B0"))) PPC_WEAK_FUNC(sub_82E461B0);
PPC_FUNC_IMPL(__imp__sub_82E461B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E461B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e46210
	if (!ctx.cr6.gt) goto loc_82E46210;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E461D8:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e461fc
	if (ctx.cr6.eq) goto loc_82E461FC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82e461b0
	ctx.lr = 0x82E461F4;
	sub_82E461B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46268
	if (!ctx.cr0.eq) goto loc_82E46268;
loc_82E461FC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e461d8
	if (ctx.cr6.lt) goto loc_82E461D8;
loc_82E46210:
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e46264
	if (ctx.cr0.eq) goto loc_82E46264;
	// lwz r31,344(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// addi r29,r30,344
	ctx.r29.s64 = ctx.r30.s64 + 344;
	// b 0x82e4624c
	goto loc_82E4624C;
loc_82E46228:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x82e46238
	if (!ctx.cr6.eq) goto loc_82E46238;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E46238:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82e479e0
	ctx.lr = 0x82E46240;
	sub_82E479E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46268
	if (!ctx.cr0.eq) goto loc_82E46268;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E4624C:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e46228
	if (!ctx.cr6.eq) goto loc_82E46228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e455e0
	ctx.lr = 0x82E4625C;
	sub_82E455E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46268
	if (!ctx.cr0.eq) goto loc_82E46268;
loc_82E46264:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E46268:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E46270"))) PPC_WEAK_FUNC(sub_82E46270);
PPC_FUNC_IMPL(__imp__sub_82E46270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x82E46278;
	__savegprlr_18(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e4629c
	if (ctx.cr6.eq) goto loc_82E4629C;
	// lwz r31,68(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
loc_82E4629C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e462b0
	if (!ctx.cr6.eq) goto loc_82E462B0;
	// li r3,33
	ctx.r3.s64 = 33;
loc_82E462A8:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82E462B0:
	// lwz r9,68(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e462d0
	if (ctx.cr6.lt) goto loc_82E462D0;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
loc_82E462C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,68(r27)
	PPC_STORE_U32(ctx.r27.u32 + 68, ctx.r11.u32);
	// b 0x82e462a8
	goto loc_82E462A8;
loc_82E462D0:
	// addi r20,r27,32
	ctx.r20.s64 = ctx.r27.s64 + 32;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// b 0x82e462ec
	goto loc_82E462EC;
loc_82E462E4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82E462EC:
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x82e462e4
	if (!ctx.cr6.eq) goto loc_82E462E4;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82e462c4
	if (!ctx.cr6.lt) goto loc_82E462C4;
	// clrlwi. r11,r19,31
	ctx.r11.u64 = ctx.r19.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e46364
	if (ctx.cr0.eq) goto loc_82E46364;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e4a0a0
	ctx.lr = 0x82E46314;
	sub_82E4A0A0(ctx, base);
	// bl 0x82e43c98
	ctx.lr = 0x82E46318;
	sub_82E43C98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e462a8
	if (!ctx.cr0.eq) goto loc_82E462A8;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e3a0c8
	ctx.lr = 0x82E4633C;
	sub_82E3A0C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e46354
	if (ctx.cr0.eq) goto loc_82E46354;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82e462a8
	if (!ctx.cr6.eq) goto loc_82E462A8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// b 0x82e462a8
	goto loc_82E462A8;
loc_82E46354:
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r3,-4724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4724);
	// bl 0x82dec790
	ctx.lr = 0x82E46360;
	sub_82DEC790(ctx, base);
	// b 0x82e462a8
	goto loc_82E462A8;
loc_82E46364:
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r18,-4740(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4740);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82da41c0
	ctx.lr = 0x82E46374;
	sub_82DA41C0(ctx, base);
	// lis r22,-31909
	ctx.r22.s64 = -2091188224;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r23,r11,22184
	ctx.r23.s64 = ctx.r11.s64 + 22184;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,19872(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 19872);
	// li r6,1982
	ctx.r6.s64 = 1982;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d85f40
	ctx.lr = 0x82E463A0;
	sub_82D85F40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e463d8
	if (ctx.cr0.eq) goto loc_82E463D8;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r21,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r21.u32);
	// stw r21,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r21.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stb r21,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r21.u8);
	// stw r21,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r21.u32);
	// stw r21,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r21.u32);
	// b 0x82e463dc
	goto loc_82E463DC;
loc_82E463D8:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82E463DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e463f8
	if (!ctx.cr6.eq) goto loc_82E463F8;
loc_82E463E4:
	// li r30,42
	ctx.r30.s64 = 42;
loc_82E463E8:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82da4200
	ctx.lr = 0x82E463F0;
	sub_82DA4200(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82e462a8
	goto loc_82E462A8;
loc_82E463F8:
	// rlwinm. r11,r29,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// beq 0x82e46408
	if (ctx.cr0.eq) goto loc_82E46408;
	// ori r19,r19,1
	ctx.r19.u64 = ctx.r19.u64 | 1;
loc_82E46408:
	// rlwinm r11,r29,0,16,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// li r29,23
	ctx.r29.s64 = 23;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// addi r26,r1,88
	ctx.r26.s64 = ctx.r1.s64 + 88;
	// lis r25,-31890
	ctx.r25.s64 = -2089943040;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82E46430:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82e464bc
	if (ctx.cr6.eq) goto loc_82E464BC;
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
	// stw r21,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r21.u32);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82e464ac
	if (ctx.cr0.eq) goto loc_82E464AC;
	// li r5,108
	ctx.r5.s64 = 108;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82cb16f0
	ctx.lr = 0x82E4645C;
	sub_82CB16F0(ctx, base);
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// li r11,108
	ctx.r11.s64 = 108;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// lwz r11,-4716(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4716);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// ori r5,r11,2
	ctx.r5.u64 = ctx.r11.u64 | 2;
	// bl 0x82d81020
	ctx.lr = 0x82E4649C;
	sub_82D81020(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82e464ac
	if (ctx.cr0.eq) goto loc_82E464AC;
	// cmpwi cr6,r29,23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 23, ctx.xer);
	// bne cr6,0x82e464f0
	if (!ctx.cr6.eq) goto loc_82E464F0;
loc_82E464AC:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// blt cr6,0x82e46430
	if (ctx.cr6.lt) goto loc_82E46430;
loc_82E464BC:
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82e464f0
	if (ctx.cr0.eq) goto loc_82E464F0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E464E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e46504
	if (ctx.cr0.eq) goto loc_82E46504;
loc_82E464E8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e463e8
	goto loc_82E463E8;
loc_82E464F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e39d30
	ctx.lr = 0x82E464FC;
	sub_82E39D30(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82e463e8
	goto loc_82E463E8;
loc_82E46504:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,0,27,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x60;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82da0168
	ctx.lr = 0x82E4652C;
	sub_82DA0168(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e464e8
	if (!ctx.cr0.eq) goto loc_82E464E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4654C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e464e8
	if (!ctx.cr0.eq) goto loc_82E464E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e46594
	if (!ctx.cr6.gt) goto loc_82E46594;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82E46568:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82da0168
	ctx.lr = 0x82E46578;
	sub_82DA0168(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e464e8
	if (!ctx.cr0.eq) goto loc_82E464E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e46568
	if (ctx.cr6.lt) goto loc_82E46568;
loc_82E46594:
	// clrlwi. r11,r19,31
	ctx.r11.u64 = ctx.r19.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4661c
	if (ctx.cr0.eq) goto loc_82E4661C;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2075
	ctx.r6.s64 = 2075;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,392
	ctx.r4.s64 = 392;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r11,19872(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 19872);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d862b0
	ctx.lr = 0x82E465C4;
	sub_82D862B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 264, ctx.r3.u32);
	// beq 0x82e463e4
	if (ctx.cr0.eq) goto loc_82E463E4;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e4661c
	if (!ctx.cr6.gt) goto loc_82E4661C;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_82E465E4:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e46608
	if (ctx.cr0.eq) goto loc_82E46608;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r7,264(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// oris r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 65536;
	// stw r7,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r7.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
loc_82E46608:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e465e4
	if (ctx.cr6.lt) goto loc_82E465E4;
loc_82E4661C:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// stw r20,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r27)
	PPC_STORE_U32(ctx.r27.u32 + 68, ctx.r11.u32);
	// b 0x82e463e8
	goto loc_82E463E8;
}

__attribute__((alias("__imp__sub_82E46648"))) PPC_WEAK_FUNC(sub_82E46648);
PPC_FUNC_IMPL(__imp__sub_82E46648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82E46650;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e466bc
	if (ctx.cr0.eq) goto loc_82E466BC;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e466a4
	if (!ctx.cr6.gt) goto loc_82E466A4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E46678:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82e46648
	ctx.lr = 0x82E46688;
	sub_82E46648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e466b4
	if (!ctx.cr0.eq) goto loc_82E466B4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e46678
	if (ctx.cr6.lt) goto loc_82E46678;
loc_82E466A4:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
loc_82E466B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E466B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82E466BC:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e466b0
	if (!ctx.cr0.eq) goto loc_82E466B0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e466a4
	if (!ctx.cr6.gt) goto loc_82E466A4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E466E0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// lwzx r25,r10,r30
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// rlwinm. r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e46784
	if (ctx.cr0.eq) goto loc_82E46784;
	// lwz r11,396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add. r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble 0x82e46784
	if (!ctx.cr0.gt) goto loc_82E46784;
	// rlwinm r26,r23,0,30,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
loc_82E4671C:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82e46734
	if (ctx.cr6.lt) goto loc_82E46734;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82e46738
	if (ctx.cr0.eq) goto loc_82E46738;
loc_82E46734:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82E46738:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// or r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bne cr6,0x82e467a0
	if (!ctx.cr6.eq) goto loc_82E467A0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e46270
	ctx.lr = 0x82E46770;
	sub_82E46270(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e466b4
	if (!ctx.cr0.eq) goto loc_82E466B4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82e4671c
	if (ctx.cr6.lt) goto loc_82E4671C;
loc_82E46784:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e466e0
	if (ctx.cr6.lt) goto loc_82E466E0;
	// b 0x82e466a4
	goto loc_82E466A4;
loc_82E467A0:
	// li r3,24
	ctx.r3.s64 = 24;
	// b 0x82e466b4
	goto loc_82E466B4;
}

__attribute__((alias("__imp__sub_82E467A8"))) PPC_WEAK_FUNC(sub_82E467A8);
PPC_FUNC_IMPL(__imp__sub_82E467A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E467B0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e467d0
	if (!ctx.cr6.eq) goto loc_82E467D0;
	// li r3,82
	ctx.r3.s64 = 82;
	// b 0x82e46b08
	goto loc_82E46B08;
loc_82E467D0:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e46840
	if (ctx.cr0.eq) goto loc_82E46840;
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e467fc
	if (ctx.cr0.eq) goto loc_82E467FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e42878
	ctx.lr = 0x82E467F4;
	sub_82E42878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46b08
	if (!ctx.cr0.eq) goto loc_82E46B08;
loc_82E467FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E46814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46b08
	if (!ctx.cr0.eq) goto loc_82E46B08;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e46b08
	if (!ctx.cr0.eq) goto loc_82E46B08;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e42878
	ctx.lr = 0x82E46838;
	sub_82E42878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46b08
	if (!ctx.cr0.eq) goto loc_82E46B08;
loc_82E46840:
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4685c
	if (ctx.cr0.eq) goto loc_82E4685C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e55680
	ctx.lr = 0x82E46854;
	sub_82E55680(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46b08
	if (!ctx.cr0.eq) goto loc_82E46B08;
loc_82E4685C:
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e46878
	if (!ctx.cr6.eq) goto loc_82E46878;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e42b30
	ctx.lr = 0x82E46870;
	sub_82E42B30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46b08
	if (!ctx.cr0.eq) goto loc_82E46B08;
loc_82E46878:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e42cc8
	ctx.lr = 0x82E46880;
	sub_82E42CC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46b08
	if (!ctx.cr0.eq) goto loc_82E46B08;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// rlwinm r4,r11,19,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// bl 0x82d827a0
	ctx.lr = 0x82E46898;
	sub_82D827A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46b08
	if (!ctx.cr0.eq) goto loc_82E46B08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e3f338
	ctx.lr = 0x82E468A8;
	sub_82E3F338(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// stfs f1,308(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// addi r8,r31,332
	ctx.r8.s64 = ctx.r31.s64 + 332;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f31,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82e4693c
	goto loc_82E4693C;
loc_82E468C4:
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// addi r9,r10,84
	ctx.r9.s64 = ctx.r10.s64 + 84;
	// b 0x82e4690c
	goto loc_82E4690C;
loc_82E468D0:
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r12,-394
	ctx.r12.s64 = -394;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f31,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// and r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 & ctx.r12.u64;
	// stw r27,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r27.u32);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x82e46908
	if (!ctx.cr6.eq) goto loc_82E46908;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r7,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
loc_82E46908:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E4690C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e468d0
	if (!ctx.cr6.eq) goto loc_82E468D0;
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// addi r9,r10,96
	ctx.r9.s64 = ctx.r10.s64 + 96;
	// b 0x82e46930
	goto loc_82E46930;
loc_82E46920:
	// lhz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// sth r7,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r7.u16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E46930:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82e46920
	if (!ctx.cr6.eq) goto loc_82E46920;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82E4693C:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82e468c4
	if (!ctx.cr6.eq) goto loc_82E468C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e3cf48
	ctx.lr = 0x82E46950;
	sub_82E3CF48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46b08
	if (!ctx.cr0.eq) goto loc_82E46B08;
	// lwz r29,344(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r28,r31,344
	ctx.r28.s64 = ctx.r31.s64 + 344;
	// b 0x82e469ec
	goto loc_82E469EC;
loc_82E46964:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r29,-4
	ctx.r30.s64 = ctx.r29.s64 + -4;
	// bne cr6,0x82e46974
	if (!ctx.cr6.eq) goto loc_82E46974;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82E46974:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r27,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r27.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm. r10,r10,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e469b8
	if (ctx.cr0.eq) goto loc_82E469B8;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82e469b8
	if (ctx.cr6.eq) goto loc_82E469B8;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e469b8
	if (!ctx.cr0.eq) goto loc_82E469B8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E469B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E469B8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm. r11,r11,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e469dc
	if (ctx.cr0.eq) goto loc_82E469DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e479e0
	ctx.lr = 0x82E469D4;
	sub_82E479E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e46b08
	if (!ctx.cr0.eq) goto loc_82E46B08;
loc_82E469DC:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r11,r11,0,31,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82E469EC:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82e46964
	if (!ctx.cr6.eq) goto loc_82E46964;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stw r27,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r27.u32);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e46a44
	if (!ctx.cr0.eq) goto loc_82E46A44;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e46a2c
	if (ctx.cr0.eq) goto loc_82E46A2C;
	// lhz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82E46A2C:
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e46a44
	if (ctx.cr0.eq) goto loc_82E46A44;
	// lhz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_82E46A44:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lhz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 320);
	// rlwinm r11,r11,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// ori r9,r11,4096
	ctx.r9.u64 = ctx.r11.u64 | 4096;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// stw r9,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r9.u32);
	// lwz r8,19872(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r8,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r11,19872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19872);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r27,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r27.u32);
	// stw r27,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r27.u32);
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// beq 0x82e46aa8
	if (ctx.cr0.eq) goto loc_82E46AA8;
	// oris r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 | 2097152;
	// sth r10,324(r31)
	PPC_STORE_U16(ctx.r31.u32 + 324, ctx.r10.u16);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// b 0x82e46aac
	goto loc_82E46AAC;
loc_82E46AA8:
	// sth r27,324(r31)
	PPC_STORE_U16(ctx.r31.u32 + 324, ctx.r27.u16);
loc_82E46AAC:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// stw r31,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r31.u32);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e46b00
	if (ctx.cr0.eq) goto loc_82E46B00;
	// lwz r7,376(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E46B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E46B00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e455e0
	ctx.lr = 0x82E46B08;
	sub_82E455E0(ctx, base);
loc_82E46B08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E46B14"))) PPC_WEAK_FUNC(sub_82E46B14);
PPC_FUNC_IMPL(__imp__sub_82E46B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E46B18"))) PPC_WEAK_FUNC(sub_82E46B18);
PPC_FUNC_IMPL(__imp__sub_82E46B18) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82e46b28
	if (!ctx.cr6.eq) goto loc_82E46B28;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82E46B28:
	// rlwinm r9,r3,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm. r11,r4,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0xFFFFFC00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt 0x82e46b78
	if (ctx.cr0.lt) goto loc_82E46B78;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 10;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r10,r10,804
	ctx.r10.s64 = ctx.r10.s64 * 804;
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// srawi r10,r10,10
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 10;
	// twlgei r11,-1
	// subfic r11,r10,804
	ctx.xer.ca = ctx.r10.u32 <= 804;
	ctx.r11.s64 = 804 - ctx.r10.s64;
	// b 0x82e46ba4
	goto loc_82E46BA4;
loc_82E46B78:
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r8,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 10;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r10,r10,804
	ctx.r10.s64 = ctx.r10.s64 * 804;
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// srawi r10,r10,10
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 10;
	// twlgei r11,-1
	// subfic r11,r10,2412
	ctx.xer.ca = ctx.r10.u32 <= 2412;
	ctx.r11.s64 = 2412 - ctx.r10.s64;
loc_82E46BA4:
	// twllei r8,0
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82e46bb4
	if (!ctx.cr6.lt) goto loc_82E46BB4;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82E46BB4:
	// mulli r11,r11,180
	ctx.r11.s64 = ctx.r11.s64 * 180;
	// li r10,3216
	ctx.r10.s64 = 3216;
	// divw. r3,r11,r10
	ctx.r3.s32 = ctx.r11.s32 / ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82e46bcc
	if (!ctx.cr0.lt) goto loc_82E46BCC;
	// addi r3,r3,360
	ctx.r3.s64 = ctx.r3.s64 + 360;
	// blr 
	return;
loc_82E46BCC:
	// cmpwi cr6,r3,360
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 360, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r3,r3,-360
	ctx.r3.s64 = ctx.r3.s64 + -360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E46BDC"))) PPC_WEAK_FUNC(sub_82E46BDC);
PPC_FUNC_IMPL(__imp__sub_82E46BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E46BE0"))) PPC_WEAK_FUNC(sub_82E46BE0);
PPC_FUNC_IMPL(__imp__sub_82E46BE0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq cr6,0x82e46c70
	if (ctx.cr6.eq) goto loc_82E46C70;
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e46c6c
	if (ctx.cr0.eq) goto loc_82E46C6C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,38
	ctx.r6.s64 = 38;
	// addi r5,r11,22584
	ctx.r5.s64 = ctx.r11.s64 + 22584;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-4716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e39480
	ctx.lr = 0x82E46C58;
	sub_82E39480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// bne 0x82e46c70
	if (!ctx.cr0.eq) goto loc_82E46C70;
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e46c74
	goto loc_82E46C74;
loc_82E46C6C:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_82E46C70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E46C74:
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

__attribute__((alias("__imp__sub_82E46C88"))) PPC_WEAK_FUNC(sub_82E46C88);
PPC_FUNC_IMPL(__imp__sub_82E46C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82e46cbc
	if (ctx.cr6.lt) goto loc_82E46CBC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82E46CBC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82e46cd4
	if (ctx.cr6.gt) goto loc_82E46CD4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82E46CD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E46CE0"))) PPC_WEAK_FUNC(sub_82E46CE0);
PPC_FUNC_IMPL(__imp__sub_82E46CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82e46cf0
	if (ctx.cr6.eq) goto loc_82E46CF0;
	// stb r10,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r10.u8);
loc_82E46CF0:
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bge cr6,0x82e46d5c
	if (!ctx.cr6.lt) goto loc_82E46D5C;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r9,28(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e46dcc
	if (!ctx.cr6.gt) goto loc_82E46DCC;
loc_82E46D0C:
	// lwz r9,24(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x82e46d38
	if (ctx.cr6.lt) goto loc_82E46D38;
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bgt cr6,0x82e46d38
	if (ctx.cr6.gt) goto loc_82E46D38;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e46d54
	if (ctx.cr0.eq) goto loc_82E46D54;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
loc_82E46D38:
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e46d0c
	if (ctx.cr6.lt) goto loc_82E46D0C;
	// b 0x82e46dcc
	goto loc_82E46DCC;
loc_82E46D54:
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// b 0x82e46db0
	goto loc_82E46DB0;
loc_82E46D5C:
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82e46dcc
	if (ctx.cr0.lt) goto loc_82E46DCC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E46D70:
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x82e46d9c
	if (ctx.cr6.gt) goto loc_82E46D9C;
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// blt cr6,0x82e46d9c
	if (ctx.cr6.lt) goto loc_82E46D9C;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e46dac
	if (ctx.cr0.eq) goto loc_82E46DAC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
loc_82E46D9C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// bge 0x82e46d70
	if (!ctx.cr0.lt) goto loc_82E46D70;
	// b 0x82e46dcc
	goto loc_82E46DCC;
loc_82E46DAC:
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
loc_82E46DB0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// beq cr6,0x82e46dcc
	if (ctx.cr6.eq) goto loc_82E46DCC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
loc_82E46DCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E46DD4"))) PPC_WEAK_FUNC(sub_82E46DD4);
PPC_FUNC_IMPL(__imp__sub_82E46DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E46DD8"))) PPC_WEAK_FUNC(sub_82E46DD8);
PPC_FUNC_IMPL(__imp__sub_82E46DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82e46e4c
	if (ctx.cr6.eq) goto loc_82E46E4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x82e46e4c
	if (ctx.cr6.lt) goto loc_82E46E4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// fadds f12,f1,f2
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82e46e28
	if (!ctx.cr6.eq) goto loc_82E46E28;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x82e46e3c
	if (ctx.cr6.lt) goto loc_82E46E3C;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82e46e40
	if (!ctx.cr6.gt) goto loc_82E46E40;
	// b 0x82e46e3c
	goto loc_82E46E3C;
loc_82E46E28:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x82e46e3c
	if (ctx.cr6.lt) goto loc_82E46E3C;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82e46e40
	if (ctx.cr6.lt) goto loc_82E46E40;
loc_82E46E3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E46E40:
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E46E4C:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E46E54"))) PPC_WEAK_FUNC(sub_82E46E54);
PPC_FUNC_IMPL(__imp__sub_82E46E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E46E58"))) PPC_WEAK_FUNC(sub_82E46E58);
PPC_FUNC_IMPL(__imp__sub_82E46E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82e46ee0
	if (ctx.cr6.eq) goto loc_82E46EE0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x82e46ee0
	if (ctx.cr6.lt) goto loc_82E46EE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82e46e94
	if (!ctx.cr6.lt) goto loc_82E46E94;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82e46e98
	goto loc_82E46E98;
loc_82E46E94:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82E46E98:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e46ebc
	if (ctx.cr0.eq) goto loc_82E46EBC;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82e46ed0
	if (!ctx.cr6.gt) goto loc_82E46ED0;
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82e46ed8
	if (!ctx.cr6.gt) goto loc_82E46ED8;
	// b 0x82e46ed0
	goto loc_82E46ED0;
loc_82E46EBC:
	// fadds f12,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82e46ed8
	if (!ctx.cr6.gt) goto loc_82E46ED8;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgt cr6,0x82e46ed8
	if (ctx.cr6.gt) goto loc_82E46ED8;
loc_82E46ED0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
loc_82E46ED8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E46EE0:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E46EE8"))) PPC_WEAK_FUNC(sub_82E46EE8);
PPC_FUNC_IMPL(__imp__sub_82E46EE8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e46f34
	if (ctx.cr6.eq) goto loc_82E46F34;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82e46f00
	if (!ctx.cr6.eq) goto loc_82E46F00;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82E46F00:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,344
	ctx.r10.s64 = ctx.r11.s64 + 344;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82e46f24
	goto loc_82E46F24;
loc_82E46F14:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e46f30
	if (ctx.cr6.eq) goto loc_82E46F30;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82E46F24:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e46f14
	if (!ctx.cr6.eq) goto loc_82E46F14;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82E46F30:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
loc_82E46F34:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e46f48
	if (ctx.cr6.eq) goto loc_82E46F48;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82E46F48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E46F50"))) PPC_WEAK_FUNC(sub_82E46F50);
PPC_FUNC_IMPL(__imp__sub_82E46F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e46f68
	if (!ctx.cr6.eq) goto loc_82E46F68;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_82E46F68:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e46f78
	if (!ctx.cr6.eq) goto loc_82E46F78;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E46F78:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E46F9C"))) PPC_WEAK_FUNC(sub_82E46F9C);
PPC_FUNC_IMPL(__imp__sub_82E46F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E46FA0"))) PPC_WEAK_FUNC(sub_82E46FA0);
PPC_FUNC_IMPL(__imp__sub_82E46FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e46fb8
	if (!ctx.cr6.eq) goto loc_82E46FB8;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_82E46FB8:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x82e46fcc
	if (ctx.cr6.eq) goto loc_82E46FCC;
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82E46FCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E46FD4"))) PPC_WEAK_FUNC(sub_82E46FD4);
PPC_FUNC_IMPL(__imp__sub_82E46FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E46FD8"))) PPC_WEAK_FUNC(sub_82E46FD8);
PPC_FUNC_IMPL(__imp__sub_82E46FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e46fe8
	if (!ctx.cr6.eq) goto loc_82E46FE8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E46FE8:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E46FFC"))) PPC_WEAK_FUNC(sub_82E46FFC);
PPC_FUNC_IMPL(__imp__sub_82E46FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E47000"))) PPC_WEAK_FUNC(sub_82E47000);
PPC_FUNC_IMPL(__imp__sub_82E47000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e47018
	if (!ctx.cr6.eq) goto loc_82E47018;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_82E47018:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x82e4703c
	if (ctx.cr6.eq) goto loc_82E4703C;
	// stfs f1,20(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e4703c
	if (ctx.cr0.eq) goto loc_82E4703C;
	// b 0x82e455e0
	sub_82E455E0(ctx, base);
	return;
loc_82E4703C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E47044"))) PPC_WEAK_FUNC(sub_82E47044);
PPC_FUNC_IMPL(__imp__sub_82E47044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E47048"))) PPC_WEAK_FUNC(sub_82E47048);
PPC_FUNC_IMPL(__imp__sub_82E47048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e47058
	if (!ctx.cr6.eq) goto loc_82E47058;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E47058:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E4706C"))) PPC_WEAK_FUNC(sub_82E4706C);
PPC_FUNC_IMPL(__imp__sub_82E4706C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E47070"))) PPC_WEAK_FUNC(sub_82E47070);
PPC_FUNC_IMPL(__imp__sub_82E47070) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E47080"))) PPC_WEAK_FUNC(sub_82E47080);
PPC_FUNC_IMPL(__imp__sub_82E47080) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e47090
	if (!ctx.cr6.eq) goto loc_82E47090;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E47090:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E470A0"))) PPC_WEAK_FUNC(sub_82E470A0);
PPC_FUNC_IMPL(__imp__sub_82E470A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e470bc
	if (!ctx.cr6.eq) goto loc_82E470BC;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_82E470BC:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E470D0"))) PPC_WEAK_FUNC(sub_82E470D0);
PPC_FUNC_IMPL(__imp__sub_82E470D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e470e4
	if (ctx.cr6.eq) goto loc_82E470E4;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82E470E4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82e470f8
	if (ctx.cr6.eq) goto loc_82E470F8;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82E470F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E47100"))) PPC_WEAK_FUNC(sub_82E47100);
PPC_FUNC_IMPL(__imp__sub_82E47100) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e4715c
	if (!ctx.cr6.gt) goto loc_82E4715C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E47118:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82e47144
	if (ctx.cr0.eq) goto loc_82E47144;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e47144
	if (ctx.cr6.eq) goto loc_82E47144;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lhz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 28);
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// sth r8,28(r10)
	PPC_STORE_U16(ctx.r10.u32 + 28, ctx.r8.u16);
loc_82E47144:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e47118
	if (ctx.cr6.lt) goto loc_82E47118;
loc_82E4715C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E47164"))) PPC_WEAK_FUNC(sub_82E47164);
PPC_FUNC_IMPL(__imp__sub_82E47164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E47168"))) PPC_WEAK_FUNC(sub_82E47168);
PPC_FUNC_IMPL(__imp__sub_82E47168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E47170;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// beq cr6,0x82e47244
	if (ctx.cr6.eq) goto loc_82E47244;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r28,-31890
	ctx.r28.s64 = -2089943040;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e471bc
	if (ctx.cr0.eq) goto loc_82E471BC;
	// lwz r11,-4716(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4716);
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394d0
	ctx.lr = 0x82E471A8;
	sub_82E394D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bne 0x82e471c0
	if (!ctx.cr0.eq) goto loc_82E471C0;
loc_82E471B4:
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82e47274
	goto loc_82E47274;
loc_82E471BC:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82E471C0:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// beq 0x82e4726c
	if (ctx.cr0.eq) goto loc_82E4726C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,1098
	ctx.r6.s64 = 1098;
	// addi r5,r10,22584
	ctx.r5.s64 = ctx.r10.s64 + 22584;
	// lwz r10,-4716(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4716);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,196
	ctx.r4.s64 = ctx.r10.s64 + 196;
	// bl 0x82e39460
	ctx.lr = 0x82E47224;
	sub_82E39460(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// beq 0x82e471b4
	if (ctx.cr0.eq) goto loc_82E471B4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x82E47240;
	sub_82CB1160(ctx, base);
	// b 0x82e47270
	goto loc_82E47270;
loc_82E47244:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_82E4726C:
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_82E47270:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E47274:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E4727C"))) PPC_WEAK_FUNC(sub_82E4727C);
PPC_FUNC_IMPL(__imp__sub_82E4727C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E47280"))) PPC_WEAK_FUNC(sub_82E47280);
PPC_FUNC_IMPL(__imp__sub_82E47280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E47288;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r30,-31890
	ctx.r30.s64 = -2089943040;
	// addi r31,r11,22584
	ctx.r31.s64 = ctx.r11.s64 + 22584;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e472bc
	if (ctx.cr0.eq) goto loc_82E472BC;
	// lwz r11,-4716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4716);
	// li r6,1132
	ctx.r6.s64 = 1132;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E472BC;
	sub_82E394B8(ctx, base);
loc_82E472BC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e472dc
	if (ctx.cr0.eq) goto loc_82E472DC;
	// lwz r11,-4716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4716);
	// li r6,1136
	ctx.r6.s64 = 1136;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E472DC;
	sub_82E394B8(ctx, base);
loc_82E472DC:
	// lwz r11,-4716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4716);
	// li r6,1139
	ctx.r6.s64 = 1139;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e394b8
	ctx.lr = 0x82E472F4;
	sub_82E394B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E47300"))) PPC_WEAK_FUNC(sub_82E47300);
PPC_FUNC_IMPL(__imp__sub_82E47300) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82e40758
	ctx.lr = 0x82E47324;
	sub_82E40758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e47348
	if (!ctx.cr0.eq) goto loc_82E47348;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E47348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E47348:
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

__attribute__((alias("__imp__sub_82E47360"))) PPC_WEAK_FUNC(sub_82E47360);
PPC_FUNC_IMPL(__imp__sub_82E47360) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82e40758
	ctx.lr = 0x82E47384;
	sub_82E40758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e473a8
	if (!ctx.cr0.eq) goto loc_82E473A8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E473A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E473A8:
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

__attribute__((alias("__imp__sub_82E473C0"))) PPC_WEAK_FUNC(sub_82E473C0);
PPC_FUNC_IMPL(__imp__sub_82E473C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82e40758
	ctx.lr = 0x82E473DC;
	sub_82E40758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e473fc
	if (!ctx.cr0.eq) goto loc_82E473FC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E473FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E473FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E47410"))) PPC_WEAK_FUNC(sub_82E47410);
PPC_FUNC_IMPL(__imp__sub_82E47410) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e40758
	ctx.lr = 0x82E4742C;
	sub_82E40758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4744c
	if (!ctx.cr0.eq) goto loc_82E4744C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4744C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E4744C:
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

__attribute__((alias("__imp__sub_82E47460"))) PPC_WEAK_FUNC(sub_82E47460);
PPC_FUNC_IMPL(__imp__sub_82E47460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82e40758
	ctx.lr = 0x82E4747C;
	sub_82E40758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4749c
	if (!ctx.cr0.eq) goto loc_82E4749C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4749C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E4749C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E474B0"))) PPC_WEAK_FUNC(sub_82E474B0);
PPC_FUNC_IMPL(__imp__sub_82E474B0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e40758
	ctx.lr = 0x82E474CC;
	sub_82E40758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e474ec
	if (!ctx.cr0.eq) goto loc_82E474EC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E474EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E474EC:
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

__attribute__((alias("__imp__sub_82E47500"))) PPC_WEAK_FUNC(sub_82E47500);
PPC_FUNC_IMPL(__imp__sub_82E47500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82e40758
	ctx.lr = 0x82E4751C;
	sub_82E40758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4753c
	if (!ctx.cr0.eq) goto loc_82E4753C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4753C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E4753C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E47550"))) PPC_WEAK_FUNC(sub_82E47550);
PPC_FUNC_IMPL(__imp__sub_82E47550) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e40758
	ctx.lr = 0x82E4756C;
	sub_82E40758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4758c
	if (!ctx.cr0.eq) goto loc_82E4758C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4758C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E4758C:
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

__attribute__((alias("__imp__sub_82E475A0"))) PPC_WEAK_FUNC(sub_82E475A0);
PPC_FUNC_IMPL(__imp__sub_82E475A0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e40758
	ctx.lr = 0x82E475BC;
	sub_82E40758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e475dc
	if (!ctx.cr0.eq) goto loc_82E475DC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E475DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E475DC:
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

__attribute__((alias("__imp__sub_82E475F0"))) PPC_WEAK_FUNC(sub_82E475F0);
PPC_FUNC_IMPL(__imp__sub_82E475F0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e40758
	ctx.lr = 0x82E4760C;
	sub_82E40758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4762c
	if (!ctx.cr0.eq) goto loc_82E4762C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E4762C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E4762C:
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

__attribute__((alias("__imp__sub_82E47640"))) PPC_WEAK_FUNC(sub_82E47640);
PPC_FUNC_IMPL(__imp__sub_82E47640) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e40758
	ctx.lr = 0x82E47654;
	sub_82E40758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e47670
	if (!ctx.cr0.eq) goto loc_82E47670;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E47670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E47670:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E47680"))) PPC_WEAK_FUNC(sub_82E47680);
PPC_FUNC_IMPL(__imp__sub_82E47680) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,22672
	ctx.r10.s64 = ctx.r10.s64 + 22672;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82e46be0
	ctx.lr = 0x82E476BC;
	sub_82E46BE0(ctx, base);
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

__attribute__((alias("__imp__sub_82E476D4"))) PPC_WEAK_FUNC(sub_82E476D4);
PPC_FUNC_IMPL(__imp__sub_82E476D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E476D8"))) PPC_WEAK_FUNC(sub_82E476D8);
PPC_FUNC_IMPL(__imp__sub_82E476D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E476E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e47724
	if (ctx.cr6.eq) goto loc_82E47724;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e47724
	if (!ctx.cr6.eq) goto loc_82E47724;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82e47280
	ctx.lr = 0x82E4771C;
	sub_82E47280(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e4777c
	if (!ctx.cr0.eq) goto loc_82E4777C;
loc_82E47724:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,22584
	ctx.r30.s64 = ctx.r11.s64 + 22584;
	// beq 0x82e47750
	if (ctx.cr0.eq) goto loc_82E47750;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,72
	ctx.r6.s64 = 72;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82e394b8
	ctx.lr = 0x82E47750;
	sub_82E394B8(ctx, base);
loc_82E47750:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e47778
	if (!ctx.cr6.eq) goto loc_82E47778;
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r6,79
	ctx.r6.s64 = 79;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e394b8
	ctx.lr = 0x82E47778;
	sub_82E394B8(ctx, base);
loc_82E47778:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E4777C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E47784"))) PPC_WEAK_FUNC(sub_82E47784);
PPC_FUNC_IMPL(__imp__sub_82E47784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E47788"))) PPC_WEAK_FUNC(sub_82E47788);
PPC_FUNC_IMPL(__imp__sub_82E47788) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r11,36(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// lfs f1,28(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e4784c
	if (ctx.cr0.eq) goto loc_82E4784C;
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82e47814
	if (ctx.cr6.lt) goto loc_82E47814;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82e46ce0
	ctx.lr = 0x82E477D0;
	sub_82E46CE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e47864
	if (!ctx.cr0.eq) goto loc_82E47864;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e47830
	if (!ctx.cr0.eq) goto loc_82E47830;
	// fmr f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f13.f64;
loc_82E477E8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f2,20(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82e46ce0
	ctx.lr = 0x82E477F8;
	sub_82E46CE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e47864
	if (!ctx.cr0.eq) goto loc_82E47864;
loc_82E47800:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e47860
	if (ctx.cr6.eq) goto loc_82E47860;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// b 0x82e47860
	goto loc_82E47860;
loc_82E47814:
	// fmr f2,f13
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f13.f64;
	// bl 0x82e46ce0
	ctx.lr = 0x82E4781C;
	sub_82E46CE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e47864
	if (!ctx.cr0.eq) goto loc_82E47864;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e47840
	if (ctx.cr0.eq) goto loc_82E47840;
loc_82E47830:
	// lwz r11,36(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r11.u32);
	// b 0x82e47800
	goto loc_82E47800;
loc_82E47840:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82e477e8
	goto loc_82E477E8;
loc_82E4784C:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lfs f2,20(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82e46ce0
	ctx.lr = 0x82E47858;
	sub_82E46CE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e47864
	if (!ctx.cr0.eq) goto loc_82E47864;
loc_82E47860:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E47864:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E47874"))) PPC_WEAK_FUNC(sub_82E47874);
PPC_FUNC_IMPL(__imp__sub_82E47874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E47878"))) PPC_WEAK_FUNC(sub_82E47878);
PPC_FUNC_IMPL(__imp__sub_82E47878) {
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
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm. r10,r10,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e47990
	if (!ctx.cr0.eq) goto loc_82E47990;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f12,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82e478d0
	if (!ctx.cr6.gt) goto loc_82E478D0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82e478dc
	goto loc_82E478DC;
loc_82E478D0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82e478dc
	if (!ctx.cr6.lt) goto loc_82E478DC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82E478DC:
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82e47960
	if (ctx.cr6.eq) goto loc_82E47960;
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x82e4792c
	if (ctx.cr6.eq) goto loc_82E4792C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e4792c
	if (ctx.cr0.eq) goto loc_82E4792C;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// rlwinm. r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4792c
	if (ctx.cr0.eq) goto loc_82E4792C;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e4792c
	if (ctx.cr6.eq) goto loc_82E4792C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x82e47934
	goto loc_82E47934;
loc_82E4792C:
	// stfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_82E47934:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e47100
	ctx.lr = 0x82E4793C;
	sub_82E47100(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e47960
	if (ctx.cr0.eq) goto loc_82E47960;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e47960
	if (ctx.cr6.eq) goto loc_82E47960;
	// bl 0x82e455e0
	ctx.lr = 0x82E47958;
	sub_82E455E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e47994
	if (!ctx.cr0.eq) goto loc_82E47994;
loc_82E47960:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e47990
	if (ctx.cr0.eq) goto loc_82E47990;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// rlwinm. r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e47990
	if (!ctx.cr0.eq) goto loc_82E47990;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e47990
	if (ctx.cr6.eq) goto loc_82E47990;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82E47990:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E47994:
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

__attribute__((alias("__imp__sub_82E479A8"))) PPC_WEAK_FUNC(sub_82E479A8);
PPC_FUNC_IMPL(__imp__sub_82E479A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E479E0"))) PPC_WEAK_FUNC(sub_82E479E0);
PPC_FUNC_IMPL(__imp__sub_82E479E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E479E8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r9,r11,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// rlwinm r11,r11,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82e47b90
	if (!ctx.cr6.eq) goto loc_82E47B90;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,-4716(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E47A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e483a0
	if (!ctx.cr0.eq) goto loc_82E483A0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// rlwinm. r10,r10,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e47a84
	if (ctx.cr0.eq) goto loc_82E47A84;
	// lfs f13,120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
loc_82E47A7C:
	// stfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x82e47b78
	goto loc_82E47B78;
loc_82E47A84:
	// lwz r3,-4716(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E47A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e483a0
	if (!ctx.cr0.eq) goto loc_82E483A0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lfs f12,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f0,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// ble cr6,0x82e47b78
	if (!ctx.cr6.gt) goto loc_82E47B78;
loc_82E47AF0:
	// lwz r3,-4716(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E47B18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e483a0
	if (!ctx.cr0.eq) goto loc_82E483A0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lfs f12,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82e47b68
	if (!ctx.cr6.lt) goto loc_82E47B68;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_82E47B68:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e47af0
	if (ctx.cr6.lt) goto loc_82E47AF0;
loc_82E47B78:
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
loc_82E47B7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e46c88
	ctx.lr = 0x82E47B84;
	sub_82E46C88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e48384
	if (ctx.cr0.eq) goto loc_82E48384;
	// b 0x82e483a0
	goto loc_82E483A0;
loc_82E47B90:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82e47f64
	if (!ctx.cr6.eq) goto loc_82E47F64;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,-4716(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E47BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e483a0
	if (!ctx.cr0.eq) goto loc_82E483A0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// rlwinm. r10,r10,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e47c3c
	if (ctx.cr0.eq) goto loc_82E47C3C;
	// addi r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 + 116;
	// lfs f0,6048(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// fmr f4,f0
	ctx.f4.f64 = ctx.f0.f64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f11,f11
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f3,f12,f12,f3
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmadds f3,f9,f9,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fsqrts f31,f3
	ctx.f31.f64 = double(float(sqrt(ctx.f3.f64)));
	// b 0x82e47ddc
	goto loc_82E47DDC;
loc_82E47C3C:
	// lwz r3,-4716(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E47C64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e483a0
	if (!ctx.cr0.eq) goto loc_82E483A0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lfs f12,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f0,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f13,f11,f11
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f0,f12,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f9,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// ble cr6,0x82e47da4
	if (!ctx.cr6.gt) goto loc_82E47DA4;
loc_82E47CC0:
	// lwz r3,-4716(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
	// addi r7,r1,168
	ctx.r7.s64 = ctx.r1.s64 + 168;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E47CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e483a0
	if (!ctx.cr0.eq) goto loc_82E483A0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lfs f12,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f12,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f13,f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e47d88
	if (!ctx.cr6.lt) goto loc_82E47D88;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_82E47D88:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e47cc0
	if (ctx.cr6.lt) goto loc_82E47CC0;
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
loc_82E47DA4:
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f0,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfs f8,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f3,f6,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmsubs f6,f6,f10,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 - ctx.f4.f64));
	// fmsubs f5,f0,f8,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 - ctx.f5.f64));
	// lfs f0,6048(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f4,f13,f7,f3
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 - ctx.f3.f64));
	// lfs f13,6140(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
loc_82E47DDC:
	// lwz r11,-4716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4716);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e47df8
	if (ctx.cr0.eq) goto loc_82E47DF8;
	// fneg f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_82E47DF8:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82e47e0c
	if (ctx.cr6.gt) goto loc_82E47E0C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// b 0x82e47e1c
	goto loc_82E47E1C;
loc_82E47E0C:
	// fdivs f0,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f31.f64));
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
loc_82E47E1C:
	// fmuls f12,f11,f8
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// fmadds f12,f0,f10,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f0,f0,f4,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f11.f64));
	// fmadds f12,f13,f7,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fmadds f13,f13,f5,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f0.f64));
	// lfs f0,-16900(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16900);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e47e7c
	if (!ctx.cr6.eq) goto loc_82E47E7C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e47e7c
	if (!ctx.cr6.eq) goto loc_82E47E7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82e47f2c
	goto loc_82E47F2C;
loc_82E47E7C:
	// rlwinm r9,r10,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm. r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt 0x82e47ecc
	if (ctx.cr0.lt) goto loc_82E47ECC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 10;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r10,r10,804
	ctx.r10.s64 = ctx.r10.s64 * 804;
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// srawi r10,r10,10
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 10;
	// twlgei r11,-1
	// subfic r11,r10,804
	ctx.xer.ca = ctx.r10.u32 <= 804;
	ctx.r11.s64 = 804 - ctx.r10.s64;
	// b 0x82e47ef8
	goto loc_82E47EF8;
loc_82E47ECC:
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r8,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 10;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r10,r10,804
	ctx.r10.s64 = ctx.r10.s64 * 804;
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// srawi r10,r10,10
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 10;
	// twlgei r11,-1
	// subfic r11,r10,2412
	ctx.xer.ca = ctx.r10.u32 <= 2412;
	ctx.r11.s64 = 2412 - ctx.r10.s64;
loc_82E47EF8:
	// twllei r8,0
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82e47f08
	if (!ctx.cr6.lt) goto loc_82E47F08;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82E47F08:
	// mulli r11,r11,180
	ctx.r11.s64 = ctx.r11.s64 * 180;
	// li r10,3216
	ctx.r10.s64 = 3216;
	// divw. r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82e47f20
	if (!ctx.cr0.lt) goto loc_82E47F20;
	// addi r11,r11,360
	ctx.r11.s64 = ctx.r11.s64 + 360;
	// b 0x82e47f2c
	goto loc_82E47F2C;
loc_82E47F20:
	// cmpwi cr6,r11,360
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 360, ctx.xer);
	// blt cr6,0x82e47f2c
	if (ctx.cr6.lt) goto loc_82E47F2C;
	// addi r11,r11,-360
	ctx.r11.s64 = ctx.r11.s64 + -360;
loc_82E47F2C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-18328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18328);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82e47b78
	if (ctx.cr6.lt) goto loc_82E47B78;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-18332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18332);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82e47a7c
	goto loc_82E47A7C;
loc_82E47F64:
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82e481f4
	if (!ctx.cr6.eq) goto loc_82E481F4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lfs f13,172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,6048(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x82e47fa4
	if (!ctx.cr6.eq) goto loc_82E47FA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e46c88
	ctx.lr = 0x82E47FA0;
	sub_82E46C88(ctx, base);
	// b 0x82e483a0
	goto loc_82E483A0;
loc_82E47FA4:
	// lis r30,-31890
	ctx.r30.s64 = -2089943040;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,-4716(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4716);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E47FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e483a0
	if (!ctx.cr0.eq) goto loc_82E483A0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// rlwinm. r10,r10,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e4800c
	if (ctx.cr0.eq) goto loc_82E4800C;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-18324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f13,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// b 0x82e48144
	goto loc_82E48144;
loc_82E4800C:
	// lwz r3,-4716(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4716);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E48034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e483a0
	if (!ctx.cr0.eq) goto loc_82E483A0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lfs f12,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f0,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f13,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// ble cr6,0x82e48144
	if (!ctx.cr6.gt) goto loc_82E48144;
loc_82E48090:
	// lwz r3,-4716(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4716);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E480B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e483a0
	if (!ctx.cr0.eq) goto loc_82E483A0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lfs f12,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f12,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f13,f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e48128
	if (!ctx.cr6.lt) goto loc_82E48128;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82E48128:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e48090
	if (ctx.cr6.lt) goto loc_82E48090;
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
loc_82E48144:
	// lwz r11,-4716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4716);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e48158
	if (ctx.cr0.eq) goto loc_82E48158;
	// fneg f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_82E48158:
	// lfs f0,6048(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82e48170
	if (ctx.cr6.gt) goto loc_82E48170;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x82e48188
	goto loc_82E48188;
loc_82E48170:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82E48188:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lfs f13,172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f12,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f1,f10,f11,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f1,20(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x82cb44c0
	ctx.lr = 0x82E481AC;
	sub_82CB44C0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,14064(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14064);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,6048(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82e481d0
	if (ctx.cr6.gt) goto loc_82E481D0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82E481D0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f13,-18328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18328);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82e481e8
	if (ctx.cr6.lt) goto loc_82E481E8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82E481E8:
	// stfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x82e47b7c
	goto loc_82E47B7C;
loc_82E481F4:
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e48270
	if (ctx.cr0.eq) goto loc_82E48270;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f12,6480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6480);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// ble cr6,0x82e48244
	if (!ctx.cr6.gt) goto loc_82E48244;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82e48258
	if (!ctx.cr6.gt) goto loc_82E48258;
	// b 0x82e48254
	goto loc_82E48254;
loc_82E48244:
	// fsubs f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82e48258
	if (!ctx.cr6.lt) goto loc_82E48258;
loc_82E48254:
	// stfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_82E48258:
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82e48384
	if (!ctx.cr6.eq) goto loc_82E48384;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x82e48384
	goto loc_82E48384;
loc_82E48270:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// beq cr6,0x82e48384
	if (ctx.cr6.eq) goto loc_82E48384;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// lfs f0,6480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6480);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lfs f13,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82e482f4
	if (!ctx.cr6.gt) goto loc_82E482F4;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm. r8,r11,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82e482d4
	if (ctx.cr0.eq) goto loc_82E482D4;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82e4830c
	goto loc_82E4830C;
loc_82E482D4:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e482e4
	if (ctx.cr0.eq) goto loc_82E482E4;
	// stfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x82e48338
	goto loc_82E48338;
loc_82E482E4:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e48338
	if (ctx.cr0.eq) goto loc_82E48338;
	// stfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x82e48334
	goto loc_82E48334;
loc_82E482F4:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82e48338
	if (!ctx.cr6.lt) goto loc_82E48338;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm. r8,r11,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82e4831c
	if (ctx.cr0.eq) goto loc_82E4831C;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_82E4830C:
	// ori r11,r9,4
	ctx.r11.u64 = ctx.r9.u64 | 4;
	// stfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x82e48338
	goto loc_82E48338;
loc_82E4831C:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e4832c
	if (ctx.cr0.eq) goto loc_82E4832C;
	// stfs f11,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x82e48338
	goto loc_82E48338;
loc_82E4832C:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e48338
	if (ctx.cr0.eq) goto loc_82E48338;
loc_82E48334:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82E48338:
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// beq cr6,0x82e48360
	if (ctx.cr6.eq) goto loc_82E48360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e47788
	ctx.lr = 0x82E48358;
	sub_82E47788(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e483a0
	if (!ctx.cr0.eq) goto loc_82E483A0;
loc_82E48360:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e48384
	if (ctx.cr0.eq) goto loc_82E48384;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e48384
	if (!ctx.cr0.eq) goto loc_82E48384;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// stw r10,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r10.u32);
loc_82E48384:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82e4839c
	if (ctx.cr6.eq) goto loc_82E4839C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e47100
	ctx.lr = 0x82E4839C;
	sub_82E47100(ctx, base);
loc_82E4839C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E483A0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E483AC"))) PPC_WEAK_FUNC(sub_82E483AC);
PPC_FUNC_IMPL(__imp__sub_82E483AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E483B0"))) PPC_WEAK_FUNC(sub_82E483B0);
PPC_FUNC_IMPL(__imp__sub_82E483B0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82e40580
	sub_82E40580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E483B8"))) PPC_WEAK_FUNC(sub_82E483B8);
PPC_FUNC_IMPL(__imp__sub_82E483B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e483c8
	if (!ctx.cr6.eq) goto loc_82E483C8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E483C8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E483D8"))) PPC_WEAK_FUNC(sub_82E483D8);
PPC_FUNC_IMPL(__imp__sub_82E483D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e483e8
	if (!ctx.cr6.eq) goto loc_82E483E8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E483E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E483F8"))) PPC_WEAK_FUNC(sub_82E483F8);
PPC_FUNC_IMPL(__imp__sub_82E483F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48408
	if (!ctx.cr6.eq) goto loc_82E48408;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48408:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48418"))) PPC_WEAK_FUNC(sub_82E48418);
PPC_FUNC_IMPL(__imp__sub_82E48418) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48428
	if (!ctx.cr6.eq) goto loc_82E48428;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48428:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48438"))) PPC_WEAK_FUNC(sub_82E48438);
PPC_FUNC_IMPL(__imp__sub_82E48438) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48448
	if (!ctx.cr6.eq) goto loc_82E48448;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48448:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48458"))) PPC_WEAK_FUNC(sub_82E48458);
PPC_FUNC_IMPL(__imp__sub_82E48458) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48468
	if (!ctx.cr6.eq) goto loc_82E48468;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48468:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48478"))) PPC_WEAK_FUNC(sub_82E48478);
PPC_FUNC_IMPL(__imp__sub_82E48478) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e48488
	if (!ctx.cr6.eq) goto loc_82E48488;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E48488:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E48498"))) PPC_WEAK_FUNC(sub_82E48498);
PPC_FUNC_IMPL(__imp__sub_82E48498) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e484a8
	if (!ctx.cr6.eq) goto loc_82E484A8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E484A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E484B8"))) PPC_WEAK_FUNC(sub_82E484B8);
PPC_FUNC_IMPL(__imp__sub_82E484B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e484c8
	if (!ctx.cr6.eq) goto loc_82E484C8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82E484C8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

