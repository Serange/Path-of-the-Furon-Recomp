#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82FBE708"))) PPC_WEAK_FUNC(sub_82FBE708);
PPC_FUNC_IMPL(__imp__sub_82FBE708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FBE710;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FBE724;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbe74c
	if (ctx.cr6.eq) goto loc_82FBE74C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbe760
	if (ctx.cr6.eq) goto loc_82FBE760;
loc_82FBE74C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBE754;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r26,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r26.u8);
loc_82FBE760:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// lbz r8,61(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 61);
	// andc r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stb r6,61(r30)
	PPC_STORE_U8(ctx.r30.u32 + 61, ctx.r6.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbe7cc
	if (ctx.cr6.eq) goto loc_82FBE7CC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fbe7cc
	if (!ctx.cr6.eq) goto loc_82FBE7CC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbe7cc
	if (!ctx.cr0.eq) goto loc_82FBE7CC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FBE7C4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBE7CC;
	__imp__KfLowerIrql(ctx, base);
loc_82FBE7CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBE7D4"))) PPC_WEAK_FUNC(sub_82FBE7D4);
PPC_FUNC_IMPL(__imp__sub_82FBE7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE7D8"))) PPC_WEAK_FUNC(sub_82FBE7D8);
PPC_FUNC_IMPL(__imp__sub_82FBE7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FBE7E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FBE7F0;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbe818
	if (ctx.cr6.eq) goto loc_82FBE818;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fbe830
	if (ctx.cr6.eq) goto loc_82FBE830;
loc_82FBE818:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBE820;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82FBE830:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fbe870
	if (ctx.cr6.eq) goto loc_82FBE870;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FBE870:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fbe8b4
	if (ctx.cr6.eq) goto loc_82FBE8B4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fbe8b4
	if (!ctx.cr6.eq) goto loc_82FBE8B4;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbe8b4
	if (!ctx.cr0.eq) goto loc_82FBE8B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FBE8AC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBE8B4;
	__imp__KfLowerIrql(ctx, base);
loc_82FBE8B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBE8BC"))) PPC_WEAK_FUNC(sub_82FBE8BC);
PPC_FUNC_IMPL(__imp__sub_82FBE8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE8C0"))) PPC_WEAK_FUNC(sub_82FBE8C0);
PPC_FUNC_IMPL(__imp__sub_82FBE8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FBE8C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FBE8D8;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbe900
	if (ctx.cr6.eq) goto loc_82FBE900;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fbe918
	if (ctx.cr6.eq) goto loc_82FBE918;
loc_82FBE900:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBE908;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82FBE918:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fbe958
	if (ctx.cr6.eq) goto loc_82FBE958;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FBE958:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fbe99c
	if (ctx.cr6.eq) goto loc_82FBE99C;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fbe99c
	if (!ctx.cr6.eq) goto loc_82FBE99C;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbe99c
	if (!ctx.cr0.eq) goto loc_82FBE99C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FBE994;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBE99C;
	__imp__KfLowerIrql(ctx, base);
loc_82FBE99C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBE9A4"))) PPC_WEAK_FUNC(sub_82FBE9A4);
PPC_FUNC_IMPL(__imp__sub_82FBE9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE9A8"))) PPC_WEAK_FUNC(sub_82FBE9A8);
PPC_FUNC_IMPL(__imp__sub_82FBE9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FBE9B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20324);
	// lwz r30,60(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82fbe640
	ctx.lr = 0x82FBE9D0;
	sub_82FBE640(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fcbf98
	ctx.lr = 0x82FBE9DC;
	sub_82FCBF98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbea78
	if (ctx.cr6.lt) goto loc_82FBEA78;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r9,10
	ctx.r9.s64 = 10;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82FBE9F4:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82fbe9f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FBE9F4;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// li r5,56
	ctx.r5.s64 = 56;
	// stb r10,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82FBEA1C;
	sub_82CB1160(ctx, base);
	// lbz r10,59(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 59);
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lbz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r10.u8);
	// stb r9,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r9.u8);
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// bl 0x82fbd710
	ctx.lr = 0x82FBEA54;
	sub_82FBD710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x82fbea7c
	if (ctx.cr6.lt) goto loc_82FBEA7C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82FBEA78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FBEA7C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBEA84"))) PPC_WEAK_FUNC(sub_82FBEA84);
PPC_FUNC_IMPL(__imp__sub_82FBEA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBEA88"))) PPC_WEAK_FUNC(sub_82FBEA88);
PPC_FUNC_IMPL(__imp__sub_82FBEA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FBEA90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r10,r11,15376
	ctx.r10.s64 = ctx.r11.s64 + 15376;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82FBEAB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbead8
	if (ctx.cr6.lt) goto loc_82FBEAD8;
	// lwz r3,76(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbead8
	if (ctx.cr6.eq) goto loc_82FBEAD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBEAD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBEAD8:
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r28,20324(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20324);
	// bl 0x833b8a44
	ctx.lr = 0x82FBEAE4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbeb0c
	if (ctx.cr6.eq) goto loc_82FBEB0C;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fbeb24
	if (ctx.cr6.eq) goto loc_82FBEB24;
loc_82FBEB0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBEB14;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82FBEB24:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fbeb64
	if (ctx.cr6.eq) goto loc_82FBEB64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FBEB64:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fbeba8
	if (ctx.cr6.eq) goto loc_82FBEBA8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fbeba8
	if (!ctx.cr6.eq) goto loc_82FBEBA8;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbeba8
	if (!ctx.cr0.eq) goto loc_82FBEBA8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FBEBA0;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBEBA8;
	__imp__KfLowerIrql(ctx, base);
loc_82FBEBA8:
	// lwz r3,76(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbebcc
	if (ctx.cr6.eq) goto loc_82FBEBCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBEBC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,76(r27)
	PPC_STORE_U32(ctx.r27.u32 + 76, ctx.r9.u32);
loc_82FBEBCC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fcc340
	ctx.lr = 0x82FBEBD4;
	sub_82FCC340(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBEBDC"))) PPC_WEAK_FUNC(sub_82FBEBDC);
PPC_FUNC_IMPL(__imp__sub_82FBEBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBEBE0"))) PPC_WEAK_FUNC(sub_82FBEBE0);
PPC_FUNC_IMPL(__imp__sub_82FBEBE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBEBF0"))) PPC_WEAK_FUNC(sub_82FBEBF0);
PPC_FUNC_IMPL(__imp__sub_82FBEBF0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBEC00"))) PPC_WEAK_FUNC(sub_82FBEC00);
PPC_FUNC_IMPL(__imp__sub_82FBEC00) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBEC1C"))) PPC_WEAK_FUNC(sub_82FBEC1C);
PPC_FUNC_IMPL(__imp__sub_82FBEC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBEC20"))) PPC_WEAK_FUNC(sub_82FBEC20);
PPC_FUNC_IMPL(__imp__sub_82FBEC20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBEC24"))) PPC_WEAK_FUNC(sub_82FBEC24);
PPC_FUNC_IMPL(__imp__sub_82FBEC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBEC28"))) PPC_WEAK_FUNC(sub_82FBEC28);
PPC_FUNC_IMPL(__imp__sub_82FBEC28) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBEC34"))) PPC_WEAK_FUNC(sub_82FBEC34);
PPC_FUNC_IMPL(__imp__sub_82FBEC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBEC38"))) PPC_WEAK_FUNC(sub_82FBEC38);
PPC_FUNC_IMPL(__imp__sub_82FBEC38) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82FBEC60;
	sub_82CB1160(ctx, base);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,144(r30)
	PPC_STORE_U8(ctx.r30.u32 + 144, ctx.r11.u8);
	// bl 0x82fbe640
	ctx.lr = 0x82FBEC74;
	sub_82FBE640(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fcc050
	ctx.lr = 0x82FBEC80;
	sub_82FCC050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbecfc
	if (ctx.cr6.lt) goto loc_82FBECFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r9,10
	ctx.r9.s64 = 10;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82FBEC98:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82fbec98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FBEC98;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// li r5,56
	ctx.r5.s64 = 56;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82FBECC0;
	sub_82CB1160(ctx, base);
	// lbz r10,59(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 59);
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lbz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r6,255
	ctx.r6.s64 = 255;
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// stb r10,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r9,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, ctx.r9.u8);
	// stw r8,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// bl 0x82fccc10
	ctx.lr = 0x82FBECFC;
	sub_82FCCC10(ctx, base);
loc_82FBECFC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_82FBED14"))) PPC_WEAK_FUNC(sub_82FBED14);
PPC_FUNC_IMPL(__imp__sub_82FBED14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBED18"))) PPC_WEAK_FUNC(sub_82FBED18);
PPC_FUNC_IMPL(__imp__sub_82FBED18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FBED20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FBED2C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbed54
	if (ctx.cr6.eq) goto loc_82FBED54;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbed70
	if (ctx.cr6.eq) goto loc_82FBED70;
loc_82FBED54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBED5C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// b 0x82fbed74
	goto loc_82FBED74;
loc_82FBED70:
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_82FBED74:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r9,61(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 61);
	// rlwinm r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82fbeddc
	if (!ctx.cr6.eq) goto loc_82FBEDDC;
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbedcc
	if (ctx.cr6.eq) goto loc_82FBEDCC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fbedcc
	if (!ctx.cr6.eq) goto loc_82FBEDCC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbedcc
	if (!ctx.cr0.eq) goto loc_82FBEDCC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FBEDC4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBEDCC;
	__imp__KfLowerIrql(ctx, base);
loc_82FBEDCC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16388
	ctx.r3.u64 = ctx.r3.u64 | 16388;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82FBEDDC:
	// lis r30,-31890
	ctx.r30.s64 = -2089943040;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,20324(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20324);
	// bl 0x82fbb8f0
	ctx.lr = 0x82FBEDEC;
	sub_82FBB8F0(ctx, base);
	// lwz r28,20324(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20324);
	// bl 0x833b8a44
	ctx.lr = 0x82FBEDF4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbee14
	if (ctx.cr6.eq) goto loc_82FBEE14;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fbee2c
	if (ctx.cr6.eq) goto loc_82FBEE2C;
loc_82FBEE14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBEE1C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82FBEE2C:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fbee6c
	if (ctx.cr6.eq) goto loc_82FBEE6C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FBEE6C:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fbeeb0
	if (ctx.cr6.eq) goto loc_82FBEEB0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fbeeb0
	if (!ctx.cr6.eq) goto loc_82FBEEB0;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbeeb0
	if (!ctx.cr0.eq) goto loc_82FBEEB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FBEEA8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBEEB0;
	__imp__KfLowerIrql(ctx, base);
loc_82FBEEB0:
	// bl 0x833b8a44
	ctx.lr = 0x82FBEEB4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbeed4
	if (ctx.cr6.eq) goto loc_82FBEED4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbeee8
	if (ctx.cr6.eq) goto loc_82FBEEE8;
loc_82FBEED4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBEEDC;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FBEEE8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r11,61(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 61);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r9,r9,0,26,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stb r9,61(r27)
	PPC_STORE_U8(ctx.r27.u32 + 61, ctx.r9.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbef50
	if (ctx.cr6.eq) goto loc_82FBEF50;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fbef50
	if (!ctx.cr6.eq) goto loc_82FBEF50;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbef50
	if (!ctx.cr0.eq) goto loc_82FBEF50;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FBEF44;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBEF4C;
	__imp__KfLowerIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FBEF50:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbef98
	if (ctx.cr6.eq) goto loc_82FBEF98;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fbef98
	if (!ctx.cr6.eq) goto loc_82FBEF98;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbef98
	if (!ctx.cr0.eq) goto loc_82FBEF98;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FBEF90;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBEF98;
	__imp__KfLowerIrql(ctx, base);
loc_82FBEF98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBEFA4"))) PPC_WEAK_FUNC(sub_82FBEFA4);
PPC_FUNC_IMPL(__imp__sub_82FBEFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBEFA8"))) PPC_WEAK_FUNC(sub_82FBEFA8);
PPC_FUNC_IMPL(__imp__sub_82FBEFA8) {
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
	// bl 0x82fbe9a8
	ctx.lr = 0x82FBEFC0;
	sub_82FBE9A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbefd4
	if (ctx.cr6.lt) goto loc_82FBEFD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,148
	ctx.r11.s64 = ctx.r11.s64 + 148;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FBEFD4:
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

__attribute__((alias("__imp__sub_82FBEFE8"))) PPC_WEAK_FUNC(sub_82FBEFE8);
PPC_FUNC_IMPL(__imp__sub_82FBEFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FBEFF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r3,80
	ctx.r30.s64 = ctx.r3.s64 + 80;
	// bl 0x833b8a44
	ctx.lr = 0x82FBF000;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbf028
	if (ctx.cr6.eq) goto loc_82FBF028;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbf03c
	if (ctx.cr6.eq) goto loc_82FBF03C;
loc_82FBF028:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBF030;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
loc_82FBF03C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbf0b0
	if (ctx.cr6.eq) goto loc_82FBF0B0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fbf0b0
	if (!ctx.cr6.eq) goto loc_82FBF0B0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbf0b0
	if (!ctx.cr0.eq) goto loc_82FBF0B0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FBF0A8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBF0B0;
	__imp__KfLowerIrql(ctx, base);
loc_82FBF0B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBF0B8"))) PPC_WEAK_FUNC(sub_82FBF0B8);
PPC_FUNC_IMPL(__imp__sub_82FBF0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FBF0C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FBF0D0;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbf0f8
	if (ctx.cr6.eq) goto loc_82FBF0F8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbf10c
	if (ctx.cr6.eq) goto loc_82FBF10C;
loc_82FBF0F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBF100;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
loc_82FBF10C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbf184
	if (ctx.cr6.eq) goto loc_82FBF184;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fbf184
	if (!ctx.cr6.eq) goto loc_82FBF184;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbf184
	if (!ctx.cr0.eq) goto loc_82FBF184;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FBF17C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBF184;
	__imp__KfLowerIrql(ctx, base);
loc_82FBF184:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBF18C"))) PPC_WEAK_FUNC(sub_82FBF18C);
PPC_FUNC_IMPL(__imp__sub_82FBF18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF190"))) PPC_WEAK_FUNC(sub_82FBF190);
PPC_FUNC_IMPL(__imp__sub_82FBF190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FBF198;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82fcbe08
	ctx.lr = 0x82FBF1A4;
	sub_82FCBE08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-31890
	ctx.r9.s64 = -2089943040;
	// addi r8,r10,15376
	ctx.r8.s64 = ctx.r10.s64 + 15376;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// stfs f0,140(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 140, temp.u32);
	// lwz r11,20324(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20324);
	// addi r30,r11,80
	ctx.r30.s64 = ctx.r11.s64 + 80;
	// bl 0x833b8a44
	ctx.lr = 0x82FBF1CC;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r28,r13
	ctx.r28.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbf1f4
	if (ctx.cr6.eq) goto loc_82FBF1F4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbf208
	if (ctx.cr6.eq) goto loc_82FBF208;
loc_82FBF1F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBF1FC;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
loc_82FBF208:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbf27c
	if (ctx.cr6.eq) goto loc_82FBF27C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fbf27c
	if (!ctx.cr6.eq) goto loc_82FBF27C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbf27c
	if (!ctx.cr0.eq) goto loc_82FBF27C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FBF274;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBF27C;
	__imp__KfLowerIrql(ctx, base);
loc_82FBF27C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBF288"))) PPC_WEAK_FUNC(sub_82FBF288);
PPC_FUNC_IMPL(__imp__sub_82FBF288) {
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
	// bl 0x82fbea88
	ctx.lr = 0x82FBF2A0;
	sub_82FBEA88(ctx, base);
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

__attribute__((alias("__imp__sub_82FBF2B8"))) PPC_WEAK_FUNC(sub_82FBF2B8);
PPC_FUNC_IMPL(__imp__sub_82FBF2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FBF2C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x833b8a44
	ctx.lr = 0x82FBF2D0;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbf2f8
	if (ctx.cr6.eq) goto loc_82FBF2F8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbf30c
	if (ctx.cr6.eq) goto loc_82FBF30C;
loc_82FBF2F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBF300;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FBF30C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r10,61(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 61);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fbf330
	if (ctx.cr6.eq) goto loc_82FBF330;
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// ori r26,r26,65535
	ctx.r26.u64 = ctx.r26.u64 | 65535;
	// b 0x82fbf490
	goto loc_82FBF490;
loc_82FBF330:
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fbf490
	if (!ctx.cr6.eq) goto loc_82FBF490;
	// bl 0x833b8a44
	ctx.lr = 0x82FBF340;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbf360
	if (ctx.cr6.eq) goto loc_82FBF360;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbf374
	if (ctx.cr6.eq) goto loc_82FBF374;
loc_82FBF360:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBF368;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FBF374:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r11,61(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 61);
	// ori r9,r11,64
	ctx.r9.u64 = ctx.r11.u64 | 64;
	// stb r9,61(r27)
	PPC_STORE_U8(ctx.r27.u32 + 61, ctx.r9.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbf3d4
	if (ctx.cr6.eq) goto loc_82FBF3D4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fbf3d4
	if (!ctx.cr6.eq) goto loc_82FBF3D4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbf3d4
	if (!ctx.cr0.eq) goto loc_82FBF3D4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FBF3CC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBF3D4;
	__imp__KfLowerIrql(ctx, base);
loc_82FBF3D4:
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r30,20324(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20324);
	// bl 0x833b8a44
	ctx.lr = 0x82FBF3E0;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbf400
	if (ctx.cr6.eq) goto loc_82FBF400;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbf414
	if (ctx.cr6.eq) goto loc_82FBF414;
loc_82FBF400:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBF408;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FBF414:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbf490
	if (ctx.cr6.eq) goto loc_82FBF490;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fbf490
	if (!ctx.cr6.eq) goto loc_82FBF490;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbf490
	if (!ctx.cr0.eq) goto loc_82FBF490;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FBF484;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBF48C;
	__imp__KfLowerIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FBF490:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbf4d8
	if (ctx.cr6.eq) goto loc_82FBF4D8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fbf4d8
	if (!ctx.cr6.eq) goto loc_82FBF4D8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbf4d8
	if (!ctx.cr0.eq) goto loc_82FBF4D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FBF4D0;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBF4D8;
	__imp__KfLowerIrql(ctx, base);
loc_82FBF4D8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBF4E4"))) PPC_WEAK_FUNC(sub_82FBF4E4);
PPC_FUNC_IMPL(__imp__sub_82FBF4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF4E8"))) PPC_WEAK_FUNC(sub_82FBF4E8);
PPC_FUNC_IMPL(__imp__sub_82FBF4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FBF4F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82fbed18
	ctx.lr = 0x82FBF500;
	sub_82FBED18(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,16388
	ctx.r10.u64 = ctx.r11.u64 | 16388;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82fbf58c
	if (!ctx.cr6.eq) goto loc_82FBF58C;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbf580
	if (ctx.cr6.eq) goto loc_82FBF580;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBF530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbf58c
	if (ctx.cr6.lt) goto loc_82FBF58C;
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// clrlwi r29,r31,24
	ctx.r29.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbf580
	if (!ctx.cr6.eq) goto loc_82FBF580;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBF560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbf58c
	if (ctx.cr6.lt) goto loc_82FBF58C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fbf580
	if (!ctx.cr6.eq) goto loc_82FBF580;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// ori r31,r11,1
	ctx.r31.u64 = ctx.r11.u64 | 1;
loc_82FBF580:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fcd348
	ctx.lr = 0x82FBF58C;
	sub_82FCD348(ctx, base);
loc_82FBF58C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBF594"))) PPC_WEAK_FUNC(sub_82FBF594);
PPC_FUNC_IMPL(__imp__sub_82FBF594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF598"))) PPC_WEAK_FUNC(sub_82FBF598);
PPC_FUNC_IMPL(__imp__sub_82FBF598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FBF5A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82fbe9a8
	ctx.lr = 0x82FBF5B8;
	sub_82FBE9A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbf5cc
	if (ctx.cr6.lt) goto loc_82FBF5CC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,148
	ctx.r4.s64 = ctx.r11.s64 + 148;
	// b 0x82fbf5d0
	goto loc_82FBF5D0;
loc_82FBF5CC:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82FBF5D0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbf670
	if (ctx.cr6.lt) goto loc_82FBF670;
	// lis r3,24962
	ctx.r3.s64 = 1635909632;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bl 0x82fcbd58
	ctx.lr = 0x82FBF5EC;
	sub_82FCBD58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82fbf670
	if (ctx.cr6.lt) goto loc_82FBF670;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r4,148
	ctx.r4.s64 = 148;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBF610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbf630
	if (ctx.cr6.eq) goto loc_82FBF630;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x82fbf190
	ctx.lr = 0x82FBF624;
	sub_82FBF190(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fbf63c
	if (!ctx.cr6.eq) goto loc_82FBF63C;
loc_82FBF630:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82fbf670
	goto loc_82FBF670;
loc_82FBF63C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fbec38
	ctx.lr = 0x82FBF648;
	sub_82FBEC38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82fbf65c
	if (ctx.cr6.lt) goto loc_82FBF65C;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// b 0x82fbf670
	goto loc_82FBF670;
loc_82FBF65C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBF670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBF670:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbf68c
	if (ctx.cr6.eq) goto loc_82FBF68C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBF68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBF68C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBF698"))) PPC_WEAK_FUNC(sub_82FBF698);
PPC_FUNC_IMPL(__imp__sub_82FBF698) {
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
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbf6d0
	if (ctx.cr6.eq) goto loc_82FBF6D0;
	// bl 0x82fbf2b8
	ctx.lr = 0x82FBF6BC;
	sub_82FBF2B8(ctx, base);
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
loc_82FBF6D0:
	// bl 0x82fbed18
	ctx.lr = 0x82FBF6D4;
	sub_82FBED18(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,16388
	ctx.r10.u64 = ctx.r11.u64 | 16388;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82fbf6ec
	if (ctx.cr6.eq) goto loc_82FBF6EC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbf724
	if (ctx.cr6.lt) goto loc_82FBF724;
loc_82FBF6EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBF700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82FBF714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbf724
	if (ctx.cr6.lt) goto loc_82FBF724;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fcd120
	ctx.lr = 0x82FBF724;
	sub_82FCD120(ctx, base);
loc_82FBF724:
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

__attribute__((alias("__imp__sub_82FBF738"))) PPC_WEAK_FUNC(sub_82FBF738);
PPC_FUNC_IMPL(__imp__sub_82FBF738) {
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
	// bl 0x82bf2178
	ctx.lr = 0x82FBF750;
	sub_82BF2178(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82FBF76C"))) PPC_WEAK_FUNC(sub_82FBF76C);
PPC_FUNC_IMPL(__imp__sub_82FBF76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF770"))) PPC_WEAK_FUNC(sub_82FBF770);
PPC_FUNC_IMPL(__imp__sub_82FBF770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subfic r11,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r5.s64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r4,r10,0,28,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// b 0x82befff0
	sub_82BEFFF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBF788"))) PPC_WEAK_FUNC(sub_82FBF788);
PPC_FUNC_IMPL(__imp__sub_82FBF788) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bf12d8
	sub_82BF12D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBF798"))) PPC_WEAK_FUNC(sub_82FBF798);
PPC_FUNC_IMPL(__imp__sub_82FBF798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF79C"))) PPC_WEAK_FUNC(sub_82FBF79C);
PPC_FUNC_IMPL(__imp__sub_82FBF79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF7A0"))) PPC_WEAK_FUNC(sub_82FBF7A0);
PPC_FUNC_IMPL(__imp__sub_82FBF7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FBF7A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x833b8ae4
	ctx.lr = 0x82FBF7C0;
	__imp__ExAllocatePoolWithTag(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fbf7e0
	if (ctx.cr6.eq) goto loc_82FBF7E0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82fbf7e4
	if (ctx.cr6.eq) goto loc_82FBF7E4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82FBF7E0;
	sub_82CB16F0(ctx, base);
loc_82FBF7E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82FBF7E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBF7EC"))) PPC_WEAK_FUNC(sub_82FBF7EC);
PPC_FUNC_IMPL(__imp__sub_82FBF7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF7F0"))) PPC_WEAK_FUNC(sub_82FBF7F0);
PPC_FUNC_IMPL(__imp__sub_82FBF7F0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x833b8244
	__imp__ExFreePool(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBF7F8"))) PPC_WEAK_FUNC(sub_82FBF7F8);
PPC_FUNC_IMPL(__imp__sub_82FBF7F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF7FC"))) PPC_WEAK_FUNC(sub_82FBF7FC);
PPC_FUNC_IMPL(__imp__sub_82FBF7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF800"))) PPC_WEAK_FUNC(sub_82FBF800);
PPC_FUNC_IMPL(__imp__sub_82FBF800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FBF808;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x833b8af4
	ctx.lr = 0x82FBF820;
	__imp__MmAllocatePhysicalMemory(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fbf840
	if (ctx.cr6.eq) goto loc_82FBF840;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82fbf844
	if (ctx.cr6.eq) goto loc_82FBF844;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82FBF840;
	sub_82CB16F0(ctx, base);
loc_82FBF840:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82FBF844:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBF84C"))) PPC_WEAK_FUNC(sub_82FBF84C);
PPC_FUNC_IMPL(__imp__sub_82FBF84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF850"))) PPC_WEAK_FUNC(sub_82FBF850);
PPC_FUNC_IMPL(__imp__sub_82FBF850) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x833b7844
	__imp__MmFreePhysicalMemory(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBF858"))) PPC_WEAK_FUNC(sub_82FBF858);
PPC_FUNC_IMPL(__imp__sub_82FBF858) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF85C"))) PPC_WEAK_FUNC(sub_82FBF85C);
PPC_FUNC_IMPL(__imp__sub_82FBF85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF860"))) PPC_WEAK_FUNC(sub_82FBF860);
PPC_FUNC_IMPL(__imp__sub_82FBF860) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBF86C"))) PPC_WEAK_FUNC(sub_82FBF86C);
PPC_FUNC_IMPL(__imp__sub_82FBF86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF870"))) PPC_WEAK_FUNC(sub_82FBF870);
PPC_FUNC_IMPL(__imp__sub_82FBF870) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBF87C"))) PPC_WEAK_FUNC(sub_82FBF87C);
PPC_FUNC_IMPL(__imp__sub_82FBF87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF880"))) PPC_WEAK_FUNC(sub_82FBF880);
PPC_FUNC_IMPL(__imp__sub_82FBF880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF884"))) PPC_WEAK_FUNC(sub_82FBF884);
PPC_FUNC_IMPL(__imp__sub_82FBF884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF888"))) PPC_WEAK_FUNC(sub_82FBF888);
PPC_FUNC_IMPL(__imp__sub_82FBF888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF88C"))) PPC_WEAK_FUNC(sub_82FBF88C);
PPC_FUNC_IMPL(__imp__sub_82FBF88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF890"))) PPC_WEAK_FUNC(sub_82FBF890);
PPC_FUNC_IMPL(__imp__sub_82FBF890) {
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
	// bl 0x82fcc8a8
	ctx.lr = 0x82FBF8AC;
	sub_82FCC8A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82fbf8e4
	if (ctx.cr6.lt) goto loc_82FBF8E4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x82fbf8cc
	if (!ctx.cr6.eq) goto loc_82FBF8CC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FBF8CC:
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// bl 0x82fb93d8
	ctx.lr = 0x82FBF8D8;
	sub_82FB93D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82fc00b8
	ctx.lr = 0x82FBF8E4;
	sub_82FC00B8(ctx, base);
loc_82FBF8E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82FBF900"))) PPC_WEAK_FUNC(sub_82FBF900);
PPC_FUNC_IMPL(__imp__sub_82FBF900) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,48000
	ctx.r10.u64 = ctx.r10.u64 | 48000;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// stb r9,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r9.u8);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF920"))) PPC_WEAK_FUNC(sub_82FBF920);
PPC_FUNC_IMPL(__imp__sub_82FBF920) {
	PPC_FUNC_PROLOGUE();
	// b 0x82fb9550
	sub_82FB9550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBF924"))) PPC_WEAK_FUNC(sub_82FBF924);
PPC_FUNC_IMPL(__imp__sub_82FBF924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF928"))) PPC_WEAK_FUNC(sub_82FBF928);
PPC_FUNC_IMPL(__imp__sub_82FBF928) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FBF944"))) PPC_WEAK_FUNC(sub_82FBF944);
PPC_FUNC_IMPL(__imp__sub_82FBF944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF948"))) PPC_WEAK_FUNC(sub_82FBF948);
PPC_FUNC_IMPL(__imp__sub_82FBF948) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 76);
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF95C"))) PPC_WEAK_FUNC(sub_82FBF95C);
PPC_FUNC_IMPL(__imp__sub_82FBF95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF960"))) PPC_WEAK_FUNC(sub_82FBF960);
PPC_FUNC_IMPL(__imp__sub_82FBF960) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82FBF970:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82fbf970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FBF970;
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// stb r10,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
	// ori r9,r11,48000
	ctx.r9.u64 = ctx.r11.u64 | 48000;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r7,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r7.u32);
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbf9bc
	if (!ctx.cr6.eq) goto loc_82FBF9BC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82FBF9BC:
	// stb r11,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, ctx.r11.u8);
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbf9d0
	if (!ctx.cr6.eq) goto loc_82FBF9D0;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82FBF9D0:
	// stb r11,25(r4)
	PPC_STORE_U8(ctx.r4.u32 + 25, ctx.r11.u8);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF9E0"))) PPC_WEAK_FUNC(sub_82FBF9E0);
PPC_FUNC_IMPL(__imp__sub_82FBF9E0) {
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
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,48000
	ctx.r8.u64 = ctx.r10.u64 | 48000;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x82fcbe48
	ctx.lr = 0x82FBFA1C;
	sub_82FCBE48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82fbfa38
	if (ctx.cr6.lt) goto loc_82FBFA38;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// bl 0x82fb9550
	ctx.lr = 0x82FBFA38;
	sub_82FB9550(ctx, base);
loc_82FBFA38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82FBFA54"))) PPC_WEAK_FUNC(sub_82FBFA54);
PPC_FUNC_IMPL(__imp__sub_82FBFA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFA58"))) PPC_WEAK_FUNC(sub_82FBFA58);
PPC_FUNC_IMPL(__imp__sub_82FBFA58) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82fbf960
	ctx.lr = 0x82FBFA70;
	sub_82FBF960(ctx, base);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fcbf98
	ctx.lr = 0x82FBFA7C;
	sub_82FCBF98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFA8C"))) PPC_WEAK_FUNC(sub_82FBFA8C);
PPC_FUNC_IMPL(__imp__sub_82FBFA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFA90"))) PPC_WEAK_FUNC(sub_82FBFA90);
PPC_FUNC_IMPL(__imp__sub_82FBFA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FBFA98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lbz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FBFAB4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbfadc
	if (ctx.cr6.eq) goto loc_82FBFADC;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fbfaf4
	if (ctx.cr6.eq) goto loc_82FBFAF4;
loc_82FBFADC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBFAE4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82FBFAF4:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fbfb34
	if (ctx.cr6.eq) goto loc_82FBFB34;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FBFB34:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fbfb78
	if (ctx.cr6.eq) goto loc_82FBFB78;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fbfb78
	if (!ctx.cr6.eq) goto loc_82FBFB78;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbfb78
	if (!ctx.cr0.eq) goto loc_82FBFB78;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FBFB70;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBFB78;
	__imp__KfLowerIrql(ctx, base);
loc_82FBFB78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBFB80"))) PPC_WEAK_FUNC(sub_82FBFB80);
PPC_FUNC_IMPL(__imp__sub_82FBFB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FBFB88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,15472
	ctx.r10.s64 = ctx.r11.s64 + 15472;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x82fcd348
	ctx.lr = 0x82FBFBA4;
	sub_82FCD348(ctx, base);
	// lis r9,-31890
	ctx.r9.s64 = -2089943040;
	// lbz r8,76(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// mulli r10,r8,44
	ctx.r10.s64 = ctx.r8.s64 * 44;
	// lwz r11,20324(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20324);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FBFBC0;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbfbe8
	if (ctx.cr6.eq) goto loc_82FBFBE8;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fbfc00
	if (ctx.cr6.eq) goto loc_82FBFC00;
loc_82FBFBE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBFBF0;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82FBFC00:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fbfc40
	if (ctx.cr6.eq) goto loc_82FBFC40;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FBFC40:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fbfc84
	if (ctx.cr6.eq) goto loc_82FBFC84;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fbfc84
	if (!ctx.cr6.eq) goto loc_82FBFC84;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbfc84
	if (!ctx.cr0.eq) goto loc_82FBFC84;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FBFC7C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBFC84;
	__imp__KfLowerIrql(ctx, base);
loc_82FBFC84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fcc340
	ctx.lr = 0x82FBFC8C;
	sub_82FCC340(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBFC94"))) PPC_WEAK_FUNC(sub_82FBFC94);
PPC_FUNC_IMPL(__imp__sub_82FBFC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFC98"))) PPC_WEAK_FUNC(sub_82FBFC98);
PPC_FUNC_IMPL(__imp__sub_82FBFC98) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,61(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 61);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFCA8"))) PPC_WEAK_FUNC(sub_82FBFCA8);
PPC_FUNC_IMPL(__imp__sub_82FBFCA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFCB0"))) PPC_WEAK_FUNC(sub_82FBFCB0);
PPC_FUNC_IMPL(__imp__sub_82FBFCB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFCB4"))) PPC_WEAK_FUNC(sub_82FBFCB4);
PPC_FUNC_IMPL(__imp__sub_82FBFCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFCB8"))) PPC_WEAK_FUNC(sub_82FBFCB8);
PPC_FUNC_IMPL(__imp__sub_82FBFCB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82fcc3e0
	sub_82FCC3E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBFCBC"))) PPC_WEAK_FUNC(sub_82FBFCBC);
PPC_FUNC_IMPL(__imp__sub_82FBFCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFCC0"))) PPC_WEAK_FUNC(sub_82FBFCC0);
PPC_FUNC_IMPL(__imp__sub_82FBFCC0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82fbf960
	ctx.lr = 0x82FBFCE4;
	sub_82FBF960(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fcc050
	ctx.lr = 0x82FBFCF0;
	sub_82FCC050(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82fbfd0c
	if (ctx.cr6.lt) goto loc_82FBFD0C;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fb9550
	ctx.lr = 0x82FBFD0C;
	sub_82FB9550(ctx, base);
loc_82FBFD0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82FBFD28"))) PPC_WEAK_FUNC(sub_82FBFD28);
PPC_FUNC_IMPL(__imp__sub_82FBFD28) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82fbf960
	ctx.lr = 0x82FBFD44;
	sub_82FBF960(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fcbf98
	ctx.lr = 0x82FBFD50;
	sub_82FCBF98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbfd64
	if (ctx.cr6.lt) goto loc_82FBFD64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FBFD64:
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

__attribute__((alias("__imp__sub_82FBFD78"))) PPC_WEAK_FUNC(sub_82FBFD78);
PPC_FUNC_IMPL(__imp__sub_82FBFD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FBFD80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lbz r10,76(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 76);
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FBFD9C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r28,r13
	ctx.r28.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbfdc4
	if (ctx.cr6.eq) goto loc_82FBFDC4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbfdd8
	if (ctx.cr6.eq) goto loc_82FBFDD8;
loc_82FBFDC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBFDCC;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
loc_82FBFDD8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbfe4c
	if (ctx.cr6.eq) goto loc_82FBFE4C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fbfe4c
	if (!ctx.cr6.eq) goto loc_82FBFE4C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbfe4c
	if (!ctx.cr0.eq) goto loc_82FBFE4C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FBFE44;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBFE4C;
	__imp__KfLowerIrql(ctx, base);
loc_82FBFE4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBFE54"))) PPC_WEAK_FUNC(sub_82FBFE54);
PPC_FUNC_IMPL(__imp__sub_82FBFE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFE58"))) PPC_WEAK_FUNC(sub_82FBFE58);
PPC_FUNC_IMPL(__imp__sub_82FBFE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FBFE60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82fcbe08
	ctx.lr = 0x82FBFE78;
	sub_82FCBE08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31890
	ctx.r9.s64 = -2089943040;
	// addi r8,r11,15472
	ctx.r8.s64 = ctx.r11.s64 + 15472;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lbz r7,10(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stb r7,76(r29)
	PPC_STORE_U8(ctx.r29.u32 + 76, ctx.r7.u8);
	// mulli r10,r6,44
	ctx.r10.s64 = ctx.r6.s64 * 44;
	// lwz r11,20324(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20324);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FBFEA8;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r28,r13
	ctx.r28.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbfed0
	if (ctx.cr6.eq) goto loc_82FBFED0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbfee4
	if (ctx.cr6.eq) goto loc_82FBFEE4;
loc_82FBFED0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FBFED8;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
loc_82FBFEE4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fbff58
	if (ctx.cr6.eq) goto loc_82FBFF58;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fbff58
	if (!ctx.cr6.eq) goto loc_82FBFF58;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fbff58
	if (!ctx.cr0.eq) goto loc_82FBFF58;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FBFF50;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FBFF58;
	__imp__KfLowerIrql(ctx, base);
loc_82FBFF58:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBFF64"))) PPC_WEAK_FUNC(sub_82FBFF64);
PPC_FUNC_IMPL(__imp__sub_82FBFF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFF68"))) PPC_WEAK_FUNC(sub_82FBFF68);
PPC_FUNC_IMPL(__imp__sub_82FBFF68) {
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
	// bl 0x82fbfb80
	ctx.lr = 0x82FBFF80;
	sub_82FBFB80(ctx, base);
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

__attribute__((alias("__imp__sub_82FBFF98"))) PPC_WEAK_FUNC(sub_82FBFF98);
PPC_FUNC_IMPL(__imp__sub_82FBFF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FBFFA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82fbf960
	ctx.lr = 0x82FBFFB8;
	sub_82FBF960(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fcbf98
	ctx.lr = 0x82FBFFC4;
	sub_82FCBF98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fbffd8
	if (ctx.cr6.lt) goto loc_82FBFFD8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82FBFFD8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fc007c
	if (ctx.cr6.lt) goto loc_82FC007C;
	// lis r3,24962
	ctx.r3.s64 = 1635909632;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bl 0x82fcbd58
	ctx.lr = 0x82FBFFF8;
	sub_82FCBD58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82fc007c
	if (ctx.cr6.lt) goto loc_82FC007C;
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC001C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fc003c
	if (ctx.cr6.eq) goto loc_82FC003C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,204(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x82fbfe58
	ctx.lr = 0x82FC0030;
	sub_82FBFE58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82fc0048
	if (!ctx.cr6.eq) goto loc_82FC0048;
loc_82FC003C:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82fc007c
	goto loc_82FC007C;
loc_82FC0048:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbfcc0
	ctx.lr = 0x82FC0054;
	sub_82FBFCC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82fc0068
	if (ctx.cr6.lt) goto loc_82FC0068;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// b 0x82fc007c
	goto loc_82FC007C;
loc_82FC0068:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC007C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC007C:
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fc0098
	if (ctx.cr6.eq) goto loc_82FC0098;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC0098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC0098:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC00A4"))) PPC_WEAK_FUNC(sub_82FC00A4);
PPC_FUNC_IMPL(__imp__sub_82FC00A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC00A8"))) PPC_WEAK_FUNC(sub_82FC00A8);
PPC_FUNC_IMPL(__imp__sub_82FC00A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC00B0"))) PPC_WEAK_FUNC(sub_82FC00B0);
PPC_FUNC_IMPL(__imp__sub_82FC00B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC00B8"))) PPC_WEAK_FUNC(sub_82FC00B8);
PPC_FUNC_IMPL(__imp__sub_82FC00B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,20332
	ctx.r11.s64 = ctx.r11.s64 + 20332;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82FC00C8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fc00c8
	if (!ctx.cr0.eq) goto loc_82FC00C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC00EC"))) PPC_WEAK_FUNC(sub_82FC00EC);
PPC_FUNC_IMPL(__imp__sub_82FC00EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC00F0"))) PPC_WEAK_FUNC(sub_82FC00F0);
PPC_FUNC_IMPL(__imp__sub_82FC00F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,20360
	ctx.r9.s64 = ctx.r11.s64 + 20360;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0104"))) PPC_WEAK_FUNC(sub_82FC0104);
PPC_FUNC_IMPL(__imp__sub_82FC0104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0108"))) PPC_WEAK_FUNC(sub_82FC0108);
PPC_FUNC_IMPL(__imp__sub_82FC0108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,20332
	ctx.r9.s64 = ctx.r11.s64 + 20332;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0124"))) PPC_WEAK_FUNC(sub_82FC0124);
PPC_FUNC_IMPL(__imp__sub_82FC0124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0128"))) PPC_WEAK_FUNC(sub_82FC0128);
PPC_FUNC_IMPL(__imp__sub_82FC0128) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0130"))) PPC_WEAK_FUNC(sub_82FC0130);
PPC_FUNC_IMPL(__imp__sub_82FC0130) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0138"))) PPC_WEAK_FUNC(sub_82FC0138);
PPC_FUNC_IMPL(__imp__sub_82FC0138) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0140"))) PPC_WEAK_FUNC(sub_82FC0140);
PPC_FUNC_IMPL(__imp__sub_82FC0140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FC0148;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,20332
	ctx.r31.s64 = ctx.r11.s64 + 20332;
	// li r30,0
	ctx.r30.s64 = 0;
	// sradi r26,r10,32
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0xFFFFFFFF) != 0);
	ctx.r26.s64 = ctx.r10.s64 >> 32;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// lwz r11,20332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20332);
	// std r30,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r30.u64);
	// lis r3,22593
	ctx.r3.s64 = 1480654848;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r3,r3,30052
	ctx.r3.u64 = ctx.r3.u64 | 30052;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// std r30,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r30.u64);
	// std r30,16(r28)
	PPC_STORE_U64(ctx.r28.u32 + 16, ctx.r30.u64);
	// std r30,24(r28)
	PPC_STORE_U64(ctx.r28.u32 + 24, ctx.r30.u64);
	// std r30,32(r28)
	PPC_STORE_U64(ctx.r28.u32 + 32, ctx.r30.u64);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// bl 0x83359c50
	ctx.lr = 0x82FC01D0;
	sub_83359C50(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82FC01D4:
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// blt cr6,0x82fc01d4
	if (ctx.cr6.lt) goto loc_82FC01D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC0200"))) PPC_WEAK_FUNC(sub_82FC0200);
PPC_FUNC_IMPL(__imp__sub_82FC0200) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,15576
	ctx.r10.s64 = ctx.r11.s64 + 15576;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82fcdb60
	ctx.lr = 0x82FC0228;
	sub_82FCDB60(ctx, base);
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

__attribute__((alias("__imp__sub_82FC0240"))) PPC_WEAK_FUNC(sub_82FC0240);
PPC_FUNC_IMPL(__imp__sub_82FC0240) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,15576
	ctx.r9.s64 = ctx.r10.s64 + 15576;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82fcda50
	sub_82FCDA50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC0258"))) PPC_WEAK_FUNC(sub_82FC0258);
PPC_FUNC_IMPL(__imp__sub_82FC0258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82FC0260;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82FC027C;
	sub_82CB1160(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r11,92(r31)
	PPC_STORE_U16(ctx.r31.u32 + 92, ctx.r11.u16);
	// stb r9,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r9.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f0,6140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// sth r11,94(r31)
	PPC_STORE_U16(ctx.r31.u32 + 94, ctx.r11.u16);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r8,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r8.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82fcda88
	ctx.lr = 0x82FC02B8;
	sub_82FCDA88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC02C0"))) PPC_WEAK_FUNC(sub_82FC02C0);
PPC_FUNC_IMPL(__imp__sub_82FC02C0) {
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
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc0300
	if (ctx.cr6.eq) goto loc_82FC0300;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
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
loc_82FC0300:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,16388
	ctx.r5.u64 = ctx.r5.u64 | 16388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC0320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fc0300
	if (!ctx.cr6.eq) goto loc_82FC0300;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC0344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82FC0364"))) PPC_WEAK_FUNC(sub_82FC0364);
PPC_FUNC_IMPL(__imp__sub_82FC0364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0368"))) PPC_WEAK_FUNC(sub_82FC0368);
PPC_FUNC_IMPL(__imp__sub_82FC0368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// b 0x82fbf870
	sub_82FBF870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC037C"))) PPC_WEAK_FUNC(sub_82FC037C);
PPC_FUNC_IMPL(__imp__sub_82FC037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0380"))) PPC_WEAK_FUNC(sub_82FC0380);
PPC_FUNC_IMPL(__imp__sub_82FC0380) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC03B4"))) PPC_WEAK_FUNC(sub_82FC03B4);
PPC_FUNC_IMPL(__imp__sub_82FC03B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC03B8"))) PPC_WEAK_FUNC(sub_82FC03B8);
PPC_FUNC_IMPL(__imp__sub_82FC03B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fc03cc
	if (ctx.cr6.eq) goto loc_82FC03CC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// b 0x82fc03d0
	goto loc_82FC03D0;
loc_82FC03CC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82FC03D0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82fc03e0
	if (ctx.cr6.eq) goto loc_82FC03E0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82fc03e4
	goto loc_82FC03E4;
loc_82FC03E0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82FC03E4:
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc042c
	if (ctx.cr6.eq) goto loc_82FC042C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fc0428
	if (ctx.cr6.eq) goto loc_82FC0428;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc0428
	if (ctx.cr6.eq) goto loc_82FC0428;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_82FC0428:
	// blr 
	return;
loc_82FC042C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0434"))) PPC_WEAK_FUNC(sub_82FC0434);
PPC_FUNC_IMPL(__imp__sub_82FC0434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0438"))) PPC_WEAK_FUNC(sub_82FC0438);
PPC_FUNC_IMPL(__imp__sub_82FC0438) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,15576
	ctx.r10.s64 = ctx.r11.s64 + 15576;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82fcda50
	ctx.lr = 0x82FC0468;
	sub_82FCDA50(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fc0488
	if (ctx.cr6.eq) goto loc_82FC0488;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fbf870
	ctx.lr = 0x82FC0488;
	sub_82FBF870(ctx, base);
loc_82FC0488:
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

__attribute__((alias("__imp__sub_82FC04A4"))) PPC_WEAK_FUNC(sub_82FC04A4);
PPC_FUNC_IMPL(__imp__sub_82FC04A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC04A8"))) PPC_WEAK_FUNC(sub_82FC04A8);
PPC_FUNC_IMPL(__imp__sub_82FC04A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// beq cr6,0x82fc04bc
	if (ctx.cr6.eq) goto loc_82FC04BC;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82FC04BC:
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC04D8"))) PPC_WEAK_FUNC(sub_82FC04D8);
PPC_FUNC_IMPL(__imp__sub_82FC04D8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fc04f0
	if (ctx.cr6.eq) goto loc_82FC04F0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// b 0x82fc04f4
	goto loc_82FC04F4;
loc_82FC04F0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82FC04F4:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc050c
	if (ctx.cr6.eq) goto loc_82FC050C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
loc_82FC050C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0514"))) PPC_WEAK_FUNC(sub_82FC0514);
PPC_FUNC_IMPL(__imp__sub_82FC0514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0518"))) PPC_WEAK_FUNC(sub_82FC0518);
PPC_FUNC_IMPL(__imp__sub_82FC0518) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC053C"))) PPC_WEAK_FUNC(sub_82FC053C);
PPC_FUNC_IMPL(__imp__sub_82FC053C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0540"))) PPC_WEAK_FUNC(sub_82FC0540);
PPC_FUNC_IMPL(__imp__sub_82FC0540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FC0548;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r5,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi r28,r5,24
	ctx.r28.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// bne cr6,0x82fc06fc
	if (!ctx.cr6.eq) goto loc_82FC06FC;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fc0580
	if (!ctx.cr6.eq) goto loc_82FC0580;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
loc_82FC0580:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc0644
	if (ctx.cr6.eq) goto loc_82FC0644;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// blt cr6,0x82fc05ec
	if (ctx.cr6.lt) goto loc_82FC05EC;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc05ec
	if (ctx.cr6.eq) goto loc_82FC05EC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc05ec
	if (!ctx.cr6.eq) goto loc_82FC05EC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc05ec
	if (!ctx.cr0.eq) goto loc_82FC05EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC05E0;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC05E8;
	__imp__KfLowerIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FC05EC:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82fc0648
	if (!ctx.cr6.gt) goto loc_82FC0648;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc0648
	if (ctx.cr6.eq) goto loc_82FC0648;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc0648
	if (!ctx.cr6.eq) goto loc_82FC0648;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc0648
	if (!ctx.cr0.eq) goto loc_82FC0648;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC063C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC0644;
	__imp__KfLowerIrql(ctx, base);
loc_82FC0644:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FC0648:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fc06a4
	if (ctx.cr6.lt) goto loc_82FC06A4;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc06a4
	if (ctx.cr6.eq) goto loc_82FC06A4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc06a4
	if (!ctx.cr6.eq) goto loc_82FC06A4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc06a4
	if (!ctx.cr0.eq) goto loc_82FC06A4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC0698;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC06A0;
	__imp__KfLowerIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FC06A4:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82fc0700
	if (!ctx.cr6.gt) goto loc_82FC0700;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc0700
	if (ctx.cr6.eq) goto loc_82FC0700;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc0700
	if (!ctx.cr6.eq) goto loc_82FC0700;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc0700
	if (!ctx.cr0.eq) goto loc_82FC0700;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC06F4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC06FC;
	__imp__KfLowerIrql(ctx, base);
loc_82FC06FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FC0700:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc07d0
	if (ctx.cr6.eq) goto loc_82FC07D0;
	// rlwinm r10,r28,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fc07d0
	if (!ctx.cr6.eq) goto loc_82FC07D0;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fc0774
	if (ctx.cr6.gt) goto loc_82FC0774;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc0774
	if (ctx.cr6.eq) goto loc_82FC0774;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc0774
	if (!ctx.cr6.eq) goto loc_82FC0774;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc0774
	if (!ctx.cr0.eq) goto loc_82FC0774;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC0768;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC0770;
	__imp__KfLowerIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FC0774:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fc07d0
	if (ctx.cr6.lt) goto loc_82FC07D0;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc07d0
	if (ctx.cr6.eq) goto loc_82FC07D0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc07d0
	if (!ctx.cr6.eq) goto loc_82FC07D0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc07d0
	if (!ctx.cr0.eq) goto loc_82FC07D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC07C4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC07CC;
	__imp__KfLowerIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FC07D0:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc0844
	if (ctx.cr6.eq) goto loc_82FC0844;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fc07f0
	if (ctx.cr6.eq) goto loc_82FC07F0;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// b 0x82fc07f4
	goto loc_82FC07F4;
loc_82FC07F0:
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
loc_82FC07F4:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82fc0844
	if (ctx.cr6.gt) goto loc_82FC0844;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x82fc0844
	if (ctx.cr6.eq) goto loc_82FC0844;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc0844
	if (!ctx.cr6.eq) goto loc_82FC0844;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc0844
	if (!ctx.cr0.eq) goto loc_82FC0844;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC083C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC0844;
	__imp__KfLowerIrql(ctx, base);
loc_82FC0844:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// li r4,24
	ctx.r4.s64 = 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bne cr6,0x82fc0868
	if (!ctx.cr6.eq) goto loc_82FC0868;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82FC0868:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC0870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc0890
	if (ctx.cr6.eq) goto loc_82FC0890;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fc08ac
	if (!ctx.cr6.eq) goto loc_82FC08AC;
loc_82FC0890:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC08AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC08AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC08B8"))) PPC_WEAK_FUNC(sub_82FC08B8);
PPC_FUNC_IMPL(__imp__sub_82FC08B8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fc0934
	if (!ctx.cr6.eq) goto loc_82FC0934;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc0904
	if (ctx.cr6.eq) goto loc_82FC0904;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fc0934
	if (!ctx.cr6.eq) goto loc_82FC0934;
loc_82FC0904:
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82cb1160
	ctx.lr = 0x82FC0910;
	sub_82CB1160(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 157, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lfs f1,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82FC0930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fc093c
	goto loc_82FC093C;
loc_82FC0934:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_82FC093C:
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

__attribute__((alias("__imp__sub_82FC0954"))) PPC_WEAK_FUNC(sub_82FC0954);
PPC_FUNC_IMPL(__imp__sub_82FC0954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0958"))) PPC_WEAK_FUNC(sub_82FC0958);
PPC_FUNC_IMPL(__imp__sub_82FC0958) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82fc0a00
	if (ctx.cr6.eq) goto loc_82FC0A00;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r3,r11,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fc09fc
	if (ctx.cr6.eq) goto loc_82FC09FC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc09a8
	if (ctx.cr6.eq) goto loc_82FC09A8;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_82FC09A8:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// addic. r11,r7,1
	ctx.xer.ca = ctx.r7.u32 > 4294967294;
	ctx.r11.s64 = ctx.r7.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// bne 0x82fc09ec
	if (!ctx.cr0.eq) goto loc_82FC09EC;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
loc_82FC09EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,117(r3)
	PPC_STORE_U8(ctx.r3.u32 + 117, ctx.r11.u8);
	// stb r11,118(r3)
	PPC_STORE_U8(ctx.r3.u32 + 118, ctx.r11.u8);
	// stb r11,119(r3)
	PPC_STORE_U8(ctx.r3.u32 + 119, ctx.r11.u8);
loc_82FC09FC:
	// blr 
	return;
loc_82FC0A00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0A08"))) PPC_WEAK_FUNC(sub_82FC0A08);
PPC_FUNC_IMPL(__imp__sub_82FC0A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc0a38
	if (ctx.cr6.eq) goto loc_82FC0A38;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_82FC0A38:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0A60"))) PPC_WEAK_FUNC(sub_82FC0A60);
PPC_FUNC_IMPL(__imp__sub_82FC0A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82FC0A68;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC0A7C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,20216
	ctx.r30.s64 = ctx.r11.s64 + 20216;
	// mr r31,r13
	ctx.r31.u64 = ctx.r13.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fc0aa4
	if (ctx.cr6.eq) goto loc_82FC0AA4;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82fc0ac0
	if (ctx.cr6.eq) goto loc_82FC0AC0;
loc_82FC0AA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC0AAC;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// stb r29,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r29.u8);
	// b 0x82fc0ac4
	goto loc_82FC0AC4;
loc_82FC0AC0:
	// lbz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
loc_82FC0AC4:
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fc0bbc
	if (ctx.cr6.eq) goto loc_82FC0BBC;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r31,r9,r8
	ctx.r31.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fc0bbc
	if (ctx.cr6.eq) goto loc_82FC0BBC;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc0b1c
	if (ctx.cr6.eq) goto loc_82FC0B1C;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
loc_82FC0B1C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addic. r10,r7,1
	ctx.xer.ca = ctx.r7.u32 > 4294967294;
	ctx.r10.s64 = ctx.r7.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// bne 0x82fc0b60
	if (!ctx.cr0.eq) goto loc_82FC0B60;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
loc_82FC0B60:
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r10,r25,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	// stb r27,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r27.u8);
	// stb r27,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r27.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r27,119(r31)
	PPC_STORE_U8(ctx.r31.u32 + 119, ctx.r27.u8);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lhz r8,92(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 92);
	// twllei r8,0
	// divwu r7,r9,r8
	ctx.r7.u32 = ctx.r9.u32 / ctx.r8.u32;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lwz r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// beq cr6,0x82fc0c5c
	if (ctx.cr6.eq) goto loc_82FC0C5C;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// addi r4,r26,12
	ctx.r4.s64 = ctx.r26.s64 + 12;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82cb1160
	ctx.lr = 0x82FC0BB8;
	sub_82CB1160(ctx, base);
	// b 0x82fc0c9c
	goto loc_82FC0C9C;
loc_82FC0BBC:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fc0c0c
	if (ctx.cr6.eq) goto loc_82FC0C0C;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82fc0c0c
	if (!ctx.cr6.eq) goto loc_82FC0C0C;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bne 0x82fc0c0c
	if (!ctx.cr0.eq) goto loc_82FC0C0C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stb r11,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC0BF8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC0C00;
	__imp__KfLowerIrql(ctx, base);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
loc_82FC0C0C:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fc0c4c
	if (ctx.cr6.eq) goto loc_82FC0C4C;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82fc0c4c
	if (!ctx.cr6.eq) goto loc_82FC0C4C;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bne 0x82fc0c4c
	if (!ctx.cr0.eq) goto loc_82FC0C4C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stb r11,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC0C44;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC0C4C;
	__imp__KfLowerIrql(ctx, base);
loc_82FC0C4C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_82FC0C5C:
	// lhz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 92);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc0c94
	if (ctx.cr6.eq) goto loc_82FC0C94;
	// lhz r9,92(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 92);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// divwu r11,r11,r9
	ctx.r11.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r9,0
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82fc0c98
	goto loc_82FC0C98;
loc_82FC0C94:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82FC0C98:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82FC0C9C:
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,84(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82fc0540
	ctx.lr = 0x82FC0CBC;
	sub_82FC0540(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc0d0c
	if (ctx.cr6.eq) goto loc_82FC0D0C;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc0d0c
	if (!ctx.cr6.eq) goto loc_82FC0D0C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bne 0x82fc0d0c
	if (!ctx.cr0.eq) goto loc_82FC0D0C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lbz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC0D04;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC0D0C;
	__imp__KfLowerIrql(ctx, base);
loc_82FC0D0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC0D18"))) PPC_WEAK_FUNC(sub_82FC0D18);
PPC_FUNC_IMPL(__imp__sub_82FC0D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FC0D20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC0D34;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fc0d5c
	if (ctx.cr6.eq) goto loc_82FC0D5C;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82fc0d78
	if (ctx.cr6.eq) goto loc_82FC0D78;
loc_82FC0D5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC0D64;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// b 0x82fc0d7c
	goto loc_82FC0D7C;
loc_82FC0D78:
	// lbz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_82FC0D7C:
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r8,16(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fc0edc
	if (ctx.cr6.eq) goto loc_82FC0EDC;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r4,r9,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fc0edc
	if (ctx.cr6.eq) goto loc_82FC0EDC;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc0dd4
	if (ctx.cr6.eq) goto loc_82FC0DD4;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
loc_82FC0DD4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addic. r10,r7,1
	ctx.xer.ca = ctx.r7.u32 > 4294967294;
	ctx.r10.s64 = ctx.r7.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r10.u32);
	// bne 0x82fc0e18
	if (!ctx.cr0.eq) goto loc_82FC0E18;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r10.u32);
loc_82FC0E18:
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stb r29,117(r4)
	PPC_STORE_U8(ctx.r4.u32 + 117, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r29,118(r4)
	PPC_STORE_U8(ctx.r4.u32 + 118, ctx.r29.u8);
	// stb r29,119(r4)
	PPC_STORE_U8(ctx.r4.u32 + 119, ctx.r29.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 92);
	// twllei r10,0
	// divwu r8,r9,r10
	ctx.r8.u32 = ctx.r9.u32 / ctx.r10.u32;
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r7,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r7.u32);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r9,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r9.u32);
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r8,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r8.u32);
	// bl 0x82fc0540
	ctx.lr = 0x82FC0E80;
	sub_82FC0540(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc0ed0
	if (ctx.cr6.eq) goto loc_82FC0ED0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc0ed0
	if (!ctx.cr6.eq) goto loc_82FC0ED0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc0ed0
	if (!ctx.cr0.eq) goto loc_82FC0ED0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lbz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC0EC8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC0ED0;
	__imp__KfLowerIrql(ctx, base);
loc_82FC0ED0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82FC0EDC:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fc0f2c
	if (ctx.cr6.eq) goto loc_82FC0F2C;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82fc0f2c
	if (!ctx.cr6.eq) goto loc_82FC0F2C;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bne 0x82fc0f2c
	if (!ctx.cr0.eq) goto loc_82FC0F2C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC0F18;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC0F20;
	__imp__KfLowerIrql(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_82FC0F2C:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fc0f6c
	if (ctx.cr6.eq) goto loc_82FC0F6C;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82fc0f6c
	if (!ctx.cr6.eq) goto loc_82FC0F6C;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc0f6c
	if (!ctx.cr0.eq) goto loc_82FC0F6C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC0F64;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC0F6C;
	__imp__KfLowerIrql(ctx, base);
loc_82FC0F6C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC0F7C"))) PPC_WEAK_FUNC(sub_82FC0F7C);
PPC_FUNC_IMPL(__imp__sub_82FC0F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0F80"))) PPC_WEAK_FUNC(sub_82FC0F80);
PPC_FUNC_IMPL(__imp__sub_82FC0F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FC0F88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC0F98;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r28,r13
	ctx.r28.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc0fc0
	if (ctx.cr6.eq) goto loc_82FC0FC0;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fc0fdc
	if (ctx.cr6.eq) goto loc_82FC0FDC;
loc_82FC0FC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC0FC8;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
	// b 0x82fc0fe0
	goto loc_82FC0FE0;
loc_82FC0FDC:
	// lbz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_82FC0FE0:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82fc1064
	if (!ctx.cr6.eq) goto loc_82FC1064;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc100c
	if (ctx.cr6.eq) goto loc_82FC100C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x82fc1010
	goto loc_82FC1010;
loc_82FC100C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82FC1010:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82fc1064
	if (!ctx.cr6.eq) goto loc_82FC1064;
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc1058
	if (ctx.cr6.eq) goto loc_82FC1058;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fc1058
	if (!ctx.cr6.eq) goto loc_82FC1058;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc1058
	if (!ctx.cr0.eq) goto loc_82FC1058;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC1050;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC1058;
	__imp__KfLowerIrql(ctx, base);
loc_82FC1058:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82FC1064:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc1098
	if (ctx.cr6.eq) goto loc_82FC1098;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_82FC1098:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// li r5,48
	ctx.r5.s64 = 48;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,104
	ctx.r3.s64 = ctx.r30.s64 + 104;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82FC10CC;
	sub_82CB16F0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// stb r7,116(r29)
	PPC_STORE_U8(ctx.r29.u32 + 116, ctx.r7.u8);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,84(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC10F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc113c
	if (ctx.cr6.eq) goto loc_82FC113C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc113c
	if (!ctx.cr6.eq) goto loc_82FC113C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc113c
	if (!ctx.cr0.eq) goto loc_82FC113C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC1134;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC113C;
	__imp__KfLowerIrql(ctx, base);
loc_82FC113C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC1148"))) PPC_WEAK_FUNC(sub_82FC1148);
PPC_FUNC_IMPL(__imp__sub_82FC1148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FC1150;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addic. r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r7,r4,4
	ctx.r7.s64 = ctx.r4.s64 + 4;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// blt 0x82fc11bc
	if (ctx.cr0.lt) goto loc_82FC11BC;
loc_82FC1170:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82fc11cc
	if (ctx.cr6.eq) goto loc_82FC11CC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fc11a8
	if (ctx.cr6.lt) goto loc_82FC11A8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fc11cc
	if (ctx.cr6.lt) goto loc_82FC11CC;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82fc11b0
	if (!ctx.cr6.lt) goto loc_82FC11B0;
loc_82FC11A8:
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// b 0x82fc11b4
	goto loc_82FC11B4;
loc_82FC11B0:
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
loc_82FC11B4:
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82fc1170
	if (!ctx.cr6.gt) goto loc_82FC1170;
loc_82FC11BC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82FC11CC:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// subf r29,r10,r3
	ctx.r29.s64 = ctx.r3.s64 - ctx.r10.s64;
	// bgt cr6,0x82fc11bc
	if (ctx.cr6.gt) goto loc_82FC11BC;
	// rlwinm r11,r31,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 11) & 0xFFFFF800;
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwzx r3,r11,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// bl 0x82fba330
	ctx.lr = 0x82FC11F0;
	sub_82FBA330(ctx, base);
	// li r10,512
	ctx.r10.s64 = 512;
	// cmplwi cr6,r3,16384
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16384, ctx.xer);
	// bge cr6,0x82fc11bc
	if (!ctx.cr6.lt) goto loc_82FC11BC;
loc_82FC11FC:
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fc125c
	if (ctx.cr6.lt) goto loc_82FC125C;
	// rlwinm r11,r3,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r3,29
	ctx.r9.u64 = ctx.r3.u32 & 0x7;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subfic r8,r9,17
	ctx.xer.ca = ctx.r9.u32 <= 17;
	ctx.r8.s64 = 17 - ctx.r9.s64;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// srw r5,r6,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r11,r5,17
	ctx.r11.u64 = ctx.r5.u32 & 0x7FFF;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r3,16384
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16384, ctx.xer);
	// blt cr6,0x82fc11fc
	if (ctx.cr6.lt) goto loc_82FC11FC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82FC125C:
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// rlwinm r11,r31,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0xFFFFC000;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r10.u16);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC1280"))) PPC_WEAK_FUNC(sub_82FC1280);
PPC_FUNC_IMPL(__imp__sub_82FC1280) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm r11,r5,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 11) & 0xFFFFF800;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r5,r5,14,0,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r6,r6,23,9,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 23) & 0x7FFFFF;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FC12A4:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82fc12f0
	if (!ctx.cr6.lt) goto loc_82FC12F0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82fc12b8
	if (ctx.cr6.eq) goto loc_82FC12B8;
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
loc_82FC12B8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r9,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fc12fc
	if (ctx.cr6.lt) goto loc_82FC12FC;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// rlwinm r11,r9,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// ble cr6,0x82fc12a4
	if (!ctx.cr6.gt) goto loc_82FC12A4;
loc_82FC12F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82FC12FC:
	// rlwinm r11,r9,21,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x7FFF;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// beq cr6,0x82fc133c
	if (ctx.cr6.eq) goto loc_82FC133C;
	// subf r9,r8,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r8.s64;
loc_82FC1310:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82fc131c
	if (ctx.cr6.eq) goto loc_82FC131C;
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
loc_82FC131C:
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// slw r3,r4,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r8,r3,15,17,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x7FFF;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bne 0x82fc1310
	if (!ctx.cr0.eq) goto loc_82FC1310;
loc_82FC133C:
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1348"))) PPC_WEAK_FUNC(sub_82FC1348);
PPC_FUNC_IMPL(__imp__sub_82FC1348) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 11) & 0xFFFFF800;
	// add r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r5,14,0,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82fc13ac
	if (!ctx.cr6.lt) goto loc_82FC13AC;
loc_82FC137C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82fc137c
	if (ctx.cr6.lt) goto loc_82FC137C;
loc_82FC13AC:
	// rlwinm r11,r7,0,0,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFC000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fc13c0
	if (!ctx.cr6.eq) goto loc_82FC13C0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_82FC13C0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// rlwinm r11,r11,21,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7FFF;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// ble cr6,0x82fc13fc
	if (!ctx.cr6.gt) goto loc_82FC13FC;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82FC13DC:
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r5,r7,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// slw r4,r5,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r7,r4,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0x7FFF;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bne 0x82fc13dc
	if (!ctx.cr0.eq) goto loc_82FC13DC;
loc_82FC13FC:
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1404"))) PPC_WEAK_FUNC(sub_82FC1404);
PPC_FUNC_IMPL(__imp__sub_82FC1404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1408"))) PPC_WEAK_FUNC(sub_82FC1408);
PPC_FUNC_IMPL(__imp__sub_82FC1408) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,15808
	ctx.r8.s64 = ctx.r11.s64 + 15808;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r7,r10,15768
	ctx.r7.s64 = ctx.r10.s64 + 15768;
	// addi r6,r9,15672
	ctx.r6.s64 = ctx.r9.s64 + 15672;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// beq cr6,0x82fc1460
	if (ctx.cr6.eq) goto loc_82FC1460;
	// bl 0x82fb9900
	ctx.lr = 0x82FC1458;
	sub_82FB9900(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
loc_82FC1460:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fb8788
	ctx.lr = 0x82FC1468;
	sub_82FB8788(ctx, base);
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

__attribute__((alias("__imp__sub_82FC1480"))) PPC_WEAK_FUNC(sub_82FC1480);
PPC_FUNC_IMPL(__imp__sub_82FC1480) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lbz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 292);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82fc14b4
	if (!ctx.cr6.eq) goto loc_82FC14B4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82fc14f8
	goto loc_82FC14F8;
loc_82FC14B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r11.u8);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x82fc14e8
	if (!ctx.cr6.gt) goto loc_82FC14E8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82fc14e8
	if (ctx.cr6.eq) goto loc_82FC14E8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x82cb1160
	ctx.lr = 0x82FC14DC;
	sub_82CB1160(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82FC14E8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// ori r5,r11,48
	ctx.r5.u64 = ctx.r11.u64 | 48;
	// bl 0x82fc0a60
	ctx.lr = 0x82FC14F8;
	sub_82FC0A60(ctx, base);
loc_82FC14F8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82FC1510"))) PPC_WEAK_FUNC(sub_82FC1510);
PPC_FUNC_IMPL(__imp__sub_82FC1510) {
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
	// lbz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 292);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82fc1540
	if (!ctx.cr6.eq) goto loc_82FC1540;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82FC1540:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r11,292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 292, ctx.r11.u8);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x82fc158c
	if (!ctx.cr6.gt) goto loc_82FC158C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82fc158c
	if (ctx.cr6.eq) goto loc_82FC158C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82FC1570:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82fc1570
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FC1570;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
loc_82FC158C:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc15b0
	if (ctx.cr6.eq) goto loc_82FC15B0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82fc15a4
	if (!ctx.cr6.eq) goto loc_82FC15A4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82FC15A4:
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
loc_82FC15B0:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// ori r5,r11,16
	ctx.r5.u64 = ctx.r11.u64 | 16;
	// bl 0x82fc0d18
	ctx.lr = 0x82FC15C0;
	sub_82FC0D18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC15D0"))) PPC_WEAK_FUNC(sub_82FC15D0);
PPC_FUNC_IMPL(__imp__sub_82FC15D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FC15D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc1664
	if (ctx.cr6.eq) goto loc_82FC1664;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FC15F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x82fba110
	ctx.lr = 0x82FC1604;
	sub_82FBA110(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fc1614
	if (ctx.cr6.eq) goto loc_82FC1614;
	// lis r29,-32764
	ctx.r29.s64 = -2147221504;
	// ori r29,r29,2
	ctx.r29.u64 = ctx.r29.u64 | 2;
loc_82FC1614:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x82fba0d0
	ctx.lr = 0x82FC1620;
	sub_82FBA0D0(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fc164c
	if (ctx.cr6.eq) goto loc_82FC164C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r29,-32764
	ctx.r29.s64 = -2147221504;
	// ori r29,r29,3
	ctx.r29.u64 = ctx.r29.u64 | 3;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,13,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82FC164C:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lbz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fc15f8
	if (ctx.cr6.lt) goto loc_82FC15F8;
loc_82FC1664:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb8e18
	ctx.lr = 0x82FC1674;
	sub_82FB8E18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC167C"))) PPC_WEAK_FUNC(sub_82FC167C);
PPC_FUNC_IMPL(__imp__sub_82FC167C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1680"))) PPC_WEAK_FUNC(sub_82FC1680);
PPC_FUNC_IMPL(__imp__sub_82FC1680) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 56);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FC1698:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lbzx r10,r6,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// blt cr6,0x82fc1698
	if (ctx.cr6.lt) goto loc_82FC1698;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC16BC"))) PPC_WEAK_FUNC(sub_82FC16BC);
PPC_FUNC_IMPL(__imp__sub_82FC16BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC16C0"))) PPC_WEAK_FUNC(sub_82FC16C0);
PPC_FUNC_IMPL(__imp__sub_82FC16C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc1510
	sub_82FC1510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC16C8"))) PPC_WEAK_FUNC(sub_82FC16C8);
PPC_FUNC_IMPL(__imp__sub_82FC16C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc1480
	sub_82FC1480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC16D0"))) PPC_WEAK_FUNC(sub_82FC16D0);
PPC_FUNC_IMPL(__imp__sub_82FC16D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fc1c40
	sub_82FC1C40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC16D8"))) PPC_WEAK_FUNC(sub_82FC16D8);
PPC_FUNC_IMPL(__imp__sub_82FC16D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc1c40
	sub_82FC1C40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC16E0"))) PPC_WEAK_FUNC(sub_82FC16E0);
PPC_FUNC_IMPL(__imp__sub_82FC16E0) {
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
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82FC1700;
	sub_82CB16F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82FC1720"))) PPC_WEAK_FUNC(sub_82FC1720);
PPC_FUNC_IMPL(__imp__sub_82FC1720) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC172C"))) PPC_WEAK_FUNC(sub_82FC172C);
PPC_FUNC_IMPL(__imp__sub_82FC172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1730"))) PPC_WEAK_FUNC(sub_82FC1730);
PPC_FUNC_IMPL(__imp__sub_82FC1730) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// bge cr6,0x82fc1748
	if (!ctx.cr6.lt) goto loc_82FC1748;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// blr 
	return;
loc_82FC1748:
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1750"))) PPC_WEAK_FUNC(sub_82FC1750);
PPC_FUNC_IMPL(__imp__sub_82FC1750) {
	PPC_FUNC_PROLOGUE();
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// bge cr6,0x82fc1768
	if (!ctx.cr6.lt) goto loc_82FC1768;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// blr 
	return;
loc_82FC1768:
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1770"))) PPC_WEAK_FUNC(sub_82FC1770);
PPC_FUNC_IMPL(__imp__sub_82FC1770) {
	PPC_FUNC_PROLOGUE();
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r9,16
	ctx.r9.s64 = 16;
	// stb r4,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r4.u8);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stb r6,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r6.u8);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.f10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC17AC"))) PPC_WEAK_FUNC(sub_82FC17AC);
PPC_FUNC_IMPL(__imp__sub_82FC17AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC17B0"))) PPC_WEAK_FUNC(sub_82FC17B0);
PPC_FUNC_IMPL(__imp__sub_82FC17B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC17C4"))) PPC_WEAK_FUNC(sub_82FC17C4);
PPC_FUNC_IMPL(__imp__sub_82FC17C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC17C8"))) PPC_WEAK_FUNC(sub_82FC17C8);
PPC_FUNC_IMPL(__imp__sub_82FC17C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC17D0"))) PPC_WEAK_FUNC(sub_82FC17D0);
PPC_FUNC_IMPL(__imp__sub_82FC17D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC17D8"))) PPC_WEAK_FUNC(sub_82FC17D8);
PPC_FUNC_IMPL(__imp__sub_82FC17D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC17E4"))) PPC_WEAK_FUNC(sub_82FC17E4);
PPC_FUNC_IMPL(__imp__sub_82FC17E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC17E8"))) PPC_WEAK_FUNC(sub_82FC17E8);
PPC_FUNC_IMPL(__imp__sub_82FC17E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82FC17F8:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82fc17f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FC17F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1814"))) PPC_WEAK_FUNC(sub_82FC1814);
PPC_FUNC_IMPL(__imp__sub_82FC1814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1818"))) PPC_WEAK_FUNC(sub_82FC1818);
PPC_FUNC_IMPL(__imp__sub_82FC1818) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1828"))) PPC_WEAK_FUNC(sub_82FC1828);
PPC_FUNC_IMPL(__imp__sub_82FC1828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FC1830;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lbz r31,13(r28)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r28.u32 + 13);
	// subf. r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fc1854
	if (!ctx.cr0.eq) goto loc_82FC1854;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82FC1854:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fc1884
	if (ctx.cr6.eq) goto loc_82FC1884;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_82FC1864:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82FC1878;
	sub_82CB16F0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,1024
	ctx.r30.s64 = ctx.r30.s64 + 1024;
	// bne 0x82fc1864
	if (!ctx.cr0.eq) goto loc_82FC1864;
loc_82FC1884:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC1890"))) PPC_WEAK_FUNC(sub_82FC1890);
PPC_FUNC_IMPL(__imp__sub_82FC1890) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mulli r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 * 120;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC189C"))) PPC_WEAK_FUNC(sub_82FC189C);
PPC_FUNC_IMPL(__imp__sub_82FC189C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC18A0"))) PPC_WEAK_FUNC(sub_82FC18A0);
PPC_FUNC_IMPL(__imp__sub_82FC18A0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mulli r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 * 120;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC18AC"))) PPC_WEAK_FUNC(sub_82FC18AC);
PPC_FUNC_IMPL(__imp__sub_82FC18AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC18B0"))) PPC_WEAK_FUNC(sub_82FC18B0);
PPC_FUNC_IMPL(__imp__sub_82FC18B0) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,158(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 158);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC18B8"))) PPC_WEAK_FUNC(sub_82FC18B8);
PPC_FUNC_IMPL(__imp__sub_82FC18B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,158(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 158);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r9,158(r3)
	PPC_STORE_U16(ctx.r3.u32 + 158, ctx.r9.u16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fc18e4
	if (ctx.cr6.eq) goto loc_82FC18E4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,15568(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15568);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
loc_82FC18E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC18F0"))) PPC_WEAK_FUNC(sub_82FC18F0);
PPC_FUNC_IMPL(__imp__sub_82FC18F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// mulli r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 * 120;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC18FC"))) PPC_WEAK_FUNC(sub_82FC18FC);
PPC_FUNC_IMPL(__imp__sub_82FC18FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1900"))) PPC_WEAK_FUNC(sub_82FC1900);
PPC_FUNC_IMPL(__imp__sub_82FC1900) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FC191C"))) PPC_WEAK_FUNC(sub_82FC191C);
PPC_FUNC_IMPL(__imp__sub_82FC191C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1920"))) PPC_WEAK_FUNC(sub_82FC1920);
PPC_FUNC_IMPL(__imp__sub_82FC1920) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1924"))) PPC_WEAK_FUNC(sub_82FC1924);
PPC_FUNC_IMPL(__imp__sub_82FC1924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1928"))) PPC_WEAK_FUNC(sub_82FC1928);
PPC_FUNC_IMPL(__imp__sub_82FC1928) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FC1944"))) PPC_WEAK_FUNC(sub_82FC1944);
PPC_FUNC_IMPL(__imp__sub_82FC1944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1948"))) PPC_WEAK_FUNC(sub_82FC1948);
PPC_FUNC_IMPL(__imp__sub_82FC1948) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mulli r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 * 120;
	// mulli r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 * 88;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1960"))) PPC_WEAK_FUNC(sub_82FC1960);
PPC_FUNC_IMPL(__imp__sub_82FC1960) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1978"))) PPC_WEAK_FUNC(sub_82FC1978);
PPC_FUNC_IMPL(__imp__sub_82FC1978) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addic. r3,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r3.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// bne 0x82fc19b0
	if (!ctx.cr0.eq) goto loc_82FC19B0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82FC19AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FC19B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC19C0"))) PPC_WEAK_FUNC(sub_82FC19C0);
PPC_FUNC_IMPL(__imp__sub_82FC19C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// lhz r11,15564(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 15564);
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC19DC"))) PPC_WEAK_FUNC(sub_82FC19DC);
PPC_FUNC_IMPL(__imp__sub_82FC19DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC19E0"))) PPC_WEAK_FUNC(sub_82FC19E0);
PPC_FUNC_IMPL(__imp__sub_82FC19E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC19F0"))) PPC_WEAK_FUNC(sub_82FC19F0);
PPC_FUNC_IMPL(__imp__sub_82FC19F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 172);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1A00"))) PPC_WEAK_FUNC(sub_82FC1A00);
PPC_FUNC_IMPL(__imp__sub_82FC1A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1A10"))) PPC_WEAK_FUNC(sub_82FC1A10);
PPC_FUNC_IMPL(__imp__sub_82FC1A10) {
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
	// lfs f1,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82cb4db8
	ctx.lr = 0x82FC1A2C;
	sub_82CB4DB8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,20848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20848);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_82FC1A58"))) PPC_WEAK_FUNC(sub_82FC1A58);
PPC_FUNC_IMPL(__imp__sub_82FC1A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1A68"))) PPC_WEAK_FUNC(sub_82FC1A68);
PPC_FUNC_IMPL(__imp__sub_82FC1A68) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC1A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fc1aa8
	if (ctx.cr6.lt) goto loc_82FC1AA8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82FC1AA8:
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

__attribute__((alias("__imp__sub_82FC1ABC"))) PPC_WEAK_FUNC(sub_82FC1ABC);
PPC_FUNC_IMPL(__imp__sub_82FC1ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1AC0"))) PPC_WEAK_FUNC(sub_82FC1AC0);
PPC_FUNC_IMPL(__imp__sub_82FC1AC0) {
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
	// lbz r11,198(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 198);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82fc1afc
	if (ctx.cr6.eq) goto loc_82FC1AFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// bgt cr6,0x82fc1af8
	if (ctx.cr6.gt) goto loc_82FC1AF8;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
loc_82FC1AF8:
	// stb r11,198(r3)
	PPC_STORE_U8(ctx.r3.u32 + 198, ctx.r11.u8);
loc_82FC1AFC:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC1B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fc1b24
	if (ctx.cr6.lt) goto loc_82FC1B24;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
loc_82FC1B24:
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

__attribute__((alias("__imp__sub_82FC1B38"))) PPC_WEAK_FUNC(sub_82FC1B38);
PPC_FUNC_IMPL(__imp__sub_82FC1B38) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC1B64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fc1b78
	if (ctx.cr6.lt) goto loc_82FC1B78;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82FC1B78:
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

__attribute__((alias("__imp__sub_82FC1B8C"))) PPC_WEAK_FUNC(sub_82FC1B8C);
PPC_FUNC_IMPL(__imp__sub_82FC1B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1B90"))) PPC_WEAK_FUNC(sub_82FC1B90);
PPC_FUNC_IMPL(__imp__sub_82FC1B90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1BA0"))) PPC_WEAK_FUNC(sub_82FC1BA0);
PPC_FUNC_IMPL(__imp__sub_82FC1BA0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc1bd8
	if (ctx.cr6.eq) goto loc_82FC1BD8;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82FC1BD8;
	sub_82CB1160(ctx, base);
loc_82FC1BD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82fc1bec
	if (ctx.cr6.eq) goto loc_82FC1BEC;
	// lbz r11,157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 157);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_82FC1BEC:
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

__attribute__((alias("__imp__sub_82FC1C04"))) PPC_WEAK_FUNC(sub_82FC1C04);
PPC_FUNC_IMPL(__imp__sub_82FC1C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1C08"))) PPC_WEAK_FUNC(sub_82FC1C08);
PPC_FUNC_IMPL(__imp__sub_82FC1C08) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1C14"))) PPC_WEAK_FUNC(sub_82FC1C14);
PPC_FUNC_IMPL(__imp__sub_82FC1C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1C18"))) PPC_WEAK_FUNC(sub_82FC1C18);
PPC_FUNC_IMPL(__imp__sub_82FC1C18) {
	PPC_FUNC_PROLOGUE();
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1C20"))) PPC_WEAK_FUNC(sub_82FC1C20);
PPC_FUNC_IMPL(__imp__sub_82FC1C20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82fb8188
	sub_82FB8188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC1C28"))) PPC_WEAK_FUNC(sub_82FC1C28);
PPC_FUNC_IMPL(__imp__sub_82FC1C28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82fb8280
	sub_82FB8280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC1C30"))) PPC_WEAK_FUNC(sub_82FC1C30);
PPC_FUNC_IMPL(__imp__sub_82FC1C30) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,108(r3)
	PPC_STORE_U16(ctx.r3.u32 + 108, ctx.r11.u16);
	// sth r11,110(r3)
	PPC_STORE_U16(ctx.r3.u32 + 110, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1C40"))) PPC_WEAK_FUNC(sub_82FC1C40);
PPC_FUNC_IMPL(__imp__sub_82FC1C40) {
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
	// bl 0x82fc1408
	ctx.lr = 0x82FC1C58;
	sub_82FC1408(ctx, base);
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

__attribute__((alias("__imp__sub_82FC1C70"))) PPC_WEAK_FUNC(sub_82FC1C70);
PPC_FUNC_IMPL(__imp__sub_82FC1C70) {
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
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82FC1C90;
	sub_82CB16F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82FC1CB0"))) PPC_WEAK_FUNC(sub_82FC1CB0);
PPC_FUNC_IMPL(__imp__sub_82FC1CB0) {
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
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82fc08b8
	ctx.lr = 0x82FC1CCC;
	sub_82FC08B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fc1ce0
	if (ctx.cr6.lt) goto loc_82FC1CE0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r11.u16);
	// sth r11,110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 110, ctx.r11.u16);
loc_82FC1CE0:
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

__attribute__((alias("__imp__sub_82FC1CF4"))) PPC_WEAK_FUNC(sub_82FC1CF4);
PPC_FUNC_IMPL(__imp__sub_82FC1CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1CF8"))) PPC_WEAK_FUNC(sub_82FC1CF8);
PPC_FUNC_IMPL(__imp__sub_82FC1CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FC1D00;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC1D14;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc1d3c
	if (ctx.cr6.eq) goto loc_82FC1D3C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc1d50
	if (ctx.cr6.eq) goto loc_82FC1D50;
loc_82FC1D3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC1D44;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC1D50:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stfs f31,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// lbz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc1d94
	if (ctx.cr6.eq) goto loc_82FC1D94;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FC1D6C:
	// lwz r9,200(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// mulli r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 * 88;
	// lfs f0,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lbz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fc1d6c
	if (ctx.cr6.lt) goto loc_82FC1D6C;
loc_82FC1D94:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc1de0
	if (ctx.cr6.eq) goto loc_82FC1DE0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc1de0
	if (!ctx.cr6.eq) goto loc_82FC1DE0;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc1de0
	if (!ctx.cr0.eq) goto loc_82FC1DE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC1DD8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC1DE0;
	__imp__KfLowerIrql(ctx, base);
loc_82FC1DE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC1DF0"))) PPC_WEAK_FUNC(sub_82FC1DF0);
PPC_FUNC_IMPL(__imp__sub_82FC1DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FC1DF8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC1E0C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,20216
	ctx.r30.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc1e34
	if (ctx.cr6.eq) goto loc_82FC1E34;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc1e48
	if (ctx.cr6.eq) goto loc_82FC1E48;
loc_82FC1E34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC1E3C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stb r28,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r28.u8);
loc_82FC1E48:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lfd f1,-18376(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18376);
	// bl 0x82cb59b0
	ctx.lr = 0x82FC1E60;
	sub_82CB59B0(ctx, base);
	// lbz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fc1eec
	if (ctx.cr6.eq) goto loc_82FC1EEC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82FC1E80:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mulli r11,r10,88
	ctx.r11.s64 = ctx.r10.s64 * 88;
	// lwz r3,60(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lbzx r5,r9,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stb r8,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r8.u8);
	// ori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 | 1;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// stb r5,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r5.u8);
	// stw r3,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r3.u32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.f9.u32);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fc1e80
	if (ctx.cr6.lt) goto loc_82FC1E80;
loc_82FC1EEC:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc1f38
	if (ctx.cr6.eq) goto loc_82FC1F38;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc1f38
	if (!ctx.cr6.eq) goto loc_82FC1F38;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bne 0x82fc1f38
	if (!ctx.cr0.eq) goto loc_82FC1F38;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC1F30;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC1F38;
	__imp__KfLowerIrql(ctx, base);
loc_82FC1F38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC1F48"))) PPC_WEAK_FUNC(sub_82FC1F48);
PPC_FUNC_IMPL(__imp__sub_82FC1F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FC1F50;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC1F64;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,20216
	ctx.r30.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc1f8c
	if (ctx.cr6.eq) goto loc_82FC1F8C;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc1fa0
	if (ctx.cr6.eq) goto loc_82FC1FA0;
loc_82FC1F8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC1F94;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stb r28,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r28.u8);
loc_82FC1FA0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stfs f31,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc2030
	if (ctx.cr6.eq) goto loc_82FC2030;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82FC1FC4:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mulli r11,r10,88
	ctx.r11.s64 = ctx.r10.s64 * 88;
	// lwz r3,60(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lbzx r5,r9,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stb r8,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r8.u8);
	// ori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 | 1;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// stb r5,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r5.u8);
	// stw r3,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r3.u32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.f9.u32);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fc1fc4
	if (ctx.cr6.lt) goto loc_82FC1FC4;
loc_82FC2030:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc207c
	if (ctx.cr6.eq) goto loc_82FC207C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc207c
	if (!ctx.cr6.eq) goto loc_82FC207C;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bne 0x82fc207c
	if (!ctx.cr0.eq) goto loc_82FC207C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC2074;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC207C;
	__imp__KfLowerIrql(ctx, base);
loc_82FC207C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC208C"))) PPC_WEAK_FUNC(sub_82FC208C);
PPC_FUNC_IMPL(__imp__sub_82FC208C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC2090"))) PPC_WEAK_FUNC(sub_82FC2090);
PPC_FUNC_IMPL(__imp__sub_82FC2090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82FC2098;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC20AC;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r25,r11,20216
	ctx.r25.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc20d4
	if (ctx.cr6.eq) goto loc_82FC20D4;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc20e8
	if (ctx.cr6.eq) goto loc_82FC20E8;
loc_82FC20D4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC20DC;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r30,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r30.u32);
	// stb r29,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r29.u8);
loc_82FC20E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fb9160
	ctx.lr = 0x82FC20FC;
	sub_82FB9160(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82fc2160
	if (ctx.cr6.lt) goto loc_82FC2160;
	// lbz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82fc2140
	if (ctx.cr6.eq) goto loc_82FC2140;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82FC2120:
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lbzx r9,r6,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x82fc2120
	if (ctx.cr6.lt) goto loc_82FC2120;
loc_82FC2140:
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fb9550
	ctx.lr = 0x82FC2154;
	sub_82FB9550(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82fc21bc
	if (!ctx.cr6.lt) goto loc_82FC21BC;
loc_82FC2160:
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc21ac
	if (ctx.cr6.eq) goto loc_82FC21AC;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc21ac
	if (!ctx.cr6.eq) goto loc_82FC21AC;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne 0x82fc21ac
	if (!ctx.cr0.eq) goto loc_82FC21AC;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lbz r31,12(r25)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r25.u32 + 12);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r11,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC21A4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC21AC;
	__imp__KfLowerIrql(ctx, base);
loc_82FC21AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82FC21BC:
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc221c
	if (ctx.cr6.eq) goto loc_82FC221C;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r7,256
	ctx.r7.s64 = 256;
loc_82FC21D4:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mulli r8,r10,88
	ctx.r8.s64 = ctx.r10.s64 * 88;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r24,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r24.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// lbzx r11,r5,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r31.u32);
	// rotlwi r11,r11,10
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 10);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// blt cr6,0x82fc21d4
	if (ctx.cr6.lt) goto loc_82FC21D4;
loc_82FC221C:
	// lbz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc23b4
	if (ctx.cr6.eq) goto loc_82FC23B4;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fc23b4
	if (!ctx.cr6.eq) goto loc_82FC23B4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f31,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82fc22d8
	if (ctx.cr6.eq) goto loc_82FC22D8;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc22bc
	if (ctx.cr6.eq) goto loc_82FC22BC;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_82FC225C:
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mulli r11,r8,88
	ctx.r11.s64 = ctx.r8.s64 * 88;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 + 52;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82FC2298:
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82fc2298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FC2298;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stfs f31,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lbz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fc225c
	if (ctx.cr6.lt) goto loc_82FC225C;
loc_82FC22BC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC22D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC22D8:
	// lbz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc2358
	if (ctx.cr6.eq) goto loc_82FC2358;
	// lhz r10,174(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 174);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// lfs f13,40(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// sth r7,174(r31)
	PPC_STORE_U16(ctx.r31.u32 + 174, ctx.r7.u16);
	// beq cr6,0x82fc2320
	if (ctx.cr6.eq) goto loc_82FC2320;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,15568(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15568);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82fc2324
	goto loc_82FC2324;
loc_82FC2320:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82FC2324:
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc2358
	if (ctx.cr6.eq) goto loc_82FC2358;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82FC2334:
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mulli r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 * 88;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stfs f0,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lbz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82fc2334
	if (ctx.cr6.lt) goto loc_82FC2334;
loc_82FC2358:
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc23a4
	if (ctx.cr6.eq) goto loc_82FC23A4;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc23a4
	if (!ctx.cr6.eq) goto loc_82FC23A4;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne 0x82fc23a4
	if (!ctx.cr0.eq) goto loc_82FC23A4;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lbz r31,12(r25)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r25.u32 + 12);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r11,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC239C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC23A4;
	__imp__KfLowerIrql(ctx, base);
loc_82FC23A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
loc_82FC23B4:
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc2428
	if (ctx.cr6.eq) goto loc_82FC2428;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_82FC23C4:
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mulli r11,r26,88
	ctx.r11.s64 = ctx.r26.s64 * 88;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lbz r30,13(r28)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r28.u32 + 13);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc2410
	if (ctx.cr6.eq) goto loc_82FC2410;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fc2410
	if (ctx.cr6.eq) goto loc_82FC2410;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82FC23F0:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82FC2404;
	sub_82CB16F0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,1024
	ctx.r29.s64 = ctx.r29.s64 + 1024;
	// bne 0x82fc23f0
	if (!ctx.cr0.eq) goto loc_82FC23F0;
loc_82FC2410:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fc23c4
	if (ctx.cr6.lt) goto loc_82FC23C4;
loc_82FC2428:
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc2474
	if (ctx.cr6.eq) goto loc_82FC2474;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc2474
	if (!ctx.cr6.eq) goto loc_82FC2474;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne 0x82fc2474
	if (!ctx.cr0.eq) goto loc_82FC2474;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lbz r31,12(r25)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r25.u32 + 12);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r11,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r11.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC246C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC2474;
	__imp__KfLowerIrql(ctx, base);
loc_82FC2474:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2484"))) PPC_WEAK_FUNC(sub_82FC2484);
PPC_FUNC_IMPL(__imp__sub_82FC2484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC2488"))) PPC_WEAK_FUNC(sub_82FC2488);
PPC_FUNC_IMPL(__imp__sub_82FC2488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82FC2490;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lbz r3,56(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 56);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// rlwinm r12,r8,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82cb8074
	ctx.lr = 0x82FC24B8;
	sub_82CB8074(ctx, base);
	// lwz r7,0(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwux r7,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82fc2638
	if (ctx.cr6.eq) goto loc_82FC2638;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r9,64
	ctx.r10.s64 = ctx.r9.s64 + 64;
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
	// addi r28,r9,276
	ctx.r28.s64 = ctx.r9.s64 + 276;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r25,16
	ctx.r25.s64 = 16;
	// ori r30,r11,48000
	ctx.r30.u64 = ctx.r11.u64 | 48000;
loc_82FC24F0:
	// lwz r6,-4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// li r26,3968
	ctx.r26.s64 = 3968;
	// lwz r11,204(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// rlwinm r6,r11,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// divwu r11,r6,r30
	ctx.r11.u32 = ctx.r6.u32 / ctx.r30.u32;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// sth r6,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r6.u16);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x82fc2520
	if (ctx.cr6.eq) goto loc_82FC2520;
	// li r26,1920
	ctx.r26.s64 = 1920;
loc_82FC2520:
	// lbz r29,1(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82fc2534
	if (!ctx.cr6.eq) goto loc_82FC2534;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82fc2598
	goto loc_82FC2598;
loc_82FC2534:
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r27,r11,7,0,24
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// and r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82fc255c
	if (ctx.cr6.eq) goto loc_82FC255C;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// slw r11,r24,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r6.u8 & 0x3F));
loc_82FC255C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82fc256c
	if (!ctx.cr6.lt) goto loc_82FC256C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82fc2578
	goto loc_82FC2578;
loc_82FC256C:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x82fc2578
	if (!ctx.cr6.gt) goto loc_82FC2578;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82FC2578:
	// rlwinm r6,r11,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// cmplwi cr6,r29,255
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 255, ctx.xer);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// beq cr6,0x82fc2590
	if (ctx.cr6.eq) goto loc_82FC2590;
	// rlwinm r29,r29,7,0,24
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0xFFFFFF80;
	// add r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 + ctx.r6.u64;
loc_82FC2590:
	// cmplw cr6,r6,r26
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x82fc259c
	if (!ctx.cr6.gt) goto loc_82FC259C;
loc_82FC2598:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_82FC259C:
	// lwz r29,-4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// stw r29,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r29.u32);
	// lbz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stb r11,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r11.u8);
	// stb r29,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r29.u8);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// lwz r11,200(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r11,264(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 264);
	// stw r11,84(r6)
	PPC_STORE_U32(ctx.r6.u32 + 84, ctx.r11.u32);
	// lfs f0,116(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,-4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// std r29,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r29.u64);
	// lfd f13,80(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// lwz r11,200(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stb r6,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r6.u8);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
	// stb r24,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r24.u8);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stw r29,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r29.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.f9.u32);
	// lwz r11,200(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
	// addi r7,r7,88
	ctx.r7.s64 = ctx.r7.s64 + 88;
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// stw r6,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r6.u32);
	// bne 0x82fc24f0
	if (!ctx.cr0.eq) goto loc_82FC24F0;
loc_82FC2638:
	// lbz r11,264(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 264);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc2650
	if (ctx.cr6.eq) goto loc_82FC2650;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_82FC2650:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r9,184
	ctx.r6.s64 = ctx.r9.s64 + 184;
	// bl 0x82fb9700
	ctx.lr = 0x82FC2660;
	sub_82FB9700(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2668"))) PPC_WEAK_FUNC(sub_82FC2668);
PPC_FUNC_IMPL(__imp__sub_82FC2668) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82fc26f4
	if (!ctx.cr6.eq) goto loc_82FC26F4;
	// lbz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x82fc26f4
	if (ctx.cr6.lt) goto loc_82FC26F4;
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// bgt cr6,0x82fc26f4
	if (ctx.cr6.gt) goto loc_82FC26F4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82fc26ec
	if (ctx.cr6.eq) goto loc_82FC26EC;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
loc_82FC269C:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82fc26f4
	if (ctx.cr6.lt) goto loc_82FC26F4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82fc26f4
	if (ctx.cr6.gt) goto loc_82FC26F4;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82fc26f4
	if (ctx.cr6.lt) goto loc_82FC26F4;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82fc26f4
	if (ctx.cr6.gt) goto loc_82FC26F4;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82fc269c
	if (ctx.cr6.lt) goto loc_82FC269C;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bgt cr6,0x82fc26f4
	if (ctx.cr6.gt) goto loc_82FC26F4;
loc_82FC26EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82FC26F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC26FC"))) PPC_WEAK_FUNC(sub_82FC26FC);
PPC_FUNC_IMPL(__imp__sub_82FC26FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC2700"))) PPC_WEAK_FUNC(sub_82FC2700);
PPC_FUNC_IMPL(__imp__sub_82FC2700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FC2708;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r29,296
	ctx.r31.s64 = ctx.r29.s64 + 296;
	// bl 0x833b8a44
	ctx.lr = 0x82FC2718;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc2738
	if (ctx.cr6.eq) goto loc_82FC2738;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc2748
	if (ctx.cr6.eq) goto loc_82FC2748;
loc_82FC2738:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC2740;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC2748:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fb9a28
	ctx.lr = 0x82FC275C;
	sub_82FB9A28(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82fc27a8
	if (ctx.cr6.eq) goto loc_82FC27A8;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fba6b0
	ctx.lr = 0x82FC2770;
	sub_82FBA6B0(ctx, base);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fba748
	ctx.lr = 0x82FC2778;
	sub_82FBA748(ctx, base);
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc27a8
	if (ctx.cr6.eq) goto loc_82FC27A8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82FC2788:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fba020
	ctx.lr = 0x82FC2794;
	sub_82FBA020(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lbz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fc2788
	if (ctx.cr6.lt) goto loc_82FC2788;
loc_82FC27A8:
	// stb r28,292(r29)
	PPC_STORE_U8(ctx.r29.u32 + 292, ctx.r28.u8);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc27f0
	if (ctx.cr6.eq) goto loc_82FC27F0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc27f0
	if (!ctx.cr6.eq) goto loc_82FC27F0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc27f0
	if (!ctx.cr0.eq) goto loc_82FC27F0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC27E8;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC27F0;
	__imp__KfLowerIrql(ctx, base);
loc_82FC27F0:
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x82fc02c0
	ctx.lr = 0x82FC27F8;
	sub_82FC02C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2800"))) PPC_WEAK_FUNC(sub_82FC2800);
PPC_FUNC_IMPL(__imp__sub_82FC2800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82FC2808;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r30,r29,296
	ctx.r30.s64 = ctx.r29.s64 + 296;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC2824;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r13
	ctx.r31.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc2844
	if (ctx.cr6.eq) goto loc_82FC2844;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc2854
	if (ctx.cr6.eq) goto loc_82FC2854;
loc_82FC2844:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC284C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stb r28,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r28.u8);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
loc_82FC2854:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fba810
	ctx.lr = 0x82FC2868;
	sub_82FBA810(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82fc2890
	if (!ctx.cr6.eq) goto loc_82FC2890;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fba6b0
	ctx.lr = 0x82FC287C;
	sub_82FBA6B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82fc2900
	if (ctx.cr6.lt) goto loc_82FC2900;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fba748
	ctx.lr = 0x82FC2890;
	sub_82FBA748(ctx, base);
loc_82FC2890:
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc28ec
	if (ctx.cr6.eq) goto loc_82FC28EC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82FC28A0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fba270
	ctx.lr = 0x82FC28B0;
	sub_82FBA270(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82fc28ec
	if (ctx.cr6.lt) goto loc_82FC28EC;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r7,r10,7,16,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFF80;
	// clrlwi r31,r9,24
	ctx.r31.u64 = ctx.r9.u32 & 0xFF;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// lbz r6,56(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82fc28a0
	if (ctx.cr6.lt) goto loc_82FC28A0;
loc_82FC28EC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82fc2900
	if (!ctx.cr6.eq) goto loc_82FC2900;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fba960
	ctx.lr = 0x82FC28FC;
	sub_82FBA960(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82FC2900:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc2944
	if (ctx.cr6.eq) goto loc_82FC2944;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc2944
	if (!ctx.cr6.eq) goto loc_82FC2944;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bne 0x82fc2944
	if (!ctx.cr0.eq) goto loc_82FC2944;
	// lbz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// stb r25,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r25.u8);
	// bl 0x833b8384
	ctx.lr = 0x82FC293C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC2944;
	__imp__KfLowerIrql(ctx, base);
loc_82FC2944:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2950"))) PPC_WEAK_FUNC(sub_82FC2950);
PPC_FUNC_IMPL(__imp__sub_82FC2950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FC2958;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lbz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 292);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82fc2980
	if (!ctx.cr6.eq) goto loc_82FC2980;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82FC2980:
	// addi r31,r29,296
	ctx.r31.s64 = ctx.r29.s64 + 296;
	// bl 0x833b8a44
	ctx.lr = 0x82FC2988;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc29a8
	if (ctx.cr6.eq) goto loc_82FC29A8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc29b8
	if (ctx.cr6.eq) goto loc_82FC29B8;
loc_82FC29A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC29B0;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82FC29B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r29,120
	ctx.r3.s64 = ctx.r29.s64 + 120;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82FC29D4;
	sub_82CB1160(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc2a1c
	if (ctx.cr6.eq) goto loc_82FC2A1C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc2a1c
	if (!ctx.cr6.eq) goto loc_82FC2A1C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc2a1c
	if (!ctx.cr0.eq) goto loc_82FC2A1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC2A14;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC2A1C;
	__imp__KfLowerIrql(ctx, base);
loc_82FC2A1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2A28"))) PPC_WEAK_FUNC(sub_82FC2A28);
PPC_FUNC_IMPL(__imp__sub_82FC2A28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc1a00
	sub_82FC1A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2A30"))) PPC_WEAK_FUNC(sub_82FC2A30);
PPC_FUNC_IMPL(__imp__sub_82FC2A30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fc1c20
	sub_82FC1C20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2A38"))) PPC_WEAK_FUNC(sub_82FC2A38);
PPC_FUNC_IMPL(__imp__sub_82FC2A38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc1f48
	sub_82FC1F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2A40"))) PPC_WEAK_FUNC(sub_82FC2A40);
PPC_FUNC_IMPL(__imp__sub_82FC2A40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc1a68
	sub_82FC1A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2A48"))) PPC_WEAK_FUNC(sub_82FC2A48);
PPC_FUNC_IMPL(__imp__sub_82FC2A48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fc1960
	sub_82FC1960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2A50"))) PPC_WEAK_FUNC(sub_82FC2A50);
PPC_FUNC_IMPL(__imp__sub_82FC2A50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc1a10
	sub_82FC1A10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2A58"))) PPC_WEAK_FUNC(sub_82FC2A58);
PPC_FUNC_IMPL(__imp__sub_82FC2A58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fc19e0
	sub_82FC19E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2A60"))) PPC_WEAK_FUNC(sub_82FC2A60);
PPC_FUNC_IMPL(__imp__sub_82FC2A60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc1cb0
	sub_82FC1CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2A68"))) PPC_WEAK_FUNC(sub_82FC2A68);
PPC_FUNC_IMPL(__imp__sub_82FC2A68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc1b38
	sub_82FC1B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2A70"))) PPC_WEAK_FUNC(sub_82FC2A70);
PPC_FUNC_IMPL(__imp__sub_82FC2A70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fc19c0
	sub_82FC19C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2A78"))) PPC_WEAK_FUNC(sub_82FC2A78);
PPC_FUNC_IMPL(__imp__sub_82FC2A78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc1a58
	sub_82FC1A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2A80"))) PPC_WEAK_FUNC(sub_82FC2A80);
PPC_FUNC_IMPL(__imp__sub_82FC2A80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc19f0
	sub_82FC19F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2A88"))) PPC_WEAK_FUNC(sub_82FC2A88);
PPC_FUNC_IMPL(__imp__sub_82FC2A88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc1cf8
	sub_82FC1CF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2A90"))) PPC_WEAK_FUNC(sub_82FC2A90);
PPC_FUNC_IMPL(__imp__sub_82FC2A90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fc1c28
	sub_82FC1C28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2A98"))) PPC_WEAK_FUNC(sub_82FC2A98);
PPC_FUNC_IMPL(__imp__sub_82FC2A98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc2700
	sub_82FC2700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2AA0"))) PPC_WEAK_FUNC(sub_82FC2AA0);
PPC_FUNC_IMPL(__imp__sub_82FC2AA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc1ba0
	sub_82FC1BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2AA8"))) PPC_WEAK_FUNC(sub_82FC2AA8);
PPC_FUNC_IMPL(__imp__sub_82FC2AA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc1ac0
	sub_82FC1AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2AB0"))) PPC_WEAK_FUNC(sub_82FC2AB0);
PPC_FUNC_IMPL(__imp__sub_82FC2AB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82fc1978
	sub_82FC1978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2AB8"))) PPC_WEAK_FUNC(sub_82FC2AB8);
PPC_FUNC_IMPL(__imp__sub_82FC2AB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc1df0
	sub_82FC1DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2AC0"))) PPC_WEAK_FUNC(sub_82FC2AC0);
PPC_FUNC_IMPL(__imp__sub_82FC2AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FC2AC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lbz r31,13(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 13);
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fc2af0
	if (!ctx.cr0.eq) goto loc_82FC2AF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82FC2AF0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fc2b20
	if (ctx.cr6.eq) goto loc_82FC2B20;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82FC2B00:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82FC2B14;
	sub_82CB16F0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,1024
	ctx.r30.s64 = ctx.r30.s64 + 1024;
	// bne 0x82fc2b00
	if (!ctx.cr0.eq) goto loc_82FC2B00;
loc_82FC2B20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2B2C"))) PPC_WEAK_FUNC(sub_82FC2B2C);
PPC_FUNC_IMPL(__imp__sub_82FC2B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC2B30"))) PPC_WEAK_FUNC(sub_82FC2B30);
PPC_FUNC_IMPL(__imp__sub_82FC2B30) {
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
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc2b6c
	if (ctx.cr6.eq) goto loc_82FC2B6C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,36(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC2B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC2B6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC2B7C"))) PPC_WEAK_FUNC(sub_82FC2B7C);
PPC_FUNC_IMPL(__imp__sub_82FC2B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC2B80"))) PPC_WEAK_FUNC(sub_82FC2B80);
PPC_FUNC_IMPL(__imp__sub_82FC2B80) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mulli r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 * 120;
	// mulli r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 * 88;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,312
	ctx.r3.s64 = ctx.r11.s64 + 312;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC2B9C"))) PPC_WEAK_FUNC(sub_82FC2B9C);
PPC_FUNC_IMPL(__imp__sub_82FC2B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC2BA0"))) PPC_WEAK_FUNC(sub_82FC2BA0);
PPC_FUNC_IMPL(__imp__sub_82FC2BA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82fc2700
	sub_82FC2700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2BA4"))) PPC_WEAK_FUNC(sub_82FC2BA4);
PPC_FUNC_IMPL(__imp__sub_82FC2BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC2BA8"))) PPC_WEAK_FUNC(sub_82FC2BA8);
PPC_FUNC_IMPL(__imp__sub_82FC2BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82FC2BB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// bl 0x833b8a44
	ctx.lr = 0x82FC2BBC;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc2be4
	if (ctx.cr6.eq) goto loc_82FC2BE4;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fc2bfc
	if (ctx.cr6.eq) goto loc_82FC2BFC;
loc_82FC2BE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC2BEC;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82FC2BFC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82fc2c48
	if (ctx.cr6.eq) goto loc_82FC2C48;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fc2c48
	if (ctx.cr6.eq) goto loc_82FC2C48;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC2C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FC2C48:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc2c8c
	if (ctx.cr6.eq) goto loc_82FC2C8C;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fc2c8c
	if (!ctx.cr6.eq) goto loc_82FC2C8C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc2c8c
	if (!ctx.cr0.eq) goto loc_82FC2C8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC2C84;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC2C8C;
	__imp__KfLowerIrql(ctx, base);
loc_82FC2C8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC2C98"))) PPC_WEAK_FUNC(sub_82FC2C98);
PPC_FUNC_IMPL(__imp__sub_82FC2C98) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// mulli r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 * 120;
	// mulli r11,r9,88
	ctx.r11.s64 = ctx.r9.s64 * 88;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,312
	ctx.r8.s64 = ctx.r11.s64 + 312;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC2CC0"))) PPC_WEAK_FUNC(sub_82FC2CC0);
PPC_FUNC_IMPL(__imp__sub_82FC2CC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC2CC4"))) PPC_WEAK_FUNC(sub_82FC2CC4);
PPC_FUNC_IMPL(__imp__sub_82FC2CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC2CC8"))) PPC_WEAK_FUNC(sub_82FC2CC8);
PPC_FUNC_IMPL(__imp__sub_82FC2CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82FC2CD0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x833b8a44
	ctx.lr = 0x82FC2CE4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r11,20216
	ctx.r28.s64 = ctx.r11.s64 + 20216;
	// mr r31,r13
	ctx.r31.u64 = ctx.r13.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc2d0c
	if (ctx.cr6.eq) goto loc_82FC2D0C;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc2d20
	if (ctx.cr6.eq) goto loc_82FC2D20;
loc_82FC2D0C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC2D14;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// stb r30,12(r28)
	PPC_STORE_U8(ctx.r28.u32 + 12, ctx.r30.u8);
loc_82FC2D20:
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r7,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r7.u32);
	// lbz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc2d68
	if (ctx.cr6.eq) goto loc_82FC2D68;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82FC2D3C:
	// lwz r10,200(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 200);
	// mulli r9,r11,88
	ctx.r9.s64 = ctx.r11.s64 * 88;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfs f0,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lbz r10,56(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fc2d3c
	if (ctx.cr6.lt) goto loc_82FC2D3C;
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_82FC2D68:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82fc2e44
	if (ctx.cr6.eq) goto loc_82FC2E44;
	// lbz r11,172(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 172);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fc2e14
	if (!ctx.cr6.eq) goto loc_82FC2E14;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// addi r9,r25,20
	ctx.r9.s64 = ctx.r25.s64 + 20;
loc_82FC2D8C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc2da0
	if (ctx.cr6.eq) goto loc_82FC2DA0;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82fc2da4
	goto loc_82FC2DA4;
loc_82FC2DA0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82FC2DA4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc2dbc
	if (ctx.cr6.eq) goto loc_82FC2DBC;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82fc2dc0
	goto loc_82FC2DC0;
loc_82FC2DBC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82FC2DC0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc2de8
	if (ctx.cr6.eq) goto loc_82FC2DE8;
	// lbz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 116);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// or r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 | ctx.r8.u64;
	// b 0x82fc2d8c
	goto loc_82FC2D8C;
loc_82FC2DE8:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fc2e44
	if (!ctx.cr6.eq) goto loc_82FC2E44;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r3,r25,16
	ctx.r3.s64 = ctx.r25.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC2E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fc2e40
	goto loc_82FC2E40;
loc_82FC2E14:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82fc2e44
	if (!ctx.cr6.eq) goto loc_82FC2E44;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fc2e44
	if (!ctx.cr6.eq) goto loc_82FC2E44;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC2E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC2E40:
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_82FC2E44:
	// lbz r11,172(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 172);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc2e88
	if (ctx.cr6.eq) goto loc_82FC2E88;
	// lhz r10,174(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 174);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc2e6c
	if (ctx.cr6.eq) goto loc_82FC2E6C;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc2e88
	if (ctx.cr6.eq) goto loc_82FC2E88;
loc_82FC2E6C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC2E84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_82FC2E88:
	// lbz r11,172(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 172);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc2ea4
	if (ctx.cr6.eq) goto loc_82FC2EA4;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3048
	if (ctx.cr6.eq) goto loc_82FC3048;
loc_82FC2EA4:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// addi r26,r25,20
	ctx.r26.s64 = ctx.r25.s64 + 20;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc2ec0
	if (ctx.cr6.eq) goto loc_82FC2EC0;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82fc2ec4
	goto loc_82FC2EC4;
loc_82FC2EC0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82FC2EC4:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3048
	if (ctx.cr6.eq) goto loc_82FC3048;
loc_82FC2ED0:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82fc2ee8
	if (ctx.cr6.eq) goto loc_82FC2EE8;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x82fc2eec
	goto loc_82FC2EEC;
loc_82FC2EE8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82FC2EEC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc2f04
	if (ctx.cr6.eq) goto loc_82FC2F04;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// subf r27,r10,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82fc2f08
	goto loc_82FC2F08;
loc_82FC2F04:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_82FC2F08:
	// lbz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82fc3040
	if (!ctx.cr6.eq) goto loc_82FC3040;
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82fc2f5c
	if (ctx.cr6.eq) goto loc_82FC2F5C;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fc2f5c
	if (!ctx.cr6.eq) goto loc_82FC2F5C;
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// bne 0x82fc2f5c
	if (!ctx.cr0.eq) goto loc_82FC2F5C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lbz r31,12(r28)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r28.u32 + 12);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stb r11,12(r28)
	PPC_STORE_U8(ctx.r28.u32 + 12, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC2F54;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC2F5C;
	__imp__KfLowerIrql(ctx, base);
loc_82FC2F5C:
	// lwz r11,300(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 300);
	// addi r31,r25,296
	ctx.r31.s64 = ctx.r25.s64 + 296;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc2fa4
	if (ctx.cr6.eq) goto loc_82FC2FA4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc2fa4
	if (!ctx.cr6.eq) goto loc_82FC2FA4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc2fa4
	if (!ctx.cr0.eq) goto loc_82FC2FA4;
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r24,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r24.u8);
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC2F9C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC2FA4;
	__imp__KfLowerIrql(ctx, base);
loc_82FC2FA4:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r3,r25,16
	ctx.r3.s64 = ctx.r25.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC2FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x833b8a44
	ctx.lr = 0x82FC2FC4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc2fe4
	if (ctx.cr6.eq) goto loc_82FC2FE4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc2ff4
	if (ctx.cr6.eq) goto loc_82FC2FF4;
loc_82FC2FE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC2FEC;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_82FC2FF4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x833b8a44
	ctx.lr = 0x82FC3004;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r13
	ctx.r31.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc3024
	if (ctx.cr6.eq) goto loc_82FC3024;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc3038
	if (ctx.cr6.eq) goto loc_82FC3038;
loc_82FC3024:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC302C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// stb r30,12(r28)
	PPC_STORE_U8(ctx.r28.u32 + 12, ctx.r30.u8);
loc_82FC3038:
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r7.u32);
loc_82FC3040:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82fc2ed0
	if (!ctx.cr6.eq) goto loc_82FC2ED0;
loc_82FC3048:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82fc3090
	if (ctx.cr6.eq) goto loc_82FC3090;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fc3090
	if (!ctx.cr6.eq) goto loc_82FC3090;
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// bne 0x82fc3090
	if (!ctx.cr0.eq) goto loc_82FC3090;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lbz r31,12(r28)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r28.u32 + 12);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stb r11,12(r28)
	PPC_STORE_U8(ctx.r28.u32 + 12, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC3088;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC3090;
	__imp__KfLowerIrql(ctx, base);
loc_82FC3090:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC3098"))) PPC_WEAK_FUNC(sub_82FC3098);
PPC_FUNC_IMPL(__imp__sub_82FC3098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x82FC30A0;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3108
	if (ctx.cr6.eq) goto loc_82FC3108;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82FC30C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fb9b90
	ctx.lr = 0x82FC30D0;
	sub_82FB9B90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82fc316c
	if (ctx.cr6.eq) goto loc_82FC316C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fb9bf8
	ctx.lr = 0x82FC30E4;
	sub_82FB9BF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82fc30f0
	if (!ctx.cr6.eq) goto loc_82FC30F0;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
loc_82FC30F0:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fc30c4
	if (ctx.cr6.lt) goto loc_82FC30C4;
loc_82FC3108:
	// bl 0x833b8a44
	ctx.lr = 0x82FC310C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r21,r11,20216
	ctx.r21.s64 = ctx.r11.s64 + 20216;
	// mr r31,r13
	ctx.r31.u64 = ctx.r13.u64;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc3134
	if (ctx.cr6.eq) goto loc_82FC3134;
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc3148
	if (ctx.cr6.eq) goto loc_82FC3148;
loc_82FC3134:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC313C;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// stw r31,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r31.u32);
	// stb r30,12(r21)
	PPC_STORE_U8(ctx.r21.u32 + 12, ctx.r30.u8);
loc_82FC3148:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r19,r29,20
	ctx.r19.s64 = ctx.r29.s64 + 20;
	// stw r11,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r11.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc3178
	if (ctx.cr6.eq) goto loc_82FC3178;
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82fc317c
	goto loc_82FC317C;
loc_82FC316C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_82FC3178:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_82FC317C:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// li r18,4
	ctx.r18.s64 = 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fc34f4
	if (ctx.cr6.eq) goto loc_82FC34F4;
	// lwz r11,272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc328c
	if (ctx.cr6.eq) goto loc_82FC328C;
	// lwz r10,168(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// lwz r9,268(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fc328c
	if (ctx.cr6.lt) goto loc_82FC328C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82fc31b8
	if (!ctx.cr6.eq) goto loc_82FC31B8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82fc31c0
	goto loc_82FC31C0;
loc_82FC31B8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,272(r29)
	PPC_STORE_U32(ctx.r29.u32 + 272, ctx.r11.u32);
loc_82FC31C0:
	// stw r11,272(r29)
	PPC_STORE_U32(ctx.r29.u32 + 272, ctx.r11.u32);
	// addi r31,r29,296
	ctx.r31.s64 = ctx.r29.s64 + 296;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,268(r29)
	PPC_STORE_U32(ctx.r29.u32 + 268, ctx.r7.u32);
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc3220
	if (ctx.cr6.eq) goto loc_82FC3220;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc3220
	if (!ctx.cr6.eq) goto loc_82FC3220;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc3220
	if (!ctx.cr0.eq) goto loc_82FC3220;
	// lbz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r20,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r20.u8);
	// stw r20,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC3218;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC3220;
	__imp__KfLowerIrql(ctx, base);
loc_82FC3220:
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc324c
	if (ctx.cr6.eq) goto loc_82FC324C;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC324C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC324C:
	// bl 0x833b8a44
	ctx.lr = 0x82FC3250;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc3270
	if (ctx.cr6.eq) goto loc_82FC3270;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc3280
	if (ctx.cr6.eq) goto loc_82FC3280;
loc_82FC3270:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC3278;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC3280:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82FC328C:
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc32dc
	if (ctx.cr6.eq) goto loc_82FC32DC;
	// lbz r11,198(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 198);
	// lbz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// stw r20,288(r29)
	PPC_STORE_U32(ctx.r29.u32 + 288, ctx.r20.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,272(r29)
	PPC_STORE_U32(ctx.r29.u32 + 272, ctx.r11.u32);
	// beq cr6,0x82fc32dc
	if (ctx.cr6.eq) goto loc_82FC32DC;
	// addi r30,r29,188
	ctx.r30.s64 = ctx.r29.s64 + 188;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82FC32B8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fba190
	ctx.lr = 0x82FC32C8;
	sub_82FBA190(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fc32b8
	if (ctx.cr6.lt) goto loc_82FC32B8;
loc_82FC32DC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82fc34f4
	if (ctx.cr6.eq) goto loc_82FC34F4;
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r10.u32, ctx.xer);
	// subf r26,r11,r10
	ctx.r26.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bne cr6,0x82fc3300
	if (!ctx.cr6.eq) goto loc_82FC3300;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_82FC3300:
	// lbz r11,116(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3380
	if (ctx.cr6.eq) goto loc_82FC3380;
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc336c
	if (ctx.cr6.eq) goto loc_82FC336C;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82FC3320:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fb9b10
	ctx.lr = 0x82FC3330;
	sub_82FB9B10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82fc3350
	if (ctx.cr6.eq) goto loc_82FC3350;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fba0d0
	ctx.lr = 0x82FC3344;
	sub_82FBA0D0(ctx, base);
	// rlwinm r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3368
	if (ctx.cr6.eq) goto loc_82FC3368;
loc_82FC3350:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fc3320
	if (ctx.cr6.lt) goto loc_82FC3320;
	// b 0x82fc336c
	goto loc_82FC336C;
loc_82FC3368:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82FC336C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fc3384
	if (!ctx.cr6.eq) goto loc_82FC3384;
	// stb r18,116(r27)
	PPC_STORE_U8(ctx.r27.u32 + 116, ctx.r18.u8);
	// b 0x82fc3384
	goto loc_82FC3384;
loc_82FC3380:
	// li r24,1
	ctx.r24.s64 = 1;
loc_82FC3384:
	// lbz r11,116(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 116);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82fc34e8
	if (!ctx.cr6.eq) goto loc_82FC34E8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82fc33b4
	if (!ctx.cr6.eq) goto loc_82FC33B4;
	// lbz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 172);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc33b4
	if (ctx.cr6.eq) goto loc_82FC33B4;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc34e8
	if (ctx.cr6.eq) goto loc_82FC34E8;
loc_82FC33B4:
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fc3404
	if (ctx.cr6.eq) goto loc_82FC3404;
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fc3404
	if (!ctx.cr6.eq) goto loc_82FC3404;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r11.u32);
	// bne 0x82fc3404
	if (!ctx.cr0.eq) goto loc_82FC3404;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lbz r31,12(r21)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r21.u32 + 12);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stb r11,12(r21)
	PPC_STORE_U8(ctx.r21.u32 + 12, ctx.r11.u8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r10,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC33FC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC3404;
	__imp__KfLowerIrql(ctx, base);
loc_82FC3404:
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// addi r31,r29,296
	ctx.r31.s64 = ctx.r29.s64 + 296;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc344c
	if (ctx.cr6.eq) goto loc_82FC344C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc344c
	if (!ctx.cr6.eq) goto loc_82FC344C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc344c
	if (!ctx.cr0.eq) goto loc_82FC344C;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r20,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r20.u8);
	// stw r20,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC3444;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC344C;
	__imp__KfLowerIrql(ctx, base);
loc_82FC344C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC3468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x833b8a44
	ctx.lr = 0x82FC346C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc348c
	if (ctx.cr6.eq) goto loc_82FC348C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc349c
	if (ctx.cr6.eq) goto loc_82FC349C;
loc_82FC348C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC3494;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC349C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x833b8a44
	ctx.lr = 0x82FC34AC;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r13
	ctx.r31.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc34cc
	if (ctx.cr6.eq) goto loc_82FC34CC;
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc34e0
	if (ctx.cr6.eq) goto loc_82FC34E0;
loc_82FC34CC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC34D4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// stw r31,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r31.u32);
	// stb r30,12(r21)
	PPC_STORE_U8(ctx.r21.u32 + 12, ctx.r30.u8);
loc_82FC34E0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r11.u32);
loc_82FC34E8:
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82fc32dc
	if (!ctx.cr6.eq) goto loc_82FC32DC;
loc_82FC34F4:
	// lbz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 292);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82fc3510
	if (!ctx.cr6.eq) goto loc_82FC3510;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fc3510
	if (!ctx.cr6.eq) goto loc_82FC3510;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_82FC3510:
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fc3560
	if (ctx.cr6.eq) goto loc_82FC3560;
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fc3560
	if (!ctx.cr6.eq) goto loc_82FC3560;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r11.u32);
	// bne 0x82fc3560
	if (!ctx.cr0.eq) goto loc_82FC3560;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lbz r31,12(r21)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r21.u32 + 12);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stb r11,12(r21)
	PPC_STORE_U8(ctx.r21.u32 + 12, ctx.r11.u8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r10,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC3558;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC3560;
	__imp__KfLowerIrql(ctx, base);
loc_82FC3560:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc38c8
	if (ctx.cr6.eq) goto loc_82FC38C8;
	// bl 0x833b8a44
	ctx.lr = 0x82FC3570;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r13
	ctx.r31.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc3590
	if (ctx.cr6.eq) goto loc_82FC3590;
	// lwz r9,8(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82fc35a8
	if (ctx.cr6.eq) goto loc_82FC35A8;
loc_82FC3590:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC3598;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// stb r30,12(r21)
	PPC_STORE_U8(ctx.r21.u32 + 12, ctx.r30.u8);
	// stw r9,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r9.u32);
loc_82FC35A8:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc35c8
	if (ctx.cr6.eq) goto loc_82FC35C8;
	// lwz r8,8(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// subf r31,r8,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r8.s64;
	// b 0x82fc35cc
	goto loc_82FC35CC;
loc_82FC35C8:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82FC35CC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fc3884
	if (ctx.cr6.eq) goto loc_82FC3884;
	// li r22,3
	ctx.r22.s64 = 3;
loc_82FC35D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82fc387c
	if (ctx.cr6.eq) goto loc_82FC387C;
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r10.u32, ctx.xer);
	// subf r23,r11,r10
	ctx.r23.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bne cr6,0x82fc35fc
	if (!ctx.cr6.eq) goto loc_82FC35FC;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
loc_82FC35FC:
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fc3870
	if (!ctx.cr6.eq) goto loc_82FC3870;
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3860
	if (ctx.cr6.eq) goto loc_82FC3860;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_82FC361C:
	// lbz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 292);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82fc3634
	if (!ctx.cr6.eq) goto loc_82FC3634;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82fc364c
	goto loc_82FC364C;
loc_82FC3634:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fc364c
	if (ctx.cr6.eq) goto loc_82FC364C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fb9bf8
	ctx.lr = 0x82FC3648;
	sub_82FB9BF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82FC364C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fb9a38
	ctx.lr = 0x82FC3660;
	sub_82FB9A38(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82fc36b4
	if (ctx.cr6.eq) goto loc_82FC36B4;
	// lbz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 292);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82fc369c
	if (!ctx.cr6.eq) goto loc_82FC369C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82fc1280
	ctx.lr = 0x82FC368C;
	sub_82FC1280(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rlwinm r6,r11,25,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3;
	// b 0x82fc36a8
	goto loc_82FC36A8;
loc_82FC369C:
	// rlwinm r11,r30,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0xFFFFC000;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
loc_82FC36A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fba2f8
	ctx.lr = 0x82FC36B4;
	sub_82FBA2F8(ctx, base);
loc_82FC36B4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3800
	if (ctx.cr6.eq) goto loc_82FC3800;
	// stw r20,188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 188, ctx.r20.u32);
	// addi r27,r29,188
	ctx.r27.s64 = ctx.r29.s64 + 188;
	// stw r20,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r20.u32);
	// stw r20,196(r29)
	PPC_STORE_U32(ctx.r29.u32 + 196, ctx.r20.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lbz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 292);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// stb r10,198(r29)
	PPC_STORE_U8(ctx.r29.u32 + 198, ctx.r10.u8);
	// bne cr6,0x82fc37b8
	if (!ctx.cr6.eq) goto loc_82FC37B8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r26,r11,-128
	ctx.r26.s64 = ctx.r11.s64 + -128;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x82fc1280
	ctx.lr = 0x82FC3704;
	sub_82FC1280(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// bl 0x82fc1280
	ctx.lr = 0x82FC3724;
	sub_82FC1280(ctx, base);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r28,r6,25,30,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x3;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82fc3788
	if (!ctx.cr6.eq) goto loc_82FC3788;
	// cmplwi cr6,r6,512
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 512, ctx.xer);
	// blt cr6,0x82fc3768
	if (ctx.cr6.lt) goto loc_82FC3768;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82fc379c
	if (!ctx.cr6.eq) goto loc_82FC379C;
	// addi r6,r6,-512
	ctx.r6.s64 = ctx.r6.s64 + -512;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82fc1280
	ctx.lr = 0x82FC3760;
	sub_82FC1280(ctx, base);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// b 0x82fc379c
	goto loc_82FC379C;
loc_82FC3768:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82fc1280
	ctx.lr = 0x82FC3780;
	sub_82FC1280(ctx, base);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// b 0x82fc379c
	goto loc_82FC379C;
loc_82FC3788:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82fc1280
	ctx.lr = 0x82FC379C;
	sub_82FC1280(ctx, base);
loc_82FC379C:
	// rlwinm r11,r26,25,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 25) & 0x3;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// stw r25,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r25.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stb r11,196(r29)
	PPC_STORE_U8(ctx.r29.u32 + 196, ctx.r11.u8);
	// stb r28,197(r29)
	PPC_STORE_U8(ctx.r29.u32 + 197, ctx.r28.u8);
	// b 0x82fc381c
	goto loc_82FC381C;
loc_82FC37B8:
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r5,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r5.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lbzx r4,r7,r31
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// stb r4,196(r29)
	PPC_STORE_U8(ctx.r29.u32 + 196, ctx.r4.u8);
	// lbz r3,49(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// stb r3,197(r29)
	PPC_STORE_U8(ctx.r29.u32 + 197, ctx.r3.u8);
	// b 0x82fc381c
	goto loc_82FC381C;
loc_82FC3800:
	// lbz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 292);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82fc3828
	if (!ctx.cr6.eq) goto loc_82FC3828;
	// stw r20,188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 188, ctx.r20.u32);
	// addi r5,r29,188
	ctx.r5.s64 = ctx.r29.s64 + 188;
	// stw r20,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r20.u32);
	// stw r20,196(r29)
	PPC_STORE_U32(ctx.r29.u32 + 196, ctx.r20.u32);
loc_82FC381C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fba190
	ctx.lr = 0x82FC3828;
	sub_82FBA190(ctx, base);
loc_82FC3828:
	// lbz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 292);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82fc3848
	if (ctx.cr6.eq) goto loc_82FC3848;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fb9b90
	ctx.lr = 0x82FC3840;
	sub_82FB9B90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82fc384c
	if (!ctx.cr6.eq) goto loc_82FC384C;
loc_82FC3848:
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_82FC384C:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lbz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fc361c
	if (ctx.cr6.lt) goto loc_82FC361C;
loc_82FC3860:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// stb r22,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r22.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc387c
	if (ctx.cr6.eq) goto loc_82FC387C;
loc_82FC3870:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82fc35d8
	if (!ctx.cr6.eq) goto loc_82FC35D8;
loc_82FC387C:
	// lwz r9,8(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
loc_82FC3884:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fc38c8
	if (ctx.cr6.eq) goto loc_82FC38C8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc38c8
	if (!ctx.cr6.eq) goto loc_82FC38C8;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r11.u32);
	// bne 0x82fc38c8
	if (!ctx.cr0.eq) goto loc_82FC38C8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lbz r31,12(r21)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r21.u32 + 12);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stb r11,12(r21)
	PPC_STORE_U8(ctx.r21.u32 + 12, ctx.r11.u8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r10,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC38C0;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC38C8;
	__imp__KfLowerIrql(ctx, base);
loc_82FC38C8:
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3924
	if (ctx.cr6.eq) goto loc_82FC3924;
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3920
	if (ctx.cr6.eq) goto loc_82FC3920;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82FC38E4:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// addi r10,r31,15
	ctx.r10.s64 = ctx.r31.s64 + 15;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r7,124(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 124);
	// lwzx r5,r8,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// rlwinm r6,r7,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// bl 0x82fba2f8
	ctx.lr = 0x82FC390C;
	sub_82FBA2F8(ctx, base);
	// addi r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 1;
	// lbz r5,56(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// clrlwi r31,r6,24
	ctx.r31.u64 = ctx.r6.u32 & 0xFF;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82fc38e4
	if (ctx.cr6.lt) goto loc_82FC38E4;
loc_82FC3920:
	// stw r20,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r20.u32);
loc_82FC3924:
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3974
	if (ctx.cr6.eq) goto loc_82FC3974;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82FC3934:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fb9bf8
	ctx.lr = 0x82FC3940;
	sub_82FB9BF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82fc3960
	if (!ctx.cr6.eq) goto loc_82FC3960;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fba0d0
	ctx.lr = 0x82FC3954;
	sub_82FBA0D0(ctx, base);
	// rlwinm r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc316c
	if (ctx.cr6.eq) goto loc_82FC316C;
loc_82FC3960:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fc3934
	if (ctx.cr6.lt) goto loc_82FC3934;
loc_82FC3974:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC3980"))) PPC_WEAK_FUNC(sub_82FC3980);
PPC_FUNC_IMPL(__imp__sub_82FC3980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82FC3988;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lbz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc39e0
	if (ctx.cr6.eq) goto loc_82FC39E0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82FC39AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// bl 0x82fb9bf8
	ctx.lr = 0x82FC39B8;
	sub_82FB9BF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82fc39dc
	if (ctx.cr6.eq) goto loc_82FC39DC;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fc39ac
	if (ctx.cr6.lt) goto loc_82FC39AC;
	// b 0x82fc39e0
	goto loc_82FC39E0;
loc_82FC39DC:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82FC39E0:
	// bl 0x833b8a44
	ctx.lr = 0x82FC39E4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r27,r11,20216
	ctx.r27.s64 = ctx.r11.s64 + 20216;
	// mr r31,r13
	ctx.r31.u64 = ctx.r13.u64;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fc3a0c
	if (ctx.cr6.eq) goto loc_82FC3A0C;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc3a20
	if (ctx.cr6.eq) goto loc_82FC3A20;
loc_82FC3A0C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC3A14;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// stb r30,12(r27)
	PPC_STORE_U8(ctx.r27.u32 + 12, ctx.r30.u8);
loc_82FC3A20:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r28,20
	ctx.r11.s64 = ctx.r28.s64 + 20;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82fc3bbc
	if (ctx.cr6.eq) goto loc_82FC3BBC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r30,r11,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fc3bbc
	if (ctx.cr6.eq) goto loc_82FC3BBC;
	// lbz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3bbc
	if (ctx.cr6.eq) goto loc_82FC3BBC;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3bbc
	if (ctx.cr6.eq) goto loc_82FC3BBC;
	// lbz r11,118(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 118);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3ac0
	if (ctx.cr6.eq) goto loc_82FC3AC0;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3bbc
	if (ctx.cr6.eq) goto loc_82FC3BBC;
	// lbz r11,119(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 119);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fc3bbc
	if (!ctx.cr6.eq) goto loc_82FC3BBC;
	// lbz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3ab8
	if (ctx.cr6.eq) goto loc_82FC3AB8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82FC3A94:
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fb9f98
	ctx.lr = 0x82FC3AA4;
	sub_82FB9F98(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fc3a94
	if (ctx.cr6.lt) goto loc_82FC3A94;
loc_82FC3AB8:
	// stb r24,119(r30)
	PPC_STORE_U8(ctx.r30.u32 + 119, ctx.r24.u8);
	// b 0x82fc3bb8
	goto loc_82FC3BB8;
loc_82FC3AC0:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3b18
	if (ctx.cr6.eq) goto loc_82FC3B18;
	// lbz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3b18
	if (ctx.cr6.eq) goto loc_82FC3B18;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82FC3AE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// bl 0x82fba208
	ctx.lr = 0x82FC3AEC;
	sub_82FBA208(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fc3b10
	if (!ctx.cr6.eq) goto loc_82FC3B10;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fc3ae0
	if (ctx.cr6.lt) goto loc_82FC3AE0;
	// b 0x82fc3b14
	goto loc_82FC3B14;
loc_82FC3B10:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82FC3B14:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82FC3B18:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3bbc
	if (ctx.cr6.eq) goto loc_82FC3BBC;
	// lbz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc3bb4
	if (ctx.cr6.eq) goto loc_82FC3BB4;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// li r26,3
	ctx.r26.s64 = 3;
loc_82FC3B38:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r29,r11,-128
	ctx.r29.s64 = ctx.r11.s64 + -128;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
	// stb r24,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r24.u8);
	// bl 0x82fc1280
	ctx.lr = 0x82FC3B6C;
	sub_82FC1280(ctx, base);
	// rlwinm r9,r29,25,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 25) & 0x3;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82fc1348
	ctx.lr = 0x82FC3B88;
	sub_82FC1348(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stb r26,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r26.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// bl 0x82fba190
	ctx.lr = 0x82FC3BA0;
	sub_82FBA190(ctx, base);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// lbz r7,56(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// clrlwi r31,r8,24
	ctx.r31.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82fc3b38
	if (ctx.cr6.lt) goto loc_82FC3B38;
loc_82FC3BB4:
	// stb r24,118(r30)
	PPC_STORE_U8(ctx.r30.u32 + 118, ctx.r24.u8);
loc_82FC3BB8:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82FC3BBC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// beq cr6,0x82fc3c04
	if (ctx.cr6.eq) goto loc_82FC3C04;
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc3c04
	if (!ctx.cr6.eq) goto loc_82FC3C04;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// bne 0x82fc3c04
	if (!ctx.cr0.eq) goto loc_82FC3C04;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lbz r31,12(r27)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r27.u32 + 12);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stb r11,12(r27)
	PPC_STORE_U8(ctx.r27.u32 + 12, ctx.r11.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC3BFC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC3C04;
	__imp__KfLowerIrql(ctx, base);
loc_82FC3C04:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC3C0C"))) PPC_WEAK_FUNC(sub_82FC3C0C);
PPC_FUNC_IMPL(__imp__sub_82FC3C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC3C10"))) PPC_WEAK_FUNC(sub_82FC3C10);
PPC_FUNC_IMPL(__imp__sub_82FC3C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82FC3C18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lbz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 264);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc3cd0
	if (ctx.cr6.eq) goto loc_82FC3CD0;
	// addi r31,r29,296
	ctx.r31.s64 = ctx.r29.s64 + 296;
	// bl 0x833b8a44
	ctx.lr = 0x82FC3C3C;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc3c5c
	if (ctx.cr6.eq) goto loc_82FC3C5C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc3c6c
	if (ctx.cr6.eq) goto loc_82FC3C6C;
loc_82FC3C5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC3C64;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82FC3C6C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fba5e8
	ctx.lr = 0x82FC3C80;
	sub_82FBA5E8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc3cc8
	if (ctx.cr6.eq) goto loc_82FC3CC8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc3cc8
	if (!ctx.cr6.eq) goto loc_82FC3CC8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc3cc8
	if (!ctx.cr0.eq) goto loc_82FC3CC8;
	// lbz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC3CC0;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC3CC8;
	__imp__KfLowerIrql(ctx, base);
loc_82FC3CC8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82fc3db8
	if (ctx.cr6.lt) goto loc_82FC3DB8;
loc_82FC3CD0:
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// bl 0x833b8a44
	ctx.lr = 0x82FC3CD8;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc3d00
	if (ctx.cr6.eq) goto loc_82FC3D00;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc3d14
	if (ctx.cr6.eq) goto loc_82FC3D14;
loc_82FC3D00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC3D08;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC3D14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82fc3d38
	if (!ctx.cr6.eq) goto loc_82FC3D38;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82fc3d4c
	goto loc_82FC3D4C;
loc_82FC3D38:
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc3d64
	if (ctx.cr6.eq) goto loc_82FC3D64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
loc_82FC3D4C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC3D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FC3D64:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc3dac
	if (ctx.cr6.eq) goto loc_82FC3DAC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc3dac
	if (!ctx.cr6.eq) goto loc_82FC3DAC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc3dac
	if (!ctx.cr0.eq) goto loc_82FC3DAC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC3DA4;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC3DAC;
	__imp__KfLowerIrql(ctx, base);
loc_82FC3DAC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82FC3DB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC3DC4"))) PPC_WEAK_FUNC(sub_82FC3DC4);
PPC_FUNC_IMPL(__imp__sub_82FC3DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC3DC8"))) PPC_WEAK_FUNC(sub_82FC3DC8);
PPC_FUNC_IMPL(__imp__sub_82FC3DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82FC3DD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r27,r4,31
	ctx.r27.u64 = ctx.r4.u32 & 0x1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82fc3e88
	if (ctx.cr6.eq) goto loc_82FC3E88;
	// lbz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 264);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc3e88
	if (ctx.cr6.eq) goto loc_82FC3E88;
	// addi r31,r29,296
	ctx.r31.s64 = ctx.r29.s64 + 296;
	// bl 0x833b8a44
	ctx.lr = 0x82FC3E00;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc3e20
	if (ctx.cr6.eq) goto loc_82FC3E20;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc3e30
	if (ctx.cr6.eq) goto loc_82FC3E30;
loc_82FC3E20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC3E28;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82FC3E30:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// bl 0x82fb99b0
	ctx.lr = 0x82FC3E44;
	sub_82FB99B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc3e88
	if (ctx.cr6.eq) goto loc_82FC3E88;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc3e88
	if (!ctx.cr6.eq) goto loc_82FC3E88;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc3e88
	if (!ctx.cr0.eq) goto loc_82FC3E88;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r26,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r26.u8);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC3E80;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC3E88;
	__imp__KfLowerIrql(ctx, base);
loc_82FC3E88:
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// bl 0x833b8a44
	ctx.lr = 0x82FC3E90;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,20216
	ctx.r31.s64 = ctx.r11.s64 + 20216;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc3eb8
	if (ctx.cr6.eq) goto loc_82FC3EB8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc3ecc
	if (ctx.cr6.eq) goto loc_82FC3ECC;
loc_82FC3EB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b8394
	ctx.lr = 0x82FC3EC0;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_82FC3ECC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fc3f54
	if (ctx.cr6.eq) goto loc_82FC3F54;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82fc3f34
	if (!ctx.cr6.eq) goto loc_82FC3F34;
	// rlwinm r9,r10,0,27,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E;
	// rlwinm r9,r9,0,30,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82fc3f34
	if (!ctx.cr6.eq) goto loc_82FC3F34;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fc3f54
	if (!ctx.cr6.eq) goto loc_82FC3F54;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC3F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lhz r11,15564(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 15564);
	// sth r11,158(r30)
	PPC_STORE_U16(ctx.r30.u32 + 158, ctx.r11.u16);
	// b 0x82fc3f50
	goto loc_82FC3F50;
loc_82FC3F34:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,87
	ctx.r4.s64 = 87;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FC3F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC3F50:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82FC3F54:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc3f9c
	if (ctx.cr6.eq) goto loc_82FC3F9C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fc3f9c
	if (!ctx.cr6.eq) goto loc_82FC3F9C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82fc3f9c
	if (!ctx.cr0.eq) goto loc_82FC3F9C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x833b8384
	ctx.lr = 0x82FC3F94;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b8a54
	ctx.lr = 0x82FC3F9C;
	__imp__KfLowerIrql(ctx, base);
loc_82FC3F9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC3FA8"))) PPC_WEAK_FUNC(sub_82FC3FA8);
PPC_FUNC_IMPL(__imp__sub_82FC3FA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc3c10
	sub_82FC3C10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC3FB0"))) PPC_WEAK_FUNC(sub_82FC3FB0);
PPC_FUNC_IMPL(__imp__sub_82FC3FB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc2ba0
	sub_82FC2BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC3FB8"))) PPC_WEAK_FUNC(sub_82FC3FB8);
PPC_FUNC_IMPL(__imp__sub_82FC3FB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc2ba8
	sub_82FC2BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC3FC0"))) PPC_WEAK_FUNC(sub_82FC3FC0);
PPC_FUNC_IMPL(__imp__sub_82FC3FC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fc3dc8
	sub_82FC3DC8(ctx, base);
	return;
}

