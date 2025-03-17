#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832CA3E8"))) PPC_WEAK_FUNC(sub_832CA3E8);
PPC_FUNC_IMPL(__imp__sub_832CA3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x832CA3F0;
	__savegprlr_17(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// addze r29,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r29.s64 = temp.s64;
	// srawi r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// addze. r27,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r27.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble 0x832ca4e4
	if (!ctx.cr0.gt) goto loc_832CA4E4;
	// subf r11,r29,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r29.s64;
	// addi r19,r27,-1
	ctx.r19.s64 = ctx.r27.s64 + -1;
	// rlwinm r21,r11,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r20,r22,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
loc_832CA430:
	// cmpw cr6,r25,r19
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r19.s32, ctx.xer);
	// li r24,4
	ctx.r24.s64 = 4;
	// blt cr6,0x832ca440
	if (ctx.cr6.lt) goto loc_832CA440;
	// subfic r24,r17,4
	ctx.xer.ca = ctx.r17.u32 <= 4;
	ctx.r24.s64 = 4 - ctx.r17.s64;
loc_832CA440:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x832ca4d0
	if (!ctx.cr6.gt) goto loc_832CA4D0;
	// addi r23,r29,-1
	ctx.r23.s64 = ctx.r29.s64 + -1;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_832CA454:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_832CA45C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r8,4
	ctx.r8.s64 = 4;
loc_832CA464:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stfsx f0,r11,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// stfsx f13,r11,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x832ca464
	if (!ctx.cr0.eq) goto loc_832CA464;
	// add r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 + ctx.r22.u64;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x832ca45c
	if (ctx.cr6.lt) goto loc_832CA45C;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// li r6,4
	ctx.r6.s64 = 4;
	// blt cr6,0x832ca4a8
	if (ctx.cr6.lt) goto loc_832CA4A8;
	// subfic r6,r18,4
	ctx.xer.ca = ctx.r18.u32 <= 4;
	ctx.r6.s64 = 4 - ctx.r18.s64;
loc_832CA4A8:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832c9e58
	ctx.lr = 0x832CA4BC;
	sub_832C9E58(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x832ca454
	if (ctx.cr6.lt) goto loc_832CA454;
loc_832CA4D0:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// add r28,r21,r28
	ctx.r28.u64 = ctx.r21.u64 + ctx.r28.u64;
	// add r26,r20,r26
	ctx.r26.u64 = ctx.r20.u64 + ctx.r26.u64;
	// cmpw cr6,r25,r27
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x832ca430
	if (ctx.cr6.lt) goto loc_832CA430;
loc_832CA4E4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CA4EC"))) PPC_WEAK_FUNC(sub_832CA4EC);
PPC_FUNC_IMPL(__imp__sub_832CA4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CA4F0"))) PPC_WEAK_FUNC(sub_832CA4F0);
PPC_FUNC_IMPL(__imp__sub_832CA4F0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CA500"))) PPC_WEAK_FUNC(sub_832CA500);
PPC_FUNC_IMPL(__imp__sub_832CA500) {
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
	// beq cr6,0x832ca534
	if (ctx.cr6.eq) goto loc_832CA534;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832CA534:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ca554
	if (ctx.cr6.eq) goto loc_832CA554;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CA554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832CA554:
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

__attribute__((alias("__imp__sub_832CA568"))) PPC_WEAK_FUNC(sub_832CA568);
PPC_FUNC_IMPL(__imp__sub_832CA568) {
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

__attribute__((alias("__imp__sub_832CA57C"))) PPC_WEAK_FUNC(sub_832CA57C);
PPC_FUNC_IMPL(__imp__sub_832CA57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CA580"))) PPC_WEAK_FUNC(sub_832CA580);
PPC_FUNC_IMPL(__imp__sub_832CA580) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822990f0
	sub_822990F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CA588"))) PPC_WEAK_FUNC(sub_832CA588);
PPC_FUNC_IMPL(__imp__sub_832CA588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832CA590;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832ca5cc
	if (ctx.cr0.eq) goto loc_832CA5CC;
loc_832CA5C0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x832ca734
	goto loc_832CA734;
loc_832CA5CC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,72(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r6,68(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r5,64(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832ca5c0
	if (!ctx.cr0.eq) goto loc_832CA5C0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addis r10,r10,-6688
	ctx.r10.s64 = ctx.r10.s64 + -438304768;
	// addic. r10,r10,-82
	ctx.xer.ca = ctx.r10.u32 > 81;
	ctx.r10.s64 = ctx.r10.s64 + -82;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832ca62c
	if (ctx.cr0.eq) goto loc_832CA62C;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x832ca73c
	if (ctx.cr6.eq) goto loc_832CA73C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x832ca73c
	if (ctx.cr6.eq) goto loc_832CA73C;
	// cmplwi cr6,r10,40
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 40, ctx.xer);
	// beq cr6,0x832ca62c
	if (ctx.cr6.eq) goto loc_832CA62C;
	// cmplwi cr6,r10,41
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 41, ctx.xer);
	// bne cr6,0x832ca5c0
	if (!ctx.cr6.eq) goto loc_832CA5C0;
loc_832CA62C:
	// li r10,8
	ctx.r10.s64 = 8;
loc_832CA630:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r30,r9,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r29,76(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mullw r5,r8,r6
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,64(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// lwz r8,96(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// lwz r28,76(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// lwz r27,60(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// lwz r26,104(r7)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// lwz r7,32(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r23,112(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// rlwinm r24,r11,30,2,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r11,r6,r28
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r28.s32);
	// mullw r8,r24,r8
	ctx.r8.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r4,r29
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// rlwinm r4,r27,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mullw r6,r30,r10
	ctx.r6.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r26,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mullw r24,r5,r10
	ctx.r24.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r30,r8,r7
	ctx.r30.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// ble cr6,0x832ca730
	if (!ctx.cr6.gt) goto loc_832CA730;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
loc_832CA6BC:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ca708
	if (ctx.cr6.eq) goto loc_832CA708;
loc_832CA6D0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832CA6E0;
	sub_82CB1160(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r27,r9,r27
	ctx.r27.u64 = ctx.r9.u64 + ctx.r27.u64;
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832ca6d0
	if (ctx.cr6.lt) goto loc_832CA6D0;
loc_832CA708:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,100(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r8,112(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r25,r8
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x832ca6bc
	if (ctx.cr6.lt) goto loc_832CA6BC;
loc_832CA730:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832CA734:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_832CA73C:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x832ca630
	goto loc_832CA630;
}

__attribute__((alias("__imp__sub_832CA744"))) PPC_WEAK_FUNC(sub_832CA744);
PPC_FUNC_IMPL(__imp__sub_832CA744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CA748"))) PPC_WEAK_FUNC(sub_832CA748);
PPC_FUNC_IMPL(__imp__sub_832CA748) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CA754"))) PPC_WEAK_FUNC(sub_832CA754);
PPC_FUNC_IMPL(__imp__sub_832CA754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CA758"))) PPC_WEAK_FUNC(sub_832CA758);
PPC_FUNC_IMPL(__imp__sub_832CA758) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832CA760;
	__savegprlr_23(ctx, base);
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r26,r11,r4
	ctx.r26.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x832ca848
	if (!ctx.cr6.lt) goto loc_832CA848;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r7,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r4
	ctx.r28.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_832CA77C:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x832ca834
	if (!ctx.cr6.lt) goto loc_832CA834;
	// subf r10,r4,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r4.s64;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r29,r7,-4
	ctx.r29.s64 = ctx.r7.s64 + -4;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_832CA7A0:
	// lwzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r25,-4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// clrlwi r5,r6,8
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFFFF;
	// lwzx r24,r11,r7
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r31,r6,30,2,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFC0;
	// lwz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r30,r25,30,2,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFC0;
	// clrlwi r6,r25,8
	ctx.r6.u64 = ctx.r25.u32 & 0xFFFFFF;
	// rlwinm r5,r5,0,24,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r6,r6,0,24,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r30,r30,0,18,9
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// rlwinm r31,r31,0,18,9
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwinm r30,r24,30,2,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3FFFFFC0;
	// clrlwi r5,r24,8
	ctx.r5.u64 = ctx.r24.u32 & 0xFFFFFF;
	// rlwinm r30,r30,0,18,9
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// rlwinm r5,r5,0,24,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rlwinm r30,r23,30,2,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3FFFFFC0;
	// clrlwi r5,r23,8
	ctx.r5.u64 = ctx.r23.u32 & 0xFFFFFF;
	// rlwinm r30,r30,0,18,9
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// rlwinm r5,r5,0,24,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addis r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 8388608;
	// addis r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 131072;
	// addi r5,r5,128
	ctx.r5.s64 = ctx.r5.s64 + 128;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwimi r5,r6,30,24,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 30) & 0xFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF00);
	// rlwimi r5,r6,30,8,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 30) & 0xFF0000) | (ctx.r5.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x832ca7a0
	if (!ctx.cr0.eq) goto loc_832CA7A0;
loc_832CA834:
	// add r4,r27,r4
	ctx.r4.u64 = ctx.r27.u64 + ctx.r4.u64;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x832ca77c
	if (ctx.cr6.lt) goto loc_832CA77C;
loc_832CA848:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CA850"))) PPC_WEAK_FUNC(sub_832CA850);
PPC_FUNC_IMPL(__imp__sub_832CA850) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r6,108(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// lwz r11,-6932(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6932);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832CA880"))) PPC_WEAK_FUNC(sub_832CA880);
PPC_FUNC_IMPL(__imp__sub_832CA880) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832CA888;
	__savegprlr_23(ctx, base);
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r26,r11,r4
	ctx.r26.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x832ca95c
	if (!ctx.cr6.lt) goto loc_832CA95C;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r7,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r4
	ctx.r28.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_832CA8A4:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x832ca948
	if (!ctx.cr6.lt) goto loc_832CA948;
	// subf r10,r4,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r4.s64;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r29,r7,-4
	ctx.r29.s64 = ctx.r7.s64 + -4;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_832CA8C8:
	// lwzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r25,-4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// clrlwi r31,r6,8
	ctx.r31.u64 = ctx.r6.u32 & 0xFFFFFF;
	// lwzx r24,r11,r7
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// clrlwi r30,r25,8
	ctx.r30.u64 = ctx.r25.u32 & 0xFFFFFF;
	// lwz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r31,r31,0,24,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r30,r30,0,24,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r5,r6,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF00;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// clrlwi r30,r24,8
	ctx.r30.u64 = ctx.r24.u32 & 0xFFFFFF;
	// rlwinm r6,r25,0,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFF00;
	// rlwinm r30,r30,0,24,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// clrlwi r30,r23,8
	ctx.r30.u64 = ctx.r23.u32 & 0xFFFFFF;
	// rlwinm r5,r24,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFF00;
	// rlwinm r30,r30,0,24,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rlwinm r5,r23,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFF00;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addis r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 131072;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwimi r5,r6,0,14,21
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FC00) | (ctx.r5.u64 & 0xFFFFFFFFFFFC03FF);
	// rlwinm r6,r5,30,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xFFFFFF;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x832ca8c8
	if (!ctx.cr0.eq) goto loc_832CA8C8;
loc_832CA948:
	// add r4,r27,r4
	ctx.r4.u64 = ctx.r27.u64 + ctx.r4.u64;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x832ca8a4
	if (ctx.cr6.lt) goto loc_832CA8A4;
loc_832CA95C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CA964"))) PPC_WEAK_FUNC(sub_832CA964);
PPC_FUNC_IMPL(__imp__sub_832CA964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CA968"))) PPC_WEAK_FUNC(sub_832CA968);
PPC_FUNC_IMPL(__imp__sub_832CA968) {
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
	// lis r9,-31907
	ctx.r9.s64 = -2091057152;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lis r31,-31907
	ctx.r31.s64 = -2091057152;
	// addi r11,r11,-22696
	ctx.r11.s64 = ctx.r11.s64 + -22696;
	// addi r10,r10,-22400
	ctx.r10.s64 = ctx.r10.s64 + -22400;
	// stw r11,-6932(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6932, ctx.r11.u32);
	// stw r10,-6928(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6928, ctx.r10.u32);
	// bl 0x832ca758
	ctx.lr = 0x832CA99C;
	sub_832CA758(ctx, base);
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

__attribute__((alias("__imp__sub_832CA9B0"))) PPC_WEAK_FUNC(sub_832CA9B0);
PPC_FUNC_IMPL(__imp__sub_832CA9B0) {
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
	// lis r9,-31907
	ctx.r9.s64 = -2091057152;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lis r31,-31907
	ctx.r31.s64 = -2091057152;
	// addi r11,r11,-22696
	ctx.r11.s64 = ctx.r11.s64 + -22696;
	// addi r10,r10,-22400
	ctx.r10.s64 = ctx.r10.s64 + -22400;
	// stw r11,-6932(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6932, ctx.r11.u32);
	// stw r10,-6928(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6928, ctx.r10.u32);
	// bl 0x832ca880
	ctx.lr = 0x832CA9E4;
	sub_832CA880(ctx, base);
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

__attribute__((alias("__imp__sub_832CA9F8"))) PPC_WEAK_FUNC(sub_832CA9F8);
PPC_FUNC_IMPL(__imp__sub_832CA9F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r6,108(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// lwz r11,-6928(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6928);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832CAA28"))) PPC_WEAK_FUNC(sub_832CAA28);
PPC_FUNC_IMPL(__imp__sub_832CAA28) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832CAA30;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x832cab0c
	goto loc_832CAB0C;
loc_832CAA54:
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x832caaf0
	if (!ctx.cr6.lt) goto loc_832CAAF0;
loc_832CAA78:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// andi. r31,r6,63519
	ctx.r31.u64 = ctx.r6.u64 & 63519;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lhz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// andi. r5,r28,63519
	ctx.r5.u64 = ctx.r28.u64 & 63519;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lhz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// rlwinm r4,r6,0,21,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x7E0;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r6,r28,0,21,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x7E0;
	// andi. r31,r27,63519
	ctx.r31.u64 = ctx.r27.u64 & 63519;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r4,r27,0,21,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x7E0;
	// andi. r31,r26,63519
	ctx.r31.u64 = ctx.r26.u64 & 63519;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r4,r26,0,21,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x7E0;
	// addi r5,r5,4098
	ctx.r5.s64 = ctx.r5.s64 + 4098;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r5,r5,30,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xFFFF;
	// addi r6,r6,64
	ctx.r6.s64 = ctx.r6.s64 + 64;
	// rlwinm r5,r5,0,27,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFF81F;
	// rlwinm r6,r6,30,21,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x7E0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x832caa78
	if (ctx.cr6.lt) goto loc_832CAA78;
loc_832CAAF0:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_832CAB0C:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x832caa54
	if (ctx.cr6.lt) goto loc_832CAA54;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CAB1C"))) PPC_WEAK_FUNC(sub_832CAB1C);
PPC_FUNC_IMPL(__imp__sub_832CAB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CAB20"))) PPC_WEAK_FUNC(sub_832CAB20);
PPC_FUNC_IMPL(__imp__sub_832CAB20) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832CAB28;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x832cac04
	goto loc_832CAC04;
loc_832CAB4C:
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x832cabe8
	if (!ctx.cr6.lt) goto loc_832CABE8;
loc_832CAB70:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r31,r6,0,22,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x3E0;
	// lhz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// andi. r4,r6,31775
	ctx.r4.u64 = ctx.r6.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lhz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// andi. r6,r28,31775
	ctx.r6.u64 = ctx.r28.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r5,r28,0,22,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x3E0;
	// andi. r4,r27,31775
	ctx.r4.u64 = ctx.r27.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r31,r27,0,22,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x3E0;
	// andi. r4,r26,31775
	ctx.r4.u64 = ctx.r26.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r31,r26,0,22,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x3E0;
	// addi r6,r6,2050
	ctx.r6.s64 = ctx.r6.s64 + 2050;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r6,r6,30,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x7FFF;
	// addi r5,r5,64
	ctx.r5.s64 = ctx.r5.s64 + 64;
	// rlwinm r6,r6,0,27,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// rlwinm r5,r5,30,22,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3E0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x832cab70
	if (ctx.cr6.lt) goto loc_832CAB70;
loc_832CABE8:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_832CAC04:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x832cab4c
	if (ctx.cr6.lt) goto loc_832CAB4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CAC14"))) PPC_WEAK_FUNC(sub_832CAC14);
PPC_FUNC_IMPL(__imp__sub_832CAC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CAC18"))) PPC_WEAK_FUNC(sub_832CAC18);
PPC_FUNC_IMPL(__imp__sub_832CAC18) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832CAC20;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x832cad04
	goto loc_832CAD04;
loc_832CAC44:
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x832cace8
	if (!ctx.cr6.lt) goto loc_832CACE8;
loc_832CAC68:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// andi. r31,r6,33760
	ctx.r31.u64 = ctx.r6.u64 & 33760;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lhz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// andi. r4,r28,33760
	ctx.r4.u64 = ctx.r28.u64 & 33760;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lhz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// andi. r5,r6,31775
	ctx.r5.u64 = ctx.r6.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// andi. r6,r28,31775
	ctx.r6.u64 = ctx.r28.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// andi. r31,r27,33760
	ctx.r31.u64 = ctx.r27.u64 & 33760;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// andi. r5,r27,31775
	ctx.r5.u64 = ctx.r27.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// andi. r31,r26,33760
	ctx.r31.u64 = ctx.r26.u64 & 33760;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// andi. r5,r26,31775
	ctx.r5.u64 = ctx.r26.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addis r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 65536;
	// addi r6,r6,2050
	ctx.r6.s64 = ctx.r6.s64 + 2050;
	// addi r5,r5,64
	ctx.r5.s64 = ctx.r5.s64 + 64;
	// rlwinm r6,r6,30,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x7FFF;
	// rlwinm r5,r5,30,16,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xFFE0;
	// rlwinm r6,r6,0,27,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// rlwinm r5,r5,0,22,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFF83FF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x832cac68
	if (ctx.cr6.lt) goto loc_832CAC68;
loc_832CACE8:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_832CAD04:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x832cac44
	if (ctx.cr6.lt) goto loc_832CAC44;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CAD14"))) PPC_WEAK_FUNC(sub_832CAD14);
PPC_FUNC_IMPL(__imp__sub_832CAD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CAD18"))) PPC_WEAK_FUNC(sub_832CAD18);
PPC_FUNC_IMPL(__imp__sub_832CAD18) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832CAD20;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x832cae00
	goto loc_832CAE00;
loc_832CAD44:
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x832cade4
	if (!ctx.cr6.lt) goto loc_832CADE4;
loc_832CAD68:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// andi. r31,r6,61680
	ctx.r31.u64 = ctx.r6.u64 & 61680;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lhz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// andi. r4,r6,3855
	ctx.r4.u64 = ctx.r6.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lhz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// andi. r5,r28,61680
	ctx.r5.u64 = ctx.r28.u64 & 61680;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// andi. r6,r28,3855
	ctx.r6.u64 = ctx.r28.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// andi. r31,r27,61680
	ctx.r31.u64 = ctx.r27.u64 & 61680;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// andi. r4,r27,3855
	ctx.r4.u64 = ctx.r27.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// andi. r31,r26,61680
	ctx.r31.u64 = ctx.r26.u64 & 61680;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// andi. r4,r26,3855
	ctx.r4.u64 = ctx.r26.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// addi r6,r6,514
	ctx.r6.s64 = ctx.r6.s64 + 514;
	// addi r5,r5,8224
	ctx.r5.s64 = ctx.r5.s64 + 8224;
	// rlwinm r6,r6,30,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFFF;
	// rlwinm r5,r5,30,16,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xFFF0;
	// rlwinm r6,r6,0,28,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// rlwinm r5,r5,0,24,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x832cad68
	if (ctx.cr6.lt) goto loc_832CAD68;
loc_832CADE4:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_832CAE00:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x832cad44
	if (ctx.cr6.lt) goto loc_832CAD44;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CAE10"))) PPC_WEAK_FUNC(sub_832CAE10);
PPC_FUNC_IMPL(__imp__sub_832CAE10) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832CAE18;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x832caef0
	goto loc_832CAEF0;
loc_832CAE3C:
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r8,r6
	ctx.r10.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x832caed4
	if (!ctx.cr6.lt) goto loc_832CAED4;
loc_832CAE5C:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// andi. r31,r6,227
	ctx.r31.u64 = ctx.r6.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lbz r27,1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// andi. r5,r28,227
	ctx.r5.u64 = ctx.r28.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lbz r26,1(r10)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r4,r6,0,27,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1C;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r6,r28,0,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x1C;
	// andi. r31,r27,227
	ctx.r31.u64 = ctx.r27.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r4,r27,0,27,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1C;
	// andi. r31,r26,227
	ctx.r31.u64 = ctx.r26.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r4,r26,0,27,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x1C;
	// addi r5,r5,66
	ctx.r5.s64 = ctx.r5.s64 + 66;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r5,r5,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xFF;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// rlwinm r5,r5,0,30,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// rlwinm r6,r6,30,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x1C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stb r6,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x832cae5c
	if (ctx.cr6.lt) goto loc_832CAE5C;
loc_832CAED4:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_832CAEF0:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x832cae3c
	if (ctx.cr6.lt) goto loc_832CAE3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CAF00"))) PPC_WEAK_FUNC(sub_832CAF00);
PPC_FUNC_IMPL(__imp__sub_832CAF00) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,108(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r31,32(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x832cafa4
	goto loc_832CAFA4;
loc_832CAF2C:
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x832caf88
	if (!ctx.cr6.lt) goto loc_832CAF88;
loc_832CAF4C:
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,1(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// rlwinm r6,r6,30,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFF;
	// stb r6,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// blt cr6,0x832caf4c
	if (ctx.cr6.lt) goto loc_832CAF4C;
loc_832CAF88:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,96(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_832CAFA4:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x832caf2c
	if (ctx.cr6.lt) goto loc_832CAF2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CAFBC"))) PPC_WEAK_FUNC(sub_832CAFBC);
PPC_FUNC_IMPL(__imp__sub_832CAFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CAFC0"))) PPC_WEAK_FUNC(sub_832CAFC0);
PPC_FUNC_IMPL(__imp__sub_832CAFC0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832CAFC8;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x832cb0a8
	goto loc_832CB0A8;
loc_832CAFEC:
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x832cb08c
	if (!ctx.cr6.lt) goto loc_832CB08C;
loc_832CB010:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// andi. r31,r6,227
	ctx.r31.u64 = ctx.r6.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lhz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// andi. r4,r6,65308
	ctx.r4.u64 = ctx.r6.u64 & 65308;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lhz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// andi. r5,r28,227
	ctx.r5.u64 = ctx.r28.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// andi. r6,r28,65308
	ctx.r6.u64 = ctx.r28.u64 & 65308;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// andi. r31,r27,227
	ctx.r31.u64 = ctx.r27.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// andi. r4,r27,65308
	ctx.r4.u64 = ctx.r27.u64 & 65308;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// andi. r31,r26,227
	ctx.r31.u64 = ctx.r26.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// andi. r4,r26,65308
	ctx.r4.u64 = ctx.r26.u64 & 65308;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// addi r6,r6,520
	ctx.r6.s64 = ctx.r6.s64 + 520;
	// addi r5,r5,66
	ctx.r5.s64 = ctx.r5.s64 + 66;
	// rlwinm r6,r6,30,16,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFFFC;
	// rlwinm r5,r5,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xFF;
	// rlwinm r6,r6,0,27,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFF1F;
	// rlwinm r5,r5,0,30,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x832cb010
	if (ctx.cr6.lt) goto loc_832CB010;
loc_832CB08C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_832CB0A8:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x832cafec
	if (ctx.cr6.lt) goto loc_832CAFEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CB0B8"))) PPC_WEAK_FUNC(sub_832CB0B8);
PPC_FUNC_IMPL(__imp__sub_832CB0B8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832CB0C0;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x832cb19c
	goto loc_832CB19C;
loc_832CB0E4:
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x832cb180
	if (!ctx.cr6.lt) goto loc_832CB180;
loc_832CB108:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r31,r6,0,24,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF0;
	// lhz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// andi. r4,r6,3855
	ctx.r4.u64 = ctx.r6.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lhz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// andi. r6,r28,3855
	ctx.r6.u64 = ctx.r28.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r5,r28,0,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF0;
	// andi. r4,r27,3855
	ctx.r4.u64 = ctx.r27.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r31,r27,0,24,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xF0;
	// andi. r4,r26,3855
	ctx.r4.u64 = ctx.r26.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r31,r26,0,24,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xF0;
	// addi r6,r6,514
	ctx.r6.s64 = ctx.r6.s64 + 514;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r6,r6,30,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFFF;
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// rlwinm r6,r6,0,28,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// rlwinm r5,r5,30,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xF0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x832cb108
	if (ctx.cr6.lt) goto loc_832CB108;
loc_832CB180:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_832CB19C:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x832cb0e4
	if (ctx.cr6.lt) goto loc_832CB0E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CB1AC"))) PPC_WEAK_FUNC(sub_832CB1AC);
PPC_FUNC_IMPL(__imp__sub_832CB1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CB1B0"))) PPC_WEAK_FUNC(sub_832CB1B0);
PPC_FUNC_IMPL(__imp__sub_832CB1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CB1BC"))) PPC_WEAK_FUNC(sub_832CB1BC);
PPC_FUNC_IMPL(__imp__sub_832CB1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CB1C0"))) PPC_WEAK_FUNC(sub_832CB1C0);
PPC_FUNC_IMPL(__imp__sub_832CB1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CB1CC"))) PPC_WEAK_FUNC(sub_832CB1CC);
PPC_FUNC_IMPL(__imp__sub_832CB1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CB1D0"))) PPC_WEAK_FUNC(sub_832CB1D0);
PPC_FUNC_IMPL(__imp__sub_832CB1D0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832CB1D8;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x832cb2b0
	goto loc_832CB2B0;
loc_832CB1FC:
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x832cb294
	if (!ctx.cr6.lt) goto loc_832CB294;
loc_832CB220:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r31,r6,24
	ctx.r31.u64 = ctx.r6.u32 & 0xFF;
	// lhz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r4,r6,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF00;
	// lhz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// clrlwi r5,r28,24
	ctx.r5.u64 = ctx.r28.u32 & 0xFF;
	// rlwinm r6,r28,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFF00;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// clrlwi r31,r27,24
	ctx.r31.u64 = ctx.r27.u32 & 0xFF;
	// rlwinm r4,r27,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFF00;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// clrlwi r31,r26,24
	ctx.r31.u64 = ctx.r26.u32 & 0xFF;
	// rlwinm r4,r26,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFF00;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// rlwinm r5,r5,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xFF;
	// rlwinm r6,r6,30,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFF00;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x832cb220
	if (ctx.cr6.lt) goto loc_832CB220;
loc_832CB294:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_832CB2B0:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x832cb1fc
	if (ctx.cr6.lt) goto loc_832CB1FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CB2C0"))) PPC_WEAK_FUNC(sub_832CB2C0);
PPC_FUNC_IMPL(__imp__sub_832CB2C0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832CB2C8;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x832cb39c
	goto loc_832CB39C;
loc_832CB2EC:
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r8,r6
	ctx.r10.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x832cb380
	if (!ctx.cr6.lt) goto loc_832CB380;
loc_832CB30C:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r31,r6,0,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// lbz r27,1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r4,r6,28
	ctx.r4.u64 = ctx.r6.u32 & 0xF;
	// lbz r26,1(r10)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r5,r28,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r6,r28,28
	ctx.r6.u64 = ctx.r28.u32 & 0xF;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r31,r27,0,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r4,r27,28
	ctx.r4.u64 = ctx.r27.u32 & 0xF;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r31,r26,0,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r4,r26,28
	ctx.r4.u64 = ctx.r26.u32 & 0xF;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// rlwinm r5,r5,30,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xF0;
	// rlwinm r6,r6,30,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xF;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stb r6,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x832cb30c
	if (ctx.cr6.lt) goto loc_832CB30C;
loc_832CB380:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_832CB39C:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x832cb2ec
	if (ctx.cr6.lt) goto loc_832CB2EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CB3AC"))) PPC_WEAK_FUNC(sub_832CB3AC);
PPC_FUNC_IMPL(__imp__sub_832CB3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CB3B0"))) PPC_WEAK_FUNC(sub_832CB3B0);
PPC_FUNC_IMPL(__imp__sub_832CB3B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CB3B4"))) PPC_WEAK_FUNC(sub_832CB3B4);
PPC_FUNC_IMPL(__imp__sub_832CB3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CB3B8"))) PPC_WEAK_FUNC(sub_832CB3B8);
PPC_FUNC_IMPL(__imp__sub_832CB3B8) {
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

__attribute__((alias("__imp__sub_832CB3CC"))) PPC_WEAK_FUNC(sub_832CB3CC);
PPC_FUNC_IMPL(__imp__sub_832CB3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CB3D0"))) PPC_WEAK_FUNC(sub_832CB3D0);
PPC_FUNC_IMPL(__imp__sub_832CB3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
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

__attribute__((alias("__imp__sub_832CB414"))) PPC_WEAK_FUNC(sub_832CB414);
PPC_FUNC_IMPL(__imp__sub_832CB414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CB418"))) PPC_WEAK_FUNC(sub_832CB418);
PPC_FUNC_IMPL(__imp__sub_832CB418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
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

__attribute__((alias("__imp__sub_832CB44C"))) PPC_WEAK_FUNC(sub_832CB44C);
PPC_FUNC_IMPL(__imp__sub_832CB44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CB450"))) PPC_WEAK_FUNC(sub_832CB450);
PPC_FUNC_IMPL(__imp__sub_832CB450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CB454"))) PPC_WEAK_FUNC(sub_832CB454);
PPC_FUNC_IMPL(__imp__sub_832CB454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CB458"))) PPC_WEAK_FUNC(sub_832CB458);
PPC_FUNC_IMPL(__imp__sub_832CB458) {
	PPC_FUNC_PROLOGUE();
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CB468"))) PPC_WEAK_FUNC(sub_832CB468);
PPC_FUNC_IMPL(__imp__sub_832CB468) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CB46C"))) PPC_WEAK_FUNC(sub_832CB46C);
PPC_FUNC_IMPL(__imp__sub_832CB46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CB470"))) PPC_WEAK_FUNC(sub_832CB470);
PPC_FUNC_IMPL(__imp__sub_832CB470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832CB478;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// rlwinm. r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832cb5fc
	if (!ctx.cr0.eq) goto loc_832CB5FC;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832cb5fc
	if (!ctx.cr6.eq) goto loc_832CB5FC;
	// lwz r11,104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// lwz r7,108(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r6,108(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// cmpld cr6,r8,r11
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x832cb5fc
	if (!ctx.cr6.eq) goto loc_832CB5FC;
	// lwz r11,112(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// lwz r8,112(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x832cb5fc
	if (!ctx.cr6.eq) goto loc_832CB5FC;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x832cb5fc
	if (!ctx.cr6.eq) goto loc_832CB5FC;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832cb504
	if (!ctx.cr6.eq) goto loc_832CB504;
	// bl 0x832ca588
	ctx.lr = 0x832CB500;
	sub_832CA588(ctx, base);
	// b 0x832cb604
	goto loc_832CB604;
loc_832CB504:
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832cb54c
	if (ctx.cr6.eq) goto loc_832CB54C;
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x832cb54c
	if (ctx.cr6.eq) goto loc_832CB54C;
	// addi r7,r11,1024
	ctx.r7.s64 = ctx.r11.s64 + 1024;
loc_832CB524:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x832cb544
	if (!ctx.cr0.eq) goto loc_832CB544;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x832cb524
	if (!ctx.cr6.eq) goto loc_832CB524;
loc_832CB544:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x832cb5fc
	if (!ctx.cr0.eq) goto loc_832CB5FC;
loc_832CB54C:
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r26.u32);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r26,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r26.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x832cb5f4
	if (!ctx.cr6.gt) goto loc_832CB5F4;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
loc_832CB578:
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lwz r8,100(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mullw r8,r8,r27
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// lwz r4,100(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 100);
	// lwz r5,32(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// mullw r6,r4,r27
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// add r30,r6,r5
	ctx.r30.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r29,r8,r7
	ctx.r29.u64 = ctx.r8.u64 + ctx.r7.u64;
	// beq cr6,0x832cb5e0
	if (ctx.cr6.eq) goto loc_832CB5E0;
loc_832CB5A8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,116(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832CB5B8;
	sub_82CB1160(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r8,96(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// add r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 + ctx.r30.u64;
	// add r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x832cb5a8
	if (ctx.cr6.lt) goto loc_832CB5A8;
loc_832CB5E0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x832cb578
	if (ctx.cr6.lt) goto loc_832CB578;
loc_832CB5F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832cb604
	goto loc_832CB604;
loc_832CB5FC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_832CB604:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CB60C"))) PPC_WEAK_FUNC(sub_832CB60C);
PPC_FUNC_IMPL(__imp__sub_832CB60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CB610"))) PPC_WEAK_FUNC(sub_832CB610);
PPC_FUNC_IMPL(__imp__sub_832CB610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832CB618;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r7,108(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r6,108(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x832cb754
	if (!ctx.cr6.eq) goto loc_832CB754;
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832cb754
	if (!ctx.cr6.eq) goto loc_832CB754;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// rlwinm r3,r9,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832cb678
	if (!ctx.cr6.gt) goto loc_832CB678;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_832CB678:
	// bl 0x82295bc8
	ctx.lr = 0x832CB67C;
	sub_82295BC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x832cb754
	if (ctx.cr6.eq) goto loc_832CB754;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x832cb6b8
	if (ctx.cr6.eq) goto loc_832CB6B8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x832cb6b8
	if (ctx.cr6.eq) goto loc_832CB6B8;
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
loc_832CB6B8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x832cb744
	if (!ctx.cr6.gt) goto loc_832CB744;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
loc_832CB6D0:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832cb730
	if (ctx.cr6.eq) goto loc_832CB730;
loc_832CB6DC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CB6FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CB71C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832cb6dc
	if (ctx.cr6.lt) goto loc_832CB6DC;
loc_832CB730:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832cb6d0
	if (ctx.cr6.lt) goto loc_832CB6D0;
loc_832CB744:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CB74C;
	sub_822990F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832cb75c
	goto loc_832CB75C;
loc_832CB754:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_832CB75C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CB764"))) PPC_WEAK_FUNC(sub_832CB764);
PPC_FUNC_IMPL(__imp__sub_832CB764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CB768"))) PPC_WEAK_FUNC(sub_832CB768);
PPC_FUNC_IMPL(__imp__sub_832CB768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832CB770;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,11(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832cb790
	if (ctx.cr6.eq) goto loc_832CB790;
loc_832CB784:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x832cb9cc
	goto loc_832CB9CC;
loc_832CB790:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,104(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// lwz r10,104(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// bgt cr6,0x832cb7b0
	if (ctx.cr6.gt) goto loc_832CB7B0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_832CB7B0:
	// lwz r11,108(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// lwz r10,108(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832cb7c8
	if (ctx.cr6.lt) goto loc_832CB7C8;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
loc_832CB7C8:
	// lwz r11,112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// lwz r10,112(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832cb7e0
	if (ctx.cr6.lt) goto loc_832CB7E0;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_832CB7E0:
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// li r29,-1
	ctx.r29.s64 = -1;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// rlwinm r3,r27,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x832cb7fc
	if (!ctx.cr6.gt) goto loc_832CB7FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_832CB7FC:
	// bl 0x82295bc8
	ctx.lr = 0x832CB800;
	sub_82295BC8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x832cb784
	if (ctx.cr6.eq) goto loc_832CB784;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x832cb824
	if (!ctx.cr6.gt) goto loc_832CB824;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_832CB824:
	// bl 0x82295bc8
	ctx.lr = 0x832CB828;
	sub_82295BC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832cb840
	if (!ctx.cr6.eq) goto loc_832CB840;
	// bl 0x822990f0
	ctx.lr = 0x832CB83C;
	sub_822990F0(ctx, base);
	// b 0x832cb784
	goto loc_832CB784;
loc_832CB840:
	// rlwinm r5,r27,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x832CB84C;
	sub_82CB16F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82cb16f0
	ctx.lr = 0x832CB864;
	sub_82CB16F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x832cb894
	if (ctx.cr6.eq) goto loc_832CB894;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x832cb894
	if (ctx.cr6.eq) goto loc_832CB894;
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
loc_832CB894:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832cb94c
	if (ctx.cr6.eq) goto loc_832CB94C;
loc_832CB8A0:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x832cb8f8
	if (ctx.cr6.eq) goto loc_832CB8F8;
loc_832CB8AC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CB8CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CB8EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x832cb8ac
	if (ctx.cr6.lt) goto loc_832CB8AC;
loc_832CB8F8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832cb940
	if (!ctx.cr6.lt) goto loc_832CB940;
loc_832CB90C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CB92C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832cb90c
	if (ctx.cr6.lt) goto loc_832CB90C;
loc_832CB940:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x832cb8a0
	if (ctx.cr6.lt) goto loc_832CB8A0;
loc_832CB94C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x832cb9b8
	if (!ctx.cr6.lt) goto loc_832CB9B8;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
loc_832CB964:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832cb9a4
	if (ctx.cr6.eq) goto loc_832CB9A4;
loc_832CB970:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CB990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832cb970
	if (ctx.cr6.lt) goto loc_832CB970;
loc_832CB9A4:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832cb964
	if (ctx.cr6.lt) goto loc_832CB964;
loc_832CB9B8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CB9C0;
	sub_822990F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CB9C8;
	sub_822990F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832CB9CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CB9D4"))) PPC_WEAK_FUNC(sub_832CB9D4);
PPC_FUNC_IMPL(__imp__sub_832CB9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CB9D8"))) PPC_WEAK_FUNC(sub_832CB9D8);
PPC_FUNC_IMPL(__imp__sub_832CB9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x832CB9E0;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x832cba00
	if (ctx.cr6.eq) goto loc_832CBA00;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x832cbc0c
	goto loc_832CBC0C;
loc_832CBA00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// li r17,-1
	ctx.r17.s64 = -1;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x832cba24
	if (!ctx.cr6.gt) goto loc_832CBA24;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_832CBA24:
	// bl 0x82295bc8
	ctx.lr = 0x832CBA28;
	sub_82295BC8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x832cba40
	if (!ctx.cr6.eq) goto loc_832CBA40;
loc_832CBA34:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x832cbc0c
	goto loc_832CBC0C;
loc_832CBA40:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x832cba58
	if (!ctx.cr6.gt) goto loc_832CBA58;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_832CBA58:
	// bl 0x82295bc8
	ctx.lr = 0x832CBA5C;
	sub_82295BC8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x832cba74
	if (!ctx.cr6.eq) goto loc_832CBA74;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CBA70;
	sub_822990F0(ctx, base);
	// b 0x832cba34
	goto loc_832CBA34;
loc_832CBA74:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x832cbaa4
	if (ctx.cr6.eq) goto loc_832CBAA4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x832cbaa4
	if (ctx.cr6.eq) goto loc_832CBAA4;
	// stw r20,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r20.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r20,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r20.u32);
loc_832CBAA4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r8,104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r7,108(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r6,104(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// lwz r5,108(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// divwu r23,r8,r6
	ctx.r23.u32 = ctx.r8.u32 / ctx.r6.u32;
	// lwz r9,112(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lwz r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// twllei r6,0
	// divwu r22,r7,r5
	ctx.r22.u32 = ctx.r7.u32 / ctx.r5.u32;
	// twllei r5,0
	// divwu r21,r10,r9
	ctx.r21.u32 = ctx.r10.u32 / ctx.r9.u32;
	// twllei r9,0
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x832cbbf8
	if (!ctx.cr6.gt) goto loc_832CBBF8;
loc_832CBB00:
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832cbbe0
	if (!ctx.cr6.gt) goto loc_832CBBE0;
loc_832CBB18:
	// xor r11,r25,r30
	ctx.r11.u64 = ctx.r25.u64 ^ ctx.r30.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// rlwinm. r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// beq 0x832cbb50
	if (ctx.cr0.eq) goto loc_832CBB50;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// rlwinm r5,r24,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF;
	// rlwinm r4,r30,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CBB4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_832CBB50:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832cbba8
	if (!ctx.cr6.gt) goto loc_832CBBA8;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_832CBB64:
	// rlwinm r10,r28,20,12,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 20) & 0xFFFF0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r9,r10,r18
	ctx.r9.u64 = ctx.r10.u64 + ctx.r18.u64;
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// lwzx r10,r10,r18
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832cbb64
	if (ctx.cr6.lt) goto loc_832CBB64;
loc_832CBBA8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CBBC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 + ctx.r22.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832cbb18
	if (ctx.cr6.lt) goto loc_832CBB18;
loc_832CBBE0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r24,r24,r21
	ctx.r24.u64 = ctx.r24.u64 + ctx.r21.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832cbb00
	if (ctx.cr6.lt) goto loc_832CBB00;
loc_832CBBF8:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CBC00;
	sub_822990F0(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CBC08;
	sub_822990F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832CBC0C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CBC14"))) PPC_WEAK_FUNC(sub_832CBC14);
PPC_FUNC_IMPL(__imp__sub_832CBC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CBC18"))) PPC_WEAK_FUNC(sub_832CBC18);
PPC_FUNC_IMPL(__imp__sub_832CBC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832CBC20;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,11(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x832cc0f4
	if (!ctx.cr6.eq) goto loc_832CC0F4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r8,r7,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x832cbc64
	if (ctx.cr6.eq) goto loc_832CBC64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x832cc0f4
	if (!ctx.cr6.eq) goto loc_832CC0F4;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x832cc0f4
	if (!ctx.cr6.eq) goto loc_832CC0F4;
loc_832CBC64:
	// lwz r8,108(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x832cbc88
	if (ctx.cr6.eq) goto loc_832CBC88;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x832cc0f4
	if (!ctx.cr6.eq) goto loc_832CC0F4;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x832cc0f4
	if (!ctx.cr6.eq) goto loc_832CC0F4;
loc_832CBC88:
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x832cc0f4
	if (!ctx.cr6.eq) goto loc_832CC0F4;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x832cc0f4
	if (!ctx.cr6.eq) goto loc_832CC0F4;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x832cbcd0
	if (!ctx.cr6.gt) goto loc_832CBCD0;
	// clrlwi. r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832cbcd0
	if (ctx.cr0.eq) goto loc_832CBCD0;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
loc_832CBCD0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x832cbcec
	if (!ctx.cr6.gt) goto loc_832CBCEC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
loc_832CBCEC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832cbe74
	if (!ctx.cr0.eq) goto loc_832CBE74;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// rlwinm. r8,r8,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x832cbe74
	if (!ctx.cr0.eq) goto loc_832CBE74;
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// blt cr6,0x832cbe74
	if (ctx.cr6.lt) goto loc_832CBE74;
	// lwz r6,108(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// blt cr6,0x832cbe74
	if (ctx.cr6.lt) goto loc_832CBE74;
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x832cbe74
	if (!ctx.cr6.eq) goto loc_832CBE74;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x832cbe74
	if (!ctx.cr6.eq) goto loc_832CBE74;
	// lis r9,10240
	ctx.r9.s64 = 671088640;
	// ori r9,r9,258
	ctx.r9.u64 = ctx.r9.u64 | 258;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x832cbdfc
	if (ctx.cr6.gt) goto loc_832CBDFC;
	// beq cr6,0x832cbdf0
	if (ctx.cr6.eq) goto loc_832CBDF0;
	// lis r9,1168
	ctx.r9.s64 = 76546048;
	// ori r9,r9,258
	ctx.r9.u64 = ctx.r9.u64 | 258;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x832cbdf0
	if (ctx.cr6.eq) goto loc_832CBDF0;
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// ori r9,r9,330
	ctx.r9.u64 = ctx.r9.u64 | 330;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x832cbde4
	if (ctx.cr6.eq) goto loc_832CBDE4;
	// addis r10,r10,-6184
	ctx.r10.s64 = ctx.r10.s64 + -405274624;
	// addic. r10,r10,-323
	ctx.xer.ca = ctx.r10.u32 > 322;
	ctx.r10.s64 = ctx.r10.s64 + -323;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832cbdd8
	if (ctx.cr0.eq) goto loc_832CBDD8;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x832cbdcc
	if (ctx.cr6.eq) goto loc_832CBDCC;
	// cmplwi cr6,r10,67
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 67, ctx.xer);
	// beq cr6,0x832cbda4
	if (ctx.cr6.eq) goto loc_832CBDA4;
	// lis r9,504
	ctx.r9.s64 = 33030144;
	// ori r9,r9,67
	ctx.r9.u64 = ctx.r9.u64 | 67;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x832cbe74
	if (!ctx.cr6.eq) goto loc_832CBE74;
loc_832CBDA4:
	// lis r9,-31907
	ctx.r9.s64 = -2091057152;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,-6932(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6932);
loc_832CBDB4:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,96(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CBDC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x832cbe64
	goto loc_832CBE64;
loc_832CBDCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832cad18
	ctx.lr = 0x832CBDD4;
	sub_832CAD18(ctx, base);
	// b 0x832cbe64
	goto loc_832CBE64;
loc_832CBDD8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832cac18
	ctx.lr = 0x832CBDE0;
	sub_832CAC18(ctx, base);
	// b 0x832cbe64
	goto loc_832CBE64;
loc_832CBDE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832cb1d0
	ctx.lr = 0x832CBDEC;
	sub_832CB1D0(ctx, base);
	// b 0x832cbe64
	goto loc_832CBE64;
loc_832CBDF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832caf00
	ctx.lr = 0x832CBDF8;
	sub_832CAF00(ctx, base);
	// b 0x832cbe64
	goto loc_832CBE64;
loc_832CBDFC:
	// addis r10,r10,-10280
	ctx.r10.s64 = ctx.r10.s64 + -673710080;
	// addic. r10,r10,-323
	ctx.xer.ca = ctx.r10.u32 > 322;
	ctx.r10.s64 = ctx.r10.s64 + -323;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832cbe5c
	if (ctx.cr0.eq) goto loc_832CBE5C;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x832cbe50
	if (ctx.cr6.eq) goto loc_832CBE50;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x832cbe44
	if (ctx.cr6.eq) goto loc_832CBE44;
	// cmplwi cr6,r10,67
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 67, ctx.xer);
	// beq cr6,0x832cbe30
	if (ctx.cr6.eq) goto loc_832CBE30;
	// lis r9,504
	ctx.r9.s64 = 33030144;
	// ori r9,r9,67
	ctx.r9.u64 = ctx.r9.u64 | 67;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x832cbe74
	if (!ctx.cr6.eq) goto loc_832CBE74;
loc_832CBE30:
	// lis r9,-31907
	ctx.r9.s64 = -2091057152;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,-6928(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6928);
	// b 0x832cbdb4
	goto loc_832CBDB4;
loc_832CBE44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832cb0b8
	ctx.lr = 0x832CBE4C;
	sub_832CB0B8(ctx, base);
	// b 0x832cbe64
	goto loc_832CBE64;
loc_832CBE50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832caa28
	ctx.lr = 0x832CBE58;
	sub_832CAA28(ctx, base);
	// b 0x832cbe64
	goto loc_832CBE64;
loc_832CBE5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832cab20
	ctx.lr = 0x832CBE64;
	sub_832CAB20(ctx, base);
loc_832CBE64:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x832cbe74
	if (ctx.cr6.lt) goto loc_832CBE74;
loc_832CBE6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832cc0fc
	goto loc_832CC0FC;
loc_832CBE74:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// li r30,-1
	ctx.r30.s64 = -1;
	// ori r31,r10,65535
	ctx.r31.u64 = ctx.r10.u64 | 65535;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x832cbe98
	if (!ctx.cr6.gt) goto loc_832CBE98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832CBE98:
	// bl 0x82295bc8
	ctx.lr = 0x832CBE9C;
	sub_82295BC8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x832cbeb4
	if (!ctx.cr6.eq) goto loc_832CBEB4;
loc_832CBEA8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x832cc0fc
	goto loc_832CC0FC;
loc_832CBEB4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x832cbee8
	if (!ctx.cr6.eq) goto loc_832CBEE8;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x832cbed8
	if (!ctx.cr6.gt) goto loc_832CBED8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832CBED8:
	// bl 0x82295bc8
	ctx.lr = 0x832CBEDC;
	sub_82295BC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x832cbf14
	goto loc_832CBF14;
loc_832CBEE8:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x832cbefc
	if (!ctx.cr6.gt) goto loc_832CBEFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832CBEFC:
	// bl 0x82295bc8
	ctx.lr = 0x832CBF00;
	sub_82295BC8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_832CBF14:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832cbf28
	if (!ctx.cr6.eq) goto loc_832CBF28;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CBF24;
	sub_822990F0(ctx, base);
	// b 0x832cbea8
	goto loc_832CBEA8;
loc_832CBF28:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832cbf44
	if (!ctx.cr6.eq) goto loc_832CBF44;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// b 0x832cbf4c
	goto loc_832CBF4C;
loc_832CBF44:
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// addi r26,r30,16
	ctx.r26.s64 = ctx.r30.s64 + 16;
loc_832CBF4C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832cc0e0
	if (!ctx.cr6.gt) goto loc_832CC0E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,7616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7616);
	ctx.f31.f64 = double(temp.f32);
loc_832CBF68:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r28,r25,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CBF8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x832cbfb4
	if (ctx.cr6.eq) goto loc_832CBFB4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CBFB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832CBFB4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832cc0ac
	if (!ctx.cr6.gt) goto loc_832CC0AC;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_832CBFCC:
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfsx f13,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lfsx f0,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfsx f10,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfsx f10,r11,r26
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832cbfcc
	if (ctx.cr6.lt) goto loc_832CBFCC;
loc_832CC0AC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CC0CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832cbf68
	if (ctx.cr6.lt) goto loc_832CBF68;
loc_832CC0E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CC0E8;
	sub_822990F0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CC0F0;
	sub_822990F0(ctx, base);
	// b 0x832cbe6c
	goto loc_832CBE6C;
loc_832CC0F4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_832CC0FC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CC108"))) PPC_WEAK_FUNC(sub_832CC108);
PPC_FUNC_IMPL(__imp__sub_832CC108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x832CC110;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82cb6adc
	ctx.lr = 0x832CC118;
	__savefpr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lbz r11,11(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 11);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x832cc144
	if (ctx.cr6.eq) goto loc_832CC144;
loc_832CC12C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_832CC134:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82cb6b28
	ctx.lr = 0x832CC140;
	__restfpr_25(ctx, base);
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_832CC144:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r8,r7,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x832cc170
	if (ctx.cr6.eq) goto loc_832CC170;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x832cc12c
	if (!ctx.cr6.eq) goto loc_832CC12C;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x832cc12c
	if (!ctx.cr6.eq) goto loc_832CC12C;
loc_832CC170:
	// lwz r8,108(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x832cc194
	if (ctx.cr6.eq) goto loc_832CC194;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x832cc12c
	if (!ctx.cr6.eq) goto loc_832CC12C;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x832cc12c
	if (!ctx.cr6.eq) goto loc_832CC12C;
loc_832CC194:
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x832cc12c
	if (!ctx.cr6.eq) goto loc_832CC12C;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x832cc1d8
	if (!ctx.cr6.gt) goto loc_832CC1D8;
	// clrlwi. r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832cc1d8
	if (ctx.cr0.eq) goto loc_832CC1D8;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
loc_832CC1D8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x832cc1f4
	if (!ctx.cr6.gt) goto loc_832CC1F4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
loc_832CC1F4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x832cc210
	if (!ctx.cr6.gt) goto loc_832CC210;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
loc_832CC210:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// li r30,-1
	ctx.r30.s64 = -1;
	// ori r31,r10,65535
	ctx.r31.u64 = ctx.r10.u64 | 65535;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x832cc234
	if (!ctx.cr6.gt) goto loc_832CC234;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832CC234:
	// bl 0x82295bc8
	ctx.lr = 0x832CC238;
	sub_82295BC8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x832cc250
	if (!ctx.cr6.eq) goto loc_832CC250;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x832cc134
	goto loc_832CC134;
loc_832CC250:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x832cc29c
	if (!ctx.cr6.eq) goto loc_832CC29C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x832cc278
	if (!ctx.cr6.gt) goto loc_832CC278;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832CC278:
	// bl 0x82295bc8
	ctx.lr = 0x832CC27C;
	sub_82295BC8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r10,r3
	ctx.r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// b 0x832cc2d8
	goto loc_832CC2D8;
loc_832CC29C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x832cc2b0
	if (!ctx.cr6.gt) goto loc_832CC2B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832CC2B0:
	// bl 0x82295bc8
	ctx.lr = 0x832CC2B4;
	sub_82295BC8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mulli r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 * 48;
	// add r30,r10,r3
	ctx.r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r28,r9,r3
	ctx.r28.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r27,r8,r3
	ctx.r27.u64 = ctx.r8.u64 + ctx.r3.u64;
loc_832CC2D8:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832cc2fc
	if (!ctx.cr6.eq) goto loc_832CC2FC;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_832CC2EC:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CC2F4;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x832cc134
	goto loc_832CC134;
loc_832CC2FC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x832cc31c
	if (!ctx.cr6.eq) goto loc_832CC31C;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// b 0x832cc32c
	goto loc_832CC32C;
loc_832CC31C:
	// addi r25,r29,16
	ctx.r25.s64 = ctx.r29.s64 + 16;
	// addi r24,r30,16
	ctx.r24.s64 = ctx.r30.s64 + 16;
	// addi r23,r28,16
	ctx.r23.s64 = ctx.r28.s64 + 16;
	// addi r22,r27,16
	ctx.r22.s64 = ctx.r27.s64 + 16;
loc_832CC32C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x832cc5d0
	if (!ctx.cr6.gt) goto loc_832CC5D0;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f31,-18212(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18212);
	ctx.f31.f64 = double(temp.f32);
loc_832CC348:
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// rlwinm r21,r19,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832cc5bc
	if (!ctx.cr6.gt) goto loc_832CC5BC;
loc_832CC35C:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r31,r20,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CC380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x832cc3a8
	if (ctx.cr6.eq) goto loc_832CC3A8;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r21,1
	ctx.r5.s64 = ctx.r21.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CC3A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832CC3A8:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x832cc3d0
	if (ctx.cr6.eq) goto loc_832CC3D0;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CC3D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832CC3D0:
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x832cc400
	if (ctx.cr6.eq) goto loc_832CC400;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x832cc400
	if (ctx.cr6.eq) goto loc_832CC400;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r21,1
	ctx.r5.s64 = ctx.r21.s64 + 1;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CC400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832CC400:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832cc588
	if (!ctx.cr6.gt) goto loc_832CC588;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_832CC418:
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r17,r1,80
	ctx.r17.s64 = ctx.r1.s64 + 80;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfsx f13,r11,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lfsx f0,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// lfs f10,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// add r8,r11,r22
	ctx.r8.u64 = ctx.r11.u64 + ctx.r22.u64;
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfsx f10,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfsx f10,r11,r24
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// lfs f5,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// lfsx f9,r11,r28
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f2,r11,r23
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f30,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// lfsx f29,r11,r27
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// fadds f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// lfsx f4,r11,r22
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f27,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f25.f64 = double(temp.f32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f11,f3,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fadds f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f11,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 + ctx.f11.f64));
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// fadds f12,f28,f12
	ctx.f12.f64 = double(float(ctx.f28.f64 + ctx.f12.f64));
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fadds f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fadds f12,f27,f12
	ctx.f12.f64 = double(float(ctx.f27.f64 + ctx.f12.f64));
	// fadds f13,f26,f13
	ctx.f13.f64 = double(float(ctx.f26.f64 + ctx.f13.f64));
	// fadds f11,f25,f11
	ctx.f11.f64 = double(float(ctx.f25.f64 + ctx.f11.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r8,4(r17)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,12(r17)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832cc418
	if (ctx.cr6.lt) goto loc_832CC418;
loc_832CC588:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CC5A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832cc35c
	if (ctx.cr6.lt) goto loc_832CC35C;
loc_832CC5BC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832cc348
	if (ctx.cr6.lt) goto loc_832CC348;
loc_832CC5D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CC5D8;
	sub_822990F0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832cc2ec
	goto loc_832CC2EC;
}

__attribute__((alias("__imp__sub_832CC5E0"))) PPC_WEAK_FUNC(sub_832CC5E0);
PPC_FUNC_IMPL(__imp__sub_832CC5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832CC5E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x832cc610
	if (!ctx.cr6.gt) goto loc_832CC610;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_832CC610:
	// bl 0x82295bc8
	ctx.lr = 0x832CC614;
	sub_82295BC8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832cc624
	if (!ctx.cr0.eq) goto loc_832CC624;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832cc708
	goto loc_832CC708;
loc_832CC624:
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r9,0
	ctx.r9.s64 = 0;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// beq cr6,0x832cc708
	if (ctx.cr6.eq) goto loc_832CC708;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,6380(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
loc_832CC670:
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fctiwz f10,f0
	ctx.f10.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// addic. r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fadds f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// bge 0x832cc6cc
	if (!ctx.cr0.lt) goto loc_832CC6CC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r8,r30,-1
	ctx.r8.s64 = ctx.r30.s64 + -1;
	// bne cr6,0x832cc6cc
	if (!ctx.cr6.eq) goto loc_832CC6CC;
	// li r8,0
	ctx.r8.s64 = 0;
loc_832CC6CC:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x832cc6e4
	if (ctx.cr6.lt) goto loc_832CC6E4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x832cc6e4
	if (!ctx.cr6.eq) goto loc_832CC6E4;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
loc_832CC6E4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fsubs f10,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x832cc670
	if (ctx.cr6.lt) goto loc_832CC670;
loc_832CC708:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CC710"))) PPC_WEAK_FUNC(sub_832CC710);
PPC_FUNC_IMPL(__imp__sub_832CC710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x832CC718;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82cb6ae4
	ctx.lr = 0x832CC720;
	__savefpr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x832cca94
	if (!ctx.cr6.eq) goto loc_832CCA94;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,112(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x832cca94
	if (!ctx.cr6.eq) goto loc_832CCA94;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,112(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x832cca94
	if (!ctx.cr6.eq) goto loc_832CCA94;
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// lwz r4,104(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lwz r3,104(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r5,r8,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x1;
	// rlwinm r31,r11,15,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// bl 0x832cc5e0
	ctx.lr = 0x832CC77C;
	sub_832CC5E0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r4,108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x832cc5e0
	ctx.lr = 0x832CC798;
	sub_832CC5E0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x832cca64
	if (ctx.cr6.eq) goto loc_832CCA64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x832cca64
	if (ctx.cr6.eq) goto loc_832CCA64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// li r23,-1
	ctx.r23.s64 = -1;
	// ori r31,r10,65535
	ctx.r31.u64 = ctx.r10.u64 | 65535;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x832cc7d0
	if (!ctx.cr6.gt) goto loc_832CC7D0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_832CC7D0:
	// bl 0x82295bc8
	ctx.lr = 0x832CC7D4;
	sub_82295BC8(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x832cca64
	if (ctx.cr6.eq) goto loc_832CCA64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x832cc7fc
	if (!ctx.cr6.gt) goto loc_832CC7FC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_832CC7FC:
	// bl 0x82295bc8
	ctx.lr = 0x832CC800;
	sub_82295BC8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x832cca64
	if (ctx.cr6.eq) goto loc_832CCA64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r30,r11,r22
	ctx.r30.u64 = ctx.r11.u64 + ctx.r22.u64;
	// ble cr6,0x832cca5c
	if (!ctx.cr6.gt) goto loc_832CCA5C;
	// addi r28,r19,8
	ctx.r28.s64 = ctx.r19.s64 + 8;
loc_832CC840:
	// lwz r4,-8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r4,r25
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x832cc890
	if (ctx.cr6.eq) goto loc_832CC890;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x832cc87c
	if (ctx.cr6.eq) goto loc_832CC87C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CC878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x832cc890
	goto loc_832CC890;
loc_832CC87C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_832CC890:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x832cc8bc
	if (ctx.cr6.eq) goto loc_832CC8BC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CC8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832CC8BC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832cca24
	if (!ctx.cr6.gt) goto loc_832CCA24;
	// addi r10,r20,8
	ctx.r10.s64 = ctx.r20.s64 + 8;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_832CC8D4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,-4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r6,r8,r30
	ctx.r6.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lfsx f10,r9,r30
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// add r4,r8,r31
	ctx.r4.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lfsx f9,r8,r30
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f5,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfsx f2,r9,r31
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f7,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f0,f2
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f6,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f1,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f31,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f3,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f30,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfsx f29,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f30,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f13,f29
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f28,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f30,f30,f13
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f27,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f28,f28,f13
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// fmuls f13,f27,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fadds f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fadds f9,f5,f8
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// fadds f8,f4,f7
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fadds f7,f3,f6
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f6,f29,f2
	ctx.f6.f64 = double(float(ctx.f29.f64 + ctx.f2.f64));
	// fadds f5,f30,f1
	ctx.f5.f64 = double(float(ctx.f30.f64 + ctx.f1.f64));
	// fadds f4,f28,f31
	ctx.f4.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f10,f9,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f9,f8,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f8,f6,f11
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f7,f5,f11
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f6,f4,f11
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f7,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f13,f6,f9
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,104(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x832cc8d4
	if (ctx.cr6.lt) goto loc_832CC8D4;
loc_832CCA24:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CCA44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832cc840
	if (ctx.cr6.lt) goto loc_832CC840;
loc_832CCA5C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832cca6c
	goto loc_832CCA6C;
loc_832CCA64:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_832CCA6C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CCA74;
	sub_822990F0(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CCA7C;
	sub_822990F0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CCA84;
	sub_822990F0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CCA8C;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x832cca9c
	goto loc_832CCA9C;
loc_832CCA94:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_832CCA9C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82cb6b30
	ctx.lr = 0x832CCAA8;
	__restfpr_27(ctx, base);
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CCAAC"))) PPC_WEAK_FUNC(sub_832CCAAC);
PPC_FUNC_IMPL(__imp__sub_832CCAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CCAB0"))) PPC_WEAK_FUNC(sub_832CCAB0);
PPC_FUNC_IMPL(__imp__sub_832CCAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x832CCAB8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6ad0
	ctx.lr = 0x832CCAC0;
	__savefpr_22(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x832ccaec
	if (ctx.cr6.eq) goto loc_832CCAEC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x832cd00c
	goto loc_832CD00C;
loc_832CCAEC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// not r7,r11
	ctx.r7.u64 = ~ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r5,r9,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x1;
	// rlwinm r30,r7,15,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x1;
	// lwz r3,104(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r29,r11,14,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// lwz r4,104(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// bl 0x832cc5e0
	ctx.lr = 0x832CCB18;
	sub_832CC5E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r4,108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x832cc5e0
	ctx.lr = 0x832CCB34;
	sub_832CC5E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lwz r4,112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r3,112(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// bl 0x832cc5e0
	ctx.lr = 0x832CCB50;
	sub_832CC5E0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// beq cr6,0x832ccfd8
	if (ctx.cr6.eq) goto loc_832CCFD8;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x832ccfd8
	if (ctx.cr6.eq) goto loc_832CCFD8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832ccfd8
	if (ctx.cr6.eq) goto loc_832CCFD8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// li r17,-1
	ctx.r17.s64 = -1;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x832ccb94
	if (!ctx.cr6.gt) goto loc_832CCB94;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_832CCB94:
	// bl 0x82295bc8
	ctx.lr = 0x832CCB98;
	sub_82295BC8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x832ccfd8
	if (ctx.cr6.eq) goto loc_832CCFD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x832ccbc0
	if (!ctx.cr6.gt) goto loc_832CCBC0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_832CCBC0:
	// bl 0x82295bc8
	ctx.lr = 0x832CCBC4;
	sub_82295BC8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x832ccfd8
	if (ctx.cr6.eq) goto loc_832CCFD8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r18,0
	ctx.r18.s64 = 0;
	// lwz r8,104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r7,112(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mulli r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 * 48;
	// add r29,r10,r19
	ctx.r29.u64 = ctx.r10.u64 + ctx.r19.u64;
	// add r28,r9,r19
	ctx.r28.u64 = ctx.r9.u64 + ctx.r19.u64;
	// add r27,r8,r19
	ctx.r27.u64 = ctx.r8.u64 + ctx.r19.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// ble cr6,0x832ccfd0
	if (!ctx.cr6.gt) goto loc_832CCFD0;
	// addi r26,r25,8
	ctx.r26.s64 = ctx.r25.s64 + 8;
loc_832CCC0C:
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832ccfb8
	if (!ctx.cr6.gt) goto loc_832CCFB8;
	// addi r24,r14,8
	ctx.r24.s64 = ctx.r14.s64 + 8;
loc_832CCC28:
	// lwz r23,-8(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplw cr6,r23,r21
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x832ccca8
	if (ctx.cr6.eq) goto loc_832CCCA8;
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x832ccc88
	if (ctx.cr6.eq) goto loc_832CCC88;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// lwz r5,-8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CCC64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CCC84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x832ccca8
	goto loc_832CCCA8;
loc_832CCC88:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_832CCCA8:
	// lwz r23,0(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x832cccf8
	if (ctx.cr6.eq) goto loc_832CCCF8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// lwz r5,-8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CCCD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CCCF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832CCCF8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832ccf7c
	if (!ctx.cr6.gt) goto loc_832CCF7C;
	// addi r9,r15,8
	ctx.r9.s64 = ctx.r15.s64 + 8;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
loc_832CCD10:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,-8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// lfs f13,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,-4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lfs f10,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + ctx.r27.u64;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lfsx f8,r11,r27
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r10,r27
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f2,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f31,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfs f28,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f6,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f28,f28,f13
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// lfs f4,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f3,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f1,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f30,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f29,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f27,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lfs f26,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f27,f27,f13
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// lfsx f25,r11,r28
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f26,f26,f13
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// lfsx f24,r10,r28
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f25,f25,f0
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fmuls f24,f24,f13
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f13.f64));
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// fadds f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + ctx.r29.u64;
	// fadds f2,f28,f31
	ctx.f2.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// fadds f6,f3,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// fadds f4,f1,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fadds f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfsx f7,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fadds f31,f27,f30
	ctx.f31.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// lfs f1,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f29,f26,f29
	ctx.f29.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// lfs f30,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fadds f28,f24,f25
	ctx.f28.f64 = double(float(ctx.f24.f64 + ctx.f25.f64));
	// fmuls f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f2,f2,f11
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f31,f31,f11
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// fmuls f29,f29,f11
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f11.f64));
	// fmuls f28,f28,f11
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f11.f64));
	// fadds f6,f2,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fadds f5,f31,f5
	ctx.f5.f64 = double(float(ctx.f31.f64 + ctx.f5.f64));
	// fadds f4,f29,f4
	ctx.f4.f64 = double(float(ctx.f29.f64 + ctx.f4.f64));
	// fadds f8,f28,f8
	ctx.f8.f64 = double(float(ctx.f28.f64 + ctx.f8.f64));
	// fmuls f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f5,f5,f10
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f4,f4,f10
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfsx f8,r10,r29
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f29,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f31,f31,f13
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// lfs f28,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f29,f29,f13
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// lfsx f2,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// lfsx f25,r10,r30
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f27,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f26,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f2,f0,f2
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f28,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f27,f27,f0
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// lfs f24,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f26,f26,f0
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmuls f25,f9,f25
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f25.f64));
	// lfs f23,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// lfs f28,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f24,f24,f9
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f9.f64));
	// lfs f22,-4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f23,f23,f9
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f9.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmuls f9,f28,f9
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f9.f64));
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// fadds f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fadds f7,f31,f3
	ctx.f7.f64 = double(float(ctx.f31.f64 + ctx.f3.f64));
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fadds f3,f29,f1
	ctx.f3.f64 = double(float(ctx.f29.f64 + ctx.f1.f64));
	// fadds f2,f25,f2
	ctx.f2.f64 = double(float(ctx.f25.f64 + ctx.f2.f64));
	// fadds f1,f24,f27
	ctx.f1.f64 = double(float(ctx.f24.f64 + ctx.f27.f64));
	// fadds f31,f23,f26
	ctx.f31.f64 = double(float(ctx.f23.f64 + ctx.f26.f64));
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fmuls f9,f8,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f8,f7,f12
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f7,f3,f12
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f12,f2,f11
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f3,f1,f11
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f2,f31,f11
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fadds f11,f3,f8
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fadds f9,f2,f7
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f13,f12,f22
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f22.f64));
	// fmuls f12,f11,f22
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f22.f64));
	// fmuls f11,f9,f22
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f22.f64));
	// fmuls f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f12,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f13,f11,f5
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// stw r6,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r6.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832ccd10
	if (ctx.cr6.lt) goto loc_832CCD10;
loc_832CCF7C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CCF9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832ccc28
	if (ctx.cr6.lt) goto loc_832CCC28;
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832CCFB8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r18,r10
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832ccc0c
	if (ctx.cr6.lt) goto loc_832CCC0C;
loc_832CCFD0:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832ccfe0
	goto loc_832CCFE0;
loc_832CCFD8:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_832CCFE0:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CCFE8;
	sub_822990F0(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CCFF0;
	sub_822990F0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CCFF8;
	sub_822990F0(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CD000;
	sub_822990F0(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CD008;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832CD00C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82cb6b1c
	ctx.lr = 0x832CD018;
	__restfpr_22(ctx, base);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CD01C"))) PPC_WEAK_FUNC(sub_832CD01C);
PPC_FUNC_IMPL(__imp__sub_832CD01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CD020"))) PPC_WEAK_FUNC(sub_832CD020);
PPC_FUNC_IMPL(__imp__sub_832CD020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832CD028;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82cb6ac4
	ctx.lr = 0x832CD030;
	__savefpr_19(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832cd300
	if (ctx.cr6.eq) goto loc_832CD300;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x832cd300
	if (ctx.cr6.eq) goto loc_832CD300;
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// clrldi r10,r23,32
	ctx.r10.u64 = ctx.r23.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// cntlzw r10,r22
	ctx.r10.u64 = ctx.r22.u32 == 0 ? 32 : __builtin_clz(ctx.r22.u32);
	// frsp f21,f0
	ctx.f21.f64 = double(float(ctx.f0.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lfs f24,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f24.f64 = double(temp.f32);
	// li r3,16
	ctx.r3.s64 = 16;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f26,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f26.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// frsp f22,f13
	ctx.f22.f64 = double(float(ctx.f13.f64));
	// fdivs f27,f22,f21
	ctx.f27.f64 = double(float(ctx.f22.f64 / ctx.f21.f64));
	// fdivs f19,f24,f27
	ctx.f19.f64 = double(float(ctx.f24.f64 / ctx.f27.f64));
	// beq cr6,0x832cd110
	if (ctx.cr6.eq) goto loc_832CD110;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_832CD0C0:
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f24.f64));
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fadds f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// blt cr6,0x832cd0c0
	if (ctx.cr6.lt) goto loc_832CD0C0;
loc_832CD110:
	// bl 0x82295bc8
	ctx.lr = 0x832CD114;
	sub_82295BC8(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x832cd300
	if (ctx.cr0.eq) goto loc_832CD300;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,4
	ctx.r31.s64 = 4;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f25,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f25.f64 = double(temp.f32);
	// fmr f28,f25
	ctx.f28.f64 = ctx.f25.f64;
	// beq cr6,0x832cd2f4
	if (ctx.cr6.eq) goto loc_832CD2F4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f20,-18284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18284);
	ctx.f20.f64 = double(temp.f32);
loc_832CD144:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// add r24,r31,r27
	ctx.r24.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f23,f0
	ctx.f23.f64 = double(float(ctx.f0.f64));
loc_832CD168:
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f23.f64));
	// fsubs f29,f0,f24
	ctx.f29.f64 = double(float(ctx.f0.f64 - ctx.f24.f64));
	// fmuls f30,f29,f27
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f27.f64));
	// fadds f31,f30,f27
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f27.f64));
	// bne cr6,0x832cd1ac
	if (!ctx.cr6.eq) goto loc_832CD1AC;
	// fcmpu cr6,f30,f25
	ctx.cr6.compare(ctx.f30.f64, ctx.f25.f64);
	// bge cr6,0x832cd1a0
	if (!ctx.cr6.lt) goto loc_832CD1A0;
	// fmr f30,f25
	ctx.f30.f64 = ctx.f25.f64;
loc_832CD1A0:
	// fcmpu cr6,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f22.f64);
	// ble cr6,0x832cd1ac
	if (!ctx.cr6.gt) goto loc_832CD1AC;
	// fmr f31,f22
	ctx.f31.f64 = ctx.f22.f64;
loc_832CD1AC:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82cb2298
	ctx.lr = 0x832CD1B4;
	sub_82CB2298(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x832cd2b8
	if (!ctx.cr6.lt) goto loc_832CD2B8;
	// subf r8,r23,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r23.s64;
loc_832CD1E4:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fadds f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// bge cr6,0x832cd1fc
	if (!ctx.cr6.lt) goto loc_832CD1FC;
	// add r9,r10,r23
	ctx.r9.u64 = ctx.r10.u64 + ctx.r23.u64;
	// b 0x832cd20c
	goto loc_832CD20C;
loc_832CD1FC:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r23.s32, ctx.xer);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// bge cr6,0x832cd20c
	if (!ctx.cr6.lt) goto loc_832CD20C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_832CD20C:
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x832cd234
	if (ctx.cr6.eq) goto loc_832CD234;
	// fcmpu cr6,f28,f20
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f20.f64);
	// ble cr6,0x832cd22c
	if (!ctx.cr6.gt) goto loc_832CD22C;
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stfs f28,4(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_832CD22C:
	// fmr f28,f25
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f25.f64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
loc_832CD234:
	// fcmpu cr6,f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bge cr6,0x832cd240
	if (!ctx.cr6.lt) goto loc_832CD240;
	// fmr f12,f30
	ctx.f12.f64 = ctx.f30.f64;
loc_832CD240:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x832cd24c
	if (!ctx.cr6.gt) goto loc_832CD24C;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
loc_832CD24C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x832cd278
	if (!ctx.cr6.eq) goto loc_832CD278;
	// fcmpu cr6,f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f25.f64);
	// bge cr6,0x832cd264
	if (!ctx.cr6.lt) goto loc_832CD264;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x832cd280
	goto loc_832CD280;
loc_832CD264:
	// fadds f0,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f26.f64));
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// blt cr6,0x832cd278
	if (ctx.cr6.lt) goto loc_832CD278;
	// fmr f0,f25
	ctx.f0.f64 = ctx.f25.f64;
	// b 0x832cd280
	goto loc_832CD280;
loc_832CD278:
	// fadds f0,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmsubs f0,f0,f19,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f19.f64 - ctx.f29.f64));
loc_832CD280:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x832cd28c
	if (ctx.cr6.eq) goto loc_832CD28C;
	// fsubs f0,f26,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
loc_832CD28C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fsubs f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// fmadds f28,f13,f0,f28
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f28.f64));
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832cd1e4
	if (ctx.cr6.lt) goto loc_832CD1E4;
loc_832CD2B8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x832cd168
	if (ctx.cr6.lt) goto loc_832CD168;
	// fcmpu cr6,f28,f20
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f20.f64);
	// ble cr6,0x832cd2dc
	if (!ctx.cr6.gt) goto loc_832CD2DC;
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stfs f28,4(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_832CD2DC:
	// subf r11,r25,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r25.s64;
	// fmr f28,f25
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f25.f64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x832cd144
	if (ctx.cr6.lt) goto loc_832CD144;
loc_832CD2F4:
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x832cd304
	goto loc_832CD304;
loc_832CD300:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832CD304:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82cb6b10
	ctx.lr = 0x832CD310;
	__restfpr_19(ctx, base);
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CD314"))) PPC_WEAK_FUNC(sub_832CD314);
PPC_FUNC_IMPL(__imp__sub_832CD314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CD318"))) PPC_WEAK_FUNC(sub_832CD318);
PPC_FUNC_IMPL(__imp__sub_832CD318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832CD320;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832cd378
	if (ctx.cr0.eq) goto loc_832CD378;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// mulli r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 * 12;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x832cd360
	if (ctx.cr0.lt) goto loc_832CD360;
loc_832CD34C:
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822990f0
	ctx.lr = 0x832CD358;
	sub_822990F0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x832cd34c
	if (!ctx.cr0.lt) goto loc_832CD34C;
loc_832CD360:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832cd370
	if (ctx.cr0.eq) goto loc_832CD370;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CD370;
	sub_822990F0(ctx, base);
loc_832CD370:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x832cd394
	goto loc_832CD394;
loc_832CD378:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822990f0
	ctx.lr = 0x832CD380;
	sub_822990F0(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832cd390
	if (ctx.cr0.eq) goto loc_832CD390;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CD390;
	sub_822990F0(ctx, base);
loc_832CD390:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832CD394:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CD39C"))) PPC_WEAK_FUNC(sub_832CD39C);
PPC_FUNC_IMPL(__imp__sub_832CD39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CD3A0"))) PPC_WEAK_FUNC(sub_832CD3A0);
PPC_FUNC_IMPL(__imp__sub_832CD3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x832CD3A8;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// mr r18,r21
	ctx.r18.u64 = ctx.r21.u64;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// not r7,r11
	ctx.r7.u64 = ~ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r5,r8,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x1;
	// lwz r3,104(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r31,r7,15,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x1;
	// lwz r4,104(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// rlwinm r30,r11,14,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// bl 0x832cd020
	ctx.lr = 0x832CD404;
	sub_832CD020(ctx, base);
	// mr. r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq 0x832cdb08
	if (ctx.cr0.eq) goto loc_832CDB08;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r4,108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x832cd020
	ctx.lr = 0x832CD424;
	sub_832CD020(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq 0x832cdb08
	if (ctx.cr0.eq) goto loc_832CDB08;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r4,112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r3,112(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// bl 0x832cd020
	ctx.lr = 0x832CD444;
	sub_832CD020(ctx, base);
	// mr. r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq 0x832cdb08
	if (ctx.cr0.eq) goto loc_832CDB08;
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lis r9,5461
	ctx.r9.s64 = 357892096;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// li r30,-1
	ctx.r30.s64 = -1;
	// ori r7,r9,21845
	ctx.r7.u64 = ctx.r9.u64 | 21845;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// add r15,r11,r16
	ctx.r15.u64 = ctx.r11.u64 + ctx.r16.u64;
	// add r14,r10,r20
	ctx.r14.u64 = ctx.r10.u64 + ctx.r20.u64;
	// lwz r31,112(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// add r19,r9,r18
	ctx.r19.u64 = ctx.r9.u64 + ctx.r18.u64;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// ble cr6,0x832cd488
	if (!ctx.cr6.gt) goto loc_832CD488;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_832CD488:
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x832cd49c
	if (!ctx.cr6.gt) goto loc_832CD49C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832CD49C:
	// bl 0x82295bc8
	ctx.lr = 0x832CD4A0;
	sub_82295BC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832cd4dc
	if (ctx.cr0.eq) goto loc_832CD4DC;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r10,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r10.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt 0x832cd4d4
	if (ctx.cr0.lt) goto loc_832CD4D4;
loc_832CD4BC:
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r21,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// stw r21,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r21.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x832cd4bc
	if (!ctx.cr0.lt) goto loc_832CD4BC;
loc_832CD4D4:
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// b 0x832cd4e0
	goto loc_832CD4E0;
loc_832CD4DC:
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
loc_832CD4E0:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x832cdafc
	if (ctx.cr6.eq) goto loc_832CDAFC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// ori r17,r10,65535
	ctx.r17.u64 = ctx.r10.u64 | 65535;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x832cd508
	if (!ctx.cr6.gt) goto loc_832CD508;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832CD508:
	// bl 0x82295bc8
	ctx.lr = 0x832CD50C;
	sub_82295BC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832cdafc
	if (ctx.cr6.eq) goto loc_832CDAFC;
	// addi r7,r18,4
	ctx.r7.s64 = ctx.r18.s64 + 4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r19
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x832cd570
	if (!ctx.cr6.lt) goto loc_832CD570;
loc_832CD52C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x832cd55c
	goto loc_832CD55C;
loc_832CD53C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
loc_832CD55C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x832cd53c
	if (ctx.cr6.lt) goto loc_832CD53C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x832cd52c
	if (ctx.cr6.lt) goto loc_832CD52C;
loc_832CD570:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r19
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x832cdaf0
	if (!ctx.cr6.lt) goto loc_832CDAF0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f29,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-18324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18324);
	ctx.f30.f64 = double(temp.f32);
loc_832CD594:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r24,r11,4
	ctx.r24.s64 = ctx.r11.s64 + 4;
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x832cd644
	if (!ctx.cr6.lt) goto loc_832CD644;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832CD5B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 * 12;
	// lwzx r11,r31,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cd638
	if (!ctx.cr6.eq) goto loc_832CD638;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832cd5e8
	if (ctx.cr6.eq) goto loc_832CD5E8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r11,r31,r22
	PPC_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// b 0x832cd618
	goto loc_832CD618;
loc_832CD5E8:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x832cd608
	if (!ctx.cr6.gt) goto loc_832CD608;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_832CD608:
	// bl 0x82295bc8
	ctx.lr = 0x832CD60C;
	sub_82295BC8(ctx, base);
	// stwx r3,r31,r22
	PPC_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832cdaf8
	if (ctx.cr6.eq) goto loc_832CDAF8;
loc_832CD618:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r31,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82cb16f0
	ctx.lr = 0x832CD638;
	sub_82CB16F0(ctx, base);
loc_832CD638:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x832cd5b0
	if (ctx.cr6.lt) goto loc_832CD5B0;
loc_832CD644:
	// addi r30,r20,4
	ctx.r30.s64 = ctx.r20.s64 + 4;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// bge cr6,0x832cd7c4
	if (!ctx.cr6.lt) goto loc_832CD7C4;
	// addi r26,r16,4
	ctx.r26.s64 = ctx.r16.s64 + 4;
loc_832CD658:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CD680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplw cr6,r26,r15
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x832cd7b4
	if (!ctx.cr6.lt) goto loc_832CD7B4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_832CD694:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bge cr6,0x832cd7a4
	if (!ctx.cr6.lt) goto loc_832CD7A4;
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
loc_832CD6AC:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x832cd798
	if (!ctx.cr6.lt) goto loc_832CD798;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
loc_832CD6BC:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwzx r10,r9,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bge cr6,0x832cd78c
	if (!ctx.cr6.lt) goto loc_832CD78C;
loc_832CD6F4:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,-8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f13,f12,f0,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfsx f13,r9,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lfs f13,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r9,8
	ctx.r6.s64 = ctx.r9.s64 + 8;
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r6,r9,12
	ctx.r6.s64 = ctx.r9.s64 + 12;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// blt cr6,0x832cd6f4
	if (ctx.cr6.lt) goto loc_832CD6F4;
loc_832CD78C:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x832cd6bc
	if (ctx.cr6.lt) goto loc_832CD6BC;
loc_832CD798:
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmplw cr6,r5,r23
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x832cd6ac
	if (ctx.cr6.lt) goto loc_832CD6AC;
loc_832CD7A4:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x832cd694
	if (ctx.cr6.lt) goto loc_832CD694;
loc_832CD7B4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r14
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x832cd658
	if (ctx.cr6.lt) goto loc_832CD658;
loc_832CD7C4:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x832cdad8
	if (!ctx.cr6.lt) goto loc_832CDAD8;
loc_832CD7D0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r30,r11,r22
	ctx.r30.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bne 0x832cdacc
	if (!ctx.cr0.eq) goto loc_832CDACC;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x832cdac0
	if (!ctx.cr6.gt) goto loc_832CDAC0;
loc_832CD800:
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mullw r9,r11,r31
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x832cd9bc
	if (ctx.cr6.eq) goto loc_832CD9BC;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x832cd8f8
	if (ctx.cr6.eq) goto loc_832CD8F8;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x832cda7c
	if (!ctx.cr6.eq) goto loc_832CDA7C;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832cda7c
	if (ctx.cr6.eq) goto loc_832CDA7C;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
loc_832CD844:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x832cd858
	if (!ctx.cr6.lt) goto loc_832CD858;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x832cd864
	goto loc_832CD864;
loc_832CD858:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832cd864
	if (ctx.cr6.lt) goto loc_832CD864;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CD864:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x832cd87c
	if (!ctx.cr6.lt) goto loc_832CD87C;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// b 0x832cd890
	goto loc_832CD890;
loc_832CD87C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x832cd88c
	if (!ctx.cr6.lt) goto loc_832CD88C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x832cd890
	goto loc_832CD890;
loc_832CD88C:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_832CD890:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x832cd8a8
	if (!ctx.cr6.lt) goto loc_832CD8A8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x832cd8b4
	goto loc_832CD8B4;
loc_832CD8A8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832cd8b4
	if (ctx.cr6.lt) goto loc_832CD8B4;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CD8B4:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x832cd8cc
	if (!ctx.cr6.lt) goto loc_832CD8CC;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x832cd8d8
	goto loc_832CD8D8;
loc_832CD8CC:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832cd8d8
	if (ctx.cr6.lt) goto loc_832CD8D8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CD8D8:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,104(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x832cd844
	if (ctx.cr6.lt) goto loc_832CD844;
	// b 0x832cda7c
	goto loc_832CDA7C;
loc_832CD8F8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832cda7c
	if (ctx.cr6.eq) goto loc_832CDA7C;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
loc_832CD908:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x832cd91c
	if (!ctx.cr6.lt) goto loc_832CD91C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x832cd928
	goto loc_832CD928;
loc_832CD91C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832cd928
	if (ctx.cr6.lt) goto loc_832CD928;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CD928:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x832cd940
	if (!ctx.cr6.lt) goto loc_832CD940;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// b 0x832cd954
	goto loc_832CD954;
loc_832CD940:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x832cd950
	if (!ctx.cr6.lt) goto loc_832CD950;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x832cd954
	goto loc_832CD954;
loc_832CD950:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_832CD954:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x832cd96c
	if (!ctx.cr6.lt) goto loc_832CD96C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x832cd978
	goto loc_832CD978;
loc_832CD96C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832cd978
	if (ctx.cr6.lt) goto loc_832CD978;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CD978:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x832cd990
	if (!ctx.cr6.lt) goto loc_832CD990;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x832cd99c
	goto loc_832CD99C;
loc_832CD990:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832cd99c
	if (ctx.cr6.lt) goto loc_832CD99C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CD99C:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r9,104(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x832cd908
	if (ctx.cr6.lt) goto loc_832CD908;
	// b 0x832cda7c
	goto loc_832CDA7C;
loc_832CD9BC:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832cda7c
	if (ctx.cr6.eq) goto loc_832CDA7C;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
loc_832CD9CC:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x832cd9e0
	if (!ctx.cr6.lt) goto loc_832CD9E0;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x832cd9ec
	goto loc_832CD9EC;
loc_832CD9E0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832cd9ec
	if (ctx.cr6.lt) goto loc_832CD9EC;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CD9EC:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x832cda04
	if (!ctx.cr6.lt) goto loc_832CDA04;
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
	// b 0x832cda18
	goto loc_832CDA18;
loc_832CDA04:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x832cda14
	if (!ctx.cr6.lt) goto loc_832CDA14;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x832cda18
	goto loc_832CDA18;
loc_832CDA14:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_832CDA18:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x832cda30
	if (!ctx.cr6.lt) goto loc_832CDA30;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x832cda3c
	goto loc_832CDA3C;
loc_832CDA30:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832cda3c
	if (ctx.cr6.lt) goto loc_832CDA3C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CDA3C:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x832cda54
	if (!ctx.cr6.lt) goto loc_832CDA54;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x832cda60
	goto loc_832CDA60;
loc_832CDA54:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832cda60
	if (ctx.cr6.lt) goto loc_832CDA60;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CDA60:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r9,104(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x832cd9cc
	if (ctx.cr6.lt) goto loc_832CD9CC;
loc_832CDA7C:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832CDAAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832cd800
	if (ctx.cr6.lt) goto loc_832CD800;
loc_832CDAC0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_832CDACC:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x832cd7d0
	if (ctx.cr6.lt) goto loc_832CD7D0;
loc_832CDAD8:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x832cd594
	if (ctx.cr6.lt) goto loc_832CD594;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r21,0
	ctx.r21.s64 = 0;
loc_832CDAF0:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// b 0x832cdb10
	goto loc_832CDB10;
loc_832CDAF8:
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_832CDAFC:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x832cdb10
	goto loc_832CDB10;
loc_832CDB08:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
loc_832CDB10:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x832cdb24
	if (ctx.cr6.eq) goto loc_832CDB24;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832cd318
	ctx.lr = 0x832CDB24;
	sub_832CD318(ctx, base);
loc_832CDB24:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CDB2C;
	sub_822990F0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CDB34;
	sub_822990F0(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CDB3C;
	sub_822990F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CDB44;
	sub_822990F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822990f0
	ctx.lr = 0x832CDB4C;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

__attribute__((alias("__imp__sub_832CDB64"))) PPC_WEAK_FUNC(sub_832CDB64);
PPC_FUNC_IMPL(__imp__sub_832CDB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CDB68"))) PPC_WEAK_FUNC(sub_832CDB68);
PPC_FUNC_IMPL(__imp__sub_832CDB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x832CDB70;
	__savegprlr_16(ctx, base);
	// stfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f29.u64);
	// stfd f30,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x832ce260
	if (!ctx.cr6.eq) goto loc_832CE260;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x832ce260
	if (!ctx.cr6.eq) goto loc_832CE260;
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// lwz r3,104(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// not r10,r9
	ctx.r10.u64 = ~ctx.r9.u64;
	// rlwinm r5,r11,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// rlwinm r31,r10,15,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	// bl 0x832cd020
	ctx.lr = 0x832CDBD8;
	sub_832CD020(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x832ce21c
	if (ctx.cr0.eq) goto loc_832CE21C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x832cd020
	ctx.lr = 0x832CDBF8;
	sub_832CD020(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq 0x832ce21c
	if (ctx.cr0.eq) goto loc_832CE21C;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r8,5461
	ctx.r8.s64 = 357892096;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r17,-1
	ctx.r17.s64 = -1;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// ori r8,r8,21845
	ctx.r8.u64 = ctx.r8.u64 | 21845;
	// add r20,r11,r22
	ctx.r20.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r23,r10,r21
	ctx.r23.u64 = ctx.r10.u64 + ctx.r21.u64;
	// lwz r31,108(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// ble cr6,0x832cdc34
	if (!ctx.cr6.gt) goto loc_832CDC34;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_832CDC34:
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x832cdc48
	if (!ctx.cr6.gt) goto loc_832CDC48;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_832CDC48:
	// bl 0x82295bc8
	ctx.lr = 0x832CDC4C;
	sub_82295BC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832cdc88
	if (ctx.cr0.eq) goto loc_832CDC88;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r10,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r10.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt 0x832cdc80
	if (ctx.cr0.lt) goto loc_832CDC80;
loc_832CDC68:
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r19,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r19.u32);
	// stw r19,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r19.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x832cdc68
	if (!ctx.cr0.lt) goto loc_832CDC68;
loc_832CDC80:
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// b 0x832cdc8c
	goto loc_832CDC8C;
loc_832CDC88:
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
loc_832CDC8C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x832ce210
	if (ctx.cr6.eq) goto loc_832CE210;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// ori r24,r10,65535
	ctx.r24.u64 = ctx.r10.u64 | 65535;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x832cdcb4
	if (!ctx.cr6.gt) goto loc_832CDCB4;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_832CDCB4:
	// bl 0x82295bc8
	ctx.lr = 0x832CDCB8;
	sub_82295BC8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x832ce210
	if (ctx.cr6.eq) goto loc_832CE210;
	// addi r7,r21,4
	ctx.r7.s64 = ctx.r21.s64 + 4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x832cdd18
	if (!ctx.cr6.lt) goto loc_832CDD18;
loc_832CDCD4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x832cdd04
	goto loc_832CDD04;
loc_832CDCE4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
loc_832CDD04:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x832cdce4
	if (ctx.cr6.lt) goto loc_832CDCE4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x832cdcd4
	if (ctx.cr6.lt) goto loc_832CDCD4;
loc_832CDD18:
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x832ce208
	if (!ctx.cr6.lt) goto loc_832CE208;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f29,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-18324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18324);
	ctx.f30.f64 = double(temp.f32);
loc_832CDD40:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x832cddd4
	if (!ctx.cr6.lt) goto loc_832CDDD4;
loc_832CDD58:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 * 12;
	// lwzx r11,r31,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cddc8
	if (!ctx.cr6.eq) goto loc_832CDDC8;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x832cdd88
	if (ctx.cr6.eq) goto loc_832CDD88;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// stwx r11,r31,r26
	PPC_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// stw r19,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r19.u32);
	// lwz r18,4(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// b 0x832cddb0
	goto loc_832CDDB0;
loc_832CDD88:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x832cdda0
	if (!ctx.cr6.gt) goto loc_832CDDA0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_832CDDA0:
	// bl 0x82295bc8
	ctx.lr = 0x832CDDA4;
	sub_82295BC8(ctx, base);
	// stwx r3,r31,r26
	PPC_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ce210
	if (ctx.cr6.eq) goto loc_832CE210;
loc_832CDDB0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r31,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82cb16f0
	ctx.lr = 0x832CDDC8;
	sub_82CB16F0(ctx, base);
loc_832CDDC8:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x832cdd58
	if (ctx.cr6.lt) goto loc_832CDD58;
loc_832CDDD4:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CDDF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r22,4
	ctx.r11.s64 = ctx.r22.s64 + 4;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x832cdee0
	if (!ctx.cr6.lt) goto loc_832CDEE0;
	// addi r8,r16,8
	ctx.r8.s64 = ctx.r16.s64 + 8;
loc_832CDE04:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x832cded0
	if (!ctx.cr6.lt) goto loc_832CDED0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_832CDE1C:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// bge cr6,0x832cdec4
	if (!ctx.cr6.lt) goto loc_832CDEC4;
loc_832CDE34:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,-8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfsx f13,r9,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lfs f13,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r5,r9,12
	ctx.r5.s64 = ctx.r9.s64 + 12;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// blt cr6,0x832cde34
	if (ctx.cr6.lt) goto loc_832CDE34;
loc_832CDEC4:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x832cde1c
	if (ctx.cr6.lt) goto loc_832CDE1C;
loc_832CDED0:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r20
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x832cde04
	if (ctx.cr6.lt) goto loc_832CDE04;
loc_832CDEE0:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x832ce1f8
	if (!ctx.cr6.lt) goto loc_832CE1F8;
loc_832CDEEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x832ce1ec
	if (!ctx.cr0.eq) goto loc_832CE1EC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832ce0e8
	if (ctx.cr6.eq) goto loc_832CE0E8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x832ce008
	if (ctx.cr6.eq) goto loc_832CE008;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x832ce1c4
	if (!ctx.cr6.eq) goto loc_832CE1C4;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832ce1c4
	if (!ctx.cr6.gt) goto loc_832CE1C4;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_832CDF40:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x832cdf58
	if (!ctx.cr6.lt) goto loc_832CDF58;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x832cdf64
	goto loc_832CDF64;
loc_832CDF58:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832cdf64
	if (ctx.cr6.lt) goto loc_832CDF64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CDF64:
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x832cdf84
	if (!ctx.cr6.lt) goto loc_832CDF84;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x832cdf90
	goto loc_832CDF90;
loc_832CDF84:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832cdf90
	if (ctx.cr6.lt) goto loc_832CDF90;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CDF90:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x832cdfb0
	if (!ctx.cr6.lt) goto loc_832CDFB0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x832cdfbc
	goto loc_832CDFBC;
loc_832CDFB0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832cdfbc
	if (ctx.cr6.lt) goto loc_832CDFBC;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CDFBC:
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x832cdfdc
	if (!ctx.cr6.lt) goto loc_832CDFDC;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x832cdfe8
	goto loc_832CDFE8;
loc_832CDFDC:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832cdfe8
	if (ctx.cr6.lt) goto loc_832CDFE8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CDFE8:
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832cdf40
	if (ctx.cr6.lt) goto loc_832CDF40;
	// b 0x832ce1c4
	goto loc_832CE1C4;
loc_832CE008:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832ce1c4
	if (!ctx.cr6.gt) goto loc_832CE1C4;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_832CE020:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x832ce038
	if (!ctx.cr6.lt) goto loc_832CE038;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x832ce044
	goto loc_832CE044;
loc_832CE038:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832ce044
	if (ctx.cr6.lt) goto loc_832CE044;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CE044:
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x832ce064
	if (!ctx.cr6.lt) goto loc_832CE064;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x832ce070
	goto loc_832CE070;
loc_832CE064:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832ce070
	if (ctx.cr6.lt) goto loc_832CE070;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CE070:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x832ce090
	if (!ctx.cr6.lt) goto loc_832CE090;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x832ce09c
	goto loc_832CE09C;
loc_832CE090:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832ce09c
	if (ctx.cr6.lt) goto loc_832CE09C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CE09C:
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x832ce0bc
	if (!ctx.cr6.lt) goto loc_832CE0BC;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x832ce0c8
	goto loc_832CE0C8;
loc_832CE0BC:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832ce0c8
	if (ctx.cr6.lt) goto loc_832CE0C8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CE0C8:
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832ce020
	if (ctx.cr6.lt) goto loc_832CE020;
	// b 0x832ce1c4
	goto loc_832CE1C4;
loc_832CE0E8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832ce1c4
	if (!ctx.cr6.gt) goto loc_832CE1C4;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_832CE100:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x832ce118
	if (!ctx.cr6.lt) goto loc_832CE118;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x832ce124
	goto loc_832CE124;
loc_832CE118:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832ce124
	if (ctx.cr6.lt) goto loc_832CE124;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CE124:
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x832ce144
	if (!ctx.cr6.lt) goto loc_832CE144;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x832ce150
	goto loc_832CE150;
loc_832CE144:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832ce150
	if (ctx.cr6.lt) goto loc_832CE150;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CE150:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x832ce170
	if (!ctx.cr6.lt) goto loc_832CE170;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x832ce17c
	goto loc_832CE17C;
loc_832CE170:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832ce17c
	if (ctx.cr6.lt) goto loc_832CE17C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CE17C:
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x832ce19c
	if (!ctx.cr6.lt) goto loc_832CE19C;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x832ce1a8
	goto loc_832CE1A8;
loc_832CE19C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x832ce1a8
	if (ctx.cr6.lt) goto loc_832CE1A8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_832CE1A8:
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832ce100
	if (ctx.cr6.lt) goto loc_832CE100;
loc_832CE1C4:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CE1E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r18,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r18.u32);
	// mr r18,r31
	ctx.r18.u64 = ctx.r31.u64;
loc_832CE1EC:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x832cdeec
	if (ctx.cr6.lt) goto loc_832CDEEC;
loc_832CE1F8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x832cdd40
	if (ctx.cr6.lt) goto loc_832CDD40;
loc_832CE208:
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// b 0x832ce224
	goto loc_832CE224;
loc_832CE210:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x832ce224
	goto loc_832CE224;
loc_832CE21C:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
loc_832CE224:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x832ce238
	if (ctx.cr6.eq) goto loc_832CE238;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832cd318
	ctx.lr = 0x832CE238;
	sub_832CD318(ctx, base);
loc_832CE238:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CE240;
	sub_822990F0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CE248;
	sub_822990F0(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x822990f0
	ctx.lr = 0x832CE250;
	sub_822990F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822990f0
	ctx.lr = 0x832CE258;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x832ce268
	goto loc_832CE268;
loc_832CE260:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_832CE268:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CE27C"))) PPC_WEAK_FUNC(sub_832CE27C);
PPC_FUNC_IMPL(__imp__sub_832CE27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CE280"))) PPC_WEAK_FUNC(sub_832CE280);
PPC_FUNC_IMPL(__imp__sub_832CE280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832CE288;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bgt cr6,0x832ce438
	if (ctx.cr6.gt) goto loc_832CE438;
	// rlwinm. r11,r6,0,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832ce438
	if (!ctx.cr0.eq) goto loc_832CE438;
	// rlwinm r11,r6,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x200000;
	// rlwinm r10,r6,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x400000;
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// rlwinm r9,r6,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000;
	// rlwinm r11,r6,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100000;
	// stw r10,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r10.u32);
	// stw r9,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r9.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r11.u32);
	// bl 0x83309fe8
	ctx.lr = 0x832CE2E4;
	sub_83309FE8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832ce3c8
	if (ctx.cr0.eq) goto loc_832CE3C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83309fe8
	ctx.lr = 0x832CE2F8;
	sub_83309FE8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// beq 0x832ce3c8
	if (ctx.cr0.eq) goto loc_832CE3C8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832fc3c8
	ctx.lr = 0x832CE30C;
	sub_832FC3C8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x832ce3e8
	if (ctx.cr0.lt) goto loc_832CE3E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cb470
	ctx.lr = 0x832CE31C;
	sub_832CB470(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832ce3c0
	if (!ctx.cr0.lt) goto loc_832CE3C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cb610
	ctx.lr = 0x832CE32C;
	sub_832CB610(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832ce3c0
	if (!ctx.cr0.lt) goto loc_832CE3C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cb768
	ctx.lr = 0x832CE33C;
	sub_832CB768(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832ce3c0
	if (!ctx.cr0.lt) goto loc_832CE3C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cb9d8
	ctx.lr = 0x832CE34C;
	sub_832CB9D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832ce3c0
	if (!ctx.cr0.lt) goto loc_832CE3C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cbc18
	ctx.lr = 0x832CE35C;
	sub_832CBC18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832ce3c0
	if (!ctx.cr0.lt) goto loc_832CE3C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cc108
	ctx.lr = 0x832CE36C;
	sub_832CC108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832ce3c0
	if (!ctx.cr0.lt) goto loc_832CE3C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cc710
	ctx.lr = 0x832CE37C;
	sub_832CC710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832ce3c0
	if (!ctx.cr0.lt) goto loc_832CE3C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ccab0
	ctx.lr = 0x832CE38C;
	sub_832CCAB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832ce3c0
	if (!ctx.cr0.lt) goto loc_832CE3C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cdb68
	ctx.lr = 0x832CE39C;
	sub_832CDB68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832ce3c0
	if (!ctx.cr0.lt) goto loc_832CE3C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cd3a0
	ctx.lr = 0x832CE3AC;
	sub_832CD3A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x832ce3c0
	if (!ctx.cr0.lt) goto loc_832CE3C0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,2344
	ctx.r3.s64 = ctx.r11.s64 + 2344;
	// b 0x832ce3d0
	goto loc_832CE3D0;
loc_832CE3C0:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x832ce3e8
	goto loc_832CE3E8;
loc_832CE3C8:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,2316
	ctx.r3.s64 = ctx.r11.s64 + 2316;
loc_832CE3D0:
	// bl 0x82e67098
	ctx.lr = 0x832CE3D4;
	sub_82E67098(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,12412
	ctx.r3.s64 = ctx.r11.s64 + 12412;
	// bl 0x82e67098
	ctx.lr = 0x832CE3E0;
	sub_82E67098(ctx, base);
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_832CE3E8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ce40c
	if (ctx.cr6.eq) goto loc_832CE40C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CE408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_832CE40C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ce430
	if (ctx.cr6.eq) goto loc_832CE430;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CE42C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_832CE430:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x832ce458
	goto loc_832CE458;
loc_832CE438:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,2292
	ctx.r3.s64 = ctx.r11.s64 + 2292;
	// bl 0x82e67098
	ctx.lr = 0x832CE444;
	sub_82E67098(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,12412
	ctx.r3.s64 = ctx.r11.s64 + 12412;
	// bl 0x82e67098
	ctx.lr = 0x832CE450;
	sub_82E67098(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_832CE458:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CE460"))) PPC_WEAK_FUNC(sub_832CE460);
PPC_FUNC_IMPL(__imp__sub_832CE460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x832CE468;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,2440
	ctx.r29.s64 = ctx.r10.s64 + 2440;
	// bne cr6,0x832ce4b4
	if (!ctx.cr6.eq) goto loc_832CE4B4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,75
	ctx.r7.s64 = 75;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CE4B4;
	sub_8320CF10(ctx, base);
loc_832CE4B4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832ce4d8
	if (!ctx.cr6.eq) goto loc_832CE4D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,76
	ctx.r7.s64 = 76;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CE4D8;
	sub_8320CF10(ctx, base);
loc_832CE4D8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832ce4fc
	if (!ctx.cr6.eq) goto loc_832CE4FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,2428
	ctx.r5.s64 = ctx.r11.s64 + 2428;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,77
	ctx.r7.s64 = 77;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CE4FC;
	sub_8320CF10(ctx, base);
loc_832CE4FC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x832ce520
	if (!ctx.cr6.eq) goto loc_832CE520;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-4812
	ctx.r5.s64 = ctx.r11.s64 + -4812;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,78
	ctx.r7.s64 = 78;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CE520;
	sub_8320CF10(ctx, base);
loc_832CE520:
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x832CE530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832ce558
	if (!ctx.cr0.eq) goto loc_832CE558;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,2380
	ctx.r5.s64 = ctx.r11.s64 + 2380;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,84
	ctx.r7.s64 = 84;
	// bl 0x8320cf10
	ctx.lr = 0x832CE550;
	sub_8320CF10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832ce56c
	goto loc_832CE56C;
loc_832CE558:
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// stw r25,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r25.u32);
loc_832CE56C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CE574"))) PPC_WEAK_FUNC(sub_832CE574);
PPC_FUNC_IMPL(__imp__sub_832CE574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CE578"))) PPC_WEAK_FUNC(sub_832CE578);
PPC_FUNC_IMPL(__imp__sub_832CE578) {
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
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CE59C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_832CE5B0"))) PPC_WEAK_FUNC(sub_832CE5B0);
PPC_FUNC_IMPL(__imp__sub_832CE5B0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832ce5fc
	if (ctx.cr6.lt) goto loc_832CE5FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,2584
	ctx.r6.s64 = ctx.r11.s64 + 2584;
	// addi r5,r10,2536
	ctx.r5.s64 = ctx.r10.s64 + 2536;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,191
	ctx.r7.s64 = 191;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CE5FC;
	sub_8320CF10(ctx, base);
loc_832CE5FC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r31,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
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

__attribute__((alias("__imp__sub_832CE62C"))) PPC_WEAK_FUNC(sub_832CE62C);
PPC_FUNC_IMPL(__imp__sub_832CE62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CE630"))) PPC_WEAK_FUNC(sub_832CE630);
PPC_FUNC_IMPL(__imp__sub_832CE630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832CE638;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,79
	ctx.r4.s64 = 79;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83214f50
	ctx.lr = 0x832CE650;
	sub_83214F50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x832CE664;
	sub_83214F50(ctx, base);
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bne cr6,0x832ce67c
	if (!ctx.cr6.eq) goto loc_832CE67C;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x832ce698
	if (ctx.cr6.eq) goto loc_832CE698;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x832ce688
	goto loc_832CE688;
loc_832CE67C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ce698
	if (ctx.cr6.eq) goto loc_832CE698;
	// li r6,0
	ctx.r6.s64 = 0;
loc_832CE688:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fdf88
	ctx.lr = 0x832CE698;
	sub_831FDF88(ctx, base);
loc_832CE698:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CE6A0"))) PPC_WEAK_FUNC(sub_832CE6A0);
PPC_FUNC_IMPL(__imp__sub_832CE6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832CE6A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83214f50
	ctx.lr = 0x832CE6C0;
	sub_83214F50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x832CE6D4;
	sub_83214F50(ctx, base);
	// cmplwi cr6,r29,23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 23, ctx.xer);
	// bne cr6,0x832ce6ec
	if (!ctx.cr6.eq) goto loc_832CE6EC;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x832ce738
	if (ctx.cr6.eq) goto loc_832CE738;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x832ce728
	goto loc_832CE728;
loc_832CE6EC:
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 24, ctx.xer);
	// bne cr6,0x832ce704
	if (!ctx.cr6.eq) goto loc_832CE704;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x832ce738
	if (ctx.cr6.eq) goto loc_832CE738;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x832ce728
	goto loc_832CE728;
loc_832CE704:
	// cmplwi cr6,r29,22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 22, ctx.xer);
	// bne cr6,0x832ce71c
	if (!ctx.cr6.eq) goto loc_832CE71C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x832ce738
	if (ctx.cr6.eq) goto loc_832CE738;
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x832ce728
	goto loc_832CE728;
loc_832CE71C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ce738
	if (ctx.cr6.eq) goto loc_832CE738;
	// li r6,0
	ctx.r6.s64 = 0;
loc_832CE728:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fdf88
	ctx.lr = 0x832CE738;
	sub_831FDF88(ctx, base);
loc_832CE738:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CE740"))) PPC_WEAK_FUNC(sub_832CE740);
PPC_FUNC_IMPL(__imp__sub_832CE740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832CE748;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,82
	ctx.r4.s64 = 82;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83214f50
	ctx.lr = 0x832CE760;
	sub_83214F50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x832CE774;
	sub_83214F50(ctx, base);
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// beq cr6,0x832ce7a4
	if (ctx.cr6.eq) goto loc_832CE7A4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// beq cr6,0x832ce7a4
	if (ctx.cr6.eq) goto loc_832CE7A4;
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// beq cr6,0x832ce7a4
	if (ctx.cr6.eq) goto loc_832CE7A4;
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 7, ctx.xer);
	// beq cr6,0x832ce7a4
	if (ctx.cr6.eq) goto loc_832CE7A4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ce7c0
	if (ctx.cr6.eq) goto loc_832CE7C0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x832ce7b0
	goto loc_832CE7B0;
loc_832CE7A4:
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x832ce7c0
	if (ctx.cr6.eq) goto loc_832CE7C0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_832CE7B0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fdf88
	ctx.lr = 0x832CE7C0;
	sub_831FDF88(ctx, base);
loc_832CE7C0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x832CE7D0;
	sub_83214F50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x832CE7E4;
	sub_83214F50(ctx, base);
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// beq cr6,0x832ce814
	if (ctx.cr6.eq) goto loc_832CE814;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// beq cr6,0x832ce814
	if (ctx.cr6.eq) goto loc_832CE814;
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// beq cr6,0x832ce814
	if (ctx.cr6.eq) goto loc_832CE814;
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 7, ctx.xer);
	// beq cr6,0x832ce814
	if (ctx.cr6.eq) goto loc_832CE814;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ce830
	if (ctx.cr6.eq) goto loc_832CE830;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x832ce820
	goto loc_832CE820;
loc_832CE814:
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x832ce830
	if (ctx.cr6.eq) goto loc_832CE830;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_832CE820:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fdf88
	ctx.lr = 0x832CE830;
	sub_831FDF88(ctx, base);
loc_832CE830:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x832CE840;
	sub_83214F50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214f50
	ctx.lr = 0x832CE854;
	sub_83214F50(ctx, base);
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// beq cr6,0x832ce884
	if (ctx.cr6.eq) goto loc_832CE884;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// beq cr6,0x832ce884
	if (ctx.cr6.eq) goto loc_832CE884;
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// beq cr6,0x832ce884
	if (ctx.cr6.eq) goto loc_832CE884;
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 7, ctx.xer);
	// beq cr6,0x832ce884
	if (ctx.cr6.eq) goto loc_832CE884;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832ce8a0
	if (ctx.cr6.eq) goto loc_832CE8A0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x832ce890
	goto loc_832CE890;
loc_832CE884:
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x832ce8a0
	if (ctx.cr6.eq) goto loc_832CE8A0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_832CE890:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fdf88
	ctx.lr = 0x832CE8A0;
	sub_831FDF88(ctx, base);
loc_832CE8A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CE8A8"))) PPC_WEAK_FUNC(sub_832CE8A8);
PPC_FUNC_IMPL(__imp__sub_832CE8A8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_832CE8C4:
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ce5b0
	ctx.lr = 0x832CE8D0;
	sub_832CE5B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832ce8fc
	if (ctx.cr0.eq) goto loc_832CE8FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ce630
	ctx.lr = 0x832CE8E4;
	sub_832CE630(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ce6a0
	ctx.lr = 0x832CE8F0;
	sub_832CE6A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ce740
	ctx.lr = 0x832CE8FC;
	sub_832CE740(ctx, base);
loc_832CE8FC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// cmplwi cr6,r11,116
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 116, ctx.xer);
	// ble cr6,0x832ce8c4
	if (!ctx.cr6.gt) goto loc_832CE8C4;
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_832CE928"))) PPC_WEAK_FUNC(sub_832CE928);
PPC_FUNC_IMPL(__imp__sub_832CE928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832CE930;
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
	// bl 0x832ce8a8
	ctx.lr = 0x832CE944;
	sub_832CE8A8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832d2ad0
	ctx.lr = 0x832CE954;
	sub_832D2AD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CE95C"))) PPC_WEAK_FUNC(sub_832CE95C);
PPC_FUNC_IMPL(__imp__sub_832CE95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CE960"))) PPC_WEAK_FUNC(sub_832CE960);
PPC_FUNC_IMPL(__imp__sub_832CE960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832CE968;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,2904
	ctx.r29.s64 = ctx.r10.s64 + 2904;
	// bne cr6,0x832ce9b0
	if (!ctx.cr6.eq) goto loc_832CE9B0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,105
	ctx.r7.s64 = 105;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CE9B0;
	sub_8320CF10(ctx, base);
loc_832CE9B0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x832ce9d4
	if (!ctx.cr6.eq) goto loc_832CE9D4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,106
	ctx.r7.s64 = 106;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CE9D4;
	sub_8320CF10(ctx, base);
loc_832CE9D4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x832ce9f8
	if (!ctx.cr6.eq) goto loc_832CE9F8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,2884
	ctx.r5.s64 = ctx.r11.s64 + 2884;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,107
	ctx.r7.s64 = 107;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CE9F8;
	sub_8320CF10(ctx, base);
loc_832CE9F8:
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x832CEA08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832cea30
	if (!ctx.cr0.eq) goto loc_832CEA30;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,2880
	ctx.r5.s64 = ctx.r11.s64 + 2880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,113
	ctx.r7.s64 = 113;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CEA2C;
	sub_8320CF10(ctx, base);
	// b 0x832ceaa8
	goto loc_832CEAA8;
loc_832CEA30:
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// addi r26,r28,8
	ctx.r26.s64 = ctx.r28.s64 + 8;
	// stw r25,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r25.u32);
	// addi r30,r11,-6912
	ctx.r30.s64 = ctx.r11.s64 + -6912;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// li r29,12
	ctx.r29.s64 = 12;
loc_832CEA4C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x832CEA68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x832cea4c
	if (!ctx.cr0.eq) goto loc_832CEA4C;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2848
	ctx.r4.s64 = ctx.r11.s64 + 2848;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x832CEA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832ceaa8
	if (!ctx.cr6.eq) goto loc_832CEAA8;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_832CEAA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CEAB4"))) PPC_WEAK_FUNC(sub_832CEAB4);
PPC_FUNC_IMPL(__imp__sub_832CEAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CEAB8"))) PPC_WEAK_FUNC(sub_832CEAB8);
PPC_FUNC_IMPL(__imp__sub_832CEAB8) {
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
	// bne cr6,0x832ceaf4
	if (!ctx.cr6.eq) goto loc_832CEAF4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,2904
	ctx.r6.s64 = ctx.r11.s64 + 2904;
	// addi r5,r10,2992
	ctx.r5.s64 = ctx.r10.s64 + 2992;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,174
	ctx.r7.s64 = 174;
	// bl 0x8320cf10
	ctx.lr = 0x832CEAF4;
	sub_8320CF10(ctx, base);
loc_832CEAF4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CEB08;
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

__attribute__((alias("__imp__sub_832CEB1C"))) PPC_WEAK_FUNC(sub_832CEB1C);
PPC_FUNC_IMPL(__imp__sub_832CEB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CEB20"))) PPC_WEAK_FUNC(sub_832CEB20);
PPC_FUNC_IMPL(__imp__sub_832CEB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832CEB28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,2904
	ctx.r29.s64 = ctx.r10.s64 + 2904;
	// bne cr6,0x832ceb68
	if (!ctx.cr6.eq) goto loc_832CEB68;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,2992
	ctx.r5.s64 = ctx.r11.s64 + 2992;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,182
	ctx.r7.s64 = 182;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CEB68;
	sub_8320CF10(ctx, base);
loc_832CEB68:
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 12, ctx.xer);
	// blt cr6,0x832ceb8c
	if (ctx.cr6.lt) goto loc_832CEB8C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,2996
	ctx.r5.s64 = ctx.r11.s64 + 2996;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,183
	ctx.r7.s64 = 183;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CEB8C;
	sub_8320CF10(ctx, base);
loc_832CEB8C:
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CEBA0"))) PPC_WEAK_FUNC(sub_832CEBA0);
PPC_FUNC_IMPL(__imp__sub_832CEBA0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// bgt cr6,0x832cec10
	if (ctx.cr6.gt) goto loc_832CEC10;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,3032
	ctx.r12.s64 = ctx.r12.s64 + 3032;
	// lbzx r0,r12,r3
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r3.u32);
	// lis r12,-31955
	ctx.r12.s64 = -2094202880;
	// addi r12,r12,-5164
	ctx.r12.s64 = ctx.r12.s64 + -5164;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_832CEBD4;
	case 1:
		goto loc_832CEBDC;
	case 2:
		goto loc_832CEBE4;
	case 3:
		goto loc_832CEBEC;
	case 4:
		goto loc_832CEBF4;
	case 5:
		goto loc_832CEBFC;
	case 6:
		goto loc_832CEC04;
	case 7:
		goto loc_832CEC0C;
	default:
		__builtin_unreachable();
	}
loc_832CEBD4:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x832cec10
	goto loc_832CEC10;
loc_832CEBDC:
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x832cec10
	goto loc_832CEC10;
loc_832CEBE4:
	// li r11,64
	ctx.r11.s64 = 64;
	// b 0x832cec10
	goto loc_832CEC10;
loc_832CEBEC:
	// li r11,128
	ctx.r11.s64 = 128;
	// b 0x832cec10
	goto loc_832CEC10;
loc_832CEBF4:
	// li r11,256
	ctx.r11.s64 = 256;
	// b 0x832cec10
	goto loc_832CEC10;
loc_832CEBFC:
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x832cec10
	goto loc_832CEC10;
loc_832CEC04:
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x832cec10
	goto loc_832CEC10;
loc_832CEC0C:
	// li r11,2048
	ctx.r11.s64 = 2048;
loc_832CEC10:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CEC18"))) PPC_WEAK_FUNC(sub_832CEC18);
PPC_FUNC_IMPL(__imp__sub_832CEC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832CEC20;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83217580
	ctx.lr = 0x832CEC30;
	sub_83217580(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83217580
	ctx.lr = 0x832CEC3C;
	sub_83217580(ctx, base);
	// bl 0x83216a90
	ctx.lr = 0x832CEC40;
	sub_83216A90(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83216a98
	ctx.lr = 0x832CEC4C;
	sub_83216A98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832d1f28
	ctx.lr = 0x832CEC54;
	sub_832D1F28(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,3056
	ctx.r27.s64 = ctx.r10.s64 + 3056;
	// bne cr6,0x832cec94
	if (!ctx.cr6.eq) goto loc_832CEC94;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5860
	ctx.r5.s64 = ctx.r11.s64 + -5860;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,154
	ctx.r7.s64 = 154;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CEC94;
	sub_8320CF10(ctx, base);
loc_832CEC94:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832cecb8
	if (!ctx.cr6.eq) goto loc_832CECB8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,3044
	ctx.r5.s64 = ctx.r11.s64 + 3044;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,155
	ctx.r7.s64 = 155;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CECB8;
	sub_8320CF10(ctx, base);
loc_832CECB8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832cecdc
	if (!ctx.cr6.eq) goto loc_832CECDC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,3040
	ctx.r5.s64 = ctx.r11.s64 + 3040;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,156
	ctx.r7.s64 = 156;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CECDC;
	sub_8320CF10(ctx, base);
loc_832CECDC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83218b20
	ctx.lr = 0x832CECEC;
	sub_83218B20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832ced40
	if (!ctx.cr0.eq) goto loc_832CED40;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x832ced40
	if (ctx.cr6.eq) goto loc_832CED40;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832d56b8
	ctx.lr = 0x832CED08;
	sub_832D56B8(ctx, base);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d18c0
	ctx.lr = 0x832CED24;
	sub_832D18C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d2490
	ctx.lr = 0x832CED34;
	sub_832D2490(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832d5ad0
	ctx.lr = 0x832CED40;
	sub_832D5AD0(ctx, base);
loc_832CED40:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ced54
	if (ctx.cr6.eq) goto loc_832CED54;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832eadf0
	ctx.lr = 0x832CED54;
	sub_832EADF0(ctx, base);
loc_832CED54:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CED5C"))) PPC_WEAK_FUNC(sub_832CED5C);
PPC_FUNC_IMPL(__imp__sub_832CED5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CED60"))) PPC_WEAK_FUNC(sub_832CED60);
PPC_FUNC_IMPL(__imp__sub_832CED60) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831fde98
	ctx.lr = 0x832CED80;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831fde98
	ctx.lr = 0x832CED90;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// bl 0x831fde98
	ctx.lr = 0x832CEDA0;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,89
	ctx.r4.s64 = 89;
	// bl 0x831fde98
	ctx.lr = 0x832CEDB0;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,90
	ctx.r4.s64 = 90;
	// bl 0x831fde98
	ctx.lr = 0x832CEDC0;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,91
	ctx.r4.s64 = 91;
	// bl 0x831fde98
	ctx.lr = 0x832CEDD0;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1003
	ctx.r4.s64 = 1003;
	// bl 0x831fde98
	ctx.lr = 0x832CEDE0;
	sub_831FDE98(ctx, base);
	// lis r5,255
	ctx.r5.s64 = 16711680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1004
	ctx.r4.s64 = 1004;
	// bl 0x831fde98
	ctx.lr = 0x832CEDF4;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x831fdf88
	ctx.lr = 0x832CEE08;
	sub_831FDF88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x831fdf88
	ctx.lr = 0x832CEE1C;
	sub_831FDF88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x831fdf88
	ctx.lr = 0x832CEE30;
	sub_831FDF88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,53
	ctx.r4.s64 = 53;
	// bl 0x831fdf88
	ctx.lr = 0x832CEE44;
	sub_831FDF88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// bl 0x831fde98
	ctx.lr = 0x832CEE54;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,70
	ctx.r4.s64 = 70;
	// bl 0x831fde98
	ctx.lr = 0x832CEE64;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,37
	ctx.r4.s64 = 37;
	// bl 0x831fde98
	ctx.lr = 0x832CEE74;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x831fde98
	ctx.lr = 0x832CEE84;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,75
	ctx.r4.s64 = 75;
	// bl 0x831fde98
	ctx.lr = 0x832CEE94;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,204
	ctx.r5.s64 = 204;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x831fde98
	ctx.lr = 0x832CEEA4;
	sub_831FDE98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fde98
	ctx.lr = 0x832CEEB4;
	sub_831FDE98(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x831fde98
	ctx.lr = 0x832CEEC4;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x831fde98
	ctx.lr = 0x832CEED4;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x831fde98
	ctx.lr = 0x832CEEE4;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x831fde98
	ctx.lr = 0x832CEEF4;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x831fde98
	ctx.lr = 0x832CEF04;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x831fde98
	ctx.lr = 0x832CEF14;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,95
	ctx.r4.s64 = 95;
	// bl 0x831fde98
	ctx.lr = 0x832CEF24;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x831fde98
	ctx.lr = 0x832CEF34;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,163
	ctx.r4.s64 = 163;
	// bl 0x831fde98
	ctx.lr = 0x832CEF44;
	sub_831FDE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,27
	ctx.r4.s64 = 27;
	// bl 0x831fde98
	ctx.lr = 0x832CEF54;
	sub_831FDE98(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,669
	ctx.r4.s64 = 669;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fde98
	ctx.lr = 0x832CEF64;
	sub_831FDE98(ctx, base);
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

__attribute__((alias("__imp__sub_832CEF78"))) PPC_WEAK_FUNC(sub_832CEF78);
PPC_FUNC_IMPL(__imp__sub_832CEF78) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CEFA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x832cefbc
	if (ctx.cr0.eq) goto loc_832CEFBC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832CEFBC;
	sub_82CB16F0(ctx, base);
loc_832CEFBC:
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

__attribute__((alias("__imp__sub_832CEFD8"))) PPC_WEAK_FUNC(sub_832CEFD8);
PPC_FUNC_IMPL(__imp__sub_832CEFD8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832CEFEC"))) PPC_WEAK_FUNC(sub_832CEFEC);
PPC_FUNC_IMPL(__imp__sub_832CEFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CEFF0"))) PPC_WEAK_FUNC(sub_832CEFF0);
PPC_FUNC_IMPL(__imp__sub_832CEFF0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CF004"))) PPC_WEAK_FUNC(sub_832CF004);
PPC_FUNC_IMPL(__imp__sub_832CF004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CF008"))) PPC_WEAK_FUNC(sub_832CF008);
PPC_FUNC_IMPL(__imp__sub_832CF008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832CF010;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r30,r10,27,5,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// clrlwi r29,r10,27
	ctx.r29.u64 = ctx.r10.u32 & 0x1F;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x832cf090
	if (ctx.cr6.eq) goto loc_832CF090;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// orc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ~ctx.r9.u64;
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// bge cr6,0x832cf078
	if (!ctx.cr6.lt) goto loc_832CF078;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,255
	ctx.r4.s64 = 255;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832CF078;
	sub_82CB16F0(ctx, base);
loc_832CF078:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,-2
	ctx.r10.s64 = -2;
	// slw r10,r10,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r29.u8 & 0x3F));
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// orc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ~ctx.r10.u64;
	// b 0x832cf0b4
	goto loc_832CF0B4;
loc_832CF090:
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// li r9,-2
	ctx.r9.s64 = -2;
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// slw r9,r9,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r29.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// orc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ~ctx.r10.u64;
loc_832CF0B4:
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CF0C0"))) PPC_WEAK_FUNC(sub_832CF0C0);
PPC_FUNC_IMPL(__imp__sub_832CF0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832CF0C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832cf208
	if (ctx.cr6.eq) goto loc_832CF208;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x832eb058
	ctx.lr = 0x832CF0E0;
	sub_832EB058(ctx, base);
	// lwz r4,272(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x832d28d0
	ctx.lr = 0x832CF0EC;
	sub_832D28D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x832d2948
	ctx.lr = 0x832CF0F8;
	sub_832D2948(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF15C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// li r30,6
	ctx.r30.s64 = 6;
loc_832CF1A0:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x832cf1a0
	if (!ctx.cr0.eq) goto loc_832CF1A0;
	// addi r30,r31,296
	ctx.r30.s64 = ctx.r31.s64 + 296;
	// li r29,5
	ctx.r29.s64 = 5;
loc_832CF1C8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832cf1e8
	if (ctx.cr6.eq) goto loc_832CF1E8;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832CF1E8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x832cf1c8
	if (!ctx.cr0.eq) goto loc_832CF1C8;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CF208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832CF208:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CF210"))) PPC_WEAK_FUNC(sub_832CF210);
PPC_FUNC_IMPL(__imp__sub_832CF210) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CF218"))) PPC_WEAK_FUNC(sub_832CF218);
PPC_FUNC_IMPL(__imp__sub_832CF218) {
	PPC_FUNC_PROLOGUE();
	// divwu r11,r3,r5
	ctx.r11.u32 = ctx.r3.u32 / ctx.r5.u32;
	// twllei r5,0
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// twllei r5,0
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divwu r3,r11,r5
	ctx.r3.u32 = ctx.r11.u32 / ctx.r5.u32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CF240"))) PPC_WEAK_FUNC(sub_832CF240);
PPC_FUNC_IMPL(__imp__sub_832CF240) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CF24C"))) PPC_WEAK_FUNC(sub_832CF24C);
PPC_FUNC_IMPL(__imp__sub_832CF24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CF250"))) PPC_WEAK_FUNC(sub_832CF250);
PPC_FUNC_IMPL(__imp__sub_832CF250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x832CF258;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r24,29
	ctx.r11.s64 = ctx.r24.s64 + 29;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwzx r29,r9,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r26,r11,-21168
	ctx.r26.s64 = ctx.r11.s64 + -21168;
	// addi r25,r10,3336
	ctx.r25.s64 = ctx.r10.s64 + 3336;
	// divwu r21,r30,r29
	ctx.r21.u32 = ctx.r30.u32 / ctx.r29.u32;
	// twllei r29,0
	// bne cr6,0x832cf2b8
	if (!ctx.cr6.eq) goto loc_832CF2B8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,3328
	ctx.r5.s64 = ctx.r11.s64 + 3328;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,567
	ctx.r7.s64 = 567;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF2B8;
	sub_8320CF10(ctx, base);
loc_832CF2B8:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// beq cr6,0x832cf2e4
	if (ctx.cr6.eq) goto loc_832CF2E4;
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// beq cr6,0x832cf2e4
	if (ctx.cr6.eq) goto loc_832CF2E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,3268
	ctx.r5.s64 = ctx.r11.s64 + 3268;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,568
	ctx.r7.s64 = 568;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF2E4;
	sub_8320CF10(ctx, base);
loc_832CF2E4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cf30c
	if (!ctx.cr6.eq) goto loc_832CF30C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,3248
	ctx.r5.s64 = ctx.r11.s64 + 3248;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,569
	ctx.r7.s64 = 569;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF30C;
	sub_8320CF10(ctx, base);
loc_832CF30C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cf334
	if (!ctx.cr6.eq) goto loc_832CF334;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,3228
	ctx.r5.s64 = ctx.r11.s64 + 3228;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,570
	ctx.r7.s64 = 570;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF334;
	sub_8320CF10(ctx, base);
loc_832CF334:
	// addi r11,r24,23
	ctx.r11.s64 = ctx.r24.s64 + 23;
	// add r28,r30,r22
	ctx.r28.u64 = ctx.r30.u64 + ctx.r22.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832cf368
	if (!ctx.cr6.gt) goto loc_832CF368;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,3160
	ctx.r5.s64 = ctx.r11.s64 + 3160;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,571
	ctx.r7.s64 = 571;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF368;
	sub_8320CF10(ctx, base);
loc_832CF368:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x832cf378
	if (!ctx.cr6.eq) goto loc_832CF378;
	// lwz r27,28(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x832cf37c
	goto loc_832CF37C;
loc_832CF378:
	// lwz r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_832CF37C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832cf3a0
	if (!ctx.cr6.eq) goto loc_832CF3A0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,3148
	ctx.r5.s64 = ctx.r11.s64 + 3148;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,583
	ctx.r7.s64 = 583;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF3A0;
	sub_8320CF10(ctx, base);
loc_832CF3A0:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x832cf3f0
	if (!ctx.cr6.lt) goto loc_832CF3F0;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r30,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r30.s64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_832CF3B8:
	// lwz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r9,r23,4
	ctx.r9.s64 = ctx.r23.s64 + 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r8,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r8.u8);
	// lwz r8,4(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r23,r9,8
	ctx.r23.s64 = ctx.r9.s64 + 8;
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x832cf3b8
	if (!ctx.cr0.eq) goto loc_832CF3B8;
loc_832CF3F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// divwu r10,r30,r29
	ctx.r10.u32 = ctx.r30.u32 / ctx.r29.u32;
	// addi r9,r24,11
	ctx.r9.s64 = ctx.r24.s64 + 11;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// subf r11,r10,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// twllei r29,0
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r29,0
	// divwu r5,r11,r29
	ctx.r5.u32 = ctx.r11.u32 / ctx.r29.u32;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x832cf008
	ctx.lr = 0x832CF434;
	sub_832CF008(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CF43C"))) PPC_WEAK_FUNC(sub_832CF43C);
PPC_FUNC_IMPL(__imp__sub_832CF43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CF440"))) PPC_WEAK_FUNC(sub_832CF440);
PPC_FUNC_IMPL(__imp__sub_832CF440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832CF448;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,3336
	ctx.r28.s64 = ctx.r10.s64 + 3336;
	// bne cr6,0x832cf498
	if (!ctx.cr6.eq) goto loc_832CF498;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3328
	ctx.r5.s64 = ctx.r11.s64 + 3328;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,641
	ctx.r7.s64 = 641;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF498;
	sub_8320CF10(ctx, base);
loc_832CF498:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x832cf4c4
	if (ctx.cr6.eq) goto loc_832CF4C4;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// beq cr6,0x832cf4c4
	if (ctx.cr6.eq) goto loc_832CF4C4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3268
	ctx.r5.s64 = ctx.r11.s64 + 3268;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,642
	ctx.r7.s64 = 642;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF4C4;
	sub_8320CF10(ctx, base);
loc_832CF4C4:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cf4ec
	if (!ctx.cr6.eq) goto loc_832CF4EC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3248
	ctx.r5.s64 = ctx.r11.s64 + 3248;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,643
	ctx.r7.s64 = 643;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF4EC;
	sub_8320CF10(ctx, base);
loc_832CF4EC:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cf514
	if (!ctx.cr6.eq) goto loc_832CF514;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3228
	ctx.r5.s64 = ctx.r11.s64 + 3228;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,644
	ctx.r7.s64 = 644;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF514;
	sub_8320CF10(ctx, base);
loc_832CF514:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x832cf524
	if (!ctx.cr6.eq) goto loc_832CF524;
	// lwz r26,28(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// b 0x832cf528
	goto loc_832CF528;
loc_832CF524:
	// lwz r26,32(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
loc_832CF528:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832cf54c
	if (!ctx.cr6.eq) goto loc_832CF54C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3428
	ctx.r5.s64 = ctx.r11.s64 + 3428;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,655
	ctx.r7.s64 = 655;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF54C;
	sub_8320CF10(ctx, base);
loc_832CF54C:
	// addi r11,r27,23
	ctx.r11.s64 = ctx.r27.s64 + 23;
	// add r10,r31,r24
	ctx.r10.u64 = ctx.r31.u64 + ctx.r24.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832cf568
	if (!ctx.cr6.gt) goto loc_832CF568;
	// subf r24,r31,r11
	ctx.r24.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_832CF568:
	// add r10,r31,r24
	ctx.r10.u64 = ctx.r31.u64 + ctx.r24.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x832cf5c4
	if (!ctx.cr6.lt) goto loc_832CF5C4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_832CF584:
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r9,r25,4
	ctx.r9.s64 = ctx.r25.s64 + 4;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stw r8,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r8.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r25,r9,4
	ctx.r25.s64 = ctx.r9.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne 0x832cf584
	if (!ctx.cr0.eq) goto loc_832CF584;
loc_832CF5C4:
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CF5D0"))) PPC_WEAK_FUNC(sub_832CF5D0);
PPC_FUNC_IMPL(__imp__sub_832CF5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x832CF5D8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r24,29
	ctx.r11.s64 = ctx.r24.s64 + 29;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwzx r28,r9,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,3336
	ctx.r26.s64 = ctx.r10.s64 + 3336;
	// divwu r21,r29,r28
	ctx.r21.u32 = ctx.r29.u32 / ctx.r28.u32;
	// twllei r28,0
	// bne cr6,0x832cf638
	if (!ctx.cr6.eq) goto loc_832CF638;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3328
	ctx.r5.s64 = ctx.r11.s64 + 3328;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,712
	ctx.r7.s64 = 712;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF638;
	sub_8320CF10(ctx, base);
loc_832CF638:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x832cf664
	if (ctx.cr6.eq) goto loc_832CF664;
	// cmpwi cr6,r24,5
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 5, ctx.xer);
	// beq cr6,0x832cf664
	if (ctx.cr6.eq) goto loc_832CF664;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3480
	ctx.r5.s64 = ctx.r11.s64 + 3480;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,713
	ctx.r7.s64 = 713;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF664;
	sub_8320CF10(ctx, base);
loc_832CF664:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cf68c
	if (!ctx.cr6.eq) goto loc_832CF68C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3460
	ctx.r5.s64 = ctx.r11.s64 + 3460;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,714
	ctx.r7.s64 = 714;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF68C;
	sub_8320CF10(ctx, base);
loc_832CF68C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cf6b4
	if (!ctx.cr6.eq) goto loc_832CF6B4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3440
	ctx.r5.s64 = ctx.r11.s64 + 3440;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,715
	ctx.r7.s64 = 715;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF6B4;
	sub_8320CF10(ctx, base);
loc_832CF6B4:
	// addi r11,r24,23
	ctx.r11.s64 = ctx.r24.s64 + 23;
	// add r25,r29,r22
	ctx.r25.u64 = ctx.r29.u64 + ctx.r22.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832cf6e8
	if (!ctx.cr6.gt) goto loc_832CF6E8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3160
	ctx.r5.s64 = ctx.r11.s64 + 3160;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,716
	ctx.r7.s64 = 716;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF6E8;
	sub_8320CF10(ctx, base);
loc_832CF6E8:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// bne cr6,0x832cf6f8
	if (!ctx.cr6.eq) goto loc_832CF6F8;
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// b 0x832cf6fc
	goto loc_832CF6FC;
loc_832CF6F8:
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
loc_832CF6FC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832cf720
	if (!ctx.cr6.eq) goto loc_832CF720;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3148
	ctx.r5.s64 = ctx.r11.s64 + 3148;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,728
	ctx.r7.s64 = 728;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF720;
	sub_8320CF10(ctx, base);
loc_832CF720:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x832cf778
	if (!ctx.cr6.lt) goto loc_832CF778;
loc_832CF72C:
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// andc r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// stwx r8,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r8.u32);
	// lwz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// bne cr6,0x832cf760
	if (!ctx.cr6.eq) goto loc_832CF760;
	// li r7,0
	ctx.r7.s64 = 0;
loc_832CF760:
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x832cf72c
	if (ctx.cr6.lt) goto loc_832CF72C;
loc_832CF778:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// divwu r10,r29,r28
	ctx.r10.u32 = ctx.r29.u32 / ctx.r28.u32;
	// addi r9,r24,11
	ctx.r9.s64 = ctx.r24.s64 + 11;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// subf r11,r10,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r10.s64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// twllei r28,0
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r28,0
	// divwu r5,r11,r28
	ctx.r5.u32 = ctx.r11.u32 / ctx.r28.u32;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x832cf008
	ctx.lr = 0x832CF7BC;
	sub_832CF008(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CF7C4"))) PPC_WEAK_FUNC(sub_832CF7C4);
PPC_FUNC_IMPL(__imp__sub_832CF7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CF7C8"))) PPC_WEAK_FUNC(sub_832CF7C8);
PPC_FUNC_IMPL(__imp__sub_832CF7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832CF7D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,3336
	ctx.r28.s64 = ctx.r10.s64 + 3336;
	// bne cr6,0x832cf820
	if (!ctx.cr6.eq) goto loc_832CF820;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3328
	ctx.r5.s64 = ctx.r11.s64 + 3328;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,786
	ctx.r7.s64 = 786;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF820;
	sub_8320CF10(ctx, base);
loc_832CF820:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x832cf84c
	if (ctx.cr6.eq) goto loc_832CF84C;
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// beq cr6,0x832cf84c
	if (ctx.cr6.eq) goto loc_832CF84C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3480
	ctx.r5.s64 = ctx.r11.s64 + 3480;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,787
	ctx.r7.s64 = 787;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF84C;
	sub_8320CF10(ctx, base);
loc_832CF84C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cf874
	if (!ctx.cr6.eq) goto loc_832CF874;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3460
	ctx.r5.s64 = ctx.r11.s64 + 3460;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,788
	ctx.r7.s64 = 788;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF874;
	sub_8320CF10(ctx, base);
loc_832CF874:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cf89c
	if (!ctx.cr6.eq) goto loc_832CF89C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3440
	ctx.r5.s64 = ctx.r11.s64 + 3440;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,789
	ctx.r7.s64 = 789;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF89C;
	sub_8320CF10(ctx, base);
loc_832CF89C:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x832cf8ac
	if (!ctx.cr6.eq) goto loc_832CF8AC;
	// lwz r25,36(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// b 0x832cf8b0
	goto loc_832CF8B0;
loc_832CF8AC:
	// lwz r25,40(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
loc_832CF8B0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x832cf8d4
	if (!ctx.cr6.eq) goto loc_832CF8D4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3428
	ctx.r5.s64 = ctx.r11.s64 + 3428;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,801
	ctx.r7.s64 = 801;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF8D4;
	sub_8320CF10(ctx, base);
loc_832CF8D4:
	// addi r11,r27,23
	ctx.r11.s64 = ctx.r27.s64 + 23;
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832cf8f0
	if (!ctx.cr6.gt) goto loc_832CF8F0;
	// subf r26,r30,r11
	ctx.r26.s64 = ctx.r11.s64 - ctx.r30.s64;
loc_832CF8F0:
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x832cf938
	if (!ctx.cr6.lt) goto loc_832CF938;
loc_832CF900:
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r9,r9,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// stw r9,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r9.u32);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// blt cr6,0x832cf900
	if (ctx.cr6.lt) goto loc_832CF900;
loc_832CF938:
	// stw r26,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CF944"))) PPC_WEAK_FUNC(sub_832CF944);
PPC_FUNC_IMPL(__imp__sub_832CF944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CF948"))) PPC_WEAK_FUNC(sub_832CF948);
PPC_FUNC_IMPL(__imp__sub_832CF948) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CF94C"))) PPC_WEAK_FUNC(sub_832CF94C);
PPC_FUNC_IMPL(__imp__sub_832CF94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CF950"))) PPC_WEAK_FUNC(sub_832CF950);
PPC_FUNC_IMPL(__imp__sub_832CF950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832CF954"))) PPC_WEAK_FUNC(sub_832CF954);
PPC_FUNC_IMPL(__imp__sub_832CF954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CF958"))) PPC_WEAK_FUNC(sub_832CF958);
PPC_FUNC_IMPL(__imp__sub_832CF958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832CF960;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x83217580
	ctx.lr = 0x832CF970;
	sub_83217580(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x83216aa0
	ctx.lr = 0x832CF978;
	sub_83216AA0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83217588
	ctx.lr = 0x832CF984;
	sub_83217588(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r31,r11,-21168
	ctx.r31.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,3336
	ctx.r26.s64 = ctx.r10.s64 + 3336;
	// bne cr6,0x832cf9bc
	if (!ctx.cr6.eq) goto loc_832CF9BC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3580
	ctx.r5.s64 = ctx.r11.s64 + 3580;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,84
	ctx.r7.s64 = 84;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF9BC;
	sub_8320CF10(ctx, base);
loc_832CF9BC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832cf9e0
	if (!ctx.cr6.eq) goto loc_832CF9E0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,85
	ctx.r7.s64 = 85;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CF9E0;
	sub_8320CF10(ctx, base);
loc_832CF9E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83217580
	ctx.lr = 0x832CF9E8;
	sub_83217580(ctx, base);
	// bl 0x83216a68
	ctx.lr = 0x832CF9EC;
	sub_83216A68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83217580
	ctx.lr = 0x832CF9F8;
	sub_83217580(ctx, base);
	// bl 0x83216a70
	ctx.lr = 0x832CF9FC;
	sub_83216A70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83217580
	ctx.lr = 0x832CFA08;
	sub_83217580(ctx, base);
	// bl 0x83216a88
	ctx.lr = 0x832CFA0C;
	sub_83216A88(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832cfa34
	if (!ctx.cr6.eq) goto loc_832CFA34;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3556
	ctx.r5.s64 = ctx.r11.s64 + 3556;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,90
	ctx.r7.s64 = 90;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFA34;
	sub_8320CF10(ctx, base);
loc_832CFA34:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832cfa58
	if (!ctx.cr6.eq) goto loc_832CFA58;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3540
	ctx.r5.s64 = ctx.r11.s64 + 3540;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,91
	ctx.r7.s64 = 91;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFA58;
	sub_8320CF10(ctx, base);
loc_832CFA58:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x832cfa7c
	if (!ctx.cr6.eq) goto loc_832CFA7C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,2428
	ctx.r5.s64 = ctx.r11.s64 + 2428;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,92
	ctx.r7.s64 = 92;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFA7C;
	sub_8320CF10(ctx, base);
loc_832CFA7C:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// li r4,444
	ctx.r4.s64 = 444;
	// lwz r3,16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CFA90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x832cfe20
	if (ctx.cr0.eq) goto loc_832CFE20;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832CFAB0;
	sub_82CB1160(ctx, base);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832CFAC0;
	sub_82CB1160(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832CFAD0;
	sub_82CB1160(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832CFAE0;
	sub_82CB1160(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFAF0;
	sub_832CEF78(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFB08;
	sub_832CEF78(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cef78
	ctx.lr = 0x832CFB1C;
	sub_832CEF78(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cef78
	ctx.lr = 0x832CFB30;
	sub_832CEF78(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFB48;
	sub_832CEF78(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFB60;
	sub_832CEF78(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cef78
	ctx.lr = 0x832CFB74;
	sub_832CEF78(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cef78
	ctx.lr = 0x832CFB88;
	sub_832CEF78(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFBA0;
	sub_832CEF78(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFBB8;
	sub_832CEF78(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFBD0;
	sub_832CEF78(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFBE8;
	sub_832CEF78(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFC00;
	sub_832CEF78(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x832cef78
	ctx.lr = 0x832CFC18;
	sub_832CEF78(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832cfe18
	if (ctx.cr6.eq) goto loc_832CFE18;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,255
	ctx.r4.s64 = 255;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r5,r11,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x82cb16f0
	ctx.lr = 0x832CFCE4;
	sub_82CB16F0(ctx, base);
	// stw r22,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r22.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832d2888
	ctx.lr = 0x832CFCF0;
	sub_832D2888(ctx, base);
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832eaf80
	ctx.lr = 0x832CFCFC;
	sub_832EAF80(ctx, base);
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83216ad0
	ctx.lr = 0x832CFD08;
	sub_83216AD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832cfd24
	if (ctx.cr0.eq) goto loc_832CFD24;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832cfd24
	if (ctx.cr0.eq) goto loc_832CFD24;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832CFD24:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832cfdd8
	if (ctx.cr0.eq) goto loc_832CFDD8;
	// bl 0x83216ac8
	ctx.lr = 0x832CFD38;
	sub_83216AC8(ctx, base);
	// addi r30,r31,296
	ctx.r30.s64 = ctx.r31.s64 + 296;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// li r27,5
	ctx.r27.s64 = 5;
loc_832CFD44:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r28,-4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832CFD6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8330acd0
	ctx.lr = 0x832CFD7C;
	sub_8330ACD0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r28,-1
	ctx.r9.s64 = ctx.r28.s64 + -1;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// stw r11,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r11.u32);
	// lwz r11,-12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// stw r11,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r11.u32);
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// stw r11,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r11.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x832cfd44
	if (!ctx.cr0.eq) goto loc_832CFD44;
	// b 0x832cfe10
	goto loc_832CFE10;
loc_832CFDD8:
	// bl 0x83216ac8
	ctx.lr = 0x832CFDDC;
	sub_83216AC8(ctx, base);
	// addi r10,r31,292
	ctx.r10.s64 = ctx.r31.s64 + 292;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r9,5
	ctx.r9.s64 = 5;
loc_832CFDE8:
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bne 0x832cfde8
	if (!ctx.cr0.eq) goto loc_832CFDE8;
loc_832CFE10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x832cfe24
	goto loc_832CFE24;
loc_832CFE18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cf0c0
	ctx.lr = 0x832CFE20;
	sub_832CF0C0(ctx, base);
loc_832CFE20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832CFE24:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832CFE2C"))) PPC_WEAK_FUNC(sub_832CFE2C);
PPC_FUNC_IMPL(__imp__sub_832CFE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832CFE30"))) PPC_WEAK_FUNC(sub_832CFE30);
PPC_FUNC_IMPL(__imp__sub_832CFE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832CFE38;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r24,r11,-21168
	ctx.r24.s64 = ctx.r11.s64 + -21168;
	// addi r23,r10,3336
	ctx.r23.s64 = ctx.r10.s64 + 3336;
	// bne cr6,0x832cfe78
	if (!ctx.cr6.eq) goto loc_832CFE78;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,4016
	ctx.r5.s64 = ctx.r11.s64 + 4016;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,351
	ctx.r7.s64 = 351;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFE78;
	sub_8320CF10(ctx, base);
loc_832CFE78:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832cfe9c
	if (!ctx.cr6.eq) goto loc_832CFE9C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,4004
	ctx.r5.s64 = ctx.r11.s64 + 4004;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,352
	ctx.r7.s64 = 352;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFE9C;
	sub_8320CF10(ctx, base);
loc_832CFE9C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832cfec4
	if (!ctx.cr6.eq) goto loc_832CFEC4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,3976
	ctx.r5.s64 = ctx.r11.s64 + 3976;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,353
	ctx.r7.s64 = 353;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFEC4;
	sub_8320CF10(ctx, base);
loc_832CFEC4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832cfeec
	if (!ctx.cr0.eq) goto loc_832CFEEC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,3928
	ctx.r5.s64 = ctx.r11.s64 + 3928;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,354
	ctx.r7.s64 = 354;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFEEC;
	sub_8320CF10(ctx, base);
loc_832CFEEC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832cff14
	if (!ctx.cr0.eq) goto loc_832CFF14;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,3884
	ctx.r5.s64 = ctx.r11.s64 + 3884;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,355
	ctx.r7.s64 = 355;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFF14;
	sub_8320CF10(ctx, base);
loc_832CFF14:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832d00b4
	if (ctx.cr0.eq) goto loc_832D00B4;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832cff4c
	if (ctx.cr6.eq) goto loc_832CFF4C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,3816
	ctx.r5.s64 = ctx.r11.s64 + 3816;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,362
	ctx.r7.s64 = 362;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFF4C;
	sub_8320CF10(ctx, base);
loc_832CFF4C:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832cff78
	if (ctx.cr6.eq) goto loc_832CFF78;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,3744
	ctx.r5.s64 = ctx.r11.s64 + 3744;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,364
	ctx.r7.s64 = 364;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFF78;
	sub_8320CF10(ctx, base);
loc_832CFF78:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82cb1160
	ctx.lr = 0x832CFF8C;
	sub_82CB1160(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r11,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x832CFFA4;
	sub_82CB1160(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r28,r31,140
	ctx.r28.s64 = ctx.r31.s64 + 140;
	// addi r29,r30,92
	ctx.r29.s64 = ctx.r30.s64 + 92;
	// subf r22,r30,r31
	ctx.r22.s64 = ctx.r31.s64 - ctx.r30.s64;
	// li r27,6
	ctx.r27.s64 = 6;
	// addi r26,r11,3664
	ctx.r26.s64 = ctx.r11.s64 + 3664;
	// addi r25,r10,3592
	ctx.r25.s64 = ctx.r10.s64 + 3592;
loc_832CFFC4:
	// lwzx r11,r22,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r29.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x832cffec
	if (ctx.cr6.eq) goto loc_832CFFEC;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,375
	ctx.r7.s64 = 375;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832CFFEC;
	sub_8320CF10(ctx, base);
loc_832CFFEC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x832d0014
	if (ctx.cr6.eq) goto loc_832D0014;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,378
	ctx.r7.s64 = 378;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0014;
	sub_8320CF10(ctx, base);
loc_832D0014:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,-96(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -96);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// lwz r3,-48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -48);
	// rlwinm r5,r11,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x832D002C;
	sub_82CB1160(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x832cffc4
	if (!ctx.cr0.eq) goto loc_832CFFC4;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82cb1160
	ctx.lr = 0x832D0050;
	sub_82CB1160(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82cb1160
	ctx.lr = 0x832D0064;
	sub_82CB1160(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82cb1160
	ctx.lr = 0x832D0078;
	sub_82CB1160(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x82cb1160
	ctx.lr = 0x832D008C;
	sub_82CB1160(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r5,r11,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82cb1160
	ctx.lr = 0x832D00A0;
	sub_82CB1160(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r5,r11,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82cb1160
	ctx.lr = 0x832D00B4;
	sub_82CB1160(ctx, base);
loc_832D00B4:
	// addic. r29,r31,236
	ctx.xer.ca = ctx.r31.u32 > 4294967059;
	ctx.r29.s64 = ctx.r31.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x832d00d8
	if (!ctx.cr0.eq) goto loc_832D00D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,403
	ctx.r7.s64 = 403;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D00D8;
	sub_8320CF10(ctx, base);
loc_832D00D8:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D00F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D00FC"))) PPC_WEAK_FUNC(sub_832D00FC);
PPC_FUNC_IMPL(__imp__sub_832D00FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D0100"))) PPC_WEAK_FUNC(sub_832D0100);
PPC_FUNC_IMPL(__imp__sub_832D0100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832D0108;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r27,29
	ctx.r11.s64 = ctx.r27.s64 + 29;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwzx r29,r9,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,3336
	ctx.r24.s64 = ctx.r10.s64 + 3336;
	// divwu r22,r30,r29
	ctx.r22.u32 = ctx.r30.u32 / ctx.r29.u32;
	// twllei r29,0
	// bne cr6,0x832d0168
	if (!ctx.cr6.eq) goto loc_832D0168;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-20840
	ctx.r5.s64 = ctx.r11.s64 + -20840;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,442
	ctx.r7.s64 = 442;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0168;
	sub_8320CF10(ctx, base);
loc_832D0168:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x832d0194
	if (ctx.cr6.eq) goto loc_832D0194;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x832d0194
	if (ctx.cr6.eq) goto loc_832D0194;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,4152
	ctx.r5.s64 = ctx.r11.s64 + 4152;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,443
	ctx.r7.s64 = 443;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0194;
	sub_8320CF10(ctx, base);
loc_832D0194:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d01bc
	if (!ctx.cr6.eq) goto loc_832D01BC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,4128
	ctx.r5.s64 = ctx.r11.s64 + 4128;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,444
	ctx.r7.s64 = 444;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D01BC;
	sub_8320CF10(ctx, base);
loc_832D01BC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d01e4
	if (!ctx.cr6.eq) goto loc_832D01E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,4104
	ctx.r5.s64 = ctx.r11.s64 + 4104;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,445
	ctx.r7.s64 = 445;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D01E4;
	sub_8320CF10(ctx, base);
loc_832D01E4:
	// addi r11,r27,23
	ctx.r11.s64 = ctx.r27.s64 + 23;
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832d0218
	if (!ctx.cr6.gt) goto loc_832D0218;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,4032
	ctx.r5.s64 = ctx.r11.s64 + 4032;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,446
	ctx.r7.s64 = 446;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0218;
	sub_8320CF10(ctx, base);
loc_832D0218:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// bne cr6,0x832d022c
	if (!ctx.cr6.eq) goto loc_832D022C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// b 0x832d0230
	goto loc_832D0230;
loc_832D022C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_832D0230:
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d0258
	if (!ctx.cr6.eq) goto loc_832D0258;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,3148
	ctx.r5.s64 = ctx.r11.s64 + 3148;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,458
	ctx.r7.s64 = 458;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0258;
	sub_8320CF10(ctx, base);
loc_832D0258:
	// rlwinm r5,r26,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D0268;
	sub_82CB1160(ctx, base);
	// divwu r11,r30,r29
	ctx.r11.u32 = ctx.r30.u32 / ctx.r29.u32;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r27,11
	ctx.r10.s64 = ctx.r27.s64 + 11;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// twllei r29,0
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r29,0
	// divwu r5,r11,r29
	ctx.r5.u32 = ctx.r11.u32 / ctx.r29.u32;
	// ori r11,r9,2
	ctx.r11.u64 = ctx.r9.u64 | 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x832cf008
	ctx.lr = 0x832D02AC;
	sub_832CF008(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D02B4"))) PPC_WEAK_FUNC(sub_832D02B4);
PPC_FUNC_IMPL(__imp__sub_832D02B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D02B8"))) PPC_WEAK_FUNC(sub_832D02B8);
PPC_FUNC_IMPL(__imp__sub_832D02B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832D02C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,3336
	ctx.r27.s64 = ctx.r10.s64 + 3336;
	// bne cr6,0x832d0310
	if (!ctx.cr6.eq) goto loc_832D0310;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-20840
	ctx.r5.s64 = ctx.r11.s64 + -20840;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,505
	ctx.r7.s64 = 505;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0310;
	sub_8320CF10(ctx, base);
loc_832D0310:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x832d033c
	if (ctx.cr6.eq) goto loc_832D033C;
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// beq cr6,0x832d033c
	if (ctx.cr6.eq) goto loc_832D033C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,4152
	ctx.r5.s64 = ctx.r11.s64 + 4152;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,506
	ctx.r7.s64 = 506;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D033C;
	sub_8320CF10(ctx, base);
loc_832D033C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d0364
	if (!ctx.cr6.eq) goto loc_832D0364;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,4128
	ctx.r5.s64 = ctx.r11.s64 + 4128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,507
	ctx.r7.s64 = 507;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0364;
	sub_8320CF10(ctx, base);
loc_832D0364:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d038c
	if (!ctx.cr6.eq) goto loc_832D038C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,4104
	ctx.r5.s64 = ctx.r11.s64 + 4104;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,508
	ctx.r7.s64 = 508;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D038C;
	sub_8320CF10(ctx, base);
loc_832D038C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x832d03a4
	if (!ctx.cr6.eq) goto loc_832D03A4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x832d03b0
	goto loc_832D03B0;
loc_832D03A4:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_832D03B0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d03d4
	if (!ctx.cr6.eq) goto loc_832D03D4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,3428
	ctx.r5.s64 = ctx.r11.s64 + 3428;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,519
	ctx.r7.s64 = 519;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D03D4;
	sub_8320CF10(ctx, base);
loc_832D03D4:
	// addi r11,r25,23
	ctx.r11.s64 = ctx.r25.s64 + 23;
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832d03f0
	if (!ctx.cr6.gt) goto loc_832D03F0;
	// subf r26,r30,r11
	ctx.r26.s64 = ctx.r11.s64 - ctx.r30.s64;
loc_832D03F0:
	// rlwinm r5,r26,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D0400;
	sub_82CB1160(ctx, base);
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D040C"))) PPC_WEAK_FUNC(sub_832D040C);
PPC_FUNC_IMPL(__imp__sub_832D040C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D0410"))) PPC_WEAK_FUNC(sub_832D0410);
PPC_FUNC_IMPL(__imp__sub_832D0410) {
	PPC_FUNC_PROLOGUE();
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D0418"))) PPC_WEAK_FUNC(sub_832D0418);
PPC_FUNC_IMPL(__imp__sub_832D0418) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D0420"))) PPC_WEAK_FUNC(sub_832D0420);
PPC_FUNC_IMPL(__imp__sub_832D0420) {
	PPC_FUNC_PROLOGUE();
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// li r10,6
	ctx.r10.s64 = 6;
loc_832D042C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,32(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bne 0x832d042c
	if (!ctx.cr0.eq) goto loc_832D042C;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D0478"))) PPC_WEAK_FUNC(sub_832D0478);
PPC_FUNC_IMPL(__imp__sub_832D0478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r8,420(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// lwz r9,356(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// mulli r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 * 6;
	// lwz r6,324(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// divwu r8,r6,r7
	ctx.r8.u32 = ctx.r6.u32 / ctx.r7.u32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D04B8"))) PPC_WEAK_FUNC(sub_832D04B8);
PPC_FUNC_IMPL(__imp__sub_832D04B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// li r6,6
	ctx.r6.s64 = 6;
	// lwz r7,420(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// rlwinm r8,r10,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// lwz r5,324(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mulli r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 * 6;
	// lwz r9,356(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// divwu r8,r5,r6
	ctx.r8.u32 = ctx.r5.u32 / ctx.r6.u32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D0510"))) PPC_WEAK_FUNC(sub_832D0510);
PPC_FUNC_IMPL(__imp__sub_832D0510) {
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
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r9,r9,11008
	ctx.r9.u64 = ctx.r9.u64 | 11008;
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r9,r8,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x832D0568;
	sub_82CB1160(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
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

__attribute__((alias("__imp__sub_832D0588"))) PPC_WEAK_FUNC(sub_832D0588);
PPC_FUNC_IMPL(__imp__sub_832D0588) {
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
	// lis r11,-16368
	ctx.r11.s64 = -1072693248;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r8,r11,11520
	ctx.r8.u64 = ctx.r11.u64 | 11520;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D05C8;
	sub_82CB1160(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
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

__attribute__((alias("__imp__sub_832D05E0"))) PPC_WEAK_FUNC(sub_832D05E0);
PPC_FUNC_IMPL(__imp__sub_832D05E0) {
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
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// oris r10,r4,3
	ctx.r10.u64 = ctx.r4.u64 | 196608;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwimi r9,r5,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// rlwinm r30,r5,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D0628;
	sub_82CB1160(ctx, base);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
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

__attribute__((alias("__imp__sub_832D0644"))) PPC_WEAK_FUNC(sub_832D0644);
PPC_FUNC_IMPL(__imp__sub_832D0644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D0648"))) PPC_WEAK_FUNC(sub_832D0648);
PPC_FUNC_IMPL(__imp__sub_832D0648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D0650;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r24,r31,27,5,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r25,r26,27,5,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,5192
	ctx.r27.s64 = ctx.r10.s64 + 5192;
	// bne cr6,0x832d06a0
	if (!ctx.cr6.eq) goto loc_832D06A0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5180
	ctx.r5.s64 = ctx.r11.s64 + 5180;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,665
	ctx.r7.s64 = 665;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D06A0;
	sub_8320CF10(ctx, base);
loc_832D06A0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d06c4
	if (!ctx.cr6.eq) goto loc_832D06C4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5172
	ctx.r5.s64 = ctx.r11.s64 + 5172;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,666
	ctx.r7.s64 = 666;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D06C4;
	sub_8320CF10(ctx, base);
loc_832D06C4:
	// clrlwi. r11,r31,27
	ctx.r11.u64 = ctx.r31.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832d06e8
	if (ctx.cr0.eq) goto loc_832D06E8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5148
	ctx.r5.s64 = ctx.r11.s64 + 5148;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,667
	ctx.r7.s64 = 667;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D06E8;
	sub_8320CF10(ctx, base);
loc_832D06E8:
	// clrlwi. r11,r26,27
	ctx.r11.u64 = ctx.r26.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832d070c
	if (ctx.cr0.eq) goto loc_832D070C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5128
	ctx.r5.s64 = ctx.r11.s64 + 5128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,668
	ctx.r7.s64 = 668;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D070C;
	sub_8320CF10(ctx, base);
loc_832D070C:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// oris r10,r24,2
	ctx.r10.u64 = ctx.r24.u64 | 131072;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// rlwimi r9,r25,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r25.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// rlwinm r30,r25,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D0740;
	sub_82CB1160(ctx, base);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D074C"))) PPC_WEAK_FUNC(sub_832D074C);
PPC_FUNC_IMPL(__imp__sub_832D074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D0750"))) PPC_WEAK_FUNC(sub_832D0750);
PPC_FUNC_IMPL(__imp__sub_832D0750) {
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
	// lis r9,-16378
	ctx.r9.s64 = -1073348608;
	// mulli r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 * 6;
	// ori r9,r9,11520
	ctx.r9.u64 = ctx.r9.u64 | 11520;
	// oris r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 65536;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D0794;
	sub_82CB1160(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
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

__attribute__((alias("__imp__sub_832D07AC"))) PPC_WEAK_FUNC(sub_832D07AC);
PPC_FUNC_IMPL(__imp__sub_832D07AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D07B0"))) PPC_WEAK_FUNC(sub_832D07B0);
PPC_FUNC_IMPL(__imp__sub_832D07B0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D07C4"))) PPC_WEAK_FUNC(sub_832D07C4);
PPC_FUNC_IMPL(__imp__sub_832D07C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D07C8"))) PPC_WEAK_FUNC(sub_832D07C8);
PPC_FUNC_IMPL(__imp__sub_832D07C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D07D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x8330b6f0
	ctx.lr = 0x832D07E8;
	sub_8330B6F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d0814
	if (!ctx.cr0.eq) goto loc_832D0814;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,5192
	ctx.r6.s64 = ctx.r11.s64 + 5192;
	// addi r5,r10,5288
	ctx.r5.s64 = ctx.r10.s64 + 5288;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,761
	ctx.r7.s64 = 761;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0814;
	sub_8320CF10(ctx, base);
loc_832D0814:
	// li r28,8
	ctx.r28.s64 = 8;
	// addi r29,r31,516
	ctx.r29.s64 = ctx.r31.s64 + 516;
loc_832D081C:
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d084c
	if (!ctx.cr6.eq) goto loc_832D084C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d084c
	if (!ctx.cr6.eq) goto loc_832D084C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d084c
	if (!ctx.cr6.eq) goto loc_832D084C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d087c
	if (ctx.cr6.eq) goto loc_832D087C;
loc_832D084C:
	// lis r11,-16368
	ctx.r11.s64 = -1072693248;
	// rlwinm r10,r27,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3FC;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D0878;
	sub_82CB1160(ctx, base);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
loc_832D087C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bne 0x832d081c
	if (!ctx.cr0.eq) goto loc_832D081C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D08A4"))) PPC_WEAK_FUNC(sub_832D08A4);
PPC_FUNC_IMPL(__imp__sub_832D08A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D08A8"))) PPC_WEAK_FUNC(sub_832D08A8);
PPC_FUNC_IMPL(__imp__sub_832D08A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D08B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8330b7e0
	ctx.lr = 0x832D08C4;
	sub_8330B7E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d08f0
	if (!ctx.cr0.eq) goto loc_832D08F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,5192
	ctx.r6.s64 = ctx.r11.s64 + 5192;
	// addi r5,r10,5288
	ctx.r5.s64 = ctx.r10.s64 + 5288;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,798
	ctx.r7.s64 = 798;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D08F0;
	sub_8320CF10(ctx, base);
loc_832D08F0:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,4
	ctx.r29.s64 = 4;
loc_832D08F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d091c
	if (ctx.cr6.eq) goto loc_832D091C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d0648
	ctx.lr = 0x832D0918;
	sub_832D0648(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_832D091C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x832d08f8
	if (!ctx.cr0.eq) goto loc_832D08F8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D0938"))) PPC_WEAK_FUNC(sub_832D0938);
PPC_FUNC_IMPL(__imp__sub_832D0938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D0940;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8330cd48
	ctx.lr = 0x832D0954;
	sub_8330CD48(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x832d0980
	if (!ctx.cr0.eq) goto loc_832D0980;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,5192
	ctx.r6.s64 = ctx.r11.s64 + 5192;
	// addi r5,r10,5304
	ctx.r5.s64 = ctx.r10.s64 + 5304;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1047
	ctx.r7.s64 = 1047;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0980;
	sub_8320CF10(ctx, base);
loc_832D0980:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,32
	ctx.r28.s64 = 32;
loc_832D0988:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d09c4
	if (ctx.cr6.eq) goto loc_832D09C4;
	// lis r11,-16378
	ctx.r11.s64 = -1073348608;
	// oris r10,r31,1
	ctx.r10.u64 = ctx.r31.u64 | 65536;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D09C0;
	sub_82CB1160(ctx, base);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
loc_832D09C4:
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bne 0x832d0988
	if (!ctx.cr0.eq) goto loc_832D0988;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D09E0"))) PPC_WEAK_FUNC(sub_832D09E0);
PPC_FUNC_IMPL(__imp__sub_832D09E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832D09E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,416(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 416);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8330cf58
	ctx.lr = 0x832D0A00;
	sub_8330CF58(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832d0a2c
	if (!ctx.cr0.eq) goto loc_832D0A2C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,5192
	ctx.r6.s64 = ctx.r11.s64 + 5192;
	// addi r5,r10,5316
	ctx.r5.s64 = ctx.r10.s64 + 5316;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1084
	ctx.r7.s64 = 1084;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0A2C;
	sub_8320CF10(ctx, base);
loc_832D0A2C:
	// lis r11,-16363
	ctx.r11.s64 = -1072365568;
	// oris r10,r29,4
	ctx.r10.u64 = ctx.r29.u64 | 262144;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r5,84
	ctx.r5.s64 = 84;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D0A58;
	sub_82CB1160(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D0A64"))) PPC_WEAK_FUNC(sub_832D0A64);
PPC_FUNC_IMPL(__imp__sub_832D0A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D0A68"))) PPC_WEAK_FUNC(sub_832D0A68);
PPC_FUNC_IMPL(__imp__sub_832D0A68) {
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
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D0A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_832D0AA0"))) PPC_WEAK_FUNC(sub_832D0AA0);
PPC_FUNC_IMPL(__imp__sub_832D0AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D0AA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,5192
	ctx.r29.s64 = ctx.r10.s64 + 5192;
	// bne cr6,0x832d0aec
	if (!ctx.cr6.eq) goto loc_832D0AEC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1263
	ctx.r7.s64 = 1263;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0AEC;
	sub_8320CF10(ctx, base);
loc_832D0AEC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d0b10
	if (!ctx.cr6.eq) goto loc_832D0B10;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5344
	ctx.r5.s64 = ctx.r11.s64 + 5344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1264
	ctx.r7.s64 = 1264;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0B10;
	sub_8320CF10(ctx, base);
loc_832D0B10:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d0b34
	if (!ctx.cr6.eq) goto loc_832D0B34;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5328
	ctx.r5.s64 = ctx.r11.s64 + 5328;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1265
	ctx.r7.s64 = 1265;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0B34;
	sub_8320CF10(ctx, base);
loc_832D0B34:
	// addic. r31,r31,236
	ctx.xer.ca = ctx.r31.u32 > 4294967059;
	ctx.r31.s64 = ctx.r31.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d0b58
	if (!ctx.cr0.eq) goto loc_832D0B58;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1268
	ctx.r7.s64 = 1268;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0B58;
	sub_8320CF10(ctx, base);
loc_832D0B58:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x832d6480
	ctx.lr = 0x832D0B68;
	sub_832D6480(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x832d0bac
	if (ctx.cr0.eq) goto loc_832D0BAC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D0B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,15104
	ctx.r11.u64 = ctx.r11.u64 | 15104;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D0BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832D0BAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D0BB8"))) PPC_WEAK_FUNC(sub_832D0BB8);
PPC_FUNC_IMPL(__imp__sub_832D0BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D0BC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,5192
	ctx.r27.s64 = ctx.r10.s64 + 5192;
	// bne cr6,0x832d0c00
	if (!ctx.cr6.eq) goto loc_832D0C00;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1337
	ctx.r7.s64 = 1337;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0C00;
	sub_8320CF10(ctx, base);
loc_832D0C00:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d0c24
	if (!ctx.cr6.eq) goto loc_832D0C24;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5344
	ctx.r5.s64 = ctx.r11.s64 + 5344;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1338
	ctx.r7.s64 = 1338;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0C24;
	sub_8320CF10(ctx, base);
loc_832D0C24:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d0c48
	if (!ctx.cr6.eq) goto loc_832D0C48;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5328
	ctx.r5.s64 = ctx.r11.s64 + 5328;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1339
	ctx.r7.s64 = 1339;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0C48;
	sub_8320CF10(ctx, base);
loc_832D0C48:
	// addic. r29,r30,236
	ctx.xer.ca = ctx.r30.u32 > 4294967059;
	ctx.r29.s64 = ctx.r30.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x832d0c6c
	if (!ctx.cr0.eq) goto loc_832D0C6C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1342
	ctx.r7.s64 = 1342;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0C6C;
	sub_8320CF10(ctx, base);
loc_832D0C6C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D0C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-16373
	ctx.r10.s64 = -1073020928;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r10,9472
	ctx.r10.u64 = ctx.r10.u64 | 9472;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r5,32(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r6,16(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_832D0CCC:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x832d0ccc
	if (!ctx.cr0.eq) goto loc_832D0CCC;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subf r10,r7,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// srawi r30,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r30,13
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 13, ctx.xer);
	// ble cr6,0x832d0d60
	if (!ctx.cr6.gt) goto loc_832D0D60;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5372
	ctx.r5.s64 = ctx.r11.s64 + 5372;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1394
	ctx.r7.s64 = 1394;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0D60;
	sub_8320CF10(ctx, base);
loc_832D0D60:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D0D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6660
	ctx.lr = 0x832D0D84;
	sub_832D6660(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D0D90"))) PPC_WEAK_FUNC(sub_832D0D90);
PPC_FUNC_IMPL(__imp__sub_832D0D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832D0D98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r31,29
	ctx.r11.s64 = ctx.r31.s64 + 29;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,2584
	ctx.r27.s64 = ctx.r10.s64 + 2584;
	// lwzx r11,r9,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// divwu r29,r5,r11
	ctx.r29.u32 = ctx.r5.u32 / ctx.r11.u32;
	// twllei r11,0
	// blt cr6,0x832d0dec
	if (ctx.cr6.lt) goto loc_832D0DEC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5504
	ctx.r5.s64 = ctx.r11.s64 + 5504;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,312
	ctx.r7.s64 = 312;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0DEC;
	sub_8320CF10(ctx, base);
loc_832D0DEC:
	// addi r11,r31,11
	ctx.r11.s64 = ctx.r31.s64 + 11;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d0e1c
	if (!ctx.cr6.eq) goto loc_832D0E1C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5468
	ctx.r5.s64 = ctx.r11.s64 + 5468;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,313
	ctx.r7.s64 = 313;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0E1C;
	sub_8320CF10(ctx, base);
loc_832D0E1C:
	// addi r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 35;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d0e4c
	if (ctx.cr6.lt) goto loc_832D0E4C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5408
	ctx.r5.s64 = ctx.r11.s64 + 5408;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,314
	ctx.r7.s64 = 314;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0E4C;
	sub_8320CF10(ctx, base);
loc_832D0E4C:
	// lwzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// rlwinm r10,r29,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r29,27
	ctx.r9.u64 = ctx.r29.u32 & 0x1F;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D0E6C"))) PPC_WEAK_FUNC(sub_832D0E6C);
PPC_FUNC_IMPL(__imp__sub_832D0E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D0E70"))) PPC_WEAK_FUNC(sub_832D0E70);
PPC_FUNC_IMPL(__imp__sub_832D0E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D0E78;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,5192
	ctx.r27.s64 = ctx.r10.s64 + 5192;
	// bne cr6,0x832d0eb8
	if (!ctx.cr6.eq) goto loc_832D0EB8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1450
	ctx.r7.s64 = 1450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0EB8;
	sub_8320CF10(ctx, base);
loc_832D0EB8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d0edc
	if (!ctx.cr6.eq) goto loc_832D0EDC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5344
	ctx.r5.s64 = ctx.r11.s64 + 5344;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1451
	ctx.r7.s64 = 1451;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0EDC;
	sub_8320CF10(ctx, base);
loc_832D0EDC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d0f00
	if (!ctx.cr6.eq) goto loc_832D0F00;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5328
	ctx.r5.s64 = ctx.r11.s64 + 5328;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1452
	ctx.r7.s64 = 1452;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0F00;
	sub_8320CF10(ctx, base);
loc_832D0F00:
	// addic. r29,r30,236
	ctx.xer.ca = ctx.r30.u32 > 4294967059;
	ctx.r29.s64 = ctx.r30.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x832d0f24
	if (!ctx.cr0.eq) goto loc_832D0F24;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1455
	ctx.r7.s64 = 1455;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D0F24;
	sub_8320CF10(ctx, base);
loc_832D0F24:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D0F38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-16373
	ctx.r10.s64 = -1073020928;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r10,9472
	ctx.r10.u64 = ctx.r10.u64 | 9472;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r5,32(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r6,16(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_832D0F84:
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r5,32(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r6,16(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x832d0f84
	if (!ctx.cr0.eq) goto loc_832D0F84;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// ori r9,r9,9984
	ctx.r9.u64 = ctx.r9.u64 | 9984;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subf r10,r7,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// srawi r30,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// ble cr6,0x832d101c
	if (!ctx.cr6.gt) goto loc_832D101C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5372
	ctx.r5.s64 = ctx.r11.s64 + 5372;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1504
	ctx.r7.s64 = 1504;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D101C;
	sub_8320CF10(ctx, base);
loc_832D101C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d6660
	ctx.lr = 0x832D1040;
	sub_832D6660(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D104C"))) PPC_WEAK_FUNC(sub_832D104C);
PPC_FUNC_IMPL(__imp__sub_832D104C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D1050"))) PPC_WEAK_FUNC(sub_832D1050);
PPC_FUNC_IMPL(__imp__sub_832D1050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832D1058;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r31,29
	ctx.r11.s64 = ctx.r31.s64 + 29;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,2584
	ctx.r27.s64 = ctx.r10.s64 + 2584;
	// lwzx r11,r9,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// divwu r29,r5,r11
	ctx.r29.u32 = ctx.r5.u32 / ctx.r11.u32;
	// twllei r11,0
	// blt cr6,0x832d10ac
	if (ctx.cr6.lt) goto loc_832D10AC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5504
	ctx.r5.s64 = ctx.r11.s64 + 5504;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,347
	ctx.r7.s64 = 347;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D10AC;
	sub_8320CF10(ctx, base);
loc_832D10AC:
	// addi r11,r31,11
	ctx.r11.s64 = ctx.r31.s64 + 11;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d10dc
	if (!ctx.cr6.eq) goto loc_832D10DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5468
	ctx.r5.s64 = ctx.r11.s64 + 5468;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,348
	ctx.r7.s64 = 348;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D10DC;
	sub_8320CF10(ctx, base);
loc_832D10DC:
	// addi r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 35;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d110c
	if (ctx.cr6.lt) goto loc_832D110C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5408
	ctx.r5.s64 = ctx.r11.s64 + 5408;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,349
	ctx.r7.s64 = 349;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D110C;
	sub_8320CF10(ctx, base);
loc_832D110C:
	// lwzx r10,r26,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// rlwinm r11,r29,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r9,r29,27
	ctx.r9.u64 = ctx.r29.u32 & 0x1F;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D1134"))) PPC_WEAK_FUNC(sub_832D1134);
PPC_FUNC_IMPL(__imp__sub_832D1134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D1138"))) PPC_WEAK_FUNC(sub_832D1138);
PPC_FUNC_IMPL(__imp__sub_832D1138) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D1140"))) PPC_WEAK_FUNC(sub_832D1140);
PPC_FUNC_IMPL(__imp__sub_832D1140) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D1148"))) PPC_WEAK_FUNC(sub_832D1148);
PPC_FUNC_IMPL(__imp__sub_832D1148) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D1150"))) PPC_WEAK_FUNC(sub_832D1150);
PPC_FUNC_IMPL(__imp__sub_832D1150) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D1158"))) PPC_WEAK_FUNC(sub_832D1158);
PPC_FUNC_IMPL(__imp__sub_832D1158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x832D1160;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// addi r15,r11,-21168
	ctx.r15.s64 = ctx.r11.s64 + -21168;
	// addi r14,r10,5192
	ctx.r14.s64 = ctx.r10.s64 + 5192;
	// bne cr6,0x832d11a8
	if (!ctx.cr6.eq) goto loc_832D11A8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r7,1562
	ctx.r7.s64 = 1562;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D11A8;
	sub_8320CF10(ctx, base);
loc_832D11A8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x832d11cc
	if (!ctx.cr6.eq) goto loc_832D11CC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r11,5344
	ctx.r5.s64 = ctx.r11.s64 + 5344;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r7,1563
	ctx.r7.s64 = 1563;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D11CC;
	sub_8320CF10(ctx, base);
loc_832D11CC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d11f0
	if (!ctx.cr6.eq) goto loc_832D11F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r11,5328
	ctx.r5.s64 = ctx.r11.s64 + 5328;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r7,1564
	ctx.r7.s64 = 1564;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D11F0;
	sub_8320CF10(ctx, base);
loc_832D11F0:
	// addic. r17,r31,236
	ctx.xer.ca = ctx.r31.u32 > 4294967059;
	ctx.r17.s64 = ctx.r31.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne 0x832d1214
	if (!ctx.cr0.eq) goto loc_832D1214;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r7,1567
	ctx.r7.s64 = 1567;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1214;
	sub_8320CF10(ctx, base);
loc_832D1214:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// bl 0x832ceb20
	ctx.lr = 0x832D1220;
	sub_832CEB20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832d1230
	if (ctx.cr6.eq) goto loc_832D1230;
	// li r22,4092
	ctx.r22.s64 = 4092;
loc_832D1230:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83217580
	ctx.lr = 0x832D1238;
	sub_83217580(ctx, base);
	// bl 0x83216ad0
	ctx.lr = 0x832D123C;
	sub_83216AD0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x832d0420
	ctx.lr = 0x832D1248;
	sub_832D0420(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// rlwinm r4,r23,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// lwz r3,4(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D127C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-16373
	ctx.r11.s64 = -1073020928;
	// li r24,0
	ctx.r24.s64 = 0;
	// ori r11,r11,9472
	ctx.r11.u64 = ctx.r11.u64 | 9472;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// li r26,16
	ctx.r26.s64 = 16;
	// addi r25,r11,4216
	ctx.r25.s64 = ctx.r11.s64 + 4216;
loc_832D12A4:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r20.u32);
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x832ceba0
	ctx.lr = 0x832D12BC;
	sub_832CEBA0(ctx, base);
	// and. r11,r3,r22
	ctx.r11.u64 = ctx.r3.u64 & ctx.r22.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832d1314
	if (ctx.cr0.eq) goto loc_832D1314;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832d130c
	if (ctx.cr6.eq) goto loc_832D130C;
	// mulli r10,r27,152
	ctx.r10.s64 = ctx.r27.s64 * 152;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
loc_832D12DC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x832d12fc
	if (ctx.cr6.eq) goto loc_832D12FC;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r31,r8,4
	ctx.r31.s64 = ctx.r8.s64 + 4;
loc_832D12FC:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x832d12dc
	if (!ctx.cr0.eq) goto loc_832D12DC;
loc_832D130C:
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// b 0x832d1328
	goto loc_832D1328;
loc_832D1314:
	// lwzx r11,r28,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r20.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_832D1328:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d1344
	if (!ctx.cr6.eq) goto loc_832D1344;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// stw r26,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_832D1344:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// blt cr6,0x832d12a4
	if (ctx.cr6.lt) goto loc_832D12A4;
	// lwz r10,32(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// rlwinm. r11,r22,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// beq 0x832d13bc
	if (ctx.cr0.eq) goto loc_832D13BC;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// ori r9,r9,11008
	ctx.r9.u64 = ctx.r9.u64 | 11008;
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwimi r9,r8,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D13A0;
	sub_82CB1160(ctx, base);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r24,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r24.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// b 0x832d13e8
	goto loc_832D13E8;
loc_832D13BC:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x832d13d0
	if (ctx.cr6.eq) goto loc_832D13D0;
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// b 0x832d13e8
	goto loc_832D13E8;
loc_832D13D0:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_832D13E8:
	// lwz r9,28(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// rlwinm. r11,r22,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// beq 0x832d1458
	if (ctx.cr0.eq) goto loc_832D1458;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// ori r9,r9,11008
	ctx.r9.u64 = ctx.r9.u64 | 11008;
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwimi r9,r8,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x832D143C;
	sub_82CB1160(ctx, base);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// b 0x832d14a8
	goto loc_832D14A8;
loc_832D1458:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// beq cr6,0x832d1494
	if (ctx.cr6.eq) goto loc_832D1494;
	// lis r8,-16383
	ctx.r8.s64 = -1073676288;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// ori r8,r8,9984
	ctx.r8.u64 = ctx.r8.u64 | 9984;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x832d14a4
	goto loc_832D14A4;
loc_832D1494:
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_832D14A4:
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
loc_832D14A8:
	// subf r11,r19,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r19.s64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x832D14C0;
	sub_82CB1160(ctx, base);
	// subf r11,r16,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r16.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r23,r31
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x832d14f0
	if (!ctx.cr6.lt) goto loc_832D14F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r11,5540
	ctx.r5.s64 = ctx.r11.s64 + 5540;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r7,1702
	ctx.r7.s64 = 1702;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D14F0;
	sub_8320CF10(ctx, base);
loc_832D14F0:
	// lwz r3,4(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x832d6660
	ctx.lr = 0x832D1514;
	sub_832D6660(ctx, base);
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D1534"))) PPC_WEAK_FUNC(sub_832D1534);
PPC_FUNC_IMPL(__imp__sub_832D1534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D1538"))) PPC_WEAK_FUNC(sub_832D1538);
PPC_FUNC_IMPL(__imp__sub_832D1538) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D1540"))) PPC_WEAK_FUNC(sub_832D1540);
PPC_FUNC_IMPL(__imp__sub_832D1540) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D1548"))) PPC_WEAK_FUNC(sub_832D1548);
PPC_FUNC_IMPL(__imp__sub_832D1548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x832D1550;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r20,r11,-21168
	ctx.r20.s64 = ctx.r11.s64 + -21168;
	// addi r19,r10,5192
	ctx.r19.s64 = ctx.r10.s64 + 5192;
	// bne cr6,0x832d1590
	if (!ctx.cr6.eq) goto loc_832D1590;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,1751
	ctx.r7.s64 = 1751;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1590;
	sub_8320CF10(ctx, base);
loc_832D1590:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x832d15b4
	if (!ctx.cr6.eq) goto loc_832D15B4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,5344
	ctx.r5.s64 = ctx.r11.s64 + 5344;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,1752
	ctx.r7.s64 = 1752;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D15B4;
	sub_8320CF10(ctx, base);
loc_832D15B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d15d8
	if (!ctx.cr6.eq) goto loc_832D15D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,5328
	ctx.r5.s64 = ctx.r11.s64 + 5328;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,1753
	ctx.r7.s64 = 1753;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D15D8;
	sub_8320CF10(ctx, base);
loc_832D15D8:
	// addic. r21,r31,236
	ctx.xer.ca = ctx.r31.u32 > 4294967059;
	ctx.r21.s64 = ctx.r31.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne 0x832d15fc
	if (!ctx.cr0.eq) goto loc_832D15FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,1756
	ctx.r7.s64 = 1756;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D15FC;
	sub_8320CF10(ctx, base);
loc_832D15FC:
	// lwz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r9,388(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// lwz r8,356(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// mulli r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 * 6;
	// lwz r6,324(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r5,8(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divwu r10,r6,r7
	ctx.r10.u32 = ctx.r6.u32 / ctx.r7.u32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x832D164C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x8330b6f0
	ctx.lr = 0x832D1668;
	sub_8330B6F0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r25,r11,5288
	ctx.r25.s64 = ctx.r11.s64 + 5288;
	// bne 0x832d1690
	if (!ctx.cr0.eq) goto loc_832D1690;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,761
	ctx.r7.s64 = 761;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1690;
	sub_8320CF10(ctx, base);
loc_832D1690:
	// li r26,8
	ctx.r26.s64 = 8;
	// addi r27,r30,516
	ctx.r27.s64 = ctx.r30.s64 + 516;
loc_832D1698:
	// lwz r11,-4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d16c8
	if (!ctx.cr6.eq) goto loc_832D16C8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d16c8
	if (!ctx.cr6.eq) goto loc_832D16C8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d16c8
	if (!ctx.cr6.eq) goto loc_832D16C8;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d16f8
	if (ctx.cr6.eq) goto loc_832D16F8;
loc_832D16C8:
	// lis r11,-16368
	ctx.r11.s64 = -1072693248;
	// rlwinm r10,r28,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3FC;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D16F4;
	sub_82CB1160(ctx, base);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
loc_832D16F8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// bne 0x832d1698
	if (!ctx.cr0.eq) goto loc_832D1698;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x8330b7e0
	ctx.lr = 0x832D1724;
	sub_8330B7E0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832d1744
	if (!ctx.cr0.eq) goto loc_832D1744;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,798
	ctx.r7.s64 = 798;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1744;
	sub_8320CF10(ctx, base);
loc_832D1744:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,4
	ctx.r26.s64 = 4;
loc_832D174C:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d1770
	if (ctx.cr6.eq) goto loc_832D1770;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d0648
	ctx.lr = 0x832D176C;
	sub_832D0648(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832D1770:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x832d174c
	if (!ctx.cr0.eq) goto loc_832D174C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x8330cd48
	ctx.lr = 0x832D178C;
	sub_8330CD48(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832d17b0
	if (!ctx.cr0.eq) goto loc_832D17B0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,5304
	ctx.r5.s64 = ctx.r11.s64 + 5304;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,1047
	ctx.r7.s64 = 1047;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D17B0;
	sub_8320CF10(ctx, base);
loc_832D17B0:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,32
	ctx.r27.s64 = 32;
loc_832D17B8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d17f4
	if (ctx.cr6.eq) goto loc_832D17F4;
	// lis r11,-16378
	ctx.r11.s64 = -1073348608;
	// oris r10,r29,1
	ctx.r10.u64 = ctx.r29.u64 | 65536;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D17F0;
	sub_82CB1160(ctx, base);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
loc_832D17F4:
	// addi r29,r29,6
	ctx.r29.s64 = ctx.r29.s64 + 6;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// bne 0x832d17b8
	if (!ctx.cr0.eq) goto loc_832D17B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r28,416(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// bl 0x8330cf58
	ctx.lr = 0x832D1814;
	sub_8330CF58(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x832d1838
	if (!ctx.cr0.eq) goto loc_832D1838;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,5316
	ctx.r5.s64 = ctx.r11.s64 + 5316;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,1084
	ctx.r7.s64 = 1084;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1838;
	sub_8320CF10(ctx, base);
loc_832D1838:
	// lis r11,-16363
	ctx.r11.s64 = -1072365568;
	// oris r10,r28,4
	ctx.r10.u64 = ctx.r28.u64 | 262144;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// li r5,84
	ctx.r5.s64 = 84;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D1864;
	sub_82CB1160(ctx, base);
	// subf r11,r23,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r23.s64;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// srawi r30,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r24,r30
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x832d1894
	if (!ctx.cr6.lt) goto loc_832D1894;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,5572
	ctx.r5.s64 = ctx.r11.s64 + 5572;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,1770
	ctx.r7.s64 = 1770;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1894;
	sub_8320CF10(ctx, base);
loc_832D1894:
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D18AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8330b1d0
	ctx.lr = 0x832D18B4;
	sub_8330B1D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D18C0"))) PPC_WEAK_FUNC(sub_832D18C0);
PPC_FUNC_IMPL(__imp__sub_832D18C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832D18C8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r25,r10,5192
	ctx.r25.s64 = ctx.r10.s64 + 5192;
	// bne cr6,0x832d1918
	if (!ctx.cr6.eq) goto loc_832D1918;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1837
	ctx.r7.s64 = 1837;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1918;
	sub_8320CF10(ctx, base);
loc_832D1918:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d193c
	if (!ctx.cr6.eq) goto loc_832D193C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,5344
	ctx.r5.s64 = ctx.r11.s64 + 5344;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1838
	ctx.r7.s64 = 1838;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D193C;
	sub_8320CF10(ctx, base);
loc_832D193C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d1960
	if (!ctx.cr6.eq) goto loc_832D1960;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,5328
	ctx.r5.s64 = ctx.r11.s64 + 5328;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1839
	ctx.r7.s64 = 1839;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1960;
	sub_8320CF10(ctx, base);
loc_832D1960:
	// addic. r27,r31,236
	ctx.xer.ca = ctx.r31.u32 > 4294967059;
	ctx.r27.s64 = ctx.r31.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x832d1984
	if (!ctx.cr0.eq) goto loc_832D1984;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1842
	ctx.r7.s64 = 1842;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1984;
	sub_8320CF10(ctx, base);
loc_832D1984:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x832d19ac
	if (ctx.cr6.eq) goto loc_832D19AC;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r24,24(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r23,20(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// addi r10,r10,4440
	ctx.r10.s64 = ctx.r10.s64 + 4440;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
loc_832D19AC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d0aa0
	ctx.lr = 0x832D19BC;
	sub_832D0AA0(ctx, base);
	// lwz r7,292(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r6,324(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r10,6
	ctx.r10.s64 = 6;
	// rlwinm r7,r7,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// divwu r6,r6,r10
	ctx.r6.u32 = ctx.r6.u32 / ctx.r10.u32;
	// lwz r8,388(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// mulli r10,r7,6
	ctx.r10.s64 = ctx.r7.s64 * 6;
	// lwz r9,356(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x832D1A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d1548
	ctx.lr = 0x832D1A48;
	sub_832D1548(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x832d1a58
	if (ctx.cr6.eq) goto loc_832D1A58;
	// stw r24,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r24.u32);
	// stw r23,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r23.u32);
loc_832D1A58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D1A64"))) PPC_WEAK_FUNC(sub_832D1A64);
PPC_FUNC_IMPL(__imp__sub_832D1A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D1A68"))) PPC_WEAK_FUNC(sub_832D1A68);
PPC_FUNC_IMPL(__imp__sub_832D1A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832D1A70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// addi r26,r30,2
	ctx.r26.s64 = ctx.r30.s64 + 2;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d1ab4
	if (!ctx.cr6.eq) goto loc_832D1AB4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,5192
	ctx.r6.s64 = ctx.r11.s64 + 5192;
	// addi r5,r10,5600
	ctx.r5.s64 = ctx.r10.s64 + 5600;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1990
	ctx.r7.s64 = 1990;
	// bl 0x8320cf10
	ctx.lr = 0x832D1AB4;
	sub_8320CF10(ctx, base);
loc_832D1AB4:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r10,r26,-2
	ctx.r10.s64 = ctx.r26.s64 + -2;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// or r8,r29,r28
	ctx.r8.u64 = ctx.r29.u64 | ctx.r28.u64;
	// rlwimi r9,r10,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D1AE8;
	sub_82CB1160(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D1AF8"))) PPC_WEAK_FUNC(sub_832D1AF8);
PPC_FUNC_IMPL(__imp__sub_832D1AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x832D1B00;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r31,r30,284
	ctx.r31.s64 = ctx.r30.s64 + 284;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r21,r11,-21168
	ctx.r21.s64 = ctx.r11.s64 + -21168;
	// addi r20,r10,5192
	ctx.r20.s64 = ctx.r10.s64 + 5192;
	// rlwinm r27,r9,28,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x1;
	// bne cr6,0x832d1b48
	if (!ctx.cr6.eq) goto loc_832D1B48;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,2039
	ctx.r7.s64 = 2039;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1B48;
	sub_8320CF10(ctx, base);
loc_832D1B48:
	// addic. r22,r30,236
	ctx.xer.ca = ctx.r30.u32 > 4294967059;
	ctx.r22.s64 = ctx.r30.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne 0x832d1b6c
	if (!ctx.cr0.eq) goto loc_832D1B6C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,2043
	ctx.r7.s64 = 2043;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1B6C;
	sub_8320CF10(ctx, base);
loc_832D1B6C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r24,20
	ctx.r24.s64 = 20;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832d1bbc
	if (!ctx.cr0.eq) goto loc_832D1BBC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mulli r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 * 6;
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divwu r10,r6,r7
	ctx.r10.u32 = ctx.r6.u32 / ctx.r7.u32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r24,r11,20
	ctx.r24.s64 = ctx.r11.s64 + 20;
loc_832D1BBC:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1BD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// rlwinm r8,r27,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r9,5
	ctx.r9.s64 = 5;
loc_832D1BE8:
	// lis r7,-16382
	ctx.r7.s64 = -1073610752;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// ori r7,r7,11776
	ctx.r7.u64 = ctx.r7.u64 | 11776;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// or r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r6,r6,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// beq cr6,0x832d1c30
	if (ctx.cr6.eq) goto loc_832D1C30;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x832d1c34
	goto loc_832D1C34;
loc_832D1C30:
	// li r7,0
	ctx.r7.s64 = 0;
loc_832D1C34:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r29,r10,4
	ctx.r29.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x832d1be8
	if (!ctx.cr0.eq) goto loc_832D1BE8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d1da0
	if (!ctx.cr6.eq) goto loc_832D1DA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8330b230
	ctx.lr = 0x832D1C58;
	sub_8330B230(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8330b280
	ctx.lr = 0x832D1C64;
	sub_8330B280(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8330b258
	ctx.lr = 0x832D1C70;
	sub_8330B258(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8330b2a8
	ctx.lr = 0x832D1C7C;
	sub_8330B2A8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,128
	ctx.r6.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d1a68
	ctx.lr = 0x832D1C98;
	sub_832D1A68(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r5,r11,1024
	ctx.r5.s64 = ctx.r11.s64 + 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832d1a68
	ctx.lr = 0x832D1CB0;
	sub_832D1A68(ctx, base);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x832d1a68
	ctx.lr = 0x832D1CC4;
	sub_832D1A68(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwimi r9,r10,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// oris r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 | 65536;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r28,32
	ctx.r28.s64 = 32;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_832D1CF4:
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D1D04;
	sub_82CB1160(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// bne 0x832d1cf4
	if (!ctx.cr0.eq) goto loc_832D1CF4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,132(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,21
	ctx.r6.s64 = 21;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// bl 0x832d1a68
	ctx.lr = 0x832D1D2C;
	sub_832D1A68(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x832d1a68
	ctx.lr = 0x832D1D40;
	sub_832D1A68(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// bl 0x832d1a68
	ctx.lr = 0x832D1D58;
	sub_832D1A68(ctx, base);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// bl 0x832d1a68
	ctx.lr = 0x832D1D6C;
	sub_832D1A68(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// bl 0x832d1a68
	ctx.lr = 0x832D1D84;
	sub_832D1A68(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r5,r11,6
	ctx.r5.s64 = ctx.r11.s64 + 6;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// bl 0x832d1a68
	ctx.lr = 0x832D1D9C;
	sub_832D1A68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_832D1DA0:
	// subf r11,r23,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r23.s64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r24,r31
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x832d1dcc
	if (!ctx.cr6.lt) goto loc_832D1DCC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,5572
	ctx.r5.s64 = ctx.r11.s64 + 5572;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r7,2158
	ctx.r7.s64 = 2158;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1DCC;
	sub_8320CF10(ctx, base);
loc_832D1DCC:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D1DEC"))) PPC_WEAK_FUNC(sub_832D1DEC);
PPC_FUNC_IMPL(__imp__sub_832D1DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D1DF0"))) PPC_WEAK_FUNC(sub_832D1DF0);
PPC_FUNC_IMPL(__imp__sub_832D1DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x832D1DF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,20
	ctx.r30.s64 = 20;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r25,280(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832d1e58
	if (!ctx.cr0.eq) goto loc_832D1E58;
	// lwz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// rlwinm r8,r10,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// lwz r9,356(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// mulli r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 * 6;
	// lwz r6,324(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// divwu r8,r6,r7
	ctx.r8.u32 = ctx.r6.u32 / ctx.r7.u32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,20
	ctx.r30.s64 = ctx.r11.s64 + 20;
loc_832D1E58:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r29,r10,-21168
	ctx.r29.s64 = ctx.r10.s64 + -21168;
	// addi r28,r11,5192
	ctx.r28.s64 = ctx.r11.s64 + 5192;
	// bne cr6,0x832d1e8c
	if (!ctx.cr6.eq) goto loc_832D1E8C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,2195
	ctx.r7.s64 = 2195;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1E8C;
	sub_8320CF10(ctx, base);
loc_832D1E8C:
	// addic. r26,r31,236
	ctx.xer.ca = ctx.r31.u32 > 4294967059;
	ctx.r26.s64 = ctx.r31.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x832d1eb0
	if (!ctx.cr0.eq) goto loc_832D1EB0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,2199
	ctx.r7.s64 = 2199;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D1EB0;
	sub_8320CF10(ctx, base);
loc_832D1EB0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832d1edc
	if (ctx.cr6.eq) goto loc_832D1EDC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832d0aa0
	ctx.lr = 0x832D1EC8;
	sub_832D0AA0(ctx, base);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1ED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_832D1EDC:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832d1f14
	if (ctx.cr6.eq) goto loc_832D1F14;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D1F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832D1F14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832d1af8
	ctx.lr = 0x832D1F20;
	sub_832D1AF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D1F28"))) PPC_WEAK_FUNC(sub_832D1F28);
PPC_FUNC_IMPL(__imp__sub_832D1F28) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832d1f70
	if (!ctx.cr6.eq) goto loc_832D1F70;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,5192
	ctx.r6.s64 = ctx.r11.s64 + 5192;
	// addi r5,r10,-5784
	ctx.r5.s64 = ctx.r10.s64 + -5784;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2243
	ctx.r7.s64 = 2243;
	// bl 0x8320cf10
	ctx.lr = 0x832D1F5C;
	sub_8320CF10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D1F60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832D1F70:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x832d1f60
	goto loc_832D1F60;
}

__attribute__((alias("__imp__sub_832D1F78"))) PPC_WEAK_FUNC(sub_832D1F78);
PPC_FUNC_IMPL(__imp__sub_832D1F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D1F80;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-16368
	ctx.r11.s64 = -1072693248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r30,r11,11520
	ctx.r30.u64 = ctx.r11.u64 | 11520;
	// lwz r25,92(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// lwz r24,104(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r27,20(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832d2038
	if (ctx.cr6.eq) goto loc_832D2038;
	// li r28,1024
	ctx.r28.s64 = 1024;
loc_832D1FB0:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d0d90
	ctx.lr = 0x832D1FC0;
	sub_832D0D90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d2024
	if (ctx.cr0.eq) goto loc_832D2024;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D1FE8;
	sub_82CB1160(ctx, base);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r4,r27,64
	ctx.r4.s64 = ctx.r27.s64 + 64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82cb1160
	ctx.lr = 0x832D2010;
	sub_82CB1160(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bl 0x832d1050
	ctx.lr = 0x832D2024;
	sub_832D1050(ctx, base);
loc_832D2024:
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// addi r27,r27,128
	ctx.r27.s64 = ctx.r27.s64 + 128;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x832d1fb0
	if (ctx.cr6.lt) goto loc_832D1FB0;
loc_832D2038:
	// lwz r27,24(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x832d20d4
	if (ctx.cr6.eq) goto loc_832D20D4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_832D204C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d0d90
	ctx.lr = 0x832D205C;
	sub_832D0D90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d20c0
	if (ctx.cr0.eq) goto loc_832D20C0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D2084;
	sub_82CB1160(ctx, base);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r4,r27,64
	ctx.r4.s64 = ctx.r27.s64 + 64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82cb1160
	ctx.lr = 0x832D20AC;
	sub_82CB1160(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bl 0x832d1050
	ctx.lr = 0x832D20C0;
	sub_832D1050(ctx, base);
loc_832D20C0:
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// addi r27,r27,128
	ctx.r27.s64 = ctx.r27.s64 + 128;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x832d204c
	if (ctx.cr6.lt) goto loc_832D204C;
loc_832D20D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D20E0"))) PPC_WEAK_FUNC(sub_832D20E0);
PPC_FUNC_IMPL(__imp__sub_832D20E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D20E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r25,96(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r24,108(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r26,28(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r27,120(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// beq cr6,0x832d2180
	if (ctx.cr6.eq) goto loc_832D2180;
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_832D2114:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d0d90
	ctx.lr = 0x832D2124;
	sub_832D0D90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d2170
	if (ctx.cr0.eq) goto loc_832D2170;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// oris r10,r29,3
	ctx.r10.u64 = ctx.r29.u64 | 196608;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwimi r9,r27,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r27.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D215C;
	sub_82CB1160(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// bl 0x832d1050
	ctx.lr = 0x832D2170;
	sub_832D1050(ctx, base);
loc_832D2170:
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x832d2114
	if (ctx.cr6.lt) goto loc_832D2114;
loc_832D2180:
	// lwz r26,32(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r27,132(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x832d2208
	if (ctx.cr6.eq) goto loc_832D2208;
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_832D2198:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d0d90
	ctx.lr = 0x832D21A8;
	sub_832D0D90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d21f8
	if (ctx.cr0.eq) goto loc_832D21F8;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// ori r9,r11,11520
	ctx.r9.u64 = ctx.r11.u64 | 11520;
	// oris r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 196608;
	// rlwimi r9,r27,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r27.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D21E4;
	sub_82CB1160(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// bl 0x832d1050
	ctx.lr = 0x832D21F8;
	sub_832D1050(ctx, base);
loc_832D21F8:
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x832d2198
	if (ctx.cr6.lt) goto loc_832D2198;
loc_832D2208:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D2214"))) PPC_WEAK_FUNC(sub_832D2214);
PPC_FUNC_IMPL(__imp__sub_832D2214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D2218"))) PPC_WEAK_FUNC(sub_832D2218);
PPC_FUNC_IMPL(__imp__sub_832D2218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D2220;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// lwz r28,36(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r27,r10,5192
	ctx.r27.s64 = ctx.r10.s64 + 5192;
	// lwz r24,112(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r25,100(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r26,124(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bne cr6,0x832d2270
	if (!ctx.cr6.eq) goto loc_832D2270;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5608
	ctx.r5.s64 = ctx.r11.s64 + 5608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,983
	ctx.r7.s64 = 983;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2270;
	sub_8320CF10(ctx, base);
loc_832D2270:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d2294
	if (!ctx.cr6.eq) goto loc_832D2294;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5172
	ctx.r5.s64 = ctx.r11.s64 + 5172;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,984
	ctx.r7.s64 = 984;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2294;
	sub_8320CF10(ctx, base);
loc_832D2294:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832d22f0
	if (ctx.cr6.eq) goto loc_832D22F0;
loc_832D22A0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d0d90
	ctx.lr = 0x832D22B0;
	sub_832D0D90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d22e4
	if (ctx.cr0.eq) goto loc_832D22E4;
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r30,128
	ctx.r4.s64 = ctx.r30.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d0648
	ctx.lr = 0x832D22D0;
	sub_832D0648(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d1050
	ctx.lr = 0x832D22E4;
	sub_832D1050(ctx, base);
loc_832D22E4:
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x832d22a0
	if (ctx.cr6.lt) goto loc_832D22A0;
loc_832D22F0:
	// lwz r27,40(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r28,136(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x832d2354
	if (ctx.cr6.eq) goto loc_832D2354;
loc_832D2304:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d0d90
	ctx.lr = 0x832D2314;
	sub_832D0D90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d2348
	if (ctx.cr0.eq) goto loc_832D2348;
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r6,r11,r27
	ctx.r6.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r30,192
	ctx.r4.s64 = ctx.r30.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d0648
	ctx.lr = 0x832D2334;
	sub_832D0648(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d1050
	ctx.lr = 0x832D2348;
	sub_832D1050(ctx, base);
loc_832D2348:
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x832d2304
	if (ctx.cr6.lt) goto loc_832D2304;
loc_832D2354:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D2360"))) PPC_WEAK_FUNC(sub_832D2360);
PPC_FUNC_IMPL(__imp__sub_832D2360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832D2368;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,5192
	ctx.r26.s64 = ctx.r10.s64 + 5192;
	// bne cr6,0x832d23b8
	if (!ctx.cr6.eq) goto loc_832D23B8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1153
	ctx.r7.s64 = 1153;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D23B8;
	sub_8320CF10(ctx, base);
loc_832D23B8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x832d23dc
	if (!ctx.cr6.eq) goto loc_832D23DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1153
	ctx.r7.s64 = 1153;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D23DC;
	sub_8320CF10(ctx, base);
loc_832D23DC:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x832D23EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d2410
	if (!ctx.cr0.eq) goto loc_832D2410;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,5620
	ctx.r5.s64 = ctx.r11.s64 + 5620;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1159
	ctx.r7.s64 = 1159;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2410;
	sub_8320CF10(ctx, base);
loc_832D2410:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// bl 0x832ceb20
	ctx.lr = 0x832D2430;
	sub_832CEB20(ctx, base);
	// rlwinm. r11,r3,0,20,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832d244c
	if (ctx.cr0.eq) goto loc_832D244C;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// addi r10,r10,4440
	ctx.r10.s64 = ctx.r10.s64 + 4440;
	// b 0x832d2478
	goto loc_832D2478;
loc_832D244C:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// bne cr6,0x832d2468
	if (!ctx.cr6.eq) goto loc_832D2468;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,1048
	ctx.r11.s64 = ctx.r11.s64 + 1048;
	// addi r10,r10,3696
	ctx.r10.s64 = ctx.r10.s64 + 3696;
	// b 0x832d2478
	goto loc_832D2478;
loc_832D2468:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,1040
	ctx.r11.s64 = ctx.r11.s64 + 1040;
	// addi r10,r10,3000
	ctx.r10.s64 = ctx.r10.s64 + 3000;
loc_832D2478:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D248C"))) PPC_WEAK_FUNC(sub_832D248C);
PPC_FUNC_IMPL(__imp__sub_832D248C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D2490"))) PPC_WEAK_FUNC(sub_832D2490);
PPC_FUNC_IMPL(__imp__sub_832D2490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832D2498;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,5192
	ctx.r26.s64 = ctx.r10.s64 + 5192;
	// bne cr6,0x832d24d8
	if (!ctx.cr6.eq) goto loc_832D24D8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1930
	ctx.r7.s64 = 1930;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D24D8;
	sub_8320CF10(ctx, base);
loc_832D24D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d24fc
	if (!ctx.cr6.eq) goto loc_832D24FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,5344
	ctx.r5.s64 = ctx.r11.s64 + 5344;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1931
	ctx.r7.s64 = 1931;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D24FC;
	sub_8320CF10(ctx, base);
loc_832D24FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d2520
	if (!ctx.cr6.eq) goto loc_832D2520;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,5328
	ctx.r5.s64 = ctx.r11.s64 + 5328;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1932
	ctx.r7.s64 = 1932;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2520;
	sub_8320CF10(ctx, base);
loc_832D2520:
	// addic. r29,r31,236
	ctx.xer.ca = ctx.r31.u32 > 4294967059;
	ctx.r29.s64 = ctx.r31.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x832d2544
	if (!ctx.cr0.eq) goto loc_832D2544;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3568
	ctx.r5.s64 = ctx.r11.s64 + 3568;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1935
	ctx.r7.s64 = 1935;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2544;
	sub_8320CF10(ctx, base);
loc_832D2544:
	// lwz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r9,388(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// lwz r8,356(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// mulli r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 * 6;
	// lwz r6,324(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divwu r10,r6,r7
	ctx.r10.u32 = ctx.r6.u32 / ctx.r7.u32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x832D2594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x832d1f78
	ctx.lr = 0x832D25A0;
	sub_832D1F78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832d20e0
	ctx.lr = 0x832D25A8;
	sub_832D20E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832d2218
	ctx.lr = 0x832D25B0;
	sub_832D2218(ctx, base);
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x832d25dc
	if (!ctx.cr6.lt) goto loc_832D25DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,5572
	ctx.r5.s64 = ctx.r11.s64 + 5572;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1951
	ctx.r7.s64 = 1951;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D25DC;
	sub_8320CF10(ctx, base);
loc_832D25DC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D25F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8330b1d0
	ctx.lr = 0x832D25FC;
	sub_8330B1D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D2608"))) PPC_WEAK_FUNC(sub_832D2608);
PPC_FUNC_IMPL(__imp__sub_832D2608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832D2610;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,5680
	ctx.r28.s64 = ctx.r10.s64 + 5680;
	// bne cr6,0x832d2668
	if (!ctx.cr6.eq) goto loc_832D2668;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,127
	ctx.r7.s64 = 127;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2668;
	sub_8320CF10(ctx, base);
loc_832D2668:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d268c
	if (!ctx.cr6.eq) goto loc_832D268C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D268C;
	sub_8320CF10(ctx, base);
loc_832D268C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x832d26b0
	if (!ctx.cr6.eq) goto loc_832D26B0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,5672
	ctx.r5.s64 = ctx.r11.s64 + 5672;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,129
	ctx.r7.s64 = 129;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D26B0;
	sub_8320CF10(ctx, base);
loc_832D26B0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x832d26d4
	if (!ctx.cr6.eq) goto loc_832D26D4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,5660
	ctx.r5.s64 = ctx.r11.s64 + 5660;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,135
	ctx.r7.s64 = 135;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D26D4;
	sub_8320CF10(ctx, base);
loc_832D26D4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x832d26f8
	if (!ctx.cr6.eq) goto loc_832D26F8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-1696
	ctx.r5.s64 = ctx.r11.s64 + -1696;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D26F8;
	sub_8320CF10(ctx, base);
loc_832D26F8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x832d271c
	if (!ctx.cr6.eq) goto loc_832D271C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,5356
	ctx.r5.s64 = ctx.r11.s64 + 5356;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,137
	ctx.r7.s64 = 137;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D271C;
	sub_8320CF10(ctx, base);
loc_832D271C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d2740
	if (!ctx.cr6.eq) goto loc_832D2740;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,5652
	ctx.r5.s64 = ctx.r11.s64 + 5652;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,138
	ctx.r7.s64 = 138;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2740;
	sub_8320CF10(ctx, base);
loc_832D2740:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x832D2750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d2774
	if (!ctx.cr0.eq) goto loc_832D2774;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,5636
	ctx.r5.s64 = ctx.r11.s64 + 5636;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,145
	ctx.r7.s64 = 145;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2774;
	sub_8320CF10(ctx, base);
loc_832D2774:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// bl 0x832d85c8
	ctx.lr = 0x832D27A4;
	sub_832D85C8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D27B4"))) PPC_WEAK_FUNC(sub_832D27B4);
PPC_FUNC_IMPL(__imp__sub_832D27B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D27B8"))) PPC_WEAK_FUNC(sub_832D27B8);
PPC_FUNC_IMPL(__imp__sub_832D27B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D27C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r10,-21168
	ctx.r29.s64 = ctx.r10.s64 + -21168;
	// addi r28,r11,5680
	ctx.r28.s64 = ctx.r11.s64 + 5680;
	// bne cr6,0x832d27fc
	if (!ctx.cr6.eq) goto loc_832D27FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,2428
	ctx.r5.s64 = ctx.r11.s64 + 2428;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,191
	ctx.r7.s64 = 191;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D27FC;
	sub_8320CF10(ctx, base);
loc_832D27FC:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x832d8bd8
	ctx.lr = 0x832D2804;
	sub_832D8BD8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x832d2850
	if (ctx.cr0.eq) goto loc_832D2850;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r27,r11,5772
	ctx.r27.s64 = ctx.r11.s64 + 5772;
loc_832D2814:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d2834
	if (!ctx.cr6.eq) goto loc_832D2834;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,196
	ctx.r7.s64 = 196;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2834;
	sub_8320CF10(ctx, base);
loc_832D2834:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d5ad0
	ctx.lr = 0x832D2840;
	sub_832D5AD0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x832d8bd8
	ctx.lr = 0x832D2848;
	sub_832D8BD8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832d2814
	if (!ctx.cr0.eq) goto loc_832D2814;
loc_832D2850:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x832d86d8
	ctx.lr = 0x832D2858;
	sub_832D86D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D286C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D2878"))) PPC_WEAK_FUNC(sub_832D2878);
PPC_FUNC_IMPL(__imp__sub_832D2878) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D2880"))) PPC_WEAK_FUNC(sub_832D2880);
PPC_FUNC_IMPL(__imp__sub_832D2880) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D2888"))) PPC_WEAK_FUNC(sub_832D2888);
PPC_FUNC_IMPL(__imp__sub_832D2888) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832d28bc
	if (!ctx.cr6.eq) goto loc_832D28BC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,5680
	ctx.r6.s64 = ctx.r11.s64 + 5680;
	// addi r5,r10,2428
	ctx.r5.s64 = ctx.r10.s64 + 2428;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,412
	ctx.r7.s64 = 412;
	// bl 0x8320cf10
	ctx.lr = 0x832D28BC;
	sub_8320CF10(ctx, base);
loc_832D28BC:
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

__attribute__((alias("__imp__sub_832D28D0"))) PPC_WEAK_FUNC(sub_832D28D0);
PPC_FUNC_IMPL(__imp__sub_832D28D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832D28D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-21168
	ctx.r31.s64 = ctx.r11.s64 + -21168;
	// addi r30,r10,5680
	ctx.r30.s64 = ctx.r10.s64 + 5680;
	// bne cr6,0x832d2914
	if (!ctx.cr6.eq) goto loc_832D2914;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,2428
	ctx.r5.s64 = ctx.r11.s64 + 2428;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,447
	ctx.r7.s64 = 447;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2914;
	sub_8320CF10(ctx, base);
loc_832D2914:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832d2938
	if (ctx.cr6.eq) goto loc_832D2938;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,5784
	ctx.r5.s64 = ctx.r11.s64 + 5784;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,448
	ctx.r7.s64 = 448;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2938;
	sub_8320CF10(ctx, base);
loc_832D2938:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D2944"))) PPC_WEAK_FUNC(sub_832D2944);
PPC_FUNC_IMPL(__imp__sub_832D2944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D2948"))) PPC_WEAK_FUNC(sub_832D2948);
PPC_FUNC_IMPL(__imp__sub_832D2948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D2950;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,-21168
	ctx.r31.s64 = ctx.r11.s64 + -21168;
	// addi r30,r10,5680
	ctx.r30.s64 = ctx.r10.s64 + 5680;
	// bne cr6,0x832d2990
	if (!ctx.cr6.eq) goto loc_832D2990;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,2428
	ctx.r5.s64 = ctx.r11.s64 + 2428;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,482
	ctx.r7.s64 = 482;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2990;
	sub_8320CF10(ctx, base);
loc_832D2990:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d29b4
	if (!ctx.cr6.eq) goto loc_832D29B4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-5864
	ctx.r5.s64 = ctx.r11.s64 + -5864;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,483
	ctx.r7.s64 = 483;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D29B4;
	sub_8320CF10(ctx, base);
loc_832D29B4:
	// lwz r4,280(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832d29c8
	if (ctx.cr6.eq) goto loc_832D29C8;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x832d5ad0
	ctx.lr = 0x832D29C8;
	sub_832D5AD0(ctx, base);
loc_832D29C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D29D4"))) PPC_WEAK_FUNC(sub_832D29D4);
PPC_FUNC_IMPL(__imp__sub_832D29D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D29D8"))) PPC_WEAK_FUNC(sub_832D29D8);
PPC_FUNC_IMPL(__imp__sub_832D29D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D29E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,2584
	ctx.r28.s64 = ctx.r10.s64 + 2584;
	// bne cr6,0x832d2a20
	if (!ctx.cr6.eq) goto loc_832D2A20;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-20840
	ctx.r5.s64 = ctx.r11.s64 + -20840;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,239
	ctx.r7.s64 = 239;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2A20;
	sub_8320CF10(ctx, base);
loc_832D2A20:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d2a48
	if (ctx.cr6.lt) goto loc_832D2A48;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,2536
	ctx.r5.s64 = ctx.r11.s64 + 2536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,240
	ctx.r7.s64 = 240;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2A48;
	sub_8320CF10(ctx, base);
loc_832D2A48:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D2A70"))) PPC_WEAK_FUNC(sub_832D2A70);
PPC_FUNC_IMPL(__imp__sub_832D2A70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D2A78"))) PPC_WEAK_FUNC(sub_832D2A78);
PPC_FUNC_IMPL(__imp__sub_832D2A78) {
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
	// bne cr6,0x832d2ab4
	if (!ctx.cr6.eq) goto loc_832D2AB4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,2584
	ctx.r6.s64 = ctx.r11.s64 + 2584;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,433
	ctx.r7.s64 = 433;
	// bl 0x8320cf10
	ctx.lr = 0x832D2AB4;
	sub_8320CF10(ctx, base);
loc_832D2AB4:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
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

__attribute__((alias("__imp__sub_832D2ACC"))) PPC_WEAK_FUNC(sub_832D2ACC);
PPC_FUNC_IMPL(__imp__sub_832D2ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D2AD0"))) PPC_WEAK_FUNC(sub_832D2AD0);
PPC_FUNC_IMPL(__imp__sub_832D2AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832D2AD8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,5680
	ctx.r27.s64 = ctx.r10.s64 + 5680;
	// bne cr6,0x832d2b24
	if (!ctx.cr6.eq) goto loc_832D2B24;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,2428
	ctx.r5.s64 = ctx.r11.s64 + 2428;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,251
	ctx.r7.s64 = 251;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2B24;
	sub_8320CF10(ctx, base);
loc_832D2B24:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d2b4c
	if (!ctx.cr6.eq) goto loc_832D2B4C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5876
	ctx.r5.s64 = ctx.r11.s64 + 5876;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,252
	ctx.r7.s64 = 252;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2B4C;
	sub_8320CF10(ctx, base);
loc_832D2B4C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d2a78
	ctx.lr = 0x832D2B54;
	sub_832D2A78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d2b78
	if (ctx.cr0.eq) goto loc_832D2B78;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5828
	ctx.r5.s64 = ctx.r11.s64 + 5828;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,253
	ctx.r7.s64 = 253;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2B78;
	sub_8320CF10(ctx, base);
loc_832D2B78:
	// lwz r24,8(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x832d2ba0
	if (!ctx.cr6.eq) goto loc_832D2BA0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5812
	ctx.r5.s64 = ctx.r11.s64 + 5812;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,260
	ctx.r7.s64 = 260;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2BA0;
	sub_8320CF10(ctx, base);
loc_832D2BA0:
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r25,r11,11084
	ctx.r25.s64 = ctx.r11.s64 + 11084;
	// lwz r26,11084(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x832d88f0
	ctx.lr = 0x832D2BBC;
	sub_832D88F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832d2c4c
	if (!ctx.cr0.eq) goto loc_832D2C4C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832d2c10
	if (ctx.cr0.eq) goto loc_832D2C10;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832178f0
	ctx.lr = 0x832D2BD8;
	sub_832178F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832d2bfc
	if (!ctx.cr0.eq) goto loc_832D2BFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5796
	ctx.r5.s64 = ctx.r11.s64 + 5796;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,302
	ctx.r7.s64 = 302;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2BFC;
	sub_8320CF10(ctx, base);
loc_832D2BFC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832cfe30
	ctx.lr = 0x832D2C08;
	sub_832CFE30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x832d2c14
	goto loc_832D2C14;
loc_832D2C10:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_832D2C14:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83218b20
	ctx.lr = 0x832D2C20;
	sub_83218B20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x832d2ca0
	if (!ctx.cr6.eq) goto loc_832D2CA0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d56b8
	ctx.lr = 0x832D2C34;
	sub_832D56B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x832d8778
	ctx.lr = 0x832D2C4C;
	sub_832D8778(ctx, base);
loc_832D2C4C:
	// lwz r4,280(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832d2c60
	if (ctx.cr6.eq) goto loc_832D2C60;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d5ad0
	ctx.lr = 0x832D2C60;
	sub_832D5AD0(ctx, base);
loc_832D2C60:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d5c30
	ctx.lr = 0x832D2C6C;
	sub_832D5C30(ctx, base);
	// stw r3,280(r29)
	PPC_STORE_U32(ctx.r29.u32 + 280, ctx.r3.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d2c9c
	if (ctx.cr6.eq) goto loc_832D2C9C;
loc_832D2C80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d29d8
	ctx.lr = 0x832D2C8C;
	sub_832D29D8(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d2c80
	if (ctx.cr6.lt) goto loc_832D2C80;
loc_832D2C9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D2CA0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D2CA8"))) PPC_WEAK_FUNC(sub_832D2CA8);
PPC_FUNC_IMPL(__imp__sub_832D2CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832D2CB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r27,r11,0,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x832D2CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x832d2d5c
	if (ctx.cr0.eq) goto loc_832D2D5C;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// mullw r4,r11,r27
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x832D2D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d2d48
	if (ctx.cr0.eq) goto loc_832D2D48;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// ble cr6,0x832d2d5c
	if (!ctx.cr6.gt) goto loc_832D2D5C;
loc_832D2D30:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bne 0x832d2d30
	if (!ctx.cr0.eq) goto loc_832D2D30;
	// b 0x832d2d5c
	goto loc_832D2D5C;
loc_832D2D48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x832D2D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
loc_832D2D5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D2D68"))) PPC_WEAK_FUNC(sub_832D2D68);
PPC_FUNC_IMPL(__imp__sub_832D2D68) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832d2dc0
	if (ctx.cr6.eq) goto loc_832D2DC0;
loc_832D2D88:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D2D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D2DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d2d88
	if (!ctx.cr6.eq) goto loc_832D2D88;
loc_832D2DC0:
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

__attribute__((alias("__imp__sub_832D2DD8"))) PPC_WEAK_FUNC(sub_832D2DD8);
PPC_FUNC_IMPL(__imp__sub_832D2DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D2DE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r10,-21168
	ctx.r29.s64 = ctx.r10.s64 + -21168;
	// addi r28,r9,-5392
	ctx.r28.s64 = ctx.r9.s64 + -5392;
	// addi r27,r11,5896
	ctx.r27.s64 = ctx.r11.s64 + 5896;
	// bne cr6,0x832d2e2c
	if (!ctx.cr6.eq) goto loc_832D2E2C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,178
	ctx.r7.s64 = 178;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2E24;
	sub_8320CF10(ctx, base);
loc_832D2E24:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832d2eb4
	if (ctx.cr6.eq) goto loc_832D2EB4;
loc_832D2E2C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d2e4c
	if (ctx.cr6.eq) goto loc_832D2E4C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x832d2e94
	goto loc_832D2E94;
loc_832D2E4C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d2e68
	if (ctx.cr6.eq) goto loc_832D2E68;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832d2e4c
	if (ctx.cr6.eq) goto loc_832D2E4C;
loc_832D2E68:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d2e24
	if (!ctx.cr6.eq) goto loc_832D2E24;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x832d2ca8
	ctx.lr = 0x832D2E8C;
	sub_832D2CA8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832D2E94:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832d2e24
	if (ctx.cr6.eq) goto loc_832D2E24;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_832D2EAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_832D2EB4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,186
	ctx.r7.s64 = 186;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2ECC;
	sub_8320CF10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832d2eac
	goto loc_832D2EAC;
}

__attribute__((alias("__imp__sub_832D2ED4"))) PPC_WEAK_FUNC(sub_832D2ED4);
PPC_FUNC_IMPL(__imp__sub_832D2ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D2ED8"))) PPC_WEAK_FUNC(sub_832D2ED8);
PPC_FUNC_IMPL(__imp__sub_832D2ED8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D2EE8"))) PPC_WEAK_FUNC(sub_832D2EE8);
PPC_FUNC_IMPL(__imp__sub_832D2EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D2EF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r10,-21168
	ctx.r29.s64 = ctx.r10.s64 + -21168;
	// addi r28,r9,-5392
	ctx.r28.s64 = ctx.r9.s64 + -5392;
	// addi r27,r11,5896
	ctx.r27.s64 = ctx.r11.s64 + 5896;
	// bne cr6,0x832d2f34
	if (!ctx.cr6.eq) goto loc_832D2F34;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,178
	ctx.r7.s64 = 178;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2F34;
	sub_8320CF10(ctx, base);
loc_832D2F34:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832d2fc4
	if (ctx.cr6.eq) goto loc_832D2FC4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d2f5c
	if (ctx.cr6.eq) goto loc_832D2F5C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x832d2fa4
	goto loc_832D2FA4;
loc_832D2F5C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d2f78
	if (ctx.cr6.eq) goto loc_832D2F78;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832d2f5c
	if (ctx.cr6.eq) goto loc_832D2F5C;
loc_832D2F78:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d2f34
	if (!ctx.cr6.eq) goto loc_832D2F34;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x832d2ca8
	ctx.lr = 0x832D2F9C;
	sub_832D2CA8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832D2FA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832d2f34
	if (ctx.cr6.eq) goto loc_832D2F34;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_832D2FBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_832D2FC4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,186
	ctx.r7.s64 = 186;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D2FDC;
	sub_8320CF10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832d2fbc
	goto loc_832D2FBC;
}

__attribute__((alias("__imp__sub_832D2FE4"))) PPC_WEAK_FUNC(sub_832D2FE4);
PPC_FUNC_IMPL(__imp__sub_832D2FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D2FE8"))) PPC_WEAK_FUNC(sub_832D2FE8);
PPC_FUNC_IMPL(__imp__sub_832D2FE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_832D2FF0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832d3010
	if (ctx.cr6.lt) goto loc_832D3010;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x832d301c
	if (!ctx.cr6.gt) goto loc_832D301C;
loc_832D3010:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d2ff0
	if (!ctx.cr6.eq) goto loc_832D2FF0;
loc_832D301C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d3048
	if (ctx.cr6.eq) goto loc_832D3048;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blr 
	return;
loc_832D3048:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D3050"))) PPC_WEAK_FUNC(sub_832D3050);
PPC_FUNC_IMPL(__imp__sub_832D3050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832D3058;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6000
	ctx.r29.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d3094
	if (!ctx.cr6.eq) goto loc_832D3094;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5672
	ctx.r5.s64 = ctx.r11.s64 + 5672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,150
	ctx.r7.s64 = 150;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3094;
	sub_8320CF10(ctx, base);
loc_832D3094:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d30bc
	if (ctx.cr6.eq) goto loc_832D30BC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5972
	ctx.r5.s64 = ctx.r11.s64 + 5972;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,151
	ctx.r7.s64 = 151;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D30BC;
	sub_8320CF10(ctx, base);
loc_832D30BC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d30cc
	if (ctx.cr6.eq) goto loc_832D30CC;
	// bl 0x832d2d68
	ctx.lr = 0x832D30CC;
	sub_832D2D68(ctx, base);
loc_832D30CC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d30dc
	if (ctx.cr6.eq) goto loc_832D30DC;
	// bl 0x832d2d68
	ctx.lr = 0x832D30DC;
	sub_832D2D68(ctx, base);
loc_832D30DC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D30F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D30F8"))) PPC_WEAK_FUNC(sub_832D30F8);
PPC_FUNC_IMPL(__imp__sub_832D30F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D3100;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6000
	ctx.r29.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d313c
	if (!ctx.cr6.eq) goto loc_832D313C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5672
	ctx.r5.s64 = ctx.r11.s64 + 5672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,186
	ctx.r7.s64 = 186;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D313C;
	sub_8320CF10(ctx, base);
loc_832D313C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d2ee8
	ctx.lr = 0x832D3144;
	sub_832D2EE8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832d316c
	if (!ctx.cr0.eq) goto loc_832D316C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5488
	ctx.r5.s64 = ctx.r11.s64 + -5488;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,192
	ctx.r7.s64 = 192;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3168;
	sub_8320CF10(ctx, base);
	// b 0x832d3190
	goto loc_832D3190;
loc_832D316C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83211ba0
	ctx.lr = 0x832D3190;
	sub_83211BA0(ctx, base);
loc_832D3190:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D319C"))) PPC_WEAK_FUNC(sub_832D319C);
PPC_FUNC_IMPL(__imp__sub_832D319C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D31A0"))) PPC_WEAK_FUNC(sub_832D31A0);
PPC_FUNC_IMPL(__imp__sub_832D31A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D31A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6000
	ctx.r29.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d31e8
	if (!ctx.cr6.eq) goto loc_832D31E8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5672
	ctx.r5.s64 = ctx.r11.s64 + 5672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,224
	ctx.r7.s64 = 224;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D31E8;
	sub_8320CF10(ctx, base);
loc_832D31E8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d320c
	if (!ctx.cr6.eq) goto loc_832D320C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,225
	ctx.r7.s64 = 225;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D320C;
	sub_8320CF10(ctx, base);
loc_832D320C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x832d3234
	if (ctx.cr6.gt) goto loc_832D3234;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6124
	ctx.r5.s64 = ctx.r11.s64 + 6124;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,229
	ctx.r7.s64 = 229;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3234;
	sub_8320CF10(ctx, base);
loc_832D3234:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83212318
	ctx.lr = 0x832D323C;
	sub_83212318(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d3260
	if (ctx.cr0.eq) goto loc_832D3260;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6092
	ctx.r5.s64 = ctx.r11.s64 + 6092;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,230
	ctx.r7.s64 = 230;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3260;
	sub_8320CF10(ctx, base);
loc_832D3260:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83211ce8
	ctx.lr = 0x832D3268;
	sub_83211CE8(ctx, base);
	// bl 0x83212508
	ctx.lr = 0x832D326C;
	sub_83212508(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832D327C;
	sub_82CB16F0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d2fe8
	ctx.lr = 0x832D3288;
	sub_832D2FE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D329C"))) PPC_WEAK_FUNC(sub_832D329C);
PPC_FUNC_IMPL(__imp__sub_832D329C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D32A0"))) PPC_WEAK_FUNC(sub_832D32A0);
PPC_FUNC_IMPL(__imp__sub_832D32A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832D32A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6000
	ctx.r29.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d32e4
	if (!ctx.cr6.eq) goto loc_832D32E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5652
	ctx.r5.s64 = ctx.r11.s64 + 5652;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,375
	ctx.r7.s64 = 375;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D32E4;
	sub_8320CF10(ctx, base);
loc_832D32E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d330c
	if (ctx.cr6.eq) goto loc_832D330C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6152
	ctx.r5.s64 = ctx.r11.s64 + 6152;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,376
	ctx.r7.s64 = 376;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D330C;
	sub_8320CF10(ctx, base);
loc_832D330C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d331c
	if (ctx.cr6.eq) goto loc_832D331C;
	// bl 0x832d2d68
	ctx.lr = 0x832D331C;
	sub_832D2D68(ctx, base);
loc_832D331C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d332c
	if (ctx.cr6.eq) goto loc_832D332C;
	// bl 0x832d2d68
	ctx.lr = 0x832D332C;
	sub_832D2D68(ctx, base);
loc_832D332C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D3340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D3348"))) PPC_WEAK_FUNC(sub_832D3348);
PPC_FUNC_IMPL(__imp__sub_832D3348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D3350;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6000
	ctx.r29.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d338c
	if (!ctx.cr6.eq) goto loc_832D338C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5652
	ctx.r5.s64 = ctx.r11.s64 + 5652;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,411
	ctx.r7.s64 = 411;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D338C;
	sub_8320CF10(ctx, base);
loc_832D338C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d2ee8
	ctx.lr = 0x832D3394;
	sub_832D2EE8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832d33bc
	if (!ctx.cr0.eq) goto loc_832D33BC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5488
	ctx.r5.s64 = ctx.r11.s64 + -5488;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,417
	ctx.r7.s64 = 417;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D33B8;
	sub_8320CF10(ctx, base);
	// b 0x832d33d4
	goto loc_832D33D4;
loc_832D33BC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x83212a88
	ctx.lr = 0x832D33D4;
	sub_83212A88(ctx, base);
loc_832D33D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D33E0"))) PPC_WEAK_FUNC(sub_832D33E0);
PPC_FUNC_IMPL(__imp__sub_832D33E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D33E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6000
	ctx.r29.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d3428
	if (!ctx.cr6.eq) goto loc_832D3428;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5652
	ctx.r5.s64 = ctx.r11.s64 + 5652;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,445
	ctx.r7.s64 = 445;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3428;
	sub_8320CF10(ctx, base);
loc_832D3428:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d344c
	if (!ctx.cr6.eq) goto loc_832D344C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5144
	ctx.r5.s64 = ctx.r11.s64 + -5144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,446
	ctx.r7.s64 = 446;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D344C;
	sub_8320CF10(ctx, base);
loc_832D344C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x832d3474
	if (ctx.cr6.gt) goto loc_832D3474;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6216
	ctx.r5.s64 = ctx.r11.s64 + 6216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,450
	ctx.r7.s64 = 450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3474;
	sub_8320CF10(ctx, base);
loc_832D3474:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83212cf8
	ctx.lr = 0x832D347C;
	sub_83212CF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d34a0
	if (ctx.cr0.eq) goto loc_832D34A0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6180
	ctx.r5.s64 = ctx.r11.s64 + 6180;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,451
	ctx.r7.s64 = 451;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D34A0;
	sub_8320CF10(ctx, base);
loc_832D34A0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83212ba8
	ctx.lr = 0x832D34A8;
	sub_83212BA8(ctx, base);
	// bl 0x83213410
	ctx.lr = 0x832D34AC;
	sub_83213410(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832D34BC;
	sub_82CB16F0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d2fe8
	ctx.lr = 0x832D34C8;
	sub_832D2FE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D34DC"))) PPC_WEAK_FUNC(sub_832D34DC);
PPC_FUNC_IMPL(__imp__sub_832D34DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D34E0"))) PPC_WEAK_FUNC(sub_832D34E0);
PPC_FUNC_IMPL(__imp__sub_832D34E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832D34E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6000
	ctx.r29.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d3524
	if (!ctx.cr6.eq) goto loc_832D3524;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5672
	ctx.r5.s64 = ctx.r11.s64 + 5672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,596
	ctx.r7.s64 = 596;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3524;
	sub_8320CF10(ctx, base);
loc_832D3524:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d354c
	if (ctx.cr6.eq) goto loc_832D354C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5972
	ctx.r5.s64 = ctx.r11.s64 + 5972;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,597
	ctx.r7.s64 = 597;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D354C;
	sub_8320CF10(ctx, base);
loc_832D354C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d355c
	if (ctx.cr6.eq) goto loc_832D355C;
	// bl 0x832d2d68
	ctx.lr = 0x832D355C;
	sub_832D2D68(ctx, base);
loc_832D355C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d356c
	if (ctx.cr6.eq) goto loc_832D356C;
	// bl 0x832d2d68
	ctx.lr = 0x832D356C;
	sub_832D2D68(ctx, base);
loc_832D356C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D3580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D3588"))) PPC_WEAK_FUNC(sub_832D3588);
PPC_FUNC_IMPL(__imp__sub_832D3588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D3590;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6000
	ctx.r29.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d35cc
	if (!ctx.cr6.eq) goto loc_832D35CC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5672
	ctx.r5.s64 = ctx.r11.s64 + 5672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,632
	ctx.r7.s64 = 632;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D35CC;
	sub_8320CF10(ctx, base);
loc_832D35CC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d2ee8
	ctx.lr = 0x832D35D4;
	sub_832D2EE8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832d35fc
	if (!ctx.cr0.eq) goto loc_832D35FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5488
	ctx.r5.s64 = ctx.r11.s64 + -5488;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,638
	ctx.r7.s64 = 638;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D35F8;
	sub_8320CF10(ctx, base);
	// b 0x832d3614
	goto loc_832D3614;
loc_832D35FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x83213418
	ctx.lr = 0x832D3614;
	sub_83213418(ctx, base);
loc_832D3614:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D3620"))) PPC_WEAK_FUNC(sub_832D3620);
PPC_FUNC_IMPL(__imp__sub_832D3620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D3628;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6000
	ctx.r29.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d3668
	if (!ctx.cr6.eq) goto loc_832D3668;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5672
	ctx.r5.s64 = ctx.r11.s64 + 5672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,666
	ctx.r7.s64 = 666;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3668;
	sub_8320CF10(ctx, base);
loc_832D3668:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d368c
	if (!ctx.cr6.eq) goto loc_832D368C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5044
	ctx.r5.s64 = ctx.r11.s64 + -5044;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,667
	ctx.r7.s64 = 667;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D368C;
	sub_8320CF10(ctx, base);
loc_832D368C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x832d36b4
	if (ctx.cr6.gt) goto loc_832D36B4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6124
	ctx.r5.s64 = ctx.r11.s64 + 6124;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,671
	ctx.r7.s64 = 671;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D36B4;
	sub_8320CF10(ctx, base);
loc_832D36B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83213648
	ctx.lr = 0x832D36BC;
	sub_83213648(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d36e0
	if (ctx.cr0.eq) goto loc_832D36E0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6244
	ctx.r5.s64 = ctx.r11.s64 + 6244;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,672
	ctx.r7.s64 = 672;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D36E0;
	sub_8320CF10(ctx, base);
loc_832D36E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83213538
	ctx.lr = 0x832D36E8;
	sub_83213538(ctx, base);
	// bl 0x83214268
	ctx.lr = 0x832D36EC;
	sub_83214268(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x832D36FC;
	sub_82CB16F0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832d2fe8
	ctx.lr = 0x832D3708;
	sub_832D2FE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D371C"))) PPC_WEAK_FUNC(sub_832D371C);
PPC_FUNC_IMPL(__imp__sub_832D371C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D3720"))) PPC_WEAK_FUNC(sub_832D3720);
PPC_FUNC_IMPL(__imp__sub_832D3720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D3728;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,6000
	ctx.r24.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d3774
	if (!ctx.cr6.eq) goto loc_832D3774;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,86
	ctx.r7.s64 = 86;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3774;
	sub_8320CF10(ctx, base);
loc_832D3774:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d3798
	if (!ctx.cr6.eq) goto loc_832D3798;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,87
	ctx.r7.s64 = 87;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3798;
	sub_8320CF10(ctx, base);
loc_832D3798:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d37bc
	if (!ctx.cr6.eq) goto loc_832D37BC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6368
	ctx.r5.s64 = ctx.r11.s64 + 6368;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D37BC;
	sub_8320CF10(ctx, base);
loc_832D37BC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d37e0
	if (!ctx.cr6.eq) goto loc_832D37E0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6348
	ctx.r5.s64 = ctx.r11.s64 + 6348;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,89
	ctx.r7.s64 = 89;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D37E0;
	sub_8320CF10(ctx, base);
loc_832D37E0:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x832D37F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d3818
	if (!ctx.cr0.eq) goto loc_832D3818;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6336
	ctx.r5.s64 = ctx.r11.s64 + 6336;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3814;
	sub_8320CF10(ctx, base);
	// b 0x832d38ac
	goto loc_832D38AC;
loc_832D3818:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83212428
	ctx.lr = 0x832D3840;
	sub_83212428(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83212498
	ctx.lr = 0x832D3858;
	sub_83212498(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d3870
	if (ctx.cr0.eq) goto loc_832D3870;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d38ac
	if (!ctx.cr6.eq) goto loc_832D38AC;
loc_832D3870:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d3884
	if (ctx.cr6.eq) goto loc_832D3884;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d38a0
	if (!ctx.cr6.eq) goto loc_832D38A0;
loc_832D3884:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6280
	ctx.r5.s64 = ctx.r11.s64 + 6280;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,123
	ctx.r7.s64 = 123;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D38A0;
	sub_8320CF10(ctx, base);
loc_832D38A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d3050
	ctx.lr = 0x832D38A8;
	sub_832D3050(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_832D38AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D38B8"))) PPC_WEAK_FUNC(sub_832D38B8);
PPC_FUNC_IMPL(__imp__sub_832D38B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D38C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,6000
	ctx.r24.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d390c
	if (!ctx.cr6.eq) goto loc_832D390C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,312
	ctx.r7.s64 = 312;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D390C;
	sub_8320CF10(ctx, base);
loc_832D390C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d3930
	if (!ctx.cr6.eq) goto loc_832D3930;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,313
	ctx.r7.s64 = 313;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3930;
	sub_8320CF10(ctx, base);
loc_832D3930:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d3954
	if (!ctx.cr6.eq) goto loc_832D3954;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6368
	ctx.r5.s64 = ctx.r11.s64 + 6368;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,314
	ctx.r7.s64 = 314;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3954;
	sub_8320CF10(ctx, base);
loc_832D3954:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d3978
	if (!ctx.cr6.eq) goto loc_832D3978;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6348
	ctx.r5.s64 = ctx.r11.s64 + 6348;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,315
	ctx.r7.s64 = 315;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3978;
	sub_8320CF10(ctx, base);
loc_832D3978:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x832D3988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d39b0
	if (!ctx.cr0.eq) goto loc_832D39B0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6336
	ctx.r5.s64 = ctx.r11.s64 + 6336;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,322
	ctx.r7.s64 = 322;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D39AC;
	sub_8320CF10(ctx, base);
	// b 0x832d3a44
	goto loc_832D3A44;
loc_832D39B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83213330
	ctx.lr = 0x832D39D8;
	sub_83213330(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832133a0
	ctx.lr = 0x832D39F0;
	sub_832133A0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d3a08
	if (ctx.cr0.eq) goto loc_832D3A08;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d3a44
	if (!ctx.cr6.eq) goto loc_832D3A44;
loc_832D3A08:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d3a1c
	if (ctx.cr6.eq) goto loc_832D3A1C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d3a38
	if (!ctx.cr6.eq) goto loc_832D3A38;
loc_832D3A1C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6280
	ctx.r5.s64 = ctx.r11.s64 + 6280;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,349
	ctx.r7.s64 = 349;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3A38;
	sub_8320CF10(ctx, base);
loc_832D3A38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d32a0
	ctx.lr = 0x832D3A40;
	sub_832D32A0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_832D3A44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D3A50"))) PPC_WEAK_FUNC(sub_832D3A50);
PPC_FUNC_IMPL(__imp__sub_832D3A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D3A58;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,6000
	ctx.r24.s64 = ctx.r10.s64 + 6000;
	// bne cr6,0x832d3aa4
	if (!ctx.cr6.eq) goto loc_832D3AA4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,533
	ctx.r7.s64 = 533;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3AA4;
	sub_8320CF10(ctx, base);
loc_832D3AA4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d3ac8
	if (!ctx.cr6.eq) goto loc_832D3AC8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,534
	ctx.r7.s64 = 534;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3AC8;
	sub_8320CF10(ctx, base);
loc_832D3AC8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d3aec
	if (!ctx.cr6.eq) goto loc_832D3AEC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6368
	ctx.r5.s64 = ctx.r11.s64 + 6368;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,535
	ctx.r7.s64 = 535;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3AEC;
	sub_8320CF10(ctx, base);
loc_832D3AEC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d3b10
	if (!ctx.cr6.eq) goto loc_832D3B10;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6348
	ctx.r5.s64 = ctx.r11.s64 + 6348;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,536
	ctx.r7.s64 = 536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3B10;
	sub_8320CF10(ctx, base);
loc_832D3B10:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x832D3B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d3b48
	if (!ctx.cr0.eq) goto loc_832D3B48;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6336
	ctx.r5.s64 = ctx.r11.s64 + 6336;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,543
	ctx.r7.s64 = 543;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3B44;
	sub_8320CF10(ctx, base);
	// b 0x832d3bdc
	goto loc_832D3BDC;
loc_832D3B48:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214188
	ctx.lr = 0x832D3B70;
	sub_83214188(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832141f8
	ctx.lr = 0x832D3B88;
	sub_832141F8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d3ba0
	if (ctx.cr0.eq) goto loc_832D3BA0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d3bdc
	if (!ctx.cr6.eq) goto loc_832D3BDC;
loc_832D3BA0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d3bb4
	if (ctx.cr6.eq) goto loc_832D3BB4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d3bd0
	if (!ctx.cr6.eq) goto loc_832D3BD0;
loc_832D3BB4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6280
	ctx.r5.s64 = ctx.r11.s64 + 6280;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,570
	ctx.r7.s64 = 570;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3BD0;
	sub_8320CF10(ctx, base);
loc_832D3BD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d34e0
	ctx.lr = 0x832D3BD8;
	sub_832D34E0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_832D3BDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D3BE8"))) PPC_WEAK_FUNC(sub_832D3BE8);
PPC_FUNC_IMPL(__imp__sub_832D3BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832D3BF0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r24,r11,-21168
	ctx.r24.s64 = ctx.r11.s64 + -21168;
	// addi r23,r10,6424
	ctx.r23.s64 = ctx.r10.s64 + 6424;
	// bne cr6,0x832d3c40
	if (!ctx.cr6.eq) goto loc_832D3C40;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,154
	ctx.r7.s64 = 154;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3C40;
	sub_8320CF10(ctx, base);
loc_832D3C40:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d3c64
	if (!ctx.cr6.eq) goto loc_832D3C64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,155
	ctx.r7.s64 = 155;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3C64;
	sub_8320CF10(ctx, base);
loc_832D3C64:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d3c88
	if (!ctx.cr6.eq) goto loc_832D3C88;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,-4812
	ctx.r5.s64 = ctx.r11.s64 + -4812;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,156
	ctx.r7.s64 = 156;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3C88;
	sub_8320CF10(ctx, base);
loc_832D3C88:
	// li r4,1192
	ctx.r4.s64 = 1192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x832D3C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d3cc4
	if (!ctx.cr0.eq) goto loc_832D3CC4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,6416
	ctx.r5.s64 = ctx.r11.s64 + 6416;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,162
	ctx.r7.s64 = 162;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3CBC;
	sub_8320CF10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832d3d30
	goto loc_832D3D30;
loc_832D3CC4:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// bne cr6,0x832d3cf0
	if (!ctx.cr6.eq) goto loc_832D3CF0;
	// stw r28,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r28.u32);
	// b 0x832d3d1c
	goto loc_832D3D1C;
loc_832D3CF0:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x832d3d14
	if (ctx.cr6.eq) goto loc_832D3D14;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,6388
	ctx.r5.s64 = ctx.r11.s64 + 6388;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,186
	ctx.r7.s64 = 186;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3D14;
	sub_8320CF10(ctx, base);
loc_832D3D14:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
loc_832D3D1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1184, ctx.r11.u32);
	// stw r11,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r11.u32);
loc_832D3D30:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D3D38"))) PPC_WEAK_FUNC(sub_832D3D38);
PPC_FUNC_IMPL(__imp__sub_832D3D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832D3D40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,6424
	ctx.r29.s64 = ctx.r10.s64 + 6424;
	// bne cr6,0x832d3d84
	if (!ctx.cr6.eq) goto loc_832D3D84;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6628
	ctx.r5.s64 = ctx.r11.s64 + 6628;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,234
	ctx.r7.s64 = 234;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3D84;
	sub_8320CF10(ctx, base);
loc_832D3D84:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d3da8
	if (!ctx.cr6.eq) goto loc_832D3DA8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6620
	ctx.r5.s64 = ctx.r11.s64 + 6620;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,235
	ctx.r7.s64 = 235;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3DA8;
	sub_8320CF10(ctx, base);
loc_832D3DA8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832d3dd0
	if (!ctx.cr6.eq) goto loc_832D3DD0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6588
	ctx.r5.s64 = ctx.r11.s64 + 6588;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,238
	ctx.r7.s64 = 238;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3DD0;
	sub_8320CF10(ctx, base);
loc_832D3DD0:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832d3df8
	if (!ctx.cr6.eq) goto loc_832D3DF8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6556
	ctx.r5.s64 = ctx.r11.s64 + 6556;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,239
	ctx.r7.s64 = 239;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3DF8;
	sub_8320CF10(ctx, base);
loc_832D3DF8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x832d3e24
	if (!ctx.cr6.eq) goto loc_832D3E24;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,6524
	ctx.r5.s64 = ctx.r11.s64 + 6524;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,240
	ctx.r7.s64 = 240;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3E24;
	sub_8320CF10(ctx, base);
loc_832D3E24:
	// lwz r10,1188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// lwz r11,1188(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1188);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x832d3e40
	if (!ctx.cr6.gt) goto loc_832D3E40;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832d3f2c
	goto loc_832D3F2C;
loc_832D3E40:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832d3e58
	if (!ctx.cr6.eq) goto loc_832D3E58;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// b 0x832d3e60
	goto loc_832D3E60;
loc_832D3E58:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_832D3E60:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832d3be8
	ctx.lr = 0x832D3E7C;
	sub_832D3BE8(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d3e90
	if (!ctx.cr0.eq) goto loc_832D3E90;
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x832d3f2c
	goto loc_832D3F2C;
loc_832D3E90:
	// lwz r11,1188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1188);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x832d3ed8
	if (!ctx.cr6.gt) goto loc_832D3ED8;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,24
	ctx.r30.s64 = ctx.r29.s64 + 24;
loc_832D3EA8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82cb1160
	ctx.lr = 0x832D3EC0;
	sub_82CB1160(ctx, base);
	// lwz r11,1188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1188);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x832d3ea8
	if (ctx.cr6.lt) goto loc_832D3EA8;
loc_832D3ED8:
	// lwz r11,1188(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1188);
	// li r28,31
	ctx.r28.s64 = 31;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x832d3f28
	if (ctx.cr6.gt) goto loc_832D3F28;
	// li r31,1116
	ctx.r31.s64 = 1116;
	// addi r30,r29,1140
	ctx.r30.s64 = ctx.r29.s64 + 1140;
loc_832D3EF4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82cb1160
	ctx.lr = 0x832D3F0C;
	sub_82CB1160(ctx, base);
	// lwz r11,1188(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1188);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// addi r31,r31,-36
	ctx.r31.s64 = ctx.r31.s64 + -36;
	// addi r30,r30,-36
	ctx.r30.s64 = ctx.r30.s64 + -36;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x832d3ef4
	if (!ctx.cr6.lt) goto loc_832D3EF4;
loc_832D3F28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D3F2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D3F34"))) PPC_WEAK_FUNC(sub_832D3F34);
PPC_FUNC_IMPL(__imp__sub_832D3F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D3F38"))) PPC_WEAK_FUNC(sub_832D3F38);
PPC_FUNC_IMPL(__imp__sub_832D3F38) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832D3F50"))) PPC_WEAK_FUNC(sub_832D3F50);
PPC_FUNC_IMPL(__imp__sub_832D3F50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D3F58"))) PPC_WEAK_FUNC(sub_832D3F58);
PPC_FUNC_IMPL(__imp__sub_832D3F58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1188);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D3F60"))) PPC_WEAK_FUNC(sub_832D3F60);
PPC_FUNC_IMPL(__imp__sub_832D3F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x832D3F68;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,-21168
	ctx.r31.s64 = ctx.r11.s64 + -21168;
	// addi r30,r10,6424
	ctx.r30.s64 = ctx.r10.s64 + 6424;
	// bne cr6,0x832d3fb4
	if (!ctx.cr6.eq) goto loc_832D3FB4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,6416
	ctx.r5.s64 = ctx.r11.s64 + 6416;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,394
	ctx.r7.s64 = 394;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3FB4;
	sub_8320CF10(ctx, base);
loc_832D3FB4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d3fd8
	if (!ctx.cr6.eq) goto loc_832D3FD8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,6828
	ctx.r5.s64 = ctx.r11.s64 + 6828;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,395
	ctx.r7.s64 = 395;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3FD8;
	sub_8320CF10(ctx, base);
loc_832D3FD8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x832d3ffc
	if (!ctx.cr6.eq) goto loc_832D3FFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,6816
	ctx.r5.s64 = ctx.r11.s64 + 6816;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,396
	ctx.r7.s64 = 396;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D3FFC;
	sub_8320CF10(ctx, base);
loc_832D3FFC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x832d4024
	if (!ctx.cr6.eq) goto loc_832D4024;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,6784
	ctx.r5.s64 = ctx.r11.s64 + 6784;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,397
	ctx.r7.s64 = 397;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4024;
	sub_8320CF10(ctx, base);
loc_832D4024:
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x832d4034
	if (ctx.cr6.eq) goto loc_832D4034;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x832d4050
	if (!ctx.cr6.eq) goto loc_832D4050;
loc_832D4034:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,6704
	ctx.r5.s64 = ctx.r11.s64 + 6704;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,400
	ctx.r7.s64 = 400;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4050;
	sub_8320CF10(ctx, base);
loc_832D4050:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832d40a4
	if (!ctx.cr6.eq) goto loc_832D40A4;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x832d4094
	if (!ctx.cr6.eq) goto loc_832D4094;
	// cmplwi cr6,r27,96
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 96, ctx.xer);
	// blt cr6,0x832d4074
	if (ctx.cr6.lt) goto loc_832D4074;
loc_832D406C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832d4104
	goto loc_832D4104;
loc_832D4074:
	// subfic r11,r27,95
	ctx.xer.ca = ctx.r27.u32 <= 95;
	ctx.r11.s64 = 95 - ctx.r27.s64;
	// li r10,3
	ctx.r10.s64 = 3;
	// divwu r9,r11,r10
	ctx.r9.u32 = ctx.r11.u32 / ctx.r10.u32;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// b 0x832d40fc
	goto loc_832D40FC;
loc_832D4094:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x832d40ec
	if (ctx.cr6.eq) goto loc_832D40EC;
	// li r7,419
	ctx.r7.s64 = 419;
	// b 0x832d40d4
	goto loc_832D40D4;
loc_832D40A4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832d40c8
	if (ctx.cr6.eq) goto loc_832D40C8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,6668
	ctx.r5.s64 = ctx.r11.s64 + 6668;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,431
	ctx.r7.s64 = 431;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D40C8;
	sub_8320CF10(ctx, base);
loc_832D40C8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x832d40ec
	if (ctx.cr6.eq) goto loc_832D40EC;
	// li r7,432
	ctx.r7.s64 = 432;
loc_832D40D4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,6636
	ctx.r5.s64 = ctx.r11.s64 + 6636;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D40EC;
	sub_8320CF10(ctx, base);
loc_832D40EC:
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32, ctx.xer);
	// bge cr6,0x832d406c
	if (!ctx.cr6.lt) goto loc_832D406C;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_832D40FC:
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D4104:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D410C"))) PPC_WEAK_FUNC(sub_832D410C);
PPC_FUNC_IMPL(__imp__sub_832D410C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D4110"))) PPC_WEAK_FUNC(sub_832D4110);
PPC_FUNC_IMPL(__imp__sub_832D4110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832D4118;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r27,r9,-21168
	ctx.r27.s64 = ctx.r9.s64 + -21168;
	// addi r26,r10,6424
	ctx.r26.s64 = ctx.r10.s64 + 6424;
	// bne cr6,0x832d4158
	if (!ctx.cr6.eq) goto loc_832D4158;
	// lwz r29,1188(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832d4188
	goto loc_832D4188;
loc_832D4158:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832d417c
	if (ctx.cr6.eq) goto loc_832D417C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,6668
	ctx.r5.s64 = ctx.r11.s64 + 6668;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,666
	ctx.r7.s64 = 666;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D417C;
	sub_8320CF10(ctx, base);
loc_832D417C:
	// lwz r11,1188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// li r29,32
	ctx.r29.s64 = 32;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
loc_832D4188:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x832d4224
	if (!ctx.cr6.lt) goto loc_832D4224;
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r28,r11,6840
	ctx.r28.s64 = ctx.r11.s64 + 6840;
loc_832D41A8:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832d41cc
	if (ctx.cr6.eq) goto loc_832D41CC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,674
	ctx.r7.s64 = 674;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D41CC;
	sub_8320CF10(ctx, base);
loc_832D41CC:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832d4214
	if (!ctx.cr6.eq) goto loc_832D4214;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832d4214
	if (ctx.cr6.eq) goto loc_832D4214;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
loc_832D41EC:
	// lwz r8,-12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x832d4204
	if (!ctx.cr6.eq) goto loc_832D4204;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x832d4230
	if (ctx.cr6.eq) goto loc_832D4230;
loc_832D4204:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x832d41ec
	if (ctx.cr6.lt) goto loc_832D41EC;
loc_832D4214:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x832d41a8
	if (ctx.cr6.lt) goto loc_832D41A8;
loc_832D4224:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D4228:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_832D4230:
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// b 0x832d4228
	goto loc_832D4228;
}

__attribute__((alias("__imp__sub_832D4240"))) PPC_WEAK_FUNC(sub_832D4240);
PPC_FUNC_IMPL(__imp__sub_832D4240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832D4248;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r27,r9,-21168
	ctx.r27.s64 = ctx.r9.s64 + -21168;
	// addi r26,r10,6424
	ctx.r26.s64 = ctx.r10.s64 + 6424;
	// bne cr6,0x832d4288
	if (!ctx.cr6.eq) goto loc_832D4288;
	// lwz r28,1188(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832d42b8
	goto loc_832D42B8;
loc_832D4288:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832d42ac
	if (ctx.cr6.eq) goto loc_832D42AC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,6668
	ctx.r5.s64 = ctx.r11.s64 + 6668;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,740
	ctx.r7.s64 = 740;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D42AC;
	sub_8320CF10(ctx, base);
loc_832D42AC:
	// lwz r11,1188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// li r28,32
	ctx.r28.s64 = 32;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
loc_832D42B8:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x832d432c
	if (!ctx.cr6.lt) goto loc_832D432C;
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r11,6840
	ctx.r29.s64 = ctx.r11.s64 + 6840;
loc_832D42D8:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832d42fc
	if (ctx.cr6.eq) goto loc_832D42FC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,748
	ctx.r7.s64 = 748;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D42FC;
	sub_8320CF10(ctx, base);
loc_832D42FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832d431c
	if (ctx.cr6.eq) goto loc_832D431C;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x832d431c
	if (!ctx.cr6.eq) goto loc_832D431C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x832d4338
	if (ctx.cr6.eq) goto loc_832D4338;
loc_832D431C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x832d42d8
	if (ctx.cr6.lt) goto loc_832D42D8;
loc_832D432C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D4330:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_832D4338:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// b 0x832d4330
	goto loc_832D4330;
}

__attribute__((alias("__imp__sub_832D434C"))) PPC_WEAK_FUNC(sub_832D434C);
PPC_FUNC_IMPL(__imp__sub_832D434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D4350"))) PPC_WEAK_FUNC(sub_832D4350);
PPC_FUNC_IMPL(__imp__sub_832D4350) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,36
	ctx.r11.s64 = ctx.r4.s64 * 36;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D4360"))) PPC_WEAK_FUNC(sub_832D4360);
PPC_FUNC_IMPL(__imp__sub_832D4360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x832D4368;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x832d43a4
	if (!ctx.cr6.eq) goto loc_832D43A4;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83214f50
	ctx.lr = 0x832D43A0;
	sub_83214F50(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_832D43A4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r24,r10,-21168
	ctx.r24.s64 = ctx.r10.s64 + -21168;
	// addi r23,r9,6424
	ctx.r23.s64 = ctx.r9.s64 + 6424;
	// bne cr6,0x832d43cc
	if (!ctx.cr6.eq) goto loc_832D43CC;
	// lwz r25,1188(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832d43fc
	goto loc_832D43FC;
loc_832D43CC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x832d43f0
	if (ctx.cr6.eq) goto loc_832D43F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,6668
	ctx.r5.s64 = ctx.r11.s64 + 6668;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,571
	ctx.r7.s64 = 571;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D43F0;
	sub_8320CF10(ctx, base);
loc_832D43F0:
	// lwz r11,1188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// li r25,32
	ctx.r25.s64 = 32;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
loc_832D43FC:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x832d44e4
	if (!ctx.cr6.lt) goto loc_832D44E4;
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r29,r11,32
	ctx.r29.s64 = ctx.r11.s64 + 32;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r27,r10,6876
	ctx.r27.s64 = ctx.r10.s64 + 6876;
	// addi r26,r11,6840
	ctx.r26.s64 = ctx.r11.s64 + 6840;
loc_832D4424:
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832d4448
	if (ctx.cr6.eq) goto loc_832D4448;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,579
	ctx.r7.s64 = 579;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4448;
	sub_8320CF10(ctx, base);
loc_832D4448:
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832d44d4
	if (!ctx.cr6.eq) goto loc_832D44D4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832d44d4
	if (!ctx.cr6.gt) goto loc_832D44D4;
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
loc_832D4468:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x832d44c0
	if (!ctx.cr6.eq) goto loc_832D44C0;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x832d4494
	if (!ctx.cr6.eq) goto loc_832D4494;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83214f50
	ctx.lr = 0x832D448C;
	sub_83214F50(ctx, base);
	// cmplw cr6,r21,r3
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r3.u32, ctx.xer);
	// b 0x832d44bc
	goto loc_832D44BC;
loc_832D4494:
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 3, ctx.xer);
	// beq cr6,0x832d44b4
	if (ctx.cr6.eq) goto loc_832D44B4;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,606
	ctx.r7.s64 = 606;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D44B4;
	sub_8320CF10(ctx, base);
loc_832D44B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
loc_832D44BC:
	// beq cr6,0x832d44f0
	if (ctx.cr6.eq) goto loc_832D44F0;
loc_832D44C0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d4468
	if (ctx.cr6.lt) goto loc_832D4468;
loc_832D44D4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x832d4424
	if (ctx.cr6.lt) goto loc_832D4424;
loc_832D44E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D44E8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
loc_832D44F0:
	// stw r28,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r30.u32);
	// b 0x832d44e8
	goto loc_832D44E8;
}

__attribute__((alias("__imp__sub_832D4500"))) PPC_WEAK_FUNC(sub_832D4500);
PPC_FUNC_IMPL(__imp__sub_832D4500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D4508;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,6424
	ctx.r28.s64 = ctx.r10.s64 + 6424;
	// bne cr6,0x832d4558
	if (!ctx.cr6.eq) goto loc_832D4558;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,6416
	ctx.r5.s64 = ctx.r11.s64 + 6416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,811
	ctx.r7.s64 = 811;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4558;
	sub_8320CF10(ctx, base);
loc_832D4558:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x832d457c
	if (!ctx.cr6.eq) goto loc_832D457C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5864
	ctx.r5.s64 = ctx.r11.s64 + -5864;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,812
	ctx.r7.s64 = 812;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D457C;
	sub_8320CF10(ctx, base);
loc_832D457C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d45a0
	if (!ctx.cr6.eq) goto loc_832D45A0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,6828
	ctx.r5.s64 = ctx.r11.s64 + 6828;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,813
	ctx.r7.s64 = 813;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D45A0;
	sub_8320CF10(ctx, base);
loc_832D45A0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d45c4
	if (!ctx.cr6.eq) goto loc_832D45C4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,6816
	ctx.r5.s64 = ctx.r11.s64 + 6816;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,814
	ctx.r7.s64 = 814;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D45C4;
	sub_8320CF10(ctx, base);
loc_832D45C4:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x832d461c
	if (ctx.cr6.eq) goto loc_832D461C;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x832d461c
	if (ctx.cr6.eq) goto loc_832D461C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x832d4600
	if (ctx.cr6.eq) goto loc_832D4600;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x832d4600
	if (ctx.cr6.eq) goto loc_832D4600;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,6920
	ctx.r5.s64 = ctx.r11.s64 + 6920;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,833
	ctx.r7.s64 = 833;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4600;
	sub_8320CF10(ctx, base);
loc_832D4600:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d4240
	ctx.lr = 0x832D4618;
	sub_832D4240(ctx, base);
	// b 0x832d465c
	goto loc_832D465C;
loc_832D461C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d4648
	if (ctx.cr6.eq) goto loc_832D4648;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x832d4360
	ctx.lr = 0x832D4644;
	sub_832D4360(ctx, base);
	// b 0x832d465c
	goto loc_832D465C;
loc_832D4648:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832d4110
	ctx.lr = 0x832D465C;
	sub_832D4110(ctx, base);
loc_832D465C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D4664"))) PPC_WEAK_FUNC(sub_832D4664);
PPC_FUNC_IMPL(__imp__sub_832D4664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D4668"))) PPC_WEAK_FUNC(sub_832D4668);
PPC_FUNC_IMPL(__imp__sub_832D4668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832D4670;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,6424
	ctx.r24.s64 = ctx.r10.s64 + 6424;
	// bne cr6,0x832d46c4
	if (!ctx.cr6.eq) goto loc_832D46C4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6416
	ctx.r5.s64 = ctx.r11.s64 + 6416;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,882
	ctx.r7.s64 = 882;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D46C4;
	sub_8320CF10(ctx, base);
loc_832D46C4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d46e8
	if (!ctx.cr6.eq) goto loc_832D46E8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-5864
	ctx.r5.s64 = ctx.r11.s64 + -5864;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,883
	ctx.r7.s64 = 883;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D46E8;
	sub_8320CF10(ctx, base);
loc_832D46E8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d470c
	if (!ctx.cr6.eq) goto loc_832D470C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6828
	ctx.r5.s64 = ctx.r11.s64 + 6828;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,884
	ctx.r7.s64 = 884;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D470C;
	sub_8320CF10(ctx, base);
loc_832D470C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d4730
	if (!ctx.cr6.eq) goto loc_832D4730;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6816
	ctx.r5.s64 = ctx.r11.s64 + 6816;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,885
	ctx.r7.s64 = 885;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4730;
	sub_8320CF10(ctx, base);
loc_832D4730:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d4500
	ctx.lr = 0x832D474C;
	sub_832D4500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d4790
	if (!ctx.cr0.eq) goto loc_832D4790;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d3f60
	ctx.lr = 0x832D476C;
	sub_832D3F60(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq 0x832d4790
	if (ctx.cr0.eq) goto loc_832D4790;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,6992
	ctx.r5.s64 = ctx.r11.s64 + 6992;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,893
	ctx.r7.s64 = 893;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4790;
	sub_8320CF10(ctx, base);
loc_832D4790:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D479C"))) PPC_WEAK_FUNC(sub_832D479C);
PPC_FUNC_IMPL(__imp__sub_832D479C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D47A0"))) PPC_WEAK_FUNC(sub_832D47A0);
PPC_FUNC_IMPL(__imp__sub_832D47A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D47A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,7056
	ctx.r29.s64 = ctx.r10.s64 + 7056;
	// bge cr6,0x832d47ec
	if (!ctx.cr6.lt) goto loc_832D47EC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7040
	ctx.r5.s64 = ctx.r11.s64 + 7040;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,248
	ctx.r7.s64 = 248;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D47EC;
	sub_8320CF10(ctx, base);
loc_832D47EC:
	// cmpwi cr6,r31,44
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 44, ctx.xer);
	// blt cr6,0x832d4810
	if (ctx.cr6.lt) goto loc_832D4810;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7012
	ctx.r5.s64 = ctx.r11.s64 + 7012;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,249
	ctx.r7.s64 = 249;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4810;
	sub_8320CF10(ctx, base);
loc_832D4810:
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-6640
	ctx.r11.s64 = ctx.r11.s64 + -6640;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D483C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D4848"))) PPC_WEAK_FUNC(sub_832D4848);
PPC_FUNC_IMPL(__imp__sub_832D4848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D4850;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,7056
	ctx.r29.s64 = ctx.r10.s64 + 7056;
	// bge cr6,0x832d4894
	if (!ctx.cr6.lt) goto loc_832D4894;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7040
	ctx.r5.s64 = ctx.r11.s64 + 7040;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,283
	ctx.r7.s64 = 283;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4894;
	sub_8320CF10(ctx, base);
loc_832D4894:
	// cmpwi cr6,r31,44
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 44, ctx.xer);
	// blt cr6,0x832d48b8
	if (ctx.cr6.lt) goto loc_832D48B8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7156
	ctx.r5.s64 = ctx.r11.s64 + 7156;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,284
	ctx.r7.s64 = 284;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D48B8;
	sub_8320CF10(ctx, base);
loc_832D48B8:
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-6816
	ctx.r11.s64 = ctx.r11.s64 + -6816;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D48E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D48EC"))) PPC_WEAK_FUNC(sub_832D48EC);
PPC_FUNC_IMPL(__imp__sub_832D48EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D48F0"))) PPC_WEAK_FUNC(sub_832D48F0);
PPC_FUNC_IMPL(__imp__sub_832D48F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D48F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d4928
	if (!ctx.cr6.eq) goto loc_832D4928;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,7192
	ctx.r6.s64 = ctx.r11.s64 + 7192;
	// addi r5,r10,7184
	ctx.r5.s64 = ctx.r10.s64 + 7184;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,285
	ctx.r7.s64 = 285;
	// bl 0x8320cf10
	ctx.lr = 0x832D4928;
	sub_8320CF10(ctx, base);
loc_832D4928:
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d49b0
	if (ctx.cr6.eq) goto loc_832D49B0;
	// b 0x832d499c
	goto loc_832D499C;
loc_832D4938:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214130
	ctx.lr = 0x832D4940;
	sub_83214130(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x832d4978
	goto loc_832D4978;
loc_832D4948:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214130
	ctx.lr = 0x832D4950;
	sub_83214130(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x832148b0
	ctx.lr = 0x832D495C;
	sub_832148B0(ctx, base);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x832148b0
	ctx.lr = 0x832D4964;
	sub_832148B0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x832d2fe8
	ctx.lr = 0x832D4970;
	sub_832D2FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832140f8
	ctx.lr = 0x832D4978;
	sub_832140F8(ctx, base);
loc_832D4978:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83213db8
	ctx.lr = 0x832D4980;
	sub_83213DB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d4948
	if (!ctx.cr0.eq) goto loc_832D4948;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83213538
	ctx.lr = 0x832D4990;
	sub_83213538(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832140f8
	ctx.lr = 0x832D4998;
	sub_832140F8(ctx, base);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
loc_832D499C:
	// bl 0x83213db8
	ctx.lr = 0x832D49A0;
	sub_83213DB8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832d4938
	if (!ctx.cr0.eq) goto loc_832D4938;
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x83213538
	ctx.lr = 0x832D49B0;
	sub_83213538(ctx, base);
loc_832D49B0:
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d49c0
	if (ctx.cr6.eq) goto loc_832D49C0;
	// bl 0x83312d70
	ctx.lr = 0x832D49C0;
	sub_83312D70(ctx, base);
loc_832D49C0:
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832d49d0
	if (ctx.cr6.eq) goto loc_832D49D0;
	// bl 0x832d2d68
	ctx.lr = 0x832D49D0;
	sub_832D2D68(ctx, base);
loc_832D49D0:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D49E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D49F0"))) PPC_WEAK_FUNC(sub_832D49F0);
PPC_FUNC_IMPL(__imp__sub_832D49F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832D49F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,7192
	ctx.r26.s64 = ctx.r10.s64 + 7192;
	// bne cr6,0x832d4a44
	if (!ctx.cr6.eq) goto loc_832D4A44;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,7184
	ctx.r5.s64 = ctx.r11.s64 + 7184;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,371
	ctx.r7.s64 = 371;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4A44;
	sub_8320CF10(ctx, base);
loc_832D4A44:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d4a68
	if (!ctx.cr6.eq) goto loc_832D4A68;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,7392
	ctx.r5.s64 = ctx.r11.s64 + 7392;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,372
	ctx.r7.s64 = 372;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4A68;
	sub_8320CF10(ctx, base);
loc_832D4A68:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d4a8c
	if (!ctx.cr6.eq) goto loc_832D4A8C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,7384
	ctx.r5.s64 = ctx.r11.s64 + 7384;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,373
	ctx.r7.s64 = 373;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4A8C;
	sub_8320CF10(ctx, base);
loc_832D4A8C:
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832ceb20
	ctx.lr = 0x832D4A98;
	sub_832CEB20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d4bec
	if (ctx.cr0.eq) goto loc_832D4BEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214a80
	ctx.lr = 0x832D4AA8;
	sub_83214A80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214a80
	ctx.lr = 0x832D4AB0;
	sub_83214A80(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x832d2ee8
	ctx.lr = 0x832D4AB8;
	sub_832D2EE8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832d4af4
	if (!ctx.cr0.eq) goto loc_832D4AF4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,7312
	ctx.r5.s64 = ctx.r11.s64 + 7312;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,389
	ctx.r7.s64 = 389;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4ADC;
	sub_8320CF10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832148b0
	ctx.lr = 0x832D4AE4;
	sub_832148B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832148b0
	ctx.lr = 0x832D4AEC;
	sub_832148B0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x832d4bf0
	goto loc_832D4BF0;
loc_832D4AF4:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// bl 0x83214cc0
	ctx.lr = 0x832D4B04;
	sub_83214CC0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214cc0
	ctx.lr = 0x832D4B10;
	sub_83214CC0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x833125b0
	ctx.lr = 0x832D4B28;
	sub_833125B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d4b40
	if (ctx.cr0.eq) goto loc_832D4B40;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83312670
	ctx.lr = 0x832D4B38;
	sub_83312670(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x832d4b98
	goto loc_832D4B98;
loc_832D4B40:
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832145c8
	ctx.lr = 0x832D4B54;
	sub_832145C8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832d4b78
	if (!ctx.cr0.eq) goto loc_832D4B78;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,7288
	ctx.r5.s64 = ctx.r11.s64 + 7288;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,422
	ctx.r7.s64 = 422;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4B78;
	sub_8320CF10(ctx, base);
loc_832D4B78:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x832138c0
	ctx.lr = 0x832D4B84;
	sub_832138C0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83312808
	ctx.lr = 0x832D4B98;
	sub_83312808(ctx, base);
loc_832D4B98:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213768
	ctx.lr = 0x832D4BA4;
	sub_83213768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213648
	ctx.lr = 0x832D4BAC;
	sub_83213648(ctx, base);
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// ble cr6,0x832d4bec
	if (!ctx.cr6.gt) goto loc_832D4BEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213e90
	ctx.lr = 0x832D4BBC;
	sub_83213E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83214130
	ctx.lr = 0x832D4BC4;
	sub_83214130(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x832148b0
	ctx.lr = 0x832D4BD0;
	sub_832148B0(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x832148b0
	ctx.lr = 0x832D4BD8;
	sub_832148B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x832d2fe8
	ctx.lr = 0x832D4BE4;
	sub_832D2FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832140f8
	ctx.lr = 0x832D4BEC;
	sub_832140F8(ctx, base);
loc_832D4BEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D4BF0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D4BF8"))) PPC_WEAK_FUNC(sub_832D4BF8);
PPC_FUNC_IMPL(__imp__sub_832D4BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D4C00;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,7192
	ctx.r26.s64 = ctx.r10.s64 + 7192;
	// bne cr6,0x832d4c4c
	if (!ctx.cr6.eq) goto loc_832D4C4C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,201
	ctx.r7.s64 = 201;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4C4C;
	sub_8320CF10(ctx, base);
loc_832D4C4C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x832d4c70
	if (!ctx.cr6.eq) goto loc_832D4C70;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,202
	ctx.r7.s64 = 202;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4C70;
	sub_8320CF10(ctx, base);
loc_832D4C70:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x832d4c94
	if (!ctx.cr6.eq) goto loc_832D4C94;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-2416
	ctx.r5.s64 = ctx.r11.s64 + -2416;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,203
	ctx.r7.s64 = 203;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4C94;
	sub_8320CF10(ctx, base);
loc_832D4C94:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x832d4cb8
	if (!ctx.cr6.eq) goto loc_832D4CB8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-4812
	ctx.r5.s64 = ctx.r11.s64 + -4812;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,204
	ctx.r7.s64 = 204;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4CB8;
	sub_8320CF10(ctx, base);
loc_832D4CB8:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x832D4CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d4cf4
	if (!ctx.cr0.eq) goto loc_832D4CF4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,7576
	ctx.r5.s64 = ctx.r11.s64 + 7576;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,210
	ctx.r7.s64 = 210;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4CEC;
	sub_8320CF10(ctx, base);
loc_832D4CEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832d4db8
	goto loc_832D4DB8;
loc_832D4CF4:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// bl 0x833126f8
	ctx.lr = 0x832D4D1C;
	sub_833126F8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d4d50
	if (!ctx.cr0.eq) goto loc_832D4D50;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r7,229
	ctx.r7.s64 = 229;
	// addi r5,r11,7520
	ctx.r5.s64 = ctx.r11.s64 + 7520;
loc_832D4D34:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4D44;
	sub_8320CF10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d48f0
	ctx.lr = 0x832D4D4C;
	sub_832D48F0(ctx, base);
	// b 0x832d4cec
	goto loc_832D4CEC;
loc_832D4D50:
	// li r6,50
	ctx.r6.s64 = 50;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832145c8
	ctx.lr = 0x832D4D64;
	sub_832145C8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d4d80
	if (!ctx.cr0.eq) goto loc_832D4D80;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r7,242
	ctx.r7.s64 = 242;
	// addi r5,r11,7460
	ctx.r5.s64 = ctx.r11.s64 + 7460;
	// b 0x832d4d34
	goto loc_832D4D34;
loc_832D4D80:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x832d2ca8
	ctx.lr = 0x832D4D98;
	sub_832D2CA8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d4db4
	if (!ctx.cr0.eq) goto loc_832D4DB4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r7,255
	ctx.r7.s64 = 255;
	// addi r5,r11,7400
	ctx.r5.s64 = ctx.r11.s64 + 7400;
	// b 0x832d4d34
	goto loc_832D4D34;
loc_832D4DB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832D4DB8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D4DC0"))) PPC_WEAK_FUNC(sub_832D4DC0);
PPC_FUNC_IMPL(__imp__sub_832D4DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x832D4DC8;
	__savegprlr_21(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,7192
	ctx.r28.s64 = ctx.r10.s64 + 7192;
	// bne cr6,0x832d4e08
	if (!ctx.cr6.eq) goto loc_832D4E08;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,7392
	ctx.r5.s64 = ctx.r11.s64 + 7392;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,496
	ctx.r7.s64 = 496;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4E08;
	sub_8320CF10(ctx, base);
loc_832D4E08:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x832d4e2c
	if (!ctx.cr6.eq) goto loc_832D4E2C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,7384
	ctx.r5.s64 = ctx.r11.s64 + 7384;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,497
	ctx.r7.s64 = 497;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4E2C;
	sub_8320CF10(ctx, base);
loc_832D4E2C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83215e08
	ctx.lr = 0x832D4E34;
	sub_83215E08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83215e08
	ctx.lr = 0x832D4E40;
	sub_83215E08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832d4e68
	if (!ctx.cr6.eq) goto loc_832D4E68;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,7856
	ctx.r5.s64 = ctx.r11.s64 + 7856;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,516
	ctx.r7.s64 = 516;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4E68;
	sub_8320CF10(ctx, base);
loc_832D4E68:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d4e8c
	if (!ctx.cr6.eq) goto loc_832D4E8C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,7848
	ctx.r5.s64 = ctx.r11.s64 + 7848;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,517
	ctx.r7.s64 = 517;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4E8C;
	sub_8320CF10(ctx, base);
loc_832D4E8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d3f50
	ctx.lr = 0x832D4E94;
	sub_832D3F50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d3f50
	ctx.lr = 0x832D4EA0;
	sub_832D3F50(ctx, base);
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x832d4ec4
	if (!ctx.cr6.eq) goto loc_832D4EC4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,7804
	ctx.r5.s64 = ctx.r11.s64 + 7804;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,518
	ctx.r7.s64 = 518;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4EC4;
	sub_8320CF10(ctx, base);
loc_832D4EC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d3f58
	ctx.lr = 0x832D4ECC;
	sub_832D3F58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d3f58
	ctx.lr = 0x832D4ED8;
	sub_832D3F58(ctx, base);
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x832d5044
	if (!ctx.cr6.lt) goto loc_832D5044;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r26,r10,7760
	ctx.r26.s64 = ctx.r10.s64 + 7760;
	// addi r25,r9,7716
	ctx.r25.s64 = ctx.r9.s64 + 7716;
	// addi r24,r8,7668
	ctx.r24.s64 = ctx.r8.s64 + 7668;
	// addi r27,r11,7620
	ctx.r27.s64 = ctx.r11.s64 + 7620;
loc_832D4F08:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83215270
	ctx.lr = 0x832D4F18;
	sub_83215270(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d5030
	if (ctx.cr6.eq) goto loc_832D5030;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83215270
	ctx.lr = 0x832D4F34;
	sub_83215270(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d5044
	if (ctx.cr6.eq) goto loc_832D5044;
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x832d4f94
	if (ctx.cr6.eq) goto loc_832D4F94;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x832d4f70
	if (ctx.cr6.lt) goto loc_832D4F70;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,554
	ctx.r7.s64 = 554;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4F70;
	sub_8320CF10(ctx, base);
loc_832D4F70:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x832d4f94
	if (ctx.cr6.lt) goto loc_832D4F94;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,555
	ctx.r7.s64 = 555;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4F94;
	sub_8320CF10(ctx, base);
loc_832D4F94:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832D4F98:
	// addi r30,r1,84
	ctx.r30.s64 = ctx.r1.s64 + 84;
	// addi r11,r1,244
	ctx.r11.s64 = ctx.r1.s64 + 244;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x832d4ff4
	if (ctx.cr6.eq) goto loc_832D4FF4;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// blt cr6,0x832d4fd0
	if (ctx.cr6.lt) goto loc_832D4FD0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,568
	ctx.r7.s64 = 568;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4FD0;
	sub_8320CF10(ctx, base);
loc_832D4FD0:
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// blt cr6,0x832d4ff4
	if (ctx.cr6.lt) goto loc_832D4FF4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,569
	ctx.r7.s64 = 569;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D4FF4;
	sub_8320CF10(ctx, base);
loc_832D4FF4:
	// addi r11,r1,260
	ctx.r11.s64 = ctx.r1.s64 + 260;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832d5044
	if (!ctx.cr6.eq) goto loc_832D5044;
	// addi r11,r1,356
	ctx.r11.s64 = ctx.r1.s64 + 356;
	// addi r10,r1,196
	ctx.r10.s64 = ctx.r1.s64 + 196;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832d5044
	if (!ctx.cr6.eq) goto loc_832D5044;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x832d4f98
	if (ctx.cr6.lt) goto loc_832D4F98;
loc_832D5030:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 16, ctx.xer);
	// blt cr6,0x832d4f08
	if (ctx.cr6.lt) goto loc_832D4F08;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832d5048
	goto loc_832D5048;
loc_832D5044:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D5048:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D5050"))) PPC_WEAK_FUNC(sub_832D5050);
PPC_FUNC_IMPL(__imp__sub_832D5050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x832D5058;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832ceb20
	ctx.lr = 0x832D507C;
	sub_832CEB20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d5158
	if (ctx.cr0.eq) goto loc_832D5158;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832D5090;
	sub_83214BF0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832D50A0;
	sub_83214BF0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x833125b0
	ctx.lr = 0x832D50B8;
	sub_833125B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d5158
	if (ctx.cr0.eq) goto loc_832D5158;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83312670
	ctx.lr = 0x832D50C8;
	sub_83312670(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83213648
	ctx.lr = 0x832D50D0;
	sub_83213648(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,7192
	ctx.r26.s64 = ctx.r10.s64 + 7192;
	// bne 0x832d5104
	if (!ctx.cr0.eq) goto loc_832D5104;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,7928
	ctx.r5.s64 = ctx.r11.s64 + 7928;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,685
	ctx.r7.s64 = 685;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5104;
	sub_8320CF10(ctx, base);
loc_832D5104:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832139f8
	ctx.lr = 0x832D510C;
	sub_832139F8(ctx, base);
	// b 0x832d5150
	goto loc_832D5150;
loc_832D5110:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214130
	ctx.lr = 0x832D5118;
	sub_83214130(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83215a08
	ctx.lr = 0x832D5128;
	sub_83215A08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d5144
	if (ctx.cr0.eq) goto loc_832D5144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83215a08
	ctx.lr = 0x832D513C;
	sub_83215A08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d5164
	if (!ctx.cr0.eq) goto loc_832D5164;
loc_832D5144:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214088
	ctx.lr = 0x832D5150;
	sub_83214088(ctx, base);
loc_832D5150:
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x832d5110
	if (!ctx.cr0.eq) goto loc_832D5110;
loc_832D5158:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D515C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_832D5164:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832d4dc0
	ctx.lr = 0x832D5170;
	sub_832D4DC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d5190
	if (!ctx.cr0.eq) goto loc_832D5190;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,7864
	ctx.r5.s64 = ctx.r11.s64 + 7864;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,699
	ctx.r7.s64 = 699;
	// bl 0x8320cf10
	ctx.lr = 0x832D5190;
	sub_8320CF10(ctx, base);
loc_832D5190:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83214a80
	ctx.lr = 0x832D5198;
	sub_83214A80(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83214a80
	ctx.lr = 0x832D51A0;
	sub_83214A80(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832ebea8
	ctx.lr = 0x832D51B0;
	sub_832EBEA8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832ebfb0
	ctx.lr = 0x832D51C0;
	sub_832EBFB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213f68
	ctx.lr = 0x832D51CC;
	sub_83213F68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832136a0
	ctx.lr = 0x832D51D8;
	sub_832136A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832d515c
	goto loc_832D515C;
}

__attribute__((alias("__imp__sub_832D51E0"))) PPC_WEAK_FUNC(sub_832D51E0);
PPC_FUNC_IMPL(__imp__sub_832D51E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x832D51E8;
	__savegprlr_15(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r17,r11,-21168
	ctx.r17.s64 = ctx.r11.s64 + -21168;
	// addi r16,r10,7192
	ctx.r16.s64 = ctx.r10.s64 + 7192;
	// bne cr6,0x832d522c
	if (!ctx.cr6.eq) goto loc_832D522C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r5,r11,7184
	ctx.r5.s64 = ctx.r11.s64 + 7184;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r7,792
	ctx.r7.s64 = 792;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D522C;
	sub_8320CF10(ctx, base);
loc_832D522C:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x832d5250
	if (!ctx.cr6.eq) goto loc_832D5250;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r5,r11,-5864
	ctx.r5.s64 = ctx.r11.s64 + -5864;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r7,793
	ctx.r7.s64 = 793;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5250;
	sub_8320CF10(ctx, base);
loc_832D5250:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// bne cr6,0x832d5274
	if (!ctx.cr6.eq) goto loc_832D5274;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r7,794
	ctx.r7.s64 = 794;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5274;
	sub_8320CF10(ctx, base);
loc_832D5274:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832D5280;
	sub_83214BF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83214bf0
	ctx.lr = 0x832D5290;
	sub_83214BF0(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832ceb20
	ctx.lr = 0x832D52A0;
	sub_832CEB20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d5444
	if (ctx.cr0.eq) goto loc_832D5444;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r28,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r28.u64);
	// std r28,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r28.u64);
	// std r28,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r28.u64);
	// std r28,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r28.u64);
	// std r28,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r28.u64);
	// bl 0x83218098
	ctx.lr = 0x832D52D0;
	sub_83218098(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83218098
	ctx.lr = 0x832D52E0;
	sub_83218098(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x83213648
	ctx.lr = 0x832D52E8;
	sub_83213648(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83213648
	ctx.lr = 0x832D52F4;
	sub_83213648(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d5444
	if (ctx.cr0.eq) goto loc_832D5444;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832d5444
	if (ctx.cr6.eq) goto loc_832D5444;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832139f8
	ctx.lr = 0x832D530C;
	sub_832139F8(ctx, base);
	// mr. r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq 0x832d5444
	if (ctx.cr0.eq) goto loc_832D5444;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r22,r10,7384
	ctx.r22.s64 = ctx.r10.s64 + 7384;
	// addi r21,r9,7972
	ctx.r21.s64 = ctx.r9.s64 + 7972;
	// addi r20,r11,7392
	ctx.r20.s64 = ctx.r11.s64 + 7392;
loc_832D532C:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83214130
	ctx.lr = 0x832D5334;
	sub_83214130(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x832d5354
	if (!ctx.cr0.eq) goto loc_832D5354;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r7,826
	ctx.r7.s64 = 826;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5354;
	sub_8320CF10(ctx, base);
loc_832D5354:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83215a08
	ctx.lr = 0x832D5360;
	sub_83215A08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d5430
	if (ctx.cr0.eq) goto loc_832D5430;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832139f8
	ctx.lr = 0x832D5370;
	sub_832139F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832d5430
	if (ctx.cr6.eq) goto loc_832D5430;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_832D5384:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d53a4
	if (!ctx.cr6.eq) goto loc_832D53A4;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r7,840
	ctx.r7.s64 = 840;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D53A4;
	sub_8320CF10(ctx, base);
loc_832D53A4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83214130
	ctx.lr = 0x832D53AC;
	sub_83214130(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d53cc
	if (!ctx.cr0.eq) goto loc_832D53CC;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r7,843
	ctx.r7.s64 = 843;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D53CC;
	sub_8320CF10(ctx, base);
loc_832D53CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832d5400
	if (!ctx.cr6.eq) goto loc_832D5400;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83215a08
	ctx.lr = 0x832D53E4;
	sub_83215A08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d53f8
	if (ctx.cr0.eq) goto loc_832D53F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x832d540c
	goto loc_832D540C;
loc_832D53F8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_832D5400:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x832d5420
	if (!ctx.cr6.eq) goto loc_832D5420;
loc_832D540C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832d4dc0
	ctx.lr = 0x832D5418;
	sub_832D4DC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d5450
	if (!ctx.cr0.eq) goto loc_832D5450;
loc_832D5420:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x832d5384
	if (ctx.cr6.lt) goto loc_832D5384;
loc_832D5430:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83214088
	ctx.lr = 0x832D543C;
	sub_83214088(ctx, base);
	// mr. r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne 0x832d532c
	if (!ctx.cr0.eq) goto loc_832D532C;
loc_832D5444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832D5448:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
loc_832D5450:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83214a80
	ctx.lr = 0x832D5458;
	sub_83214A80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214a80
	ctx.lr = 0x832D5460;
	sub_83214A80(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x832ebea8
	ctx.lr = 0x832D5470;
	sub_832EBEA8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x832ebfb0
	ctx.lr = 0x832D5480;
	sub_832EBFB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x832d5448
	goto loc_832D5448;
}

__attribute__((alias("__imp__sub_832D5488"))) PPC_WEAK_FUNC(sub_832D5488);
PPC_FUNC_IMPL(__imp__sub_832D5488) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// lwz r9,324(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// lwz r8,320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x832ebbc0
	ctx.lr = 0x832D54C0;
	sub_832EBBC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832D54D0"))) PPC_WEAK_FUNC(sub_832D54D0);
PPC_FUNC_IMPL(__imp__sub_832D54D0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x832eadf0
	sub_832EADF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D54D8"))) PPC_WEAK_FUNC(sub_832D54D8);
PPC_FUNC_IMPL(__imp__sub_832D54D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832D54E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,8088
	ctx.r24.s64 = ctx.r10.s64 + 8088;
	// bne cr6,0x832d5524
	if (!ctx.cr6.eq) goto loc_832D5524;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-1696
	ctx.r5.s64 = ctx.r11.s64 + -1696;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,521
	ctx.r7.s64 = 521;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5524;
	sub_8320CF10(ctx, base);
loc_832D5524:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x832d5548
	if (!ctx.cr6.eq) goto loc_832D5548;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8076
	ctx.r5.s64 = ctx.r11.s64 + 8076;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,522
	ctx.r7.s64 = 522;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5548;
	sub_8320CF10(ctx, base);
loc_832D5548:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d556c
	if (!ctx.cr6.eq) goto loc_832D556C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8068
	ctx.r5.s64 = ctx.r11.s64 + 8068;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,523
	ctx.r7.s64 = 523;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D556C;
	sub_8320CF10(ctx, base);
loc_832D556C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d5594
	if (!ctx.cr6.eq) goto loc_832D5594;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8040
	ctx.r5.s64 = ctx.r11.s64 + 8040;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,526
	ctx.r7.s64 = 526;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5594;
	sub_8320CF10(ctx, base);
loc_832D5594:
	// addic. r23,r26,8
	ctx.xer.ca = ctx.r26.u32 > 4294967287;
	ctx.r23.s64 = ctx.r26.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x832d55b8
	if (!ctx.cr0.eq) goto loc_832D55B8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8024
	ctx.r5.s64 = ctx.r11.s64 + 8024;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,527
	ctx.r7.s64 = 527;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D55B8;
	sub_8320CF10(ctx, base);
loc_832D55B8:
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x832d88f0
	ctx.lr = 0x832D55CC;
	sub_832D88F0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x832d56a0
	if (!ctx.cr0.eq) goto loc_832D56A0;
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832D55F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832d5614
	if (!ctx.cr0.eq) goto loc_832D5614;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8012
	ctx.r5.s64 = ctx.r11.s64 + 8012;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,558
	ctx.r7.s64 = 558;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5614;
	sub_8320CF10(ctx, base);
loc_832D5614:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x832D5624;
	sub_82CB1160(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r4,36
	ctx.r4.s64 = 36;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D5638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832d567c
	if (!ctx.cr0.eq) goto loc_832D567C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8000
	ctx.r5.s64 = ctx.r11.s64 + 8000;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,564
	ctx.r7.s64 = 564;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D565C;
	sub_8320CF10(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,7988
	ctx.r5.s64 = ctx.r11.s64 + 7988;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,581
	ctx.r7.s64 = 581;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5678;
	sub_8320CF10(ctx, base);
	// b 0x832d56ac
	goto loc_832D56AC;
loc_832D567C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832d8778
	ctx.lr = 0x832D569C;
	sub_832D8778(ctx, base);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_832D56A0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_832D56AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D56B8"))) PPC_WEAK_FUNC(sub_832D56B8);
PPC_FUNC_IMPL(__imp__sub_832D56B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D56C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,8088
	ctx.r24.s64 = ctx.r10.s64 + 8088;
	// bne cr6,0x832d5700
	if (!ctx.cr6.eq) goto loc_832D5700;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-1696
	ctx.r5.s64 = ctx.r11.s64 + -1696;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,637
	ctx.r7.s64 = 637;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5700;
	sub_8320CF10(ctx, base);
loc_832D5700:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832d5724
	if (!ctx.cr6.eq) goto loc_832D5724;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,7984
	ctx.r5.s64 = ctx.r11.s64 + 7984;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,638
	ctx.r7.s64 = 638;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5724;
	sub_8320CF10(ctx, base);
loc_832D5724:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832eade8
	ctx.lr = 0x832D572C;
	sub_832EADE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832d574c
	if (!ctx.cr0.eq) goto loc_832D574C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8232
	ctx.r5.s64 = ctx.r11.s64 + 8232;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,641
	ctx.r7.s64 = 641;
	// bl 0x8320cf10
	ctx.lr = 0x832D574C;
	sub_8320CF10(ctx, base);
loc_832D574C:
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// bl 0x832d2ee8
	ctx.lr = 0x832D5754;
	sub_832D2EE8(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x832d577c
	if (!ctx.cr0.eq) goto loc_832D577C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,5772
	ctx.r5.s64 = ctx.r11.s64 + 5772;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,647
	ctx.r7.s64 = 647;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5778;
	sub_8320CF10(ctx, base);
	// b 0x832d5834
	goto loc_832D5834;
loc_832D577C:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r27,4
	ctx.r28.s64 = ctx.r27.s64 + 4;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
loc_832D5788:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832eb2f0
	ctx.lr = 0x832D5794;
	sub_832EB2F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x832d54d8
	ctx.lr = 0x832D57A4;
	sub_832D54D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// blt cr6,0x832d5788
	if (ctx.cr6.lt) goto loc_832D5788;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832eb118
	ctx.lr = 0x832D57C4;
	sub_832EB118(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x832d54d8
	ctx.lr = 0x832D57D4;
	sub_832D54D8(ctx, base);
	// stw r3,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832eb1a8
	ctx.lr = 0x832D57E0;
	sub_832EB1A8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x832d5818
	if (!ctx.cr0.eq) goto loc_832D5818;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832eaf78
	ctx.lr = 0x832D57F0;
	sub_832EAF78(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x832d5828
	if (ctx.cr6.eq) goto loc_832D5828;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8180
	ctx.r5.s64 = ctx.r11.s64 + 8180;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,671
	ctx.r7.s64 = 671;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5814;
	sub_8320CF10(ctx, base);
	// b 0x832d5828
	goto loc_832D5828;
loc_832D5818:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x832d54d8
	ctx.lr = 0x832D5824;
	sub_832D54D8(ctx, base);
	// stw r3,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r3.u32);
loc_832D5828:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832eb0c0
	ctx.lr = 0x832D5830;
	sub_832EB0C0(ctx, base);
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
loc_832D5834:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D5840"))) PPC_WEAK_FUNC(sub_832D5840);
PPC_FUNC_IMPL(__imp__sub_832D5840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x832D5848;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,8088
	ctx.r28.s64 = ctx.r10.s64 + 8088;
	// bne cr6,0x832d5894
	if (!ctx.cr6.eq) goto loc_832D5894;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-1696
	ctx.r5.s64 = ctx.r11.s64 + -1696;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,733
	ctx.r7.s64 = 733;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5894;
	sub_8320CF10(ctx, base);
loc_832D5894:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832d58b8
	if (!ctx.cr6.eq) goto loc_832D58B8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8076
	ctx.r5.s64 = ctx.r11.s64 + 8076;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,734
	ctx.r7.s64 = 734;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D58B8;
	sub_8320CF10(ctx, base);
loc_832D58B8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d58dc
	if (!ctx.cr6.eq) goto loc_832D58DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8504
	ctx.r5.s64 = ctx.r11.s64 + 8504;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,735
	ctx.r7.s64 = 735;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D58DC;
	sub_8320CF10(ctx, base);
loc_832D58DC:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d5908
	if (!ctx.cr6.eq) goto loc_832D5908;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8464
	ctx.r5.s64 = ctx.r11.s64 + 8464;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,738
	ctx.r7.s64 = 738;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5908;
	sub_8320CF10(ctx, base);
loc_832D5908:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addic. r11,r11,8
	ctx.xer.ca = ctx.r11.u32 > 4294967287;
	ctx.r11.s64 = ctx.r11.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832d5930
	if (!ctx.cr0.eq) goto loc_832D5930;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8436
	ctx.r5.s64 = ctx.r11.s64 + 8436;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,739
	ctx.r7.s64 = 739;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5930;
	sub_8320CF10(ctx, base);
loc_832D5930:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832d5958
	if (!ctx.cr6.eq) goto loc_832D5958;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8408
	ctx.r5.s64 = ctx.r11.s64 + 8408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,740
	ctx.r7.s64 = 740;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5958;
	sub_8320CF10(ctx, base);
loc_832D5958:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bne 0x832d5ac0
	if (!ctx.cr0.eq) goto loc_832D5AC0;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x832d89e8
	ctx.lr = 0x832D597C;
	sub_832D89E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x832d59a4
	if (ctx.cr6.eq) goto loc_832D59A4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8376
	ctx.r5.s64 = ctx.r11.s64 + 8376;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,754
	ctx.r7.s64 = 754;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D59A4;
	sub_8320CF10(ctx, base);
loc_832D59A4:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d5a50
	if (ctx.cr6.eq) goto loc_832D5A50;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x832d59c0
	if (ctx.cr6.lt) goto loc_832D59C0;
	// cmpwi cr6,r25,7
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 7, ctx.xer);
	// ble cr6,0x832d59dc
	if (!ctx.cr6.gt) goto loc_832D59DC;
loc_832D59C0:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8312
	ctx.r5.s64 = ctx.r11.s64 + 8312;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,762
	ctx.r7.s64 = 762;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D59DC;
	sub_8320CF10(ctx, base);
loc_832D59DC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d5a04
	if (!ctx.cr6.eq) goto loc_832D5A04;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,8276
	ctx.r5.s64 = ctx.r11.s64 + 8276;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,766
	ctx.r7.s64 = 766;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5A04;
	sub_8320CF10(ctx, base);
loc_832D5A04:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r11,r25,71
	ctx.r11.s64 = ctx.r25.s64 + 71;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D5A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r25,15
	ctx.r11.s64 = ctx.r25.s64 + 15;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x83213f68
	ctx.lr = 0x832D5A4C;
	sub_83213F68(ctx, base);
	// bl 0x832140f8
	ctx.lr = 0x832D5A50;
	sub_832140F8(ctx, base);
loc_832D5A50:
	// lwz r4,32(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D5A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r30,r11,8256
	ctx.r30.s64 = ctx.r11.s64 + 8256;
	// beq 0x832d5a8c
	if (ctx.cr0.eq) goto loc_832D5A8C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,786
	ctx.r7.s64 = 786;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5A8C;
	sub_8320CF10(ctx, base);
loc_832D5A8C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D5AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x832d5ac0
	if (ctx.cr0.eq) goto loc_832D5AC0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,795
	ctx.r7.s64 = 795;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5AC0;
	sub_8320CF10(ctx, base);
loc_832D5AC0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D5ACC"))) PPC_WEAK_FUNC(sub_832D5ACC);
PPC_FUNC_IMPL(__imp__sub_832D5ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D5AD0"))) PPC_WEAK_FUNC(sub_832D5AD0);
PPC_FUNC_IMPL(__imp__sub_832D5AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x832D5AD8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,8088
	ctx.r24.s64 = ctx.r10.s64 + 8088;
	// bne cr6,0x832d5b18
	if (!ctx.cr6.eq) goto loc_832D5B18;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-1696
	ctx.r5.s64 = ctx.r11.s64 + -1696;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,833
	ctx.r7.s64 = 833;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5B18;
	sub_8320CF10(ctx, base);
loc_832D5B18:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832d5b3c
	if (!ctx.cr6.eq) goto loc_832D5B3C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8520
	ctx.r5.s64 = ctx.r11.s64 + 8520;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,834
	ctx.r7.s64 = 834;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5B3C;
	sub_8320CF10(ctx, base);
loc_832D5B3C:
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r27,4
	ctx.r29.s64 = ctx.r27.s64 + 4;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r28,r31,28
	ctx.r28.s64 = ctx.r31.s64 + 28;
	// addi r26,r11,8256
	ctx.r26.s64 = ctx.r11.s64 + 8256;
loc_832D5B54:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x832d5840
	ctx.lr = 0x832D5B68;
	sub_832D5840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832d5b88
	if (ctx.cr0.eq) goto loc_832D5B88;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,845
	ctx.r7.s64 = 845;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5B88;
	sub_8320CF10(ctx, base);
loc_832D5B88:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// blt cr6,0x832d5b54
	if (ctx.cr6.lt) goto loc_832D5B54;
	// li r6,6
	ctx.r6.s64 = 6;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,28(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// bl 0x832d5840
	ctx.lr = 0x832D5BB4;
	sub_832D5840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832d5bd4
	if (ctx.cr0.eq) goto loc_832D5BD4;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,855
	ctx.r7.s64 = 855;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5BD4;
	sub_8320CF10(ctx, base);
loc_832D5BD4:
	// stw r23,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r23.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r5,32(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// bl 0x832d5840
	ctx.lr = 0x832D5BEC;
	sub_832D5840(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x832d5c0c
	if (ctx.cr0.eq) goto loc_832D5C0C;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,864
	ctx.r7.s64 = 864;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5C0C;
	sub_8320CF10(ctx, base);
loc_832D5C0C:
	// stw r23,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r23.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x832eadf0
	ctx.lr = 0x832D5C18;
	sub_832EADF0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// bl 0x832d2fe8
	ctx.lr = 0x832D5C24;
	sub_832D2FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D5C30"))) PPC_WEAK_FUNC(sub_832D5C30);
PPC_FUNC_IMPL(__imp__sub_832D5C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D5C38;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r25,r11,-21168
	ctx.r25.s64 = ctx.r11.s64 + -21168;
	// addi r24,r10,8088
	ctx.r24.s64 = ctx.r10.s64 + 8088;
	// bne cr6,0x832d5c78
	if (!ctx.cr6.eq) goto loc_832D5C78;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-1696
	ctx.r5.s64 = ctx.r11.s64 + -1696;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,942
	ctx.r7.s64 = 942;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5C78;
	sub_8320CF10(ctx, base);
loc_832D5C78:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x832d5c9c
	if (!ctx.cr6.eq) goto loc_832D5C9C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8576
	ctx.r5.s64 = ctx.r11.s64 + 8576;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,943
	ctx.r7.s64 = 943;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5C9C;
	sub_8320CF10(ctx, base);
loc_832D5C9C:
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// bl 0x832d2ee8
	ctx.lr = 0x832D5CA4;
	sub_832D2EE8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832d5cc8
	if (!ctx.cr0.eq) goto loc_832D5CC8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8568
	ctx.r5.s64 = ctx.r11.s64 + 8568;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,949
	ctx.r7.s64 = 949;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5CC8;
	sub_8320CF10(ctx, base);
loc_832D5CC8:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// subf r27,r29,r28
	ctx.r27.s64 = ctx.r28.s64 - ctx.r29.s64;
	// li r30,6
	ctx.r30.s64 = 6;
	// addi r26,r11,8552
	ctx.r26.s64 = ctx.r11.s64 + 8552;
loc_832D5CDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d5d00
	if (!ctx.cr6.eq) goto loc_832D5D00;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,955
	ctx.r7.s64 = 955;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5D00;
	sub_8320CF10(ctx, base);
loc_832D5D00:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwx r10,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bne 0x832d5cdc
	if (!ctx.cr0.eq) goto loc_832D5CDC;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d5d48
	if (!ctx.cr6.eq) goto loc_832D5D48;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8540
	ctx.r5.s64 = ctx.r11.s64 + 8540;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,961
	ctx.r7.s64 = 961;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5D48;
	sub_8320CF10(ctx, base);
loc_832D5D48:
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r10,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d5d84
	if (!ctx.cr6.eq) goto loc_832D5D84;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,8528
	ctx.r5.s64 = ctx.r11.s64 + 8528;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,966
	ctx.r7.s64 = 966;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5D84;
	sub_8320CF10(ctx, base);
loc_832D5D84:
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r10,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// bl 0x832eaf18
	ctx.lr = 0x832D5DA4;
	sub_832EAF18(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D5DB0"))) PPC_WEAK_FUNC(sub_832D5DB0);
PPC_FUNC_IMPL(__imp__sub_832D5DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832D5DB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D5DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832d5e68
	if (!ctx.cr0.eq) goto loc_832D5E68;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,8088
	ctx.r29.s64 = ctx.r10.s64 + 8088;
	// bne cr6,0x832d5e20
	if (!ctx.cr6.eq) goto loc_832D5E20;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,8608
	ctx.r5.s64 = ctx.r11.s64 + 8608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1040
	ctx.r7.s64 = 1040;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5E20;
	sub_8320CF10(ctx, base);
loc_832D5E20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832d5e48
	if (!ctx.cr6.eq) goto loc_832D5E48;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,8584
	ctx.r5.s64 = ctx.r11.s64 + 8584;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1041
	ctx.r7.s64 = 1041;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5E48;
	sub_8320CF10(ctx, base);
loc_832D5E48:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_832D5E68:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D5E74"))) PPC_WEAK_FUNC(sub_832D5E74);
PPC_FUNC_IMPL(__imp__sub_832D5E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832D5E78"))) PPC_WEAK_FUNC(sub_832D5E78);
PPC_FUNC_IMPL(__imp__sub_832D5E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832D5E80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r29,63
	ctx.r11.s64 = ctx.r29.s64 + 63;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x832d5ecc
	if (ctx.cr6.eq) goto loc_832D5ECC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,8088
	ctx.r6.s64 = ctx.r11.s64 + 8088;
	// addi r5,r10,8616
	ctx.r5.s64 = ctx.r10.s64 + 8616;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1082
	ctx.r7.s64 = 1082;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5ECC;
	sub_8320CF10(ctx, base);
loc_832D5ECC:
	// mulli r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 * 20;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r9,r10,92
	ctx.r9.s64 = ctx.r10.s64 + 92;
	// li r10,5
	ctx.r10.s64 = 5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_832D5EE4:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x832d5ee4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832D5EE4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83213768
	ctx.lr = 0x832D5F04;
	sub_83213768(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// stwx r11,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D5F18"))) PPC_WEAK_FUNC(sub_832D5F18);
PPC_FUNC_IMPL(__imp__sub_832D5F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D5F20;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x83213648
	ctx.lr = 0x832D5F38;
	sub_83213648(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,8088
	ctx.r26.s64 = ctx.r10.s64 + 8088;
	// bne 0x832d5f6c
	if (!ctx.cr0.eq) goto loc_832D5F6C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,8684
	ctx.r5.s64 = ctx.r11.s64 + 8684;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1138
	ctx.r7.s64 = 1138;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5F6C;
	sub_8320CF10(ctx, base);
loc_832D5F6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83213a98
	ctx.lr = 0x832D5F74;
	sub_83213A98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83214130
	ctx.lr = 0x832D5F7C;
	sub_83214130(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832d5ff0
	if (!ctx.cr6.lt) goto loc_832D5FF0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r25,r11,8672
	ctx.r25.s64 = ctx.r11.s64 + 8672;
loc_832D5FA0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214018
	ctx.lr = 0x832D5FAC;
	sub_83214018(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832d5fcc
	if (!ctx.cr0.eq) goto loc_832D5FCC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1154
	ctx.r7.s64 = 1154;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D5FCC;
	sub_8320CF10(ctx, base);
loc_832D5FCC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83214130
	ctx.lr = 0x832D5FD4;
	sub_83214130(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832d5fa0
	if (ctx.cr6.lt) goto loc_832D5FA0;
loc_832D5FF0:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832D6008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832d5ff0
	if (ctx.cr0.eq) goto loc_832D5FF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83213e90
	ctx.lr = 0x832D6018;
	sub_83213E90(ctx, base);
	// bl 0x832140f8
	ctx.lr = 0x832D601C;
	sub_832140F8(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832D6030:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x832d6030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832D6030;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x83213768
	ctx.lr = 0x832D606C;
	sub_83213768(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832D6078"))) PPC_WEAK_FUNC(sub_832D6078);
PPC_FUNC_IMPL(__imp__sub_832D6078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832D6080;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r27,r9,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r26,r11,-21168
	ctx.r26.s64 = ctx.r11.s64 + -21168;
	// addi r25,r10,8088
	ctx.r25.s64 = ctx.r10.s64 + 8088;
	// blt cr6,0x832d60c0
	if (ctx.cr6.lt) goto loc_832D60C0;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// ble cr6,0x832d60dc
	if (!ctx.cr6.gt) goto loc_832D60DC;
loc_832D60C0:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,8752
	ctx.r5.s64 = ctx.r11.s64 + 8752;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1233
	ctx.r7.s64 = 1233;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D60DC;
	sub_8320CF10(ctx, base);
loc_832D60DC:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x832ceb20
	ctx.lr = 0x832D60E8;
	sub_832CEB20(ctx, base);
	// addi r11,r30,71
	ctx.r11.s64 = ctx.r30.s64 + 71;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x832d6198
	if (!ctx.cr6.lt) goto loc_832D6198;
	// addi r11,r30,63
	ctx.r11.s64 = ctx.r30.s64 + 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832d6128
	if (ctx.cr6.eq) goto loc_832D6128;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x832d5e78
	ctx.lr = 0x832D6124;
	sub_832D5E78(ctx, base);
	// b 0x832d61a8
	goto loc_832D61A8;
loc_832D6128:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832d5db0
	ctx.lr = 0x832D6148;
	sub_832D5DB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x832d6174
	if (!ctx.cr0.eq) goto loc_832D6174;
	// lwzx r10,r28,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r11,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u32);
	// bl 0x83213768
	ctx.lr = 0x832D616C;
	sub_83213768(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// b 0x832d61a8
	goto loc_832D61A8;
loc_832D6174:
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// beq cr6,0x832d6198
	if (ctx.cr6.eq) goto loc_832D6198;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,8720
	ctx.r5.s64 = ctx.r11.s64 + 8720;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1277
	ctx.r7.s64 = 1277;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832D6198;
	sub_8320CF10(ctx, base);
loc_832D6198:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d5f18
	ctx.lr = 0x832D61A8;
	sub_832D5F18(ctx, base);
loc_832D61A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

