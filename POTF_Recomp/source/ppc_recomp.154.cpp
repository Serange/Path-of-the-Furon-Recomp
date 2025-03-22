#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8261C708"))) PPC_WEAK_FUNC(sub_8261C708);
PPC_FUNC_IMPL(__imp__sub_8261C708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8261C710;
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
	// bl 0x82627cf8
	ctx.lr = 0x8261C724;
	sub_82627CF8(ctx, base);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8261c768
	if (!ctx.cr6.gt) goto loc_8261C768;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8261C738:
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,268(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8261C754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,80(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8261c738
	if (ctx.cr6.lt) goto loc_8261C738;
loc_8261C768:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261C774"))) PPC_WEAK_FUNC(sub_8261C774);
PPC_FUNC_IMPL(__imp__sub_8261C774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261C778"))) PPC_WEAK_FUNC(sub_8261C778);
PPC_FUNC_IMPL(__imp__sub_8261C778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8261C780;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r10,11272
	ctx.r31.s64 = ctx.r10.s64 + 11272;
	// beq cr6,0x8261c7a8
	if (ctx.cr6.eq) goto loc_8261C7A8;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x8261c7ac
	goto loc_8261C7AC;
loc_8261C7A8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8261C7AC:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261c878
	if (ctx.cr6.eq) goto loc_8261C878;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r4,1000
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1000, ctx.xer);
	// ble cr6,0x8261c7c8
	if (!ctx.cr6.gt) goto loc_8261C7C8;
	// li r4,1000
	ctx.r4.s64 = 1000;
loc_8261C7C8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b1bf0
	ctx.lr = 0x8261C7D0;
	sub_822B1BF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r27,96(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x822960c0
	ctx.lr = 0x8261C7E0;
	sub_822960C0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,-22304
	ctx.r9.s64 = ctx.r11.s64 + -22304;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bne cr6,0x8261c804
	if (!ctx.cr6.eq) goto loc_8261C804;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8261C804:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261C81C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8261c830
	if (!ctx.cr6.eq) goto loc_8261C830;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8261C830:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822960c0
	ctx.lr = 0x8261C838;
	sub_822960C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b3138
	ctx.lr = 0x8261C840;
	sub_822B3138(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261c864
	if (ctx.cr6.eq) goto loc_8261C864;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x8261C864;
	sub_82294520(ctx, base);
loc_8261C864:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x8261C86C;
	sub_82294CC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8261C878:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8261c7c8
	goto loc_8261C7C8;
}

__attribute__((alias("__imp__sub_8261C880"))) PPC_WEAK_FUNC(sub_8261C880);
PPC_FUNC_IMPL(__imp__sub_8261C880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x8261C888;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r31,r25,-60
	ctx.r31.s64 = ctx.r25.s64 + -60;
	// addi r3,r25,152
	ctx.r3.s64 = ctx.r25.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8240c6f8
	ctx.lr = 0x8261C8BC;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261c8e4
	if (ctx.cr6.eq) goto loc_8261C8E4;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627bc0
	ctx.lr = 0x8261C8E0;
	sub_82627BC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8261C8E4:
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8261c990
	if (!ctx.cr6.eq) goto loc_8261C990;
	// li r24,0
	ctx.r24.s64 = 0;
loc_8261C8F4:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8261c990
	if (!ctx.cr6.lt) goto loc_8261C990;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwzx r31,r11,r24
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8261c944
	if (ctx.cr6.eq) goto loc_8261C944;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x8240c6f8
	ctx.lr = 0x8261C91C;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261c944
	if (ctx.cr6.eq) goto loc_8261C944;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261b560
	ctx.lr = 0x8261C940;
	sub_8261B560(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8261C944:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8261c97c
	if (!ctx.cr6.eq) goto loc_8261C97C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261C974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261c980
	if (ctx.cr6.eq) goto loc_8261C980;
loc_8261C97C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8261C980:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8261c8f4
	if (ctx.cr6.eq) goto loc_8261C8F4;
loc_8261C990:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261C9A0"))) PPC_WEAK_FUNC(sub_8261C9A0);
PPC_FUNC_IMPL(__imp__sub_8261C9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8261C9A8;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r31,r25,-60
	ctx.r31.s64 = ctx.r25.s64 + -60;
	// addi r3,r25,164
	ctx.r3.s64 = ctx.r25.s64 + 164;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8240c6f8
	ctx.lr = 0x8261C9E0;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261ca08
	if (ctx.cr6.eq) goto loc_8261CA08;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627b38
	ctx.lr = 0x8261CA04;
	sub_82627B38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8261CA08:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8261cab4
	if (!ctx.cr6.eq) goto loc_8261CAB4;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8261CA18:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8261cab4
	if (!ctx.cr6.lt) goto loc_8261CAB4;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwzx r31,r11,r26
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8261ca68
	if (ctx.cr6.eq) goto loc_8261CA68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x8240c6f8
	ctx.lr = 0x8261CA40;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261ca68
	if (ctx.cr6.eq) goto loc_8261CA68;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261b4e0
	ctx.lr = 0x8261CA64;
	sub_8261B4E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8261CA68:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8261caa0
	if (!ctx.cr6.eq) goto loc_8261CAA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261CA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261caa4
	if (ctx.cr6.eq) goto loc_8261CAA4;
loc_8261CAA0:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8261CAA4:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8261ca18
	if (ctx.cr6.eq) goto loc_8261CA18;
loc_8261CAB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261CAC8"))) PPC_WEAK_FUNC(sub_8261CAC8);
PPC_FUNC_IMPL(__imp__sub_8261CAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8261CAD0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bl 0x8233cb60
	ctx.lr = 0x8261CB00;
	sub_8233CB60(ctx, base);
	// addi r31,r28,-60
	ctx.r31.s64 = ctx.r28.s64 + -60;
	// addi r3,r28,176
	ctx.r3.s64 = ctx.r28.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8240c6f8
	ctx.lr = 0x8261CB10;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261cb2c
	if (ctx.cr6.eq) goto loc_8261CB2C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627a40
	ctx.lr = 0x8261CB28;
	sub_82627A40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8261CB2C:
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8261cbc4
	if (!ctx.cr6.eq) goto loc_8261CBC4;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8261CB3C:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8261cbc4
	if (!ctx.cr6.lt) goto loc_8261CBC4;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8261cb80
	if (ctx.cr6.eq) goto loc_8261CB80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8240c6f8
	ctx.lr = 0x8261CB64;
	sub_8240C6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261cb80
	if (ctx.cr6.eq) goto loc_8261CB80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261b458
	ctx.lr = 0x8261CB7C;
	sub_8261B458(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8261CB80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8261cbb0
	if (!ctx.cr6.eq) goto loc_8261CBB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261CBA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// beq cr6,0x8261cbb4
	if (ctx.cr6.eq) goto loc_8261CBB4;
loc_8261CBB0:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8261CBB4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8261cb3c
	if (ctx.cr6.eq) goto loc_8261CB3C;
loc_8261CBC4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261cc14
	if (ctx.cr6.eq) goto loc_8261CC14;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8261cc44
	if (ctx.cr6.eq) goto loc_8261CC44;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261cbf4
	if (!ctx.cr6.eq) goto loc_8261CBF4;
	// bl 0x822900a0
	ctx.lr = 0x8261CBF0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_8261CBF4:
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
	ctx.lr = 0x8261CC10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8261CC14:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8261cc44
	if (ctx.cr6.eq) goto loc_8261CC44;
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261cc30
	if (!ctx.cr6.eq) goto loc_8261CC30;
	// bl 0x822900a0
	ctx.lr = 0x8261CC2C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28888);
loc_8261CC30:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261CC44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261CC44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261CC50"))) PPC_WEAK_FUNC(sub_8261CC50);
PPC_FUNC_IMPL(__imp__sub_8261CC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r8,744(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8261ccbc
	if (!ctx.cr6.gt) goto loc_8261CCBC;
	// lwz r11,740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 740);
	// addi r7,r3,-60
	ctx.r7.s64 = ctx.r3.s64 + -60;
loc_8261CC70:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,104(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8261cc8c
	if (!ctx.cr6.eq) goto loc_8261CC8C;
	// lwz r6,96(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8261cca4
	if (ctx.cr6.eq) goto loc_8261CCA4;
loc_8261CC8C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8261cc70
	if (ctx.cr6.lt) goto loc_8261CC70;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8261CCA4:
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261ccbc
	if (ctx.cr6.eq) goto loc_8261CCBC;
	// lwz r3,1140(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8261CCBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261CCC4"))) PPC_WEAK_FUNC(sub_8261CCC4);
PPC_FUNC_IMPL(__imp__sub_8261CCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261CCC8"))) PPC_WEAK_FUNC(sub_8261CCC8);
PPC_FUNC_IMPL(__imp__sub_8261CCC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261CCD0"))) PPC_WEAK_FUNC(sub_8261CCD0);
PPC_FUNC_IMPL(__imp__sub_8261CCD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261CCD4"))) PPC_WEAK_FUNC(sub_8261CCD4);
PPC_FUNC_IMPL(__imp__sub_8261CCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261CCD8"))) PPC_WEAK_FUNC(sub_8261CCD8);
PPC_FUNC_IMPL(__imp__sub_8261CCD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261CCDC"))) PPC_WEAK_FUNC(sub_8261CCDC);
PPC_FUNC_IMPL(__imp__sub_8261CCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261CCE0"))) PPC_WEAK_FUNC(sub_8261CCE0);
PPC_FUNC_IMPL(__imp__sub_8261CCE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261CCE4"))) PPC_WEAK_FUNC(sub_8261CCE4);
PPC_FUNC_IMPL(__imp__sub_8261CCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261CCE8"))) PPC_WEAK_FUNC(sub_8261CCE8);
PPC_FUNC_IMPL(__imp__sub_8261CCE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261CCEC"))) PPC_WEAK_FUNC(sub_8261CCEC);
PPC_FUNC_IMPL(__imp__sub_8261CCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261CCF0"))) PPC_WEAK_FUNC(sub_8261CCF0);
PPC_FUNC_IMPL(__imp__sub_8261CCF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261CCF8"))) PPC_WEAK_FUNC(sub_8261CCF8);
PPC_FUNC_IMPL(__imp__sub_8261CCF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261CD00"))) PPC_WEAK_FUNC(sub_8261CD00);
PPC_FUNC_IMPL(__imp__sub_8261CD00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261cd24
	if (ctx.cr6.eq) goto loc_8261CD24;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8261CD24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261CD2C"))) PPC_WEAK_FUNC(sub_8261CD2C);
PPC_FUNC_IMPL(__imp__sub_8261CD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261CD30"))) PPC_WEAK_FUNC(sub_8261CD30);
PPC_FUNC_IMPL(__imp__sub_8261CD30) {
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
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261cd94
	if (ctx.cr6.eq) goto loc_8261CD94;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r3,-31264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// bl 0x823ffee0
	ctx.lr = 0x8261CD5C;
	sub_823FFEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261cd78
	if (!ctx.cr6.eq) goto loc_8261CD78;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261cd7c
	if (ctx.cr6.eq) goto loc_8261CD7C;
loc_8261CD78:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8261CD7C:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261CD94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261CD94:
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

__attribute__((alias("__imp__sub_8261CDA8"))) PPC_WEAK_FUNC(sub_8261CDA8);
PPC_FUNC_IMPL(__imp__sub_8261CDA8) {
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
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261ce08
	if (ctx.cr6.eq) goto loc_8261CE08;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261CDE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261cdf0
	if (!ctx.cr6.eq) goto loc_8261CDF0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8261ce08
	if (ctx.cr6.lt) goto loc_8261CE08;
loc_8261CDF0:
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
loc_8261CE08:
	// li r3,2
	ctx.r3.s64 = 2;
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

__attribute__((alias("__imp__sub_8261CE20"))) PPC_WEAK_FUNC(sub_8261CE20);
PPC_FUNC_IMPL(__imp__sub_8261CE20) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r30,68(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// beq cr6,0x8261ce60
	if (ctx.cr6.eq) goto loc_8261CE60;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261CE5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8261ce64
	goto loc_8261CE64;
loc_8261CE60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261CE64:
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8261ce80
	if (!ctx.cr6.eq) goto loc_8261CE80;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261ce80
	if (ctx.cr6.eq) goto loc_8261CE80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826279e0
	ctx.lr = 0x8261CE80;
	sub_826279E0(ctx, base);
loc_8261CE80:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261cea4
	if (ctx.cr6.eq) goto loc_8261CEA4;
	// lwz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261CEA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261CEA4:
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

__attribute__((alias("__imp__sub_8261CEBC"))) PPC_WEAK_FUNC(sub_8261CEBC);
PPC_FUNC_IMPL(__imp__sub_8261CEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261CEC0"))) PPC_WEAK_FUNC(sub_8261CEC0);
PPC_FUNC_IMPL(__imp__sub_8261CEC0) {
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
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261cf40
	if (ctx.cr6.eq) goto loc_8261CF40;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261CEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8261CF28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r6,r3,32
	ctx.r6.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,4(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_8261CF40:
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

__attribute__((alias("__imp__sub_8261CF58"))) PPC_WEAK_FUNC(sub_8261CF58);
PPC_FUNC_IMPL(__imp__sub_8261CF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8261CF60;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ae0
	ctx.lr = 0x8261CF68;
	__savefpr_26(ctx, base);
	// addi r12,r1,-208
	ctx.r12.s64 = ctx.r1.s64 + -208;
	// bl 0x82ff17ac
	ctx.lr = 0x8261CF70;
	__savevmx_123(ctx, base);
	// stwu r1,-1552(r1)
	ea = -1552 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r14,0
	ctx.r14.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r14,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r14.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r28,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r28.u32);
	// lwz r10,-28424(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28424);
	// stw r27,1580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1580, ctx.r27.u32);
	// stw r29,1588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1588, ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261cfac
	if (ctx.cr6.eq) goto loc_8261CFAC;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stw r10,-28424(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28424, ctx.r10.u32);
loc_8261CFAC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// addi r30,r11,-26272
	ctx.r30.s64 = ctx.r11.s64 + -26272;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,25104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25104);
	// bl 0x82625fd8
	ctx.lr = 0x8261CFC8;
	sub_82625FD8(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261d034
	if (!ctx.cr6.eq) goto loc_8261D034;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8233e028
	ctx.lr = 0x8261CFEC;
	sub_8233E028(ctx, base);
	// lwz r30,25104(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25104);
	// bl 0x82315428
	ctx.lr = 0x8261CFF4;
	sub_82315428(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x8261d000
	if (!ctx.cr6.eq) goto loc_8261D000;
	// lwz r30,25104(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25104);
loc_8261D000:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// ld r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// bl 0x822a93e8
	ctx.lr = 0x8261D024;
	sub_822A93E8(ctx, base);
	// ld r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// ori r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 16384;
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
loc_8261D034:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r29,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r29.u32);
	// lwz r11,-31264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// lwz r10,384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d058
	if (ctx.cr6.eq) goto loc_8261D058;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,372
	ctx.r3.s64 = ctx.r11.s64 + 372;
	// bl 0x82624d20
	ctx.lr = 0x8261D058;
	sub_82624D20(ctx, base);
loc_8261D058:
	// lis r29,-31884
	ctx.r29.s64 = -2089549824;
	// stw r14,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r14.u32);
	// lwz r11,25344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261d0b0
	if (ctx.cr6.eq) goto loc_8261D0B0;
	// lwz r11,752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261d0b0
	if (ctx.cr6.eq) goto loc_8261D0B0;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261d0b0
	if (ctx.cr6.eq) goto loc_8261D0B0;
	// lwz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
	// beq cr6,0x8261d0b0
	if (ctx.cr6.eq) goto loc_8261D0B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261D0A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// bne cr6,0x8261d0b4
	if (!ctx.cr6.eq) goto loc_8261D0B4;
loc_8261D0B0:
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
loc_8261D0B4:
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261D0CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261d0ec
	if (ctx.cr6.eq) goto loc_8261D0EC;
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261D0E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8261d0f0
	goto loc_8261D0F0;
loc_8261D0EC:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_8261D0F0:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// stw r3,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r3.u32);
	// lwz r11,19044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261d128
	if (ctx.cr6.eq) goto loc_8261D128;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8261d120
	if (!ctx.cr6.eq) goto loc_8261D120;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261d128
	if (ctx.cr6.eq) goto loc_8261D128;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8261d128
	if (!ctx.cr6.gt) goto loc_8261D128;
loc_8261D120:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8261d12c
	goto loc_8261D12C;
loc_8261D128:
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
loc_8261D12C:
	// lwz r11,-31264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8261d148
	if (ctx.cr6.gt) goto loc_8261D148;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// b 0x8261d150
	goto loc_8261D150;
loc_8261D148:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8261D150:
	// lwz r3,776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 776);
	// bl 0x8251a9b0
	ctx.lr = 0x8261D158;
	sub_8251A9B0(ctx, base);
	// lwz r31,-31264(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// addi r9,r31,372
	ctx.r9.s64 = ctx.r31.s64 + 372;
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261d174
	if (!ctx.cr6.eq) goto loc_8261D174;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
loc_8261D174:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8261d18c
	if (ctx.cr6.gt) goto loc_8261D18C;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// b 0x8261d194
	goto loc_8261D194;
loc_8261D18C:
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8261D194:
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lfs f0,856(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 856);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8261d1ac
	if (ctx.cr6.gt) goto loc_8261D1AC;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// b 0x8261d1b4
	goto loc_8261D1B4;
loc_8261D1AC:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8261D1B4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// ld r7,40(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 40);
	// cntlzw r6,r30
	ctx.r6.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lwz r5,25344(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25344);
	// lfs f13,852(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 852);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-32624
	ctx.r11.s64 = ctx.r11.s64 + -32624;
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stfs f13,700(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 700, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,704(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 704, temp.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r27,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r27.u32);
	// lfs f31,-15120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -15120);
	ctx.f31.f64 = double(temp.f32);
	// stw r14,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r14.u32);
	// stw r14,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r14.u32);
	// lfs f27,180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f27.f64 = double(temp.f32);
	// stw r14,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r14.u32);
	// lfs f29,3616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3616);
	ctx.f29.f64 = double(temp.f32);
	// stw r8,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r8.u32);
	// mr r16,r14
	ctx.r16.u64 = ctx.r14.u64;
	// std r7,692(r1)
	PPC_STORE_U64(ctx.r1.u32 + 692, ctx.r7.u64);
	// stw r9,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r9.u32);
	// stw r14,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r14.u32);
	// stw r10,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r10.u32);
	// stw r3,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r3.u32);
	// lwz r4,744(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 744);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// stw r14,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r14.u32);
	// stw r14,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r14.u32);
	// stw r14,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r14.u32);
	// stw r14,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r14.u32);
	// stw r14,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r14.u32);
	// stw r6,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r6.u32);
	// ble cr6,0x8261db48
	if (!ctx.cr6.gt) goto loc_8261DB48;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lis r6,-32233
	ctx.r6.s64 = -2112421888;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f30,-18108(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18108);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f26,-18204(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18204);
	ctx.f26.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f28,21152(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21152);
	ctx.f28.f64 = double(temp.f32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// stw r4,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// li r25,32
	ctx.r25.s64 = 32;
	// li r26,48
	ctx.r26.s64 = 48;
	// li r27,16
	ctx.r27.s64 = 16;
	// lis r17,-31882
	ctx.r17.s64 = -2089418752;
	// lis r19,-31883
	ctx.r19.s64 = -2089484288;
	// lis r28,-31906
	ctx.r28.s64 = -2090991616;
	// lis r23,-31906
	ctx.r23.s64 = -2090991616;
	// addi r22,r11,-17536
	ctx.r22.s64 = ctx.r11.s64 + -17536;
	// addi r24,r10,-17568
	ctx.r24.s64 = ctx.r10.s64 + -17568;
	// addi r21,r9,-17520
	ctx.r21.s64 = ctx.r9.s64 + -17520;
	// addi r20,r8,-17552
	ctx.r20.s64 = ctx.r8.s64 + -17552;
	// addi r15,r7,-15932
	ctx.r15.s64 = ctx.r7.s64 + -15932;
	// addi r29,r6,-12256
	ctx.r29.s64 = ctx.r6.s64 + -12256;
loc_8261D2B4:
	// lwz r11,740(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 740);
	// lwzx r18,r11,r4
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r10,64(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261db2c
	if (ctx.cr6.eq) goto loc_8261DB2C;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// lwz r7,1580(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1580);
	// addi r5,r1,568
	ctx.r5.s64 = ctx.r1.s64 + 568;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x826229c0
	ctx.lr = 0x8261D2E0;
	sub_826229C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8261db18
	if (ctx.cr6.eq) goto loc_8261DB18;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-28456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261d7ec
	if (ctx.cr6.eq) goto loc_8261D7EC;
	// lwz r30,1580(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1580);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261D314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8261D32C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,19040(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19040);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,19036(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 19036);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r6,r11,r14
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r14.s32);
	// subf r5,r7,r14
	ctx.r5.s64 = ctx.r14.s64 - ctx.r7.s64;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// std r4,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r4.u64);
	// lfd f0,296(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// std r3,920(r1)
	PPC_STORE_U64(ctx.r1.u32 + 920, ctx.r3.u64);
	// lfd f13,920(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 920);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// mullw r14,r11,r30
	ctx.r14.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// bl 0x82cb3d10
	ctx.lr = 0x8261D378;
	sub_82CB3D10(ctx, base);
	// lwz r11,19040(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19040);
	// extsw r10,r14
	ctx.r10.s64 = ctx.r14.s32;
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// std r10,936(r1)
	PPC_STORE_U64(ctx.r1.u32 + 936, ctx.r10.u64);
	// lfd f5,936(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 936);
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// subf r8,r9,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r9.s64;
	// frsp f1,f3
	ctx.f1.f64 = double(float(ctx.f3.f64));
	// fctiwz f2,f8
	ctx.f2.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f2,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.f2.u64);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lwz r30,372(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// std r7,928(r1)
	PPC_STORE_U64(ctx.r1.u32 + 928, ctx.r7.u64);
	// lfd f7,928(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 928);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fdivs f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 / ctx.f4.f64));
	// bl 0x82cb3d10
	ctx.lr = 0x8261D3C4;
	sub_82CB3D10(ctx, base);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,19036(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 19036);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.f13.u64);
	// lfs f12,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lfs f11,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fctiwz f9,f12
	ctx.f9.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// fctiwz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f8,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.f8.u64);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// stfd f9,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.f9.u64);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// fctiwz f7,f11
	ctx.f7.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// lwz r6,372(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// stfd f7,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.f7.u64);
	// lwz r5,396(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// lfs f6,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfd f3,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.f3.u64);
	// lwz r10,396(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// mullw r3,r11,r6
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lfs f2,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lwz r10,-28452(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + -28452);
	// mullw r4,r11,r5
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// divw r7,r10,r30
	ctx.r7.s32 = ctx.r10.s32 / ctx.r30.s32;
	// fadds f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// mullw r11,r7,r30
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// std r9,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r9.u64);
	// std r8,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r8.u64);
	// lvx128 v125,r0,r24
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,19040(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19040);
	// lvx128 v127,r0,r20
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v126,r0,r21
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v124,v125,v125
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// lvx128 v123,r0,r22
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,1192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1192, temp.u32);
	// stfs f27,1196(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1196, temp.u32);
	// stfs f31,1012(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1012, temp.u32);
	// stfs f31,1016(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1016, temp.u32);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.f12.u64);
	// divw r14,r10,r30
	ctx.r14.s32 = ctx.r10.s32 / ctx.r30.s32;
	// stfs f31,1020(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1020, temp.u32);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stfs f31,1024(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1024, temp.u32);
	// subf r7,r5,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r5.s64;
	// stfs f31,1032(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1032, temp.u32);
	// mullw r5,r10,r5
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// stfs f31,1036(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1036, temp.u32);
	// lfd f0,376(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// fcfid f8,f0
	ctx.f8.f64 = double(ctx.f0.s64);
	// lfd f11,272(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r14,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// std r4,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r4.u64);
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// lwz r10,396(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// subf r3,r6,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r6.s64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,1008(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1008, temp.u32);
	// stfs f9,1028(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1028, temp.u32);
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r4,r8,r9
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lfd f7,240(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// mullw r10,r14,r6
	ctx.r10.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r6.s32);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// srawi r9,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 1;
	// subf r8,r4,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r4.s64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// subf r4,r8,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r8.s64;
	// subf r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r11,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r11.u64);
	// lfd f3,224(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// std r10,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r10.u64);
	// lfd f2,184(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// addi r10,r31,128
	ctx.r10.s64 = ctx.r31.s64 + 128;
	// fcfid f0,f2
	ctx.f0.f64 = double(ctx.f2.s64);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r25
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r10,r26
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v61,r0,r11
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// fmuls f11,f13,f28
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmuls f10,f12,f26
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// fdivs f9,f11,f4
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f4.f64));
	// stfs f9,1184(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1184, temp.u32);
	// fdivs f8,f10,f5
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f5.f64));
	// stfs f8,1188(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1188, temp.u32);
	// lvx128 v58,r10,r27
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v57,v63,v62
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v56,v58,v60
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// lvx128 v55,r11,r27
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v54,v58,v60
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// lvx128 v53,r11,r25
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v52,r11,r26
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,1200
	ctx.r9.s64 = ctx.r1.s64 + 1200;
	// addi r8,r1,1216
	ctx.r8.s64 = ctx.r1.s64 + 1216;
	// vmrghw128 v51,v59,v56
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// addi r7,r1,1232
	ctx.r7.s64 = ctx.r1.s64 + 1232;
	// vmrghw128 v50,v57,v54
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// addi r6,r1,1248
	ctx.r6.s64 = ctx.r1.s64 + 1248;
	// vmrglw128 v49,v59,v56
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// addi r30,r31,256
	ctx.r30.s64 = ctx.r31.s64 + 256;
	// vmrglw128 v48,v57,v54
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// addi r4,r1,1200
	ctx.r4.s64 = ctx.r1.s64 + 1200;
	// vmsum4fp128 v47,v61,v51
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// li r5,64
	ctx.r5.s64 = 64;
	// vmsum4fp128 v46,v61,v50
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// vmsum4fp128 v45,v61,v49
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v44,v61,v48
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v43,v55,v51
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v42,v55,v50
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v41,v55,v49
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v40,v55,v48
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v39,v53,v51
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v38,v53,v50
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v37,v53,v49
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v36,v53,v48
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmsum4fp128 v35,v52,v51
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v34,v52,v50
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v33,v52,v49
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v32,v52,v48
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vmrghw128 v63,v47,v46
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v62,v45,v44
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v61,v43,v42
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v60,v41,v40
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v58,v39,v38
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v57,v37,v36
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v56,v61,v60
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v55,v35,v34
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v54,v33,v32
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// stvx128 v59,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v53,v58,v57
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrghw128 v52,v55,v54
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// stvx128 v56,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82cb1160
	ctx.lr = 0x8261D654;
	sub_82CB1160(ctx, base);
	// addi r5,r1,1184
	ctx.r5.s64 = ctx.r1.s64 + 1184;
	// vmrghw128 v51,v127,v125
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v125.u32), _mm_load_si128((__m128i*)ctx.v127.u32)));
	// addi r4,r1,1008
	ctx.r4.s64 = ctx.r1.s64 + 1008;
	// vmrglw128 v50,v127,v125
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v125.u32), _mm_load_si128((__m128i*)ctx.v127.u32)));
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// lvx128 v43,r0,r30
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v42,r30,r27
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r5
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v49,v126,v63
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v126.u32)));
	// lvx128 v40,r30,r25
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v48,v126,v63
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v126.u32)));
	// lvx128 v63,r0,r4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r3
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v60,r30,r26
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v47,v51,v49
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v46,v50,v48
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrglw128 v45,v51,v49
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrglw128 v44,v50,v48
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmsum4fp128 v41,v43,v47
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v47.f32), 0xFF));
	// vmsum4fp128 v38,v43,v46
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v46.f32), 0xFF));
	// vmsum4fp128 v39,v43,v45
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vmsum4fp128 v37,v43,v44
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmsum4fp128 v36,v42,v47
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v47.f32), 0xFF));
	// vmsum4fp128 v35,v42,v46
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v46.f32), 0xFF));
	// vmsum4fp128 v34,v42,v45
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vmsum4fp128 v33,v42,v44
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmsum4fp128 v32,v40,v47
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v47.f32), 0xFF));
	// vmsum4fp128 v61,v40,v46
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v46.f32), 0xFF));
	// vmsum4fp128 v59,v40,v45
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vmsum4fp128 v58,v40,v44
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmrghw128 v55,v62,v123
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v123.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmsum4fp128 v56,v60,v47
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v47.f32), 0xFF));
	// vmrglw128 v51,v62,v123
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v123.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmsum4fp128 v54,v60,v46
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v46.f32), 0xFF));
	// vmrghw128 v47,v36,v35
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vmsum4fp128 v52,v60,v45
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vmrghw128 v46,v34,v33
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// vmsum4fp128 v50,v60,v44
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmrghw128 v49,v41,v38
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v48,v39,v37
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// addi r11,r1,1072
	ctx.r11.s64 = ctx.r1.s64 + 1072;
	// vmrghw128 v57,v63,v124
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v124.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r10,r1,1088
	ctx.r10.s64 = ctx.r1.s64 + 1088;
	// vmrglw128 v53,v63,v124
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v124.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r9,r1,1104
	ctx.r9.s64 = ctx.r1.s64 + 1104;
	// vmrghw128 v45,v32,v61
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// addi r8,r1,1120
	ctx.r8.s64 = ctx.r1.s64 + 1120;
	// vmrghw128 v43,v49,v48
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// vmrghw128 v41,v47,v46
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// addi r4,r1,1072
	ctx.r4.s64 = ctx.r1.s64 + 1072;
	// vmrghw128 v40,v53,v51
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// li r5,64
	ctx.r5.s64 = 64;
	// vmrglw128 v39,v53,v51
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmrghw128 v44,v57,v55
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrglw128 v42,v57,v55
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmsum4fp128 v34,v43,v40
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmrghw128 v36,v59,v58
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmsum4fp128 v32,v43,v39
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v38,v43,v44
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmrghw128 v33,v56,v54
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmsum4fp128 v37,v43,v42
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v35,v41,v44
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmrghw128 v62,v52,v50
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// vmsum4fp128 v63,v41,v40
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmrghw128 v60,v45,v36
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmsum4fp128 v61,v41,v42
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v59,v41,v39
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmrghw128 v58,v33,v62
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmsum4fp128 v57,v60,v44
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmsum4fp128 v56,v60,v40
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v54,v60,v39
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v53,v58,v44
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmsum4fp128 v52,v58,v40
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v51,v58,v42
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v50,v58,v39
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v39.f32), 0xFF));
	// vmsum4fp128 v55,v60,v42
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmrghw128 v49,v38,v34
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// vmrghw128 v48,v37,v32
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v47,v35,v63
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v46,v61,v59
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v45,v49,v48
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrghw128 v43,v57,v56
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v44,v47,v46
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v41,v53,v52
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// stvx128 v45,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v40,v51,v50
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v42,v55,v54
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// stvx128 v44,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v38,v41,v40
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v39,v43,v42
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// stvx128 v38,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v39,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82cb1160
	ctx.lr = 0x8261D7CC;
	sub_82CB1160(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x823829d8
	ctx.lr = 0x8261D7D8;
	sub_823829D8(ctx, base);
	// addi r7,r31,320
	ctx.r7.s64 = ctx.r31.s64 + 320;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82cb1160
	ctx.lr = 0x8261D7EC;
	sub_82CB1160(ctx, base);
loc_8261D7EC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82624e00
	ctx.lr = 0x8261D7FC;
	sub_82624E00(ctx, base);
	// lis r14,-31884
	ctx.r14.s64 = -2089549824;
	// lwz r11,25344(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 25344);
	// lwz r3,736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261D818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8261d9b8
	if (ctx.cr6.eq) goto loc_8261D9B8;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x823829d8
	ctx.lr = 0x8261D830;
	sub_823829D8(ctx, base);
	// lfs f0,952(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 952);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,960(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f0,f31
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f4,f0,f29
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f12,948(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 948);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f13,f29
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f11,968(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 968);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f13,f31
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f10,944(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 944);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f12,f29
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// fmuls f5,f12,f31
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmadds f3,f11,f29,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f9.f64));
	// fmadds f12,f11,f31,f4
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f4.f64));
	// fmadds f2,f10,f31,f8
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f8.f64));
	// fmadds f0,f10,f29,f7
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f7.f64));
	// lfs f11,984(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 984);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f13,964(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 964);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,976(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f31,f6
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f6.f64));
	// lfs f7,980(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 980);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f4,1000(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1000);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f9,f13,f29,f5
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f5.f64));
	// fmuls f11,f7,f31
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// lfs f7,992(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f4,f31
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// lfs f4,996(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 996);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f13,f7,f31
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f7,f4,f31
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fadds f4,f3,f10
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// fadds f3,f12,f10
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f2,f2,f6
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fadds f12,f8,f11
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fadds f10,f4,f5
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fadds f9,f3,f5
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// stfs f9,432(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// fadds f8,f2,f13
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// stfs f8,200(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fadds f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f6,424(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// fadds f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f5,428(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// fadds f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f4,204(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fabs f3,f10
	ctx.f3.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// stfs f3,208(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmuls f2,f6,f10
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f0,f8,f5
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f13,f9,f4
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmsubs f12,f8,f9,f2
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 - ctx.f2.f64));
	// stfs f12,412(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// fmsubs f11,f6,f4,f0
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 - ctx.f0.f64));
	// stfs f11,416(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// fmsubs f10,f5,f10,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 - ctx.f13.f64));
	// stfs f10,408(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// bl 0x82382590
	ctx.lr = 0x8261D924;
	sub_82382590(ctx, base);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82382590
	ctx.lr = 0x8261D930;
	sub_82382590(ctx, base);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82382590
	ctx.lr = 0x8261D93C;
	sub_82382590(ctx, base);
	// addi r8,r1,408
	ctx.r8.s64 = ctx.r1.s64 + 408;
	// addi r7,r1,424
	ctx.r7.s64 = ctx.r1.s64 + 424;
	// addi r6,r1,200
	ctx.r6.s64 = ctx.r1.s64 + 200;
	// addi r5,r1,568
	ctx.r5.s64 = ctx.r1.s64 + 568;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824100a0
	ctx.lr = 0x8261D958;
	sub_824100A0(ctx, base);
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261d9b8
	if (!ctx.cr6.eq) goto loc_8261D9B8;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8261d98c
	if (ctx.cr6.gt) goto loc_8261D98C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8261d994
	goto loc_8261D994;
loc_8261D98C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8261D994:
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,568
	ctx.r4.s64 = ctx.r1.s64 + 568;
	// bl 0x827743f8
	ctx.lr = 0x8261D9A4;
	sub_827743F8(ctx, base);
	// lwz r3,208(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261d9b8
	if (ctx.cr6.eq) goto loc_8261D9B8;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// bl 0x827fbc30
	ctx.lr = 0x8261D9B8;
	sub_827FBC30(ctx, base);
loc_8261D9B8:
	// lwz r11,1572(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8261daa0
	if (!ctx.cr6.eq) goto loc_8261DAA0;
	// lwz r30,176(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r11,108
	ctx.r11.s64 = 108;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r10,112
	ctx.r10.s64 = 112;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f13,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.f13.u32);
	// lfs f12,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.f11.u32);
	// stw r31,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r31.u32);
	// bl 0x8242d588
	ctx.lr = 0x8261D9FC;
	sub_8242D588(ctx, base);
	// lfs f10,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// stfs f27,496(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// lwz r3,1588(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
	// stfs f31,500(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 500, temp.u32);
	// stfs f31,504(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 504, temp.u32);
	// stfs f31,508(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 508, temp.u32);
	// stfs f31,512(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 512, temp.u32);
	// stfs f27,516(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 516, temp.u32);
	// stfs f31,520(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 520, temp.u32);
	// stfs f31,524(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 524, temp.u32);
	// stfs f31,528(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 528, temp.u32);
	// stfs f31,532(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 532, temp.u32);
	// stfs f27,536(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 536, temp.u32);
	// stfs f31,540(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 540, temp.u32);
	// stfs f31,552(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 552, temp.u32);
	// stfs f27,556(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 556, temp.u32);
	// stfs f9,548(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 548, temp.u32);
	// stfs f10,544(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 544, temp.u32);
	// bl 0x8242b740
	ctx.lr = 0x8261DA50;
	sub_8242B740(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,-20168(r17)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r17.u32 + -20168);
	// lwz r18,64(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + 64);
	// stw r30,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r30.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8229e490
	ctx.lr = 0x8261DA68;
	sub_8229E490(ctx, base);
	// lwz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r8,228(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8261DA88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,1588(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8242b0b0
	ctx.lr = 0x8261DA94;
	sub_8242B0B0(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x824301d0
	ctx.lr = 0x8261DAA0;
	sub_824301D0(ctx, base);
loc_8261DAA0:
	// lfs f13,388(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lfs f11,392(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// stfs f13,308(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// lwz r9,308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stfs f11,312(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// lwz r10,312(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,304(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f12,348(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// stfs f9,352(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// stw r10,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r10.u32);
	// stw r9,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// bl 0x82344b90
	ctx.lr = 0x8261DAF0;
	sub_82344B90(ctx, base);
	// lwz r8,220(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8261db18
	if (ctx.cr6.eq) goto loc_8261DB18;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// bl 0x829f92e8
	ctx.lr = 0x8261DB08;
	sub_829F92E8(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r5,25344(r14)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r14.u32 + 25344);
	// lwz r31,-31264(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// b 0x8261db28
	goto loc_8261DB28;
loc_8261DB18:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r31,-31264(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r5,25344(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
loc_8261DB28:
	// li r14,0
	ctx.r14.s64 = 0;
loc_8261DB2C:
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// lwz r10,744(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 744);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r16,r10
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r10.s32, ctx.xer);
	// stw r4,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// blt cr6,0x8261d2b4
	if (ctx.cr6.lt) goto loc_8261D2B4;
loc_8261DB48:
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82420370
	ctx.lr = 0x8261DB54;
	sub_82420370(ctx, base);
	// lwz r11,1572(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8261db74
	if (!ctx.cr6.eq) goto loc_8261DB74;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// lwz r3,1588(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
	// bl 0x823b6ad8
	ctx.lr = 0x8261DB74;
	sub_823B6AD8(ctx, base);
loc_8261DB74:
	// lwz r15,1580(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1580);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261DB8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r15)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8261DBA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,676(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8261dc74
	if (!ctx.cr6.gt) goto loc_8261DC74;
	// lwz r9,672(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_8261DBC8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f13.u64);
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8261dbe8
	if (ctx.cr6.gt) goto loc_8261DBE8;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8261DBE8:
	// lfs f12,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f13.u64);
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x8261dc04
	if (ctx.cr6.gt) goto loc_8261DC04;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_8261DC04:
	// lfs f13,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f11,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f11.u64);
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8261dc24
	if (ctx.cr6.lt) goto loc_8261DC24;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_8261DC24:
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f11.u64);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8261dc44
	if (ctx.cr6.lt) goto loc_8261DC44;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8261DC44:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f13.u64);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.f0.u64);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bne 0x8261dbc8
	if (!ctx.cr0.eq) goto loc_8261DBC8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
loc_8261DC74:
	// beq cr6,0x8261ded0
	if (ctx.cr6.eq) goto loc_8261DED0;
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// subf r10,r31,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8261ded0
	if (!ctx.cr6.eq) goto loc_8261DED0;
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r18,r11,-16712
	ctx.r18.s64 = ctx.r11.s64 + -16712;
	// beq cr6,0x8261dd0c
	if (ctx.cr6.eq) goto loc_8261DD0C;
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261DCB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r8,r31,32
	ctx.r8.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// stw r14,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r14.u32);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r8,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r8.u64);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// lfd f0,184(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lwz r27,1588(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
	// lfd f13,224(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f7,f27
	ctx.f7.f64 = ctx.f27.f64;
	// fmr f8,f27
	ctx.f8.f64 = ctx.f27.f64;
	// frsp f4,f12
	ctx.f4.f64 = double(float(ctx.f12.f64));
	// frsp f3,f11
	ctx.f3.f64 = double(float(ctx.f11.f64));
	// bl 0x8242bfa0
	ctx.lr = 0x8261DD08;
	sub_8242BFA0(ctx, base);
	// b 0x8261dd10
	goto loc_8261DD10;
loc_8261DD0C:
	// lwz r27,1588(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
loc_8261DD10:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261DD24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8261ddbc
	if (!ctx.cr6.lt) goto loc_8261DDBC;
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261DD40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r8,0(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8261DD68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r6,r30,32
	ctx.r6.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// stw r14,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r14.u32);
	// clrldi r5,r3,32
	ctx.r5.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f7,f27
	ctx.f7.f64 = ctx.f27.f64;
	// fmr f8,f27
	ctx.f8.f64 = ctx.f27.f64;
	// lfd f12,184(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// std r5,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// lfd f11,184(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f3,f10
	ctx.f3.f64 = double(float(ctx.f10.f64));
	// frsp f1,f9
	ctx.f1.f64 = double(float(ctx.f9.f64));
	// bl 0x8242bfa0
	ctx.lr = 0x8261DDBC;
	sub_8242BFA0(ctx, base);
loc_8261DDBC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8261de28
	if (ctx.cr6.eq) goto loc_8261DE28;
	// clrldi r9,r29,32
	ctx.r9.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// std r10,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r14,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r14.u32);
	// std r11,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r11.u64);
	// lfd f11,240(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// lfd f12,224(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fmr f8,f27
	ctx.f8.f64 = ctx.f27.f64;
	// fmr f7,f27
	ctx.f7.f64 = ctx.f27.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// frsp f3,f9
	ctx.f3.f64 = double(float(ctx.f9.f64));
	// frsp f4,f13
	ctx.f4.f64 = double(float(ctx.f13.f64));
	// frsp f1,f10
	ctx.f1.f64 = double(float(ctx.f10.f64));
	// bl 0x8242bfa0
	ctx.lr = 0x8261DE28;
	sub_8242BFA0(ctx, base);
loc_8261DE28:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261DE3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8261df5c
	if (!ctx.cr6.lt) goto loc_8261DF5C;
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261DE58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r28,32
	ctx.r9.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// stw r14,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r14.u32);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// clrldi r7,r31,32
	ctx.r7.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// std r8,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r8.u64);
	// clrldi r6,r30,32
	ctx.r6.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r7,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r7.u64);
	// lfd f9,240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f1,f9
	ctx.f1.f64 = double(ctx.f9.s64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfd f0,184(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// lfd f11,224(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lfd f13,184(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f4,f11
	ctx.f4.f64 = double(ctx.f11.s64);
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f7,f27
	ctx.f7.f64 = ctx.f27.f64;
	// fmr f8,f27
	ctx.f8.f64 = ctx.f27.f64;
	// frsp f3,f12
	ctx.f3.f64 = double(float(ctx.f12.f64));
	// frsp f2,f10
	ctx.f2.f64 = double(float(ctx.f10.f64));
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// bl 0x8242bfa0
	ctx.lr = 0x8261DECC;
	sub_8242BFA0(ctx, base);
	// b 0x8261df5c
	goto loc_8261DF5C;
loc_8261DED0:
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// addi r18,r11,-16712
	ctx.r18.s64 = ctx.r11.s64 + -16712;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8261DEEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r7,0(r15)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// std r8,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r8.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8261DF14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r5,r3,32
	ctx.r5.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r3,1588(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// std r5,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// stw r14,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r14.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f7,f27
	ctx.f7.f64 = ctx.f27.f64;
	// fmr f8,f27
	ctx.f8.f64 = ctx.f27.f64;
	// lfd f12,184(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f3,f11
	ctx.f3.f64 = double(float(ctx.f11.f64));
	// bl 0x8242bfa0
	ctx.lr = 0x8261DF58;
	sub_8242BFA0(ctx, base);
	// lwz r27,1588(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
loc_8261DF5C:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lis r17,-31885
	ctx.r17.s64 = -2089615360;
	// lwz r11,-31264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31264);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261dfe8
	if (ctx.cr6.eq) goto loc_8261DFE8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8261dfe8
	if (ctx.cr6.eq) goto loc_8261DFE8;
	// lwz r10,672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// addi r31,r11,664
	ctx.r31.s64 = ctx.r11.s64 + 664;
	// stw r14,668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 668, ctx.r14.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8261dfdc
	if (ctx.cr6.eq) goto loc_8261DFDC;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r14,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r14.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8261dfdc
	if (ctx.cr6.eq) goto loc_8261DFDC;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261dfbc
	if (!ctx.cr6.eq) goto loc_8261DFBC;
	// bl 0x822900a0
	ctx.lr = 0x8261DFB8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8261DFBC:
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
	ctx.lr = 0x8261DFD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8261DFDC:
	// lwz r11,-31264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31264);
	// lwz r3,332(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// bl 0x8265b7a0
	ctx.lr = 0x8261DFE8;
	sub_8265B7A0(ctx, base);
loc_8261DFE8:
	// lwz r11,-31264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31264);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r16,r10,11272
	ctx.r16.s64 = ctx.r10.s64 + 11272;
	// stw r16,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r16.u32);
	// lwz r10,384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261e27c
	if (ctx.cr6.eq) goto loc_8261E27C;
	// lis r10,-31885
	ctx.r10.s64 = -2089615360;
	// stw r14,384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 384, ctx.r14.u32);
	// lwz r3,28896(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28896);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261e02c
	if (ctx.cr6.eq) goto loc_8261E02C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261E02C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261E02C:
	// lwz r11,-31264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31264);
	// mr r19,r14
	ctx.r19.u64 = ctx.r14.u64;
	// lwz r10,376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8261e27c
	if (!ctx.cr6.gt) goto loc_8261E27C;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r21,r14
	ctx.r21.u64 = ctx.r14.u64;
	// addi r20,r11,-26244
	ctx.r20.s64 = ctx.r11.s64 + -26244;
loc_8261E04C:
	// lwz r11,-31264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31264);
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// add r24,r11,r21
	ctx.r24.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8261e260
	if (!ctx.cr6.gt) goto loc_8261E260;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
loc_8261E078:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8261e094
	if (ctx.cr6.eq) goto loc_8261E094;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8261e098
	goto loc_8261E098;
loc_8261E094:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
loc_8261E098:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8232e868
	ctx.lr = 0x8261E0A4;
	sub_8232E868(ctx, base);
	// lwz r30,188(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8261e150
	if (ctx.cr6.eq) goto loc_8261E150;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8261e0cc
	if (ctx.cr6.eq) goto loc_8261E0CC;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
loc_8261E0CC:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x8261e138
	if (!ctx.cr6.gt) goto loc_8261E138;
	// addi r10,r11,31
	ctx.r10.s64 = ctx.r11.s64 + 31;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r25,r8,5,0,26
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// bne cr6,0x8261e0fc
	if (!ctx.cr6.eq) goto loc_8261E0FC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8261e13c
	if (ctx.cr6.eq) goto loc_8261E13C;
loc_8261E0FC:
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// rlwinm r31,r25,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261e114
	if (!ctx.cr6.eq) goto loc_8261E114;
	// bl 0x822900a0
	ctx.lr = 0x8261E110;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8261E114:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261E130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x8261e13c
	goto loc_8261E13C;
loc_8261E138:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8261E13C:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82bea998
	ctx.lr = 0x8261E150;
	sub_82BEA998(ctx, base);
loc_8261E150:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261e198
	if (ctx.cr6.eq) goto loc_8261E198;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8261e1c8
	if (ctx.cr6.eq) goto loc_8261E1C8;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261e178
	if (!ctx.cr6.eq) goto loc_8261E178;
	// bl 0x822900a0
	ctx.lr = 0x8261E174;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8261E178:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261E194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8261E198:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8261e1c8
	if (ctx.cr6.eq) goto loc_8261E1C8;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261e1b4
	if (!ctx.cr6.eq) goto loc_8261E1B4;
	// bl 0x822900a0
	ctx.lr = 0x8261E1B0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8261E1B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261E1C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261E1C8:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stw r14,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r14.u32);
	// addi r23,r23,12
	ctx.r23.s64 = ctx.r23.s64 + 12;
	// stw r14,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r14.u32);
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// stw r14,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r14.u32);
	// blt cr6,0x8261e078
	if (ctx.cr6.lt) goto loc_8261E078;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8261e22c
	if (ctx.cr6.eq) goto loc_8261E22C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8261e25c
	if (ctx.cr6.eq) goto loc_8261E25C;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261e20c
	if (!ctx.cr6.eq) goto loc_8261E20C;
	// bl 0x822900a0
	ctx.lr = 0x8261E208;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8261E20C:
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
	ctx.lr = 0x8261E228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8261E22C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8261e25c
	if (ctx.cr6.eq) goto loc_8261E25C;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261e248
	if (!ctx.cr6.eq) goto loc_8261E248;
	// bl 0x822900a0
	ctx.lr = 0x8261E244;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8261E248:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261E25C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261E25C:
	// lwz r27,1588(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
loc_8261E260:
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r21,r21,12
	ctx.r21.s64 = ctx.r21.s64 + 12;
	// lwz r11,-31264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31264);
	// lwz r10,376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// cmpw cr6,r19,r10
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8261e04c
	if (ctx.cr6.lt) goto loc_8261E04C;
loc_8261E27C:
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261e370
	if (ctx.cr6.eq) goto loc_8261E370;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8261e370
	if (!ctx.cr6.gt) goto loc_8261E370;
	// lwz r11,-31264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31264);
	// lwz r23,1572(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// ld r9,40(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 40);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8261e2b8
	if (ctx.cr6.gt) goto loc_8261E2B8;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// b 0x8261e2c0
	goto loc_8261E2C0;
loc_8261E2B8:
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8261E2C0:
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lfs f0,856(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 856);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8261e2d8
	if (ctx.cr6.gt) goto loc_8261E2D8;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// b 0x8261e2e0
	goto loc_8261E2E0;
loc_8261E2D8:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8261E2E0:
	// lwz r22,212(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lfs f13,852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,896(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 896, temp.u32);
	// stw r15,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, ctx.r15.u32);
	// cntlzw r11,r22
	ctx.r11.u64 = ctx.r22.u32 == 0 ? 32 : __builtin_clz(ctx.r22.u32);
	// stfs f31,648(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 648, temp.u32);
	// stfs f31,652(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 652, temp.u32);
	// stw r14,904(r1)
	PPC_STORE_U32(ctx.r1.u32 + 904, ctx.r14.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stfs f27,656(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 656, temp.u32);
	// stw r14,872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 872, ctx.r14.u32);
	// stfs f13,892(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 892, temp.u32);
	// stw r10,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r10.u32);
	// stfs f27,660(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 660, temp.u32);
	// stw r14,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r14.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r14,908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 908, ctx.r14.u32);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// std r9,884(r1)
	PPC_STORE_U64(ctx.r1.u32 + 884, ctx.r9.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r3.u32);
	// addi r6,r1,656
	ctx.r6.s64 = ctx.r1.s64 + 656;
	// stw r14,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r14.u32);
	// addi r5,r1,648
	ctx.r5.s64 = ctx.r1.s64 + 648;
	// stw r14,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r14.u32);
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261E358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823b6ad8
	ctx.lr = 0x8261E364;
	sub_823B6AD8(ctx, base);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x827d95d8
	ctx.lr = 0x8261E36C;
	sub_827D95D8(ctx, base);
	// b 0x8261e378
	goto loc_8261E378;
loc_8261E370:
	// lwz r22,212(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r23,1572(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
loc_8261E378:
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// addi r16,r11,-16728
	ctx.r16.s64 = ctx.r11.s64 + -16728;
	// lfs f26,-364(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -364);
	ctx.f26.f64 = double(temp.f32);
	// beq cr6,0x8261e74c
	if (ctx.cr6.eq) goto loc_8261E74C;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// stw r14,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r14.u32);
	// stw r14,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r14.u32);
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// addi r10,r11,19640
	ctx.r10.s64 = ctx.r11.s64 + 19640;
	// stw r14,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r14.u32);
	// stw r14,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r14.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r10.u32);
	// stw r14,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r14.u32);
	// stw r14,760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 760, ctx.r14.u32);
	// stw r14,764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 764, ctx.r14.u32);
	// bl 0x8242b918
	ctx.lr = 0x8261E3C4;
	sub_8242B918(ctx, base);
	// lwz r9,32(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,120(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,320(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 320);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8261E3E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8242b918
	ctx.lr = 0x8261E3EC;
	sub_8242B918(ctx, base);
	// lwz r11,-31264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r6,132(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt cr6,0x8261e408
	if (ctx.cr6.gt) goto loc_8261E408;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// b 0x8261e410
	goto loc_8261E410;
loc_8261E408:
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8261E410:
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lfs f0,856(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 856);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8261e428
	if (ctx.cr6.gt) goto loc_8261E428;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// b 0x8261e430
	goto loc_8261E430;
loc_8261E428:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8261E430:
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// ld r8,40(r23)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r23.u32 + 40);
	// lfs f13,852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,620(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 620, temp.u32);
	// stw r14,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r14.u32);
	// stfs f0,624(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 624, temp.u32);
	// stw r14,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r14.u32);
	// stw r14,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r14.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r14,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r14.u32);
	// stw r14,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r14.u32);
	// stw r15,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r15.u32);
	// stw r14,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r14.u32);
	// std r8,612(r1)
	PPC_STORE_U64(ctx.r1.u32 + 612, ctx.r8.u64);
	// stw r14,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r14.u32);
	// stw r14,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r14.u32);
	// stw r14,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r14.u32);
	// stw r9,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r9.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8261E488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r15)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8261E4A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r4,-15008
	ctx.r3.s64 = ctx.r4.s64 + -15008;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// lfs f0,264(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// beq cr6,0x8261e4dc
	if (ctx.cr6.eq) goto loc_8261E4DC;
	// addi r6,r1,212
	ctx.r6.s64 = ctx.r1.s64 + 212;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82363520
	ctx.lr = 0x8261E4D4;
	sub_82363520(ctx, base);
	// lwz r31,320(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r30,212(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
loc_8261E4DC:
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261e4f0
	if (!ctx.cr6.eq) goto loc_8261E4F0;
	// bl 0x822900a0
	ctx.lr = 0x8261E4EC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8261E4F0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,496
	ctx.r4.s64 = 496;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261E508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8261e620
	if (ctx.cr6.eq) goto loc_8261E620;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// stfs f31,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f31,260(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f31,264(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// stfs f31,268(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// lfs f30,-18084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18084);
	ctx.f30.f64 = double(temp.f32);
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// lfs f2,-15432(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15432);
	ctx.f2.f64 = double(temp.f32);
	// li r15,7
	ctx.r15.s64 = 7;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r14,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r14.u32);
	// addi r27,r1,200
	ctx.r27.s64 = ctx.r1.s64 + 200;
	// stw r14,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r14.u32);
	// addi r26,r1,256
	ctx.r26.s64 = ctx.r1.s64 + 256;
	// bl 0x8242afa8
	ctx.lr = 0x8261E564;
	sub_8242AFA8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// bl 0x8242ad50
	ctx.lr = 0x8261E57C;
	sub_8242AD50(ctx, base);
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// clrldi r5,r31,32
	ctx.r5.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// std r8,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r8.u64);
	// std r7,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r7.u64);
	// lfd f12,224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// std r5,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r5.u64);
	// lfd f11,240(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// lfd f9,272(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// lfd f0,184(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lwz r8,176(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// li r9,0
	ctx.r9.s64 = 0;
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f5,f27
	ctx.f5.f64 = ctx.f27.f64;
	// stw r16,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r16.u32);
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// frsp f4,f10
	ctx.f4.f64 = double(float(ctx.f10.f64));
	// frsp f3,f8
	ctx.f3.f64 = double(float(ctx.f8.f64));
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// bl 0x827d8ad0
	ctx.lr = 0x8261E618;
	sub_827D8AD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8261e62c
	goto loc_8261E62C;
loc_8261E620:
	// lwz r28,200(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// lwz r15,360(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
loc_8261E62C:
	// rlwinm r11,r15,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261e63c
	if (ctx.cr6.eq) goto loc_8261E63C;
	// rlwinm r15,r15,0,30,28
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_8261E63C:
	// rlwinm r11,r15,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261e64c
	if (ctx.cr6.eq) goto loc_8261E64C;
	// rlwinm r15,r15,0,31,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_8261E64C:
	// clrlwi r11,r15,31
	ctx.r11.u64 = ctx.r15.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261e68c
	if (ctx.cr6.eq) goto loc_8261E68C;
	// rlwinm r15,r15,0,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8261e68c
	if (ctx.cr6.eq) goto loc_8261E68C;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261e678
	if (!ctx.cr6.eq) goto loc_8261E678;
	// bl 0x822900a0
	ctx.lr = 0x8261E674;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8261E678:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261E68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261E68C:
	// lwz r10,596(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r9,600(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 600);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lwz r3,592(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r11,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r11.u32);
	// ble cr6,0x8261e710
	if (!ctx.cr6.gt) goto loc_8261E710;
	// addi r10,r11,31
	ctx.r10.s64 = ctx.r11.s64 + 31;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r10,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r10.u32);
	// bne cr6,0x8261e6d0
	if (!ctx.cr6.eq) goto loc_8261E6D0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8261e710
	if (ctx.cr6.eq) goto loc_8261E710;
loc_8261E6D0:
	// lwz r11,28888(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261e6ec
	if (!ctx.cr6.eq) goto loc_8261E6EC;
	// bl 0x822900a0
	ctx.lr = 0x8261E6E8;
	sub_822900A0(ctx, base);
	// lwz r11,28888(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8261E6EC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8261E70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r3.u32);
loc_8261E710:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261e720
	if (ctx.cr0.eq) goto loc_8261E720;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_8261E720:
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// lwz r3,1588(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
	// bl 0x823b6ad8
	ctx.lr = 0x8261E72C;
	sub_823B6AD8(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x827d95d8
	ctx.lr = 0x8261E734;
	sub_827D95D8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,740
	ctx.r3.s64 = ctx.r1.s64 + 740;
	// addi r10,r11,17368
	ctx.r10.s64 = ctx.r11.s64 + 17368;
	// stw r10,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r10.u32);
	// bl 0x823bd268
	ctx.lr = 0x8261E748;
	sub_823BD268(ctx, base);
	// b 0x8261e750
	goto loc_8261E750;
loc_8261E74C:
	// lwz r15,360(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
loc_8261E750:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r21,1588(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
	// lwz r11,19044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261eb94
	if (ctx.cr6.eq) goto loc_8261EB94;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r24,176(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// lis r25,-31882
	ctx.r25.s64 = -2089418752;
	// stw r27,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r27.u32);
	// lwz r29,25344(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r11,744(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 744);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8261eab8
	if (!ctx.cr6.gt) goto loc_8261EAB8;
	// lis r28,-31882
	ctx.r28.s64 = -2089418752;
	// lis r26,-31882
	ctx.r26.s64 = -2089418752;
loc_8261E790:
	// lwz r11,740(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 740);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8261eaa4
	if (ctx.cr6.eq) goto loc_8261EAA4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261eaa4
	if (ctx.cr6.eq) goto loc_8261EAA4;
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82624ec0
	ctx.lr = 0x8261E7BC;
	sub_82624EC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8261eaa4
	if (ctx.cr6.eq) goto loc_8261EAA4;
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// li r12,108
	ctx.r12.s64 = 108;
	// stfiwx f13,r24,r12
	PPC_STORE_U32(ctx.r24.u32 + ctx.r12.u32, ctx.f13.u32);
	// lfs f12,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,120(r24)
	PPC_STORE_U32(ctx.r24.u32 + 120, ctx.r30.u32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// li r12,112
	ctx.r12.s64 = 112;
	// stfiwx f11,r24,r12
	PPC_STORE_U32(ctx.r24.u32 + ctx.r12.u32, ctx.f11.u32);
	// bl 0x824303d0
	ctx.lr = 0x8261E7F4;
	sub_824303D0(ctx, base);
	// lwz r11,112(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 112);
	// lwz r10,108(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 108);
	// stfs f27,496(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// stfs f31,500(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 500, temp.u32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// stfs f31,504(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 504, temp.u32);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// stfs f31,508(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 508, temp.u32);
	// std r8,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r8.u64);
	// lfd f8,224(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// stfs f31,512(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 512, temp.u32);
	// lfd f10,184(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// stfs f5,80(r24)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r24.u32 + 80, temp.u32);
	// stfs f27,516(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 516, temp.u32);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// stfs f31,520(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 520, temp.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stfs f31,524(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 524, temp.u32);
	// stfs f31,528(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 528, temp.u32);
	// stfs f31,532(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 532, temp.u32);
	// stfs f27,536(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 536, temp.u32);
	// stfs f31,540(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 540, temp.u32);
	// stfs f31,552(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 552, temp.u32);
	// stfs f27,556(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 556, temp.u32);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// stfs f6,84(r24)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r24.u32 + 84, temp.u32);
	// lfs f4,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,544(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 544, temp.u32);
	// lfs f3,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,548(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 548, temp.u32);
	// bl 0x8242b740
	ctx.lr = 0x8261E880;
	sub_8242B740(ctx, base);
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r6,856(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 856);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8261e8e0
	if (ctx.cr6.eq) goto loc_8261E8E0;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,856(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	// stw r24,1052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1052, ctx.r24.u32);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// ld r4,-20232(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + -20232);
	// lwz r30,856(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 856);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e490
	ctx.lr = 0x8261E8B4;
	sub_8229E490(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,228(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 228);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8261E8D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r5,856(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 856);
	// stw r14,1052(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1052, ctx.r14.u32);
loc_8261E8E0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8242b0b0
	ctx.lr = 0x8261E8E8;
	sub_8242B0B0(ctx, base);
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// addi r3,r21,16
	ctx.r3.s64 = ctx.r21.s64 + 16;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8232d180
	ctx.lr = 0x8261E904;
	sub_8232D180(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8261ea9c
	if (!ctx.cr6.eq) goto loc_8261EA9C;
	// stfs f27,324(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// addi r31,r23,-60
	ctx.r31.s64 = ctx.r23.s64 + -60;
	// stfs f27,320(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,292(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,288(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// ld r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// ld r4,-21072(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + -21072);
	// addi r29,r1,256
	ctx.r29.s64 = ctx.r1.s64 + 256;
	// lwz r30,-60(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + -60);
	// ld r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// std r10,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r10.u64);
	// std r11,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r11.u64);
	// bl 0x8229e490
	ctx.lr = 0x8261E948;
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
	ctx.lr = 0x8261E964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// ld r8,256(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// ld r7,264(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// std r8,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r8.u64);
	// std r7,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r7.u64);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8261E988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,4(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261E9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r8,r31,32
	ctx.r8.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfs f0,264(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// std r8,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r8.u64);
	// lfd f12,272(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// std r9,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfd f13,240(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// lfs f6,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f10.f64 = double(temp.f32);
	// lwz r3,18208(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18208);
	// lfs f8,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f8.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmuls f5,f0,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fmuls f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fctiwz f2,f5
	ctx.f2.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfd f2,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.f2.u64);
	// fmuls f1,f10,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fctiwz f13,f3
	ctx.f13.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// fmuls f0,f8,f4
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fctiwz f12,f1
	ctx.f12.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// fctiwz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f11,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.f11.u64);
	// lwz r4,396(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// stw r4,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r4.u32);
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// stfd f13,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.f13.u64);
	// lwz r6,380(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// stfd f12,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.f12.u64);
	// lwz r5,380(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// stw r6,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r6.u32);
	// stw r7,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r7.u32);
	// stw r5,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r5.u32);
	// bne cr6,0x8261ea90
	if (!ctx.cr6.eq) goto loc_8261EA90;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261ea4c
	if (!ctx.cr6.eq) goto loc_8261EA4C;
	// bl 0x822900a0
	ctx.lr = 0x8261EA48;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8261EA4C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261EA64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261ea88
	if (ctx.cr6.eq) goto loc_8261EA88;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r14,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r14.u32);
	// stw r14,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r14.u32);
	// stw r14,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r14.u32);
	// stw r14,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r14.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x8261ea8c
	goto loc_8261EA8C;
loc_8261EA88:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_8261EA8C:
	// stw r3,18208(r28)
	PPC_STORE_U32(ctx.r28.u32 + 18208, ctx.r3.u32);
loc_8261EA90:
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x824092e8
	ctx.lr = 0x8261EA9C;
	sub_824092E8(ctx, base);
loc_8261EA9C:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r29,25344(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
loc_8261EAA4:
	// lwz r11,744(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 744);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r27,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r27.u32);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8261e790
	if (ctx.cr6.lt) goto loc_8261E790;
loc_8261EAB8:
	// lwz r27,1580(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1580);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261EAD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,108(r24)
	PPC_STORE_U32(ctx.r24.u32 + 108, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8261EAE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,112(r24)
	PPC_STORE_U32(ctx.r24.u32 + 112, ctx.r3.u32);
	// stw r14,120(r24)
	PPC_STORE_U32(ctx.r24.u32 + 120, ctx.r14.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824303d0
	ctx.lr = 0x8261EAF8;
	sub_824303D0(ctx, base);
	// lwz r7,112(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 112);
	// lwz r6,108(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 108);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r5,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// std r4,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r4.u64);
	// lfd f13,224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfd f0,184(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// stfs f9,80(r24)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r24.u32 + 80, temp.u32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,84(r24)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r24.u32 + 84, temp.u32);
	// bne cr6,0x8261eb54
	if (!ctx.cr6.eq) goto loc_8261EB54;
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,320(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8261EB54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261EB54:
	// stw r24,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r24.u32);
	// addi r31,r23,-60
	ctx.r31.s64 = ctx.r23.s64 + -60;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,-20232(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + -20232);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,-60(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + -60);
	// addi r29,r1,580
	ctx.r29.s64 = ctx.r1.s64 + 580;
	// bl 0x8229e490
	ctx.lr = 0x8261EB74;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261EB90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8261eb98
	goto loc_8261EB98;
loc_8261EB94:
	// lwz r27,1580(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1580);
loc_8261EB98:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r18,255
	ctx.r18.s64 = 255;
	// lwz r11,-28436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28436);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261f048
	if (ctx.cr6.eq) goto loc_8261F048;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82bea278
	ctx.lr = 0x8261EBB4;
	sub_82BEA278(ctx, base);
	// lfd f13,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// lis r10,-31881
	ctx.r10.s64 = -2089353216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// lis r6,-31882
	ctx.r6.s64 = -2089418752;
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// lwz r11,-17236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17236);
	// lfd f0,-3832(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -3832);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// bne cr6,0x8261ec00
	if (!ctx.cr6.eq) goto loc_8261EC00;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31881
	ctx.r9.s64 = -2089353216;
	// stw r11,-17236(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17236, ctx.r11.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r11,r9,-17240
	ctx.r11.s64 = ctx.r9.s64 + -17240;
	// b 0x8261ec14
	goto loc_8261EC14;
loc_8261EC00:
	// lis r11,-31881
	ctx.r11.s64 = -2089353216;
	// addi r11,r11,-17240
	ctx.r11.s64 = ctx.r11.s64 + -17240;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8261ec60
	if (ctx.cr6.eq) goto loc_8261EC60;
loc_8261EC14:
	// lfd f0,18320(r6)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + 18320);
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// fsub f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 - ctx.f0.f64;
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lfd f0,-18184(r5)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18184);
	// lfs f13,18340(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 18340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,18332(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18332);
	ctx.f12.f64 = double(temp.f32);
	// fmul f9,f10,f0
	ctx.f9.f64 = ctx.f10.f64 * ctx.f0.f64;
	// frsp f0,f9
	ctx.f0.f64 = double(float(ctx.f9.f64));
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,18340(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 18340, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8261ec50
	if (!ctx.cr6.gt) goto loc_8261EC50;
	// stfs f0,18332(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 18332, temp.u32);
loc_8261EC50:
	// lfs f30,18328(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18328);
	ctx.f30.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfs f28,18336(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18336);
	ctx.f28.f64 = double(temp.f32);
	// b 0x8261ec90
	goto loc_8261EC90;
loc_8261EC60:
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// li r10,20
	ctx.r10.s64 = 20;
	// lfs f0,18340(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32024(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32024);
	ctx.f13.f64 = double(temp.f32);
	// lfs f28,18332(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 18332);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f30,18328(r7)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 18328, temp.u32);
	// stfs f28,18336(r8)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r8.u32 + 18336, temp.u32);
	// stfs f31,18332(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 18332, temp.u32);
	// stfs f31,18340(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 18340, temp.u32);
loc_8261EC90:
	// stb r18,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r18.u8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stb r18,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r18.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r18,178(r1)
	PPC_STORE_U8(ctx.r1.u32 + 178, ctx.r18.u8);
	// stfd f11,18320(r6)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r6.u32 + 18320, ctx.f11.u64);
	// stb r18,179(r1)
	PPC_STORE_U8(ctx.r1.u32 + 179, ctx.r18.u8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8240a888
	ctx.lr = 0x8261ECB4;
	sub_8240A888(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fdivs f3,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f29.f64 / ctx.f28.f64));
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// fdivs f1,f29,f30
	ctx.f1.f64 = double(float(ctx.f29.f64 / ctx.f30.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lfd f29,-15704(r11)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r11.u32 + -15704);
	// addi r4,r10,-26232
	ctx.r4.s64 = ctx.r10.s64 + -26232;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x8232e868
	ctx.lr = 0x8261ECF0;
	sub_8232E868(ctx, base);
	// lwz r9,204(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r26,296(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r30,200(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bne cr6,0x8261ed0c
	if (!ctx.cr6.eq) goto loc_8261ED0C;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8261ED0C:
	// lis r29,-31884
	ctx.r29.s64 = -2089549824;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r28,r1,256
	ctx.r28.s64 = ctx.r1.s64 + 256;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,25344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25344);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r25,112(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8261ED30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r8,r3,-335
	ctx.r8.s64 = ctx.r3.s64 + -335;
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// clrldi r4,r8,32
	ctx.r4.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lfs f2,-15712(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -15712);
	ctx.f2.f64 = double(temp.f32);
	// lfd f0,184(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x8242cfd0
	ctx.lr = 0x8261ED64;
	sub_8242CFD0(ctx, base);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8261edac
	if (ctx.cr6.eq) goto loc_8261EDAC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8261eddc
	if (ctx.cr6.eq) goto loc_8261EDDC;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261ed8c
	if (!ctx.cr6.eq) goto loc_8261ED8C;
	// bl 0x822900a0
	ctx.lr = 0x8261ED88;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8261ED8C:
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
	ctx.lr = 0x8261EDA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8261EDAC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8261eddc
	if (ctx.cr6.eq) goto loc_8261EDDC;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261edc8
	if (!ctx.cr6.eq) goto loc_8261EDC8;
	// bl 0x822900a0
	ctx.lr = 0x8261EDC4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8261EDC8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261EDDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261EDDC:
	// stb r18,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r18.u8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stb r18,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r18.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r18,178(r1)
	PPC_STORE_U8(ctx.r1.u32 + 178, ctx.r18.u8);
	// stb r18,179(r1)
	PPC_STORE_U8(ctx.r1.u32 + 179, ctx.r18.u8);
	// bl 0x8240a888
	ctx.lr = 0x8261EDF8;
	sub_8240A888(ctx, base);
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r4,r11,-26180
	ctx.r4.s64 = ctx.r11.s64 + -26180;
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x8232e868
	ctx.lr = 0x8261EE2C;
	sub_8232E868(ctx, base);
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r30,200(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bne cr6,0x8261ee44
	if (!ctx.cr6.eq) goto loc_8261EE44;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8261EE44:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r28,r1,256
	ctx.r28.s64 = ctx.r1.s64 + 256;
	// lwz r11,25344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25344);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r25,112(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8261EE64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r8,r3,-335
	ctx.r8.s64 = ctx.r3.s64 + -335;
	// lis r5,-31904
	ctx.r5.s64 = -2090860544;
	// clrldi r4,r8,32
	ctx.r4.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lfs f2,-14200(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -14200);
	ctx.f2.f64 = double(temp.f32);
	// lfd f0,184(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x8242cfd0
	ctx.lr = 0x8261EE98;
	sub_8242CFD0(ctx, base);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8261eee0
	if (ctx.cr6.eq) goto loc_8261EEE0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8261ef10
	if (ctx.cr6.eq) goto loc_8261EF10;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261eec0
	if (!ctx.cr6.eq) goto loc_8261EEC0;
	// bl 0x822900a0
	ctx.lr = 0x8261EEBC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8261EEC0:
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
	ctx.lr = 0x8261EEDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8261EEE0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8261ef10
	if (ctx.cr6.eq) goto loc_8261EF10;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261eefc
	if (!ctx.cr6.eq) goto loc_8261EEFC;
	// bl 0x822900a0
	ctx.lr = 0x8261EEF8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8261EEFC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261EF10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261EF10:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,18884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18884);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261f04c
	if (ctx.cr6.eq) goto loc_8261F04C;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// stfs f27,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// stfs f31,260(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stfs f31,264(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// stfs f27,268(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// addi r4,r9,-26128
	ctx.r4.s64 = ctx.r9.s64 + -26128;
	// lfs f2,18892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18892);
	ctx.f2.f64 = double(temp.f32);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lfs f1,18888(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18888);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8232e868
	ctx.lr = 0x8261EF60;
	sub_8232E868(ctx, base);
	// lwz r8,204(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r30,200(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bne cr6,0x8261ef78
	if (!ctx.cr6.eq) goto loc_8261EF78;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8261EF78:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r28,r1,256
	ctx.r28.s64 = ctx.r1.s64 + 256;
	// lwz r11,25344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25344);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r29,112(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8261EF98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r8,r3,-335
	ctx.r8.s64 = ctx.r3.s64 + -335;
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// clrldi r4,r8,32
	ctx.r4.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lfs f2,-15716(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -15716);
	ctx.f2.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x8242cfd0
	ctx.lr = 0x8261EFCC;
	sub_8242CFD0(ctx, base);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8261f014
	if (ctx.cr6.eq) goto loc_8261F014;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8261f04c
	if (ctx.cr6.eq) goto loc_8261F04C;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261eff4
	if (!ctx.cr6.eq) goto loc_8261EFF4;
	// bl 0x822900a0
	ctx.lr = 0x8261EFF0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8261EFF4:
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
	ctx.lr = 0x8261F010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8261F014:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8261f04c
	if (ctx.cr6.eq) goto loc_8261F04C;
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261f030
	if (!ctx.cr6.eq) goto loc_8261F030;
	// bl 0x822900a0
	ctx.lr = 0x8261F02C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28888);
loc_8261F030:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261F044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8261f04c
	goto loc_8261F04C;
loc_8261F048:
	// lwz r26,296(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
loc_8261F04C:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-28432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28432);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261f9f4
	if (ctx.cr6.eq) goto loc_8261F9F4;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// stw r14,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r14.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r14,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r14.u32);
	// stw r14,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r14.u32);
	// stw r10,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r10.u32);
	// stw r14,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r14.u32);
	// lwz r9,-31264(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8261f094
	if (ctx.cr6.gt) goto loc_8261F094;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// b 0x8261f09c
	goto loc_8261F09C;
loc_8261F094:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8261F09C:
	// lwz r10,676(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 676);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// addi r19,r11,-19580
	ctx.r19.s64 = ctx.r11.s64 + -19580;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8261f2f0
	if (!ctx.cr6.gt) goto loc_8261F2F0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
	// rldicr r20,r9,42,63
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r9.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// li r21,747
	ctx.r21.s64 = 747;
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lis r25,-31884
	ctx.r25.s64 = -2089549824;
	// lis r28,-31884
	ctx.r28.s64 = -2089549824;
	// addi r27,r11,14488
	ctx.r27.s64 = ctx.r11.s64 + 14488;
	// addi r26,r10,14476
	ctx.r26.s64 = ctx.r10.s64 + 14476;
loc_8261F0E0:
	// lwz r11,672(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 672);
	// lwzx r30,r24,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8261f2dc
	if (ctx.cr6.eq) goto loc_8261F2DC;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261f108
	if (!ctx.cr6.eq) goto loc_8261F108;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261f2dc
	if (ctx.cr6.eq) goto loc_8261F2DC;
loc_8261F108:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r9,-31264(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8261f134
	if (ctx.cr6.eq) goto loc_8261F134;
loc_8261F11C:
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261f134
	if (ctx.cr6.eq) goto loc_8261F134;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261f11c
	if (!ctx.cr6.eq) goto loc_8261F11C;
loc_8261F134:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8261f148
	if (ctx.cr6.eq) goto loc_8261F148;
	// addi r11,r10,44
	ctx.r11.s64 = ctx.r10.s64 + 44;
	// b 0x8261f164
	goto loc_8261F164;
loc_8261F148:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8233e028
	ctx.lr = 0x8261F160;
	sub_8233E028(ctx, base);
	// addi r11,r1,184
	ctx.r11.s64 = ctx.r1.s64 + 184;
loc_8261F164:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// std r11,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r11.u64);
	// lwz r9,360(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8261f18c
	if (!ctx.cr6.eq) goto loc_8261F18C;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r10,364(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8261f2dc
	if (ctx.cr6.eq) goto loc_8261F2DC;
loc_8261F18C:
	// lwz r8,68(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8261f214
	if (ctx.cr6.eq) goto loc_8261F214;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8261f214
	if (!ctx.cr6.eq) goto loc_8261F214;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r10,-31264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8261f1e0
	if (!ctx.cr6.gt) goto loc_8261F1E0;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
loc_8261F1C4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8261f1e8
	if (ctx.cr6.eq) goto loc_8261F1E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8261f1c4
	if (ctx.cr6.lt) goto loc_8261F1C4;
loc_8261F1E0:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x8261f2d0
	goto loc_8261F2D0;
loc_8261F1E8:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8261f1e0
	if (ctx.cr6.eq) goto loc_8261F1E0;
	// lwz r11,388(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 388);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// ld r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261f20c
	if (ctx.cr6.eq) goto loc_8261F20C;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x8261f2d8
	goto loc_8261F2D8;
loc_8261F20C:
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x8261f2d8
	goto loc_8261F2D8;
loc_8261F214:
	// lwz r3,25328(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25328);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261f234
	if (!ctx.cr6.eq) goto loc_8261F234;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822c0b70
	ctx.lr = 0x8261F228;
	sub_822C0B70(ctx, base);
	// stw r3,25328(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25328, ctx.r3.u32);
	// bl 0x822c0c20
	ctx.lr = 0x8261F230;
	sub_822C0C20(ctx, base);
	// lwz r3,25328(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25328);
loc_8261F234:
	// lwz r11,24976(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24976);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261f248
	if (!ctx.cr6.eq) goto loc_8261F248;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
loc_8261F248:
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 60);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a0408
	ctx.lr = 0x8261F25C;
	sub_822A0408(ctx, base);
	// bl 0x822b05c8
	ctx.lr = 0x8261F260;
	sub_822B05C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8261f2cc
	if (ctx.cr6.eq) goto loc_8261F2CC;
	// lwz r3,-31268(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31268);
	// stw r21,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r21.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r14,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r14.u32);
	// bne cr6,0x8261f294
	if (!ctx.cr6.eq) goto loc_8261F294;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241c0c8
	ctx.lr = 0x8261F288;
	sub_8241C0C8(ctx, base);
	// stw r3,-31268(r29)
	PPC_STORE_U32(ctx.r29.u32 + -31268, ctx.r3.u32);
	// bl 0x8241c188
	ctx.lr = 0x8261F290;
	sub_8241C188(ctx, base);
	// lwz r3,-31268(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31268);
loc_8261F294:
	// lwz r11,24976(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24976);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261f2a8
	if (!ctx.cr6.eq) goto loc_8261F2A8;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
loc_8261F2A8:
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a0408
	ctx.lr = 0x8261F2BC;
	sub_822A0408(ctx, base);
	// bl 0x824c55c0
	ctx.lr = 0x8261F2C0;
	sub_824C55C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x8261f2d0
	if (!ctx.cr6.eq) goto loc_8261F2D0;
loc_8261F2CC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8261F2D0:
	// ld r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 60);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
loc_8261F2D8:
	// bl 0x82433e48
	ctx.lr = 0x8261F2DC;
	sub_82433E48(ctx, base);
loc_8261F2DC:
	// lwz r11,676(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 676);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8261f0e0
	if (ctx.cr6.lt) goto loc_8261F0E0;
loc_8261F2F0:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r3,25344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// bl 0x82294350
	ctx.lr = 0x8261F2FC;
	sub_82294350(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8261f344
	if (ctx.cr6.eq) goto loc_8261F344;
	// lwz r11,1100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1100);
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8261f344
	if (!ctx.cr6.gt) goto loc_8261F344;
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
loc_8261F31C:
	// lwz r11,1096(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1096);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// ldx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82433e48
	ctx.lr = 0x8261F330;
	sub_82433E48(ctx, base);
	// lwz r10,1100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1100);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8261f31c
	if (ctx.cr6.lt) goto loc_8261F31C;
loc_8261F344:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r20,1588(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// addi r6,r9,-26076
	ctx.r6.s64 = ctx.r9.s64 + -26076;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lfs f2,-26236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26236);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x8242cfd0
	ctx.lr = 0x8261F374;
	sub_8242CFD0(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// lwz r10,-31264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8261f398
	if (ctx.cr6.gt) goto loc_8261F398;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// b 0x8261f3a0
	goto loc_8261F3A0;
loc_8261F398:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8261F3A0:
	// lwz r30,1008(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8261f4b8
	if (ctx.cr6.eq) goto loc_8261F4B8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r31,-1
	ctx.r31.s64 = -1;
	// lfs f30,-16900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16900);
	ctx.f30.f64 = double(temp.f32);
loc_8261F3B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82403298
	ctx.lr = 0x8261F3C0;
	sub_82403298(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261f4a4
	if (ctx.cr6.eq) goto loc_8261F4A4;
	// lwz r11,492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261f4a4
	if (ctx.cr6.eq) goto loc_8261F4A4;
	// stfs f31,848(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 848, temp.u32);
	// stw r14,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r14.u32);
	// stfs f31,852(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 852, temp.u32);
	// stw r14,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r14.u32);
	// stfs f31,856(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 856, temp.u32);
	// stw r31,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r31.u32);
	// stfs f31,776(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 776, temp.u32);
	// stw r14,808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 808, ctx.r14.u32);
	// stfs f31,780(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 780, temp.u32);
	// stw r14,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r14.u32);
	// stfs f31,784(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 784, temp.u32);
	// stw r14,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r14.u32);
	// stfs f31,788(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 788, temp.u32);
	// stw r14,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r14.u32);
	// stfs f31,792(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 792, temp.u32);
	// stw r14,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, ctx.r14.u32);
	// stfs f31,796(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 796, temp.u32);
	// stw r14,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r14.u32);
	// stfs f27,800(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 800, temp.u32);
	// stw r14,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r14.u32);
	// stw r31,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r31.u32);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// stw r14,840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 840, ctx.r14.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,848
	ctx.r9.s64 = ctx.r1.s64 + 848;
	// li r8,24710
	ctx.r8.s64 = 24710;
	// addi r6,r1,200
	ctx.r6.s64 = ctx.r1.s64 + 200;
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// lwz r5,492(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// addi r7,r5,244
	ctx.r7.s64 = ctx.r5.s64 + 244;
	// lfs f0,252(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,-31264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lfs f12,244(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f11,248(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f11,204(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x827723e0
	ctx.lr = 0x8261F470;
	sub_827723E0(ctx, base);
	// lwz r11,832(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261f484
	if (ctx.cr6.eq) goto loc_8261F484;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x8261f4a4
	goto loc_8261F4A4;
loc_8261F484:
	// lwz r11,772(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261f4a0
	if (!ctx.cr6.eq) goto loc_8261F4A0;
	// lwz r11,820(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261f4a4
	if (ctx.cr6.eq) goto loc_8261F4A4;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
loc_8261F4A0:
	// lwz r29,40(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_8261F4A4:
	// lwz r30,504(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8261f3b8
	if (!ctx.cr6.eq) goto loc_8261F3B8;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r10,-31264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
loc_8261F4B8:
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r10,-27584
	ctx.r30.s64 = ctx.r10.s64 + -27584;
	// beq cr6,0x8261f4e4
	if (ctx.cr6.eq) goto loc_8261F4E4;
loc_8261F4CC:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8261f4f4
	if (ctx.cr6.eq) goto loc_8261F4F4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8261f4cc
	if (!ctx.cr6.eq) goto loc_8261F4CC;
loc_8261F4E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822960c0
	ctx.lr = 0x8261F4F0;
	sub_822960C0(ctx, base);
	// b 0x8261f518
	goto loc_8261F518;
loc_8261F4F4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8261f510
	if (!ctx.cr6.eq) goto loc_8261F510;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822960c0
	ctx.lr = 0x8261F50C;
	sub_822960C0(ctx, base);
	// b 0x8261f518
	goto loc_8261F518;
loc_8261F510:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8261F518;
	sub_8233E1A0(ctx, base);
loc_8261F518:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8261f584
	if (ctx.cr6.eq) goto loc_8261F584;
	// ori r31,r15,8
	ctx.r31.u64 = ctx.r15.u64 | 8;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8261F528:
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261f554
	if (ctx.cr6.eq) goto loc_8261F554;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261f528
	if (!ctx.cr6.eq) goto loc_8261F528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x822960c0
	ctx.lr = 0x8261F54C;
	sub_822960C0(ctx, base);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// b 0x8261f598
	goto loc_8261F598;
loc_8261F554:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8261f574
	if (!ctx.cr6.eq) goto loc_8261F574;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822960c0
	ctx.lr = 0x8261F56C;
	sub_822960C0(ctx, base);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// b 0x8261f598
	goto loc_8261F598;
loc_8261F574:
	// addi r4,r10,44
	ctx.r4.s64 = ctx.r10.s64 + 44;
	// bl 0x8233e1a0
	ctx.lr = 0x8261F57C;
	sub_8233E1A0(ctx, base);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// b 0x8261f598
	goto loc_8261F598;
loc_8261F584:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// ori r31,r15,16
	ctx.r31.u64 = ctx.r15.u64 | 16;
	// bl 0x822960c0
	ctx.lr = 0x8261F594;
	sub_822960C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8261F598:
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x82294bb8
	ctx.lr = 0x8261F5A0;
	sub_82294BB8(ctx, base);
	// rlwinm r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261f5b8
	if (ctx.cr6.eq) goto loc_8261F5B8;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// rlwinm r31,r31,0,28,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82299080
	ctx.lr = 0x8261F5B8;
	sub_82299080(ctx, base);
loc_8261F5B8:
	// rlwinm r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261f5cc
	if (ctx.cr6.eq) goto loc_8261F5CC;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82299080
	ctx.lr = 0x8261F5CC;
	sub_82299080(ctx, base);
loc_8261F5CC:
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x822b21c0
	ctx.lr = 0x8261F5D8;
	sub_822B21C0(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r21,296(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// beq cr6,0x8261f604
	if (ctx.cr6.eq) goto loc_8261F604;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261f5f8
	if (!ctx.cr6.eq) goto loc_8261F5F8;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_8261F5F8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,-26044
	ctx.r4.s64 = ctx.r11.s64 + -26044;
	// b 0x8261f618
	goto loc_8261F618;
loc_8261F604:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261f610
	if (!ctx.cr6.eq) goto loc_8261F610;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_8261F610:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,-26032
	ctx.r4.s64 = ctx.r11.s64 + -26032;
loc_8261F618:
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8232e868
	ctx.lr = 0x8261F620;
	sub_8232E868(ctx, base);
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8261f634
	if (!ctx.cr6.eq) goto loc_8261F634;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_8261F634:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822b2a20
	ctx.lr = 0x8261F63C;
	sub_822B2A20(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82299080
	ctx.lr = 0x8261F644;
	sub_82299080(ctx, base);
	// li r11,127
	ctx.r11.s64 = 127;
	// stb r18,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r18.u8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stb r11,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r11.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r11,178(r1)
	PPC_STORE_U8(ctx.r1.u32 + 178, ctx.r11.u8);
	// stb r11,179(r1)
	PPC_STORE_U8(ctx.r1.u32 + 179, ctx.r11.u8);
	// bl 0x8240a888
	ctx.lr = 0x8261F664;
	sub_8240A888(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r6,272(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261f678
	if (!ctx.cr6.eq) goto loc_8261F678;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
loc_8261F678:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x8242cfd0
	ctx.lr = 0x8261F69C;
	sub_8242CFD0(ctx, base);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lwz r17,340(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r19,336(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lfs f30,-15720(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15720);
	ctx.f30.f64 = double(temp.f32);
	// li r27,44
	ctx.r27.s64 = 44;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// li r22,128
	ctx.r22.s64 = 128;
	// addi r24,r11,-25956
	ctx.r24.s64 = ctx.r11.s64 + -25956;
	// addi r23,r10,-25972
	ctx.r23.s64 = ctx.r10.s64 + -25972;
	// addi r26,r9,-25992
	ctx.r26.s64 = ctx.r9.s64 + -25992;
	// addi r25,r8,-26020
	ctx.r25.s64 = ctx.r8.s64 + -26020;
loc_8261F6D8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8261f9c0
	if (ctx.cr6.lt) goto loc_8261F9C0;
	// cmpw cr6,r28,r17
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8261f9c0
	if (!ctx.cr6.lt) goto loc_8261F9C0;
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// add r31,r11,r19
	ctx.r31.u64 = ctx.r11.u64 + ctx.r19.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// bl 0x8233e1a0
	ctx.lr = 0x8261F6FC;
	sub_8233E1A0(ctx, base);
	// stb r18,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r18.u8);
	// stb r18,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r18.u8);
	// stb r18,178(r1)
	PPC_STORE_U8(ctx.r1.u32 + 178, ctx.r18.u8);
	// stb r18,179(r1)
	PPC_STORE_U8(ctx.r1.u32 + 179, ctx.r18.u8);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// bgt cr6,0x8261f7c0
	if (ctx.cr6.gt) goto loc_8261F7C0;
	// lis r12,-32158
	ctx.r12.s64 = -2107506688;
	// addi r12,r12,-2256
	ctx.r12.s64 = ctx.r12.s64 + -2256;
	// rlwinm r0,r31,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r31.u64) {
	case 0:
		goto loc_8261F9B0;
	case 1:
		goto loc_8261F790;
	case 2:
		goto loc_8261F778;
	case 3:
		goto loc_8261F760;
	case 4:
		goto loc_8261F748;
	case 5:
		goto loc_8261F7A8;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-1616(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -1616);
	// lwz r19,-2160(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2160);
	// lwz r19,-2184(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2184);
	// lwz r19,-2208(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2208);
	// lwz r19,-2232(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2232);
	// lwz r19,-2136(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2136);
loc_8261F748:
	// stb r18,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r18.u8);
	// stb r14,254(r1)
	PPC_STORE_U8(ctx.r1.u32 + 254, ctx.r14.u8);
	// stb r14,255(r1)
	PPC_STORE_U8(ctx.r1.u32 + 255, ctx.r14.u8);
	// stb r18,253(r1)
	PPC_STORE_U8(ctx.r1.u32 + 253, ctx.r18.u8);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// b 0x8261f7bc
	goto loc_8261F7BC;
loc_8261F760:
	// stb r18,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r18.u8);
	// stb r18,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r18.u8);
	// stb r22,222(r1)
	PPC_STORE_U8(ctx.r1.u32 + 222, ctx.r22.u8);
	// stb r14,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, ctx.r14.u8);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// b 0x8261f7bc
	goto loc_8261F7BC;
loc_8261F778:
	// stb r18,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r18.u8);
	// stb r18,217(r1)
	PPC_STORE_U8(ctx.r1.u32 + 217, ctx.r18.u8);
	// stb r18,218(r1)
	PPC_STORE_U8(ctx.r1.u32 + 218, ctx.r18.u8);
	// stb r14,219(r1)
	PPC_STORE_U8(ctx.r1.u32 + 219, ctx.r14.u8);
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// b 0x8261f7bc
	goto loc_8261F7BC;
loc_8261F790:
	// stb r18,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r18.u8);
	// stb r14,233(r1)
	PPC_STORE_U8(ctx.r1.u32 + 233, ctx.r14.u8);
	// stb r14,234(r1)
	PPC_STORE_U8(ctx.r1.u32 + 234, ctx.r14.u8);
	// stb r18,235(r1)
	PPC_STORE_U8(ctx.r1.u32 + 235, ctx.r18.u8);
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// b 0x8261f7bc
	goto loc_8261F7BC;
loc_8261F7A8:
	// stb r18,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r18.u8);
	// stb r18,213(r1)
	PPC_STORE_U8(ctx.r1.u32 + 213, ctx.r18.u8);
	// stb r14,214(r1)
	PPC_STORE_U8(ctx.r1.u32 + 214, ctx.r14.u8);
	// stb r18,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r18.u8);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
loc_8261F7BC:
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
loc_8261F7C0:
	// lwz r29,244(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r30,240(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x8261f7d8
	if (!ctx.cr6.eq) goto loc_8261F7D8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_8261F7D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b0470
	ctx.lr = 0x8261F7E4;
	sub_822B0470(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261f828
	if (ctx.cr6.eq) goto loc_8261F828;
	// lfs f1,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8261f828
	if (!ctx.cr6.gt) goto loc_8261F828;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8261f828
	if (ctx.cr6.eq) goto loc_8261F828;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8232e868
	ctx.lr = 0x8261F814;
	sub_8232E868(ctx, base);
	// addi r4,r1,568
	ctx.r4.s64 = ctx.r1.s64 + 568;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822951d0
	ctx.lr = 0x8261F820;
	sub_822951D0(ctx, base);
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// b 0x8261f8c0
	goto loc_8261F8C0;
loc_8261F828:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x8261f838
	if (!ctx.cr6.eq) goto loc_8261F838;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_8261F838:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x822960c0
	ctx.lr = 0x8261F840;
	sub_822960C0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x823647e8
	ctx.lr = 0x8261F848;
	sub_823647E8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r31,1
	ctx.r31.s64 = 1;
	// bge cr6,0x8261f858
	if (!ctx.cr6.lt) goto loc_8261F858;
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
loc_8261F858:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82299080
	ctx.lr = 0x8261F860;
	sub_82299080(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261f8cc
	if (ctx.cr6.eq) goto loc_8261F8CC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x8261f87c
	if (!ctx.cr6.eq) goto loc_8261F87C;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_8261F87C:
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x822960c0
	ctx.lr = 0x8261F884;
	sub_822960C0(ctx, base);
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x823647e8
	ctx.lr = 0x8261F88C;
	sub_823647E8(ctx, base);
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x82299080
	ctx.lr = 0x8261F898;
	sub_82299080(ctx, base);
	// fctiwz f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f29.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f29.f64));
	// stfd f0,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f0.u64);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x8232e868
	ctx.lr = 0x8261F8B0;
	sub_8232E868(ctx, base);
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822951d0
	ctx.lr = 0x8261F8BC;
	sub_822951D0(ctx, base);
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
loc_8261F8C0:
	// bl 0x82299080
	ctx.lr = 0x8261F8C4;
	sub_82299080(ctx, base);
	// lwz r30,240(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r29,244(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
loc_8261F8CC:
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x822b21c0
	ctx.lr = 0x8261F8D8;
	sub_822B21C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// beq cr6,0x8261f920
	if (ctx.cr6.eq) goto loc_8261F920;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8261f8f0
	if (!ctx.cr6.eq) goto loc_8261F8F0;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_8261F8F0:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8232e868
	ctx.lr = 0x8261F8FC;
	sub_8232E868(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261f910
	if (!ctx.cr6.eq) goto loc_8261F910;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_8261F910:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822b2a20
	ctx.lr = 0x8261F918;
	sub_822B2A20(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// b 0x8261f958
	goto loc_8261F958;
loc_8261F920:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8261f92c
	if (!ctx.cr6.eq) goto loc_8261F92C;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_8261F92C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// bl 0x8232e868
	ctx.lr = 0x8261F938;
	sub_8232E868(ctx, base);
	// lwz r11,428(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r4,424(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261f94c
	if (!ctx.cr6.eq) goto loc_8261F94C;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_8261F94C:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822b2a20
	ctx.lr = 0x8261F954;
	sub_822B2A20(ctx, base);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
loc_8261F958:
	// bl 0x82299080
	ctx.lr = 0x8261F95C;
	sub_82299080(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8240a888
	ctx.lr = 0x8261F968;
	sub_8240A888(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r6,240(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261f97c
	if (!ctx.cr6.eq) goto loc_8261F97C;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
loc_8261F97C:
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// std r10,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lfd f0,224(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// bl 0x8242cfd0
	ctx.lr = 0x8261F9AC;
	sub_8242CFD0(ctx, base);
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
loc_8261F9B0:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82299080
	ctx.lr = 0x8261F9B8;
	sub_82299080(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x8261f6d8
	goto loc_8261F6D8;
loc_8261F9C0:
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x82299080
	ctx.lr = 0x8261F9C8;
	sub_82299080(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82299080
	ctx.lr = 0x8261F9D0;
	sub_82299080(ctx, base);
	// lwz r3,348(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// bl 0x82294a58
	ctx.lr = 0x8261F9D8;
	sub_82294A58(ctx, base);
	// stw r14,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r14.u32);
	// stw r14,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r14.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x823b0b30
	ctx.lr = 0x8261F9E8;
	sub_823B0B30(ctx, base);
	// lwz r26,296(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r27,1580(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1580);
	// lwz r21,1588(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
loc_8261F9F4:
	// lis r11,-31886
	ctx.r11.s64 = -2089680896;
	// lwz r3,-21492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261fa18
	if (ctx.cr6.eq) goto loc_8261FA18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261fa18
	if (!ctx.cr6.eq) goto loc_8261FA18;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x826299c8
	ctx.lr = 0x8261FA18;
	sub_826299C8(ctx, base);
loc_8261FA18:
	// lis r30,-31884
	ctx.r30.s64 = -2089549824;
	// lis r28,-31883
	ctx.r28.s64 = -2089484288;
	// lwz r11,-3752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261fa38
	if (!ctx.cr6.eq) goto loc_8261FA38;
	// lwz r11,-28448(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261fb3c
	if (ctx.cr6.eq) goto loc_8261FB3C;
loc_8261FA38:
	// stw r14,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r14.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r14,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r14.u32);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// stw r14,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r14.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82418c20
	ctx.lr = 0x8261FA54;
	sub_82418C20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261fb2c
	if (ctx.cr6.eq) goto loc_8261FB2C;
	// lis r29,-31885
	ctx.r29.s64 = -2089615360;
	// lwz r11,28904(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28904);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8261fa78
	if (ctx.cr6.eq) goto loc_8261FA78;
	// lwz r4,108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// b 0x8261fa7c
	goto loc_8261FA7C;
loc_8261FA78:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8261FA7C:
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,28892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28892);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261FA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-3752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261fab0
	if (ctx.cr6.eq) goto loc_8261FAB0;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r5,r11,-25940
	ctx.r5.s64 = ctx.r11.s64 + -25940;
	// b 0x8261fab8
	goto loc_8261FAB8;
loc_8261FAB0:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r5,r11,-25916
	ctx.r5.s64 = ctx.r11.s64 + -25916;
loc_8261FAB8:
	// lwz r11,28904(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28904);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r4,r11,108
	ctx.r4.s64 = ctx.r11.s64 + 108;
	// bl 0x822b2280
	ctx.lr = 0x8261FAC8;
	sub_822B2280(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,200(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bne cr6,0x8261fadc
	if (!ctx.cr6.eq) goto loc_8261FADC;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8261FADC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r31,28892(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28892);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261FAF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8261FB0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,304(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x82334c50
	ctx.lr = 0x8261FB24;
	sub_82334C50(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82299080
	ctx.lr = 0x8261FB2C;
	sub_82299080(ctx, base);
loc_8261FB2C:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r11,-28448(r28)
	PPC_STORE_U32(ctx.r28.u32 + -28448, ctx.r11.u32);
	// bl 0x8230f1c8
	ctx.lr = 0x8261FB3C;
	sub_8230F1C8(ctx, base);
loc_8261FB3C:
	// lwz r3,476(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// bl 0x82294a58
	ctx.lr = 0x8261FB44;
	sub_82294A58(ctx, base);
	// stw r14,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r14.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stw r14,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r14.u32);
	// bl 0x82625c88
	ctx.lr = 0x8261FB54;
	sub_82625C88(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x827d95d8
	ctx.lr = 0x8261FB5C;
	sub_827D95D8(ctx, base);
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// addi r12,r1,-208
	ctx.r12.s64 = ctx.r1.s64 + -208;
	// bl 0x82ff1a44
	ctx.lr = 0x8261FB68;
	__restvmx_123(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b2c
	ctx.lr = 0x8261FB70;
	__restfpr_26(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261FB74"))) PPC_WEAK_FUNC(sub_8261FB74);
PPC_FUNC_IMPL(__imp__sub_8261FB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261FB78"))) PPC_WEAK_FUNC(sub_8261FB78);
PPC_FUNC_IMPL(__imp__sub_8261FB78) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261FB98"))) PPC_WEAK_FUNC(sub_8261FB98);
PPC_FUNC_IMPL(__imp__sub_8261FB98) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82294a58
	ctx.lr = 0x8261FBB4;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82625c88
	ctx.lr = 0x8261FBC8;
	sub_82625C88(ctx, base);
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

__attribute__((alias("__imp__sub_8261FBDC"))) PPC_WEAK_FUNC(sub_8261FBDC);
PPC_FUNC_IMPL(__imp__sub_8261FBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261FBE0"))) PPC_WEAK_FUNC(sub_8261FBE0);
PPC_FUNC_IMPL(__imp__sub_8261FBE0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,17368
	ctx.r9.s64 = ctx.r10.s64 + 17368;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x823bd268
	sub_823BD268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261FBF8"))) PPC_WEAK_FUNC(sub_8261FBF8);
PPC_FUNC_IMPL(__imp__sub_8261FBF8) {
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
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r10,736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261fc8c
	if (ctx.cr6.eq) goto loc_8261FC8C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261FC34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8261fc8c
	if (ctx.cr6.eq) goto loc_8261FC8C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824160b8
	ctx.lr = 0x8261FC48;
	sub_824160B8(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_8261FC50:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8261fc8c
	if (!ctx.cr6.lt) goto loc_8261FC8C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,288(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8261FC80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82416168
	ctx.lr = 0x8261FC88;
	sub_82416168(ctx, base);
	// b 0x8261fc50
	goto loc_8261FC50;
loc_8261FC8C:
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// lwz r10,-14508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14508);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261fca4
	if (ctx.cr6.eq) goto loc_8261FCA4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-14508(r11)
	PPC_STORE_U32(ctx.r11.u32 + -14508, ctx.r10.u32);
loc_8261FCA4:
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

__attribute__((alias("__imp__sub_8261FCBC"))) PPC_WEAK_FUNC(sub_8261FCBC);
PPC_FUNC_IMPL(__imp__sub_8261FCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261FCC0"))) PPC_WEAK_FUNC(sub_8261FCC0);
PPC_FUNC_IMPL(__imp__sub_8261FCC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8261FCE0"))) PPC_WEAK_FUNC(sub_8261FCE0);
PPC_FUNC_IMPL(__imp__sub_8261FCE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-60
	ctx.r3.s64 = ctx.r3.s64 + -60;
	// b 0x8261cd30
	sub_8261CD30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261FCE8"))) PPC_WEAK_FUNC(sub_8261FCE8);
PPC_FUNC_IMPL(__imp__sub_8261FCE8) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261FD10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8261fd38
	if (!ctx.cr6.eq) goto loc_8261FD38;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261FD2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8261fd3c
	if (ctx.cr6.eq) goto loc_8261FD3C;
loc_8261FD38:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8261FD3C:
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

__attribute__((alias("__imp__sub_8261FD50"))) PPC_WEAK_FUNC(sub_8261FD50);
PPC_FUNC_IMPL(__imp__sub_8261FD50) {
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
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28848);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261fd94
	if (ctx.cr6.eq) goto loc_8261FD94;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8261FD94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261FD94:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r3,736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,284(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8261FDB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,-60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// addi r3,r31,-60
	ctx.r3.s64 = ctx.r31.s64 + -60;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,300(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 300);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8261FDCC;
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

__attribute__((alias("__imp__sub_8261FDE0"))) PPC_WEAK_FUNC(sub_8261FDE0);
PPC_FUNC_IMPL(__imp__sub_8261FDE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x8261FDE8;
	__savegprlr_18(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r4.u32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-25892
	ctx.r4.s64 = ctx.r11.s64 + -25892;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// bl 0x82333168
	ctx.lr = 0x8261FE08;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826205f4
	if (ctx.cr6.eq) goto loc_826205F4;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// rldicr r30,r10,34,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r29,1
	ctx.r29.s64 = 1;
	// std r30,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r30.u64);
	// addi r10,r9,-25864
	ctx.r10.s64 = ctx.r9.s64 + -25864;
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// addi r9,r8,-25856
	ctx.r9.s64 = ctx.r8.s64 + -25856;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// lis r5,-32236
	ctx.r5.s64 = -2112618496;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// addi r8,r7,29492
	ctx.r8.s64 = ctx.r7.s64 + 29492;
	// rldicr r29,r29,37,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// addi r7,r6,-25836
	ctx.r7.s64 = ctx.r6.s64 + -25836;
	// std r29,164(r1)
	PPC_STORE_U64(ctx.r1.u32 + 164, ctx.r29.u64);
	// lis r3,-32236
	ctx.r3.s64 = -2112618496;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r7,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// addi r6,r5,-25812
	ctx.r6.s64 = ctx.r5.s64 + -25812;
	// rldicr r28,r28,40,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// stw r6,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r6.u32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// std r28,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r28.u64);
	// addi r5,r4,-25800
	ctx.r5.s64 = ctx.r4.s64 + -25800;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r19,128
	ctx.r19.s64 = 128;
	// stw r5,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r5.u32);
	// addi r4,r3,-25780
	ctx.r4.s64 = ctx.r3.s64 + -25780;
	// rldicr r29,r27,42,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// std r19,188(r1)
	PPC_STORE_U64(ctx.r1.u32 + 188, ctx.r19.u64);
	// addi r3,r31,26696
	ctx.r3.s64 = ctx.r31.s64 + 26696;
	// stw r4,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r4.u32);
	// addi r11,r11,-25880
	ctx.r11.s64 = ctx.r11.s64 + -25880;
	// std r29,212(r1)
	PPC_STORE_U64(ctx.r1.u32 + 212, ctx.r29.u64);
	// rldicr r28,r26,62,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u64, 62) & 0xFFFFFFFFFFFFFFFF;
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// li r27,4
	ctx.r27.s64 = 4;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// std r28,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r28.u64);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// std r27,236(r1)
	PPC_STORE_U64(ctx.r1.u32 + 236, ctx.r27.u64);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// std r29,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r29.u64);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// lis r5,-32236
	ctx.r5.s64 = -2112618496;
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// lis r3,-32236
	ctx.r3.s64 = -2112618496;
	// lis r31,-32236
	ctx.r31.s64 = -2112618496;
	// lis r25,-32236
	ctx.r25.s64 = -2112618496;
	// lis r24,-32236
	ctx.r24.s64 = -2112618496;
	// lis r23,-32236
	ctx.r23.s64 = -2112618496;
	// lis r21,-32236
	ctx.r21.s64 = -2112618496;
	// lis r28,-32236
	ctx.r28.s64 = -2112618496;
	// lis r27,-32236
	ctx.r27.s64 = -2112618496;
	// lis r29,-32236
	ctx.r29.s64 = -2112618496;
	// lis r26,-32236
	ctx.r26.s64 = -2112618496;
	// addi r11,r11,-25764
	ctx.r11.s64 = ctx.r11.s64 + -25764;
	// addi r10,r10,-25756
	ctx.r10.s64 = ctx.r10.s64 + -25756;
	// addi r9,r9,-25740
	ctx.r9.s64 = ctx.r9.s64 + -25740;
	// addi r8,r8,-25716
	ctx.r8.s64 = ctx.r8.s64 + -25716;
	// addi r7,r7,-25684
	ctx.r7.s64 = ctx.r7.s64 + -25684;
	// addi r6,r6,-25664
	ctx.r6.s64 = ctx.r6.s64 + -25664;
	// addi r5,r5,-25628
	ctx.r5.s64 = ctx.r5.s64 + -25628;
	// addi r4,r4,-25608
	ctx.r4.s64 = ctx.r4.s64 + -25608;
	// addi r3,r3,-25588
	ctx.r3.s64 = ctx.r3.s64 + -25588;
	// addi r31,r31,-25576
	ctx.r31.s64 = ctx.r31.s64 + -25576;
	// addi r25,r25,-25560
	ctx.r25.s64 = ctx.r25.s64 + -25560;
	// addi r24,r24,-25536
	ctx.r24.s64 = ctx.r24.s64 + -25536;
	// addi r23,r23,-25504
	ctx.r23.s64 = ctx.r23.s64 + -25504;
	// addi r21,r21,-25480
	ctx.r21.s64 = ctx.r21.s64 + -25480;
	// li r19,1
	ctx.r19.s64 = 1;
	// stw r11,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// rldicr r11,r19,41,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// li r18,1
	ctx.r18.s64 = 1;
	// stw r10,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// stw r31,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r31.u32);
	// addi r31,r28,-25448
	ctx.r31.s64 = ctx.r28.s64 + -25448;
	// stw r9,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r11.u64);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r8.u32);
	// rldicr r28,r18,46,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r18.u64, 46) & 0xFFFFFFFFFFFFFFFF;
	// stw r24,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r24.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// std r11,428(r1)
	PPC_STORE_U64(ctx.r1.u32 + 428, ctx.r11.u64);
	// li r24,32
	ctx.r24.s64 = 32;
	// rldicr r11,r10,43,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// stw r7,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r7.u32);
	// rldicr r10,r9,44,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw r6,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r6.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// std r28,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r28.u64);
	// rldicr r9,r8,51,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 51) & 0xFFFFFFFFFFFFFFFF;
	// stw r5,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r5.u32);
	// std r24,260(r1)
	PPC_STORE_U64(ctx.r1.u32 + 260, ctx.r24.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// std r11,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r11.u64);
	// li r8,1024
	ctx.r8.s64 = 1024;
	// stw r4,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r4.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// std r10,284(r1)
	PPC_STORE_U64(ctx.r1.u32 + 284, ctx.r10.u64);
	// rldicr r7,r7,47,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 47) & 0xFFFFFFFFFFFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r3.u32);
	// std r9,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r9.u64);
	// rldicr r6,r6,57,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// std r8,308(r1)
	PPC_STORE_U64(ctx.r1.u32 + 308, ctx.r8.u64);
	// rldicr r5,r5,58,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 58) & 0xFFFFFFFFFFFFFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r7,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r7.u64);
	// rldicr r4,r4,50,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 50) & 0xFFFFFFFFFFFFFFFF;
	// std r6,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r6.u64);
	// li r11,64
	ctx.r11.s64 = 64;
	// std r5,356(r1)
	PPC_STORE_U64(ctx.r1.u32 + 356, ctx.r5.u64);
	// rldicr r10,r3,52,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// std r4,380(r1)
	PPC_STORE_U64(ctx.r1.u32 + 380, ctx.r4.u64);
	// li r9,1
	ctx.r9.s64 = 1;
	// std r11,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r11.u64);
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// std r10,404(r1)
	PPC_STORE_U64(ctx.r1.u32 + 404, ctx.r10.u64);
	// li r7,512
	ctx.r7.s64 = 512;
	// stw r25,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r25.u32);
	// lis r5,-32236
	ctx.r5.s64 = -2112618496;
	// std r9,332(r1)
	PPC_STORE_U64(ctx.r1.u32 + 332, ctx.r9.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// std r8,440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 440, ctx.r8.u64);
	// lis r3,-32236
	ctx.r3.s64 = -2112618496;
	// std r7,452(r1)
	PPC_STORE_U64(ctx.r1.u32 + 452, ctx.r7.u64);
	// addi r27,r27,-25424
	ctx.r27.s64 = ctx.r27.s64 + -25424;
	// stw r31,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r31.u32);
	// lis r25,-32236
	ctx.r25.s64 = -2112618496;
	// stw r23,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r23.u32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// stw r27,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r27.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r21,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r21.u32);
	// addi r4,r5,-25136
	ctx.r4.s64 = ctx.r5.s64 + -25136;
	// rldicr r7,r6,38,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// addi r5,r3,-25332
	ctx.r5.s64 = ctx.r3.s64 + -25332;
	// addi r9,r29,-25408
	ctx.r9.s64 = ctx.r29.s64 + -25408;
	// addi r8,r26,-25380
	ctx.r8.s64 = ctx.r26.s64 + -25380;
	// addi r6,r25,-25364
	ctx.r6.s64 = ctx.r25.s64 + -25364;
	// addi r3,r11,-25296
	ctx.r3.s64 = ctx.r11.s64 + -25296;
	// lis r31,-32236
	ctx.r31.s64 = -2112618496;
	// lis r29,-32236
	ctx.r29.s64 = -2112618496;
	// lis r27,-32236
	ctx.r27.s64 = -2112618496;
	// lis r26,-32236
	ctx.r26.s64 = -2112618496;
	// lis r25,-32236
	ctx.r25.s64 = -2112618496;
	// lis r24,-32236
	ctx.r24.s64 = -2112618496;
	// rldicr r10,r10,39,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r8,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r8.u32);
	// addi r8,r31,-25272
	ctx.r8.s64 = ctx.r31.s64 + -25272;
	// stw r6,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r6.u32);
	// addi r31,r25,-25172
	ctx.r31.s64 = ctx.r25.s64 + -25172;
	// addi r6,r27,-25228
	ctx.r6.s64 = ctx.r27.s64 + -25228;
	// stw r5,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r5.u32);
	// lis r25,2
	ctx.r25.s64 = 131072;
	// std r7,464(r1)
	PPC_STORE_U64(ctx.r1.u32 + 464, ctx.r7.u64);
	// addi r5,r26,-25208
	ctx.r5.s64 = ctx.r26.s64 + -25208;
	// stw r9,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r9.u32);
	// rldicr r27,r11,55,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r8.u32);
	// std r10,476(r1)
	PPC_STORE_U64(ctx.r1.u32 + 476, ctx.r10.u64);
	// addi r8,r24,-25152
	ctx.r8.s64 = ctx.r24.s64 + -25152;
	// li r9,1
	ctx.r9.s64 = 1;
	// std r25,512(r1)
	PPC_STORE_U64(ctx.r1.u32 + 512, ctx.r25.u64);
	// lis r26,1
	ctx.r26.s64 = 65536;
	// stw r6,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r6.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// std r27,524(r1)
	PPC_STORE_U64(ctx.r1.u32 + 524, ctx.r27.u64);
	// lis r24,4
	ctx.r24.s64 = 262144;
	// stw r5,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r5.u32);
	// addi r10,r29,-25256
	ctx.r10.s64 = ctx.r29.s64 + -25256;
	// std r26,536(r1)
	PPC_STORE_U64(ctx.r1.u32 + 536, ctx.r26.u64);
	// lis r23,64
	ctx.r23.s64 = 4194304;
	// std r24,548(r1)
	PPC_STORE_U64(ctx.r1.u32 + 548, ctx.r24.u64);
	// rldicr r6,r9,61,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 61) & 0xFFFFFFFFFFFFFFFF;
	// stw r10,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r10.u32);
	// rldicr r5,r7,49,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// std r23,560(r1)
	PPC_STORE_U64(ctx.r1.u32 + 560, ctx.r23.u64);
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// stw r3,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r3.u32);
	// std r6,488(r1)
	PPC_STORE_U64(ctx.r1.u32 + 488, ctx.r6.u64);
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// std r5,500(r1)
	PPC_STORE_U64(ctx.r1.u32 + 500, ctx.r5.u64);
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// std r11,572(r1)
	PPC_STORE_U64(ctx.r1.u32 + 572, ctx.r11.u64);
	// stw r31,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r31.u32);
	// stw r8,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r8.u32);
	// std r10,584(r1)
	PPC_STORE_U64(ctx.r1.u32 + 584, ctx.r10.u64);
	// bl 0x82333168
	ctx.lr = 0x8262013C;
	sub_82333168(ctx, base);
	// lis r31,-31882
	ctx.r31.s64 = -2089418752;
	// lis r29,-31882
	ctx.r29.s64 = -2089418752;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82620160
	if (ctx.cr6.eq) goto loc_82620160;
	// lwz r11,18344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18344);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,18344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18344, ctx.r11.u32);
	// b 0x82620188
	goto loc_82620188;
loc_82620160:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-25124
	ctx.r4.s64 = ctx.r11.s64 + -25124;
	// bl 0x82333168
	ctx.lr = 0x82620170;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826201ec
	if (ctx.cr6.eq) goto loc_826201EC;
	// lwz r11,18348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18348);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,18348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 18348, ctx.r11.u32);
loc_82620188:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82624ff0
	ctx.lr = 0x82620190;
	sub_82624FF0(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r28,-31883
	ctx.r28.s64 = -2089484288;
	// addi r30,r11,-21944
	ctx.r30.s64 = ctx.r11.s64 + -21944;
loc_8262019C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826213c8
	if (!ctx.cr6.lt) goto loc_826213C8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,-31264(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31264);
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r7,64(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// lwz r6,72(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x826201e0
	if (!ctx.cr6.eq) goto loc_826201E0;
	// lwz r11,18344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18344);
	// lwz r10,18348(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18348);
	// stw r11,892(r3)
	PPC_STORE_U32(ctx.r3.u32 + 892, ctx.r11.u32);
	// stw r10,896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 896, ctx.r10.u32);
	// bl 0x8265b7a0
	ctx.lr = 0x826201E0;
	sub_8265B7A0(ctx, base);
loc_826201E0:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x826250a0
	ctx.lr = 0x826201E8;
	sub_826250A0(ctx, base);
	// b 0x8262019c
	goto loc_8262019C;
loc_826201EC:
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r29,r1,160
	ctx.r29.s64 = ctx.r1.s64 + 160;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_826201F8:
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82333168
	ctx.lr = 0x82620204;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8262027c
	if (!ctx.cr6.eq) goto loc_8262027C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplwi cr6,r31,36
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 36, ctx.xer);
	// blt cr6,0x826201f8
	if (ctx.cr6.lt) goto loc_826201F8;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// li r9,36
	ctx.r9.s64 = 36;
	// addi r4,r11,-25096
	ctx.r4.s64 = ctx.r11.s64 + -25096;
	// addi r8,r8,-5208
	ctx.r8.s64 = ctx.r8.s64 + -5208;
	// addi r7,r7,-5220
	ctx.r7.s64 = ctx.r7.s64 + -5220;
loc_8262023C:
	// ld r6,36(r20)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r20.u32 + 36);
	// ld r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 4);
	// and r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 & ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpldi cr6,r5,0
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, 0, ctx.xer);
	// bne cr6,0x82620258
	if (!ctx.cr6.eq) goto loc_82620258;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_82620258:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8232d178
	ctx.lr = 0x82620264;
	sub_8232D178(ctx, base);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x8262023c
	if (!ctx.cr0.eq) goto loc_8262023C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_8262027C:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r10,36(r20)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r20.u32 + 36);
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// ldx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r9.u32);
	// xor r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// cmpld cr6,r11,r30
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r30.u64, ctx.xer);
	// std r10,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r10.u64);
	// beq cr6,0x8262053c
	if (ctx.cr6.eq) goto loc_8262053C;
	// cmpld cr6,r11,r26
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r26.u64, ctx.xer);
	// beq cr6,0x8262053c
	if (ctx.cr6.eq) goto loc_8262053C;
	// cmpld cr6,r11,r25
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r25.u64, ctx.xer);
	// beq cr6,0x8262053c
	if (ctx.cr6.eq) goto loc_8262053C;
	// cmpld cr6,r11,r24
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r24.u64, ctx.xer);
	// beq cr6,0x8262053c
	if (ctx.cr6.eq) goto loc_8262053C;
	// cmpld cr6,r11,r28
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, ctx.xer);
	// bne cr6,0x82620464
	if (!ctx.cr6.eq) goto loc_82620464;
	// li r12,1
	ctx.r12.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// rldicr r12,r12,46,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 46) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x826202e0
	if (!ctx.cr6.eq) goto loc_826202E0;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_826202E0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823824d8
	ctx.lr = 0x826202E8;
	sub_823824D8(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826213c8
	if (!ctx.cr6.eq) goto loc_826213C8;
	// lis r26,-31884
	ctx.r26.s64 = -2089549824;
	// lis r27,-31885
	ctx.r27.s64 = -2089615360;
loc_826202FC:
	// lwz r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82426518
	ctx.lr = 0x82620308;
	sub_82426518(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82620374
	if (ctx.cr6.eq) goto loc_82620374;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82620350
	if (!ctx.cr6.gt) goto loc_82620350;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82620328:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82626088
	ctx.lr = 0x82620334;
	sub_82626088(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82620448
	if (!ctx.cr6.eq) goto loc_82620448;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82620328
	if (ctx.cr6.lt) goto loc_82620328;
loc_82620350:
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// bl 0x822cb270
	ctx.lr = 0x82620360;
	sub_822CB270(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x8262036c
	if (!ctx.cr6.eq) goto loc_8262036C;
	// lwz r30,25104(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25104);
loc_8262036C:
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// b 0x826203e4
	goto loc_826203E4;
loc_82620374:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82427ae8
	ctx.lr = 0x8262037C;
	sub_82427AE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82620428
	if (ctx.cr6.eq) goto loc_82620428;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826203c4
	if (!ctx.cr6.gt) goto loc_826203C4;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_8262039C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82626138
	ctx.lr = 0x826203A8;
	sub_82626138(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82620448
	if (!ctx.cr6.eq) goto loc_82620448;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8262039c
	if (ctx.cr6.lt) goto loc_8262039C;
loc_826203C4:
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// bl 0x822cb2c0
	ctx.lr = 0x826203D4;
	sub_822CB2C0(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x826203e0
	if (!ctx.cr6.eq) goto loc_826203E0;
	// lwz r30,25104(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25104);
loc_826203E0:
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
loc_826203E4:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,28868(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28868);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a93e8
	ctx.lr = 0x82620400;
	sub_822A93E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,484(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 484);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8262041C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d4918
	ctx.lr = 0x82620428;
	sub_825D4918(ctx, base);
loc_82620428:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82382368
	ctx.lr = 0x82620430;
	sub_82382368(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826202fc
	if (ctx.cr6.eq) goto loc_826202FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620448:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r9,484(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82620460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82620428
	goto loc_82620428;
loc_82620464:
	// cmpld cr6,r11,r23
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r23.u64, ctx.xer);
	// bne cr6,0x82620490
	if (!ctx.cr6.eq) goto loc_82620490;
	// rlwinm r11,r10,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82620480
	if (!ctx.cr6.eq) goto loc_82620480;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82620480:
	// bl 0x824641f8
	ctx.lr = 0x82620484;
	sub_824641F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620490:
	// cmpld cr6,r11,r27
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, ctx.xer);
	// bne cr6,0x826213c8
	if (!ctx.cr6.eq) goto loc_826213C8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82625128
	ctx.lr = 0x826204A0;
	sub_82625128(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// addi r30,r11,-21944
	ctx.r30.s64 = ctx.r11.s64 + -21944;
loc_826204AC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826213c8
	if (!ctx.cr6.lt) goto loc_826213C8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x824c5200
	ctx.lr = 0x826204D0;
	sub_824C5200(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82620530
	if (ctx.cr6.eq) goto loc_82620530;
	// lwz r10,-31264(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31264);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82620530
	if (!ctx.cr6.eq) goto loc_82620530;
	// lwz r10,448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r10,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82620514
	if (ctx.cr6.eq) goto loc_82620514;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r9,r10,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// b 0x8262051c
	goto loc_8262051C;
loc_82620514:
	// li r4,1
	ctx.r4.s64 = 1;
	// oris r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 536870912;
loc_8262051C:
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,484(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 484);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82620530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82620530:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826251d8
	ctx.lr = 0x82620538;
	sub_826251D8(ctx, base);
	// b 0x826204ac
	goto loc_826204AC;
loc_8262053C:
	// lis r12,4
	ctx.r12.s64 = 262144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r12,r12,7
	ctx.r12.u64 = ctx.r12.u64 | 7;
	// rldicr r12,r12,16,47
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 16) & 0xFFFFFFFFFFFF0000;
	// xor r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r12.u64;
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// std r10,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r10.u64);
	// bl 0x82371dd8
	ctx.lr = 0x8262055C;
	sub_82371DD8(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_82620568:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826213c8
	if (!ctx.cr6.lt) goto loc_826213C8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r8,448(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// rlwinm r7,r8,0,2,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826205e8
	if (ctx.cr6.eq) goto loc_826205E8;
	// lwz r11,480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826205e8
	if (ctx.cr6.eq) goto loc_826205E8;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826205c0
	if (ctx.cr6.eq) goto loc_826205C0;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826205e8
	if (ctx.cr6.eq) goto loc_826205E8;
loc_826205C0:
	// lwz r11,-31264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826205e8
	if (!ctx.cr6.eq) goto loc_826205E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826205E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826205E8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82371d50
	ctx.lr = 0x826205F0;
	sub_82371D50(ctx, base);
	// b 0x82620568
	goto loc_82620568;
loc_826205F4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-25080
	ctx.r4.s64 = ctx.r11.s64 + -25080;
	// bl 0x82333168
	ctx.lr = 0x82620604;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826208d4
	if (ctx.cr6.eq) goto loc_826208D4;
	// lwz r8,-24(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826213c8
	if (ctx.cr6.eq) goto loc_826213C8;
loc_8262061C:
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82620644
	if (ctx.cr0.lt) goto loc_82620644;
	// lwz r10,744(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 744);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82620644
	if (!ctx.cr6.lt) goto loc_82620644;
	// lwz r10,740(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 740);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8262061c
	if (ctx.cr6.eq) goto loc_8262061C;
loc_82620644:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826213c8
	if (ctx.cr6.eq) goto loc_826213C8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826213c8
	if (ctx.cr6.lt) goto loc_826213C8;
	// lwz r7,744(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 744);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x826213c8
	if (!ctx.cr6.lt) goto loc_826213C8;
	// lwz r9,740(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 740);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r6,64(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82620688
	if (ctx.cr6.eq) goto loc_82620688;
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r6,1096(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1096);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x826206ac
	if (!ctx.cr6.eq) goto loc_826206AC;
loc_82620688:
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82620644
	if (ctx.cr0.lt) goto loc_82620644;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82620644
	if (!ctx.cr6.lt) goto loc_82620644;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82620688
	if (ctx.cr6.eq) goto loc_82620688;
	// b 0x82620644
	goto loc_82620644;
loc_826206AC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-25060
	ctx.r4.s64 = ctx.r11.s64 + -25060;
	// bl 0x82333168
	ctx.lr = 0x826206BC;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826206f4
	if (ctx.cr6.eq) goto loc_826206F4;
	// lis r12,-161
	ctx.r12.s64 = -10551296;
	// ld r11,36(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r12,r12,4031
	ctx.r12.u64 = ctx.r12.u64 | 4031;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,16384
	ctx.r12.s64 = 1073741824;
	// ori r12,r12,1
	ctx.r12.u64 = ctx.r12.u64 | 1;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r9,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r9.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_826206F4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-25040
	ctx.r4.s64 = ctx.r11.s64 + -25040;
	// bl 0x82333168
	ctx.lr = 0x82620704;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82620738
	if (ctx.cr6.eq) goto loc_82620738;
	// li r12,-8193
	ctx.r12.s64 = -8193;
	// ld r11,36(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,65375
	ctx.r12.u64 = ctx.r12.u64 | 4284416000;
	// ori r12,r12,36799
	ctx.r12.u64 = ctx.r12.u64 | 36799;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r9,r10,34816
	ctx.r9.u64 = ctx.r10.u64 | 34816;
	// std r9,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r9.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620738:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-25008
	ctx.r4.s64 = ctx.r11.s64 + -25008;
	// bl 0x82333168
	ctx.lr = 0x82620748;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82620780
	if (ctx.cr6.eq) goto loc_82620780;
	// lis r12,-161
	ctx.r12.s64 = -10551296;
	// ld r11,36(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r12,r12,10239
	ctx.r12.u64 = ctx.r12.u64 | 10239;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,8192
	ctx.r12.s64 = 8192;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r12,r12,8256
	ctx.r12.u64 = ctx.r12.u64 | 8256;
	// or r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r9,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r9.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620780:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-24996
	ctx.r4.s64 = ctx.r11.s64 + -24996;
	// bl 0x82333168
	ctx.lr = 0x82620790;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826207c8
	if (ctx.cr6.eq) goto loc_826207C8;
	// lis r12,-161
	ctx.r12.s64 = -10551296;
	// ld r11,36(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r12,r12,6143
	ctx.r12.u64 = ctx.r12.u64 | 6143;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,8192
	ctx.r12.s64 = 8192;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r12,r12,4160
	ctx.r12.u64 = ctx.r12.u64 | 4160;
	// or r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r9,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r9.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_826207C8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-24968
	ctx.r4.s64 = ctx.r11.s64 + -24968;
	// bl 0x82333168
	ctx.lr = 0x826207D8;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82620810
	if (ctx.cr6.eq) goto loc_82620810;
	// lis r12,-161
	ctx.r12.s64 = -10551296;
	// ld r11,36(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r12,r12,18367
	ctx.r12.u64 = ctx.r12.u64 | 18367;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,8192
	ctx.r12.s64 = 8192;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r12,r12,16384
	ctx.r12.u64 = ctx.r12.u64 | 16384;
	// or r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r9,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r9.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620810:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-16652
	ctx.r4.s64 = ctx.r11.s64 + -16652;
	// bl 0x82333168
	ctx.lr = 0x82620820;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8262085c
	if (ctx.cr6.eq) goto loc_8262085C;
	// lis r12,-33
	ctx.r12.s64 = -2162688;
	// ld r11,36(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r12,r12,14271
	ctx.r12.u64 = ctx.r12.u64 | 14271;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,8192
	ctx.r12.s64 = 8192;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,128
	ctx.r12.u64 = ctx.r12.u64 | 8388608;
	// ori r12,r12,12290
	ctx.r12.u64 = ctx.r12.u64 | 12290;
	// or r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r9,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r9.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_8262085C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-16684
	ctx.r4.s64 = ctx.r11.s64 + -16684;
	// bl 0x82333168
	ctx.lr = 0x8262086C;
	sub_82333168(ctx, base);
	// ld r11,36(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826208a8
	if (ctx.cr6.eq) goto loc_826208A8;
	// lis r12,-129
	ctx.r12.s64 = -8454144;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r12,r12,10175
	ctx.r12.u64 = ctx.r12.u64 | 10175;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,8192
	ctx.r12.s64 = 8192;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,32
	ctx.r12.u64 = ctx.r12.u64 | 2097152;
	// ori r12,r12,8192
	ctx.r12.u64 = ctx.r12.u64 | 8192;
	// or r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r9,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r9.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_826208A8:
	// lis r12,-161
	ctx.r12.s64 = -10551296;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r12,r12,14335
	ctx.r12.u64 = ctx.r12.u64 | 14335;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,8192
	ctx.r12.s64 = 8192;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r12,r12,12352
	ctx.r12.u64 = ctx.r12.u64 | 12352;
	// or r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r9,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r9.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_826208D4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-24936
	ctx.r4.s64 = ctx.r11.s64 + -24936;
	// bl 0x82333168
	ctx.lr = 0x826208E4;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82620afc
	if (ctx.cr6.eq) goto loc_82620AFC;
	// lwz r8,-24(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826213c8
	if (ctx.cr6.eq) goto loc_826213C8;
loc_826208FC:
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82620924
	if (ctx.cr0.lt) goto loc_82620924;
	// lwz r10,744(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 744);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82620924
	if (!ctx.cr6.lt) goto loc_82620924;
	// lwz r10,740(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 740);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826208fc
	if (ctx.cr6.eq) goto loc_826208FC;
loc_82620924:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826213c8
	if (ctx.cr6.eq) goto loc_826213C8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826213c8
	if (ctx.cr6.lt) goto loc_826213C8;
	// lwz r7,744(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 744);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x826213c8
	if (!ctx.cr6.lt) goto loc_826213C8;
	// lwz r9,740(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 740);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r6,64(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82620968
	if (ctx.cr6.eq) goto loc_82620968;
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r6,1096(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1096);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8262098c
	if (!ctx.cr6.eq) goto loc_8262098C;
loc_82620968:
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82620924
	if (ctx.cr0.lt) goto loc_82620924;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82620924
	if (!ctx.cr6.lt) goto loc_82620924;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82620968
	if (ctx.cr6.eq) goto loc_82620968;
	// b 0x82620924
	goto loc_82620924;
loc_8262098C:
	// li r12,-8193
	ctx.r12.s64 = -8193;
	// ld r9,36(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 36);
	// li r8,8192
	ctx.r8.s64 = 8192;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// li r11,8256
	ctx.r11.s64 = 8256;
	// oris r12,r12,65375
	ctx.r12.u64 = ctx.r12.u64 | 4284416000;
	// li r7,12352
	ctx.r7.s64 = 12352;
	// ori r12,r12,1983
	ctx.r12.u64 = ctx.r12.u64 | 1983;
	// li r6,8192
	ctx.r6.s64 = 8192;
	// and r10,r9,r12
	ctx.r10.u64 = ctx.r9.u64 & ctx.r12.u64;
	// li r12,8192
	ctx.r12.s64 = 8192;
	// rldimi r11,r8,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// std r10,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r10.u64);
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// rldimi r7,r6,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// oris r12,r12,160
	ctx.r12.u64 = ctx.r12.u64 | 10485760;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// ori r12,r12,63552
	ctx.r12.u64 = ctx.r12.u64 | 63552;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x82620a80
	if (ctx.cr6.gt) goto loc_82620A80;
	// beq cr6,0x82620a5c
	if (ctx.cr6.eq) goto loc_82620A5C;
	// cmpldi cr6,r9,34816
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 34816, ctx.xer);
	// beq cr6,0x82620a48
	if (ctx.cr6.eq) goto loc_82620A48;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r7,r11,1
	ctx.r7.u64 = ctx.r11.u64 | 1;
	// rldicr r6,r7,45,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// cmpld cr6,r9,r6
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r6.u64, ctx.xer);
	// beq cr6,0x82620a34
	if (ctx.cr6.eq) goto loc_82620A34;
	// li r11,4160
	ctx.r11.s64 = 4160;
	// li r7,8192
	ctx.r7.s64 = 8192;
	// rldimi r11,r7,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x82620aa8
	if (!ctx.cr6.eq) goto loc_82620AA8;
	// li r12,8192
	ctx.r12.s64 = 8192;
	// li r3,1
	ctx.r3.s64 = 1;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r12,r12,16384
	ctx.r12.u64 = ctx.r12.u64 | 16384;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r11.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620A34:
	// ori r11,r10,34816
	ctx.r11.u64 = ctx.r10.u64 | 34816;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r11.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620A48:
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r11.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620A5C:
	// li r12,8192
	ctx.r12.s64 = 8192;
	// li r3,1
	ctx.r3.s64 = 1;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,32
	ctx.r12.u64 = ctx.r12.u64 | 2097152;
	// ori r12,r12,8192
	ctx.r12.u64 = ctx.r12.u64 | 8192;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r11.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620A80:
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x82620adc
	if (ctx.cr6.eq) goto loc_82620ADC;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// li r7,8192
	ctx.r7.s64 = 8192;
	// rldimi r11,r7,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x82620abc
	if (ctx.cr6.eq) goto loc_82620ABC;
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// ori r6,r11,8192
	ctx.r6.u64 = ctx.r11.u64 | 8192;
	// rldimi r6,r7,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
loc_82620AA8:
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r11.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620ABC:
	// lis r12,16384
	ctx.r12.s64 = 1073741824;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r12,r12,1
	ctx.r12.u64 = ctx.r12.u64 | 1;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r11.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620ADC:
	// li r12,8192
	ctx.r12.s64 = 8192;
	// li r3,1
	ctx.r3.s64 = 1;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r12,r12,4160
	ctx.r12.u64 = ctx.r12.u64 | 4160;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r11.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620AFC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-24908
	ctx.r4.s64 = ctx.r11.s64 + -24908;
	// bl 0x82333168
	ctx.lr = 0x82620B0C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82620d4c
	if (ctx.cr6.eq) goto loc_82620D4C;
	// lwz r8,-24(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + -24);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826213c8
	if (ctx.cr6.eq) goto loc_826213C8;
loc_82620B24:
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82620b4c
	if (ctx.cr0.lt) goto loc_82620B4C;
	// lwz r10,744(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 744);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82620b4c
	if (!ctx.cr6.lt) goto loc_82620B4C;
	// lwz r10,740(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 740);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82620b24
	if (ctx.cr6.eq) goto loc_82620B24;
loc_82620B4C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826213c8
	if (ctx.cr6.eq) goto loc_826213C8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826213c8
	if (ctx.cr6.lt) goto loc_826213C8;
	// lwz r7,744(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 744);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x826213c8
	if (!ctx.cr6.lt) goto loc_826213C8;
	// lwz r9,740(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 740);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r6,64(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82620b90
	if (ctx.cr6.eq) goto loc_82620B90;
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r6,1096(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1096);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82620bb4
	if (!ctx.cr6.eq) goto loc_82620BB4;
loc_82620B90:
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82620b4c
	if (ctx.cr0.lt) goto loc_82620B4C;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82620b4c
	if (!ctx.cr6.lt) goto loc_82620B4C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82620b90
	if (ctx.cr6.eq) goto loc_82620B90;
	// b 0x82620b4c
	goto loc_82620B4C;
loc_82620BB4:
	// li r12,-8193
	ctx.r12.s64 = -8193;
	// ld r9,36(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 36);
	// li r8,8192
	ctx.r8.s64 = 8192;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// li r11,8256
	ctx.r11.s64 = 8256;
	// oris r12,r12,65375
	ctx.r12.u64 = ctx.r12.u64 | 4284416000;
	// li r7,12352
	ctx.r7.s64 = 12352;
	// ori r12,r12,1983
	ctx.r12.u64 = ctx.r12.u64 | 1983;
	// li r6,8192
	ctx.r6.s64 = 8192;
	// and r10,r9,r12
	ctx.r10.u64 = ctx.r9.u64 & ctx.r12.u64;
	// li r12,8192
	ctx.r12.s64 = 8192;
	// rldimi r11,r8,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// std r10,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r10.u64);
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// rldimi r7,r6,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// oris r12,r12,160
	ctx.r12.u64 = ctx.r12.u64 | 10485760;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// ori r12,r12,63552
	ctx.r12.u64 = ctx.r12.u64 | 63552;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x82620cb0
	if (ctx.cr6.gt) goto loc_82620CB0;
	// beq cr6,0x82620c9c
	if (ctx.cr6.eq) goto loc_82620C9C;
	// cmpldi cr6,r9,34816
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 34816, ctx.xer);
	// beq cr6,0x82620c7c
	if (ctx.cr6.eq) goto loc_82620C7C;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r7,r11,1
	ctx.r7.u64 = ctx.r11.u64 | 1;
	// rldicr r6,r7,45,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// cmpld cr6,r9,r6
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r6.u64, ctx.xer);
	// beq cr6,0x82620c5c
	if (ctx.cr6.eq) goto loc_82620C5C;
	// li r11,4160
	ctx.r11.s64 = 4160;
	// li r7,8192
	ctx.r7.s64 = 8192;
	// rldimi r11,r7,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x82620ce0
	if (!ctx.cr6.eq) goto loc_82620CE0;
	// li r12,8192
	ctx.r12.s64 = 8192;
	// li r3,1
	ctx.r3.s64 = 1;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r12,r12,12352
	ctx.r12.u64 = ctx.r12.u64 | 12352;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r11.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620C5C:
	// li r12,8192
	ctx.r12.s64 = 8192;
	// li r3,1
	ctx.r3.s64 = 1;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r12,r12,16384
	ctx.r12.u64 = ctx.r12.u64 | 16384;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r11.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620C7C:
	// lis r12,16384
	ctx.r12.s64 = 1073741824;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r12,r12,1
	ctx.r12.u64 = ctx.r12.u64 | 1;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r11.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620C9C:
	// ori r11,r10,34816
	ctx.r11.u64 = ctx.r10.u64 | 34816;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r11.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620CB0:
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x82620d28
	if (ctx.cr6.eq) goto loc_82620D28;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r6,8192
	ctx.r6.s64 = 8192;
	// rldimi r7,r6,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// cmpld cr6,r9,r7
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x82620d08
	if (ctx.cr6.eq) goto loc_82620D08;
	// lis r7,32
	ctx.r7.s64 = 2097152;
	// ori r5,r7,8192
	ctx.r5.u64 = ctx.r7.u64 | 8192;
	// rldimi r5,r6,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// cmpld cr6,r9,r5
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r5.u64, ctx.xer);
	// beq cr6,0x82620cf4
	if (ctx.cr6.eq) goto loc_82620CF4;
loc_82620CE0:
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r11.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620CF4:
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r11.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620D08:
	// li r12,8192
	ctx.r12.s64 = 8192;
	// li r3,1
	ctx.r3.s64 = 1;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r12,r12,4160
	ctx.r12.u64 = ctx.r12.u64 | 4160;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r11.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620D28:
	// li r12,8192
	ctx.r12.s64 = 8192;
	// li r3,1
	ctx.r3.s64 = 1;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,32
	ctx.r12.u64 = ctx.r12.u64 | 2097152;
	// ori r12,r12,8192
	ctx.r12.u64 = ctx.r12.u64 | 8192;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,36(r20)
	PPC_STORE_U64(ctx.r20.u32 + 36, ctx.r11.u64);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620D4C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-25128
	ctx.r4.s64 = ctx.r11.s64 + -25128;
	// bl 0x82333168
	ctx.lr = 0x82620D5C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82620dd4
	if (ctx.cr6.eq) goto loc_82620DD4;
	// lwz r11,748(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r10,-24880
	ctx.r4.s64 = ctx.r10.s64 + -24880;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x82333168
	ctx.lr = 0x82620D7C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82620da0
	if (ctx.cr6.eq) goto loc_82620DA0;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-28436(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28436);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,-28436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28436, ctx.r11.u32);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620DA0:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,-24872
	ctx.r4.s64 = ctx.r11.s64 + -24872;
	// bl 0x82333168
	ctx.lr = 0x82620DB0;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826212f8
	if (ctx.cr6.eq) goto loc_826212F8;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-28432(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28432);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,-28432(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28432, ctx.r11.u32);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620DD4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-24856
	ctx.r4.s64 = ctx.r11.s64 + -24856;
	// bl 0x82333168
	ctx.lr = 0x82620DE4;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82620e08
	if (ctx.cr6.eq) goto loc_82620E08;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// stw r10,384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 384, ctx.r10.u32);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620E08:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-24808
	ctx.r4.s64 = ctx.r11.s64 + -24808;
	// bl 0x82333168
	ctx.lr = 0x82620E18;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82620e40
	if (ctx.cr6.eq) goto loc_82620E40;
	// lwz r11,-4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4);
	// addi r3,r20,-4
	ctx.r3.s64 = ctx.r20.s64 + -4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82620E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620E40:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-24788
	ctx.r4.s64 = ctx.r11.s64 + -24788;
	// bl 0x82333168
	ctx.lr = 0x82620E50;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82620ee0
	if (ctx.cr6.eq) goto loc_82620EE0;
	// lwz r11,748(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r10,-24764
	ctx.r4.s64 = ctx.r10.s64 + -24764;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x82333168
	ctx.lr = 0x82620E70;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82620e98
	if (ctx.cr6.eq) goto loc_82620E98;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25348);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// oris r9,r10,49152
	ctx.r9.u64 = ctx.r10.u64 | 3221225472;
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620E98:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,-24756
	ctx.r4.s64 = ctx.r11.s64 + -24756;
	// bl 0x82333168
	ctx.lr = 0x82620EA8;
	sub_82333168(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25348);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// beq cr6,0x82620ed0
	if (ctx.cr6.eq) goto loc_82620ED0;
	// clrlwi r9,r10,2
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620ED0:
	// oris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 1073741824;
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82620EE0:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-24748
	ctx.r4.s64 = ctx.r11.s64 + -24748;
	// bl 0x82333168
	ctx.lr = 0x82620EF0;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82621030
	if (ctx.cr6.eq) goto loc_82621030;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826213c8
	if (ctx.cr6.eq) goto loc_826213C8;
	// lwz r31,748(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb2688
	ctx.lr = 0x82620F10;
	sub_82CB2688(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb3cd0
	ctx.lr = 0x82620F20;
	sub_82CB3CD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82620f3c
	if (ctx.cr6.eq) goto loc_82620F3C;
	// li r4,120
	ctx.r4.s64 = 120;
	// bl 0x82cb3cd0
	ctx.lr = 0x82620F34;
	sub_82CB3CD0(ctx, base);
	// addi r31,r3,2
	ctx.r31.s64 = ctx.r3.s64 + 2;
	// b 0x82620f68
	goto loc_82620F68;
loc_82620F3C:
	// li r4,88
	ctx.r4.s64 = 88;
	// bl 0x82cb3cd0
	ctx.lr = 0x82620F44;
	sub_82CB3CD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82620f60
	if (ctx.cr6.eq) goto loc_82620F60;
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb3cd0
	ctx.lr = 0x82620F58;
	sub_82CB3CD0(ctx, base);
	// addi r31,r3,2
	ctx.r31.s64 = ctx.r3.s64 + 2;
	// b 0x82620f68
	goto loc_82620F68;
loc_82620F60:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
loc_82620F68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb2688
	ctx.lr = 0x82620F70;
	sub_82CB2688(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82620F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,119
	ctx.r4.s64 = 119;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb3cd0
	ctx.lr = 0x82620F9C;
	sub_82CB3CD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82620fe8
	if (!ctx.cr6.eq) goto loc_82620FE8;
	// li r4,87
	ctx.r4.s64 = 87;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb3cd0
	ctx.lr = 0x82620FB0;
	sub_82CB3CD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82620fe8
	if (!ctx.cr6.eq) goto loc_82620FE8;
	// li r4,102
	ctx.r4.s64 = 102;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb3cd0
	ctx.lr = 0x82620FC4;
	sub_82CB3CD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82620fe0
	if (!ctx.cr6.eq) goto loc_82620FE0;
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb3cd0
	ctx.lr = 0x82620FD8;
	sub_82CB3CD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82620fec
	if (ctx.cr6.eq) goto loc_82620FEC;
loc_82620FE0:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82620fec
	goto loc_82620FEC;
loc_82620FE8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82620FEC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x826213c8
	if (ctx.cr6.eq) goto loc_826213C8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x826213c8
	if (ctx.cr6.eq) goto loc_826213C8;
	// lwz r3,8(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82621024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82621030:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-24732
	ctx.r4.s64 = ctx.r11.s64 + -24732;
	// bl 0x82333168
	ctx.lr = 0x82621040;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8262110c
	if (ctx.cr6.eq) goto loc_8262110C;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lwz r31,748(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-28456(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28456, ctx.r11.u32);
	// bl 0x82cb2688
	ctx.lr = 0x82621060;
	sub_82CB2688(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// stw r3,19036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19036, ctx.r3.u32);
	// bge cr6,0x82621078
	if (!ctx.cr6.lt) goto loc_82621078;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82621084
	goto loc_82621084;
loc_82621078:
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// blt cr6,0x82621088
	if (ctx.cr6.lt) goto loc_82621088;
	// li r10,128
	ctx.r10.s64 = 128;
loc_82621084:
	// stw r10,19036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19036, ctx.r10.u32);
loc_82621088:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb3cd0
	ctx.lr = 0x82621094;
	sub_82CB3CD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826210f4
	if (ctx.cr6.eq) goto loc_826210F4;
	// bl 0x82cb2688
	ctx.lr = 0x826210A0;
	sub_82CB2688(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826210c0
	if (!ctx.cr6.lt) goto loc_826210C0;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,19040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19040, ctx.r11.u32);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_826210C0:
	// cmpwi cr6,r3,320
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 320, ctx.xer);
	// bge cr6,0x826210dc
	if (!ctx.cr6.lt) goto loc_826210DC;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// stw r3,19040(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19040, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_826210DC:
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// li r11,320
	ctx.r11.s64 = 320;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,19040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19040, ctx.r11.u32);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_826210F4:
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,19040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19040, ctx.r11.u32);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_8262110C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-24712
	ctx.r4.s64 = ctx.r11.s64 + -24712;
	// bl 0x82333168
	ctx.lr = 0x8262111C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826213b0
	if (!ctx.cr6.eq) goto loc_826213B0;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-24700
	ctx.r4.s64 = ctx.r11.s64 + -24700;
	// bl 0x82333168
	ctx.lr = 0x82621134;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826213b0
	if (!ctx.cr6.eq) goto loc_826213B0;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-24676
	ctx.r4.s64 = ctx.r11.s64 + -24676;
	// bl 0x82333168
	ctx.lr = 0x8262114C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826211b4
	if (ctx.cr6.eq) goto loc_826211B4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8251a190
	ctx.lr = 0x8262115C;
	sub_8251A190(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_82621164:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8262119c
	if (!ctx.cr6.lt) goto loc_8262119C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82516e80
	ctx.lr = 0x82621188;
	sub_82516E80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825185c0
	ctx.lr = 0x82621190;
	sub_825185C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8251a240
	ctx.lr = 0x82621198;
	sub_8251A240(ctx, base);
	// b 0x82621164
	goto loc_82621164;
loc_8262119C:
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,19208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19208, ctx.r11.u32);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_826211B4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-24648
	ctx.r4.s64 = ctx.r11.s64 + -24648;
	// bl 0x82333168
	ctx.lr = 0x826211C4;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826211ec
	if (ctx.cr6.eq) goto loc_826211EC;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-31572(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31572);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,-31572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31572, ctx.r11.u32);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_826211EC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-24616
	ctx.r4.s64 = ctx.r11.s64 + -24616;
	// bl 0x82333168
	ctx.lr = 0x826211FC;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82621224
	if (ctx.cr6.eq) goto loc_82621224;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,19044(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19044);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,19044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19044, ctx.r11.u32);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82621224:
	// lwz r11,28(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r31,748(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82621248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826213c8
	if (!ctx.cr6.eq) goto loc_826213C8;
	// lwz r11,-64(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -64);
	// addi r3,r20,-64
	ctx.r3.s64 = ctx.r20.s64 + -64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82621270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826213c8
	if (!ctx.cr6.eq) goto loc_826213C8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8262129C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826213c8
	if (!ctx.cr6.eq) goto loc_826213C8;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-24596
	ctx.r4.s64 = ctx.r11.s64 + -24596;
	// bl 0x82333168
	ctx.lr = 0x826212B4;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826212d4
	if (ctx.cr6.eq) goto loc_826212D4;
	// lis r10,-31886
	ctx.r10.s64 = -2089680896;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-22330(r10)
	PPC_STORE_U8(ctx.r10.u32 + -22330, ctx.r11.u8);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_826212D4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-24552
	ctx.r4.s64 = ctx.r11.s64 + -24552;
	// bl 0x82333168
	ctx.lr = 0x826212E4;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82621304
	if (ctx.cr6.eq) goto loc_82621304;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,17508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17508, ctx.r11.u32);
loc_826212F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82621304:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// addi r4,r11,-24524
	ctx.r4.s64 = ctx.r11.s64 + -24524;
	// bl 0x82333168
	ctx.lr = 0x82621314;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82621334
	if (ctx.cr6.eq) goto loc_82621334;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,17508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17508, ctx.r11.u32);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82621334:
	// lis r11,-31886
	ctx.r11.s64 = -2089680896;
	// lbz r10,-22330(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -22330);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826212f8
	if (ctx.cr6.eq) goto loc_826212F8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82625278
	ctx.lr = 0x8262134C;
	sub_82625278(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r30,748(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_82621358:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826212f8
	if (!ctx.cr6.lt) goto loc_826212F8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r3,76(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826213a4
	if (ctx.cr6.eq) goto loc_826213A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8262139C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826213c8
	if (!ctx.cr6.eq) goto loc_826213C8;
loc_826213A4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82625328
	ctx.lr = 0x826213AC;
	sub_82625328(ctx, base);
	// b 0x82621358
	goto loc_82621358;
loc_826213B0:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826213c8
	if (ctx.cr6.eq) goto loc_826213C8;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-28448(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28448, ctx.r11.u32);
loc_826213C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826213D4"))) PPC_WEAK_FUNC(sub_826213D4);
PPC_FUNC_IMPL(__imp__sub_826213D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826213D8"))) PPC_WEAK_FUNC(sub_826213D8);
PPC_FUNC_IMPL(__imp__sub_826213D8) {
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
	// lis r8,-31883
	ctx.r8.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// lis r5,-32236
	ctx.r5.s64 = -2112618496;
	// lwz r11,-25660(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25660);
	// addi r4,r7,14864
	ctx.r4.s64 = ctx.r7.s64 + 14864;
	// addi r3,r6,-22992
	ctx.r3.s64 = ctx.r6.s64 + -22992;
	// addi r7,r5,-22708
	ctx.r7.s64 = ctx.r5.s64 + -22708;
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// stw r10,-25660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25660, ctx.r10.u32);
loc_82621430:
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82621498
	if (!ctx.cr6.eq) goto loc_82621498;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82621430
	if (!ctx.cr6.eq) goto loc_82621430;
	// bl 0x827dc1f0
	ctx.lr = 0x82621450;
	sub_827DC1F0(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8262147c
	if (!ctx.cr6.eq) goto loc_8262147C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r4,588(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// bl 0x82621708
	ctx.lr = 0x8262147C;
	sub_82621708(ctx, base);
loc_8262147C:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r3,-31924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31924);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82621494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
loc_82621498:
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

__attribute__((alias("__imp__sub_826214B0"))) PPC_WEAK_FUNC(sub_826214B0);
PPC_FUNC_IMPL(__imp__sub_826214B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826214B4"))) PPC_WEAK_FUNC(sub_826214B4);
PPC_FUNC_IMPL(__imp__sub_826214B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826214B8"))) PPC_WEAK_FUNC(sub_826214B8);
PPC_FUNC_IMPL(__imp__sub_826214B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x827d89c0
	sub_827D89C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826214C0"))) PPC_WEAK_FUNC(sub_826214C0);
PPC_FUNC_IMPL(__imp__sub_826214C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x826214C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,-31264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31264);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826214f8
	if (ctx.cr6.eq) goto loc_826214F8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82621550
	if (!ctx.cr6.eq) goto loc_82621550;
loc_826214F8:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8262150c
	if (ctx.cr6.eq) goto loc_8262150C;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82621514
	goto loc_82621514;
loc_8262150C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11272
	ctx.r5.s64 = ctx.r11.s64 + 11272;
loc_82621514:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823be038
	ctx.lr = 0x82621524;
	sub_823BE038(ctx, base);
	// lwz r11,-31264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31264);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x8276f448
	ctx.lr = 0x82621540;
	sub_8276F448(ctx, base);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82295d40
	ctx.lr = 0x8262154C;
	sub_82295D40(ctx, base);
	// b 0x826215c4
	goto loc_826215C4;
loc_82621550:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r1,120
	ctx.r28.s64 = ctx.r1.s64 + 120;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r27,r1,136
	ctx.r27.s64 = ctx.r1.s64 + 136;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r26,r1,112
	ctx.r26.s64 = ctx.r1.s64 + 112;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x823121d8
	ctx.lr = 0x8262158C;
	sub_823121D8(ctx, base);
	// lwz r11,-31264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31264);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// ld r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x8276e728
	ctx.lr = 0x826215C0;
	sub_8276E728(ctx, base);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
loc_826215C4:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826215DC"))) PPC_WEAK_FUNC(sub_826215DC);
PPC_FUNC_IMPL(__imp__sub_826215DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826215E0"))) PPC_WEAK_FUNC(sub_826215E0);
PPC_FUNC_IMPL(__imp__sub_826215E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r7,424(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// rlwinm r10,r7,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r8,64(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82621674
	if (ctx.cr6.eq) goto loc_82621674;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,20268(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20268);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82621674
	if (!ctx.cr6.gt) goto loc_82621674;
	// lwz r11,20264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20264);
loc_82621654:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,64(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82621654
	if (ctx.cr6.lt) goto loc_82621654;
loc_82621674:
	// oris r11,r7,32768
	ctx.r11.u64 = ctx.r7.u64 | 2147483648;
	// stw r11,424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 424, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82621680"))) PPC_WEAK_FUNC(sub_82621680);
PPC_FUNC_IMPL(__imp__sub_82621680) {
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
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826216bc
	if (ctx.cr6.eq) goto loc_826216BC;
loc_826216A0:
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x826216d8
	if (!ctx.cr6.eq) goto loc_826216D8;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826216a0
	if (!ctx.cr6.eq) goto loc_826216A0;
loc_826216BC:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826216D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
loc_826216D8:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// bl 0x822a1020
	ctx.lr = 0x826216F0;
	sub_822A1020(ctx, base);
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

__attribute__((alias("__imp__sub_82621704"))) PPC_WEAK_FUNC(sub_82621704);
PPC_FUNC_IMPL(__imp__sub_82621704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82621708"))) PPC_WEAK_FUNC(sub_82621708);
PPC_FUNC_IMPL(__imp__sub_82621708) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82621798
	if (ctx.cr6.eq) goto loc_82621798;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-27584
	ctx.r6.s64 = ctx.r10.s64 + -27584;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r5,25104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822a9780
	ctx.lr = 0x82621750;
	sub_822A9780(ctx, base);
	// bl 0x826261f0
	ctx.lr = 0x82621754;
	sub_826261F0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82621798
	if (ctx.cr6.eq) goto loc_82621798;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82621778
	if (ctx.cr6.eq) goto loc_82621778;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8262177c
	if (ctx.cr6.lt) goto loc_8262177C;
loc_82621778:
	// lwz r5,132(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_8262177C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82624b58
	ctx.lr = 0x82621788;
	sub_82624B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82621990
	ctx.lr = 0x82621790;
	sub_82621990(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8262179c
	goto loc_8262179C;
loc_82621798:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8262179C:
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

__attribute__((alias("__imp__sub_826217B4"))) PPC_WEAK_FUNC(sub_826217B4);
PPC_FUNC_IMPL(__imp__sub_826217B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826217B8"))) PPC_WEAK_FUNC(sub_826217B8);
PPC_FUNC_IMPL(__imp__sub_826217B8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82621814
	if (ctx.cr6.lt) goto loc_82621814;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82621814
	if (!ctx.cr6.lt) goto loc_82621814;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8232d180
	ctx.lr = 0x826217F4;
	sub_8232D180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82621990
	ctx.lr = 0x826217FC;
	sub_82621990(ctx, base);
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
loc_82621814:
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

__attribute__((alias("__imp__sub_8262182C"))) PPC_WEAK_FUNC(sub_8262182C);
PPC_FUNC_IMPL(__imp__sub_8262182C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82621830"))) PPC_WEAK_FUNC(sub_82621830);
PPC_FUNC_IMPL(__imp__sub_82621830) {
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
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8262186c
	if (ctx.cr6.eq) goto loc_8262186C;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82294520
	ctx.lr = 0x8262186C;
	sub_82294520(ctx, base);
loc_8262186C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82621990
	ctx.lr = 0x82621874;
	sub_82621990(ctx, base);
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

__attribute__((alias("__imp__sub_8262188C"))) PPC_WEAK_FUNC(sub_8262188C);
PPC_FUNC_IMPL(__imp__sub_8262188C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82621890"))) PPC_WEAK_FUNC(sub_82621890);
PPC_FUNC_IMPL(__imp__sub_82621890) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x826218b4
	if (ctx.cr6.lt) goto loc_826218B4;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826218b4
	if (!ctx.cr6.lt) goto loc_826218B4;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_826218B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826218BC"))) PPC_WEAK_FUNC(sub_826218BC);
PPC_FUNC_IMPL(__imp__sub_826218BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826218C0"))) PPC_WEAK_FUNC(sub_826218C0);
PPC_FUNC_IMPL(__imp__sub_826218C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82621990
	sub_82621990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826218C4"))) PPC_WEAK_FUNC(sub_826218C4);
PPC_FUNC_IMPL(__imp__sub_826218C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826218C8"))) PPC_WEAK_FUNC(sub_826218C8);
PPC_FUNC_IMPL(__imp__sub_826218C8) {
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
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82294bb8
	ctx.lr = 0x82621904;
	sub_82294BB8(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8262192C"))) PPC_WEAK_FUNC(sub_8262192C);
PPC_FUNC_IMPL(__imp__sub_8262192C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82621930"))) PPC_WEAK_FUNC(sub_82621930);
PPC_FUNC_IMPL(__imp__sub_82621930) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82621940"))) PPC_WEAK_FUNC(sub_82621940);
PPC_FUNC_IMPL(__imp__sub_82621940) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82294bb8
	ctx.lr = 0x82621960;
	sub_82294BB8(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82621980"))) PPC_WEAK_FUNC(sub_82621980);
PPC_FUNC_IMPL(__imp__sub_82621980) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82621990"))) PPC_WEAK_FUNC(sub_82621990);
PPC_FUNC_IMPL(__imp__sub_82621990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82621998;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826219b8
	if (!ctx.cr6.eq) goto loc_826219B8;
	// stw r11,124(r28)
	PPC_STORE_U32(ctx.r28.u32 + 124, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_826219B8:
	// lis r30,-31884
	ctx.r30.s64 = -2089549824;
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// lwz r31,25104(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25104);
	// bl 0x82311e18
	ctx.lr = 0x826219D0;
	sub_82311E18(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x826219dc
	if (!ctx.cr6.eq) goto loc_826219DC;
	// lwz r31,25104(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25104);
loc_826219DC:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// bl 0x822a93e8
	ctx.lr = 0x82621A00;
	sub_822A93E8(ctx, base);
	// lwz r10,132(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// stw r3,124(r28)
	PPC_STORE_U32(ctx.r28.u32 + 124, ctx.r3.u32);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82621b0c
	if (!ctx.cr6.gt) goto loc_82621B0C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// lis r27,-31883
	ctx.r27.s64 = -2089484288;
	// addi r23,r11,14488
	ctx.r23.s64 = ctx.r11.s64 + 14488;
loc_82621A28:
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// lwzx r29,r24,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82621af8
	if (ctx.cr6.eq) goto loc_82621AF8;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82621af8
	if (!ctx.cr6.gt) goto loc_82621AF8;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82621A4C:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82621ae4
	if (ctx.cr6.eq) goto loc_82621AE4;
	// lwz r11,-27384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82621a7c
	if (!ctx.cr6.eq) goto loc_82621A7C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8274dc40
	ctx.lr = 0x82621A74;
	sub_8274DC40(ctx, base);
	// stw r3,-27384(r27)
	PPC_STORE_U32(ctx.r27.u32 + -27384, ctx.r3.u32);
	// bl 0x8274dd00
	ctx.lr = 0x82621A7C;
	sub_8274DD00(ctx, base);
loc_82621A7C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82621aa0
	if (ctx.cr6.eq) goto loc_82621AA0;
loc_82621A88:
	// lwz r10,-27384(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27384);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82621ab4
	if (ctx.cr6.eq) goto loc_82621AB4;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82621a88
	if (!ctx.cr6.eq) goto loc_82621A88;
loc_82621AA0:
	// lwz r11,-27384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27384);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82621ad4
	if (!ctx.cr6.eq) goto loc_82621AD4;
loc_82621AB4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82621ae4
	if (!ctx.cr6.eq) goto loc_82621AE4;
	// lwz r11,124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// bl 0x82624be8
	ctx.lr = 0x82621ACC;
	sub_82624BE8(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x82621ae4
	goto loc_82621AE4;
loc_82621AD4:
	// lwz r11,124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// bl 0x82624be8
	ctx.lr = 0x82621AE4;
	sub_82624BE8(ctx, base);
loc_82621AE4:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82621a4c
	if (ctx.cr6.lt) goto loc_82621A4C;
loc_82621AF8:
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82621a28
	if (ctx.cr6.lt) goto loc_82621A28;
loc_82621B0C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82621B14"))) PPC_WEAK_FUNC(sub_82621B14);
PPC_FUNC_IMPL(__imp__sub_82621B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82621B18"))) PPC_WEAK_FUNC(sub_82621B18);
PPC_FUNC_IMPL(__imp__sub_82621B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82621B20;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6acc
	ctx.lr = 0x82621B28;
	__savefpr_21(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r27,-31883
	ctx.r27.s64 = -2089484288;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82621b6c
	if (ctx.cr6.eq) goto loc_82621B6C;
	// addi r4,r30,292
	ctx.r4.s64 = ctx.r30.s64 + 292;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82cb1160
	ctx.lr = 0x82621B60;
	sub_82CB1160(ctx, base);
	// lfs f0,420(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,284(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 284, temp.u32);
	// b 0x82621c04
	goto loc_82621C04;
loc_82621B6C:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82621bcc
	if (ctx.cr6.eq) goto loc_82621BCC;
	// lwz r11,760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82621bcc
	if (ctx.cr6.eq) goto loc_82621BCC;
	// lwz r10,508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82621bcc
	if (ctx.cr6.eq) goto loc_82621BCC;
	// addi r31,r30,152
	ctx.r31.s64 = ctx.r30.s64 + 152;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82621BA8;
	sub_82CB1160(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82622270
	ctx.lr = 0x82621BBC;
	sub_82622270(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b18
	ctx.lr = 0x82621BC8;
	__restfpr_21(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82621BCC:
	// lwz r11,-31264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82621be8
	if (ctx.cr6.gt) goto loc_82621BE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82621bf0
	goto loc_82621BF0;
loc_82621BE8:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82621BF0:
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827742e0
	ctx.lr = 0x82621C00;
	sub_827742E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82621C04:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82622270
	ctx.lr = 0x82621C18;
	sub_82622270(ctx, base);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82621c38
	if (ctx.cr6.eq) goto loc_82621C38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r10,1208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1208);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82621C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82621C38:
	// lwz r11,-31264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82621c54
	if (ctx.cr6.gt) goto loc_82621C54;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82621c5c
	goto loc_82621C5C;
loc_82621C54:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82621C5C:
	// lwz r10,280(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lfs f26,856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	ctx.f26.f64 = double(temp.f32);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82621c74
	if (ctx.cr6.eq) goto loc_82621C74;
	// stfs f26,284(r30)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + 284, temp.u32);
	// stw r31,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r31.u32);
loc_82621C74:
	// lfs f0,288(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,284(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f26,f0
	ctx.f12.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f10,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f10.f64 = double(temp.f32);
	// lwz r28,128(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r29,r11,-18304
	ctx.r29.s64 = ctx.r11.s64 + -18304;
	// lwz r8,256(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lfs f30,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// rlwimi r28,r8,0,0,3
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xF0000000) | (ctx.r28.u64 & 0xFFFFFFFF0FFFFFFF);
	// addi r31,r30,152
	ctx.r31.s64 = ctx.r30.s64 + 152;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// lfs f29,-32444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32444);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
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
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
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
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// rlwinm r4,r6,30,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// rlwinm r3,r7,27,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// or r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rlwinm r10,r7,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 | ctx.r10.u64;
	// lfsx f9,r29,r11
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f27,f9,f11,f30
	ctx.f27.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f30.f64;
	// lfsx f8,r29,r9
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f28,f8,f12,f30
	ctx.f28.f64 = ctx.f8.f64 >= 0.0 ? ctx.f12.f64 : ctx.f30.f64;
	// fsubs f7,f10,f27
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f27.f64));
	// fcmpu cr6,f7,f30
	ctx.cr6.compare(ctx.f7.f64, ctx.f30.f64);
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
	// lfsx f6,r29,r5
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsel f13,f6,f7,f30
	ctx.f13.f64 = ctx.f6.f64 >= 0.0 ? ctx.f7.f64 : ctx.f30.f64;
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// ble cr6,0x82621d38
	if (!ctx.cr6.gt) goto loc_82621D38;
	// fdivs f0,f28,f13
	ctx.f0.f64 = double(float(ctx.f28.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82621d2c
	if (!ctx.cr6.lt) goto loc_82621D2C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82621d38
	goto loc_82621D38;
loc_82621D2C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x82621d38
	if (ctx.cr6.lt) goto loc_82621D38;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_82621D38:
	// lfs f13,312(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// fsubs f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
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
	// fmadds f8,f9,f0,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f11.f64));
	// rlwinm r9,r11,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lfsx f7,r29,r8
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f0,f7,f12,f30
	ctx.f0.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f30.f64;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82621d9c
	if (!ctx.cr6.gt) goto loc_82621D9C;
	// fdivs f31,f28,f0
	ctx.f31.f64 = double(float(ctx.f28.f64 / ctx.f0.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x82621d90
	if (!ctx.cr6.lt) goto loc_82621D90;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x82621d9c
	goto loc_82621D9C;
loc_82621D90:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// blt cr6,0x82621d9c
	if (ctx.cr6.lt) goto loc_82621D9C;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
loc_82621D9C:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,284
	ctx.r4.s64 = ctx.r1.s64 + 284;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f10,268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsubs f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fmadds f2,f8,f31,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f2,140(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f1,f6,f31,f13
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f1,144(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f0,f4,f31,f12
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmadds f13,f3,f31,f11
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x8240a888
	ctx.lr = 0x82621DF8;
	sub_8240A888(ctx, base);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8240a888
	ctx.lr = 0x82621E04;
	sub_8240A888(ctx, base);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f5,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmuls f4,f8,f31
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f3,f7,f31
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f2,f6,f31
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f1,f5,f31
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fadds f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f3,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
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
	// bl 0x8240b2d0
	ctx.lr = 0x82621E98;
	sub_8240B2D0(ctx, base);
	// lfs f8,300(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lbz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 288);
	// lfs f5,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f4,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f3,f5,f9
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// lfs f2,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f4,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// lfs f0,336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f27
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// lfs f11,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f5,f11,f2
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// fsubs f4,f8,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fmuls f0,f6,f31
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmuls f8,f3,f31
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stb r5,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r5.u8);
	// fmadds f6,f4,f31,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f6,168(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// mfcr r3
	ctx.r3.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r3.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r3.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r3.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r3.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r3.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r3.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r3.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r3.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r3.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r3.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r3.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r3.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r3.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r3.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r3.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r3.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r3.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r3.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r3.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r3.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r3.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r3.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r3.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r3.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r3.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r3.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r3.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r3.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r3.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r3.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r3.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fadds f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f4,f8,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r3,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x4;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r8,r3,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x4;
	// fadds f11,f1,f7
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// fmadds f7,f5,f31,f2
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f2.f64));
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f7,164(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lfsx f5,r29,r7
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	ctx.f5.f64 = double(temp.f32);
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// fsel f13,f5,f12,f30
	ctx.f13.f64 = ctx.f5.f64 >= 0.0 ? ctx.f12.f64 : ctx.f30.f64;
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// ble cr6,0x82621f80
	if (!ctx.cr6.gt) goto loc_82621F80;
	// fdivs f0,f28,f13
	ctx.f0.f64 = double(float(ctx.f28.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82621f74
	if (!ctx.cr6.lt) goto loc_82621F74;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82621f80
	goto loc_82621F80;
loc_82621F74:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x82621f80
	if (ctx.cr6.lt) goto loc_82621F80;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_82621F80:
	// lfs f13,380(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// fsubs f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
	// lfs f11,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	ctx.f7.f64 = double(temp.f32);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lfs f10,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f6,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f6.f64 = double(temp.f32);
	// rlwimi r11,r10,0,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// lfs f9,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f3,f6,f10
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// lfs f8,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f8.f64 = double(temp.f32);
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
	// lfs f4,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f4.f64 = double(temp.f32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// lfs f2,332(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f4,f9
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// fsubs f7,f2,f8
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
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
	// fmadds f6,f5,f0,f11
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// rlwinm r7,r9,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// fmadds f5,f3,f0,f10
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f4,f1,f0,f9
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f6,188(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// fmadds f3,f7,f0,f8
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f5,192(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f4,200(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f3,204(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lfsx f2,r29,r6
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	ctx.f2.f64 = double(temp.f32);
	// fsel f0,f2,f12,f30
	ctx.f0.f64 = ctx.f2.f64 >= 0.0 ? ctx.f12.f64 : ctx.f30.f64;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82622030
	if (!ctx.cr6.gt) goto loc_82622030;
	// fdivs f13,f28,f0
	ctx.f13.f64 = double(float(ctx.f28.f64 / ctx.f0.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bge cr6,0x82622024
	if (!ctx.cr6.lt) goto loc_82622024;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// b 0x82622030
	goto loc_82622030;
loc_82622024:
	// fcmpu cr6,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// blt cr6,0x82622030
	if (ctx.cr6.lt) goto loc_82622030;
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
loc_82622030:
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f5,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// lfs f7,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,348(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f0,360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,364(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f0,f5
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f5,f12,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// lfs f2,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// lfs f6,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f0,372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f12,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f6,f2
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// lfs f6,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f31,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// lfs f2,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f28,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lfs f27,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f4,f4,f6
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// lfs f25,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// lfs f24,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f5,f5,f28
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f28.f64));
	// lfs f23,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f22,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f21,340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f21.f64 = double(temp.f32);
	// fsubs f11,f11,f27
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f27.f64));
	// fsubs f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f25.f64));
	// fsubs f12,f12,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f24.f64));
	// fmsubs f22,f22,f21,f23
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f21.f64 - ctx.f23.f64));
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fadds f3,f3,f10
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f10,f8,f7
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f0,f22,f13,f23
	ctx.f0.f64 = double(float(ctx.f22.f64 * ctx.f13.f64 + ctx.f23.f64));
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fadds f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f4,f1,f31
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fadds f3,f9,f2
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f2,f5,f28
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f28.f64));
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f1,f11,f27
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f27.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f8,f25
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f25.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f12,f7,f24
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f24.f64));
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// stw r8,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r8.u32);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// stw r7,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r7.u32);
	// stw r6,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// stw r5,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r5.u32);
	// stw r4,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r4.u32);
	// stw r3,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r3.u32);
	// bge cr6,0x826221a8
	if (!ctx.cr6.lt) goto loc_826221A8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x826221b4
	goto loc_826221B4;
loc_826221A8:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x826221b8
	if (ctx.cr6.lt) goto loc_826221B8;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_826221B4:
	// stfs f0,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
loc_826221B8:
	// rlwinm r11,r28,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82622248
	if (ctx.cr6.eq) goto loc_82622248;
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82622248
	if (!ctx.cr6.eq) goto loc_82622248;
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lfs f31,32428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32428);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x824e31d0
	ctx.lr = 0x826221F0;
	sub_824E31D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82622248
	if (ctx.cr6.eq) goto loc_82622248;
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x824e31d0
	ctx.lr = 0x82622214;
	sub_824E31D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82622248
	if (ctx.cr6.eq) goto loc_82622248;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x824e31d0
	ctx.lr = 0x82622238;
	sub_824E31D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82622248
	if (ctx.cr6.eq) goto loc_82622248;
	// rlwinm r11,r28,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_82622248:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82622258;
	sub_82CB1160(ctx, base);
	// stfs f26,288(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + 288, temp.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82cb6b18
	ctx.lr = 0x82622268;
	__restfpr_21(ctx, base);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262226C"))) PPC_WEAK_FUNC(sub_8262226C);
PPC_FUNC_IMPL(__imp__sub_8262226C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82622270"))) PPC_WEAK_FUNC(sub_82622270);
PPC_FUNC_IMPL(__imp__sub_82622270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x82622278;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x82cb6adc
	ctx.lr = 0x82622280;
	__savefpr_25(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r18,-31883
	ctx.r18.s64 = -2089484288;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,-31264(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + -31264);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x826222ac
	if (ctx.cr6.gt) goto loc_826222AC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x826222b4
	goto loc_826222B4;
loc_826222AC:
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_826222B4:
	// lwz r9,684(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 684);
	// rlwinm r8,r9,0,2,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826229b0
	if (ctx.cr6.eq) goto loc_826229B0;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x826222d8
	if (ctx.cr6.gt) goto loc_826222D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826222e0
	goto loc_826222E0;
loc_826222D8:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826222E0:
	// lwz r11,688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826229b0
	if (ctx.cr6.eq) goto loc_826229B0;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r9,r11,-9112
	ctx.r9.s64 = ctx.r11.s64 + -9112;
	// lwz r16,100(r9)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82622320
	if (ctx.cr6.eq) goto loc_82622320;
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,-31264(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + -31264);
loc_82622320:
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r30,20(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r31,24(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82622340
	if (ctx.cr6.gt) goto loc_82622340;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82622348
	goto loc_82622348;
loc_82622340:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82622348:
	// lwz r11,688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// lfs f0,28(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f13,44(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f11,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lfs f3,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// lfs f9,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f7,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f5,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f11,f9
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f10,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f2,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f1,60(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,48(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f27,-32444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32444);
	ctx.f27.f64 = double(temp.f32);
	// lfs f31,52(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f8,f13,f7,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f8.f64));
	// lfs f0,-28844(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -28844);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f3,f7,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 + ctx.f6.f64));
	// lfs f30,-15120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f4,f2,f7,f4
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// fmadds f3,f10,f5,f8
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f8.f64));
	// fmadds f2,f12,f5,f6
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmadds f12,f11,f5,f4
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fadds f13,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// fadds f11,f2,f9
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fadds f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fdivs f9,f27,f13
	ctx.f9.f64 = double(float(ctx.f27.f64 / ctx.f13.f64));
	// fmadds f8,f9,f11,f27
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f27.f64));
	// fmuls f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f26,f8,f0
	ctx.f26.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fnmsubs f25,f7,f0,f0
	ctx.f25.f64 = double(float(-(ctx.f7.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// beq cr6,0x8262263c
	if (ctx.cr6.eq) goto loc_8262263C;
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x8262263c
	if (!ctx.cr6.gt) goto loc_8262263C;
	// fcmpu cr6,f26,f30
	ctx.cr6.compare(ctx.f26.f64, ctx.f30.f64);
	// blt cr6,0x8262263c
	if (ctx.cr6.lt) goto loc_8262263C;
	// fcmpu cr6,f26,f27
	ctx.cr6.compare(ctx.f26.f64, ctx.f27.f64);
	// bgt cr6,0x8262263c
	if (ctx.cr6.gt) goto loc_8262263C;
	// fcmpu cr6,f25,f30
	ctx.cr6.compare(ctx.f25.f64, ctx.f30.f64);
	// blt cr6,0x8262263c
	if (ctx.cr6.lt) goto loc_8262263C;
	// fcmpu cr6,f25,f27
	ctx.cr6.compare(ctx.f25.f64, ctx.f27.f64);
	// bgt cr6,0x8262263c
	if (ctx.cr6.gt) goto loc_8262263C;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lwz r3,8(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// fmr f29,f27
	ctx.f29.f64 = ctx.f27.f64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// li r7,16
	ctx.r7.s64 = 16;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r6,0
	ctx.r6.s64 = 0;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f28,f9,f25
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f25.f64));
	// fmuls f31,f10,f26
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f26.f64));
	// bl 0x82e85e90
	ctx.lr = 0x82622464;
	sub_82E85E90(ctx, base);
	// lwz r23,116(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8262263c
	if (ctx.cr6.eq) goto loc_8262263C;
	// fctiwz f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f28.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f28.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,-31264(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + -31264);
	// fctiwz f0,f31
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r25,r31,-1
	ctx.r25.s64 = ctx.r31.s64 + -1;
	// addi r24,r30,-1
	ctx.r24.s64 = ctx.r30.s64 + -1;
	// lwz r26,80(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r22,5
	ctx.r22.s64 = 5;
	// addi r21,r10,-14
	ctx.r21.s64 = ctx.r10.s64 + -14;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f31,-17496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17496);
	ctx.f31.f64 = double(temp.f32);
	// lwz r19,132(r26)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r26.u32 + 132);
	// addi r29,r9,-14
	ctx.r29.s64 = ctx.r9.s64 + -14;
loc_826224B4:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// li r27,5
	ctx.r27.s64 = 5;
loc_826224BC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x826224cc
	if (!ctx.cr6.lt) goto loc_826224CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826224dc
	goto loc_826224DC;
loc_826224CC:
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// blt cr6,0x826224dc
	if (ctx.cr6.lt) goto loc_826224DC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_826224DC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x826224ec
	if (!ctx.cr6.lt) goto loc_826224EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826224fc
	goto loc_826224FC;
loc_826224EC:
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x826224fc
	if (ctx.cr6.lt) goto loc_826224FC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_826224FC:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82627558
	ctx.lr = 0x82622508;
	sub_82627558(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lhzx r11,r11,r23
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82622524
	if (!ctx.cr6.eq) goto loc_82622524;
	// fmr f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f30.f64;
	// b 0x8262254c
	goto loc_8262254C;
loc_82622524:
	// rlwinm r9,r11,3,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFC0000;
	// clrlwi r8,r11,22
	ctx.r8.u64 = ctx.r11.u32 & 0x3FF;
	// rlwinm r11,r11,22,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1F;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r6,r11,111
	ctx.r6.s64 = ctx.r11.s64 + 111;
	// rlwinm r5,r7,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r4,r6,23,0,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 23) & 0xFF800000;
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
loc_8262254C:
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82622560
	if (!ctx.cr6.eq) goto loc_82622560;
	// fmr f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f30.f64;
	// b 0x82622588
	goto loc_82622588;
loc_82622560:
	// rlwinm r9,r11,3,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFC0000;
	// clrlwi r8,r11,22
	ctx.r8.u64 = ctx.r11.u32 & 0x3FF;
	// rlwinm r11,r11,22,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1F;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r6,r11,111
	ctx.r6.s64 = ctx.r11.s64 + 111;
	// rlwinm r5,r7,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r4,r6,23,0,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 23) & 0xFF800000;
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
loc_82622588:
	// lhz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8262259c
	if (!ctx.cr6.eq) goto loc_8262259C;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x826225c4
	goto loc_826225C4;
loc_8262259C:
	// rlwinm r10,r11,3,0,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFC0000;
	// clrlwi r9,r11,22
	ctx.r9.u64 = ctx.r11.u32 & 0x3FF;
	// rlwinm r11,r11,22,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1F;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r7,r11,111
	ctx.r7.s64 = ctx.r11.s64 + 111;
	// rlwinm r6,r8,13,0,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r5,r7,23,0,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0xFF800000;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
loc_826225C4:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bgt cr6,0x826225d4
	if (ctx.cr6.gt) goto loc_826225D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826225dc
	goto loc_826225DC;
loc_826225D4:
	// lwz r11,128(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826225DC:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x826225f8
	if (ctx.cr6.lt) goto loc_826225F8;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
loc_826225F8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,7
	ctx.r31.s64 = ctx.r31.s64 + 7;
	// bne 0x826224bc
	if (!ctx.cr0.eq) goto loc_826224BC;
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r29,r29,7
	ctx.r29.s64 = ctx.r29.s64 + 7;
	// bne 0x826224b4
	if (!ctx.cr0.eq) goto loc_826224B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// bl 0x82e83e80
	ctx.lr = 0x8262261C;
	sub_82E83E80(ctx, base);
	// extsw r11,r20
	ctx.r11.s64 = ctx.r20.s32;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-16908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16908);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_8262263C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fsubs f3,f27,f25
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f27.f64 - ctx.f25.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f31,-16912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16912);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82627498
	ctx.lr = 0x82622654;
	sub_82627498(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fsubs f3,f27,f26
	ctx.f3.f64 = double(float(ctx.f27.f64 - ctx.f26.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82627498
	ctx.lr = 0x82622668;
	sub_82627498(ctx, base);
	// fmuls f28,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f1.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82627498
	ctx.lr = 0x8262267C;
	sub_82627498(ctx, base);
	// fmuls f28,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82627498
	ctx.lr = 0x82622690;
	sub_82627498(ctx, base);
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmuls f31,f0,f29
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x82bea278
	ctx.lr = 0x826226A0;
	sub_82BEA278(ctx, base);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f10,428(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 428);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfd f0,-3832(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -3832);
	// lfd f13,-16920(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + -16920);
	// fmul f0,f11,f0
	ctx.f0.f64 = ctx.f11.f64 * ctx.f0.f64;
	// lfs f12,432(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 432);
	ctx.f12.f64 = double(temp.f32);
	// fsub f9,f0,f10
	ctx.f9.f64 = ctx.f0.f64 - ctx.f10.f64;
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// ble cr6,0x826226e4
	if (!ctx.cr6.gt) goto loc_826226E4;
	// lfs f10,444(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 444);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,436(r17)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r17.u32 + 436, temp.u32);
	// stfs f12,440(r17)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r17.u32 + 440, temp.u32);
	// stfs f30,432(r17)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r17.u32 + 432, temp.u32);
	// b 0x826226fc
	goto loc_826226FC;
loc_826226E4:
	// fcmpu cr6,f31,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// ble cr6,0x82622704
	if (!ctx.cr6.gt) goto loc_82622704;
	// lfs f12,444(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 444);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,432(r17)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r17.u32 + 432, temp.u32);
	// stfs f12,436(r17)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r17.u32 + 436, temp.u32);
	// stfs f31,440(r17)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r17.u32 + 440, temp.u32);
loc_826226FC:
	// frsp f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// stfs f11,428(r17)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r17.u32 + 428, temp.u32);
loc_82622704:
	// lfs f11,440(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 440);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,436(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 436);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x82622720
	if (!ctx.cr6.gt) goto loc_82622720;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f12,-18352(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// b 0x82622724
	goto loc_82622724;
loc_82622720:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_82622724:
	// frsp f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,428(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// ble cr6,0x82622758
	if (!ctx.cr6.gt) goto loc_82622758;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x8262274c
	if (ctx.cr6.lt) goto loc_8262274C;
	// fmr f30,f27
	ctx.f30.f64 = ctx.f27.f64;
	// b 0x82622758
	goto loc_82622758;
loc_8262274C:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fdivs f30,f13,f12
	ctx.f30.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
loc_82622758:
	// lfs f0,436(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-31264(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + -31264);
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// fmadds f0,f13,f30,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f0.f64));
	// stfs f0,444(r17)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r17.u32 + 444, temp.u32);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82622784
	if (ctx.cr6.gt) goto loc_82622784;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8262278c
	goto loc_8262278C;
loc_82622784:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8262278C:
	// lfs f13,716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r28,88
	ctx.r10.s64 = ctx.r28.s64 + 88;
	// lfs f12,720(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 720);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,88(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fadds f1,f4,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f13,f3,f10
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fadds f12,f2,f6
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r9,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r9.u32);
	// stw r11,92(r28)
	PPC_STORE_U32(ctx.r28.u32 + 92, ctx.r11.u32);
	// stw r10,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r10.u32);
	// lwz r11,-31264(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8262280c
	if (ctx.cr6.gt) goto loc_8262280C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82622814
	goto loc_82622814;
loc_8262280C:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82622814:
	// lfs f10,732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r28,100
	ctx.r10.s64 = ctx.r28.s64 + 100;
	// lfs f9,108(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f13,728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 728);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 724);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f6,100(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fadds f13,f3,f9
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fadds f1,f4,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fadds f12,f2,f6
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r10.u32);
	// stw r11,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r11.u32);
	// stw r9,108(r28)
	PPC_STORE_U32(ctx.r28.u32 + 108, ctx.r9.u32);
	// lwz r11,-31264(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x82622894
	if (ctx.cr6.gt) goto loc_82622894;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8262289c
	goto loc_8262289C;
loc_82622894:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8262289C:
	// lfs f13,740(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 740);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r28,112
	ctx.r10.s64 = ctx.r28.s64 + 112;
	// lfs f11,116(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f12,744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 744);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f10,120(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f1,f4,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fadds f12,f2,f6
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f3,f10
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,120(r28)
	PPC_STORE_U32(ctx.r28.u32 + 120, ctx.r10.u32);
	// stw r11,116(r28)
	PPC_STORE_U32(ctx.r28.u32 + 116, ctx.r11.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r9,112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 112, ctx.r9.u32);
	// lwz r11,-31264(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8262291c
	if (ctx.cr6.gt) goto loc_8262291C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82622924
	goto loc_82622924;
loc_8262291C:
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82622924:
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82622938
	if (ctx.cr6.gt) goto loc_82622938;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82622940
	goto loc_82622940;
loc_82622938:
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82622940:
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x82622954
	if (ctx.cr6.gt) goto loc_82622954;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8262295c
	goto loc_8262295C;
loc_82622954:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8262295C:
	// lfs f13,700(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 700);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// lfs f12,704(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 704);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f10,f11,f0,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f10,340(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 340, temp.u32);
	// beq cr6,0x826229b0
	if (ctx.cr6.eq) goto loc_826229B0;
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
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
	// bne 0x826229b0
	if (!ctx.cr0.eq) goto loc_826229B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826229B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826229B0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x82cb6b28
	ctx.lr = 0x826229BC;
	__restfpr_25(ctx, base);
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826229C0"))) PPC_WEAK_FUNC(sub_826229C0);
PPC_FUNC_IMPL(__imp__sub_826229C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x826229C8;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82cb6ae0
	ctx.lr = 0x826229D0;
	__savefpr_26(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82ff17b4
	ctx.lr = 0x826229D8;
	__savevmx_124(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623344
	if (ctx.cr6.eq) goto loc_82623344;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82623344
	if (!ctx.cr6.gt) goto loc_82623344;
	// lfs f0,120(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82623344
	if (!ctx.cr6.gt) goto loc_82623344;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82622A30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfs f0,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// lfd f13,184(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f9.u64);
	// lwz r6,188(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82622A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r5,r3,32
	ctx.r5.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfs f8,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r5,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// lfd f7,192(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// fmuls f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfd f3,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.f3.u64);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82622AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfs f2,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r9,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r9.u64);
	// lfd f1,176(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// fmuls f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.f11.u64);
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r6,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82622AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r5,r3,32
	ctx.r5.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfs f10,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// lfd f9,176(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lis r4,-31882
	ctx.r4.s64 = -2089418752;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// addi r28,r11,-32444
	ctx.r28.s64 = ctx.r11.s64 + -32444;
	// addi r3,r4,-15008
	ctx.r3.s64 = ctx.r4.s64 + -15008;
	// lfs f13,-544(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -544);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,264(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fmuls f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.f5.u64);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// beq cr6,0x82622b50
	if (ctx.cr6.eq) goto loc_82622B50;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82363520
	ctx.lr = 0x82622B50;
	sub_82363520(ctx, base);
loc_82622B50:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-28444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82622ba4
	if (ctx.cr6.eq) goto loc_82622BA4;
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,-12240
	ctx.r9.s64 = ctx.r11.s64 + -12240;
	// addi r8,r10,-12228
	ctx.r8.s64 = ctx.r10.s64 + -12228;
	// lwz r7,-12240(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12240);
	// stw r7,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r5,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r5.u32);
	// lwz r4,-12228(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12228);
	// stw r4,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x82622bb4
	goto loc_82622BB4;
loc_82622BA4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82404870
	ctx.lr = 0x82622BB4;
	sub_82404870(ctx, base);
loc_82622BB4:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x826273f8
	ctx.lr = 0x82622BBC;
	sub_826273F8(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r10,760(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82622bd8
	if (ctx.cr6.eq) goto loc_82622BD8;
	// lfs f13,504(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 504);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82622bdc
	goto loc_82622BDC;
loc_82622BD8:
	// lfs f13,820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 820);
	ctx.f13.f64 = double(temp.f32);
loc_82622BDC:
	// lfs f0,-1192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -1192);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r8,r10,-18304
	ctx.r8.s64 = ctx.r10.s64 + -18304;
	// lfs f29,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// addi r26,r9,-17552
	ctx.r26.s64 = ctx.r9.s64 + -17552;
	// stfs f29,316(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// addi r24,r7,-17520
	ctx.r24.s64 = ctx.r7.s64 + -17520;
	// addi r23,r6,-17568
	ctx.r23.s64 = ctx.r6.s64 + -17568;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lvx128 v127,r0,r26
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// fcmpu cr6,f12,f28
	ctx.cr6.compare(ctx.f12.f64, ctx.f28.f64);
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
	// rlwinm r10,r5,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// lvx128 v126,r0,r24
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r9,r5,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// lvx128 v125,r0,r23
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lfsx f11,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f0,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fdivs f9,f30,f10
	ctx.f9.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// stfs f9,824(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 824, temp.u32);
	// lfs f7,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fneg f4,f7
	ctx.f4.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// stfs f6,312(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// fneg f3,f5
	ctx.f3.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// stfs f3,304(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f4,308(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// bl 0x82380630
	ctx.lr = 0x82622C6C;
	sub_82380630(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// lvx128 v61,r0,r3
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,48
	ctx.r5.s64 = 48;
	// vor128 v62,v125,v125
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lvx128 v60,r3,r6
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r3,r5
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v58,v61,v60
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvx128 v57,r3,r4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v56,v61,v60
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v55,v57,v59
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v54,v57,v59
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v53,v58,v55
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrglw128 v51,v58,v55
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vmrghw128 v52,v56,v54
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrglw128 v50,v56,v54
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmsum4fp128 v49,v127,v53
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmsum4fp128 v47,v127,v51
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v48,v127,v52
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v46,v127,v50
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v45,v126,v53
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmsum4fp128 v44,v126,v52
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v43,v126,v51
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v42,v126,v50
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v37,v63,v53
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmsum4fp128 v36,v63,v52
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v35,v63,v51
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v34,v63,v50
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v41,v125,v53
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmsum4fp128 v40,v125,v52
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v39,v125,v51
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v38,v125,v50
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmrghw128 v33,v49,v48
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmrghw128 v32,v47,v46
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v63,v45,v44
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// vmrghw128 v61,v43,v42
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vmrghw128 v60,v33,v32
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v56,v37,v36
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v57,v63,v61
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v55,v35,v34
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v59,v41,v40
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v58,v39,v38
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// addi r9,r10,-17536
	ctx.r9.s64 = ctx.r10.s64 + -17536;
	// vor128 v54,v127,v127
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// vor128 v53,v126,v126
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// vmrghw128 v52,v59,v58
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v49,v56,v55
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// lvx128 v48,r0,r9
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v51,v62,v53
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrglw128 v50,v62,v53
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// vmrghw128 v47,v54,v48
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// vmrglw128 v46,v54,v48
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// li r9,8
	ctx.r9.s64 = 8;
	// vmrghw128 v45,v51,v47
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrglw128 v44,v51,v47
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v43,v50,v46
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmrglw128 v42,v50,v46
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// vmsum4fp128 v41,v57,v45
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vmsum4fp128 v40,v57,v44
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmsum4fp128 v39,v57,v43
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v38,v57,v42
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v37,v52,v45
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vmsum4fp128 v36,v52,v43
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v35,v52,v44
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmsum4fp128 v34,v52,v42
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v33,v49,v45
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vmsum4fp128 v32,v49,v43
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v63,v49,v44
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmsum4fp128 v62,v49,v42
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v61,v60,v45
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vmsum4fp128 v59,v60,v43
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v58,v60,v44
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmsum4fp128 v57,v60,v42
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmrghw128 v56,v41,v39
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// vmrghw128 v55,v40,v38
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmrghw128 v54,v37,v36
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vmrghw128 v53,v35,v34
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v34.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v127,v56,v55
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v52,v33,v32
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v32.u32), _mm_load_si128((__m128i*)ctx.v33.u32)));
	// vmrghw128 v51,v63,v62
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v126,v54,v53
	_mm_store_si128((__m128i*)ctx.v126.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrghw128 v50,v61,v59
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v49,v58,v57
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// stvx128 v127,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v125,v52,v51
	_mm_store_si128((__m128i*)ctx.v125.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// vmrghw128 v124,v50,v49
	_mm_store_si128((__m128i*)ctx.v124.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// stvx128 v126,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v125,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v124,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82622DF8:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82622df8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82622DF8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82622e40
	if (ctx.cr6.eq) goto loc_82622E40;
	// lwz r11,752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82622e40
	if (ctx.cr6.eq) goto loc_82622E40;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82622e40
	if (ctx.cr6.eq) goto loc_82622E40;
	// lwz r29,120(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
loc_82622E40:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82622e60
	if (ctx.cr6.eq) goto loc_82622E60;
	// lwz r10,760(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82622e60
	if (ctx.cr6.eq) goto loc_82622E60;
	// lfs f31,524(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 524);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82622e64
	goto loc_82622E64;
loc_82622E60:
	// lfs f31,-15612(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -15612);
	ctx.f31.f64 = double(temp.f32);
loc_82622E64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82622f1c
	if (ctx.cr6.eq) goto loc_82622F1C;
	// lwz r11,760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82622f1c
	if (ctx.cr6.eq) goto loc_82622F1C;
	// lwz r11,508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82622f1c
	if (ctx.cr6.eq) goto loc_82622F1C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82622EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82622f1c
	if (!ctx.cr6.eq) goto loc_82622F1C;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// lwz r9,760(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	// lfs f0,-17340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17340);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f2,516(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 516);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82430500
	ctx.lr = 0x82622ED0;
	sub_82430500(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82622EE0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82622ee0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82622EE0;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,200
	ctx.r7.s64 = ctx.r1.s64 + 200;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,760(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	// lfs f1,516(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 516);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8241aa00
	ctx.lr = 0x82622F18;
	sub_8241AA00(ctx, base);
	// b 0x82622ff4
	goto loc_82622FF4;
loc_82622F1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82622F30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r9,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r9.u64);
	// lfd f0,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// frsp f27,f13
	ctx.f27.f64 = double(float(ctx.f13.f64));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82622F58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r6,r3,32
	ctx.r6.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r6,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r6.u64);
	// lfd f12,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// lfd f10,208(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r10,112(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f26,f9
	ctx.f26.f64 = double(float(ctx.f9.f64));
	// fdivs f27,f27,f8
	ctx.f27.f64 = double(float(ctx.f27.f64 / ctx.f8.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82622F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,200(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// fmr f3,f26
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f26.f64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// std r7,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// lfs f0,-17340(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17340);
	ctx.f0.f64 = double(temp.f32);
	// lfd f7,208(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fdivs f2,f5,f27
	ctx.f2.f64 = double(float(ctx.f5.f64 / ctx.f27.f64));
	// fmuls f2,f1,f2
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// bl 0x82430500
	ctx.lr = 0x82622FD0;
	sub_82430500(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82622FE0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82622fe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82622FE0;
loc_82622FF4:
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// stfs f28,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// addi r8,r10,-16728
	ctx.r8.s64 = ctx.r10.s64 + -16728;
	// stfs f28,244(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f28,248(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f28,252(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// lwz r7,-16728(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16728);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// stw r4,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r4.u32);
	// beq cr6,0x82623134
	if (ctx.cr6.eq) goto loc_82623134;
	// lwz r11,760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623134
	if (ctx.cr6.eq) goto loc_82623134;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82623060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82623134
	if (!ctx.cr6.eq) goto loc_82623134;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r31,760(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	// lwz r29,508(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// rlwinm r10,r29,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826230dc
	if (ctx.cr6.eq) goto loc_826230DC;
	// rotlwi r11,r31,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,528
	ctx.r4.s64 = ctx.r11.s64 + 528;
	// bl 0x82627378
	ctx.lr = 0x82623090;
	sub_82627378(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// bge cr6,0x826230c8
	if (!ctx.cr6.lt) goto loc_826230C8;
	// stfs f28,252(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// b 0x826230dc
	goto loc_826230DC;
loc_826230C8:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x826230d8
	if (!ctx.cr6.lt) goto loc_826230D8;
	// stfs f0,252(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// b 0x826230dc
	goto loc_826230DC;
loc_826230D8:
	// stfs f29,252(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
loc_826230DC:
	// rlwinm r11,r29,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623134
	if (ctx.cr6.eq) goto loc_82623134;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stfs f29,236(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// lwz r8,760(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	// lfs f0,672(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 672);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,668(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 668);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,664(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 664);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f12,228(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f13,224(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
loc_82623134:
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// lvx128 v62,r0,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// lvx128 v61,r0,r9
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v48,v63,v62
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v60,r0,r8
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw128 v47,v63,v62
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmrghw128 v46,v61,v60
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// vmrglw128 v45,v61,v60
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// vmrghw128 v44,v48,v46
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrglw128 v43,v48,v46
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmrghw128 v42,v47,v45
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrglw128 v41,v47,v45
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmsum4fp128 v40,v124,v44
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmsum4fp128 v39,v124,v43
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v38,v124,v42
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v37,v124,v41
	_mm_store_ps(ctx.v37.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v36,v127,v44
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmsum4fp128 v35,v127,v42
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v34,v127,v43
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v33,v127,v41
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v32,v126,v44
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmsum4fp128 v63,v126,v42
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v62,v126,v43
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v61,v126,v41
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v60,v125,v44
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vmsum4fp128 v59,v125,v42
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vmsum4fp128 v58,v125,v43
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v57,v125,v41
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vmrghw128 v56,v40,v38
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// vmrghw128 v55,v39,v37
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v39.u32)));
	// vmrghw128 v54,v36,v35
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v35.u32), _mm_load_si128((__m128i*)ctx.v36.u32)));
	// vmrghw128 v53,v34,v33
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// vmrghw128 v52,v56,v55
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v51,v32,v63
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmrghw128 v50,v62,v61
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrghw128 v49,v54,v53
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmrghw128 v48,v60,v59
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v47,v58,v57
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// stvx128 v52,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw128 v46,v51,v50
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmrghw128 v45,v48,v47
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// stvx128 v49,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v46,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v45,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82621b18
	ctx.lr = 0x82623214;
	sub_82621B18(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,496
	ctx.r3.s64 = 496;
	// stw r26,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r26.u32);
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// stw r26,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r26.u32);
	// bl 0x822959a8
	ctx.lr = 0x8262322C;
	sub_822959A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82623324
	if (ctx.cr6.eq) goto loc_82623324;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r29,r1,224
	ctx.r29.s64 = ctx.r1.s64 + 224;
	// lwz r6,200(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r28,r10,-16712
	ctx.r28.s64 = ctx.r10.s64 + -16712;
	// std r7,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r7.u64);
	// addi r26,r1,320
	ctx.r26.s64 = ctx.r1.s64 + 320;
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// lwz r27,124(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// std r3,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r3.u64);
	// addi r24,r1,240
	ctx.r24.s64 = ctx.r1.s64 + 240;
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// addi r23,r1,256
	ctx.r23.s64 = ctx.r1.s64 + 256;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// lfd f12,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lfd f0,208(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfd f11,192(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f9,176(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfs f31,824(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 824);
	ctx.f31.f64 = double(temp.f32);
	// addi r22,r1,400
	ctx.r22.s64 = ctx.r1.s64 + 400;
	// frsp f29,f10
	ctx.f29.f64 = double(float(ctx.f10.f64));
	// lwz r10,1096(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1096);
	// addi r21,r30,152
	ctx.r21.s64 = ctx.r30.s64 + 152;
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// frsp f28,f8
	ctx.f28.f64 = double(float(ctx.f8.f64));
	// frsp f27,f7
	ctx.f27.f64 = double(float(ctx.f7.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826232CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r30,144
	ctx.r6.s64 = ctx.r30.s64 + 144;
	// lwz r5,140(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// bl 0x827d8ad0
	ctx.lr = 0x8262331C;
	sub_827D8AD0(ctx, base);
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// b 0x82623328
	goto loc_82623328;
loc_82623324:
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
loc_82623328:
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825dbdd8
	ctx.lr = 0x82623334;
	sub_825DBDD8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823b6f40
	ctx.lr = 0x8262333C;
	sub_823B6F40(ctx, base);
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// b 0x82623348
	goto loc_82623348;
loc_82623344:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82623348:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82ff1a4c
	ctx.lr = 0x82623354;
	__restvmx_124(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82cb6b2c
	ctx.lr = 0x8262335C;
	__restfpr_26(ctx, base);
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82623360"))) PPC_WEAK_FUNC(sub_82623360);
PPC_FUNC_IMPL(__imp__sub_82623360) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,188(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	// lwz r10,188(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82623370"))) PPC_WEAK_FUNC(sub_82623370);
PPC_FUNC_IMPL(__imp__sub_82623370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82623378;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-1472(r1)
	ea = -1472 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,1500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1500, ctx.r4.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// addi r4,r11,-24496
	ctx.r4.s64 = ctx.r11.s64 + -24496;
	// stw r17,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r17.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82333168
	ctx.lr = 0x826233B0;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// beq cr6,0x82623874
	if (ctx.cr6.eq) goto loc_82623874;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,-24468
	ctx.r4.s64 = ctx.r11.s64 + -24468;
	// bl 0x82333168
	ctx.lr = 0x826233C8;
	sub_82333168(ctx, base);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// addi r4,r10,-24448
	ctx.r4.s64 = ctx.r10.s64 + -24448;
	// bl 0x82333168
	ctx.lr = 0x826233DC;
	sub_82333168(ctx, base);
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r29.u32);
	// stw r29,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
	// lwz r11,-27708(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -27708);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// stw r8,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r8.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623430
	if (ctx.cr6.eq) goto loc_82623430;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
loc_82623414:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82624c50
	ctx.lr = 0x82623424;
	sub_82624C50(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82623414
	if (!ctx.cr6.eq) goto loc_82623414;
loc_82623430:
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
	// mr r14,r29
	ctx.r14.u64 = ctx.r29.u64;
	// mr r15,r29
	ctx.r15.u64 = ctx.r29.u64;
	// stw r16,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r16.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r14,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// stw r15,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r15.u32);
	// bl 0x82344fc0
	ctx.lr = 0x82623450;
	sub_82344FC0(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r18,-31885
	ctx.r18.s64 = -2089615360;
	// addi r28,r11,-21944
	ctx.r28.s64 = ctx.r11.s64 + -21944;
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
loc_82623460:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826237d4
	if (!ctx.cr6.lt) goto loc_826237D4;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// lwz r8,232(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// lwz r31,200(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r25,208(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// lwz r24,212(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// sraw r23,r25,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r25.s32 < 0) & (((ctx.r25.s32 >> temp.u32) << temp.u32) != ctx.r25.s32);
	ctx.r23.s64 = ctx.r25.s32 >> temp.u32;
	// sraw r22,r24,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r24.s32 < 0) & (((ctx.r24.s32 >> temp.u32) << temp.u32) != ctx.r24.s32);
	ctx.r22.s64 = ctx.r24.s32 >> temp.u32;
	// bl 0x82344f18
	ctx.lr = 0x826234A8;
	sub_82344F18(ctx, base);
	// lwz r6,164(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// cntlzw r5,r3
	ctx.r5.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lbz r19,150(r30)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r30.u32 + 150);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r21,160(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// subf r11,r6,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r6.s64;
	// xori r20,r4,1
	ctx.r20.u64 = ctx.r4.u64 ^ 1;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// ble cr6,0x826234d4
	if (!ctx.cr6.gt) goto loc_826234D4;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x826234e0
	goto loc_826234E0;
loc_826234D4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x826234e0
	if (ctx.cr6.gt) goto loc_826234E0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_826234E0:
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82623534
	if (!ctx.cr6.lt) goto loc_82623534;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r11,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_826234FC:
	// lwz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r14,8(r3)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82623518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mullw r11,r3,r14
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r14.s32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x826234fc
	if (!ctx.cr0.eq) goto loc_826234FC;
	// lwz r28,244(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r14,132(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82623534:
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82623580
	if (!ctx.cr6.lt) goto loc_82623580;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8262354C:
	// lwz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r14,8(r3)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82623568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mullw r11,r3,r14
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r14.s32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8262354c
	if (!ctx.cr0.eq) goto loc_8262354C;
	// lwz r14,132(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82623580:
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82623594
	if (ctx.cr6.eq) goto loc_82623594;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x826235b8
	if (!ctx.cr6.eq) goto loc_826235B8;
loc_82623594:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826235a8
	if (ctx.cr6.eq) goto loc_826235A8;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x826235b8
	if (ctx.cr6.eq) goto loc_826235B8;
loc_826235A8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826237c4
	if (!ctx.cr6.eq) goto loc_826237C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826237c4
	if (!ctx.cr6.eq) goto loc_826237C4;
loc_826235B8:
	// addi r11,r14,1
	ctx.r11.s64 = ctx.r14.s64 + 1;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// cmpw cr6,r11,r15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x82623634
	if (!ctx.cr6.gt) goto loc_82623634;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// stw r14,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r15,r8,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x826235f0
	if (!ctx.cr6.eq) goto loc_826235F0;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x8262363c
	if (ctx.cr6.eq) goto loc_8262363C;
loc_826235F0:
	// rlwinm r11,r15,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,28888(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28888);
	// add r11,r15,r11
	ctx.r11.u64 = ctx.r15.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r31,r11,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bne cr6,0x82623610
	if (!ctx.cr6.eq) goto loc_82623610;
	// bl 0x822900a0
	ctx.lr = 0x8262360C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28888);
loc_82623610:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8262362C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// b 0x8262363c
	goto loc_8262363C;
loc_82623634:
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// stw r14,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
loc_8262363C:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r31,r11,r16
	ctx.r31.u64 = ctx.r11.u64 + ctx.r16.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82623718
	if (ctx.cr0.eq) goto loc_82623718;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// ori r17,r17,1
	ctx.r17.u64 = ctx.r17.u64 | 1;
	// bl 0x8229bcd0
	ctx.lr = 0x82623674;
	sub_8229BCD0(ctx, base);
	// srawi r11,r26,10
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 10;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// srawi r9,r27,10
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r27.s32 >> 10;
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// stw r22,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r21,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r21.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// beq cr6,0x826236f4
	if (ctx.cr6.eq) goto loc_826236F4;
	// lwz r3,28888(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28888);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826236d4
	if (!ctx.cr6.eq) goto loc_826236D4;
	// bl 0x822900a0
	ctx.lr = 0x826236D0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28888);
loc_826236D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826236F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_826236F4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623710
	if (ctx.cr6.eq) goto loc_82623710;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bea998
	ctx.lr = 0x82623710;
	sub_82BEA998(ctx, base);
loc_82623710:
	// stw r19,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r19.u32);
	// stw r20,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r20.u32);
loc_82623718:
	// clrlwi r11,r17,31
	ctx.r11.u64 = ctx.r17.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826237c4
	if (ctx.cr6.eq) goto loc_826237C4;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r17,r17,0,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82623780
	if (ctx.cr6.eq) goto loc_82623780;
	// lwz r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826237b4
	if (ctx.cr6.eq) goto loc_826237B4;
	// lwz r3,28888(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82623760
	if (!ctx.cr6.eq) goto loc_82623760;
	// bl 0x822900a0
	ctx.lr = 0x8262375C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28888);
loc_82623760:
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
	ctx.lr = 0x8262377C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
loc_82623780:
	// lwz r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826237b4
	if (ctx.cr6.eq) goto loc_826237B4;
	// lwz r3,28888(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826237a0
	if (!ctx.cr6.eq) goto loc_826237A0;
	// bl 0x822900a0
	ctx.lr = 0x8262379C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28888);
loc_826237A0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826237B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826237B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_826237C4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82345070
	ctx.lr = 0x826237CC;
	sub_82345070(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82623460
	goto loc_82623460;
loc_826237D4:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r16,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r16.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// stw r15,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r15.u32);
	// bl 0x826262f8
	ctx.lr = 0x826237E8;
	sub_826262F8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8267e560
	ctx.lr = 0x826237F0;
	sub_8267E560(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82295e20
	ctx.lr = 0x826237F8;
	sub_82295E20(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82625430
	ctx.lr = 0x82623800;
	sub_82625430(ctx, base);
	// lwz r3,28888(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82623814
	if (!ctx.cr6.eq) goto loc_82623814;
	// bl 0x822900a0
	ctx.lr = 0x82623810;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28888);
loc_82623814:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82623828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,208(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8262385c
	if (ctx.cr6.eq) goto loc_8262385C;
	// lwz r3,28888(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82623848
	if (!ctx.cr6.eq) goto loc_82623848;
	// bl 0x822900a0
	ctx.lr = 0x82623844;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28888);
loc_82623848:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8262385C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8262385C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82623874:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,-24420
	ctx.r4.s64 = ctx.r11.s64 + -24420;
	// bl 0x82333168
	ctx.lr = 0x82623880;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82623988
	if (ctx.cr6.eq) goto loc_82623988;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// bl 0x826256d0
	ctx.lr = 0x826238A0;
	sub_826256D0(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,-21944
	ctx.r29.s64 = ctx.r11.s64 + -21944;
loc_826238AC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8262395c
	if (!ctx.cr6.lt) goto loc_8262395C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82294ac0
	ctx.lr = 0x826238E0;
	sub_82294AC0(ctx, base);
	// lwz r28,128(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82623938
	if (ctx.cr0.eq) goto loc_82623938;
	// stw r27,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r27.u32);
	// addi r5,r1,248
	ctx.r5.s64 = ctx.r1.s64 + 248;
	// stw r27,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r17,r17,2
	ctx.r17.u64 = ctx.r17.u64 | 2;
	// bl 0x8229bcd0
	ctx.lr = 0x82623910;
	sub_8229BCD0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82623924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294bb8
	ctx.lr = 0x82623934;
	sub_82294BB8(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_82623938:
	// rlwinm r11,r17,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623950
	if (ctx.cr6.eq) goto loc_82623950;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// rlwinm r17,r17,0,31,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82299080
	ctx.lr = 0x82623950;
	sub_82299080(ctx, base);
loc_82623950:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82625780
	ctx.lr = 0x82623958;
	sub_82625780(ctx, base);
	// b 0x826238ac
	goto loc_826238AC;
loc_8262395C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826267b8
	ctx.lr = 0x82623968;
	sub_826267B8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82625590
	ctx.lr = 0x82623970;
	sub_82625590(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82623988:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// bl 0x82333168
	ctx.lr = 0x82623998;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826239c0
	if (ctx.cr6.eq) goto loc_826239C0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8263bf60
	ctx.lr = 0x826239A8;
	sub_8263BF60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_826239C0:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// addi r4,r11,-24364
	ctx.r4.s64 = ctx.r11.s64 + -24364;
	// bl 0x82333168
	ctx.lr = 0x826239D0;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82623b14
	if (ctx.cr6.eq) goto loc_82623B14;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// bl 0x824c32b0
	ctx.lr = 0x826239EC;
	sub_824C32B0(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_826239F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82623a2c
	if (!ctx.cr6.lt) goto loc_82623A2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// bl 0x824c3b98
	ctx.lr = 0x82623A20;
	sub_824C3B98(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824c3360
	ctx.lr = 0x82623A28;
	sub_824C3360(ctx, base);
	// b 0x826239f4
	goto loc_826239F4;
loc_82623A2C:
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82626978
	ctx.lr = 0x82623A40;
	sub_82626978(ctx, base);
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10, ctx.xer);
	// li r27,10
	ctx.r27.s64 = 10;
	// bge cr6,0x82623a50
	if (!ctx.cr6.lt) goto loc_82623A50;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82623A50:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82623af4
	if (!ctx.cr6.gt) goto loc_82623AF4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r28,r11,11272
	ctx.r28.s64 = ctx.r11.s64 + 11272;
	// addi r29,r10,-24256
	ctx.r29.s64 = ctx.r10.s64 + -24256;
	// li r25,0
	ctx.r25.s64 = 0;
loc_82623A70:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// stw r25,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r25.u32);
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// bl 0x8229bcd0
	ctx.lr = 0x82623A8C;
	sub_8229BCD0(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r6,184(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82623aa0
	if (!ctx.cr6.eq) goto loc_82623AA0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_82623AA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r7,188(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// bl 0x8232d178
	ctx.lr = 0x82623AB8;
	sub_8232D178(ctx, base);
	// stw r25,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r25.u32);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82623adc
	if (ctx.cr6.eq) goto loc_82623ADC;
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82294520
	ctx.lr = 0x82623ADC;
	sub_82294520(ctx, base);
loc_82623ADC:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82294cc8
	ctx.lr = 0x82623AE4;
	sub_82294CC8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82623a70
	if (ctx.cr6.lt) goto loc_82623A70;
loc_82623AF4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824c1eb8
	ctx.lr = 0x82623AFC;
	sub_824C1EB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82623B14:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// addi r4,r11,-24228
	ctx.r4.s64 = ctx.r11.s64 + -24228;
	// bl 0x82333168
	ctx.lr = 0x82623B24;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// beq cr6,0x82623b70
	if (ctx.cr6.eq) goto loc_82623B70;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x823332d8
	ctx.lr = 0x82623B40;
	sub_823332D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82623b58
	if (ctx.cr6.eq) goto loc_82623B58;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r22,-60
	ctx.r3.s64 = ctx.r22.s64 + -60;
	// bl 0x82624868
	ctx.lr = 0x82623B58;
	sub_82624868(ctx, base);
loc_82623B58:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82623B70:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,-24216
	ctx.r4.s64 = ctx.r11.s64 + -24216;
	// bl 0x82333168
	ctx.lr = 0x82623B7C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// beq cr6,0x82623c30
	if (ctx.cr6.eq) goto loc_82623C30;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,-24168
	ctx.r4.s64 = ctx.r11.s64 + -24168;
	// bl 0x82333168
	ctx.lr = 0x82623B94;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82623bc0
	if (ctx.cr6.eq) goto loc_82623BC0;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// stw r29,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r29.u32);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82623BC0:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// addi r4,r11,-24756
	ctx.r4.s64 = ctx.r11.s64 + -24756;
	// bl 0x82333168
	ctx.lr = 0x82623BD0;
	sub_82333168(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// beq cr6,0x82623c00
	if (ctx.cr6.eq) goto loc_82623C00;
	// stw r10,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82623C00:
	// lwz r9,468(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// stw r6,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r6.u32);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82623C30:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,-24160
	ctx.r4.s64 = ctx.r11.s64 + -24160;
	// bl 0x82333168
	ctx.lr = 0x82623C3C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// beq cr6,0x82623ee8
	if (ctx.cr6.eq) goto loc_82623EE8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-21276
	ctx.r4.s64 = ctx.r11.s64 + -21276;
	// bl 0x82333168
	ctx.lr = 0x82623C54;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82623c80
	if (ctx.cr6.eq) goto loc_82623C80;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-28444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28444, ctx.r11.u32);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82623C80:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// addi r4,r11,-21264
	ctx.r4.s64 = ctx.r11.s64 + -21264;
	// bl 0x82333168
	ctx.lr = 0x82623C90;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82623cbc
	if (ctx.cr6.eq) goto loc_82623CBC;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-28444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28444, ctx.r11.u32);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82623CBC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// addi r4,r11,-24140
	ctx.r4.s64 = ctx.r11.s64 + -24140;
	// bl 0x82333168
	ctx.lr = 0x82623CCC;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82623d50
	if (ctx.cr6.eq) goto loc_82623D50;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-28444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623ed0
	if (ctx.cr6.eq) goto loc_82623ED0;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r10,492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82623cf8
	if (ctx.cr6.eq) goto loc_82623CF8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82623CF8:
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r9,-12240
	ctx.r5.s64 = ctx.r9.s64 + -12240;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-31264(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31264);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8276feb0
	ctx.lr = 0x82623D1C;
	sub_8276FEB0(ctx, base);
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r7,r8,-12228
	ctx.r7.s64 = ctx.r8.s64 + -12228;
	// ld r4,-12228(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + -12228);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rldicr r5,r6,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825cd468
	ctx.lr = 0x82623D38;
	sub_825CD468(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82623D50:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1500
	ctx.r4.s64 = ctx.r1.s64 + 1500;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823335a8
	ctx.lr = 0x82623D60;
	sub_823335A8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,11272
	ctx.r30.s64 = ctx.r11.s64 + 11272;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623d7c
	if (ctx.cr6.eq) goto loc_82623D7C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82623d80
	goto loc_82623D80;
loc_82623D7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82623D80:
	// bl 0x82cb2640
	ctx.lr = 0x82623D84;
	sub_82CB2640(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r11,-12240
	ctx.r31.s64 = ctx.r11.s64 + -12240;
	// stfs f0,-12240(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12240, temp.u32);
	// bl 0x82299080
	ctx.lr = 0x82623D9C;
	sub_82299080(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1500
	ctx.r4.s64 = ctx.r1.s64 + 1500;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823335a8
	ctx.lr = 0x82623DAC;
	sub_823335A8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623dc0
	if (ctx.cr6.eq) goto loc_82623DC0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82623dc4
	goto loc_82623DC4;
loc_82623DC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82623DC4:
	// bl 0x82cb2640
	ctx.lr = 0x82623DC8;
	sub_82CB2640(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x82623DD8;
	sub_82299080(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1500
	ctx.r4.s64 = ctx.r1.s64 + 1500;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823335a8
	ctx.lr = 0x82623DE8;
	sub_823335A8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623dfc
	if (ctx.cr6.eq) goto loc_82623DFC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82623e00
	goto loc_82623E00;
loc_82623DFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82623E00:
	// bl 0x82cb2640
	ctx.lr = 0x82623E04;
	sub_82CB2640(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82299080
	ctx.lr = 0x82623E14;
	sub_82299080(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1500
	ctx.r4.s64 = ctx.r1.s64 + 1500;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823335a8
	ctx.lr = 0x82623E24;
	sub_823335A8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623e38
	if (ctx.cr6.eq) goto loc_82623E38;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82623e3c
	goto loc_82623E3C;
loc_82623E38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82623E3C:
	// bl 0x82cb2688
	ctx.lr = 0x82623E40;
	sub_82CB2688(ctx, base);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r10,-12228
	ctx.r31.s64 = ctx.r10.s64 + -12228;
	// stw r11,-12228(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12228, ctx.r11.u32);
	// bl 0x82299080
	ctx.lr = 0x82623E58;
	sub_82299080(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1500
	ctx.r4.s64 = ctx.r1.s64 + 1500;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823335a8
	ctx.lr = 0x82623E68;
	sub_823335A8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623e7c
	if (ctx.cr6.eq) goto loc_82623E7C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82623e80
	goto loc_82623E80;
loc_82623E7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82623E80:
	// bl 0x82cb2688
	ctx.lr = 0x82623E84;
	sub_82CB2688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82299080
	ctx.lr = 0x82623E94;
	sub_82299080(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1500
	ctx.r4.s64 = ctx.r1.s64 + 1500;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823335a8
	ctx.lr = 0x82623EA4;
	sub_823335A8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623eb8
	if (ctx.cr6.eq) goto loc_82623EB8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82623ebc
	goto loc_82623EBC;
loc_82623EB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82623EBC:
	// bl 0x82cb2688
	ctx.lr = 0x82623EC0;
	sub_82CB2688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82299080
	ctx.lr = 0x82623ED0;
	sub_82299080(ctx, base);
loc_82623ED0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82623EE8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,-24128
	ctx.r4.s64 = ctx.r11.s64 + -24128;
	// bl 0x82333168
	ctx.lr = 0x82623EF4;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82624120
	if (ctx.cr6.eq) goto loc_82624120;
	// lwz r3,1500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1500);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// bl 0x82cb2640
	ctx.lr = 0x82623F08;
	sub_82CB2640(ctx, base);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// lwz r10,780(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 780);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82624108
	if (ctx.cr6.eq) goto loc_82624108;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82625820
	ctx.lr = 0x82623F28;
	sub_82625820(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r23,-31883
	ctx.r23.s64 = -2089484288;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r28,r11,-21944
	ctx.r28.s64 = ctx.r11.s64 + -21944;
	// lis r26,-31883
	ctx.r26.s64 = -2089484288;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// lfs f31,31796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31796);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,21152(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21152);
	ctx.f30.f64 = double(temp.f32);
	// lwz r30,-21944(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwz r29,-31264(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + -31264);
loc_82623F54:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8262408c
	if (!ctx.cr6.lt) goto loc_8262408C;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r11,264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82624080
	if (ctx.cr6.eq) goto loc_82624080;
	// rlwinm r9,r11,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82624080
	if (ctx.cr6.eq) goto loc_82624080;
	// rlwinm r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82623fb0
	if (!ctx.cr6.eq) goto loc_82623FB0;
	// lwz r11,208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623fb0
	if (ctx.cr6.eq) goto loc_82623FB0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82624080
	if (!ctx.cr6.eq) goto loc_82624080;
loc_82623FB0:
	// lwz r11,288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82624080
	if (!ctx.cr6.gt) goto loc_82624080;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82623FC4:
	// lwz r11,284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,64(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623fe8
	if (ctx.cr6.eq) goto loc_82623FE8;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// rlwinm r8,r9,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82623fec
	if (ctx.cr6.eq) goto loc_82623FEC;
loc_82623FE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82623FEC:
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82624064
	if (!ctx.cr6.eq) goto loc_82624064;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r9,280(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// lfs f0,256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82624064
	if (!ctx.cr6.lt) goto loc_82624064;
	// lfs f0,256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x82624064
	if (ctx.cr6.lt) goto loc_82624064;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lfs f0,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// bl 0x824d3a78
	ctx.lr = 0x82624038;
	sub_824D3A78(ctx, base);
	// lwz r3,28896(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28896);
	// li r4,47
	ctx.r4.s64 = 47;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82624058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f30,-31428(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r26.u32 + -31428, temp.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82624064:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82623fc4
	if (ctx.cr6.lt) goto loc_82623FC4;
	// lwz r29,-31264(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + -31264);
loc_82624080:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826258d0
	ctx.lr = 0x82624088;
	sub_826258D0(ctx, base);
	// b 0x82623f54
	goto loc_82623F54;
loc_8262408C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82624108
	if (ctx.cr6.eq) goto loc_82624108;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82624108
	if (ctx.cr6.eq) goto loc_82624108;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x826240b4
	if (ctx.cr6.gt) goto loc_826240B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x826240bc
	goto loc_826240BC;
loc_826240B4:
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_826240BC:
	// lwz r10,980(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 980);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82624108
	if (ctx.cr6.eq) goto loc_82624108;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x826240f8
	if (ctx.cr6.gt) goto loc_826240F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x826271c0
	ctx.lr = 0x826240E0;
	sub_826271C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_826240F8:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x826271c0
	ctx.lr = 0x82624108;
	sub_826271C0(ctx, base);
loc_82624108:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82624120:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// addi r4,r11,-24100
	ctx.r4.s64 = ctx.r11.s64 + -24100;
	// bl 0x82333168
	ctx.lr = 0x82624130;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82624214
	if (ctx.cr6.eq) goto loc_82624214;
	// lwz r3,1500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1500);
	// bl 0x82cb2640
	ctx.lr = 0x82624140;
	sub_82CB2640(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82625820
	ctx.lr = 0x82624148;
	sub_82625820(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r30,r11,-21944
	ctx.r30.s64 = ctx.r11.s64 + -21944;
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// lfs f31,21152(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21152);
	ctx.f31.f64 = double(temp.f32);
	// lwz r31,-21944(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
loc_82624160:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8262385c
	if (!ctx.cr6.lt) goto loc_8262385C;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82624208
	if (ctx.cr6.eq) goto loc_82624208;
	// rlwinm r10,r10,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82624208
	if (ctx.cr6.eq) goto loc_82624208;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82624208
	if (!ctx.cr6.gt) goto loc_82624208;
	// li r9,0
	ctx.r9.s64 = 0;
loc_826241A8:
	// lwz r10,284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,64(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826241cc
	if (ctx.cr6.eq) goto loc_826241CC;
	// lwz r6,100(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// rlwinm r5,r6,0,4,4
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826241d0
	if (ctx.cr6.eq) goto loc_826241D0;
loc_826241CC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_826241D0:
	// lwz r6,4(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x826241f0
	if (!ctx.cr6.eq) goto loc_826241F0;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// stfs f31,-31428(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + -31428, temp.u32);
	// oris r6,r10,32768
	ctx.r6.u64 = ctx.r10.u64 | 2147483648;
	// stw r6,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r6.u32);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_826241F0:
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826241a8
	if (ctx.cr6.lt) goto loc_826241A8;
loc_82624208:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826258d0
	ctx.lr = 0x82624210;
	sub_826258D0(ctx, base);
	// b 0x82624160
	goto loc_82624160;
loc_82624214:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// addi r4,r11,-25560
	ctx.r4.s64 = ctx.r11.s64 + -25560;
	// bl 0x82333168
	ctx.lr = 0x82624224;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826245d8
	if (ctx.cr6.eq) goto loc_826245D8;
	// lwz r11,40(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// stw r10,40(r22)
	PPC_STORE_U32(ctx.r22.u32 + 40, ctx.r10.u32);
	// bl 0x82bea278
	ctx.lr = 0x82624240;
	sub_82BEA278(ctx, base);
	// lfd f13,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// addi r4,r8,-24028
	ctx.r4.s64 = ctx.r8.s64 + -24028;
	// lfd f0,-3832(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -3832);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,360(r22)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r22.u32 + 360, temp.u32);
	// bl 0x82333168
	ctx.lr = 0x8262426C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82624360
	if (ctx.cr6.eq) goto loc_82624360;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1500
	ctx.r4.s64 = ctx.r1.s64 + 1500;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823335a8
	ctx.lr = 0x82624284;
	sub_823335A8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826242a0
	if (ctx.cr6.eq) goto loc_826242A0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x826242a4
	goto loc_826242A4;
loc_826242A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826242A4:
	// bl 0x82cb2640
	ctx.lr = 0x826242A8;
	sub_82CB2640(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1500
	ctx.r4.s64 = ctx.r1.s64 + 1500;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x823335a8
	ctx.lr = 0x826242BC;
	sub_823335A8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826242d0
	if (ctx.cr6.eq) goto loc_826242D0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x826242d4
	goto loc_826242D4;
loc_826242D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826242D4:
	// bl 0x82cb2640
	ctx.lr = 0x826242D8;
	sub_82CB2640(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1500
	ctx.r4.s64 = ctx.r1.s64 + 1500;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823335a8
	ctx.lr = 0x826242EC;
	sub_823335A8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82624300
	if (ctx.cr6.eq) goto loc_82624300;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82624304
	goto loc_82624304;
loc_82624300:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82624304:
	// bl 0x82cb2640
	ctx.lr = 0x82624308;
	sub_82CB2640(ctx, base);
	// stfs f31,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,344(r22)
	PPC_STORE_U32(ctx.r22.u32 + 344, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r9,352(r22)
	PPC_STORE_U32(ctx.r22.u32 + 352, ctx.r9.u32);
	// stw r10,348(r22)
	PPC_STORE_U32(ctx.r22.u32 + 348, ctx.r10.u32);
	// bl 0x82299080
	ctx.lr = 0x82624338;
	sub_82299080(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82299080
	ctx.lr = 0x82624340;
	sub_82299080(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82299080
	ctx.lr = 0x82624348;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82624360:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// addi r4,r11,-24000
	ctx.r4.s64 = ctx.r11.s64 + -24000;
	// bl 0x82333168
	ctx.lr = 0x82624370;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82624464
	if (ctx.cr6.eq) goto loc_82624464;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1500
	ctx.r4.s64 = ctx.r1.s64 + 1500;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823335a8
	ctx.lr = 0x82624388;
	sub_823335A8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826243a4
	if (ctx.cr6.eq) goto loc_826243A4;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x826243a8
	goto loc_826243A8;
loc_826243A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826243A8:
	// bl 0x82cb2640
	ctx.lr = 0x826243AC;
	sub_82CB2640(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1500
	ctx.r4.s64 = ctx.r1.s64 + 1500;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x823335a8
	ctx.lr = 0x826243C0;
	sub_823335A8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826243d4
	if (ctx.cr6.eq) goto loc_826243D4;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x826243d8
	goto loc_826243D8;
loc_826243D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826243D8:
	// bl 0x82cb2640
	ctx.lr = 0x826243DC;
	sub_82CB2640(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1500
	ctx.r4.s64 = ctx.r1.s64 + 1500;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823335a8
	ctx.lr = 0x826243F0;
	sub_823335A8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82624404
	if (ctx.cr6.eq) goto loc_82624404;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82624408
	goto loc_82624408;
loc_82624404:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82624408:
	// bl 0x82cb2640
	ctx.lr = 0x8262440C;
	sub_82CB2640(ctx, base);
	// stfs f31,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r9,320(r22)
	PPC_STORE_U32(ctx.r22.u32 + 320, ctx.r9.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r11,328(r22)
	PPC_STORE_U32(ctx.r22.u32 + 328, ctx.r11.u32);
	// stw r10,324(r22)
	PPC_STORE_U32(ctx.r22.u32 + 324, ctx.r10.u32);
	// bl 0x82299080
	ctx.lr = 0x8262443C;
	sub_82299080(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82299080
	ctx.lr = 0x82624444;
	sub_82299080(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x8262444C;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82624464:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// addi r4,r11,-23968
	ctx.r4.s64 = ctx.r11.s64 + -23968;
	// bl 0x82333168
	ctx.lr = 0x82624474;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82624568
	if (ctx.cr6.eq) goto loc_82624568;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1500
	ctx.r4.s64 = ctx.r1.s64 + 1500;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823335a8
	ctx.lr = 0x8262448C;
	sub_823335A8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826244a8
	if (ctx.cr6.eq) goto loc_826244A8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x826244ac
	goto loc_826244AC;
loc_826244A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826244AC:
	// bl 0x82cb2640
	ctx.lr = 0x826244B0;
	sub_82CB2640(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1500
	ctx.r4.s64 = ctx.r1.s64 + 1500;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x823335a8
	ctx.lr = 0x826244C4;
	sub_823335A8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826244d8
	if (ctx.cr6.eq) goto loc_826244D8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x826244dc
	goto loc_826244DC;
loc_826244D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826244DC:
	// bl 0x82cb2640
	ctx.lr = 0x826244E0;
	sub_82CB2640(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1500
	ctx.r4.s64 = ctx.r1.s64 + 1500;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823335a8
	ctx.lr = 0x826244F4;
	sub_823335A8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82624508
	if (ctx.cr6.eq) goto loc_82624508;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8262450c
	goto loc_8262450C;
loc_82624508:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8262450C:
	// bl 0x82cb2640
	ctx.lr = 0x82624510;
	sub_82CB2640(ctx, base);
	// stfs f31,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r10,340(r22)
	PPC_STORE_U32(ctx.r22.u32 + 340, ctx.r10.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r9,336(r22)
	PPC_STORE_U32(ctx.r22.u32 + 336, ctx.r9.u32);
	// stw r11,332(r22)
	PPC_STORE_U32(ctx.r22.u32 + 332, ctx.r11.u32);
	// bl 0x82299080
	ctx.lr = 0x82624540;
	sub_82299080(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82299080
	ctx.lr = 0x82624548;
	sub_82299080(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82299080
	ctx.lr = 0x82624550;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82624568:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,1500
	ctx.r3.s64 = ctx.r1.s64 + 1500;
	// addi r4,r11,-23940
	ctx.r4.s64 = ctx.r11.s64 + -23940;
	// bl 0x82333168
	ctx.lr = 0x82624578;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826245c0
	if (ctx.cr6.eq) goto loc_826245C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,1500
	ctx.r4.s64 = ctx.r1.s64 + 1500;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823335a8
	ctx.lr = 0x82624590;
	sub_823335A8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826245a4
	if (ctx.cr6.eq) goto loc_826245A4;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x826245ac
	goto loc_826245AC;
loc_826245A4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11272
	ctx.r3.s64 = ctx.r11.s64 + 11272;
loc_826245AC:
	// bl 0x82cb2640
	ctx.lr = 0x826245B0;
	sub_82CB2640(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,316(r22)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 316, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82299080
	ctx.lr = 0x826245C0;
	sub_82299080(ctx, base);
loc_826245C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_826245D8:
	// lwz r11,44(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 44);
	// lwz r30,1500(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8262460c
	if (ctx.cr6.eq) goto loc_8262460C;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82624604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8262385c
	if (!ctx.cr6.eq) goto loc_8262385C;
loc_8262460C:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8262484c
	if (ctx.cr6.eq) goto loc_8262484C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82624638
	if (ctx.cr6.eq) goto loc_82624638;
	// lwz r11,44(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82624650
	if (!ctx.cr6.eq) goto loc_82624650;
loc_82624638:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,-31264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82420680
	ctx.lr = 0x82624648;
	sub_82420680(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8262385c
	if (!ctx.cr6.eq) goto loc_8262385C;
loc_82624650:
	// lwz r11,-31264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8262466c
	if (ctx.cr6.gt) goto loc_8262466C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82624674
	goto loc_82624674;
loc_8262466C:
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82624674:
	// lwz r10,980(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 980);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826246c8
	if (ctx.cr6.eq) goto loc_826246C8;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82624694
	if (ctx.cr6.gt) goto loc_82624694;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8262469c
	goto loc_8262469C;
loc_82624694:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8262469C:
	// lwz r3,980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,492(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// lwz r9,256(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826246C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8262385c
	if (!ctx.cr6.eq) goto loc_8262385C;
loc_826246C8:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r10,856(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82624700
	if (ctx.cr6.eq) goto loc_82624700;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r6,492(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826246F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8262385c
	if (!ctx.cr6.eq) goto loc_8262385C;
loc_82624700:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r10,1096(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1096);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82624738
	if (ctx.cr6.eq) goto loc_82624738;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r6,492(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82624730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8262385c
	if (!ctx.cr6.eq) goto loc_8262385C;
loc_82624738:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,492(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82624758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8262385c
	if (!ctx.cr6.eq) goto loc_8262385C;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r10,1104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82624798
	if (ctx.cr6.eq) goto loc_82624798;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r6,492(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82624790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8262385c
	if (!ctx.cr6.eq) goto loc_8262385C;
loc_82624798:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r10,492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8262484c
	if (ctx.cr6.eq) goto loc_8262484C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826247C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8262385c
	if (!ctx.cr6.eq) goto loc_8262385C;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r10,492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// lwz r9,948(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 948);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8262480c
	if (ctx.cr6.eq) goto loc_8262480C;
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,948(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 948);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82624804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8262385c
	if (!ctx.cr6.eq) goto loc_8262385C;
loc_8262480C:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r10,492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// lwz r9,952(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 952);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8262484c
	if (ctx.cr6.eq) goto loc_8262484C;
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,952(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 952);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82624840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82624850
	if (!ctx.cr6.eq) goto loc_82624850;
loc_8262484C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82624850:
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82624864"))) PPC_WEAK_FUNC(sub_82624864);
PPC_FUNC_IMPL(__imp__sub_82624864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82624868"))) PPC_WEAK_FUNC(sub_82624868);
PPC_FUNC_IMPL(__imp__sub_82624868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82624870;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,-23904
	ctx.r4.s64 = ctx.r11.s64 + -23904;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// bl 0x8232f970
	ctx.lr = 0x826248A0;
	sub_8232F970(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,11272
	ctx.r28.s64 = ctx.r11.s64 + 11272;
	// bne cr6,0x82624900
	if (!ctx.cr6.eq) goto loc_82624900;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// addi r4,r11,-23884
	ctx.r4.s64 = ctx.r11.s64 + -23884;
	// bl 0x822960c0
	ctx.lr = 0x826248C0;
	sub_822960C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82295ff0
	ctx.lr = 0x826248D0;
	sub_82295FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82295908
	ctx.lr = 0x826248DC;
	sub_82295908(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82299080
	ctx.lr = 0x826248E4;
	sub_82299080(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82299080
	ctx.lr = 0x826248EC;
	sub_82299080(ctx, base);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r31,136(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82624900
	if (!ctx.cr6.eq) goto loc_82624900;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82624900:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r10,-20648
	ctx.r6.s64 = ctx.r10.s64 + -20648;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,28892(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28892);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82624934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826249e0
	if (ctx.cr6.eq) goto loc_826249E0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823348f0
	ctx.lr = 0x82624948;
	sub_823348F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826249e0
	if (ctx.cr6.eq) goto loc_826249E0;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82624968
	if (ctx.cr6.eq) goto loc_82624968;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// b 0x8262496c
	goto loc_8262496C;
loc_82624968:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
loc_8262496C:
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333728
	ctx.lr = 0x82624988;
	sub_82333728(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826249d8
	if (ctx.cr6.eq) goto loc_826249D8;
	// addi r31,r29,60
	ctx.r31.s64 = ctx.r29.s64 + 60;
loc_82624994:
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826249a8
	if (!ctx.cr6.eq) goto loc_826249A8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_826249A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826249C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333728
	ctx.lr = 0x826249D0;
	sub_82333728(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82624994
	if (!ctx.cr6.eq) goto loc_82624994;
loc_826249D8:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// b 0x82624a28
	goto loc_82624A28;
loc_826249E0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r5,r11,14476
	ctx.r5.s64 = ctx.r11.s64 + 14476;
	// addi r4,r10,-23856
	ctx.r4.s64 = ctx.r10.s64 + -23856;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x823343d8
	ctx.lr = 0x826249FC;
	sub_823343D8(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82624a10
	if (ctx.cr6.eq) goto loc_82624A10;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82624a14
	goto loc_82624A14;
loc_82624A10:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82624A14:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,768
	ctx.r4.s64 = 768;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8232d170
	ctx.lr = 0x82624A24;
	sub_8232D170(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
loc_82624A28:
	// bl 0x82299080
	ctx.lr = 0x82624A2C;
	sub_82299080(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82624a50
	if (ctx.cr6.eq) goto loc_82624A50;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294520
	ctx.lr = 0x82624A50;
	sub_82294520(ctx, base);
loc_82624A50:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294cc8
	ctx.lr = 0x82624A58;
	sub_82294CC8(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82624a7c
	if (ctx.cr6.eq) goto loc_82624A7C;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82294520
	ctx.lr = 0x82624A7C;
	sub_82294520(ctx, base);
loc_82624A7C:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82294cc8
	ctx.lr = 0x82624A84;
	sub_82294CC8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82624A8C"))) PPC_WEAK_FUNC(sub_82624A8C);
PPC_FUNC_IMPL(__imp__sub_82624A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82624A90"))) PPC_WEAK_FUNC(sub_82624A90);
PPC_FUNC_IMPL(__imp__sub_82624A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82624A98;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822b3f98
	ctx.lr = 0x82624AB4;
	sub_822B3F98(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-26536
	ctx.r4.s64 = ctx.r11.s64 + -26536;
	// bl 0x822b3f98
	ctx.lr = 0x82624AC4;
	sub_822B3F98(ctx, base);
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-24528(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24528);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82624AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82624b10
	if (ctx.cr6.eq) goto loc_82624B10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822960c0
	ctx.lr = 0x82624AFC;
	sub_822960C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8261b760
	ctx.lr = 0x82624B08;
	sub_8261B760(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299080
	ctx.lr = 0x82624B10;
	sub_82299080(ctx, base);
loc_82624B10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82624B18"))) PPC_WEAK_FUNC(sub_82624B18);
PPC_FUNC_IMPL(__imp__sub_82624B18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82624B2C"))) PPC_WEAK_FUNC(sub_82624B2C);
PPC_FUNC_IMPL(__imp__sub_82624B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82624B30"))) PPC_WEAK_FUNC(sub_82624B30);
PPC_FUNC_IMPL(__imp__sub_82624B30) {
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

__attribute__((alias("__imp__sub_82624B44"))) PPC_WEAK_FUNC(sub_82624B44);
PPC_FUNC_IMPL(__imp__sub_82624B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82624B48"))) PPC_WEAK_FUNC(sub_82624B48);
PPC_FUNC_IMPL(__imp__sub_82624B48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82624B4C"))) PPC_WEAK_FUNC(sub_82624B4C);
PPC_FUNC_IMPL(__imp__sub_82624B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82624B50"))) PPC_WEAK_FUNC(sub_82624B50);
PPC_FUNC_IMPL(__imp__sub_82624B50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82624B54"))) PPC_WEAK_FUNC(sub_82624B54);
PPC_FUNC_IMPL(__imp__sub_82624B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82624B58"))) PPC_WEAK_FUNC(sub_82624B58);
PPC_FUNC_IMPL(__imp__sub_82624B58) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82626b98
	ctx.lr = 0x82624B80;
	sub_82626B98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82624b98
	if (ctx.cr6.eq) goto loc_82624B98;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82624B98:
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

__attribute__((alias("__imp__sub_82624BB0"))) PPC_WEAK_FUNC(sub_82624BB0);
PPC_FUNC_IMPL(__imp__sub_82624BB0) {
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

__attribute__((alias("__imp__sub_82624BC0"))) PPC_WEAK_FUNC(sub_82624BC0);
PPC_FUNC_IMPL(__imp__sub_82624BC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82624BE4"))) PPC_WEAK_FUNC(sub_82624BE4);
PPC_FUNC_IMPL(__imp__sub_82624BE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82624BE8"))) PPC_WEAK_FUNC(sub_82624BE8);
PPC_FUNC_IMPL(__imp__sub_82624BE8) {
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
	ctx.lr = 0x82624C18;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82624c30
	if (ctx.cr0.eq) goto loc_82624C30;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82624C30:
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

__attribute__((alias("__imp__sub_82624C50"))) PPC_WEAK_FUNC(sub_82624C50);
PPC_FUNC_IMPL(__imp__sub_82624C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82624C58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82624c78
	if (!ctx.cr6.eq) goto loc_82624C78;
	// bl 0x82625d60
	ctx.lr = 0x82624C78;
	sub_82625D60(ctx, base);
loc_82624C78:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82624cdc
	if (!ctx.cr6.gt) goto loc_82624CDC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b1498
	ctx.lr = 0x82624C90;
	sub_822B1498(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 & ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82624cdc
	if (ctx.cr6.eq) goto loc_82624CDC;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82624CB4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82624cf4
	if (ctx.cr6.eq) goto loc_82624CF4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82624cb4
	if (!ctx.cr6.eq) goto loc_82624CB4;
loc_82624CDC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82625ad0
	ctx.lr = 0x82624CEC;
	sub_82625AD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82624CF4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82624D20"))) PPC_WEAK_FUNC(sub_82624D20);
PPC_FUNC_IMPL(__imp__sub_82624D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82624D28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82624d68
	if (!ctx.cr6.gt) goto loc_82624D68;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82624D48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82295e20
	ctx.lr = 0x82624D54;
	sub_82295E20(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82624d48
	if (ctx.cr6.lt) goto loc_82624D48;
loc_82624D68:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82624d8c
	if (ctx.cr6.eq) goto loc_82624D8C;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x82624D8C;
	sub_82294520(ctx, base);
loc_82624D8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82624D94"))) PPC_WEAK_FUNC(sub_82624D94);
PPC_FUNC_IMPL(__imp__sub_82624D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82624D98"))) PPC_WEAK_FUNC(sub_82624D98);
PPC_FUNC_IMPL(__imp__sub_82624D98) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82624DB8"))) PPC_WEAK_FUNC(sub_82624DB8);
PPC_FUNC_IMPL(__imp__sub_82624DB8) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82294a58
	ctx.lr = 0x82624DD4;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82625c88
	ctx.lr = 0x82624DE8;
	sub_82625C88(ctx, base);
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

__attribute__((alias("__imp__sub_82624DFC"))) PPC_WEAK_FUNC(sub_82624DFC);
PPC_FUNC_IMPL(__imp__sub_82624DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82624E00"))) PPC_WEAK_FUNC(sub_82624E00);
PPC_FUNC_IMPL(__imp__sub_82624E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82624E08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82624e28
	if (!ctx.cr6.eq) goto loc_82624E28;
	// bl 0x82625ee0
	ctx.lr = 0x82624E28;
	sub_82625EE0(ctx, base);
loc_82624E28:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82624e80
	if (!ctx.cr6.gt) goto loc_82624E80;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 & ctx.r31.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82624e80
	if (ctx.cr6.eq) goto loc_82624E80;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82624E58:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x82624e98
	if (ctx.cr6.eq) goto loc_82624E98;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82624e58
	if (!ctx.cr6.eq) goto loc_82624E58;
loc_82624E80:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82625bb0
	ctx.lr = 0x82624E90;
	sub_82625BB0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82624E98:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82624EC0"))) PPC_WEAK_FUNC(sub_82624EC0);
PPC_FUNC_IMPL(__imp__sub_82624EC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82624f24
	if (ctx.cr6.eq) goto loc_82624F24;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82624f24
	if (!ctx.cr6.gt) goto loc_82624F24;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82624f24
	if (ctx.cr6.eq) goto loc_82624F24;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82624EFC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82624f2c
	if (ctx.cr6.eq) goto loc_82624F2C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82624efc
	if (!ctx.cr6.eq) goto loc_82624EFC;
loc_82624F24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82624F2C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82624F44"))) PPC_WEAK_FUNC(sub_82624F44);
PPC_FUNC_IMPL(__imp__sub_82624F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82624F48"))) PPC_WEAK_FUNC(sub_82624F48);
PPC_FUNC_IMPL(__imp__sub_82624F48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82624F60"))) PPC_WEAK_FUNC(sub_82624F60);
PPC_FUNC_IMPL(__imp__sub_82624F60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82434668
	sub_82434668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82624F74"))) PPC_WEAK_FUNC(sub_82624F74);
PPC_FUNC_IMPL(__imp__sub_82624F74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82624F78"))) PPC_WEAK_FUNC(sub_82624F78);
PPC_FUNC_IMPL(__imp__sub_82624F78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82624F88"))) PPC_WEAK_FUNC(sub_82624F88);
PPC_FUNC_IMPL(__imp__sub_82624F88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82624fa8
	if (ctx.cr6.lt) goto loc_82624FA8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82624FA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82624FB0"))) PPC_WEAK_FUNC(sub_82624FB0);
PPC_FUNC_IMPL(__imp__sub_82624FB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82624FCC"))) PPC_WEAK_FUNC(sub_82624FCC);
PPC_FUNC_IMPL(__imp__sub_82624FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82624FD0"))) PPC_WEAK_FUNC(sub_82624FD0);
PPC_FUNC_IMPL(__imp__sub_82624FD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82624FEC"))) PPC_WEAK_FUNC(sub_82624FEC);
PPC_FUNC_IMPL(__imp__sub_82624FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82624FF0"))) PPC_WEAK_FUNC(sub_82624FF0);
PPC_FUNC_IMPL(__imp__sub_82624FF0) {
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
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-28912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82625030
	if (!ctx.cr6.eq) goto loc_82625030;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x825ddb88
	ctx.lr = 0x82625024;
	sub_825DDB88(ctx, base);
	// stw r3,-28912(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28912, ctx.r3.u32);
	// bl 0x825ddc48
	ctx.lr = 0x8262502C;
	sub_825DDC48(ctx, base);
	// lwz r11,-28912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28912);
loc_82625030:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82295518
	ctx.lr = 0x82625044;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21944
	ctx.r10.s64 = ctx.r11.s64 + -21944;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82625084
	if (!ctx.cr6.lt) goto loc_82625084;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x82625084
	if (ctx.cr6.eq) goto loc_82625084;
	// bl 0x826250a0
	ctx.lr = 0x82625080;
	sub_826250A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82625084:
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

__attribute__((alias("__imp__sub_8262509C"))) PPC_WEAK_FUNC(sub_8262509C);
PPC_FUNC_IMPL(__imp__sub_8262509C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826250A0"))) PPC_WEAK_FUNC(sub_826250A0);
PPC_FUNC_IMPL(__imp__sub_826250A0) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_826250C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82295518
	ctx.lr = 0x826250C8;
	sub_82295518(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826250f4
	if (!ctx.cr6.lt) goto loc_826250F4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x826250c0
	if (!ctx.cr6.eq) goto loc_826250C0;
loc_826250F4:
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

__attribute__((alias("__imp__sub_8262510C"))) PPC_WEAK_FUNC(sub_8262510C);
PPC_FUNC_IMPL(__imp__sub_8262510C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625110"))) PPC_WEAK_FUNC(sub_82625110);
PPC_FUNC_IMPL(__imp__sub_82625110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625128"))) PPC_WEAK_FUNC(sub_82625128);
PPC_FUNC_IMPL(__imp__sub_82625128) {
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
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-27388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82625168
	if (!ctx.cr6.eq) goto loc_82625168;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8274b3e8
	ctx.lr = 0x8262515C;
	sub_8274B3E8(ctx, base);
	// stw r3,-27388(r30)
	PPC_STORE_U32(ctx.r30.u32 + -27388, ctx.r3.u32);
	// bl 0x8274b4a8
	ctx.lr = 0x82625164;
	sub_8274B4A8(ctx, base);
	// lwz r11,-27388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27388);
loc_82625168:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82295518
	ctx.lr = 0x8262517C;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21944
	ctx.r10.s64 = ctx.r11.s64 + -21944;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826251bc
	if (!ctx.cr6.lt) goto loc_826251BC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x826251bc
	if (ctx.cr6.eq) goto loc_826251BC;
	// bl 0x826251d8
	ctx.lr = 0x826251B8;
	sub_826251D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826251BC:
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

__attribute__((alias("__imp__sub_826251D4"))) PPC_WEAK_FUNC(sub_826251D4);
PPC_FUNC_IMPL(__imp__sub_826251D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826251D8"))) PPC_WEAK_FUNC(sub_826251D8);
PPC_FUNC_IMPL(__imp__sub_826251D8) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_826251F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82295518
	ctx.lr = 0x82625200;
	sub_82295518(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8262522c
	if (!ctx.cr6.lt) goto loc_8262522C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x826251f8
	if (!ctx.cr6.eq) goto loc_826251F8;
loc_8262522C:
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

__attribute__((alias("__imp__sub_82625244"))) PPC_WEAK_FUNC(sub_82625244);
PPC_FUNC_IMPL(__imp__sub_82625244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625248"))) PPC_WEAK_FUNC(sub_82625248);
PPC_FUNC_IMPL(__imp__sub_82625248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625260"))) PPC_WEAK_FUNC(sub_82625260);
PPC_FUNC_IMPL(__imp__sub_82625260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625278"))) PPC_WEAK_FUNC(sub_82625278);
PPC_FUNC_IMPL(__imp__sub_82625278) {
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
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-27324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826252b8
	if (!ctx.cr6.eq) goto loc_826252B8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82765748
	ctx.lr = 0x826252AC;
	sub_82765748(ctx, base);
	// stw r3,-27324(r30)
	PPC_STORE_U32(ctx.r30.u32 + -27324, ctx.r3.u32);
	// bl 0x82765808
	ctx.lr = 0x826252B4;
	sub_82765808(ctx, base);
	// lwz r11,-27324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27324);
loc_826252B8:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82295518
	ctx.lr = 0x826252CC;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21944
	ctx.r10.s64 = ctx.r11.s64 + -21944;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8262530c
	if (!ctx.cr6.lt) goto loc_8262530C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x8262530c
	if (ctx.cr6.eq) goto loc_8262530C;
	// bl 0x82625328
	ctx.lr = 0x82625308;
	sub_82625328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8262530C:
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

__attribute__((alias("__imp__sub_82625324"))) PPC_WEAK_FUNC(sub_82625324);
PPC_FUNC_IMPL(__imp__sub_82625324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625328"))) PPC_WEAK_FUNC(sub_82625328);
PPC_FUNC_IMPL(__imp__sub_82625328) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_82625348:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82295518
	ctx.lr = 0x82625350;
	sub_82295518(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8262537c
	if (!ctx.cr6.lt) goto loc_8262537C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x82625348
	if (!ctx.cr6.eq) goto loc_82625348;
loc_8262537C:
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

__attribute__((alias("__imp__sub_82625394"))) PPC_WEAK_FUNC(sub_82625394);
PPC_FUNC_IMPL(__imp__sub_82625394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625398"))) PPC_WEAK_FUNC(sub_82625398);
PPC_FUNC_IMPL(__imp__sub_82625398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826253B0"))) PPC_WEAK_FUNC(sub_826253B0);
PPC_FUNC_IMPL(__imp__sub_826253B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r3,3,0,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFC0000;
	// clrlwi r9,r3,22
	ctx.r9.u64 = ctx.r3.u32 & 0x3FF;
	// rlwinm r11,r3,22,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x1F;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r7,r11,111
	ctx.r7.s64 = ctx.r11.s64 + 111;
	// rlwinm r6,r8,13,0,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r5,r7,23,0,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0xFF800000;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826253DC"))) PPC_WEAK_FUNC(sub_826253DC);
PPC_FUNC_IMPL(__imp__sub_826253DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826253E0"))) PPC_WEAK_FUNC(sub_826253E0);
PPC_FUNC_IMPL(__imp__sub_826253E0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826253E8"))) PPC_WEAK_FUNC(sub_826253E8);
PPC_FUNC_IMPL(__imp__sub_826253E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826253F8"))) PPC_WEAK_FUNC(sub_826253F8);
PPC_FUNC_IMPL(__imp__sub_826253F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262540C"))) PPC_WEAK_FUNC(sub_8262540C);
PPC_FUNC_IMPL(__imp__sub_8262540C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625410"))) PPC_WEAK_FUNC(sub_82625410);
PPC_FUNC_IMPL(__imp__sub_82625410) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625418"))) PPC_WEAK_FUNC(sub_82625418);
PPC_FUNC_IMPL(__imp__sub_82625418) {
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

__attribute__((alias("__imp__sub_8262542C"))) PPC_WEAK_FUNC(sub_8262542C);
PPC_FUNC_IMPL(__imp__sub_8262542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625430"))) PPC_WEAK_FUNC(sub_82625430);
PPC_FUNC_IMPL(__imp__sub_82625430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82625438;
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
	// ble cr6,0x82625510
	if (!ctx.cr6.gt) goto loc_82625510;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8262545C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826254bc
	if (ctx.cr6.eq) goto loc_826254BC;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826254bc
	if (ctx.cr6.eq) goto loc_826254BC;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8262549c
	if (!ctx.cr6.eq) goto loc_8262549C;
	// bl 0x822900a0
	ctx.lr = 0x82625498;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_8262549C:
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
	ctx.lr = 0x826254B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_826254BC:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826254f0
	if (ctx.cr6.eq) goto loc_826254F0;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826254dc
	if (!ctx.cr6.eq) goto loc_826254DC;
	// bl 0x822900a0
	ctx.lr = 0x826254D8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_826254DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826254F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826254F0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8262545c
	if (ctx.cr6.lt) goto loc_8262545C;
loc_82625510:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82625544
	if (ctx.cr6.eq) goto loc_82625544;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82625530
	if (!ctx.cr6.eq) goto loc_82625530;
	// bl 0x822900a0
	ctx.lr = 0x8262552C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82625530:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82625544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82625544:
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

__attribute__((alias("__imp__sub_82625558"))) PPC_WEAK_FUNC(sub_82625558);
PPC_FUNC_IMPL(__imp__sub_82625558) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625560"))) PPC_WEAK_FUNC(sub_82625560);
PPC_FUNC_IMPL(__imp__sub_82625560) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625578"))) PPC_WEAK_FUNC(sub_82625578);
PPC_FUNC_IMPL(__imp__sub_82625578) {
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

__attribute__((alias("__imp__sub_8262558C"))) PPC_WEAK_FUNC(sub_8262558C);
PPC_FUNC_IMPL(__imp__sub_8262558C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625590"))) PPC_WEAK_FUNC(sub_82625590);
PPC_FUNC_IMPL(__imp__sub_82625590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82625598;
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
	// ble cr6,0x8262566c
	if (!ctx.cr6.gt) goto loc_8262566C;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_826255BC:
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
	// beq cr6,0x82625618
	if (ctx.cr6.eq) goto loc_82625618;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82625618
	if (ctx.cr6.eq) goto loc_82625618;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826255f8
	if (!ctx.cr6.eq) goto loc_826255F8;
	// bl 0x822900a0
	ctx.lr = 0x826255F4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_826255F8:
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
	ctx.lr = 0x82625614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82625618:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8262564c
	if (ctx.cr6.eq) goto loc_8262564C;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82625638
	if (!ctx.cr6.eq) goto loc_82625638;
	// bl 0x822900a0
	ctx.lr = 0x82625634;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_82625638:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8262564C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8262564C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826255bc
	if (ctx.cr6.lt) goto loc_826255BC;
loc_8262566C:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826256a0
	if (ctx.cr6.eq) goto loc_826256A0;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8262568c
	if (!ctx.cr6.eq) goto loc_8262568C;
	// bl 0x822900a0
	ctx.lr = 0x82625688;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_8262568C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826256A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826256A0:
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

__attribute__((alias("__imp__sub_826256B4"))) PPC_WEAK_FUNC(sub_826256B4);
PPC_FUNC_IMPL(__imp__sub_826256B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826256B8"))) PPC_WEAK_FUNC(sub_826256B8);
PPC_FUNC_IMPL(__imp__sub_826256B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826256C0"))) PPC_WEAK_FUNC(sub_826256C0);
PPC_FUNC_IMPL(__imp__sub_826256C0) {
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

__attribute__((alias("__imp__sub_826256D0"))) PPC_WEAK_FUNC(sub_826256D0);
PPC_FUNC_IMPL(__imp__sub_826256D0) {
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
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-28324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82625710
	if (!ctx.cr6.eq) goto loc_82625710;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x82636a08
	ctx.lr = 0x82625704;
	sub_82636A08(ctx, base);
	// stw r3,-28324(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28324, ctx.r3.u32);
	// bl 0x82636ac8
	ctx.lr = 0x8262570C;
	sub_82636AC8(ctx, base);
	// lwz r11,-28324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28324);
loc_82625710:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82295518
	ctx.lr = 0x82625724;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21944
	ctx.r10.s64 = ctx.r11.s64 + -21944;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82625764
	if (!ctx.cr6.lt) goto loc_82625764;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x82625764
	if (ctx.cr6.eq) goto loc_82625764;
	// bl 0x82625780
	ctx.lr = 0x82625760;
	sub_82625780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82625764:
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

__attribute__((alias("__imp__sub_8262577C"))) PPC_WEAK_FUNC(sub_8262577C);
PPC_FUNC_IMPL(__imp__sub_8262577C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625780"))) PPC_WEAK_FUNC(sub_82625780);
PPC_FUNC_IMPL(__imp__sub_82625780) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_826257A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82295518
	ctx.lr = 0x826257A8;
	sub_82295518(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826257d4
	if (!ctx.cr6.lt) goto loc_826257D4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x826257a0
	if (!ctx.cr6.eq) goto loc_826257A0;
loc_826257D4:
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

__attribute__((alias("__imp__sub_826257EC"))) PPC_WEAK_FUNC(sub_826257EC);
PPC_FUNC_IMPL(__imp__sub_826257EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826257F0"))) PPC_WEAK_FUNC(sub_826257F0);
PPC_FUNC_IMPL(__imp__sub_826257F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625808"))) PPC_WEAK_FUNC(sub_82625808);
PPC_FUNC_IMPL(__imp__sub_82625808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625820"))) PPC_WEAK_FUNC(sub_82625820);
PPC_FUNC_IMPL(__imp__sub_82625820) {
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
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-30372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82625860
	if (!ctx.cr6.eq) goto loc_82625860;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x824caed0
	ctx.lr = 0x82625854;
	sub_824CAED0(ctx, base);
	// stw r3,-30372(r30)
	PPC_STORE_U32(ctx.r30.u32 + -30372, ctx.r3.u32);
	// bl 0x824caf90
	ctx.lr = 0x8262585C;
	sub_824CAF90(ctx, base);
	// lwz r11,-30372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30372);
loc_82625860:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82295518
	ctx.lr = 0x82625874;
	sub_82295518(ctx, base);
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21944
	ctx.r10.s64 = ctx.r11.s64 + -21944;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826258b4
	if (!ctx.cr6.lt) goto loc_826258B4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x826258b4
	if (ctx.cr6.eq) goto loc_826258B4;
	// bl 0x826258d0
	ctx.lr = 0x826258B0;
	sub_826258D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826258B4:
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

__attribute__((alias("__imp__sub_826258CC"))) PPC_WEAK_FUNC(sub_826258CC);
PPC_FUNC_IMPL(__imp__sub_826258CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826258D0"))) PPC_WEAK_FUNC(sub_826258D0);
PPC_FUNC_IMPL(__imp__sub_826258D0) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-21944
	ctx.r31.s64 = ctx.r11.s64 + -21944;
loc_826258F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82295518
	ctx.lr = 0x826258F8;
	sub_82295518(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82625924
	if (!ctx.cr6.lt) goto loc_82625924;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x826258f0
	if (!ctx.cr6.eq) goto loc_826258F0;
loc_82625924:
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

__attribute__((alias("__imp__sub_8262593C"))) PPC_WEAK_FUNC(sub_8262593C);
PPC_FUNC_IMPL(__imp__sub_8262593C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625940"))) PPC_WEAK_FUNC(sub_82625940);
PPC_FUNC_IMPL(__imp__sub_82625940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625958"))) PPC_WEAK_FUNC(sub_82625958);
PPC_FUNC_IMPL(__imp__sub_82625958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625970"))) PPC_WEAK_FUNC(sub_82625970);
PPC_FUNC_IMPL(__imp__sub_82625970) {
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
	// bl 0x826259f8
	ctx.lr = 0x82625988;
	sub_826259F8(ctx, base);
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

__attribute__((alias("__imp__sub_826259A0"))) PPC_WEAK_FUNC(sub_826259A0);
PPC_FUNC_IMPL(__imp__sub_826259A0) {
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
	// beq cr6,0x826259d8
	if (ctx.cr6.eq) goto loc_826259D8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x826259D8;
	sub_82294520(ctx, base);
loc_826259D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x826259E0;
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

__attribute__((alias("__imp__sub_826259F8"))) PPC_WEAK_FUNC(sub_826259F8);
PPC_FUNC_IMPL(__imp__sub_826259F8) {
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
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82625a34
	if (ctx.cr6.eq) goto loc_82625A34;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x82625A34;
	sub_82294520(ctx, base);
loc_82625A34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x82625A3C;
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

__attribute__((alias("__imp__sub_82625A50"))) PPC_WEAK_FUNC(sub_82625A50);
PPC_FUNC_IMPL(__imp__sub_82625A50) {
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
	// beq cr6,0x82625a88
	if (ctx.cr6.eq) goto loc_82625A88;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82294520
	ctx.lr = 0x82625A88;
	sub_82294520(ctx, base);
loc_82625A88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x82625A90;
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

__attribute__((alias("__imp__sub_82625AA4"))) PPC_WEAK_FUNC(sub_82625AA4);
PPC_FUNC_IMPL(__imp__sub_82625AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625AA8"))) PPC_WEAK_FUNC(sub_82625AA8);
PPC_FUNC_IMPL(__imp__sub_82625AA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625AAC"))) PPC_WEAK_FUNC(sub_82625AAC);
PPC_FUNC_IMPL(__imp__sub_82625AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625AB0"))) PPC_WEAK_FUNC(sub_82625AB0);
PPC_FUNC_IMPL(__imp__sub_82625AB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625AB4"))) PPC_WEAK_FUNC(sub_82625AB4);
PPC_FUNC_IMPL(__imp__sub_82625AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625AB8"))) PPC_WEAK_FUNC(sub_82625AB8);
PPC_FUNC_IMPL(__imp__sub_82625AB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82625d60
	sub_82625D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82625AC8"))) PPC_WEAK_FUNC(sub_82625AC8);
PPC_FUNC_IMPL(__imp__sub_82625AC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625ACC"))) PPC_WEAK_FUNC(sub_82625ACC);
PPC_FUNC_IMPL(__imp__sub_82625ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625AD0"))) PPC_WEAK_FUNC(sub_82625AD0);
PPC_FUNC_IMPL(__imp__sub_82625AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82625AD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82625AFC;
	sub_82294AC0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82625b28
	if (ctx.cr0.eq) goto loc_82625B28;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x82625b2c
	goto loc_82625B2C;
loc_82625B28:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82625B2C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x822b1498
	ctx.lr = 0x82625B38;
	sub_822B1498(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 & ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stwx r4,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82625b8c
	if (!ctx.cr6.lt) goto loc_82625B8C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82625d60
	ctx.lr = 0x82625B8C;
	sub_82625D60(ctx, base);
loc_82625B8C:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82625B98"))) PPC_WEAK_FUNC(sub_82625B98);
PPC_FUNC_IMPL(__imp__sub_82625B98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82625ee0
	sub_82625EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82625BA8"))) PPC_WEAK_FUNC(sub_82625BA8);
PPC_FUNC_IMPL(__imp__sub_82625BA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625BAC"))) PPC_WEAK_FUNC(sub_82625BAC);
PPC_FUNC_IMPL(__imp__sub_82625BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625BB0"))) PPC_WEAK_FUNC(sub_82625BB0);
PPC_FUNC_IMPL(__imp__sub_82625BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82625BB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82294ac0
	ctx.lr = 0x82625BDC;
	sub_82294AC0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82625c04
	if (ctx.cr0.eq) goto loc_82625C04;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// b 0x82625c08
	goto loc_82625C08;
loc_82625C04:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82625C08:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// and r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r8,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stwx r3,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82625c60
	if (!ctx.cr6.lt) goto loc_82625C60;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82625ee0
	ctx.lr = 0x82625C60;
	sub_82625EE0(ctx, base);
loc_82625C60:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82625C6C"))) PPC_WEAK_FUNC(sub_82625C6C);
PPC_FUNC_IMPL(__imp__sub_82625C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625C70"))) PPC_WEAK_FUNC(sub_82625C70);
PPC_FUNC_IMPL(__imp__sub_82625C70) {
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

__attribute__((alias("__imp__sub_82625C84"))) PPC_WEAK_FUNC(sub_82625C84);
PPC_FUNC_IMPL(__imp__sub_82625C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625C88"))) PPC_WEAK_FUNC(sub_82625C88);
PPC_FUNC_IMPL(__imp__sub_82625C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82625C90;
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
	// beq cr6,0x82625cd0
	if (ctx.cr6.eq) goto loc_82625CD0;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82625cbc
	if (!ctx.cr6.eq) goto loc_82625CBC;
	// bl 0x822900a0
	ctx.lr = 0x82625CB8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82625CBC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82625CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82625CD0:
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

__attribute__((alias("__imp__sub_82625CE8"))) PPC_WEAK_FUNC(sub_82625CE8);
PPC_FUNC_IMPL(__imp__sub_82625CE8) {
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

__attribute__((alias("__imp__sub_82625D00"))) PPC_WEAK_FUNC(sub_82625D00);
PPC_FUNC_IMPL(__imp__sub_82625D00) {
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

__attribute__((alias("__imp__sub_82625D18"))) PPC_WEAK_FUNC(sub_82625D18);
PPC_FUNC_IMPL(__imp__sub_82625D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625D30"))) PPC_WEAK_FUNC(sub_82625D30);
PPC_FUNC_IMPL(__imp__sub_82625D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625D48"))) PPC_WEAK_FUNC(sub_82625D48);
PPC_FUNC_IMPL(__imp__sub_82625D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625D60"))) PPC_WEAK_FUNC(sub_82625D60);
PPC_FUNC_IMPL(__imp__sub_82625D60) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82294a58
	ctx.lr = 0x82625D80;
	sub_82294A58(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82625d9c
	if (!ctx.cr6.gt) goto loc_82625D9C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82625D9C:
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822959a8
	ctx.lr = 0x82625DA4;
	sub_822959A8(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82625ddc
	if (!ctx.cr6.gt) goto loc_82625DDC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82625DC0:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82625dc0
	if (ctx.cr6.lt) goto loc_82625DC0;
loc_82625DDC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82625eb8
	if (!ctx.cr6.gt) goto loc_82625EB8;
	// lis r11,-25033
	ctx.r11.s64 = -1640562688;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r6,r11,31161
	ctx.r6.u64 = ctx.r11.u64 | 31161;
loc_82625DF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subf r3,r11,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r11.s64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r30,r10,19,13,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// rlwinm r30,r3,20,12,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0xFFFFF;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r30,r11,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// xor r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// subf r3,r10,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r10.s64;
	// rlwinm r30,r10,27,5,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// rlwinm r30,r3,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r30,r11,10,0,21
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// xor r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// subf r3,r10,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r10.s64;
	// rlwinm r10,r10,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// xor r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// and r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r9,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82625df8
	if (ctx.cr6.lt) goto loc_82625DF8;
loc_82625EB8:
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

__attribute__((alias("__imp__sub_82625ED0"))) PPC_WEAK_FUNC(sub_82625ED0);
PPC_FUNC_IMPL(__imp__sub_82625ED0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625EE0"))) PPC_WEAK_FUNC(sub_82625EE0);
PPC_FUNC_IMPL(__imp__sub_82625EE0) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82294a58
	ctx.lr = 0x82625EFC;
	sub_82294A58(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82625f18
	if (!ctx.cr6.gt) goto loc_82625F18;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82625F18:
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822959a8
	ctx.lr = 0x82625F20;
	sub_822959A8(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82625f58
	if (!ctx.cr6.gt) goto loc_82625F58;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82625F3C:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82625f3c
	if (ctx.cr6.lt) goto loc_82625F3C;
loc_82625F58:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82625fb0
	if (!ctx.cr6.gt) goto loc_82625FB0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82625F6C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r3,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r11,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82625f6c
	if (ctx.cr6.lt) goto loc_82625F6C;
loc_82625FB0:
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

__attribute__((alias("__imp__sub_82625FC4"))) PPC_WEAK_FUNC(sub_82625FC4);
PPC_FUNC_IMPL(__imp__sub_82625FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625FC8"))) PPC_WEAK_FUNC(sub_82625FC8);
PPC_FUNC_IMPL(__imp__sub_82625FC8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625FD4"))) PPC_WEAK_FUNC(sub_82625FD4);
PPC_FUNC_IMPL(__imp__sub_82625FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625FD8"))) PPC_WEAK_FUNC(sub_82625FD8);
PPC_FUNC_IMPL(__imp__sub_82625FD8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-31240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82626018
	if (!ctx.cr6.eq) goto loc_82626018;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x8242a6e0
	ctx.lr = 0x8262600C;
	sub_8242A6E0(ctx, base);
	// stw r3,-31240(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31240, ctx.r3.u32);
	// bl 0x8242a7a0
	ctx.lr = 0x82626014;
	sub_8242A7A0(ctx, base);
	// lwz r3,-31240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31240);
loc_82626018:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26272
	ctx.r5.s64 = ctx.r11.s64 + -26272;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a0678
	ctx.lr = 0x8262602C;
	sub_822A0678(ctx, base);
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

__attribute__((alias("__imp__sub_82626044"))) PPC_WEAK_FUNC(sub_82626044);
PPC_FUNC_IMPL(__imp__sub_82626044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626048"))) PPC_WEAK_FUNC(sub_82626048);
PPC_FUNC_IMPL(__imp__sub_82626048) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82626058
	if (!ctx.cr6.eq) goto loc_82626058;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r4,25104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
loc_82626058:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// b 0x822a93e8
	sub_822A93E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82626074"))) PPC_WEAK_FUNC(sub_82626074);
PPC_FUNC_IMPL(__imp__sub_82626074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626078"))) PPC_WEAK_FUNC(sub_82626078);
PPC_FUNC_IMPL(__imp__sub_82626078) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82626088"))) PPC_WEAK_FUNC(sub_82626088);
PPC_FUNC_IMPL(__imp__sub_82626088) {
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
	// beq cr6,0x826260f0
	if (ctx.cr6.eq) goto loc_826260F0;
	// bl 0x822cb270
	ctx.lr = 0x826260A8;
	sub_822CB270(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826260c8
	if (ctx.cr6.eq) goto loc_826260C8;
loc_826260B4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x826260d8
	if (ctx.cr6.eq) goto loc_826260D8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826260b4
	if (!ctx.cr6.eq) goto loc_826260B4;
loc_826260C8:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826260f0
	if (ctx.cr6.eq) goto loc_826260F0;
loc_826260D8:
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
loc_826260F0:
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

__attribute__((alias("__imp__sub_82626108"))) PPC_WEAK_FUNC(sub_82626108);
PPC_FUNC_IMPL(__imp__sub_82626108) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82626118
	if (!ctx.cr6.eq) goto loc_82626118;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r4,25104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
loc_82626118:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// b 0x822a93e8
	sub_822A93E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82626134"))) PPC_WEAK_FUNC(sub_82626134);
PPC_FUNC_IMPL(__imp__sub_82626134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626138"))) PPC_WEAK_FUNC(sub_82626138);
PPC_FUNC_IMPL(__imp__sub_82626138) {
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
	// beq cr6,0x826261a0
	if (ctx.cr6.eq) goto loc_826261A0;
	// bl 0x822cb2c0
	ctx.lr = 0x82626158;
	sub_822CB2C0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82626178
	if (ctx.cr6.eq) goto loc_82626178;
loc_82626164:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82626188
	if (ctx.cr6.eq) goto loc_82626188;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82626164
	if (!ctx.cr6.eq) goto loc_82626164;
loc_82626178:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826261a0
	if (ctx.cr6.eq) goto loc_826261A0;
loc_82626188:
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
loc_826261A0:
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

__attribute__((alias("__imp__sub_826261B8"))) PPC_WEAK_FUNC(sub_826261B8);
PPC_FUNC_IMPL(__imp__sub_826261B8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x826261c8
	if (!ctx.cr6.eq) goto loc_826261C8;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r4,25104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
loc_826261C8:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// b 0x822a93e8
	sub_822A93E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826261E4"))) PPC_WEAK_FUNC(sub_826261E4);
PPC_FUNC_IMPL(__imp__sub_826261E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826261E8"))) PPC_WEAK_FUNC(sub_826261E8);
PPC_FUNC_IMPL(__imp__sub_826261E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826261EC"))) PPC_WEAK_FUNC(sub_826261EC);
PPC_FUNC_IMPL(__imp__sub_826261EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826261F0"))) PPC_WEAK_FUNC(sub_826261F0);
PPC_FUNC_IMPL(__imp__sub_826261F0) {
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
	// beq cr6,0x82626258
	if (ctx.cr6.eq) goto loc_82626258;
	// bl 0x82311e18
	ctx.lr = 0x82626210;
	sub_82311E18(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82626230
	if (ctx.cr6.eq) goto loc_82626230;
loc_8262621C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82626240
	if (ctx.cr6.eq) goto loc_82626240;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8262621c
	if (!ctx.cr6.eq) goto loc_8262621C;
loc_82626230:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82626258
	if (ctx.cr6.eq) goto loc_82626258;
loc_82626240:
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
loc_82626258:
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

__attribute__((alias("__imp__sub_82626270"))) PPC_WEAK_FUNC(sub_82626270);
PPC_FUNC_IMPL(__imp__sub_82626270) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82626280
	if (!ctx.cr6.eq) goto loc_82626280;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r4,25104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
loc_82626280:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,28868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28868);
	// b 0x822a93e8
	sub_822A93E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262629C"))) PPC_WEAK_FUNC(sub_8262629C);
PPC_FUNC_IMPL(__imp__sub_8262629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826262A0"))) PPC_WEAK_FUNC(sub_826262A0);
PPC_FUNC_IMPL(__imp__sub_826262A0) {
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
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294ac0
	ctx.lr = 0x826262CC;
	sub_82294AC0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
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

__attribute__((alias("__imp__sub_826262F4"))) PPC_WEAK_FUNC(sub_826262F4);
PPC_FUNC_IMPL(__imp__sub_826262F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826262F8"))) PPC_WEAK_FUNC(sub_826262F8);
PPC_FUNC_IMPL(__imp__sub_826262F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82626300;
	__savegprlr_23(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x8262675c
	if (ctx.cr6.lt) goto loc_8262675C;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// li r5,248
	ctx.r5.s64 = 248;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,-48
	ctx.r9.s64 = ctx.r11.s64 + -48;
	// stw r9,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x8262633C;
	sub_82CB16F0(ctx, base);
	// addi r24,r1,288
	ctx.r24.s64 = ctx.r1.s64 + 288;
	// li r23,48
	ctx.r23.s64 = 48;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r26,-31885
	ctx.r26.s64 = -2089615360;
loc_8262634C:
	// ld r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r28,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r28.s64;
	// divw r11,r10,r23
	ctx.r11.s32 = ctx.r10.s32 / ctx.r23.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82626658
	if (!ctx.cr6.gt) goto loc_82626658;
loc_82626370:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82626df8
	ctx.lr = 0x82626394;
	sub_82626DF8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82626e88
	ctx.lr = 0x826263A0;
	sub_82626E88(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82626e88
	ctx.lr = 0x826263AC;
	sub_82626E88(ctx, base);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r31,268(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826263f8
	if (ctx.cr6.eq) goto loc_826263F8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82626428
	if (ctx.cr6.eq) goto loc_82626428;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826263d8
	if (!ctx.cr6.eq) goto loc_826263D8;
	// bl 0x822900a0
	ctx.lr = 0x826263D4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_826263D8:
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
	ctx.lr = 0x826263F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_826263F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82626428
	if (ctx.cr6.eq) goto loc_82626428;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82626414
	if (!ctx.cr6.eq) goto loc_82626414;
	// bl 0x822900a0
	ctx.lr = 0x82626410;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82626414:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82626428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82626428:
	// stw r25,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r25.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r25,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r25.u32);
	// addi r30,r27,48
	ctx.r30.s64 = ctx.r27.s64 + 48;
	// stw r25,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r25.u32);
loc_8262643C:
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82626458
	if (ctx.cr6.gt) goto loc_82626458;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8262643c
	if (!ctx.cr0.gt) goto loc_8262643C;
loc_82626458:
	// addi r30,r30,-48
	ctx.r30.s64 = ctx.r30.s64 + -48;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82626474
	if (!ctx.cr6.gt) goto loc_82626474;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x82626458
	if (!ctx.cr0.lt) goto loc_82626458;
loc_82626474:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x8262652c
	if (ctx.cr6.gt) goto loc_8262652C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82626df8
	ctx.lr = 0x82626488;
	sub_82626DF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82626e88
	ctx.lr = 0x82626494;
	sub_82626E88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82626e88
	ctx.lr = 0x826264A0;
	sub_82626E88(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,124(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826264ec
	if (ctx.cr6.eq) goto loc_826264EC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8262651c
	if (ctx.cr6.eq) goto loc_8262651C;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826264cc
	if (!ctx.cr6.eq) goto loc_826264CC;
	// bl 0x822900a0
	ctx.lr = 0x826264C8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_826264CC:
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
	ctx.lr = 0x826264E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_826264EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8262651c
	if (ctx.cr6.eq) goto loc_8262651C;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82626508
	if (!ctx.cr6.eq) goto loc_82626508;
	// bl 0x822900a0
	ctx.lr = 0x82626504;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82626508:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8262651C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8262651C:
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// b 0x8262643c
	goto loc_8262643C;
loc_8262652C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82626df8
	ctx.lr = 0x82626538;
	sub_82626DF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82626e88
	ctx.lr = 0x82626544;
	sub_82626E88(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82626e88
	ctx.lr = 0x82626550;
	sub_82626E88(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8262659c
	if (ctx.cr6.eq) goto loc_8262659C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826265cc
	if (ctx.cr6.eq) goto loc_826265CC;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8262657c
	if (!ctx.cr6.eq) goto loc_8262657C;
	// bl 0x822900a0
	ctx.lr = 0x82626578;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_8262657C:
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
	ctx.lr = 0x82626598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8262659C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826265cc
	if (ctx.cr6.eq) goto loc_826265CC;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826265b8
	if (!ctx.cr6.eq) goto loc_826265B8;
	// bl 0x822900a0
	ctx.lr = 0x826265B4;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_826265B8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826265CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826265CC:
	// subf r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	// stw r25,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r25.u32);
	// subf r10,r29,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r29.s64;
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// addi r9,r11,-48
	ctx.r9.s64 = ctx.r11.s64 + -48;
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// divw r8,r10,r23
	ctx.r8.s32 = ctx.r10.s32 / ctx.r23.s32;
	// divw r7,r9,r23
	ctx.r7.s32 = ctx.r9.s32 / ctx.r23.s32;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82626620
	if (ctx.cr6.lt) goto loc_82626620;
	// addi r11,r28,48
	ctx.r11.s64 = ctx.r28.s64 + 48;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82626610
	if (!ctx.cr6.lt) goto loc_82626610;
	// addi r11,r30,-48
	ctx.r11.s64 = ctx.r30.s64 + -48;
	// stw r28,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r28.u32);
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
loc_82626610:
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x8262674c
	if (!ctx.cr6.gt) goto loc_8262674C;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// b 0x82626644
	goto loc_82626644;
loc_82626620:
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82626634
	if (!ctx.cr6.gt) goto loc_82626634;
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
	// stw r27,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r27.u32);
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
loc_82626634:
	// addi r11,r28,48
	ctx.r11.s64 = ctx.r28.s64 + 48;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8262674c
	if (!ctx.cr6.lt) goto loc_8262674C;
	// addi r27,r30,-48
	ctx.r27.s64 = ctx.r30.s64 + -48;
loc_82626644:
	// subf r11,r28,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r28.s64;
	// divw r11,r11,r23
	ctx.r11.s32 = ctx.r11.s32 / ctx.r23.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x82626370
	if (ctx.cr6.gt) goto loc_82626370;
loc_82626658:
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x8262674c
	if (!ctx.cr6.gt) goto loc_8262674C;
	// addi r30,r28,48
	ctx.r30.s64 = ctx.r28.s64 + 48;
loc_82626664:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82626694
	if (ctx.cr6.gt) goto loc_82626694;
loc_82626674:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf. r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x82626688
	if (!ctx.cr0.gt) goto loc_82626688;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82626688:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x82626674
	if (!ctx.cr6.gt) goto loc_82626674;
loc_82626694:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82626df8
	ctx.lr = 0x826266A0;
	sub_82626DF8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82626e88
	ctx.lr = 0x826266AC;
	sub_82626E88(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82626e88
	ctx.lr = 0x826266B8;
	sub_82626E88(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r31,220(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82626704
	if (ctx.cr6.eq) goto loc_82626704;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82626734
	if (ctx.cr6.eq) goto loc_82626734;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826266e4
	if (!ctx.cr6.eq) goto loc_826266E4;
	// bl 0x822900a0
	ctx.lr = 0x826266E0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_826266E4:
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
	ctx.lr = 0x82626700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82626704:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82626734
	if (ctx.cr6.eq) goto loc_82626734;
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82626720
	if (!ctx.cr6.eq) goto loc_82626720;
	// bl 0x822900a0
	ctx.lr = 0x8262671C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28888);
loc_82626720:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82626734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82626734:
	// addi r27,r27,-48
	ctx.r27.s64 = ctx.r27.s64 + -48;
	// stw r25,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r25.u32);
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r25.u32);
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82626664
	if (ctx.cr6.gt) goto loc_82626664;
loc_8262674C:
	// addi r24,r24,-8
	ctx.r24.s64 = ctx.r24.s64 + -8;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8262634c
	if (!ctx.cr6.lt) goto loc_8262634C;
loc_8262675C:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82626764"))) PPC_WEAK_FUNC(sub_82626764);
PPC_FUNC_IMPL(__imp__sub_82626764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626768"))) PPC_WEAK_FUNC(sub_82626768);
PPC_FUNC_IMPL(__imp__sub_82626768) {
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
	ctx.lr = 0x82626794;
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

__attribute__((alias("__imp__sub_826267B4"))) PPC_WEAK_FUNC(sub_826267B4);
PPC_FUNC_IMPL(__imp__sub_826267B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826267B8"))) PPC_WEAK_FUNC(sub_826267B8);
PPC_FUNC_IMPL(__imp__sub_826267B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x826267C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x82626970
	if (ctx.cr6.lt) goto loc_82626970;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r5,248
	ctx.r5.s64 = 248;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x826267F0;
	sub_82CB16F0(ctx, base);
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
loc_826267F4:
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r30,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r30.s64;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82626910
	if (!ctx.cr6.gt) goto loc_82626910;
loc_82626818:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82626d58
	ctx.lr = 0x82626830;
	sub_82626D58(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r31,r28,16
	ctx.r31.s64 = ctx.r28.s64 + 16;
loc_82626838:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82626854
	if (ctx.cr6.gt) goto loc_82626854;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82626838
	if (!ctx.cr0.gt) goto loc_82626838;
loc_82626854:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82626870
	if (!ctx.cr6.gt) goto loc_82626870;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x82626854
	if (!ctx.cr0.lt) goto loc_82626854;
loc_82626870:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bgt cr6,0x82626888
	if (ctx.cr6.gt) goto loc_82626888;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82626d58
	ctx.lr = 0x82626884;
	sub_82626D58(ctx, base);
	// b 0x82626838
	goto loc_82626838;
loc_82626888:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82626d58
	ctx.lr = 0x82626890;
	sub_82626D58(ctx, base);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// subf r10,r29,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r29.s64;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// rlwinm r8,r10,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r7,r9,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826268d8
	if (ctx.cr6.lt) goto loc_826268D8;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x826268c8
	if (!ctx.cr6.lt) goto loc_826268C8;
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
loc_826268C8:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82626960
	if (!ctx.cr6.gt) goto loc_82626960;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x826268fc
	goto loc_826268FC;
loc_826268D8:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x826268ec
	if (!ctx.cr6.gt) goto loc_826268EC;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
loc_826268EC:
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82626960
	if (!ctx.cr6.lt) goto loc_82626960;
	// addi r28,r31,-16
	ctx.r28.s64 = ctx.r31.s64 + -16;
loc_826268FC:
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x82626818
	if (ctx.cr6.gt) goto loc_82626818;
loc_82626910:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82626960
	if (!ctx.cr6.gt) goto loc_82626960;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
loc_8262691C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x8262694c
	if (ctx.cr6.gt) goto loc_8262694C;
loc_8262692C:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf. r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x82626940
	if (!ctx.cr0.gt) goto loc_82626940;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82626940:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x8262692c
	if (!ctx.cr6.gt) goto loc_8262692C;
loc_8262694C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82626d58
	ctx.lr = 0x82626954;
	sub_82626D58(ctx, base);
	// addi r28,r28,-16
	ctx.r28.s64 = ctx.r28.s64 + -16;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x8262691c
	if (ctx.cr6.gt) goto loc_8262691C;
loc_82626960:
	// addi r27,r27,-8
	ctx.r27.s64 = ctx.r27.s64 + -8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826267f4
	if (!ctx.cr6.lt) goto loc_826267F4;
loc_82626970:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82626978"))) PPC_WEAK_FUNC(sub_82626978);
PPC_FUNC_IMPL(__imp__sub_82626978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x82626b60
	if (ctx.cr6.lt) goto loc_82626B60;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r5,248
	ctx.r5.s64 = 248;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x826269B0;
	sub_82CB16F0(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_826269B4:
	// ld r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// ble cr6,0x82626af0
	if (!ctx.cr6.gt) goto loc_82626AF0;
loc_826269D8:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addze r4,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r4.s64 = temp.s64;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r5,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r5.u32);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_826269FC:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82626a20
	if (ctx.cr6.gt) goto loc_82626A20;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r4,188(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r3,188(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 188);
	// subf. r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x826269fc
	if (!ctx.cr0.gt) goto loc_826269FC;
loc_82626A20:
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82626a44
	if (!ctx.cr6.gt) goto loc_82626A44;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,188(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r3,188(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 188);
	// subf. r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x82626a20
	if (!ctx.cr0.lt) goto loc_82626A20;
loc_82626A44:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82626a60
	if (ctx.cr6.gt) goto loc_82626A60;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// b 0x826269fc
	goto loc_826269FC;
loc_82626A60:
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r3,r9,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r9.s64;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// rlwinm r3,r3,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r8,r8,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82626ab8
	if (ctx.cr6.lt) goto loc_82626AB8;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82626aa8
	if (!ctx.cr6.lt) goto loc_82626AA8;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
loc_82626AA8:
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82626b50
	if (!ctx.cr6.gt) goto loc_82626B50;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82626adc
	goto loc_82626ADC;
loc_82626AB8:
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82626acc
	if (!ctx.cr6.gt) goto loc_82626ACC;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// stw r7,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
loc_82626ACC:
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82626b50
	if (!ctx.cr6.lt) goto loc_82626B50;
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
loc_82626ADC:
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bgt cr6,0x826269d8
	if (ctx.cr6.gt) goto loc_826269D8;
loc_82626AF0:
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82626b50
	if (!ctx.cr6.gt) goto loc_82626B50;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_82626AFC:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82626b34
	if (ctx.cr6.gt) goto loc_82626B34;
loc_82626B0C:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,188(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 188);
	// lwz r5,188(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	// subf. r4,r3,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble 0x82626b28
	if (!ctx.cr0.gt) goto loc_82626B28;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82626B28:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82626b0c
	if (!ctx.cr6.gt) goto loc_82626B0C;
loc_82626B34:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82626afc
	if (ctx.cr6.gt) goto loc_82626AFC;
loc_82626B50:
	// addi r6,r6,-8
	ctx.r6.s64 = ctx.r6.s64 + -8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826269b4
	if (!ctx.cr6.lt) goto loc_826269B4;
loc_82626B60:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82626B70"))) PPC_WEAK_FUNC(sub_82626B70);
PPC_FUNC_IMPL(__imp__sub_82626B70) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,-24256
	ctx.r4.s64 = ctx.r11.s64 + -24256;
	// bl 0x8232d178
	ctx.lr = 0x82626B88;
	sub_8232D178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82626B98"))) PPC_WEAK_FUNC(sub_82626B98);
PPC_FUNC_IMPL(__imp__sub_82626B98) {
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
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294498
	ctx.lr = 0x82626BD0;
	sub_82294498(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

__attribute__((alias("__imp__sub_82626BF4"))) PPC_WEAK_FUNC(sub_82626BF4);
PPC_FUNC_IMPL(__imp__sub_82626BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626BF8"))) PPC_WEAK_FUNC(sub_82626BF8);
PPC_FUNC_IMPL(__imp__sub_82626BF8) {
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
	ctx.lr = 0x82626C24;
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

__attribute__((alias("__imp__sub_82626C44"))) PPC_WEAK_FUNC(sub_82626C44);
PPC_FUNC_IMPL(__imp__sub_82626C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626C48"))) PPC_WEAK_FUNC(sub_82626C48);
PPC_FUNC_IMPL(__imp__sub_82626C48) {
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
	ctx.lr = 0x82626C74;
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

__attribute__((alias("__imp__sub_82626C9C"))) PPC_WEAK_FUNC(sub_82626C9C);
PPC_FUNC_IMPL(__imp__sub_82626C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626CA0"))) PPC_WEAK_FUNC(sub_82626CA0);
PPC_FUNC_IMPL(__imp__sub_82626CA0) {
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
	ctx.lr = 0x82626CCC;
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

__attribute__((alias("__imp__sub_82626CF4"))) PPC_WEAK_FUNC(sub_82626CF4);
PPC_FUNC_IMPL(__imp__sub_82626CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626CF8"))) PPC_WEAK_FUNC(sub_82626CF8);
PPC_FUNC_IMPL(__imp__sub_82626CF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82626df8
	ctx.lr = 0x82626D20;
	sub_82626DF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82626e88
	ctx.lr = 0x82626D2C;
	sub_82626E88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82626e88
	ctx.lr = 0x82626D38;
	sub_82626E88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826259f8
	ctx.lr = 0x82626D40;
	sub_826259F8(ctx, base);
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

__attribute__((alias("__imp__sub_82626D58"))) PPC_WEAK_FUNC(sub_82626D58);
PPC_FUNC_IMPL(__imp__sub_82626D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82626D60;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294bb8
	ctx.lr = 0x82626D78;
	sub_82294BB8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82295908
	ctx.lr = 0x82626D8C;
	sub_82295908(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x82295908
	ctx.lr = 0x82626DA0;
	sub_82295908(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82626dcc
	if (ctx.cr6.eq) goto loc_82626DCC;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x82626DCC;
	sub_82294520(ctx, base);
loc_82626DCC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x82626DD4;
	sub_82294CC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82626DDC"))) PPC_WEAK_FUNC(sub_82626DDC);
PPC_FUNC_IMPL(__imp__sub_82626DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626DE0"))) PPC_WEAK_FUNC(sub_82626DE0);
PPC_FUNC_IMPL(__imp__sub_82626DE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82626DF4"))) PPC_WEAK_FUNC(sub_82626DF4);
PPC_FUNC_IMPL(__imp__sub_82626DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626DF8"))) PPC_WEAK_FUNC(sub_82626DF8);
PPC_FUNC_IMPL(__imp__sub_82626DF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// bl 0x82294bb8
	ctx.lr = 0x82626E58;
	sub_82294BB8(ctx, base);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82626E84"))) PPC_WEAK_FUNC(sub_82626E84);
PPC_FUNC_IMPL(__imp__sub_82626E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626E88"))) PPC_WEAK_FUNC(sub_82626E88);
PPC_FUNC_IMPL(__imp__sub_82626E88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// bl 0x82295908
	ctx.lr = 0x82626EE8;
	sub_82295908(ctx, base);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82626F14"))) PPC_WEAK_FUNC(sub_82626F14);
PPC_FUNC_IMPL(__imp__sub_82626F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626F18"))) PPC_WEAK_FUNC(sub_82626F18);
PPC_FUNC_IMPL(__imp__sub_82626F18) {
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
	// bl 0x82294bb8
	ctx.lr = 0x82626F38;
	sub_82294BB8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82626F5C"))) PPC_WEAK_FUNC(sub_82626F5C);
PPC_FUNC_IMPL(__imp__sub_82626F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626F60"))) PPC_WEAK_FUNC(sub_82626F60);
PPC_FUNC_IMPL(__imp__sub_82626F60) {
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
	// bl 0x82295908
	ctx.lr = 0x82626F80;
	sub_82295908(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82626FA4"))) PPC_WEAK_FUNC(sub_82626FA4);
PPC_FUNC_IMPL(__imp__sub_82626FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626FA8"))) PPC_WEAK_FUNC(sub_82626FA8);
PPC_FUNC_IMPL(__imp__sub_82626FA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82626FB0"))) PPC_WEAK_FUNC(sub_82626FB0);
PPC_FUNC_IMPL(__imp__sub_82626FB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82626FB4"))) PPC_WEAK_FUNC(sub_82626FB4);
PPC_FUNC_IMPL(__imp__sub_82626FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626FB8"))) PPC_WEAK_FUNC(sub_82626FB8);
PPC_FUNC_IMPL(__imp__sub_82626FB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82626FBC"))) PPC_WEAK_FUNC(sub_82626FBC);
PPC_FUNC_IMPL(__imp__sub_82626FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626FC0"))) PPC_WEAK_FUNC(sub_82626FC0);
PPC_FUNC_IMPL(__imp__sub_82626FC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82626FC4"))) PPC_WEAK_FUNC(sub_82626FC4);
PPC_FUNC_IMPL(__imp__sub_82626FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626FC8"))) PPC_WEAK_FUNC(sub_82626FC8);
PPC_FUNC_IMPL(__imp__sub_82626FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82626FD0;
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
	// beq cr6,0x82627010
	if (ctx.cr6.eq) goto loc_82627010;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82626ffc
	if (!ctx.cr6.eq) goto loc_82626FFC;
	// bl 0x822900a0
	ctx.lr = 0x82626FF8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_82626FFC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82627010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82627010:
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

__attribute__((alias("__imp__sub_82627028"))) PPC_WEAK_FUNC(sub_82627028);
PPC_FUNC_IMPL(__imp__sub_82627028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82627030;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r25,-31885
	ctx.r25.s64 = -2089615360;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826270b0
	if (!ctx.cr6.gt) goto loc_826270B0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82627054:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r29,r30,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82627090
	if (ctx.cr6.eq) goto loc_82627090;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8262707c
	if (!ctx.cr6.eq) goto loc_8262707C;
	// bl 0x822900a0
	ctx.lr = 0x82627078;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_8262707C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82627090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82627090:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82627054
	if (ctx.cr6.lt) goto loc_82627054;
loc_826270B0:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826270e4
	if (ctx.cr6.eq) goto loc_826270E4;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826270d0
	if (!ctx.cr6.eq) goto loc_826270D0;
	// bl 0x822900a0
	ctx.lr = 0x826270CC;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_826270D0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826270E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826270E4:
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// stw r26,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r26.u32);
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826270F8"))) PPC_WEAK_FUNC(sub_826270F8);
PPC_FUNC_IMPL(__imp__sub_826270F8) {
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
	// bl 0x82627138
	ctx.lr = 0x82627110;
	sub_82627138(ctx, base);
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

__attribute__((alias("__imp__sub_82627128"))) PPC_WEAK_FUNC(sub_82627128);
PPC_FUNC_IMPL(__imp__sub_82627128) {
	PPC_FUNC_PROLOGUE();
	// b 0x82627138
	sub_82627138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262712C"))) PPC_WEAK_FUNC(sub_8262712C);
PPC_FUNC_IMPL(__imp__sub_8262712C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82627130"))) PPC_WEAK_FUNC(sub_82627130);
PPC_FUNC_IMPL(__imp__sub_82627130) {
	PPC_FUNC_PROLOGUE();
	// b 0x82627138
	sub_82627138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82627134"))) PPC_WEAK_FUNC(sub_82627134);
PPC_FUNC_IMPL(__imp__sub_82627134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82627138"))) PPC_WEAK_FUNC(sub_82627138);
PPC_FUNC_IMPL(__imp__sub_82627138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82627140;
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
	// beq cr6,0x82627180
	if (ctx.cr6.eq) goto loc_82627180;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8262716c
	if (!ctx.cr6.eq) goto loc_8262716C;
	// bl 0x822900a0
	ctx.lr = 0x82627168;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8262716C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82627180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82627180:
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

__attribute__((alias("__imp__sub_82627198"))) PPC_WEAK_FUNC(sub_82627198);
PPC_FUNC_IMPL(__imp__sub_82627198) {
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

__attribute__((alias("__imp__sub_826271A8"))) PPC_WEAK_FUNC(sub_826271A8);
PPC_FUNC_IMPL(__imp__sub_826271A8) {
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

__attribute__((alias("__imp__sub_826271C0"))) PPC_WEAK_FUNC(sub_826271C0);
PPC_FUNC_IMPL(__imp__sub_826271C0) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,-20736(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -20736);
	// bl 0x8229e490
	ctx.lr = 0x826271EC;
	sub_8229E490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82627208;
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

__attribute__((alias("__imp__sub_82627220"))) PPC_WEAK_FUNC(sub_82627220);
PPC_FUNC_IMPL(__imp__sub_82627220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// stw r4,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627230"))) PPC_WEAK_FUNC(sub_82627230);
PPC_FUNC_IMPL(__imp__sub_82627230) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82294a58
	ctx.lr = 0x8262724C;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x826272c0
	ctx.lr = 0x82627260;
	sub_826272C0(ctx, base);
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

__attribute__((alias("__imp__sub_82627274"))) PPC_WEAK_FUNC(sub_82627274);
PPC_FUNC_IMPL(__imp__sub_82627274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82627278"))) PPC_WEAK_FUNC(sub_82627278);
PPC_FUNC_IMPL(__imp__sub_82627278) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82294a58
	ctx.lr = 0x82627294;
	sub_82294A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x826272c0
	ctx.lr = 0x826272A8;
	sub_826272C0(ctx, base);
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

__attribute__((alias("__imp__sub_826272BC"))) PPC_WEAK_FUNC(sub_826272BC);
PPC_FUNC_IMPL(__imp__sub_826272BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826272C0"))) PPC_WEAK_FUNC(sub_826272C0);
PPC_FUNC_IMPL(__imp__sub_826272C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x826272C8;
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
	// beq cr6,0x82627308
	if (ctx.cr6.eq) goto loc_82627308;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826272f4
	if (!ctx.cr6.eq) goto loc_826272F4;
	// bl 0x822900a0
	ctx.lr = 0x826272F0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_826272F4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82627308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82627308:
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

__attribute__((alias("__imp__sub_82627320"))) PPC_WEAK_FUNC(sub_82627320);
PPC_FUNC_IMPL(__imp__sub_82627320) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

