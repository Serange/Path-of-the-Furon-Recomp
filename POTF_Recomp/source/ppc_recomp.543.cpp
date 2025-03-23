#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_831665C0"))) PPC_WEAK_FUNC(sub_831665C0);
PPC_FUNC_IMPL(__imp__sub_831665C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831665C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83166624
	if (ctx.cr6.lt) goto loc_83166624;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// addi r30,r11,27392
	ctx.r30.s64 = ctx.r11.s64 + 27392;
	// li r5,50
	ctx.r5.s64 = 50;
	// addi r4,r30,-104
	ctx.r4.s64 = ctx.r30.s64 + -104;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8315b860
	ctx.lr = 0x831665FC;
	sub_8315B860(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8316661c
	if (ctx.cr6.eq) goto loc_8316661C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8315b870
	ctx.lr = 0x8316661C;
	sub_8315B870(ctx, base);
loc_8316661C:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_83166624:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82e640b8
	ctx.lr = 0x83166638;
	sub_82E640B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83166640"))) PPC_WEAK_FUNC(sub_83166640);
PPC_FUNC_IMPL(__imp__sub_83166640) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83166698
	if (ctx.cr6.eq) goto loc_83166698;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83166658:
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83166690
	if (ctx.cr6.eq) goto loc_83166690;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83166674:
	// rotlwi r11,r11,31
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 31);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x831666a0
	if (!ctx.cr6.eq) goto loc_831666A0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83166674
	if (!ctx.cr6.eq) goto loc_83166674;
loc_83166690:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83166658
	if (!ctx.cr6.eq) goto loc_83166658;
loc_83166698:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831666A0:
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831666AC"))) PPC_WEAK_FUNC(sub_831666AC);
PPC_FUNC_IMPL(__imp__sub_831666AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831666B0"))) PPC_WEAK_FUNC(sub_831666B0);
PPC_FUNC_IMPL(__imp__sub_831666B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x831666B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83166788
	if (!ctx.cr6.gt) goto loc_83166788;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,82
	ctx.r5.s64 = 82;
	// addi r27,r11,27600
	ctx.r27.s64 = ctx.r11.s64 + 27600;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r27,-104
	ctx.r4.s64 = ctx.r27.s64 + -104;
	// bl 0x8315b860
	ctx.lr = 0x831666EC;
	sub_8315B860(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x83166734
	if (!ctx.cr6.gt) goto loc_83166734;
	// subf r9,r11,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r8,r11,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_83166710:
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r4,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x83166710
	if (ctx.cr6.lt) goto loc_83166710;
loc_83166734:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x83166760
	if (!ctx.cr6.lt) goto loc_83166760;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r29,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r29.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf r10,r10,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r10.s64;
loc_8316674C:
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
	// bne 0x8316674c
	if (!ctx.cr0.eq) goto loc_8316674C;
loc_83166760:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83166778
	if (ctx.cr6.eq) goto loc_83166778;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x8315b870
	ctx.lr = 0x83166778;
	sub_8315B870(ctx, base);
loc_83166778:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_83166788:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x831667c0
	if (ctx.cr6.eq) goto loc_831667C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_8316679C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// bne 0x8316679c
	if (!ctx.cr0.eq) goto loc_8316679C;
loc_831667C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831667C8"))) PPC_WEAK_FUNC(sub_831667C8);
PPC_FUNC_IMPL(__imp__sub_831667C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x831667D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r27,r11,28432
	ctx.r27.s64 = ctx.r11.s64 + 28432;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83166814
	if (!ctx.cr6.gt) goto loc_83166814;
	// addi r4,r27,-104
	ctx.r4.s64 = ctx.r27.s64 + -104;
	// li r5,259
	ctx.r5.s64 = 259;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x8315b860
	ctx.lr = 0x83166810;
	sub_8315B860(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_83166814:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82bea998
	ctx.lr = 0x83166828;
	sub_82BEA998(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83166850
	if (!ctx.cr6.gt) goto loc_83166850;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r10,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r10.s64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82e640b8
	ctx.lr = 0x83166850;
	sub_82E640B8(ctx, base);
loc_83166850:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8316687c
	if (!ctx.cr6.gt) goto loc_8316687C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83166874
	if (ctx.cr6.eq) goto loc_83166874;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,270
	ctx.r5.s64 = 270;
	// bl 0x8315b870
	ctx.lr = 0x83166874;
	sub_8315B870(ctx, base);
loc_83166874:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_8316687C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83166884"))) PPC_WEAK_FUNC(sub_83166884);
PPC_FUNC_IMPL(__imp__sub_83166884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83166888"))) PPC_WEAK_FUNC(sub_83166888);
PPC_FUNC_IMPL(__imp__sub_83166888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x83166890;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// blt cr6,0x831668b8
	if (ctx.cr6.lt) goto loc_831668B8;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_831668B8:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r24,r11,27808
	ctx.r24.s64 = ctx.r11.s64 + 27808;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831668ec
	if (!ctx.cr6.gt) goto loc_831668EC;
	// addi r4,r24,-104
	ctx.r4.s64 = ctx.r24.s64 + -104;
	// li r5,120
	ctx.r5.s64 = 120;
	// rlwinm r3,r25,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8315b860
	ctx.lr = 0x831668E8;
	sub_8315B860(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_831668EC:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83166970
	if (!ctx.cr6.lt) goto loc_83166970;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83166938
	if (ctx.cr6.eq) goto loc_83166938;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subf r8,r31,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r31.s64;
loc_83166914:
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stwx r5,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x83166914
	if (ctx.cr6.lt) goto loc_83166914;
loc_83166938:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x831669dc
	if (!ctx.cr6.lt) goto loc_831669DC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r27,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r27.s64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
loc_83166950:
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83166950
	if (ctx.cr6.lt) goto loc_83166950;
	// b 0x831669dc
	goto loc_831669DC;
loc_83166970:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x831669a8
	if (ctx.cr6.eq) goto loc_831669A8;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subf r8,r31,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r31.s64;
loc_83166984:
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stwx r5,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x83166984
	if (ctx.cr6.lt) goto loc_83166984;
loc_831669A8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x831669dc
	if (!ctx.cr6.lt) goto loc_831669DC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
loc_831669C0:
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x831669c0
	if (ctx.cr6.lt) goto loc_831669C0;
loc_831669DC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83166a08
	if (!ctx.cr6.gt) goto loc_83166A08;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83166a00
	if (ctx.cr6.eq) goto loc_83166A00;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,150
	ctx.r5.s64 = 150;
	// bl 0x8315b870
	ctx.lr = 0x83166A00;
	sub_8315B870(ctx, base);
loc_83166A00:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// stw r25,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r25.u32);
loc_83166A08:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83166A10"))) PPC_WEAK_FUNC(sub_83166A10);
PPC_FUNC_IMPL(__imp__sub_83166A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x83166A18;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// blt cr6,0x83166a40
	if (ctx.cr6.lt) goto loc_83166A40;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_83166A40:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r24,r11,28016
	ctx.r24.s64 = ctx.r11.s64 + 28016;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83166a74
	if (!ctx.cr6.gt) goto loc_83166A74;
	// addi r4,r24,-104
	ctx.r4.s64 = ctx.r24.s64 + -104;
	// li r5,166
	ctx.r5.s64 = 166;
	// rlwinm r3,r25,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8315b860
	ctx.lr = 0x83166A70;
	sub_8315B860(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83166A74:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83166af4
	if (!ctx.cr6.lt) goto loc_83166AF4;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// beq cr6,0x83166ac4
	if (ctx.cr6.eq) goto loc_83166AC4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subf r8,r31,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r31.s64;
loc_83166AA0:
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// andc r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// stwx r4,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x83166aa0
	if (ctx.cr6.lt) goto loc_83166AA0;
loc_83166AC4:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83166b64
	if (!ctx.cr6.lt) goto loc_83166B64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
loc_83166AD8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83166ad8
	if (ctx.cr6.lt) goto loc_83166AD8;
	// b 0x83166b64
	goto loc_83166B64;
loc_83166AF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83166b30
	if (ctx.cr6.eq) goto loc_83166B30;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subf r8,r31,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r31.s64;
loc_83166B0C:
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stwx r5,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x83166b0c
	if (ctx.cr6.lt) goto loc_83166B0C;
loc_83166B30:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83166b64
	if (!ctx.cr6.lt) goto loc_83166B64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
loc_83166B48:
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83166b48
	if (ctx.cr6.lt) goto loc_83166B48;
loc_83166B64:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83166b90
	if (!ctx.cr6.gt) goto loc_83166B90;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83166b88
	if (ctx.cr6.eq) goto loc_83166B88;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,196
	ctx.r5.s64 = 196;
	// bl 0x8315b870
	ctx.lr = 0x83166B88;
	sub_8315B870(ctx, base);
loc_83166B88:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// stw r25,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r25.u32);
loc_83166B90:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83166B98"))) PPC_WEAK_FUNC(sub_83166B98);
PPC_FUNC_IMPL(__imp__sub_83166B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x83166BA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// blt cr6,0x83166bc8
	if (ctx.cr6.lt) goto loc_83166BC8;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_83166BC8:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r24,r11,28224
	ctx.r24.s64 = ctx.r11.s64 + 28224;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83166bfc
	if (!ctx.cr6.gt) goto loc_83166BFC;
	// addi r4,r24,-104
	ctx.r4.s64 = ctx.r24.s64 + -104;
	// li r5,212
	ctx.r5.s64 = 212;
	// rlwinm r3,r25,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8315b860
	ctx.lr = 0x83166BF8;
	sub_8315B860(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83166BFC:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83166c84
	if (!ctx.cr6.lt) goto loc_83166C84;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83166c48
	if (ctx.cr6.eq) goto loc_83166C48;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subf r8,r31,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r31.s64;
loc_83166C24:
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// nor r5,r7,r6
	ctx.r5.u64 = ~(ctx.r7.u64 | ctx.r6.u64);
	// stwx r5,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x83166c24
	if (ctx.cr6.lt) goto loc_83166C24;
loc_83166C48:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83166cf4
	if (!ctx.cr6.lt) goto loc_83166CF4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r27,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r27.s64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
loc_83166C60:
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// not r7,r8
	ctx.r7.u64 = ~ctx.r8.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x83166c60
	if (ctx.cr6.lt) goto loc_83166C60;
	// b 0x83166cf4
	goto loc_83166CF4;
loc_83166C84:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83166cbc
	if (ctx.cr6.eq) goto loc_83166CBC;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subf r8,r31,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r31.s64;
loc_83166C98:
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// nor r5,r7,r6
	ctx.r5.u64 = ~(ctx.r7.u64 | ctx.r6.u64);
	// stwx r5,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x83166c98
	if (ctx.cr6.lt) goto loc_83166C98;
loc_83166CBC:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83166cf4
	if (!ctx.cr6.lt) goto loc_83166CF4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
loc_83166CD4:
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// not r7,r8
	ctx.r7.u64 = ~ctx.r8.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x83166cd4
	if (ctx.cr6.lt) goto loc_83166CD4;
loc_83166CF4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83166d20
	if (!ctx.cr6.gt) goto loc_83166D20;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83166d18
	if (ctx.cr6.eq) goto loc_83166D18;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,242
	ctx.r5.s64 = 242;
	// bl 0x8315b870
	ctx.lr = 0x83166D18;
	sub_8315B870(ctx, base);
loc_83166D18:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// stw r25,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r25.u32);
loc_83166D20:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83166D28"))) PPC_WEAK_FUNC(sub_83166D28);
PPC_FUNC_IMPL(__imp__sub_83166D28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166D40"))) PPC_WEAK_FUNC(sub_83166D40);
PPC_FUNC_IMPL(__imp__sub_83166D40) {
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
	// bl 0x82cb4860
	ctx.lr = 0x83166D50;
	sub_82CB4860(ctx, base);
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

__attribute__((alias("__imp__sub_83166D64"))) PPC_WEAK_FUNC(sub_83166D64);
PPC_FUNC_IMPL(__imp__sub_83166D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83166D68"))) PPC_WEAK_FUNC(sub_83166D68);
PPC_FUNC_IMPL(__imp__sub_83166D68) {
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
	// bl 0x82cb4940
	ctx.lr = 0x83166D78;
	sub_82CB4940(ctx, base);
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

__attribute__((alias("__imp__sub_83166D8C"))) PPC_WEAK_FUNC(sub_83166D8C);
PPC_FUNC_IMPL(__imp__sub_83166D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83166D90"))) PPC_WEAK_FUNC(sub_83166D90);
PPC_FUNC_IMPL(__imp__sub_83166D90) {
	PPC_FUNC_PROLOGUE();
	// fsqrts f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(sqrt(ctx.f1.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166D98"))) PPC_WEAK_FUNC(sub_83166D98);
PPC_FUNC_IMPL(__imp__sub_83166D98) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166DA8"))) PPC_WEAK_FUNC(sub_83166DA8);
PPC_FUNC_IMPL(__imp__sub_83166DA8) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166DC4"))) PPC_WEAK_FUNC(sub_83166DC4);
PPC_FUNC_IMPL(__imp__sub_83166DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83166DC8"))) PPC_WEAK_FUNC(sub_83166DC8);
PPC_FUNC_IMPL(__imp__sub_83166DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
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

__attribute__((alias("__imp__sub_83166DFC"))) PPC_WEAK_FUNC(sub_83166DFC);
PPC_FUNC_IMPL(__imp__sub_83166DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83166E00"))) PPC_WEAK_FUNC(sub_83166E00);
PPC_FUNC_IMPL(__imp__sub_83166E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f9,f11,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
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

__attribute__((alias("__imp__sub_83166E28"))) PPC_WEAK_FUNC(sub_83166E28);
PPC_FUNC_IMPL(__imp__sub_83166E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166E5C"))) PPC_WEAK_FUNC(sub_83166E5C);
PPC_FUNC_IMPL(__imp__sub_83166E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83166E60"))) PPC_WEAK_FUNC(sub_83166E60);
PPC_FUNC_IMPL(__imp__sub_83166E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f9,f11,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
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

__attribute__((alias("__imp__sub_83166E88"))) PPC_WEAK_FUNC(sub_83166E88);
PPC_FUNC_IMPL(__imp__sub_83166E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f1,f9,f8,f7
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166EB0"))) PPC_WEAK_FUNC(sub_83166EB0);
PPC_FUNC_IMPL(__imp__sub_83166EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmsubs f5,f13,f0,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f9.f64));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmsubs f4,f8,f12,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 - ctx.f7.f64));
	// stfs f4,8(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmsubs f3,f10,f11,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f3,4(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166EF0"))) PPC_WEAK_FUNC(sub_83166EF0);
PPC_FUNC_IMPL(__imp__sub_83166EF0) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166F0C"))) PPC_WEAK_FUNC(sub_83166F0C);
PPC_FUNC_IMPL(__imp__sub_83166F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83166F10"))) PPC_WEAK_FUNC(sub_83166F10);
PPC_FUNC_IMPL(__imp__sub_83166F10) {
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
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f1,f11,f11,f10
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166F2C"))) PPC_WEAK_FUNC(sub_83166F2C);
PPC_FUNC_IMPL(__imp__sub_83166F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83166F30"))) PPC_WEAK_FUNC(sub_83166F30);
PPC_FUNC_IMPL(__imp__sub_83166F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166F48"))) PPC_WEAK_FUNC(sub_83166F48);
PPC_FUNC_IMPL(__imp__sub_83166F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x83166f78
	if (!ctx.cr6.eq) goto loc_83166F78;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x83166f78
	if (!ctx.cr6.eq) goto loc_83166F78;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x83166f7c
	if (ctx.cr6.eq) goto loc_83166F7C;
loc_83166F78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83166F7C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166F84"))) PPC_WEAK_FUNC(sub_83166F84);
PPC_FUNC_IMPL(__imp__sub_83166F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83166F88"))) PPC_WEAK_FUNC(sub_83166F88);
PPC_FUNC_IMPL(__imp__sub_83166F88) {
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

__attribute__((alias("__imp__sub_83166FBC"))) PPC_WEAK_FUNC(sub_83166FBC);
PPC_FUNC_IMPL(__imp__sub_83166FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83166FC0"))) PPC_WEAK_FUNC(sub_83166FC0);
PPC_FUNC_IMPL(__imp__sub_83166FC0) {
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
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83166FE0"))) PPC_WEAK_FUNC(sub_83166FE0);
PPC_FUNC_IMPL(__imp__sub_83166FE0) {
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
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167000"))) PPC_WEAK_FUNC(sub_83167000);
PPC_FUNC_IMPL(__imp__sub_83167000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6ae8
	ctx.lr = 0x83167010;
	__savefpr_28(ctx, base);
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f1,f10,f5
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// lfs f3,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f11,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f31,f8,f5
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f30,f0,f3
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmuls f29,f13,f3
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmsubs f10,f10,f0,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f9.f64));
	// fmuls f28,f12,f3
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmsubs f9,f8,f13,f7
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f7.f64));
	// fmsubs f7,f11,f12,f6
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f6.f64));
	// fmadds f6,f8,f12,f4
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fadds f4,f10,f31
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// fadds f2,f9,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fadds f1,f7,f1
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// fmadds f0,f11,f0,f6
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fadds f13,f4,f28
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f28.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f12,f2,f30
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f30.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f11,f1,f29
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmsubs f10,f5,f3,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 - ctx.f0.f64));
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b34
	ctx.lr = 0x831670A0;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831670AC"))) PPC_WEAK_FUNC(sub_831670AC);
PPC_FUNC_IMPL(__imp__sub_831670AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831670B0"))) PPC_WEAK_FUNC(sub_831670B0);
PPC_FUNC_IMPL(__imp__sub_831670B0) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831670D4"))) PPC_WEAK_FUNC(sub_831670D4);
PPC_FUNC_IMPL(__imp__sub_831670D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831670D8"))) PPC_WEAK_FUNC(sub_831670D8);
PPC_FUNC_IMPL(__imp__sub_831670D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x831670E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8316716c
	if (!ctx.cr6.eq) goto loc_8316716C;
	// lhz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65535, ctx.xer);
	// beq cr6,0x83167130
	if (ctx.cr6.eq) goto loc_83167130;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x83167114;
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
loc_83167130:
	// lhz r31,6(r28)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65535, ctx.xer);
	// beq cr6,0x831671c8
	if (ctx.cr6.eq) goto loc_831671C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x83167148;
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
loc_8316716C:
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831671c8
	if (ctx.cr6.eq) goto loc_831671C8;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_83167184:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r26,r31,r11
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83166510
	ctx.lr = 0x83167198;
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
	// blt cr6,0x83167184
	if (ctx.cr6.lt) goto loc_83167184;
loc_831671C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831671D0"))) PPC_WEAK_FUNC(sub_831671D0);
PPC_FUNC_IMPL(__imp__sub_831671D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831671D8"))) PPC_WEAK_FUNC(sub_831671D8);
PPC_FUNC_IMPL(__imp__sub_831671D8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mulli r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 * 112;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831671F8"))) PPC_WEAK_FUNC(sub_831671F8);
PPC_FUNC_IMPL(__imp__sub_831671F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167200"))) PPC_WEAK_FUNC(sub_83167200);
PPC_FUNC_IMPL(__imp__sub_83167200) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167208"))) PPC_WEAK_FUNC(sub_83167208);
PPC_FUNC_IMPL(__imp__sub_83167208) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167210"))) PPC_WEAK_FUNC(sub_83167210);
PPC_FUNC_IMPL(__imp__sub_83167210) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167218"))) PPC_WEAK_FUNC(sub_83167218);
PPC_FUNC_IMPL(__imp__sub_83167218) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167220"))) PPC_WEAK_FUNC(sub_83167220);
PPC_FUNC_IMPL(__imp__sub_83167220) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1140
	ctx.r3.s64 = ctx.r3.s64 + 1140;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167228"))) PPC_WEAK_FUNC(sub_83167228);
PPC_FUNC_IMPL(__imp__sub_83167228) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1156
	ctx.r3.s64 = ctx.r3.s64 + 1156;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167230"))) PPC_WEAK_FUNC(sub_83167230);
PPC_FUNC_IMPL(__imp__sub_83167230) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1192
	ctx.r3.s64 = ctx.r3.s64 + 1192;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167238"))) PPC_WEAK_FUNC(sub_83167238);
PPC_FUNC_IMPL(__imp__sub_83167238) {
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

__attribute__((alias("__imp__sub_83167248"))) PPC_WEAK_FUNC(sub_83167248);
PPC_FUNC_IMPL(__imp__sub_83167248) {
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
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83167290
	if (ctx.cr6.eq) goto loc_83167290;
	// bl 0x83167248
	ctx.lr = 0x8316727C;
	sub_83167248(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// b 0x83167294
	goto loc_83167294;
loc_83167290:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_83167294:
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

__attribute__((alias("__imp__sub_831672AC"))) PPC_WEAK_FUNC(sub_831672AC);
PPC_FUNC_IMPL(__imp__sub_831672AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831672B0"))) PPC_WEAK_FUNC(sub_831672B0);
PPC_FUNC_IMPL(__imp__sub_831672B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831672B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x831672f4
	if (ctx.cr6.eq) goto loc_831672F4;
	// bl 0x83167248
	ctx.lr = 0x831672E0;
	sub_83167248(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r29,r11,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// b 0x831672f8
	goto loc_831672F8;
loc_831672F4:
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
loc_831672F8:
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x83167324
	if (ctx.cr6.eq) goto loc_83167324;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83167248
	ctx.lr = 0x83167314;
	sub_83167248(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
loc_83167324:
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83167348
	if (ctx.cr6.eq) goto loc_83167348;
	// bge cr6,0x83167340
	if (!ctx.cr6.lt) goto loc_83167340;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_83167340:
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
loc_83167348:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83167350"))) PPC_WEAK_FUNC(sub_83167350);
PPC_FUNC_IMPL(__imp__sub_83167350) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167360"))) PPC_WEAK_FUNC(sub_83167360);
PPC_FUNC_IMPL(__imp__sub_83167360) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167368"))) PPC_WEAK_FUNC(sub_83167368);
PPC_FUNC_IMPL(__imp__sub_83167368) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167370"))) PPC_WEAK_FUNC(sub_83167370);
PPC_FUNC_IMPL(__imp__sub_83167370) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83167384
	if (ctx.cr6.eq) goto loc_83167384;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
loc_83167384:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316738C"))) PPC_WEAK_FUNC(sub_8316738C);
PPC_FUNC_IMPL(__imp__sub_8316738C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83167390"))) PPC_WEAK_FUNC(sub_83167390);
PPC_FUNC_IMPL(__imp__sub_83167390) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831673a4
	if (ctx.cr6.eq) goto loc_831673A4;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
loc_831673A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831673AC"))) PPC_WEAK_FUNC(sub_831673AC);
PPC_FUNC_IMPL(__imp__sub_831673AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831673B0"))) PPC_WEAK_FUNC(sub_831673B0);
PPC_FUNC_IMPL(__imp__sub_831673B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm r3,r11,0,23,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831673BC"))) PPC_WEAK_FUNC(sub_831673BC);
PPC_FUNC_IMPL(__imp__sub_831673BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831673C0"))) PPC_WEAK_FUNC(sub_831673C0);
PPC_FUNC_IMPL(__imp__sub_831673C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831673C8"))) PPC_WEAK_FUNC(sub_831673C8);
PPC_FUNC_IMPL(__imp__sub_831673C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831673D0"))) PPC_WEAK_FUNC(sub_831673D0);
PPC_FUNC_IMPL(__imp__sub_831673D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,284
	ctx.r3.s64 = ctx.r3.s64 + 284;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831673D8"))) PPC_WEAK_FUNC(sub_831673D8);
PPC_FUNC_IMPL(__imp__sub_831673D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831673E0"))) PPC_WEAK_FUNC(sub_831673E0);
PPC_FUNC_IMPL(__imp__sub_831673E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831673E8"))) PPC_WEAK_FUNC(sub_831673E8);
PPC_FUNC_IMPL(__imp__sub_831673E8) {
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
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83166510
	ctx.lr = 0x83167410;
	sub_83166510(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r30,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_83167448"))) PPC_WEAK_FUNC(sub_83167448);
PPC_FUNC_IMPL(__imp__sub_83167448) {
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
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83166510
	ctx.lr = 0x83167470;
	sub_83166510(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r30,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_831674A8"))) PPC_WEAK_FUNC(sub_831674A8);
PPC_FUNC_IMPL(__imp__sub_831674A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x831674B0;
	__savegprlr_27(ctx, base);
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
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8316751c
	if (ctx.cr6.lt) goto loc_8316751C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r10,28976
	ctx.r30.s64 = ctx.r10.s64 + 28976;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// li r5,195
	ctx.r5.s64 = 195;
	// addi r4,r30,-104
	ctx.r4.s64 = ctx.r30.s64 + -104;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8315b860
	ctx.lr = 0x831674F4;
	sub_8315B860(ctx, base);
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r4,192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82bea998
	ctx.lr = 0x83167508;
	sub_82BEA998(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,198
	ctx.r5.s64 = 198;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// bl 0x8315b870
	ctx.lr = 0x83167518;
	sub_8315B870(ctx, base);
	// stw r27,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r27.u32);
loc_8316751C:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r8.u32);
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r28,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r28.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// rlwinm r10,r5,26,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0xFC000000;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r3,r4,192
	ctx.r3.s64 = ctx.r4.s64 + 12582912;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316755C"))) PPC_WEAK_FUNC(sub_8316755C);
PPC_FUNC_IMPL(__imp__sub_8316755C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83167560"))) PPC_WEAK_FUNC(sub_83167560);
PPC_FUNC_IMPL(__imp__sub_83167560) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316756C"))) PPC_WEAK_FUNC(sub_8316756C);
PPC_FUNC_IMPL(__imp__sub_8316756C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83167570"))) PPC_WEAK_FUNC(sub_83167570);
PPC_FUNC_IMPL(__imp__sub_83167570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// lfs f5,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// fadds f4,f7,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f4,52(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// fadds f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f3,56(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// fadds f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f2,60(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lfs f13,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f1,f8
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmuls f5,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fadds f1,f11,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// stfs f1,64(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// fadds f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f2,68(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// fadds f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f3,72(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// lfs f11,132(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,128(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8316764c
	if (!ctx.cr6.lt) goto loc_8316764C;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f7,52(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f6,56(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// fmuls f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f5,60(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// b 0x83167658
	goto loc_83167658;
loc_8316764C:
	// stfs f12,60(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// stfs f12,56(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// stfs f12,52(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
loc_83167658:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x8316768c
	if (!ctx.cr6.lt) goto loc_8316768C;
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x83167698
	goto loc_83167698;
loc_8316768C:
	// stfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_83167698:
	// lfs f0,56(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,136(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x831676e4
	if (!ctx.cr6.gt) goto loc_831676E4;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// lfs f12,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fsqrts f10,f0
	ctx.f10.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f9,52(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f8,56(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// fmuls f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f7,60(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
loc_831676E4:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,140(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x83167730
	if (!ctx.cr6.gt) goto loc_83167730;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsqrts f10,f0
	ctx.f10.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_83167730:
	// lfs f0,52(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r4,76
	ctx.r11.s64 = ctx.r4.s64 + 76;
	// stfs f0,76(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// lfs f13,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// lfs f12,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,84(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// lfs f11,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,88(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// lfs f10,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,92(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// lfs f9,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,96(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 96, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167768"))) PPC_WEAK_FUNC(sub_83167768);
PPC_FUNC_IMPL(__imp__sub_83167768) {
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
	// li r6,2048
	ctx.r6.s64 = 2048;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83168e48
	ctx.lr = 0x83167798;
	sub_83168E48(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x831664e8
	ctx.lr = 0x831677A0;
	sub_831664E8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// li r6,2048
	ctx.r6.s64 = 2048;
	// li r5,512
	ctx.r5.s64 = 512;
	// bl 0x83169110
	ctx.lr = 0x831677C0;
	sub_83169110(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r6,2048
	ctx.r6.s64 = 2048;
	// li r5,512
	ctx.r5.s64 = 512;
	// bl 0x831693d0
	ctx.lr = 0x831677D4;
	sub_831693D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// li r6,2048
	ctx.r6.s64 = 2048;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x83169690
	ctx.lr = 0x831677E8;
	sub_83169690(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// std r30,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r30.u64);
	// lfs f0,-18204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18204);
	ctx.f0.f64 = double(temp.f32);
	// std r30,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r30.u64);
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// stb r10,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r10.u8);
	// bl 0x83189210
	ctx.lr = 0x83167814;
	sub_83189210(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83167834"))) PPC_WEAK_FUNC(sub_83167834);
PPC_FUNC_IMPL(__imp__sub_83167834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83167838"))) PPC_WEAK_FUNC(sub_83167838);
PPC_FUNC_IMPL(__imp__sub_83167838) {
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
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83167860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r5,69
	ctx.r5.s64 = 69;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addi r4,r9,28768
	ctx.r4.s64 = ctx.r9.s64 + 28768;
	// bl 0x8315b870
	ctx.lr = 0x83167874;
	sub_8315B870(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x83169960
	ctx.lr = 0x8316787C;
	sub_83169960(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x83169748
	ctx.lr = 0x83167884;
	sub_83169748(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x83169488
	ctx.lr = 0x8316788C;
	sub_83169488(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x831691c8
	ctx.lr = 0x83167894;
	sub_831691C8(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8318a4b0
	ctx.lr = 0x8316789C;
	sub_8318A4B0(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x831664f8
	ctx.lr = 0x831678A4;
	sub_831664F8(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x83168f00
	ctx.lr = 0x831678AC;
	sub_83168F00(ctx, base);
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

__attribute__((alias("__imp__sub_831678C0"))) PPC_WEAK_FUNC(sub_831678C0);
PPC_FUNC_IMPL(__imp__sub_831678C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x831678C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// lwz r28,8(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83166510
	ctx.lr = 0x831678E4;
	sub_83166510(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r28,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r28,27
	ctx.r8.u64 = ctx.r28.u32 & 0x1F;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// slw r7,r30,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r9,32
	ctx.r3.s64 = ctx.r9.s64 + 32;
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r28,8(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83166510
	ctx.lr = 0x83167918;
	sub_83166510(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r28,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r4,r28,27
	ctx.r4.u64 = ctx.r28.u32 & 0x1F;
	// slw r3,r30,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r4.u8 & 0x3F));
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r3.u64;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83167958"))) PPC_WEAK_FUNC(sub_83167958);
PPC_FUNC_IMPL(__imp__sub_83167958) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r4,12
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFFF;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83167a08
	if (!ctx.cr6.lt) goto loc_83167A08;
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8316798c
	if (ctx.cr6.lt) goto loc_8316798C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x831679b4
	goto loc_831679B4;
loc_8316798C:
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// li r4,1
	ctx.r4.s64 = 1;
	// slw r3,r4,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r9,r6,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// and r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 & ctx.r9.u64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r9,r5,1
	ctx.r9.u64 = ctx.r5.u64 ^ 1;
loc_831679B4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83167a08
	if (ctx.cr6.eq) goto loc_83167A08;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x831679e0
	if (!ctx.cr6.eq) goto loc_831679E0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 * 204;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_831679E0:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// srw r6,r10,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// and r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 & ctx.r10.u64;
	// mulli r10,r4,204
	ctx.r10.s64 = ctx.r4.s64 * 204;
	// lwzx r11,r5,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_83167A08:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167A10"))) PPC_WEAK_FUNC(sub_83167A10);
PPC_FUNC_IMPL(__imp__sub_83167A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83167A18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// lwz r29,28(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x83167A38;
	sub_83166510(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm r10,r29,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r29,27
	ctx.r9.u64 = ctx.r29.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83167A7C"))) PPC_WEAK_FUNC(sub_83167A7C);
PPC_FUNC_IMPL(__imp__sub_83167A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83167A80"))) PPC_WEAK_FUNC(sub_83167A80);
PPC_FUNC_IMPL(__imp__sub_83167A80) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,72(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// clrlwi r10,r4,12
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFFF;
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83167b34
	if (!ctx.cr6.lt) goto loc_83167B34;
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83167ab4
	if (ctx.cr6.lt) goto loc_83167AB4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83167adc
	goto loc_83167ADC;
loc_83167AB4:
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// li r4,1
	ctx.r4.s64 = 1;
	// slw r3,r4,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r9,r6,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// and r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 & ctx.r9.u64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r9,r5,1
	ctx.r9.u64 = ctx.r5.u64 ^ 1;
loc_83167ADC:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83167b34
	if (ctx.cr6.eq) goto loc_83167B34;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x83167b04
	if (!ctx.cr6.eq) goto loc_83167B04;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83167b24
	goto loc_83167B24;
loc_83167B04:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// srw r6,r10,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// and r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 & ctx.r10.u64;
	// mulli r10,r4,136
	ctx.r10.s64 = ctx.r4.s64 * 136;
	// lwzx r11,r5,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
loc_83167B24:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_83167B34:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167B3C"))) PPC_WEAK_FUNC(sub_83167B3C);
PPC_FUNC_IMPL(__imp__sub_83167B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83167B40"))) PPC_WEAK_FUNC(sub_83167B40);
PPC_FUNC_IMPL(__imp__sub_83167B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83167B48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// lwz r29,28(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x83167B68;
	sub_83166510(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// rlwinm r10,r29,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r29,27
	ctx.r9.u64 = ctx.r29.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83167BAC"))) PPC_WEAK_FUNC(sub_83167BAC);
PPC_FUNC_IMPL(__imp__sub_83167BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83167BB0"))) PPC_WEAK_FUNC(sub_83167BB0);
PPC_FUNC_IMPL(__imp__sub_83167BB0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,6,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x3F00000;
	// lis r9,192
	ctx.r9.s64 = 12582912;
	// clrlwi r10,r4,12
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83167bdc
	if (!ctx.cr6.eq) goto loc_83167BDC;
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8317bc98
	sub_8317BC98(ctx, base);
	return;
loc_83167BDC:
	// lwz r8,112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 + 112;
	// lwz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83167c8c
	if (!ctx.cr6.lt) goto loc_83167C8C;
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83167c0c
	if (ctx.cr6.lt) goto loc_83167C0C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83167c34
	goto loc_83167C34;
loc_83167C0C:
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// li r4,1
	ctx.r4.s64 = 1;
	// slw r3,r4,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r9,r6,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// and r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 & ctx.r9.u64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r9,r5,1
	ctx.r9.u64 = ctx.r5.u64 ^ 1;
loc_83167C34:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83167c8c
	if (ctx.cr6.eq) goto loc_83167C8C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x83167c5c
	if (!ctx.cr6.eq) goto loc_83167C5C;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r10,r10,172
	ctx.r10.s64 = ctx.r10.s64 * 172;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83167c7c
	goto loc_83167C7C;
loc_83167C5C:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// srw r6,r10,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// and r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 & ctx.r10.u64;
	// mulli r10,r4,172
	ctx.r10.s64 = ctx.r4.s64 * 172;
	// lwzx r11,r5,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
loc_83167C7C:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_83167C8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167C94"))) PPC_WEAK_FUNC(sub_83167C94);
PPC_FUNC_IMPL(__imp__sub_83167C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83167C98"))) PPC_WEAK_FUNC(sub_83167C98);
PPC_FUNC_IMPL(__imp__sub_83167C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83167CA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r31,152
	ctx.r11.s64 = ctx.r31.s64 + 152;
	// lwz r29,28(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x83167CC0;
	sub_83166510(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// rlwinm r10,r29,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r29,27
	ctx.r9.u64 = ctx.r29.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83167D04"))) PPC_WEAK_FUNC(sub_83167D04);
PPC_FUNC_IMPL(__imp__sub_83167D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83167D08"))) PPC_WEAK_FUNC(sub_83167D08);
PPC_FUNC_IMPL(__imp__sub_83167D08) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,152(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// clrlwi r10,r4,12
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFFF;
	// lwz r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83167dbc
	if (!ctx.cr6.lt) goto loc_83167DBC;
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83167d3c
	if (ctx.cr6.lt) goto loc_83167D3C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83167d64
	goto loc_83167D64;
loc_83167D3C:
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// li r4,1
	ctx.r4.s64 = 1;
	// slw r3,r4,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r9,r6,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// and r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 & ctx.r9.u64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r9,r5,1
	ctx.r9.u64 = ctx.r5.u64 ^ 1;
loc_83167D64:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83167dbc
	if (ctx.cr6.eq) goto loc_83167DBC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x83167d8c
	if (!ctx.cr6.eq) goto loc_83167D8C;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r10,r10,440
	ctx.r10.s64 = ctx.r10.s64 * 440;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83167dac
	goto loc_83167DAC;
loc_83167D8C:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// srw r6,r10,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// and r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 & ctx.r10.u64;
	// mulli r10,r4,440
	ctx.r10.s64 = ctx.r4.s64 * 440;
	// lwzx r11,r5,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
loc_83167DAC:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_83167DBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83167DC4"))) PPC_WEAK_FUNC(sub_83167DC4);
PPC_FUNC_IMPL(__imp__sub_83167DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83167DC8"))) PPC_WEAK_FUNC(sub_83167DC8);
PPC_FUNC_IMPL(__imp__sub_83167DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83167DD0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6ad4
	ctx.lr = 0x83167DD8;
	__savefpr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r29,r31,76
	ctx.r29.s64 = ctx.r31.s64 + 76;
	// lfs f13,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
	// lfs f0,60(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lfs f12,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// lfs f30,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f30.f64 = double(temp.f32);
	// fadds f4,f7,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f4,100(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// fadds f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f3,104(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// fadds f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f2,108(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfs f1,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f11,f1,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fmadds f0,f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x83168004
	if (ctx.cr6.eq) goto loc_83168004;
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83167eb8
	if (ctx.cr6.eq) goto loc_83167EB8;
	// lfs f0,60(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f0,29088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29088);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x83167f0c
	if (!ctx.cr6.gt) goto loc_83167F0C;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f7,8(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f6,64(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f31,f6,f0
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// b 0x83167f0c
	goto loc_83167F0C;
loc_83167EB8:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f0,29084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29084);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x83167f0c
	if (!ctx.cr6.gt) goto loc_83167F0C;
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,4(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,8(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// fmuls f5,f6,f6
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f2,f3,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fsqrts f31,f2
	ctx.f31.f64 = double(float(sqrt(ctx.f2.f64)));
loc_83167F0C:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x83168004
	if (ctx.cr6.eq) goto loc_83168004;
	// lfs f0,60(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f0,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82cb4940
	ctx.lr = 0x83167F30;
	sub_82CB4940(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82cb4860
	ctx.lr = 0x83167F3C;
	sub_82CB4860(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// lfs f7,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f5,f30
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// lfs f2,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f6,f8,f30
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fmuls f4,f7,f30
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fmr f0,f7
	ctx.f0.f64 = ctx.f7.f64;
	// fdivs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f31.f64));
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// fmuls f13,f1,f28
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// fmr f1,f5
	ctx.f1.f64 = ctx.f5.f64;
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f1,f1,f28
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// fmuls f12,f5,f11
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f27,f7,f9
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f29,f8,f10
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f26,f5,f9
	ctx.f26.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f23,f9,f2
	ctx.f23.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f25,f2,f11
	ctx.f25.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f24,f10,f2
	ctx.f24.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmsubs f9,f8,f9,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 - ctx.f12.f64));
	// fmsubs f5,f5,f10,f27
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 - ctx.f27.f64));
	// fmsubs f12,f7,f11,f29
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f29.f64));
	// fmadds f11,f8,f11,f26
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f26.f64));
	// fadds f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// fadds f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fadds f8,f12,f3
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// fmadds f5,f7,f10,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fadds f4,f9,f24
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f24.f64));
	// fadds f12,f6,f25
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f25.f64));
	// fadds f3,f8,f23
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f23.f64));
	// fmsubs f11,f2,f30,f5
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f30.f64 - ctx.f5.f64));
	// fadds f10,f0,f4
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f10,116(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// fadds f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f8,112(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// fadds f9,f1,f3
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// stfs f9,120(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// fmadds f7,f31,f28,f11
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f28.f64 + ctx.f11.f64));
	// stfs f7,124(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
loc_83168004:
	// lfs f0,60(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x83168170
	if (ctx.cr6.eq) goto loc_83168170;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r26,1
	ctx.r26.s64 = 1;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x8316803c
	if (!ctx.cr6.eq) goto loc_8316803C;
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x8316803c
	if (!ctx.cr6.eq) goto loc_8316803C;
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x83168040
	if (ctx.cr6.eq) goto loc_83168040;
loc_8316803C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83168040:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83168084
	if (ctx.cr6.eq) goto loc_83168084;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x83168074
	if (!ctx.cr6.eq) goto loc_83168074;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x83168074
	if (!ctx.cr6.eq) goto loc_83168074;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x83168078
	if (ctx.cr6.eq) goto loc_83168078;
loc_83168074:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83168078:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83168170
	if (!ctx.cr6.eq) goto loc_83168170;
loc_83168084:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r31,192
	ctx.r29.s64 = ctx.r31.s64 + 192;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83168118
	if (!ctx.cr6.eq) goto loc_83168118;
	// lhz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65535, ctx.xer);
	// beq cr6,0x831680d4
	if (ctx.cr6.eq) goto loc_831680D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83166510
	ctx.lr = 0x831680B8;
	sub_83166510(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r31,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// slw r8,r26,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
loc_831680D4:
	// lhz r31,6(r29)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65535, ctx.xer);
	// beq cr6,0x83168170
	if (ctx.cr6.eq) goto loc_83168170;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83166510
	ctx.lr = 0x831680EC;
	sub_83166510(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r31,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// slw r8,r26,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b20
	ctx.lr = 0x83168114;
	__restfpr_23(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_83168118:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83168170
	if (ctx.cr6.eq) goto loc_83168170;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8316812C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhzx r27,r11,r31
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83166510
	ctx.lr = 0x83168140;
	sub_83166510(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r27,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r27,27
	ctx.r9.u64 = ctx.r27.u32 & 0x1F;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// slw r8,r26,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// lhz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8316812c
	if (ctx.cr6.lt) goto loc_8316812C;
loc_83168170:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82cb6b20
	ctx.lr = 0x8316817C;
	__restfpr_23(ctx, base);
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83168180"))) PPC_WEAK_FUNC(sub_83168180);
PPC_FUNC_IMPL(__imp__sub_83168180) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,23
	ctx.r5.s64 = 23;
	// addi r4,r11,28560
	ctx.r4.s64 = ctx.r11.s64 + 28560;
	// li r3,232
	ctx.r3.s64 = 232;
	// bl 0x8315b860
	ctx.lr = 0x831681AC;
	sub_8315B860(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831681c4
	if (ctx.cr6.eq) goto loc_831681C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83167768
	ctx.lr = 0x831681C0;
	sub_83167768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831681C4:
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

__attribute__((alias("__imp__sub_831681DC"))) PPC_WEAK_FUNC(sub_831681DC);
PPC_FUNC_IMPL(__imp__sub_831681DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831681E0"))) PPC_WEAK_FUNC(sub_831681E0);
PPC_FUNC_IMPL(__imp__sub_831681E0) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8316a168
	ctx.lr = 0x83168200;
	sub_8316A168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83168218
	if (ctx.cr6.eq) goto loc_83168218;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8317f750
	ctx.lr = 0x83168214;
	sub_8317F750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83168218:
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

__attribute__((alias("__imp__sub_83168230"))) PPC_WEAK_FUNC(sub_83168230);
PPC_FUNC_IMPL(__imp__sub_83168230) {
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
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8316a1f8
	ctx.lr = 0x83168250;
	sub_8316A1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83168268
	if (ctx.cr6.eq) goto loc_83168268;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831814f8
	ctx.lr = 0x83168264;
	sub_831814F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83168268:
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

__attribute__((alias("__imp__sub_83168280"))) PPC_WEAK_FUNC(sub_83168280);
PPC_FUNC_IMPL(__imp__sub_83168280) {
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
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8316a288
	ctx.lr = 0x831682A0;
	sub_8316A288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831682b8
	if (ctx.cr6.eq) goto loc_831682B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831823d8
	ctx.lr = 0x831682B4;
	sub_831823D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831682B8:
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

__attribute__((alias("__imp__sub_831682D0"))) PPC_WEAK_FUNC(sub_831682D0);
PPC_FUNC_IMPL(__imp__sub_831682D0) {
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
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8316a318
	ctx.lr = 0x831682F0;
	sub_8316A318(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83168308
	if (ctx.cr6.eq) goto loc_83168308;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831832d8
	ctx.lr = 0x83168304;
	sub_831832D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83168308:
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

__attribute__((alias("__imp__sub_83168320"))) PPC_WEAK_FUNC(sub_83168320);
PPC_FUNC_IMPL(__imp__sub_83168320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x83168328;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x83168564
	if (ctx.cr6.eq) goto loc_83168564;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83168384
	if (!ctx.cr6.eq) goto loc_83168384;
	// lwz r10,168(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 168);
	// addi r11,r24,168
	ctx.r11.s64 = ctx.r24.s64 + 168;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83168384
	if (!ctx.cr6.eq) goto loc_83168384;
	// lwz r10,180(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 180);
	// addi r11,r24,180
	ctx.r11.s64 = ctx.r24.s64 + 180;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83168384
	if (!ctx.cr6.eq) goto loc_83168384;
	// bl 0x83167570
	ctx.lr = 0x83168374;
	sub_83167570(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x83167dc8
	ctx.lr = 0x8316837C;
	sub_83167DC8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_83168384:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// addi r27,r25,1140
	ctx.r27.s64 = ctx.r25.s64 + 1140;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// bl 0x831782f8
	ctx.lr = 0x831683A0;
	sub_831782F8(ctx, base);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_831683A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83167570
	ctx.lr = 0x831683B0;
	sub_83167570(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83177f88
	ctx.lr = 0x831683CC;
	sub_83177F88(ctx, base);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,100(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// ble cr6,0x831683e0
	if (!ctx.cr6.gt) goto loc_831683E0;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_831683E0:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x831683a4
	if (!ctx.cr6.eq) goto loc_831683A4;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83178258
	ctx.lr = 0x8316840C;
	sub_83178258(ctx, base);
	// addi r29,r25,1156
	ctx.r29.s64 = ctx.r25.s64 + 1156;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,20(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83178890
	ctx.lr = 0x83168420;
	sub_83178890(ctx, base);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_83168424:
	// lwz r31,172(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 172);
	// addi r30,r26,168
	ctx.r30.s64 = ctx.r26.s64 + 168;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8316845c
	if (ctx.cr6.eq) goto loc_8316845C;
loc_83168434:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f1,60(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83168450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83168434
	if (!ctx.cr6.eq) goto loc_83168434;
loc_8316845C:
	// lwz r31,184(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 184);
	// addi r30,r26,180
	ctx.r30.s64 = ctx.r26.s64 + 180;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x831684f8
	if (ctx.cr6.eq) goto loc_831684F8;
loc_8316846C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8316849c
	if (!ctx.cr6.eq) goto loc_8316849C;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83168498
	if (ctx.cr6.eq) goto loc_83168498;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// b 0x8316849c
	goto loc_8316849C;
loc_83168498:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8316849C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x831684d8
	if (ctx.cr6.eq) goto loc_831684D8;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831684bc
	if (ctx.cr6.eq) goto loc_831684BC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x831684c0
	goto loc_831684C0;
loc_831684BC:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_831684C0:
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831684d4
	if (ctx.cr6.eq) goto loc_831684D4;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x831684d8
	goto loc_831684D8;
loc_831684D4:
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
loc_831684D8:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lfs f1,60(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8317be00
	ctx.lr = 0x831684EC;
	sub_8317BE00(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8316846c
	if (!ctx.cr6.eq) goto loc_8316846C;
loc_831684F8:
	// lwz r26,12(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x83168424
	if (!ctx.cr6.eq) goto loc_83168424;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83168538
	if (ctx.cr6.eq) goto loc_83168538;
	// lwz r3,68(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// lfs f1,60(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r6,12(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83168538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83168538:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8316853C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x831781a0
	ctx.lr = 0x83168544;
	sub_831781A0(ctx, base);
	// stw r22,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r22.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83167dc8
	ctx.lr = 0x83168558;
	sub_83167DC8(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8316853c
	if (!ctx.cr6.eq) goto loc_8316853C;
loc_83168564:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316856C"))) PPC_WEAK_FUNC(sub_8316856C);
PPC_FUNC_IMPL(__imp__sub_8316856C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83168570"))) PPC_WEAK_FUNC(sub_83168570);
PPC_FUNC_IMPL(__imp__sub_83168570) {
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
	// bl 0x83167838
	ctx.lr = 0x83168588;
	sub_83167838(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r11,28664
	ctx.r4.s64 = ctx.r11.s64 + 28664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8315b870
	ctx.lr = 0x8316859C;
	sub_8315B870(ctx, base);
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

__attribute__((alias("__imp__sub_831685B0"))) PPC_WEAK_FUNC(sub_831685B0);
PPC_FUNC_IMPL(__imp__sub_831685B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x831685B8;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r18,r11,25672
	ctx.r18.s64 = ctx.r11.s64 + 25672;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,51
	ctx.r5.s64 = 51;
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8315b860
	ctx.lr = 0x831685E8;
	sub_8315B860(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// ble cr6,0x8316860c
	if (!ctx.cr6.gt) goto loc_8316860C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r19,r11,72
	ctx.r19.s64 = ctx.r11.s64 + 72;
	// b 0x83168610
	goto loc_83168610;
loc_8316860C:
	// addi r19,r11,8
	ctx.r19.s64 = ctx.r11.s64 + 8;
loc_83168610:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bea278
	ctx.lr = 0x83168618;
	sub_82BEA278(ctx, base);
	// addi r3,r21,36
	ctx.r3.s64 = ctx.r21.s64 + 36;
	// addi r23,r21,52
	ctx.r23.s64 = ctx.r21.s64 + 52;
	// bl 0x83166640
	ctx.lr = 0x83168624;
	sub_83166640(ctx, base);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8318a4c8
	ctx.lr = 0x83168630;
	sub_8318A4C8(ctx, base);
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// addi r25,r21,44
	ctx.r25.s64 = ctx.r21.s64 + 44;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83168654
	if (!ctx.cr6.gt) goto loc_83168654;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83168658
	goto loc_83168658;
loc_83168654:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_83168658:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,1916
	ctx.r10.s64 = 125566976;
	// li r22,1
	ctx.r22.s64 = 1;
	// ori r26,r10,46385
	ctx.r26.u64 = ctx.r10.u64 | 46385;
	// addi r24,r11,26208
	ctx.r24.s64 = ctx.r11.s64 + 26208;
loc_8316866C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8316869c
	if (!ctx.cr6.eq) goto loc_8316869C;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_83168678:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831687d4
	if (!ctx.cr6.lt) goto loc_831687D4;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83168678
	if (ctx.cr6.eq) goto loc_83168678;
loc_8316869C:
	// neg r11,r30
	ctx.r11.s64 = -ctx.r30.s64;
	// rlwinm r9,r28,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// and r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ctx.r30.u64;
	// mullw r8,r10,r26
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// rlwinm r7,r8,7,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7C;
	// lwzx r11,r7,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// srw r6,r30,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r30,r6,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x831687d4
	if (ctx.cr6.eq) goto loc_831687D4;
	// lwz r8,4(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r10,r21,4
	ctx.r10.s64 = ctx.r21.s64 + 4;
	// lwz r9,12(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83168778
	if (!ctx.cr6.lt) goto loc_83168778;
	// lwz r7,36(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83168700
	if (ctx.cr6.lt) goto loc_83168700;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// b 0x83168724
	goto loc_83168724;
loc_83168700:
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// slw r4,r22,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r3,r6,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// and r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 & ctx.r3.u64;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r9,r6,1
	ctx.r9.u64 = ctx.r6.u64 ^ 1;
loc_83168724:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83168778
	if (ctx.cr6.eq) goto loc_83168778;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x83168750
	if (!ctx.cr6.eq) goto loc_83168750;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mulli r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 * 204;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8316877c
	goto loc_8316877C;
loc_83168750:
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// srw r6,r11,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// and r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 & ctx.r11.u64;
	// mulli r11,r4,204
	ctx.r11.s64 = ctx.r4.s64 * 204;
	// lwzx r10,r5,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8316877c
	goto loc_8316877C;
loc_83168778:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8316877C:
	// lwz r31,172(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// addi r29,r11,168
	ctx.r29.s64 = ctx.r11.s64 + 168;
	// stw r11,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r11.u32);
	// stw r20,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r20.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r22,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r22.u32);
	// beq cr6,0x8316866c
	if (ctx.cr6.eq) goto loc_8316866C;
loc_83168798:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831687c4
	if (ctx.cr6.eq) goto loc_831687C4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831687c4
	if (ctx.cr6.eq) goto loc_831687C4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x831672b0
	ctx.lr = 0x831687C4;
	sub_831672B0(ctx, base);
loc_831687C4:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x83168798
	if (!ctx.cr6.eq) goto loc_83168798;
	// b 0x8316866c
	goto loc_8316866C;
loc_831687D4:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// addi r28,r11,212
	ctx.r28.s64 = ctx.r11.s64 + 212;
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x831687fc
	if (!ctx.cr6.gt) goto loc_831687FC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83168800
	goto loc_83168800;
loc_831687FC:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_83168800:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83168830
	if (!ctx.cr6.eq) goto loc_83168830;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_8316880C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83168910
	if (!ctx.cr6.lt) goto loc_83168910;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// lwzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8316880c
	if (ctx.cr6.eq) goto loc_8316880C;
loc_83168830:
	// neg r11,r31
	ctx.r11.s64 = -ctx.r31.s64;
	// rlwinm r9,r30,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// and r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ctx.r31.u64;
	// mullw r8,r10,r26
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// rlwinm r7,r8,7,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7C;
	// lwzx r10,r7,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// srw r6,r31,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r10.u8 & 0x3F));
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r31,r6,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x83168910
	if (ctx.cr6.eq) goto loc_83168910;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r8,384
	ctx.r8.s64 = 384;
	// lwz r9,172(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// lwz r7,184(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// srw r4,r10,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// and r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 & ctx.r10.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r3,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r8,r11
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x83168800
	if (ctx.cr6.eq) goto loc_83168800;
	// rlwinm r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83168800
	if (!ctx.cr6.eq) goto loc_83168800;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831688d0
	if (ctx.cr6.eq) goto loc_831688D0;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x831688d4
	goto loc_831688D4;
loc_831688D0:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_831688D4:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831688e8
	if (ctx.cr6.eq) goto loc_831688E8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x831688ec
	goto loc_831688EC;
loc_831688E8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_831688EC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83168800
	if (ctx.cr6.eq) goto loc_83168800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83168800
	if (ctx.cr6.eq) goto loc_83168800;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x831672b0
	ctx.lr = 0x8316890C;
	sub_831672B0(ctx, base);
	// b 0x83168800
	goto loc_83168800;
loc_83168910:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83168930
	if (!ctx.cr6.gt) goto loc_83168930;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83168934
	goto loc_83168934;
loc_83168930:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_83168934:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83168964
	if (!ctx.cr6.eq) goto loc_83168964;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_83168940:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83168b64
	if (!ctx.cr6.lt) goto loc_83168B64;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// lwzx r29,r9,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83168940
	if (ctx.cr6.eq) goto loc_83168940;
loc_83168964:
	// neg r11,r29
	ctx.r11.s64 = -ctx.r29.s64;
	// rlwinm r9,r28,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// and r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 & ctx.r29.u64;
	// mullw r8,r10,r26
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// rlwinm r7,r8,7,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7C;
	// lwzx r10,r7,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// add r11,r27,r10
	ctx.r11.u64 = ctx.r27.u64 + ctx.r10.u64;
	// srw r6,r29,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r10.u8 & 0x3F));
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r29,r6,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x83168b64
	if (ctx.cr6.eq) goto loc_83168B64;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x831689c4
	if (ctx.cr6.eq) goto loc_831689C4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83167248
	ctx.lr = 0x831689B4;
	sub_83167248(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
loc_831689C4:
	// lwz r9,4(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r11,r21,4
	ctx.r11.s64 = ctx.r21.s64 + 4;
	// lwz r10,12(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x83168a6c
	if (!ctx.cr6.lt) goto loc_83168A6C;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r31,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x831689f4
	if (ctx.cr6.lt) goto loc_831689F4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// b 0x83168a18
	goto loc_83168A18;
loc_831689F4:
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r6,r31,27
	ctx.r6.u64 = ctx.r31.u32 & 0x1F;
	// slw r5,r22,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// and r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 & ctx.r3.u64;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r10,r7,1
	ctx.r10.u64 = ctx.r7.u64 ^ 1;
loc_83168A18:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83168a6c
	if (ctx.cr6.eq) goto loc_83168A6C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x83168a44
	if (!ctx.cr6.eq) goto loc_83168A44;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r9,r31,204
	ctx.r9.s64 = ctx.r31.s64 * 204;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x83168a70
	goto loc_83168A70;
loc_83168A44:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// srw r7,r31,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// and r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 & ctx.r31.u64;
	// mulli r9,r5,204
	ctx.r9.s64 = ctx.r5.s64 * 204;
	// lwzx r10,r6,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x83168a70
	goto loc_83168A70;
loc_83168A6C:
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
loc_83168A70:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83168b14
	if (!ctx.cr6.lt) goto loc_83168B14;
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83168a9c
	if (ctx.cr6.lt) goto loc_83168A9C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// b 0x83168ac0
	goto loc_83168AC0;
loc_83168A9C:
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r5,r4,27
	ctx.r5.u64 = ctx.r4.u32 & 0x1F;
	// slw r3,r22,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r10,r6,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// and r7,r3,r10
	ctx.r7.u64 = ctx.r3.u64 & ctx.r10.u64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r10,r5,1
	ctx.r10.u64 = ctx.r5.u64 ^ 1;
loc_83168AC0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83168b14
	if (ctx.cr6.eq) goto loc_83168B14;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x83168aec
	if (!ctx.cr6.eq) goto loc_83168AEC;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r10,r4,204
	ctx.r10.s64 = ctx.r4.s64 * 204;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83168b18
	goto loc_83168B18;
loc_83168AEC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// srw r6,r4,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// and r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 & ctx.r4.u64;
	// mulli r10,r3,204
	ctx.r10.s64 = ctx.r3.s64 * 204;
	// lwzx r11,r5,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83168b18
	goto loc_83168B18;
loc_83168B14:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_83168B18:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83168b44
	if (ctx.cr6.eq) goto loc_83168B44;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
loc_83168B44:
	// lbz r11,201(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 201);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83168934
	if (!ctx.cr6.eq) goto loc_83168934;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8316a3b8
	ctx.lr = 0x83168B60;
	sub_8316A3B8(ctx, base);
	// b 0x83168934
	goto loc_83168934;
loc_83168B64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bea278
	ctx.lr = 0x83168B6C;
	sub_82BEA278(ctx, base);
	// ld r7,0(r19)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r19.u32 + 0);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r9,-31978
	ctx.r9.s64 = -2095710208;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// addi r8,r9,13848
	ctx.r8.s64 = ctx.r9.s64 + 13848;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r6,0(r19)
	PPC_STORE_U64(ctx.r19.u32 + 0, ctx.r6.u64);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83168c34
	if (!ctx.cr6.eq) goto loc_83168C34;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x833b8b14
	ctx.lr = 0x83168BA4;
	__imp__InterlockedPopEntrySList(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83168be8
	if (!ctx.cr6.eq) goto loc_83168BE8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r11,26336
	ctx.r4.s64 = ctx.r11.s64 + 26336;
	// li r3,1220
	ctx.r3.s64 = 1220;
	// bl 0x8315b860
	ctx.lr = 0x83168BC4;
	sub_8315B860(ctx, base);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addic. r29,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r29.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// beq 0x83168be8
	if (ctx.cr0.eq) goto loc_83168BE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83165eb0
	ctx.lr = 0x83168BE8;
	sub_83165EB0(ctx, base);
loc_83168BE8:
	// lwz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83168c20
	if (ctx.cr6.eq) goto loc_83168C20;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_83168BFC:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r11,284
	ctx.r6.s64 = ctx.r11.s64 + 284;
	// bl 0x83168320
	ctx.lr = 0x83168C14;
	sub_83168320(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83168bfc
	if (!ctx.cr0.eq) goto loc_83168BFC;
loc_83168C20:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x8335a130
	ctx.lr = 0x83168C30;
	sub_8335A130(ctx, base);
	// b 0x83168d98
	goto loc_83168D98;
loc_83168C34:
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83168d04
	if (ctx.cr6.eq) goto loc_83168D04;
	// addi r27,r21,208
	ctx.r27.s64 = ctx.r21.s64 + 208;
loc_83168C4C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// add r28,r11,r26
	ctx.r28.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x83168c8c
	if (!ctx.cr6.lt) goto loc_83168C8C;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_83168C68:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,20(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bge cr6,0x83168c8c
	if (!ctx.cr6.lt) goto loc_83168C8C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83168c68
	if (ctx.cr6.lt) goto loc_83168C68;
loc_83168C8C:
	// subf r30,r31,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r31.s64;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x83168ca0
	if (!ctx.cr6.gt) goto loc_83168CA0;
	// subf r30,r31,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r31.s64;
loc_83168CA0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b8b14
	ctx.lr = 0x83168CA8;
	__imp__InterlockedPopEntrySList(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83168cc0
	if (!ctx.cr6.eq) goto loc_83168CC0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8316a050
	ctx.lr = 0x83168CB8;
	sub_8316A050(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x83168cc4
	goto loc_83168CC4;
loc_83168CC0:
	// addi r5,r3,-12
	ctx.r5.s64 = ctx.r3.s64 + -12;
loc_83168CC4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83168cd8
	if (ctx.cr6.eq) goto loc_83168CD8;
	// stw r21,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r21.u32);
	// stw r30,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// stw r28,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
loc_83168CD8:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-4184
	ctx.r4.s64 = ctx.r10.s64 + -4184;
	// lwz r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83168CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83168c4c
	if (ctx.cr6.lt) goto loc_83168C4C;
loc_83168D04:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83168D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,0(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x833b8b04
	ctx.lr = 0x83168D30;
	__imp__InterlockedFlushSList(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83168d74
	if (ctx.cr6.eq) goto loc_83168D74;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83168d74
	if (ctx.cr6.eq) goto loc_83168D74;
loc_83168D4C:
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r4,r11,1192
	ctx.r4.s64 = ctx.r11.s64 + 1192;
	// addi r3,r10,284
	ctx.r3.s64 = ctx.r10.s64 + 284;
	// bl 0x831666b0
	ctx.lr = 0x83168D5C;
	sub_831666B0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83168d74
	if (ctx.cr6.eq) goto loc_83168D74;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83168d4c
	if (!ctx.cr6.eq) goto loc_83168D4C;
loc_83168D74:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83168d98
	if (ctx.cr6.eq) goto loc_83168D98;
loc_83168D80:
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8335a130
	ctx.lr = 0x83168D8C;
	sub_8335A130(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83168d80
	if (!ctx.cr6.eq) goto loc_83168D80;
loc_83168D98:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r5,75
	ctx.r5.s64 = 75;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8315b870
	ctx.lr = 0x83168DA8;
	sub_8315B870(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83168DB0"))) PPC_WEAK_FUNC(sub_83168DB0);
PPC_FUNC_IMPL(__imp__sub_83168DB0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x83168ddc
	if (ctx.cr6.eq) goto loc_83168DDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
loc_83168DDC:
	// stfs f0,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// bl 0x831685b0
	ctx.lr = 0x83168DE4;
	sub_831685B0(ctx, base);
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

__attribute__((alias("__imp__sub_83168DF8"))) PPC_WEAK_FUNC(sub_83168DF8);
PPC_FUNC_IMPL(__imp__sub_83168DF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168E00"))) PPC_WEAK_FUNC(sub_83168E00);
PPC_FUNC_IMPL(__imp__sub_83168E00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168E14"))) PPC_WEAK_FUNC(sub_83168E14);
PPC_FUNC_IMPL(__imp__sub_83168E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83168E18"))) PPC_WEAK_FUNC(sub_83168E18);
PPC_FUNC_IMPL(__imp__sub_83168E18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168E20"))) PPC_WEAK_FUNC(sub_83168E20);
PPC_FUNC_IMPL(__imp__sub_83168E20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168E28"))) PPC_WEAK_FUNC(sub_83168E28);
PPC_FUNC_IMPL(__imp__sub_83168E28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168E3C"))) PPC_WEAK_FUNC(sub_83168E3C);
PPC_FUNC_IMPL(__imp__sub_83168E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83168E40"))) PPC_WEAK_FUNC(sub_83168E40);
PPC_FUNC_IMPL(__imp__sub_83168E40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83168E48"))) PPC_WEAK_FUNC(sub_83168E48);
PPC_FUNC_IMPL(__imp__sub_83168E48) {
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
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// bl 0x831664e8
	ctx.lr = 0x83168E84;
	sub_831664E8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,272
	ctx.r5.s64 = 272;
	// addi r4,r11,26728
	ctx.r4.s64 = ctx.r11.s64 + 26728;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8315b860
	ctx.lr = 0x83168E9C;
	sub_8315B860(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// ble cr6,0x83168ee4
	if (!ctx.cr6.gt) goto loc_83168EE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x83168ee4
	if (ctx.cr6.eq) goto loc_83168EE4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_83168EC4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83168ec4
	if (!ctx.cr6.eq) goto loc_83168EC4;
loc_83168EE4:
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

__attribute__((alias("__imp__sub_83168F00"))) PPC_WEAK_FUNC(sub_83168F00);
PPC_FUNC_IMPL(__imp__sub_83168F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83168F08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83168f7c
	if (!ctx.cr6.gt) goto loc_83168F7C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
loc_83168F28:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r31,r28,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// beq cr6,0x83168f68
	if (ctx.cr6.eq) goto loc_83168F68;
loc_83168F3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83168F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,204
	ctx.r31.s64 = ctx.r31.s64 + 204;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83168f3c
	if (ctx.cr6.lt) goto loc_83168F3C;
loc_83168F68:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83168f28
	if (ctx.cr6.lt) goto loc_83168F28;
loc_83168F7C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,26728
	ctx.r28.s64 = ctx.r11.s64 + 26728;
	// ble cr6,0x83168fc0
	if (!ctx.cr6.gt) goto loc_83168FC0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83168F98:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,296
	ctx.r5.s64 = 296;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8315b870
	ctx.lr = 0x83168FAC;
	sub_8315B870(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83168f98
	if (ctx.cr6.lt) goto loc_83168F98;
loc_83168FC0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,297
	ctx.r5.s64 = 297;
	// bl 0x8315b870
	ctx.lr = 0x83168FD0;
	sub_8315B870(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,298
	ctx.r5.s64 = 298;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x8315b870
	ctx.lr = 0x83168FE0;
	sub_8315B870(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x831664f8
	ctx.lr = 0x83168FE8;
	sub_831664F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83168FF0"))) PPC_WEAK_FUNC(sub_83168FF0);
PPC_FUNC_IMPL(__imp__sub_83168FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83168FF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x83169014;
	sub_83166510(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r29,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r29,27
	ctx.r9.u64 = ctx.r29.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r30.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83169058"))) PPC_WEAK_FUNC(sub_83169058);
PPC_FUNC_IMPL(__imp__sub_83169058) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83169100
	if (!ctx.cr6.lt) goto loc_83169100;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83169084
	if (ctx.cr6.lt) goto loc_83169084;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831690ac
	goto loc_831690AC;
loc_83169084:
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r4,27
	ctx.r7.u64 = ctx.r4.u32 & 0x1F;
	// li r6,1
	ctx.r6.s64 = 1;
	// slw r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// and r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 & ctx.r11.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
loc_831690AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83169100
	if (ctx.cr6.eq) goto loc_83169100;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x831690d8
	if (!ctx.cr6.eq) goto loc_831690D8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r10,r4,204
	ctx.r10.s64 = ctx.r4.s64 * 204;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_831690D8:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// srw r8,r4,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// and r6,r10,r4
	ctx.r6.u64 = ctx.r10.u64 & ctx.r4.u64;
	// mulli r10,r6,204
	ctx.r10.s64 = ctx.r6.s64 * 204;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_83169100:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169108"))) PPC_WEAK_FUNC(sub_83169108);
PPC_FUNC_IMPL(__imp__sub_83169108) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x83166640
	sub_83166640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83169110"))) PPC_WEAK_FUNC(sub_83169110);
PPC_FUNC_IMPL(__imp__sub_83169110) {
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
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// bl 0x831664e8
	ctx.lr = 0x8316914C;
	sub_831664E8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,272
	ctx.r5.s64 = 272;
	// addi r4,r11,26728
	ctx.r4.s64 = ctx.r11.s64 + 26728;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8315b860
	ctx.lr = 0x83169164;
	sub_8315B860(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// ble cr6,0x831691ac
	if (!ctx.cr6.gt) goto loc_831691AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x831691ac
	if (ctx.cr6.eq) goto loc_831691AC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8316918C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8316918c
	if (!ctx.cr6.eq) goto loc_8316918C;
loc_831691AC:
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

__attribute__((alias("__imp__sub_831691C8"))) PPC_WEAK_FUNC(sub_831691C8);
PPC_FUNC_IMPL(__imp__sub_831691C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x831691D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83169244
	if (!ctx.cr6.gt) goto loc_83169244;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
loc_831691F0:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r31,r28,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// beq cr6,0x83169230
	if (ctx.cr6.eq) goto loc_83169230;
loc_83169204:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8316921C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,136
	ctx.r31.s64 = ctx.r31.s64 + 136;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83169204
	if (ctx.cr6.lt) goto loc_83169204;
loc_83169230:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x831691f0
	if (ctx.cr6.lt) goto loc_831691F0;
loc_83169244:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,26728
	ctx.r28.s64 = ctx.r11.s64 + 26728;
	// ble cr6,0x83169288
	if (!ctx.cr6.gt) goto loc_83169288;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83169260:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,296
	ctx.r5.s64 = 296;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8315b870
	ctx.lr = 0x83169274;
	sub_8315B870(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83169260
	if (ctx.cr6.lt) goto loc_83169260;
loc_83169288:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,297
	ctx.r5.s64 = 297;
	// bl 0x8315b870
	ctx.lr = 0x83169298;
	sub_8315B870(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,298
	ctx.r5.s64 = 298;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x8315b870
	ctx.lr = 0x831692A8;
	sub_8315B870(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x831664f8
	ctx.lr = 0x831692B0;
	sub_831664F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831692B8"))) PPC_WEAK_FUNC(sub_831692B8);
PPC_FUNC_IMPL(__imp__sub_831692B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x831692C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r29,28(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x831692DC;
	sub_83166510(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r29,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r29,27
	ctx.r9.u64 = ctx.r29.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r30.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83169320"))) PPC_WEAK_FUNC(sub_83169320);
PPC_FUNC_IMPL(__imp__sub_83169320) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x831693c8
	if (!ctx.cr6.lt) goto loc_831693C8;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8316934c
	if (ctx.cr6.lt) goto loc_8316934C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83169374
	goto loc_83169374;
loc_8316934C:
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r4,27
	ctx.r7.u64 = ctx.r4.u32 & 0x1F;
	// li r6,1
	ctx.r6.s64 = 1;
	// slw r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// and r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 & ctx.r11.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
loc_83169374:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831693c8
	if (ctx.cr6.eq) goto loc_831693C8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x831693a0
	if (!ctx.cr6.eq) goto loc_831693A0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r10,r4,136
	ctx.r10.s64 = ctx.r4.s64 * 136;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_831693A0:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// srw r8,r4,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// and r6,r10,r4
	ctx.r6.u64 = ctx.r10.u64 & ctx.r4.u64;
	// mulli r10,r6,136
	ctx.r10.s64 = ctx.r6.s64 * 136;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_831693C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831693D0"))) PPC_WEAK_FUNC(sub_831693D0);
PPC_FUNC_IMPL(__imp__sub_831693D0) {
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
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// bl 0x831664e8
	ctx.lr = 0x8316940C;
	sub_831664E8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,272
	ctx.r5.s64 = 272;
	// addi r4,r11,26728
	ctx.r4.s64 = ctx.r11.s64 + 26728;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8315b860
	ctx.lr = 0x83169424;
	sub_8315B860(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// ble cr6,0x8316946c
	if (!ctx.cr6.gt) goto loc_8316946C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8316946c
	if (ctx.cr6.eq) goto loc_8316946C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8316944C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8316944c
	if (!ctx.cr6.eq) goto loc_8316944C;
loc_8316946C:
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

__attribute__((alias("__imp__sub_83169488"))) PPC_WEAK_FUNC(sub_83169488);
PPC_FUNC_IMPL(__imp__sub_83169488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83169490;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83169504
	if (!ctx.cr6.gt) goto loc_83169504;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
loc_831694B0:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r31,r28,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// beq cr6,0x831694f0
	if (ctx.cr6.eq) goto loc_831694F0;
loc_831694C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831694DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,172
	ctx.r31.s64 = ctx.r31.s64 + 172;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831694c4
	if (ctx.cr6.lt) goto loc_831694C4;
loc_831694F0:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x831694b0
	if (ctx.cr6.lt) goto loc_831694B0;
loc_83169504:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,26728
	ctx.r28.s64 = ctx.r11.s64 + 26728;
	// ble cr6,0x83169548
	if (!ctx.cr6.gt) goto loc_83169548;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83169520:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,296
	ctx.r5.s64 = 296;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8315b870
	ctx.lr = 0x83169534;
	sub_8315B870(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83169520
	if (ctx.cr6.lt) goto loc_83169520;
loc_83169548:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,297
	ctx.r5.s64 = 297;
	// bl 0x8315b870
	ctx.lr = 0x83169558;
	sub_8315B870(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,298
	ctx.r5.s64 = 298;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x8315b870
	ctx.lr = 0x83169568;
	sub_8315B870(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x831664f8
	ctx.lr = 0x83169570;
	sub_831664F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83169578"))) PPC_WEAK_FUNC(sub_83169578);
PPC_FUNC_IMPL(__imp__sub_83169578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83169580;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r29,28(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x8316959C;
	sub_83166510(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r29,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r29,27
	ctx.r9.u64 = ctx.r29.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r30.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831695E0"))) PPC_WEAK_FUNC(sub_831695E0);
PPC_FUNC_IMPL(__imp__sub_831695E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83169688
	if (!ctx.cr6.lt) goto loc_83169688;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8316960c
	if (ctx.cr6.lt) goto loc_8316960C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83169634
	goto loc_83169634;
loc_8316960C:
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r4,27
	ctx.r7.u64 = ctx.r4.u32 & 0x1F;
	// li r6,1
	ctx.r6.s64 = 1;
	// slw r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// and r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 & ctx.r11.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
loc_83169634:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83169688
	if (ctx.cr6.eq) goto loc_83169688;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83169660
	if (!ctx.cr6.eq) goto loc_83169660;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r10,r4,172
	ctx.r10.s64 = ctx.r4.s64 * 172;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_83169660:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// srw r8,r4,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// and r6,r10,r4
	ctx.r6.u64 = ctx.r10.u64 & ctx.r4.u64;
	// mulli r10,r6,172
	ctx.r10.s64 = ctx.r6.s64 * 172;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_83169688:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169690"))) PPC_WEAK_FUNC(sub_83169690);
PPC_FUNC_IMPL(__imp__sub_83169690) {
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
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// bl 0x831664e8
	ctx.lr = 0x831696CC;
	sub_831664E8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,272
	ctx.r5.s64 = 272;
	// addi r4,r11,26728
	ctx.r4.s64 = ctx.r11.s64 + 26728;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8315b860
	ctx.lr = 0x831696E4;
	sub_8315B860(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// ble cr6,0x8316972c
	if (!ctx.cr6.gt) goto loc_8316972C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8316972c
	if (ctx.cr6.eq) goto loc_8316972C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8316970C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8316970c
	if (!ctx.cr6.eq) goto loc_8316970C;
loc_8316972C:
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

__attribute__((alias("__imp__sub_83169748"))) PPC_WEAK_FUNC(sub_83169748);
PPC_FUNC_IMPL(__imp__sub_83169748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83169750;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x831697c4
	if (!ctx.cr6.gt) goto loc_831697C4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
loc_83169770:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r31,r28,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// beq cr6,0x831697b0
	if (ctx.cr6.eq) goto loc_831697B0;
loc_83169784:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8316979C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,440
	ctx.r31.s64 = ctx.r31.s64 + 440;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83169784
	if (ctx.cr6.lt) goto loc_83169784;
loc_831697B0:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83169770
	if (ctx.cr6.lt) goto loc_83169770;
loc_831697C4:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,26728
	ctx.r28.s64 = ctx.r11.s64 + 26728;
	// ble cr6,0x83169808
	if (!ctx.cr6.gt) goto loc_83169808;
	// li r29,0
	ctx.r29.s64 = 0;
loc_831697E0:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,296
	ctx.r5.s64 = 296;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8315b870
	ctx.lr = 0x831697F4;
	sub_8315B870(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x831697e0
	if (ctx.cr6.lt) goto loc_831697E0;
loc_83169808:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,297
	ctx.r5.s64 = 297;
	// bl 0x8315b870
	ctx.lr = 0x83169818;
	sub_8315B870(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,298
	ctx.r5.s64 = 298;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x8315b870
	ctx.lr = 0x83169828;
	sub_8315B870(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x831664f8
	ctx.lr = 0x83169830;
	sub_831664F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83169838"))) PPC_WEAK_FUNC(sub_83169838);
PPC_FUNC_IMPL(__imp__sub_83169838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83169840;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r29,28(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x8316985C;
	sub_83166510(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r29,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r29,27
	ctx.r9.u64 = ctx.r29.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r30.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831698A0"))) PPC_WEAK_FUNC(sub_831698A0);
PPC_FUNC_IMPL(__imp__sub_831698A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83169948
	if (!ctx.cr6.lt) goto loc_83169948;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x831698cc
	if (ctx.cr6.lt) goto loc_831698CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831698f4
	goto loc_831698F4;
loc_831698CC:
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r4,27
	ctx.r7.u64 = ctx.r4.u32 & 0x1F;
	// li r6,1
	ctx.r6.s64 = 1;
	// slw r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// and r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 & ctx.r11.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
loc_831698F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83169948
	if (ctx.cr6.eq) goto loc_83169948;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83169920
	if (!ctx.cr6.eq) goto loc_83169920;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r10,r4,440
	ctx.r10.s64 = ctx.r4.s64 * 440;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_83169920:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// srw r8,r4,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// and r6,r10,r4
	ctx.r6.u64 = ctx.r10.u64 & ctx.r4.u64;
	// mulli r10,r6,440
	ctx.r10.s64 = ctx.r6.s64 * 440;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_83169948:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169950"))) PPC_WEAK_FUNC(sub_83169950);
PPC_FUNC_IMPL(__imp__sub_83169950) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169960"))) PPC_WEAK_FUNC(sub_83169960);
PPC_FUNC_IMPL(__imp__sub_83169960) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x833b8b04
	ctx.lr = 0x8316997C;
	__imp__InterlockedFlushSList(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831699ac
	if (ctx.cr6.eq) goto loc_831699AC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r11,26624
	ctx.r30.s64 = ctx.r11.s64 + 26624;
loc_83169990:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,133
	ctx.r5.s64 = 133;
	// bl 0x8315b870
	ctx.lr = 0x831699A4;
	sub_8315B870(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83169990
	if (!ctx.cr6.eq) goto loc_83169990;
loc_831699AC:
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

__attribute__((alias("__imp__sub_831699C4"))) PPC_WEAK_FUNC(sub_831699C4);
PPC_FUNC_IMPL(__imp__sub_831699C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831699C8"))) PPC_WEAK_FUNC(sub_831699C8);
PPC_FUNC_IMPL(__imp__sub_831699C8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x83169a10
	if (ctx.cr6.eq) goto loc_83169A10;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r5,51
	ctx.r5.s64 = 51;
	// addi r4,r10,25672
	ctx.r4.s64 = ctx.r10.s64 + 25672;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8315b860
	ctx.lr = 0x83169A0C;
	sub_8315B860(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83169A10:
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

__attribute__((alias("__imp__sub_83169A28"))) PPC_WEAK_FUNC(sub_83169A28);
PPC_FUNC_IMPL(__imp__sub_83169A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,75
	ctx.r5.s64 = 75;
	// addi r4,r11,25672
	ctx.r4.s64 = ctx.r11.s64 + 25672;
	// b 0x8315b870
	sub_8315B870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83169A3C"))) PPC_WEAK_FUNC(sub_83169A3C);
PPC_FUNC_IMPL(__imp__sub_83169A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83169A40"))) PPC_WEAK_FUNC(sub_83169A40);
PPC_FUNC_IMPL(__imp__sub_83169A40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169A48"))) PPC_WEAK_FUNC(sub_83169A48);
PPC_FUNC_IMPL(__imp__sub_83169A48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169A50"))) PPC_WEAK_FUNC(sub_83169A50);
PPC_FUNC_IMPL(__imp__sub_83169A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83169A58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83169a7c
	if (!ctx.cr6.eq) goto loc_83169A7C;
loc_83169A70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83169A7C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,339
	ctx.r5.s64 = 339;
	// addi r30,r11,26728
	ctx.r30.s64 = ctx.r11.s64 + 26728;
	// mulli r3,r10,204
	ctx.r3.s64 = ctx.r10.s64 * 204;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8315b860
	ctx.lr = 0x83169A98;
	sub_8315B860(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83169a70
	if (ctx.cr6.eq) goto loc_83169A70;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// beq cr6,0x83169ad8
	if (ctx.cr6.eq) goto loc_83169AD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,345
	ctx.r5.s64 = 345;
	// bl 0x8315b870
	ctx.lr = 0x83169AD8;
	sub_8315B870(ctx, base);
loc_83169AD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,346
	ctx.r5.s64 = 346;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8315b860
	ctx.lr = 0x83169AF4;
	sub_8315B860(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83166510
	ctx.lr = 0x83169B14;
	sub_83166510(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r6,r30,27
	ctx.r6.u64 = ctx.r30.u32 & 0x1F;
	// li r5,1
	ctx.r5.s64 = 1;
	// slw r4,r5,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r30,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r30.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x83169ba0
	if (ctx.cr0.lt) goto loc_83169BA0;
	// mulli r11,r30,204
	ctx.r11.s64 = ctx.r30.s64 * 204;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_83169B48:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83169b74
	if (ctx.cr6.eq) goto loc_83169B74;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8317f600
	ctx.lr = 0x83169B70;
	sub_8317F600(ctx, base);
	// b 0x83169b78
	goto loc_83169B78;
loc_83169B74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83169B78:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,-204
	ctx.r29.s64 = ctx.r29.s64 + -204;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// bge 0x83169b48
	if (!ctx.cr0.lt) goto loc_83169B48;
loc_83169BA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83169BAC"))) PPC_WEAK_FUNC(sub_83169BAC);
PPC_FUNC_IMPL(__imp__sub_83169BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83169BB0"))) PPC_WEAK_FUNC(sub_83169BB0);
PPC_FUNC_IMPL(__imp__sub_83169BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83169BB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83169bdc
	if (!ctx.cr6.eq) goto loc_83169BDC;
loc_83169BD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83169BDC:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,339
	ctx.r5.s64 = 339;
	// addi r30,r11,26728
	ctx.r30.s64 = ctx.r11.s64 + 26728;
	// mulli r3,r10,136
	ctx.r3.s64 = ctx.r10.s64 * 136;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8315b860
	ctx.lr = 0x83169BF8;
	sub_8315B860(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83169bd0
	if (ctx.cr6.eq) goto loc_83169BD0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// beq cr6,0x83169c38
	if (ctx.cr6.eq) goto loc_83169C38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,345
	ctx.r5.s64 = 345;
	// bl 0x8315b870
	ctx.lr = 0x83169C38;
	sub_8315B870(ctx, base);
loc_83169C38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,346
	ctx.r5.s64 = 346;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8315b860
	ctx.lr = 0x83169C54;
	sub_8315B860(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83166510
	ctx.lr = 0x83169C74;
	sub_83166510(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r6,r30,27
	ctx.r6.u64 = ctx.r30.u32 & 0x1F;
	// li r5,1
	ctx.r5.s64 = 1;
	// slw r4,r5,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r30,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r30.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x83169d00
	if (ctx.cr0.lt) goto loc_83169D00;
	// mulli r11,r30,136
	ctx.r11.s64 = ctx.r30.s64 * 136;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_83169CA8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83169cd4
	if (ctx.cr6.eq) goto loc_83169CD4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x831813f0
	ctx.lr = 0x83169CD0;
	sub_831813F0(ctx, base);
	// b 0x83169cd8
	goto loc_83169CD8;
loc_83169CD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83169CD8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,-136
	ctx.r29.s64 = ctx.r29.s64 + -136;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// bge 0x83169ca8
	if (!ctx.cr0.lt) goto loc_83169CA8;
loc_83169D00:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83169D0C"))) PPC_WEAK_FUNC(sub_83169D0C);
PPC_FUNC_IMPL(__imp__sub_83169D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83169D10"))) PPC_WEAK_FUNC(sub_83169D10);
PPC_FUNC_IMPL(__imp__sub_83169D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83169D18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83169d3c
	if (!ctx.cr6.eq) goto loc_83169D3C;
loc_83169D30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83169D3C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,339
	ctx.r5.s64 = 339;
	// addi r30,r11,26728
	ctx.r30.s64 = ctx.r11.s64 + 26728;
	// mulli r3,r10,172
	ctx.r3.s64 = ctx.r10.s64 * 172;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8315b860
	ctx.lr = 0x83169D58;
	sub_8315B860(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83169d30
	if (ctx.cr6.eq) goto loc_83169D30;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// beq cr6,0x83169d98
	if (ctx.cr6.eq) goto loc_83169D98;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,345
	ctx.r5.s64 = 345;
	// bl 0x8315b870
	ctx.lr = 0x83169D98;
	sub_8315B870(ctx, base);
loc_83169D98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,346
	ctx.r5.s64 = 346;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8315b860
	ctx.lr = 0x83169DB4;
	sub_8315B860(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83166510
	ctx.lr = 0x83169DD4;
	sub_83166510(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r6,r30,27
	ctx.r6.u64 = ctx.r30.u32 & 0x1F;
	// li r5,1
	ctx.r5.s64 = 1;
	// slw r4,r5,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r30,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r30.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x83169e60
	if (ctx.cr0.lt) goto loc_83169E60;
	// mulli r11,r30,172
	ctx.r11.s64 = ctx.r30.s64 * 172;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_83169E08:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83169e34
	if (ctx.cr6.eq) goto loc_83169E34;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x83182290
	ctx.lr = 0x83169E30;
	sub_83182290(ctx, base);
	// b 0x83169e38
	goto loc_83169E38;
loc_83169E34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83169E38:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,-172
	ctx.r29.s64 = ctx.r29.s64 + -172;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// bge 0x83169e08
	if (!ctx.cr0.lt) goto loc_83169E08;
loc_83169E60:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83169E6C"))) PPC_WEAK_FUNC(sub_83169E6C);
PPC_FUNC_IMPL(__imp__sub_83169E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83169E70"))) PPC_WEAK_FUNC(sub_83169E70);
PPC_FUNC_IMPL(__imp__sub_83169E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83169E78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83169e9c
	if (!ctx.cr6.eq) goto loc_83169E9C;
loc_83169E90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83169E9C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,339
	ctx.r5.s64 = 339;
	// addi r30,r11,26728
	ctx.r30.s64 = ctx.r11.s64 + 26728;
	// mulli r3,r10,440
	ctx.r3.s64 = ctx.r10.s64 * 440;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8315b860
	ctx.lr = 0x83169EB8;
	sub_8315B860(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83169e90
	if (ctx.cr6.eq) goto loc_83169E90;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// beq cr6,0x83169ef8
	if (ctx.cr6.eq) goto loc_83169EF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,345
	ctx.r5.s64 = 345;
	// bl 0x8315b870
	ctx.lr = 0x83169EF8;
	sub_8315B870(ctx, base);
loc_83169EF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,346
	ctx.r5.s64 = 346;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8315b860
	ctx.lr = 0x83169F14;
	sub_8315B860(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83166510
	ctx.lr = 0x83169F34;
	sub_83166510(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r6,r30,27
	ctx.r6.u64 = ctx.r30.u32 & 0x1F;
	// li r5,1
	ctx.r5.s64 = 1;
	// slw r4,r5,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r30,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r30.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x83169fc0
	if (ctx.cr0.lt) goto loc_83169FC0;
	// mulli r11,r30,440
	ctx.r11.s64 = ctx.r30.s64 * 440;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_83169F68:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83169f94
	if (ctx.cr6.eq) goto loc_83169F94;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x83183238
	ctx.lr = 0x83169F90;
	sub_83183238(ctx, base);
	// b 0x83169f98
	goto loc_83169F98;
loc_83169F94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83169F98:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,-440
	ctx.r29.s64 = ctx.r29.s64 + -440;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// bge 0x83169f68
	if (!ctx.cr0.lt) goto loc_83169F68;
loc_83169FC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83169FCC"))) PPC_WEAK_FUNC(sub_83169FCC);
PPC_FUNC_IMPL(__imp__sub_83169FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83169FD0"))) PPC_WEAK_FUNC(sub_83169FD0);
PPC_FUNC_IMPL(__imp__sub_83169FD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169FE0"))) PPC_WEAK_FUNC(sub_83169FE0);
PPC_FUNC_IMPL(__imp__sub_83169FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83169FE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8316a044
	if (!ctx.cr6.lt) goto loc_8316A044;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,457
	ctx.r5.s64 = 457;
	// addi r29,r11,25672
	ctx.r29.s64 = ctx.r11.s64 + 25672;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8315b860
	ctx.lr = 0x8316A018;
	sub_8315B860(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82bea998
	ctx.lr = 0x8316A02C;
	sub_82BEA998(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,460
	ctx.r5.s64 = 460;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8315b870
	ctx.lr = 0x8316A03C;
	sub_8315B870(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8316A044:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316A04C"))) PPC_WEAK_FUNC(sub_8316A04C);
PPC_FUNC_IMPL(__imp__sub_8316A04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A050"))) PPC_WEAK_FUNC(sub_8316A050);
PPC_FUNC_IMPL(__imp__sub_8316A050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8316A058;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,205
	ctx.r5.s64 = 205;
	// addi r4,r11,26624
	ctx.r4.s64 = ctx.r11.s64 + 26624;
	// li r3,516
	ctx.r3.s64 = 516;
	// bl 0x8315b860
	ctx.lr = 0x8316A074;
	sub_8315B860(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,31
	ctx.r30.s64 = 31;
	// addi r31,r28,32
	ctx.r31.s64 = ctx.r28.s64 + 32;
loc_8316A080:
	// addic. r11,r31,-12
	ctx.xer.ca = ctx.r31.u32 > 11;
	ctx.r11.s64 = ctx.r31.s64 + -12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne 0x8316a090
	if (!ctx.cr0.eq) goto loc_8316A090;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8316A090:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8335a130
	ctx.lr = 0x8316A098;
	sub_8335A130(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x8316a080
	if (!ctx.cr0.eq) goto loc_8316A080;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x8335a130
	ctx.lr = 0x8316A0B0;
	sub_8335A130(ctx, base);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316A0BC"))) PPC_WEAK_FUNC(sub_8316A0BC);
PPC_FUNC_IMPL(__imp__sub_8316A0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A0C0"))) PPC_WEAK_FUNC(sub_8316A0C0);
PPC_FUNC_IMPL(__imp__sub_8316A0C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A0DC"))) PPC_WEAK_FUNC(sub_8316A0DC);
PPC_FUNC_IMPL(__imp__sub_8316A0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A0E0"))) PPC_WEAK_FUNC(sub_8316A0E0);
PPC_FUNC_IMPL(__imp__sub_8316A0E0) {
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
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f1,f9
	ctx.f1.f64 = double(float(sqrt(ctx.f9.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A100"))) PPC_WEAK_FUNC(sub_8316A100);
PPC_FUNC_IMPL(__imp__sub_8316A100) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,216(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r4,212
	ctx.r11.s64 = ctx.r4.s64 + 212;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// ble cr6,0x8316a128
	if (!ctx.cr6.gt) goto loc_8316A128;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8316A128:
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A130"))) PPC_WEAK_FUNC(sub_8316A130);
PPC_FUNC_IMPL(__imp__sub_8316A130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r8,196(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// srw r7,r4,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r10.u8 & 0x3F));
	// and r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 & ctx.r4.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A164"))) PPC_WEAK_FUNC(sub_8316A164);
PPC_FUNC_IMPL(__imp__sub_8316A164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A168"))) PPC_WEAK_FUNC(sub_8316A168);
PPC_FUNC_IMPL(__imp__sub_8316A168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8316A170;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8316a1a0
	if (!ctx.cr6.eq) goto loc_8316A1A0;
	// bl 0x83169a50
	ctx.lr = 0x8316A188;
	sub_83169A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8316a1a0
	if (!ctx.cr6.eq) goto loc_8316A1A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8316A1A0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x8316A1C8;
	sub_83166510(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r29,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r29,27
	ctx.r8.u64 = ctx.r29.u32 & 0x1F;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// slw r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316A1F4"))) PPC_WEAK_FUNC(sub_8316A1F4);
PPC_FUNC_IMPL(__imp__sub_8316A1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A1F8"))) PPC_WEAK_FUNC(sub_8316A1F8);
PPC_FUNC_IMPL(__imp__sub_8316A1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8316A200;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8316a230
	if (!ctx.cr6.eq) goto loc_8316A230;
	// bl 0x83169bb0
	ctx.lr = 0x8316A218;
	sub_83169BB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8316a230
	if (!ctx.cr6.eq) goto loc_8316A230;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8316A230:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r29,28(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x8316A258;
	sub_83166510(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r29,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r29,27
	ctx.r8.u64 = ctx.r29.u32 & 0x1F;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// slw r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316A284"))) PPC_WEAK_FUNC(sub_8316A284);
PPC_FUNC_IMPL(__imp__sub_8316A284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A288"))) PPC_WEAK_FUNC(sub_8316A288);
PPC_FUNC_IMPL(__imp__sub_8316A288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8316A290;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8316a2c0
	if (!ctx.cr6.eq) goto loc_8316A2C0;
	// bl 0x83169d10
	ctx.lr = 0x8316A2A8;
	sub_83169D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8316a2c0
	if (!ctx.cr6.eq) goto loc_8316A2C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8316A2C0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r29,28(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x8316A2E8;
	sub_83166510(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r29,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r29,27
	ctx.r8.u64 = ctx.r29.u32 & 0x1F;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// slw r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316A314"))) PPC_WEAK_FUNC(sub_8316A314);
PPC_FUNC_IMPL(__imp__sub_8316A314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A318"))) PPC_WEAK_FUNC(sub_8316A318);
PPC_FUNC_IMPL(__imp__sub_8316A318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8316A320;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8316a350
	if (!ctx.cr6.eq) goto loc_8316A350;
	// bl 0x83169e70
	ctx.lr = 0x8316A338;
	sub_83169E70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8316a350
	if (!ctx.cr6.eq) goto loc_8316A350;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8316A350:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r29,28(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83166510
	ctx.lr = 0x8316A378;
	sub_83166510(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r29,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r29,27
	ctx.r8.u64 = ctx.r29.u32 & 0x1F;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// slw r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316A3A4"))) PPC_WEAK_FUNC(sub_8316A3A4);
PPC_FUNC_IMPL(__imp__sub_8316A3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A3A8"))) PPC_WEAK_FUNC(sub_8316A3A8);
PPC_FUNC_IMPL(__imp__sub_8316A3A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A3B8"))) PPC_WEAK_FUNC(sub_8316A3B8);
PPC_FUNC_IMPL(__imp__sub_8316A3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8316A3C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r9,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r9.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x8316a41c
	if (ctx.cr0.lt) goto loc_8316A41C;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8316A3E8:
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8316a40c
	if (!ctx.cr6.gt) goto loc_8316A40C;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// b 0x8316a414
	goto loc_8316A414;
loc_8316A40C:
	// beq cr6,0x8316a490
	if (ctx.cr6.eq) goto loc_8316A490;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_8316A414:
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8316a3e8
	if (!ctx.cr6.lt) goto loc_8316A3E8;
loc_8316A41C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x8316a438
	if (ctx.cr6.gt) goto loc_8316A438;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x83169fe0
	ctx.lr = 0x8316A438;
	sub_83169FE0(ctx, base);
loc_8316A438:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8316a45c
	if (ctx.cr0.eq) goto loc_8316A45C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// bl 0x82cb1fe0
	ctx.lr = 0x8316A45C;
	sub_82CB1FE0(ctx, base);
loc_8316A45C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// beq cr6,0x8316a484
	if (ctx.cr6.eq) goto loc_8316A484;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
loc_8316A484:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_8316A490:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8316a49c
	if (ctx.cr6.eq) goto loc_8316A49C;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8316A49C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316A4A8"))) PPC_WEAK_FUNC(sub_8316A4A8);
PPC_FUNC_IMPL(__imp__sub_8316A4A8) {
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
	// bl 0x833b8b14
	ctx.lr = 0x8316A4C0;
	__imp__InterlockedPopEntrySList(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8316a4e4
	if (!ctx.cr6.eq) goto loc_8316A4E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8316a050
	ctx.lr = 0x8316A4D0;
	sub_8316A050(ctx, base);
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
loc_8316A4E4:
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
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

__attribute__((alias("__imp__sub_8316A4FC"))) PPC_WEAK_FUNC(sub_8316A4FC);
PPC_FUNC_IMPL(__imp__sub_8316A4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A500"))) PPC_WEAK_FUNC(sub_8316A500);
PPC_FUNC_IMPL(__imp__sub_8316A500) {
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
	// bl 0x83167838
	ctx.lr = 0x8316A520;
	sub_83167838(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8316a538
	if (ctx.cr6.eq) goto loc_8316A538;
	// bl 0x822990f0
	ctx.lr = 0x8316A534;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8316A538:
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

__attribute__((alias("__imp__sub_8316A550"))) PPC_WEAK_FUNC(sub_8316A550);
PPC_FUNC_IMPL(__imp__sub_8316A550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8316A558;
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
	// bl 0x833b8b14
	ctx.lr = 0x8316A570;
	__imp__InterlockedPopEntrySList(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8316a584
	if (!ctx.cr6.eq) goto loc_8316A584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8316a050
	ctx.lr = 0x8316A580;
	sub_8316A050(ctx, base);
	// b 0x8316a588
	goto loc_8316A588;
loc_8316A584:
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
loc_8316A588:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8316a5a8
	if (ctx.cr6.eq) goto loc_8316A5A8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_8316A5A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316A5B0"))) PPC_WEAK_FUNC(sub_8316A5B0);
PPC_FUNC_IMPL(__imp__sub_8316A5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,29460
	ctx.r10.s64 = ctx.r11.s64 + 29460;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A5C0"))) PPC_WEAK_FUNC(sub_8316A5C0);
PPC_FUNC_IMPL(__imp__sub_8316A5C0) {
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
	// addi r9,r11,29460
	ctx.r9.s64 = ctx.r11.s64 + 29460;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8316a5f4
	if (ctx.cr6.eq) goto loc_8316A5F4;
	// bl 0x822990f0
	ctx.lr = 0x8316A5F0;
	sub_822990F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8316A5F4:
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

__attribute__((alias("__imp__sub_8316A608"))) PPC_WEAK_FUNC(sub_8316A608);
PPC_FUNC_IMPL(__imp__sub_8316A608) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A60C"))) PPC_WEAK_FUNC(sub_8316A60C);
PPC_FUNC_IMPL(__imp__sub_8316A60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A610"))) PPC_WEAK_FUNC(sub_8316A610);
PPC_FUNC_IMPL(__imp__sub_8316A610) {
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
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
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

__attribute__((alias("__imp__sub_8316A644"))) PPC_WEAK_FUNC(sub_8316A644);
PPC_FUNC_IMPL(__imp__sub_8316A644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A648"))) PPC_WEAK_FUNC(sub_8316A648);
PPC_FUNC_IMPL(__imp__sub_8316A648) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A654"))) PPC_WEAK_FUNC(sub_8316A654);
PPC_FUNC_IMPL(__imp__sub_8316A654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A658"))) PPC_WEAK_FUNC(sub_8316A658);
PPC_FUNC_IMPL(__imp__sub_8316A658) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A674"))) PPC_WEAK_FUNC(sub_8316A674);
PPC_FUNC_IMPL(__imp__sub_8316A674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A678"))) PPC_WEAK_FUNC(sub_8316A678);
PPC_FUNC_IMPL(__imp__sub_8316A678) {
	PPC_FUNC_PROLOGUE();
	// lis r12,-10923
	ctx.r12.s64 = -715849728;
	// rlwinm r11,r3,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,21845
	ctx.r12.u64 = ctx.r12.u64 | 21845;
	// lis r10,257
	ctx.r10.s64 = 16842752;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,-3277
	ctx.r12.s64 = -214761472;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// ori r8,r10,257
	ctx.r8.u64 = ctx.r10.u64 | 257;
	// ori r12,r12,13107
	ctx.r12.u64 = ctx.r12.u64 | 13107;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,13107
	ctx.r12.s64 = 858980352;
	// ori r12,r12,13107
	ctx.r12.u64 = ctx.r12.u64 | 13107;
	// and r11,r9,r12
	ctx.r11.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lis r12,3855
	ctx.r12.s64 = 252641280;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r6,r7,r12
	ctx.r6.u64 = ctx.r7.u64 & ctx.r12.u64;
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// rlwinm r3,r5,8,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A6D4"))) PPC_WEAK_FUNC(sub_8316A6D4);
PPC_FUNC_IMPL(__imp__sub_8316A6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A6D8"))) PPC_WEAK_FUNC(sub_8316A6D8);
PPC_FUNC_IMPL(__imp__sub_8316A6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f1,f12,f0,f13
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A6EC"))) PPC_WEAK_FUNC(sub_8316A6EC);
PPC_FUNC_IMPL(__imp__sub_8316A6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A6F0"))) PPC_WEAK_FUNC(sub_8316A6F0);
PPC_FUNC_IMPL(__imp__sub_8316A6F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,31,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x1FFFFFFC;
	// rlwinm r9,r4,2,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1C;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// srw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r3,r7,28
	ctx.r3.u64 = ctx.r7.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A70C"))) PPC_WEAK_FUNC(sub_8316A70C);
PPC_FUNC_IMPL(__imp__sub_8316A70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A710"))) PPC_WEAK_FUNC(sub_8316A710);
PPC_FUNC_IMPL(__imp__sub_8316A710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,31,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x1FFFFFFC;
	// rlwinm r9,r4,2,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1C;
	// li r8,15
	ctx.r8.s64 = 15;
	// slw r7,r5,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r9.u8 & 0x3F));
	// slw r6,r8,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// orc r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 | ~ctx.r6.u64;
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A73C"))) PPC_WEAK_FUNC(sub_8316A73C);
PPC_FUNC_IMPL(__imp__sub_8316A73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A740"))) PPC_WEAK_FUNC(sub_8316A740);
PPC_FUNC_IMPL(__imp__sub_8316A740) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,257
	ctx.r9.s64 = 16842752;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ori r7,r9,257
	ctx.r7.u64 = ctx.r9.u64 | 257;
loc_8316A760:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r12,-10923
	ctx.r12.s64 = -715849728;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r12,r12,21845
	ctx.r12.u64 = ctx.r12.u64 | 21845;
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// and r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 & ctx.r12.u64;
	// lis r12,-3277
	ctx.r12.s64 = -214761472;
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// ori r12,r12,13107
	ctx.r12.u64 = ctx.r12.u64 | 13107;
	// rlwinm r8,r6,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// and r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 & ctx.r12.u64;
	// lis r12,13107
	ctx.r12.s64 = 858980352;
	// ori r12,r12,13107
	ctx.r12.u64 = ctx.r12.u64 | 13107;
	// and r9,r6,r12
	ctx.r9.u64 = ctx.r6.u64 & ctx.r12.u64;
	// lis r12,3855
	ctx.r12.s64 = 252641280;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// rlwinm r8,r9,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// and r4,r5,r12
	ctx.r4.u64 = ctx.r5.u64 & ctx.r12.u64;
	// mullw r9,r4,r7
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// bne 0x8316a760
	if (!ctx.cr0.eq) goto loc_8316A760;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A7C8"))) PPC_WEAK_FUNC(sub_8316A7C8);
PPC_FUNC_IMPL(__imp__sub_8316A7C8) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A7EC"))) PPC_WEAK_FUNC(sub_8316A7EC);
PPC_FUNC_IMPL(__imp__sub_8316A7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A7F0"))) PPC_WEAK_FUNC(sub_8316A7F0);
PPC_FUNC_IMPL(__imp__sub_8316A7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f11,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f7,f9
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// lfs f5,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f2,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f2
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lfs f0,7676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f8,f9,f12,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmadds f6,f5,f7,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmsubs f4,f5,f10,f4
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 - ctx.f4.f64));
	// fmsubs f3,f7,f11,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f3.f64));
	// fmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f13,f8,f2
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmadds f8,f11,f12,f6
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmuls f6,f4,f2
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// fmuls f4,f3,f2
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmuls f3,f7,f1
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f2,f10,f1
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f9,f8
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f12,f5,f8
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f9,f11,f8
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f8,f6,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f7,f4,f0
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fadds f6,f3,f13
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fadds f1,f1,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// fadds f0,f2,f7
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// fadds f13,f6,f5
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f12,f1,f3
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f11,f0,f4
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A8AC"))) PPC_WEAK_FUNC(sub_8316A8AC);
PPC_FUNC_IMPL(__imp__sub_8316A8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A8B0"))) PPC_WEAK_FUNC(sub_8316A8B0);
PPC_FUNC_IMPL(__imp__sub_8316A8B0) {
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
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A8EC"))) PPC_WEAK_FUNC(sub_8316A8EC);
PPC_FUNC_IMPL(__imp__sub_8316A8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A8F0"))) PPC_WEAK_FUNC(sub_8316A8F0);
PPC_FUNC_IMPL(__imp__sub_8316A8F0) {
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

__attribute__((alias("__imp__sub_8316A92C"))) PPC_WEAK_FUNC(sub_8316A92C);
PPC_FUNC_IMPL(__imp__sub_8316A92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A930"))) PPC_WEAK_FUNC(sub_8316A930);
PPC_FUNC_IMPL(__imp__sub_8316A930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6abc
	ctx.lr = 0x8316A940;
	__savefpr_17(ctx, base);
	// lfs f12,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmr f29,f12
	ctx.f29.f64 = ctx.f12.f64;
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f7,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// lfs f2,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f2
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lfs f0,7676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmr f30,f7
	ctx.f30.f64 = ctx.f7.f64;
	// fmr f31,f9
	ctx.f31.f64 = ctx.f9.f64;
	// lfs f27,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// fmr f25,f2
	ctx.f25.f64 = ctx.f2.f64;
	// lfs f26,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f26.f64 = double(temp.f32);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// fmuls f21,f27,f29
	ctx.f21.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// lfs f24,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f24.f64 = double(temp.f32);
	// fmsubs f6,f5,f12,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 - ctx.f6.f64));
	// lfs f22,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f22.f64 = double(temp.f32);
	// fmsubs f8,f7,f11,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f8.f64));
	// lfs f20,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f4,f9,f5,f4
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fmsubs f3,f9,f10,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 - ctx.f3.f64));
	// fmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f23,f28,f30
	ctx.f23.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// fmuls f19,f26,f31
	ctx.f19.f64 = double(float(ctx.f26.f64 * ctx.f31.f64));
	// fmuls f18,f27,f30
	ctx.f18.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// fmuls f17,f28,f25
	ctx.f17.f64 = double(float(ctx.f28.f64 * ctx.f25.f64));
	// fmsubs f21,f26,f30,f21
	ctx.f21.f64 = double(float(ctx.f26.f64 * ctx.f30.f64 - ctx.f21.f64));
	// fmuls f6,f6,f2
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fmuls f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmadds f4,f11,f12,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmuls f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmuls f2,f5,f1
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmuls f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f5,f11,f1
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f1,f27,f25
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f25.f64));
	// fmuls f11,f26,f25
	ctx.f11.f64 = double(float(ctx.f26.f64 * ctx.f25.f64));
	// fmadds f26,f26,f29,f18
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f29.f64 + ctx.f18.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f4,f12,f4
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmsubs f12,f27,f31,f23
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 - ctx.f23.f64));
	// fmsubs f27,f28,f29,f19
	ctx.f27.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 - ctx.f19.f64));
	// fmuls f23,f31,f24
	ctx.f23.f64 = double(float(ctx.f31.f64 * ctx.f24.f64));
	// fadds f6,f10,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f8,f2,f8
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// fmuls f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fadds f7,f5,f3
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f12,f27,f1
	ctx.f12.f64 = double(float(ctx.f27.f64 + ctx.f1.f64));
	// fmuls f5,f30,f24
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f24.f64));
	// fmuls f4,f29,f24
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f24.f64));
	// fadds f3,f21,f17
	ctx.f3.f64 = double(float(ctx.f21.f64 + ctx.f17.f64));
	// fmadds f11,f28,f31,f26
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f26.f64));
	// fadds f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fadds f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// fadds f2,f7,f9
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fadds f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// fadds f1,f3,f23
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f23.f64));
	// fmsubs f11,f25,f24,f11
	ctx.f11.f64 = double(float(ctx.f25.f64 * ctx.f24.f64 - ctx.f11.f64));
	// fadds f10,f8,f13
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f9,f22,f6
	ctx.f9.f64 = double(float(ctx.f22.f64 + ctx.f6.f64));
	// fadds f8,f20,f2
	ctx.f8.f64 = double(float(ctx.f20.f64 + ctx.f2.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b08
	ctx.lr = 0x8316AAA4;
	__restfpr_17(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AAB0"))) PPC_WEAK_FUNC(sub_8316AAB0);
PPC_FUNC_IMPL(__imp__sub_8316AAB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AAB8"))) PPC_WEAK_FUNC(sub_8316AAB8);
PPC_FUNC_IMPL(__imp__sub_8316AAB8) {
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
	ctx.lr = 0x8316AAC8;
	__savefpr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8316ac3c
	if (ctx.cr6.eq) goto loc_8316AC3C;
	// lfs f12,120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f10,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f6,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f7,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fmr f30,f10
	ctx.f30.f64 = ctx.f10.f64;
	// fmuls f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lfs f5,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// lfs f0,7676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7676);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f13.f64 = double(temp.f32);
	// fmr f29,f12
	ctx.f29.f64 = ctx.f12.f64;
	// fmr f31,f6
	ctx.f31.f64 = ctx.f6.f64;
	// lfs f28,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// fmr f24,f3
	ctx.f24.f64 = ctx.f3.f64;
	// lfs f27,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f26.f64 = double(temp.f32);
	// addi r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 + 100;
	// fmsubs f9,f10,f7,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 - ctx.f9.f64));
	// lfs f23,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f23.f64 = double(temp.f32);
	// fmadds f8,f5,f6,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f8.f64));
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// fmuls f25,f28,f30
	ctx.f25.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// fmsubs f4,f5,f12,f4
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 - ctx.f4.f64));
	// fmsubs f2,f6,f11,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 - ctx.f2.f64));
	// fmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f22,f27,f29
	ctx.f22.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// fmuls f20,f27,f30
	ctx.f20.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// fmuls f21,f26,f31
	ctx.f21.f64 = double(float(ctx.f26.f64 * ctx.f31.f64));
	// fmuls f18,f27,f24
	ctx.f18.f64 = double(float(ctx.f27.f64 * ctx.f24.f64));
	// fmuls f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmadds f8,f7,f12,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmsubs f27,f27,f31,f25
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 - ctx.f25.f64));
	// fmuls f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmuls f2,f5,f1
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f7,f7,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmsubs f25,f26,f30,f22
	ctx.f25.f64 = double(float(ctx.f26.f64 * ctx.f30.f64 - ctx.f22.f64));
	// fmuls f19,f28,f24
	ctx.f19.f64 = double(float(ctx.f28.f64 * ctx.f24.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f1,f10,f8
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f4,f3,f0
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f5,f26,f24
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f24.f64));
	// fmsubs f22,f28,f29,f21
	ctx.f22.f64 = double(float(ctx.f28.f64 * ctx.f29.f64 - ctx.f21.f64));
	// fmadds f10,f26,f29,f20
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f29.f64 + ctx.f20.f64));
	// fmuls f3,f31,f23
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f23.f64));
	// fadds f2,f2,f9
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fmuls f6,f30,f23
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f23.f64));
	// fmuls f30,f29,f23
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f23.f64));
	// fadds f29,f25,f19
	ctx.f29.f64 = double(float(ctx.f25.f64 + ctx.f19.f64));
	// fadds f5,f27,f5
	ctx.f5.f64 = double(float(ctx.f27.f64 + ctx.f5.f64));
	// fadds f11,f7,f4
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// fadds f27,f22,f18
	ctx.f27.f64 = double(float(ctx.f22.f64 + ctx.f18.f64));
	// fadds f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fmadds f10,f28,f31,f10
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f10.f64));
	// fadds f4,f12,f1
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// lfs f1,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// fadds f7,f29,f3
	ctx.f7.f64 = double(float(ctx.f29.f64 + ctx.f3.f64));
	// fadds f8,f5,f30
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f30.f64));
	// fadds f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f0,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fadds f6,f27,f6
	ctx.f6.f64 = double(float(ctx.f27.f64 + ctx.f6.f64));
	// fadds f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fmsubs f5,f24,f23,f10
	ctx.f5.f64 = double(float(ctx.f24.f64 * ctx.f23.f64 - ctx.f10.f64));
	// fadds f13,f1,f4
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f12,f0,f3
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x8316ac70
	goto loc_8316AC70;
loc_8316AC3C:
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// lfs f11,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_8316AC70:
	// stfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x83179c58
	ctx.lr = 0x8316AC88;
	sub_83179C58(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82cb6b0c
	ctx.lr = 0x8316AC94;
	__restfpr_18(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316ACA0"))) PPC_WEAK_FUNC(sub_8316ACA0);
PPC_FUNC_IMPL(__imp__sub_8316ACA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,284
	ctx.r3.s64 = ctx.r3.s64 + 284;
	// b 0x831665a8
	sub_831665A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316ACA8"))) PPC_WEAK_FUNC(sub_8316ACA8);
PPC_FUNC_IMPL(__imp__sub_8316ACA8) {
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
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// bl 0x83166510
	ctx.lr = 0x8316ACCC;
	sub_83166510(ctx, base);
	// lwz r10,284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stwx r5,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_8316AD04"))) PPC_WEAK_FUNC(sub_8316AD04);
PPC_FUNC_IMPL(__imp__sub_8316AD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AD08"))) PPC_WEAK_FUNC(sub_8316AD08);
PPC_FUNC_IMPL(__imp__sub_8316AD08) {
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
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// bl 0x83166510
	ctx.lr = 0x8316AD2C;
	sub_83166510(ctx, base);
	// lwz r10,284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stwx r5,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_8316AD64"))) PPC_WEAK_FUNC(sub_8316AD64);
PPC_FUNC_IMPL(__imp__sub_8316AD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AD68"))) PPC_WEAK_FUNC(sub_8316AD68);
PPC_FUNC_IMPL(__imp__sub_8316AD68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// not r3,r11
	ctx.r3.u64 = ~ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// oris r3,r11,32768
	ctx.r3.u64 = ctx.r11.u64 | 2147483648;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AD84"))) PPC_WEAK_FUNC(sub_8316AD84);
PPC_FUNC_IMPL(__imp__sub_8316AD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AD88"))) PPC_WEAK_FUNC(sub_8316AD88);
PPC_FUNC_IMPL(__imp__sub_8316AD88) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r10,r4,30
	ctx.r10.u64 = ctx.r4.u32 & 0x3;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AD9C"))) PPC_WEAK_FUNC(sub_8316AD9C);
PPC_FUNC_IMPL(__imp__sub_8316AD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316ADA0"))) PPC_WEAK_FUNC(sub_8316ADA0);
PPC_FUNC_IMPL(__imp__sub_8316ADA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// b 0x8316a740
	sub_8316A740(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316ADA8"))) PPC_WEAK_FUNC(sub_8316ADA8);
PPC_FUNC_IMPL(__imp__sub_8316ADA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x8316a740
	sub_8316A740(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316ADB0"))) PPC_WEAK_FUNC(sub_8316ADB0);
PPC_FUNC_IMPL(__imp__sub_8316ADB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,1
	ctx.r3.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316ADBC"))) PPC_WEAK_FUNC(sub_8316ADBC);
PPC_FUNC_IMPL(__imp__sub_8316ADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316ADC0"))) PPC_WEAK_FUNC(sub_8316ADC0);
PPC_FUNC_IMPL(__imp__sub_8316ADC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316ADD4"))) PPC_WEAK_FUNC(sub_8316ADD4);
PPC_FUNC_IMPL(__imp__sub_8316ADD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316ADD8"))) PPC_WEAK_FUNC(sub_8316ADD8);
PPC_FUNC_IMPL(__imp__sub_8316ADD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316ADE8"))) PPC_WEAK_FUNC(sub_8316ADE8);
PPC_FUNC_IMPL(__imp__sub_8316ADE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316ADF8"))) PPC_WEAK_FUNC(sub_8316ADF8);
PPC_FUNC_IMPL(__imp__sub_8316ADF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,0,0,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AE04"))) PPC_WEAK_FUNC(sub_8316AE04);
PPC_FUNC_IMPL(__imp__sub_8316AE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AE08"))) PPC_WEAK_FUNC(sub_8316AE08);
PPC_FUNC_IMPL(__imp__sub_8316AE08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AE1C"))) PPC_WEAK_FUNC(sub_8316AE1C);
PPC_FUNC_IMPL(__imp__sub_8316AE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AE20"))) PPC_WEAK_FUNC(sub_8316AE20);
PPC_FUNC_IMPL(__imp__sub_8316AE20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AE28"))) PPC_WEAK_FUNC(sub_8316AE28);
PPC_FUNC_IMPL(__imp__sub_8316AE28) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x8317b6a8
	sub_8317B6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316AE44"))) PPC_WEAK_FUNC(sub_8316AE44);
PPC_FUNC_IMPL(__imp__sub_8316AE44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AE48"))) PPC_WEAK_FUNC(sub_8316AE48);
PPC_FUNC_IMPL(__imp__sub_8316AE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f8,4(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f6,8(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f3,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fadds f11,f5,f4
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fadds f12,f3,f2
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stfs f12,4(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AEB4"))) PPC_WEAK_FUNC(sub_8316AEB4);
PPC_FUNC_IMPL(__imp__sub_8316AEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AEB8"))) PPC_WEAK_FUNC(sub_8316AEB8);
PPC_FUNC_IMPL(__imp__sub_8316AEB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AEC0"))) PPC_WEAK_FUNC(sub_8316AEC0);
PPC_FUNC_IMPL(__imp__sub_8316AEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,29512
	ctx.r10.s64 = ctx.r11.s64 + 29512;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AED0"))) PPC_WEAK_FUNC(sub_8316AED0);
PPC_FUNC_IMPL(__imp__sub_8316AED0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8316aee4
	if (ctx.cr6.eq) goto loc_8316AEE4;
	// addi r3,r3,92
	ctx.r3.s64 = ctx.r3.s64 + 92;
	// b 0x8316a740
	sub_8316A740(ctx, base);
	return;
loc_8316AEE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AEEC"))) PPC_WEAK_FUNC(sub_8316AEEC);
PPC_FUNC_IMPL(__imp__sub_8316AEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AEF0"))) PPC_WEAK_FUNC(sub_8316AEF0);
PPC_FUNC_IMPL(__imp__sub_8316AEF0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8316af04
	if (ctx.cr6.eq) goto loc_8316AF04;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// b 0x8316a740
	sub_8316A740(ctx, base);
	return;
loc_8316AF04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AF0C"))) PPC_WEAK_FUNC(sub_8316AF0C);
PPC_FUNC_IMPL(__imp__sub_8316AF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AF10"))) PPC_WEAK_FUNC(sub_8316AF10);
PPC_FUNC_IMPL(__imp__sub_8316AF10) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AF18"))) PPC_WEAK_FUNC(sub_8316AF18);
PPC_FUNC_IMPL(__imp__sub_8316AF18) {
	PPC_FUNC_PROLOGUE();
	// stb r4,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AF20"))) PPC_WEAK_FUNC(sub_8316AF20);
PPC_FUNC_IMPL(__imp__sub_8316AF20) {
	PPC_FUNC_PROLOGUE();
	// stb r4,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AF28"))) PPC_WEAK_FUNC(sub_8316AF28);
PPC_FUNC_IMPL(__imp__sub_8316AF28) {
	PPC_FUNC_PROLOGUE();
	// stb r4,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AF30"))) PPC_WEAK_FUNC(sub_8316AF30);
PPC_FUNC_IMPL(__imp__sub_8316AF30) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AF38"))) PPC_WEAK_FUNC(sub_8316AF38);
PPC_FUNC_IMPL(__imp__sub_8316AF38) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,5(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AF40"))) PPC_WEAK_FUNC(sub_8316AF40);
PPC_FUNC_IMPL(__imp__sub_8316AF40) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,6(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AF48"))) PPC_WEAK_FUNC(sub_8316AF48);
PPC_FUNC_IMPL(__imp__sub_8316AF48) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,7(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AF50"))) PPC_WEAK_FUNC(sub_8316AF50);
PPC_FUNC_IMPL(__imp__sub_8316AF50) {
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
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8318e7a0
	ctx.lr = 0x8316AF6C;
	sub_8318E7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8316af90
	if (!ctx.cr6.eq) goto loc_8316AF90;
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
loc_8316AF90:
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x8318b4c8
	ctx.lr = 0x8316AF98;
	sub_8318B4C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
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

__attribute__((alias("__imp__sub_8316AFBC"))) PPC_WEAK_FUNC(sub_8316AFBC);
PPC_FUNC_IMPL(__imp__sub_8316AFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AFC0"))) PPC_WEAK_FUNC(sub_8316AFC0);
PPC_FUNC_IMPL(__imp__sub_8316AFC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AFC4"))) PPC_WEAK_FUNC(sub_8316AFC4);
PPC_FUNC_IMPL(__imp__sub_8316AFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AFC8"))) PPC_WEAK_FUNC(sub_8316AFC8);
PPC_FUNC_IMPL(__imp__sub_8316AFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,29460
	ctx.r10.s64 = ctx.r11.s64 + 29460;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AFD8"))) PPC_WEAK_FUNC(sub_8316AFD8);
PPC_FUNC_IMPL(__imp__sub_8316AFD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// rlwinm r11,r8,26,0,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0xFC000000;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r3,r7,128
	ctx.r3.s64 = ctx.r7.s64 + 8388608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AFF8"))) PPC_WEAK_FUNC(sub_8316AFF8);
PPC_FUNC_IMPL(__imp__sub_8316AFF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B000"))) PPC_WEAK_FUNC(sub_8316B000);
PPC_FUNC_IMPL(__imp__sub_8316B000) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r31,r11,284
	ctx.r31.s64 = ctx.r11.s64 + 284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83166510
	ctx.lr = 0x8316B048;
	sub_83166510(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_8316B080"))) PPC_WEAK_FUNC(sub_8316B080);
PPC_FUNC_IMPL(__imp__sub_8316B080) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B088"))) PPC_WEAK_FUNC(sub_8316B088);
PPC_FUNC_IMPL(__imp__sub_8316B088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8316B090;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r30,r11,284
	ctx.r30.s64 = ctx.r11.s64 + 284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83166510
	ctx.lr = 0x8316B0D0;
	sub_83166510(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r29,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r29,27
	ctx.r9.u64 = ctx.r29.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// slw r6,r8,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfs f0,6048(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r31,44
	ctx.r9.s64 = ctx.r31.s64 + 44;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f11,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// stfs f10,40(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f9,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fsel f8,f9,f9,f0
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// stfs f8,44(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f7,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fsel f6,f7,f7,f0
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f7.f64 : ctx.f0.f64;
	// stfs f6,48(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316B12C"))) PPC_WEAK_FUNC(sub_8316B12C);
PPC_FUNC_IMPL(__imp__sub_8316B12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316B130"))) PPC_WEAK_FUNC(sub_8316B130);
PPC_FUNC_IMPL(__imp__sub_8316B130) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B138"))) PPC_WEAK_FUNC(sub_8316B138);
PPC_FUNC_IMPL(__imp__sub_8316B138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r5,r11,29432
	ctx.r5.s64 = ctx.r11.s64 + 29432;
	// addi r4,r10,22516
	ctx.r4.s64 = ctx.r10.s64 + 22516;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x831624f8
	sub_831624F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316B150"))) PPC_WEAK_FUNC(sub_8316B150);
PPC_FUNC_IMPL(__imp__sub_8316B150) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

