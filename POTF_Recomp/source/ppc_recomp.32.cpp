#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8234EE2C"))) PPC_WEAK_FUNC(sub_8234EE2C);
PPC_FUNC_IMPL(__imp__sub_8234EE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234EE30"))) PPC_WEAK_FUNC(sub_8234EE30);
PPC_FUNC_IMPL(__imp__sub_8234EE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8234EE38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,26648
	ctx.r30.s64 = ctx.r11.s64 + 26648;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwzx r6,r7,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8234EE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8234eeb8
	if (!ctx.cr6.eq) goto loc_8234EEB8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8234EEB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234EEB8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234EED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234EED8"))) PPC_WEAK_FUNC(sub_8234EED8);
PPC_FUNC_IMPL(__imp__sub_8234EED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8234EEE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,26648
	ctx.r30.s64 = ctx.r11.s64 + 26648;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8234EF20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8234EF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8234ef90
	if (!ctx.cr6.eq) goto loc_8234EF90;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8234EF90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234EF90:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234EFAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234EFB8"))) PPC_WEAK_FUNC(sub_8234EFB8);
PPC_FUNC_IMPL(__imp__sub_8234EFB8) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8234f014
	if (!ctx.cr6.eq) goto loc_8234F014;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r9,-31887
	ctx.r9.s64 = -2089746432;
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,26648
	ctx.r7.s64 = ctx.r9.s64 + 26648;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234F014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234F014:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234F028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8234F044"))) PPC_WEAK_FUNC(sub_8234F044);
PPC_FUNC_IMPL(__imp__sub_8234F044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F048"))) PPC_WEAK_FUNC(sub_8234F048);
PPC_FUNC_IMPL(__imp__sub_8234F048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8234F050;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31887
	ctx.r9.s64 = -2089746432;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r30,-31885
	ctx.r30.s64 = -2089615360;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r29,r9,26648
	ctx.r29.s64 = ctx.r9.s64 + 26648;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,28920(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28920, ctx.r10.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwzx r6,r7,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8234F0A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-31885
	ctx.r5.s64 = -2089615360;
	// lwz r3,28924(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28924);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234f0d0
	if (ctx.cr6.eq) goto loc_8234F0D0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lwz r4,28908(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28908);
	// lwz r9,168(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8234F0D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234F0D0:
	// lwz r11,28920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne cr6,0x8234f0e4
	if (!ctx.cr6.eq) goto loc_8234F0E4;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_8234F0E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x8234f120
	if (!ctx.cr6.eq) goto loc_8234F120;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8234F120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234F120:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,600(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 600);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234F138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8234f548
	ctx.lr = 0x8234F144;
	sub_8234F548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234F14C"))) PPC_WEAK_FUNC(sub_8234F14C);
PPC_FUNC_IMPL(__imp__sub_8234F14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F150"))) PPC_WEAK_FUNC(sub_8234F150);
PPC_FUNC_IMPL(__imp__sub_8234F150) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r3,-26020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26020);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234f188
	if (!ctx.cr6.eq) goto loc_8234F188;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11440
	ctx.r3.s64 = ctx.r11.s64 + 11440;
	// bl 0x827ff540
	ctx.lr = 0x8234F17C;
	sub_827FF540(ctx, base);
	// stw r3,-26020(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26020, ctx.r3.u32);
	// bl 0x827ff5f0
	ctx.lr = 0x8234F184;
	sub_827FF5F0(ctx, base);
	// lwz r3,-26020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26020);
loc_8234F188:
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

__attribute__((alias("__imp__sub_8234F19C"))) PPC_WEAK_FUNC(sub_8234F19C);
PPC_FUNC_IMPL(__imp__sub_8234F19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F1A0"))) PPC_WEAK_FUNC(sub_8234F1A0);
PPC_FUNC_IMPL(__imp__sub_8234F1A0) {
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

__attribute__((alias("__imp__sub_8234F1B4"))) PPC_WEAK_FUNC(sub_8234F1B4);
PPC_FUNC_IMPL(__imp__sub_8234F1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F1B8"))) PPC_WEAK_FUNC(sub_8234F1B8);
PPC_FUNC_IMPL(__imp__sub_8234F1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8234F1C0;
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
	// beq cr6,0x8234f200
	if (ctx.cr6.eq) goto loc_8234F200;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234f1ec
	if (!ctx.cr6.eq) goto loc_8234F1EC;
	// bl 0x822900a0
	ctx.lr = 0x8234F1E8;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8234F1EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234F200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234F200:
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

__attribute__((alias("__imp__sub_8234F218"))) PPC_WEAK_FUNC(sub_8234F218);
PPC_FUNC_IMPL(__imp__sub_8234F218) {
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

__attribute__((alias("__imp__sub_8234F22C"))) PPC_WEAK_FUNC(sub_8234F22C);
PPC_FUNC_IMPL(__imp__sub_8234F22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F230"))) PPC_WEAK_FUNC(sub_8234F230);
PPC_FUNC_IMPL(__imp__sub_8234F230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8234F238;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234f278
	if (!ctx.cr6.gt) goto loc_8234F278;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8234F258:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8234f638
	ctx.lr = 0x8234F264;
	sub_8234F638(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234f258
	if (ctx.cr6.lt) goto loc_8234F258;
loc_8234F278:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234f2b0
	if (ctx.cr6.eq) goto loc_8234F2B0;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234f29c
	if (!ctx.cr6.eq) goto loc_8234F29C;
	// bl 0x822900a0
	ctx.lr = 0x8234F298;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8234F29C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234F2B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234F2B0:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234F2C4"))) PPC_WEAK_FUNC(sub_8234F2C4);
PPC_FUNC_IMPL(__imp__sub_8234F2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F2C8"))) PPC_WEAK_FUNC(sub_8234F2C8);
PPC_FUNC_IMPL(__imp__sub_8234F2C8) {
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

__attribute__((alias("__imp__sub_8234F2DC"))) PPC_WEAK_FUNC(sub_8234F2DC);
PPC_FUNC_IMPL(__imp__sub_8234F2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F2E0"))) PPC_WEAK_FUNC(sub_8234F2E0);
PPC_FUNC_IMPL(__imp__sub_8234F2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8234F2E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234f328
	if (!ctx.cr6.gt) goto loc_8234F328;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8234F308:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8234f6b8
	ctx.lr = 0x8234F314;
	sub_8234F6B8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234f308
	if (ctx.cr6.lt) goto loc_8234F308;
loc_8234F328:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234f360
	if (ctx.cr6.eq) goto loc_8234F360;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234f34c
	if (!ctx.cr6.eq) goto loc_8234F34C;
	// bl 0x822900a0
	ctx.lr = 0x8234F348;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8234F34C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234F360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234F360:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234F374"))) PPC_WEAK_FUNC(sub_8234F374);
PPC_FUNC_IMPL(__imp__sub_8234F374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F378"))) PPC_WEAK_FUNC(sub_8234F378);
PPC_FUNC_IMPL(__imp__sub_8234F378) {
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

__attribute__((alias("__imp__sub_8234F38C"))) PPC_WEAK_FUNC(sub_8234F38C);
PPC_FUNC_IMPL(__imp__sub_8234F38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F390"))) PPC_WEAK_FUNC(sub_8234F390);
PPC_FUNC_IMPL(__imp__sub_8234F390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8234F398;
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
	// beq cr6,0x8234f3d8
	if (ctx.cr6.eq) goto loc_8234F3D8;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234f3c4
	if (!ctx.cr6.eq) goto loc_8234F3C4;
	// bl 0x822900a0
	ctx.lr = 0x8234F3C0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8234F3C4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234F3D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234F3D8:
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

__attribute__((alias("__imp__sub_8234F3F0"))) PPC_WEAK_FUNC(sub_8234F3F0);
PPC_FUNC_IMPL(__imp__sub_8234F3F0) {
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

__attribute__((alias("__imp__sub_8234F404"))) PPC_WEAK_FUNC(sub_8234F404);
PPC_FUNC_IMPL(__imp__sub_8234F404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F408"))) PPC_WEAK_FUNC(sub_8234F408);
PPC_FUNC_IMPL(__imp__sub_8234F408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8234F410;
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
	// ble cr6,0x8234f4e8
	if (!ctx.cr6.gt) goto loc_8234F4E8;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8234F434:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234f494
	if (ctx.cr6.eq) goto loc_8234F494;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8234f494
	if (ctx.cr6.eq) goto loc_8234F494;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234f474
	if (!ctx.cr6.eq) goto loc_8234F474;
	// bl 0x822900a0
	ctx.lr = 0x8234F470;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_8234F474:
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
	ctx.lr = 0x8234F490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8234F494:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8234f4c8
	if (ctx.cr6.eq) goto loc_8234F4C8;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234f4b4
	if (!ctx.cr6.eq) goto loc_8234F4B4;
	// bl 0x822900a0
	ctx.lr = 0x8234F4B0;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_8234F4B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234F4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234F4C8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234f434
	if (ctx.cr6.lt) goto loc_8234F434;
loc_8234F4E8:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8234f51c
	if (ctx.cr6.eq) goto loc_8234F51C;
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234f508
	if (!ctx.cr6.eq) goto loc_8234F508;
	// bl 0x822900a0
	ctx.lr = 0x8234F504;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28888);
loc_8234F508:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234F51C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234F51C:
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

__attribute__((alias("__imp__sub_8234F530"))) PPC_WEAK_FUNC(sub_8234F530);
PPC_FUNC_IMPL(__imp__sub_8234F530) {
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

__attribute__((alias("__imp__sub_8234F544"))) PPC_WEAK_FUNC(sub_8234F544);
PPC_FUNC_IMPL(__imp__sub_8234F544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F548"))) PPC_WEAK_FUNC(sub_8234F548);
PPC_FUNC_IMPL(__imp__sub_8234F548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8234F550;
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
	// beq cr6,0x8234f590
	if (ctx.cr6.eq) goto loc_8234F590;
	// lis r31,-31885
	ctx.r31.s64 = -2089615360;
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234f57c
	if (!ctx.cr6.eq) goto loc_8234F57C;
	// bl 0x822900a0
	ctx.lr = 0x8234F578;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28888);
loc_8234F57C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234F590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234F590:
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

__attribute__((alias("__imp__sub_8234F5A8"))) PPC_WEAK_FUNC(sub_8234F5A8);
PPC_FUNC_IMPL(__imp__sub_8234F5A8) {
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
	// bl 0x8234f638
	ctx.lr = 0x8234F5C0;
	sub_8234F638(ctx, base);
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

__attribute__((alias("__imp__sub_8234F5D8"))) PPC_WEAK_FUNC(sub_8234F5D8);
PPC_FUNC_IMPL(__imp__sub_8234F5D8) {
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
	// bl 0x8234f6b8
	ctx.lr = 0x8234F5F0;
	sub_8234F6B8(ctx, base);
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

__attribute__((alias("__imp__sub_8234F608"))) PPC_WEAK_FUNC(sub_8234F608);
PPC_FUNC_IMPL(__imp__sub_8234F608) {
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
	// bl 0x8234f748
	ctx.lr = 0x8234F620;
	sub_8234F748(ctx, base);
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

__attribute__((alias("__imp__sub_8234F638"))) PPC_WEAK_FUNC(sub_8234F638);
PPC_FUNC_IMPL(__imp__sub_8234F638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8234F640;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,20
	ctx.r31.s64 = ctx.r29.s64 + 20;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r30,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234f674
	if (ctx.cr6.eq) goto loc_8234F674;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8234F674;
	sub_82294520(ctx, base);
loc_8234F674:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8234F67C;
	sub_82294CC8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234f6a4
	if (ctx.cr6.eq) goto loc_8234F6A4;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8234F6A4;
	sub_82294520(ctx, base);
loc_8234F6A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8234F6AC;
	sub_82294CC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234F6B4"))) PPC_WEAK_FUNC(sub_8234F6B4);
PPC_FUNC_IMPL(__imp__sub_8234F6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F6B8"))) PPC_WEAK_FUNC(sub_8234F6B8);
PPC_FUNC_IMPL(__imp__sub_8234F6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8234F6C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x82295e20
	ctx.lr = 0x8234F6D0;
	sub_82295E20(ctx, base);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82295e20
	ctx.lr = 0x8234F6D8;
	sub_82295E20(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234f704
	if (ctx.cr6.eq) goto loc_8234F704;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8234F704;
	sub_82294520(ctx, base);
loc_8234F704:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8234F70C;
	sub_82294CC8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234f734
	if (ctx.cr6.eq) goto loc_8234F734;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8234F734;
	sub_82294520(ctx, base);
loc_8234F734:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8234F73C;
	sub_82294CC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234F744"))) PPC_WEAK_FUNC(sub_8234F744);
PPC_FUNC_IMPL(__imp__sub_8234F744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F748"))) PPC_WEAK_FUNC(sub_8234F748);
PPC_FUNC_IMPL(__imp__sub_8234F748) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234f784
	if (ctx.cr6.eq) goto loc_8234F784;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x8234F784;
	sub_82294520(ctx, base);
loc_8234F784:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x8234F78C;
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

__attribute__((alias("__imp__sub_8234F7A0"))) PPC_WEAK_FUNC(sub_8234F7A0);
PPC_FUNC_IMPL(__imp__sub_8234F7A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234F7B0"))) PPC_WEAK_FUNC(sub_8234F7B0);
PPC_FUNC_IMPL(__imp__sub_8234F7B0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
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

__attribute__((alias("__imp__sub_8234F7C8"))) PPC_WEAK_FUNC(sub_8234F7C8);
PPC_FUNC_IMPL(__imp__sub_8234F7C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,52
	ctx.r10.s64 = ctx.r4.s64 * 52;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234F7D8"))) PPC_WEAK_FUNC(sub_8234F7D8);
PPC_FUNC_IMPL(__imp__sub_8234F7D8) {
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

__attribute__((alias("__imp__sub_8234F7F0"))) PPC_WEAK_FUNC(sub_8234F7F0);
PPC_FUNC_IMPL(__imp__sub_8234F7F0) {
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

__attribute__((alias("__imp__sub_8234F808"))) PPC_WEAK_FUNC(sub_8234F808);
PPC_FUNC_IMPL(__imp__sub_8234F808) {
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

__attribute__((alias("__imp__sub_8234F818"))) PPC_WEAK_FUNC(sub_8234F818);
PPC_FUNC_IMPL(__imp__sub_8234F818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8234F820;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31904
	ctx.r11.s64 = -2090860544;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-17672
	ctx.r30.s64 = ctx.r11.s64 + -17672;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-17672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f878
	if (ctx.cr6.eq) goto loc_8234F878;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8234F844:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82cb20a0
	ctx.lr = 0x8234F850;
	sub_82CB20A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234f884
	if (ctx.cr6.eq) goto loc_8234F884;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234f844
	if (!ctx.cr6.eq) goto loc_8234F844;
loc_8234F878:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8234F884:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234F8A0"))) PPC_WEAK_FUNC(sub_8234F8A0);
PPC_FUNC_IMPL(__imp__sub_8234F8A0) {
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
	// lwz r11,-26020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26020);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234f8dc
	if (!ctx.cr6.eq) goto loc_8234F8DC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11440
	ctx.r3.s64 = ctx.r11.s64 + 11440;
	// bl 0x827ff540
	ctx.lr = 0x8234F8D4;
	sub_827FF540(ctx, base);
	// stw r3,-26020(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26020, ctx.r3.u32);
	// bl 0x827ff5f0
	ctx.lr = 0x8234F8DC;
	sub_827FF5F0(ctx, base);
loc_8234F8DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31889
	ctx.r10.s64 = -2089877504;
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// addi r8,r10,29176
	ctx.r8.s64 = ctx.r10.s64 + 29176;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,-2024
	ctx.r6.s64 = ctx.r9.s64 + -2024;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// stwx r6,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_8234F918"))) PPC_WEAK_FUNC(sub_8234F918);
PPC_FUNC_IMPL(__imp__sub_8234F918) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-6528
	ctx.r4.s64 = ctx.r11.s64 + -6528;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8234F944;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r9,-15144
	ctx.r3.s64 = ctx.r9.s64 + -15144;
	// addi r4,r8,12880
	ctx.r4.s64 = ctx.r8.s64 + 12880;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15144(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15144, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8234F978;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r9,-15104
	ctx.r3.s64 = ctx.r9.s64 + -15104;
	// addi r4,r8,12932
	ctx.r4.s64 = ctx.r8.s64 + 12932;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15104(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15104, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8234F9AC;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r9,-15404
	ctx.r3.s64 = ctx.r9.s64 + -15404;
	// addi r4,r8,12964
	ctx.r4.s64 = ctx.r8.s64 + 12964;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15404(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15404, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8234F9E0;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r9,-15332
	ctx.r3.s64 = ctx.r9.s64 + -15332;
	// addi r4,r8,-6460
	ctx.r4.s64 = ctx.r8.s64 + -6460;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15332(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15332, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8234FA14;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r9,-15344
	ctx.r3.s64 = ctx.r9.s64 + -15344;
	// addi r4,r8,-6404
	ctx.r4.s64 = ctx.r8.s64 + -6404;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15344(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15344, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e028
	ctx.lr = 0x8234FA48;
	sub_8233E028(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r10,13004
	ctx.r4.s64 = ctx.r10.s64 + 13004;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r8,r9,-15060
	ctx.r8.s64 = ctx.r9.s64 + -15060;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,-15060(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15060, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x8234FA7C;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r5,-15360
	ctx.r3.s64 = ctx.r5.s64 + -15360;
	// addi r4,r4,-6348
	ctx.r4.s64 = ctx.r4.s64 + -6348;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15360(r5)
	PPC_STORE_U32(ctx.r5.u32 + -15360, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FAB0;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15072
	ctx.r3.s64 = ctx.r9.s64 + -15072;
	// addi r4,r8,13056
	ctx.r4.s64 = ctx.r8.s64 + 13056;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15072(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15072, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FAE4;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15324
	ctx.r3.s64 = ctx.r9.s64 + -15324;
	// addi r4,r8,-6300
	ctx.r4.s64 = ctx.r8.s64 + -6300;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15324(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15324, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FB18;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15296
	ctx.r3.s64 = ctx.r9.s64 + -15296;
	// addi r4,r8,13096
	ctx.r4.s64 = ctx.r8.s64 + 13096;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15296(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15296, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FB4C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15380
	ctx.r3.s64 = ctx.r9.s64 + -15380;
	// addi r4,r8,13152
	ctx.r4.s64 = ctx.r8.s64 + 13152;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15380(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15380, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FB80;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r31,r9,-15232
	ctx.r31.s64 = ctx.r9.s64 + -15232;
	// addi r4,r8,-6248
	ctx.r4.s64 = ctx.r8.s64 + -6248;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,-15232(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15232, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x8234FBB4;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r5,-15132
	ctx.r3.s64 = ctx.r5.s64 + -15132;
	// addi r4,r4,-6204
	ctx.r4.s64 = ctx.r4.s64 + -6204;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15132(r5)
	PPC_STORE_U32(ctx.r5.u32 + -15132, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FBE8;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15284
	ctx.r3.s64 = ctx.r9.s64 + -15284;
	// addi r4,r8,13184
	ctx.r4.s64 = ctx.r8.s64 + 13184;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15284(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15284, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FC1C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15276
	ctx.r3.s64 = ctx.r9.s64 + -15276;
	// addi r4,r8,13232
	ctx.r4.s64 = ctx.r8.s64 + 13232;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15276(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15276, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FC50;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15152
	ctx.r3.s64 = ctx.r9.s64 + -15152;
	// addi r4,r8,13272
	ctx.r4.s64 = ctx.r8.s64 + 13272;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15152(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15152, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FC84;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15444
	ctx.r3.s64 = ctx.r9.s64 + -15444;
	// addi r4,r8,13308
	ctx.r4.s64 = ctx.r8.s64 + 13308;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15444(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15444, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FCB8;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15180
	ctx.r3.s64 = ctx.r9.s64 + -15180;
	// addi r4,r8,13336
	ctx.r4.s64 = ctx.r8.s64 + 13336;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15180(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15180, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FCEC;
	sub_8233E028(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,13368
	ctx.r4.s64 = ctx.r11.s64 + 13368;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r9,-15256
	ctx.r8.s64 = ctx.r9.s64 + -15256;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,-15256(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15256, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x8234FD20;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r5,-15316
	ctx.r3.s64 = ctx.r5.s64 + -15316;
	// addi r4,r4,13400
	ctx.r4.s64 = ctx.r4.s64 + 13400;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15316(r5)
	PPC_STORE_U32(ctx.r5.u32 + -15316, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FD54;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15420
	ctx.r3.s64 = ctx.r9.s64 + -15420;
	// addi r4,r8,13448
	ctx.r4.s64 = ctx.r8.s64 + 13448;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15420(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15420, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FD88;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15096
	ctx.r3.s64 = ctx.r9.s64 + -15096;
	// addi r4,r8,13516
	ctx.r4.s64 = ctx.r8.s64 + 13516;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15096(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15096, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FDBC;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15452
	ctx.r3.s64 = ctx.r9.s64 + -15452;
	// addi r4,r8,13560
	ctx.r4.s64 = ctx.r8.s64 + 13560;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15452(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15452, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FDF0;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15392
	ctx.r3.s64 = ctx.r9.s64 + -15392;
	// addi r4,r8,13604
	ctx.r4.s64 = ctx.r8.s64 + 13604;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15392(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15392, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FE24;
	sub_8233E028(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,13656
	ctx.r4.s64 = ctx.r11.s64 + 13656;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r8,r9,-15200
	ctx.r8.s64 = ctx.r9.s64 + -15200;
	// stw r11,-15200(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15200, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x8234FE58;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r5,-15308
	ctx.r3.s64 = ctx.r5.s64 + -15308;
	// addi r4,r4,13716
	ctx.r4.s64 = ctx.r4.s64 + 13716;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15308(r5)
	PPC_STORE_U32(ctx.r5.u32 + -15308, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FE8C;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15052
	ctx.r3.s64 = ctx.r9.s64 + -15052;
	// addi r4,r8,-6152
	ctx.r4.s64 = ctx.r8.s64 + -6152;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15052(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15052, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FEC0;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15352
	ctx.r3.s64 = ctx.r9.s64 + -15352;
	// addi r4,r8,-6100
	ctx.r4.s64 = ctx.r8.s64 + -6100;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15352(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15352, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FEF4;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15080
	ctx.r3.s64 = ctx.r9.s64 + -15080;
	// addi r4,r8,13760
	ctx.r4.s64 = ctx.r8.s64 + 13760;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15080(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15080, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FF28;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r9,-15412
	ctx.r3.s64 = ctx.r9.s64 + -15412;
	// addi r4,r8,13804
	ctx.r4.s64 = ctx.r8.s64 + 13804;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15412(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15412, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FF5C;
	sub_8233E028(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// addi r4,r11,-6048
	ctx.r4.s64 = ctx.r11.s64 + -6048;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r8,r9,-15368
	ctx.r8.s64 = ctx.r9.s64 + -15368;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,-15368(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15368, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x8233e028
	ctx.lr = 0x8234FF90;
	sub_8233E028(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r5,-15432
	ctx.r3.s64 = ctx.r5.s64 + -15432;
	// addi r4,r4,13860
	ctx.r4.s64 = ctx.r4.s64 + 13860;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-15432(r5)
	PPC_STORE_U32(ctx.r5.u32 + -15432, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e028
	ctx.lr = 0x8234FFC4;
	sub_8233E028(ctx, base);
	// lis r9,-31882
	ctx.r9.s64 = -2089418752;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r9,-15088
	ctx.r8.s64 = ctx.r9.s64 + -15088;
	// stw r11,-15088(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15088, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8234FFF0"))) PPC_WEAK_FUNC(sub_8234FFF0);
PPC_FUNC_IMPL(__imp__sub_8234FFF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234FFF4"))) PPC_WEAK_FUNC(sub_8234FFF4);
PPC_FUNC_IMPL(__imp__sub_8234FFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234FFF8"))) PPC_WEAK_FUNC(sub_8234FFF8);
PPC_FUNC_IMPL(__imp__sub_8234FFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,13996
	ctx.r9.s64 = ctx.r11.s64 + 13996;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350010"))) PPC_WEAK_FUNC(sub_82350010);
PPC_FUNC_IMPL(__imp__sub_82350010) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,13996
	ctx.r10.s64 = ctx.r11.s64 + 13996;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350048
	if (ctx.cr6.eq) goto loc_82350048;
	// bl 0x82bea4e0
	ctx.lr = 0x82350048;
	sub_82BEA4E0(ctx, base);
loc_82350048:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,15100
	ctx.r9.s64 = ctx.r11.s64 + 15100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8235006c
	if (ctx.cr6.eq) goto loc_8235006C;
	// bl 0x82294a58
	ctx.lr = 0x82350068;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8235006C:
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

__attribute__((alias("__imp__sub_82350084"))) PPC_WEAK_FUNC(sub_82350084);
PPC_FUNC_IMPL(__imp__sub_82350084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350088"))) PPC_WEAK_FUNC(sub_82350088);
PPC_FUNC_IMPL(__imp__sub_82350088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,13936
	ctx.r10.s64 = ctx.r11.s64 + 13936;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350098"))) PPC_WEAK_FUNC(sub_82350098);
PPC_FUNC_IMPL(__imp__sub_82350098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,15100
	ctx.r10.s64 = ctx.r11.s64 + 15100;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823500A8"))) PPC_WEAK_FUNC(sub_823500A8);
PPC_FUNC_IMPL(__imp__sub_823500A8) {
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
	// addi r9,r11,15100
	ctx.r9.s64 = ctx.r11.s64 + 15100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x823500dc
	if (ctx.cr6.eq) goto loc_823500DC;
	// bl 0x82294a58
	ctx.lr = 0x823500D8;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823500DC:
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

__attribute__((alias("__imp__sub_823500F0"))) PPC_WEAK_FUNC(sub_823500F0);
PPC_FUNC_IMPL(__imp__sub_823500F0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,13996
	ctx.r10.s64 = ctx.r11.s64 + 13996;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350120
	if (ctx.cr6.eq) goto loc_82350120;
	// bl 0x82bea4e0
	ctx.lr = 0x82350120;
	sub_82BEA4E0(ctx, base);
loc_82350120:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,15100
	ctx.r10.s64 = ctx.r11.s64 + 15100;
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

__attribute__((alias("__imp__sub_82350140"))) PPC_WEAK_FUNC(sub_82350140);
PPC_FUNC_IMPL(__imp__sub_82350140) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82bf2190
	sub_82BF2190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235014C"))) PPC_WEAK_FUNC(sub_8235014C);
PPC_FUNC_IMPL(__imp__sub_8235014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350150"))) PPC_WEAK_FUNC(sub_82350150);
PPC_FUNC_IMPL(__imp__sub_82350150) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82e64d58
	sub_82E64D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350158"))) PPC_WEAK_FUNC(sub_82350158);
PPC_FUNC_IMPL(__imp__sub_82350158) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bbad8
	ctx.lr = 0x82350180;
	sub_822BBAD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r6,132(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82e65090
	ctx.lr = 0x82350198;
	sub_82E65090(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823501bc
	if (ctx.cr6.eq) goto loc_823501BC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823501bc
	if (ctx.cr6.eq) goto loc_823501BC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82294a58
	ctx.lr = 0x823501BC;
	sub_82294A58(ctx, base);
loc_823501BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_823501E4"))) PPC_WEAK_FUNC(sub_823501E4);
PPC_FUNC_IMPL(__imp__sub_823501E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823501E8"))) PPC_WEAK_FUNC(sub_823501E8);
PPC_FUNC_IMPL(__imp__sub_823501E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82e65130
	sub_82E65130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823501F0"))) PPC_WEAK_FUNC(sub_823501F0);
PPC_FUNC_IMPL(__imp__sub_823501F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82e65170
	sub_82E65170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823501F8"))) PPC_WEAK_FUNC(sub_823501F8);
PPC_FUNC_IMPL(__imp__sub_823501F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82e64d58
	sub_82E64D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350200"))) PPC_WEAK_FUNC(sub_82350200);
PPC_FUNC_IMPL(__imp__sub_82350200) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82bf2190
	ctx.lr = 0x82350214;
	sub_82BF2190(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235022C"))) PPC_WEAK_FUNC(sub_8235022C);
PPC_FUNC_IMPL(__imp__sub_8235022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350230"))) PPC_WEAK_FUNC(sub_82350230);
PPC_FUNC_IMPL(__imp__sub_82350230) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r10,-20492
	ctx.r3.s64 = ctx.r10.s64 + -20492;
	// addi r11,r11,14028
	ctx.r11.s64 = ctx.r11.s64 + 14028;
	// stw r11,-20492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20492, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350248"))) PPC_WEAK_FUNC(sub_82350248);
PPC_FUNC_IMPL(__imp__sub_82350248) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r10,-20492
	ctx.r3.s64 = ctx.r10.s64 + -20492;
	// addi r11,r11,13960
	ctx.r11.s64 = ctx.r11.s64 + 13960;
	// stw r11,-20492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20492, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350260"))) PPC_WEAK_FUNC(sub_82350260);
PPC_FUNC_IMPL(__imp__sub_82350260) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822959a8
	ctx.lr = 0x8235027C;
	sub_822959A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823502b4
	if (ctx.cr6.eq) goto loc_823502B4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,15096
	ctx.r10.s64 = ctx.r11.s64 + 15096;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x833b77d4
	ctx.lr = 0x8235029C;
	__imp__RtlInitializeCriticalSection(ctx, base);
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
loc_823502B4:
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

__attribute__((alias("__imp__sub_823502CC"))) PPC_WEAK_FUNC(sub_823502CC);
PPC_FUNC_IMPL(__imp__sub_823502CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823502D0"))) PPC_WEAK_FUNC(sub_823502D0);
PPC_FUNC_IMPL(__imp__sub_823502D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x823502D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822959a8
	ctx.lr = 0x823502F0;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350314
	if (ctx.cr6.eq) goto loc_82350314;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,13996
	ctx.r9.s64 = ctx.r11.s64 + 13996;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x82350318
	goto loc_82350318;
loc_82350314:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82350318:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82350360
	if (!ctx.cr6.eq) goto loc_82350360;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82350360:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235036C"))) PPC_WEAK_FUNC(sub_8235036C);
PPC_FUNC_IMPL(__imp__sub_8235036C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350370"))) PPC_WEAK_FUNC(sub_82350370);
PPC_FUNC_IMPL(__imp__sub_82350370) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82350390"))) PPC_WEAK_FUNC(sub_82350390);
PPC_FUNC_IMPL(__imp__sub_82350390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350394"))) PPC_WEAK_FUNC(sub_82350394);
PPC_FUNC_IMPL(__imp__sub_82350394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350398"))) PPC_WEAK_FUNC(sub_82350398);
PPC_FUNC_IMPL(__imp__sub_82350398) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,14040
	ctx.r9.s64 = ctx.r10.s64 + 14040;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
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
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823503C8"))) PPC_WEAK_FUNC(sub_823503C8);
PPC_FUNC_IMPL(__imp__sub_823503C8) {
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
	// bl 0x82350428
	ctx.lr = 0x823503E8;
	sub_82350428(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82350400
	if (ctx.cr6.eq) goto loc_82350400;
	// bl 0x82294a58
	ctx.lr = 0x823503FC;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82350400:
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

__attribute__((alias("__imp__sub_82350418"))) PPC_WEAK_FUNC(sub_82350418);
PPC_FUNC_IMPL(__imp__sub_82350418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,14080
	ctx.r10.s64 = ctx.r11.s64 + 14080;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350428"))) PPC_WEAK_FUNC(sub_82350428);
PPC_FUNC_IMPL(__imp__sub_82350428) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r9,r11,14040
	ctx.r9.s64 = ctx.r11.s64 + 14040;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82350464
	if (ctx.cr6.eq) goto loc_82350464;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82350720
	ctx.lr = 0x82350464;
	sub_82350720(ctx, base);
loc_82350464:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,14080
	ctx.r10.s64 = ctx.r11.s64 + 14080;
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

__attribute__((alias("__imp__sub_82350484"))) PPC_WEAK_FUNC(sub_82350484);
PPC_FUNC_IMPL(__imp__sub_82350484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350488"))) PPC_WEAK_FUNC(sub_82350488);
PPC_FUNC_IMPL(__imp__sub_82350488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823504e4
	if (ctx.cr6.eq) goto loc_823504E4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823504BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bbad8
	ctx.lr = 0x823504C8;
	sub_822BBAD8(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823504e4
	if (ctx.cr6.eq) goto loc_823504E4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823504e4
	if (ctx.cr6.eq) goto loc_823504E4;
	// bl 0x82294a58
	ctx.lr = 0x823504E4;
	sub_82294A58(ctx, base);
loc_823504E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82350508
	ctx.lr = 0x823504EC;
	sub_82350508(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350504"))) PPC_WEAK_FUNC(sub_82350504);
PPC_FUNC_IMPL(__imp__sub_82350504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350508"))) PPC_WEAK_FUNC(sub_82350508);
PPC_FUNC_IMPL(__imp__sub_82350508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82350510;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823505c0
	if (!ctx.cr6.eq) goto loc_823505C0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8235052C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b77e4
	ctx.lr = 0x82350554;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350588
	if (ctx.cr6.eq) goto loc_82350588;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82350584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_82350588:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833b77f4
	ctx.lr = 0x82350590;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823505b4
	if (!ctx.cr6.eq) goto loc_823505B4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823505B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823505B4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235052c
	if (ctx.cr6.eq) goto loc_8235052C;
loc_823505C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823505C8"))) PPC_WEAK_FUNC(sub_823505C8);
PPC_FUNC_IMPL(__imp__sub_823505C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x823505D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31883
	ctx.r28.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-31924(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31924);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-31924(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31924);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82350620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823506a4
	if (ctx.cr6.eq) goto loc_823506A4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823506a4
	if (ctx.cr6.eq) goto loc_823506A4;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,1160
	ctx.r5.s64 = ctx.r11.s64 + 1160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e64cc8
	ctx.lr = 0x8235065C;
	sub_82E64CC8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823506a4
	if (ctx.cr6.eq) goto loc_823506A4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823506a4
	if (ctx.cr6.eq) goto loc_823506A4;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823506a0
	if (!ctx.cr6.eq) goto loc_823506A0;
loc_82350684:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x823506a0
	if (!ctx.cr6.lt) goto loc_823506A0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// and r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82350684
	if (ctx.cr6.eq) goto loc_82350684;
loc_823506A0:
	// bl 0x82bed660
	ctx.lr = 0x823506A4;
	sub_82BED660(ctx, base);
loc_823506A4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82350700
	if (!ctx.cr6.eq) goto loc_82350700;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823506d4
	if (ctx.cr6.eq) goto loc_823506D4;
	// lwz r3,-31924(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31924);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823506D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823506D4:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823506f8
	if (ctx.cr6.eq) goto loc_823506F8;
	// lwz r3,-31924(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31924);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823506F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823506F8:
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// b 0x82350708
	goto loc_82350708;
loc_82350700:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82e645c8
	ctx.lr = 0x82350708;
	sub_82E645C8(ctx, base);
loc_82350708:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350720"))) PPC_WEAK_FUNC(sub_82350720);
PPC_FUNC_IMPL(__imp__sub_82350720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82350728;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
loc_82350744:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r26,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82350744
	if (!ctx.cr0.eq) goto loc_82350744;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82350770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// bne cr6,0x8235079c
	if (!ctx.cr6.eq) goto loc_8235079C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82bf2190
	ctx.lr = 0x82350788;
	sub_82BF2190(ctx, base);
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bne cr6,0x8235079c
	if (!ctx.cr6.eq) goto loc_8235079C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82bed3f8
	ctx.lr = 0x82350798;
	sub_82BED3F8(ctx, base);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_8235079C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82bea4e0
	ctx.lr = 0x823507A4;
	sub_82BEA4E0(ctx, base);
	// lis r28,-31883
	ctx.r28.s64 = -2089484288;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,-31924(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31924);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823507C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-31924(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31924);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823507E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// beq cr6,0x82350808
	if (ctx.cr6.eq) goto loc_82350808;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82350808:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350814"))) PPC_WEAK_FUNC(sub_82350814);
PPC_FUNC_IMPL(__imp__sub_82350814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350818"))) PPC_WEAK_FUNC(sub_82350818);
PPC_FUNC_IMPL(__imp__sub_82350818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82350820;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b77e4
	ctx.lr = 0x8235083C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833b77f4
	ctx.lr = 0x82350848;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235085C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350864"))) PPC_WEAK_FUNC(sub_82350864);
PPC_FUNC_IMPL(__imp__sub_82350864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350868"))) PPC_WEAK_FUNC(sub_82350868);
PPC_FUNC_IMPL(__imp__sub_82350868) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r9,r11,-17244
	ctx.r9.s64 = ctx.r11.s64 + -17244;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82350898
	if (!ctx.cr6.gt) goto loc_82350898;
	// bl 0x82431a98
	ctx.lr = 0x82350898;
	sub_82431A98(ctx, base);
loc_82350898:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824319d0
	ctx.lr = 0x823508A0;
	sub_824319D0(ctx, base);
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

__attribute__((alias("__imp__sub_823508B4"))) PPC_WEAK_FUNC(sub_823508B4);
PPC_FUNC_IMPL(__imp__sub_823508B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823508B8"))) PPC_WEAK_FUNC(sub_823508B8);
PPC_FUNC_IMPL(__imp__sub_823508B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x823508C0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// lwz r3,-31924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31924);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823508EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r3.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r23,r7,1
	ctx.r23.u64 = ctx.r7.u64 ^ 1;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// bne cr6,0x82350a44
	if (!ctx.cr6.eq) goto loc_82350A44;
	// addi r20,r3,4
	ctx.r20.s64 = ctx.r3.s64 + 4;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x833b77e4
	ctx.lr = 0x82350910;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r24,r27,16
	ctx.r24.s64 = ctx.r27.s64 + 16;
	// stw r30,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r30.u32);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x8235093c
	if (ctx.cr6.eq) goto loc_8235093C;
	// stw r26,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82294520
	ctx.lr = 0x8235093C;
	sub_82294520(ctx, base);
loc_8235093C:
	// li r31,1
	ctx.r31.s64 = 1;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82350a3c
	if (ctx.cr6.eq) goto loc_82350A3C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r22,r11,14040
	ctx.r22.s64 = ctx.r11.s64 + 14040;
loc_82350954:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// bne cr6,0x82350a3c
	if (!ctx.cr6.eq) goto loc_82350A3C;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822959a8
	ctx.lr = 0x82350968;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350998
	if (ctx.cr6.eq) goto loc_82350998;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// b 0x8235099c
	goto loc_8235099C;
loc_82350998:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8235099C:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823509d4
	if (ctx.cr6.eq) goto loc_823509D4;
	// and r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 & ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823509d8
	if (!ctx.cr6.eq) goto loc_823509D8;
loc_823509B4:
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x823509c4
	if (!ctx.cr6.gt) goto loc_823509C4;
	// li r31,1
	ctx.r31.s64 = 1;
loc_823509C4:
	// and r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 & ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823509b4
	if (ctx.cr6.eq) goto loc_823509B4;
	// b 0x823509d8
	goto loc_823509D8;
loc_823509D4:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_823509D8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823509FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82350a14
	if (!ctx.cr6.eq) goto loc_82350A14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82350fc0
	ctx.lr = 0x82350A10;
	sub_82350FC0(ctx, base);
	// b 0x82350a30
	goto loc_82350A30;
loc_82350A14:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350A30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82350A30:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82350954
	if (ctx.cr6.lt) goto loc_82350954;
loc_82350A3C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x833b77f4
	ctx.lr = 0x82350A44;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82350A44:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82350a60
	if (!ctx.cr6.eq) goto loc_82350A60;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82350A60:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350A6C"))) PPC_WEAK_FUNC(sub_82350A6C);
PPC_FUNC_IMPL(__imp__sub_82350A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350A70"))) PPC_WEAK_FUNC(sub_82350A70);
PPC_FUNC_IMPL(__imp__sub_82350A70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,14056
	ctx.r9.s64 = ctx.r10.s64 + 14056;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350AA4"))) PPC_WEAK_FUNC(sub_82350AA4);
PPC_FUNC_IMPL(__imp__sub_82350AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350AA8"))) PPC_WEAK_FUNC(sub_82350AA8);
PPC_FUNC_IMPL(__imp__sub_82350AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,13972
	ctx.r10.s64 = ctx.r11.s64 + 13972;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350AB8"))) PPC_WEAK_FUNC(sub_82350AB8);
PPC_FUNC_IMPL(__imp__sub_82350AB8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r9,r11,14056
	ctx.r9.s64 = ctx.r11.s64 + 14056;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82350af0
	if (ctx.cr6.eq) goto loc_82350AF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82350c38
	ctx.lr = 0x82350AF0;
	sub_82350C38(ctx, base);
loc_82350AF0:
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82350b1c
	if (ctx.cr6.eq) goto loc_82350B1C;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294520
	ctx.lr = 0x82350B1C;
	sub_82294520(ctx, base);
loc_82350B1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294cc8
	ctx.lr = 0x82350B24;
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

__attribute__((alias("__imp__sub_82350B38"))) PPC_WEAK_FUNC(sub_82350B38);
PPC_FUNC_IMPL(__imp__sub_82350B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82350B40;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x822b2a20
	ctx.lr = 0x82350B74;
	sub_822B2A20(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,3336
	ctx.r5.s64 = ctx.r11.s64 + 3336;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e64cc8
	ctx.lr = 0x82350B94;
	sub_82E64CC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bne cr6,0x82350bd4
	if (!ctx.cr6.eq) goto loc_82350BD4;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bne cr6,0x82350bc8
	if (!ctx.cr6.eq) goto loc_82350BC8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82350bc8
	if (ctx.cr6.eq) goto loc_82350BC8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82350BC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82350c04
	goto loc_82350C04;
loc_82350BD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82e645c8
	ctx.lr = 0x82350BDC;
	sub_82E645C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bbad8
	ctx.lr = 0x82350BE8;
	sub_822BBAD8(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82350c04
	if (ctx.cr6.eq) goto loc_82350C04;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350c04
	if (ctx.cr6.eq) goto loc_82350C04;
	// bl 0x82294a58
	ctx.lr = 0x82350C04;
	sub_82294A58(ctx, base);
loc_82350C04:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350C1C"))) PPC_WEAK_FUNC(sub_82350C1C);
PPC_FUNC_IMPL(__imp__sub_82350C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350C20"))) PPC_WEAK_FUNC(sub_82350C20);
PPC_FUNC_IMPL(__imp__sub_82350C20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x82350c30
	if (!ctx.cr6.eq) goto loc_82350C30;
	// b 0x82bed3f8
	sub_82BED3F8(ctx, base);
	return;
loc_82350C30:
	// b 0x82e644c0
	sub_82E644C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350C34"))) PPC_WEAK_FUNC(sub_82350C34);
PPC_FUNC_IMPL(__imp__sub_82350C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350C38"))) PPC_WEAK_FUNC(sub_82350C38);
PPC_FUNC_IMPL(__imp__sub_82350C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82350C40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x82350c94
	if (!ctx.cr6.eq) goto loc_82350C94;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bf2190
	ctx.lr = 0x82350C80;
	sub_82BF2190(ctx, base);
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bne cr6,0x82350c94
	if (!ctx.cr6.eq) goto loc_82350C94;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bed3f8
	ctx.lr = 0x82350C90;
	sub_82BED3F8(ctx, base);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82350C94:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bea4e0
	ctx.lr = 0x82350C9C;
	sub_82BEA4E0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82350cd0
	if (!ctx.cr6.eq) goto loc_82350CD0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350ccc
	if (ctx.cr6.eq) goto loc_82350CCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350CCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82350CCC:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82350CD0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82350cf8
	if (!ctx.cr6.eq) goto loc_82350CF8;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-31920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31920);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82350CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82350CF8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350D04"))) PPC_WEAK_FUNC(sub_82350D04);
PPC_FUNC_IMPL(__imp__sub_82350D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350D08"))) PPC_WEAK_FUNC(sub_82350D08);
PPC_FUNC_IMPL(__imp__sub_82350D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82350d30
	if (ctx.cr6.eq) goto loc_82350D30;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x82350d38
	goto loc_82350D38;
loc_82350D30:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_82350D38:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bbad8
	ctx.lr = 0x82350D40;
	sub_822BBAD8(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82350d5c
	if (ctx.cr6.eq) goto loc_82350D5C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350d5c
	if (ctx.cr6.eq) goto loc_82350D5C;
	// bl 0x82294a58
	ctx.lr = 0x82350D5C;
	sub_82294A58(ctx, base);
loc_82350D5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82350d78
	ctx.lr = 0x82350D64;
	sub_82350D78(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350D78"))) PPC_WEAK_FUNC(sub_82350D78);
PPC_FUNC_IMPL(__imp__sub_82350D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82350D80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82350da8
	if (ctx.cr6.eq) goto loc_82350DA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350DA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82350DA8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82350df4
	if (!ctx.cr6.eq) goto loc_82350DF4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82350DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82350DF4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82350e28
	if (!ctx.cr6.eq) goto loc_82350E28;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350e24
	if (ctx.cr6.eq) goto loc_82350E24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350E24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82350E24:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82350E28:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82350e5c
	if (!ctx.cr6.eq) goto loc_82350E5C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bea4e0
	ctx.lr = 0x82350E3C;
	sub_82BEA4E0(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-31920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31920);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82350E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82350E5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350E68"))) PPC_WEAK_FUNC(sub_82350E68);
PPC_FUNC_IMPL(__imp__sub_82350E68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82350e90
	if (ctx.cr6.eq) goto loc_82350E90;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// neg r4,r9
	ctx.r4.s64 = -ctx.r9.s64;
loc_82350E90:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82bed218
	sub_82BED218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350E98"))) PPC_WEAK_FUNC(sub_82350E98);
PPC_FUNC_IMPL(__imp__sub_82350E98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350E9C"))) PPC_WEAK_FUNC(sub_82350E9C);
PPC_FUNC_IMPL(__imp__sub_82350E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350EA0"))) PPC_WEAK_FUNC(sub_82350EA0);
PPC_FUNC_IMPL(__imp__sub_82350EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82bed660
	sub_82BED660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350EA8"))) PPC_WEAK_FUNC(sub_82350EA8);
PPC_FUNC_IMPL(__imp__sub_82350EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82bf2190
	sub_82BF2190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350EB4"))) PPC_WEAK_FUNC(sub_82350EB4);
PPC_FUNC_IMPL(__imp__sub_82350EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350EB8"))) PPC_WEAK_FUNC(sub_82350EB8);
PPC_FUNC_IMPL(__imp__sub_82350EB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350EC0"))) PPC_WEAK_FUNC(sub_82350EC0);
PPC_FUNC_IMPL(__imp__sub_82350EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82350EC8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,40
	ctx.r3.s64 = 40;
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
	// bl 0x822959a8
	ctx.lr = 0x82350EF4;
	sub_822959A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82350f78
	if (ctx.cr6.eq) goto loc_82350F78;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r10,r11,14056
	ctx.r10.s64 = ctx.r11.s64 + 14056;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r24,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r24.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r24,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r24.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r24,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r24.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// stw r24,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r24.u32);
	// bl 0x82350b38
	ctx.lr = 0x82350F4C;
	sub_82350B38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82350f84
	if (!ctx.cr6.eq) goto loc_82350F84;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350F6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82350F78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
loc_82350F84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350F90"))) PPC_WEAK_FUNC(sub_82350F90);
PPC_FUNC_IMPL(__imp__sub_82350F90) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82294a58
	sub_82294A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350F98"))) PPC_WEAK_FUNC(sub_82350F98);
PPC_FUNC_IMPL(__imp__sub_82350F98) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82294520
	sub_82294520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350FBC"))) PPC_WEAK_FUNC(sub_82350FBC);
PPC_FUNC_IMPL(__imp__sub_82350FBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350FC0"))) PPC_WEAK_FUNC(sub_82350FC0);
PPC_FUNC_IMPL(__imp__sub_82350FC0) {
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
	ctx.lr = 0x82350FF0;
	sub_82294AC0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82351008
	if (ctx.cr0.eq) goto loc_82351008;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82351008:
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

__attribute__((alias("__imp__sub_82351028"))) PPC_WEAK_FUNC(sub_82351028);
PPC_FUNC_IMPL(__imp__sub_82351028) {
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
	ctx.lr = 0x82351054;
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

__attribute__((alias("__imp__sub_82351074"))) PPC_WEAK_FUNC(sub_82351074);
PPC_FUNC_IMPL(__imp__sub_82351074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351078"))) PPC_WEAK_FUNC(sub_82351078);
PPC_FUNC_IMPL(__imp__sub_82351078) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,14080
	ctx.r9.s64 = ctx.r11.s64 + 14080;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x823510ac
	if (ctx.cr6.eq) goto loc_823510AC;
	// bl 0x82294a58
	ctx.lr = 0x823510A8;
	sub_82294A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823510AC:
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

__attribute__((alias("__imp__sub_823510C0"))) PPC_WEAK_FUNC(sub_823510C0);
PPC_FUNC_IMPL(__imp__sub_823510C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,14080
	ctx.r10.s64 = ctx.r11.s64 + 14080;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823510D0"))) PPC_WEAK_FUNC(sub_823510D0);
PPC_FUNC_IMPL(__imp__sub_823510D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,-31856(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31856);
	// b 0x82d7c498
	sub_82D7C498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823510E8"))) PPC_WEAK_FUNC(sub_823510E8);
PPC_FUNC_IMPL(__imp__sub_823510E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d7c620
	sub_82D7C620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823510EC"))) PPC_WEAK_FUNC(sub_823510EC);
PPC_FUNC_IMPL(__imp__sub_823510EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823510F0"))) PPC_WEAK_FUNC(sub_823510F0);
PPC_FUNC_IMPL(__imp__sub_823510F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,5134
	ctx.r3.s64 = 5134;
	// b 0x82d7fd48
	sub_82D7FD48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823510F8"))) PPC_WEAK_FUNC(sub_823510F8);
PPC_FUNC_IMPL(__imp__sub_823510F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// addi r3,r11,-31884
	ctx.r3.s64 = ctx.r11.s64 + -31884;
	// b 0x82e483b0
	sub_82E483B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351104"))) PPC_WEAK_FUNC(sub_82351104);
PPC_FUNC_IMPL(__imp__sub_82351104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351108"))) PPC_WEAK_FUNC(sub_82351108);
PPC_FUNC_IMPL(__imp__sub_82351108) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351110"))) PPC_WEAK_FUNC(sub_82351110);
PPC_FUNC_IMPL(__imp__sub_82351110) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r11,24968
	ctx.r9.s64 = ctx.r11.s64 + 24968;
	// addi r8,r10,25256
	ctx.r8.s64 = ctx.r10.s64 + 25256;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// bl 0x8229c068
	ctx.lr = 0x82351140;
	sub_8229C068(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r5,r7,-3112
	ctx.r5.s64 = ctx.r7.s64 + -3112;
	// addi r4,r6,-2844
	ctx.r4.s64 = ctx.r6.s64 + -2844;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// bl 0x8229c068
	ctx.lr = 0x82351160;
	sub_8229C068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229c628
	ctx.lr = 0x82351168;
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

__attribute__((alias("__imp__sub_8235117C"))) PPC_WEAK_FUNC(sub_8235117C);
PPC_FUNC_IMPL(__imp__sub_8235117C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351180"))) PPC_WEAK_FUNC(sub_82351180);
PPC_FUNC_IMPL(__imp__sub_82351180) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// addi r8,r10,14864
	ctx.r8.s64 = ctx.r10.s64 + 14864;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lbz r11,28847(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28847);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// addi r5,r7,24968
	ctx.r5.s64 = ctx.r7.s64 + 24968;
	// lwz r4,68(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r10,r11,31,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFFFFF80;
	// clrlwi r8,r4,2
	ctx.r8.u64 = ctx.r4.u32 & 0x3FFFFFFF;
	// lwz r11,-25660(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// addi r6,r6,25256
	ctx.r6.s64 = ctx.r6.s64 + 25256;
	// oris r5,r7,16384
	ctx.r5.u64 = ctx.r7.u64 | 1073741824;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r6.u32);
	// stw r5,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// stw r11,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823511E0"))) PPC_WEAK_FUNC(sub_823511E0);
PPC_FUNC_IMPL(__imp__sub_823511E0) {
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
	// bl 0x82351110
	ctx.lr = 0x82351200;
	sub_82351110(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351234
	if (ctx.cr6.eq) goto loc_82351234;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235122c
	if (ctx.cr6.lt) goto loc_8235122C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82351234
	if (!ctx.cr6.gt) goto loc_82351234;
loc_8235122C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294a58
	ctx.lr = 0x82351234;
	sub_82294A58(ctx, base);
loc_82351234:
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

__attribute__((alias("__imp__sub_82351250"))) PPC_WEAK_FUNC(sub_82351250);
PPC_FUNC_IMPL(__imp__sub_82351250) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x822959a8
	ctx.lr = 0x8235126C;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823512f4
	if (ctx.cr6.eq) goto loc_823512F4;
	// lis r11,1032
	ctx.r11.s64 = 67633152;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// ori r8,r11,16516
	ctx.r8.u64 = ctx.r11.u64 | 16516;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32203
	ctx.r4.s64 = -2110455808;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-32203
	ctx.r31.s64 = -2110455808;
	// addi r11,r7,21544
	ctx.r11.s64 = ctx.r7.s64 + 21544;
	// addi r8,r5,-20912
	ctx.r8.s64 = ctx.r5.s64 + -20912;
	// addi r7,r4,12408
	ctx.r7.s64 = ctx.r4.s64 + 12408;
	// addi r6,r10,14488
	ctx.r6.s64 = ctx.r10.s64 + 14488;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r31,4480
	ctx.r5.s64 = ctx.r31.s64 + 4480;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82398460
	ctx.lr = 0x823512E0;
	sub_82398460(ctx, base);
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
loc_823512F4:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8235130C"))) PPC_WEAK_FUNC(sub_8235130C);
PPC_FUNC_IMPL(__imp__sub_8235130C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351310"))) PPC_WEAK_FUNC(sub_82351310);
PPC_FUNC_IMPL(__imp__sub_82351310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82351318;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,14476
	ctx.r29.s64 = ctx.r11.s64 + 14476;
	// lwz r10,25336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25336);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82351348
	if (!ctx.cr6.eq) goto loc_82351348;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c20d0
	ctx.lr = 0x8235133C;
	sub_822C20D0(ctx, base);
	// stw r3,25336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25336, ctx.r3.u32);
	// bl 0x822c2180
	ctx.lr = 0x82351344;
	sub_822C2180(ctx, base);
	// lwz r10,25336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25336);
loc_82351348:
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r11,-31912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31912);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82351368
	if (ctx.cr6.eq) goto loc_82351368;
	// bl 0x822c6380
	ctx.lr = 0x8235135C;
	sub_822C6380(ctx, base);
	// lwz r11,-31912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31912);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// b 0x82351370
	goto loc_82351370;
loc_82351368:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_82351370:
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82351398
	if (!ctx.cr6.eq) goto loc_82351398;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aace8
	ctx.lr = 0x82351388;
	sub_822AACE8(ctx, base);
	// stw r3,25216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25216, ctx.r3.u32);
	// bl 0x822aada8
	ctx.lr = 0x82351390;
	sub_822AADA8(ctx, base);
	// lwz r11,-31912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31912);
	// lwz r10,25216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25216);
loc_82351398:
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823513c4
	if (!ctx.cr6.eq) goto loc_823513C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82398580
	ctx.lr = 0x823513B4;
	sub_82398580(ctx, base);
	// stw r3,-31632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31632, ctx.r3.u32);
	// bl 0x82398640
	ctx.lr = 0x823513BC;
	sub_82398640(ctx, base);
	// lwz r11,-31912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31912);
	// lwz r10,-31632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31632);
loc_823513C4:
	// lis r9,-31884
	ctx.r9.s64 = -2089549824;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r9,25076(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25076);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823513fc
	if (ctx.cr6.eq) goto loc_823513FC;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822949a0
	ctx.lr = 0x823513E0;
	sub_822949A0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823513fc
	if (!ctx.cr6.eq) goto loc_823513FC;
	// lwz r3,-31912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823513FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823513FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351404"))) PPC_WEAK_FUNC(sub_82351404);
PPC_FUNC_IMPL(__imp__sub_82351404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351408"))) PPC_WEAK_FUNC(sub_82351408);
PPC_FUNC_IMPL(__imp__sub_82351408) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351410"))) PPC_WEAK_FUNC(sub_82351410);
PPC_FUNC_IMPL(__imp__sub_82351410) {
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
	// lis r31,-31884
	ctx.r31.s64 = -2089549824;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,25336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25336);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82351454
	if (!ctx.cr6.eq) goto loc_82351454;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// bl 0x822c20d0
	ctx.lr = 0x82351448;
	sub_822C20D0(ctx, base);
	// stw r3,25336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25336, ctx.r3.u32);
	// bl 0x822c2180
	ctx.lr = 0x82351450;
	sub_822C2180(ctx, base);
	// lwz r11,25336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25336);
loc_82351454:
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

__attribute__((alias("__imp__sub_8235147C"))) PPC_WEAK_FUNC(sub_8235147C);
PPC_FUNC_IMPL(__imp__sub_8235147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351480"))) PPC_WEAK_FUNC(sub_82351480);
PPC_FUNC_IMPL(__imp__sub_82351480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25348);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stb r9,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// oris r7,r8,32768
	ctx.r7.u64 = ctx.r8.u64 | 2147483648;
	// stw r7,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823514A4"))) PPC_WEAK_FUNC(sub_823514A4);
PPC_FUNC_IMPL(__imp__sub_823514A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823514A8"))) PPC_WEAK_FUNC(sub_823514A8);
PPC_FUNC_IMPL(__imp__sub_823514A8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lwz r11,25348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25348);
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwimi r9,r10,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823514D0"))) PPC_WEAK_FUNC(sub_823514D0);
PPC_FUNC_IMPL(__imp__sub_823514D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823514D8"))) PPC_WEAK_FUNC(sub_823514D8);
PPC_FUNC_IMPL(__imp__sub_823514D8) {
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
	// addi r31,r11,23136
	ctx.r31.s64 = ctx.r11.s64 + 23136;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// beq cr6,0x8235151c
	if (ctx.cr6.eq) goto loc_8235151C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21576
	ctx.r4.s64 = ctx.r11.s64 + 21576;
	// bl 0x82cafbe0
	ctx.lr = 0x8235151C;
	sub_82CAFBE0(ctx, base);
loc_8235151C:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82351538
	if (ctx.cr6.eq) goto loc_82351538;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21592
	ctx.r4.s64 = ctx.r11.s64 + 21592;
	// bl 0x82cafbe0
	ctx.lr = 0x82351538;
	sub_82CAFBE0(ctx, base);
loc_82351538:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82351554
	if (ctx.cr6.eq) goto loc_82351554;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21612
	ctx.r4.s64 = ctx.r11.s64 + 21612;
	// bl 0x82cafbe0
	ctx.lr = 0x82351554;
	sub_82CAFBE0(ctx, base);
loc_82351554:
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82351570
	if (ctx.cr6.eq) goto loc_82351570;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21628
	ctx.r4.s64 = ctx.r11.s64 + 21628;
	// bl 0x82cafbe0
	ctx.lr = 0x82351570;
	sub_82CAFBE0(ctx, base);
loc_82351570:
	// rlwinm r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235158c
	if (ctx.cr6.eq) goto loc_8235158C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21648
	ctx.r4.s64 = ctx.r11.s64 + 21648;
	// bl 0x82cafbe0
	ctx.lr = 0x8235158C;
	sub_82CAFBE0(ctx, base);
loc_8235158C:
	// rlwinm r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823515a8
	if (ctx.cr6.eq) goto loc_823515A8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21680
	ctx.r4.s64 = ctx.r11.s64 + 21680;
	// bl 0x82cafbe0
	ctx.lr = 0x823515A8;
	sub_82CAFBE0(ctx, base);
loc_823515A8:
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823515c8
	if (ctx.cr6.eq) goto loc_823515C8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,21700
	ctx.r4.s64 = ctx.r11.s64 + 21700;
	// bl 0x82cafbe0
	ctx.lr = 0x823515C4;
	sub_82CAFBE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823515C8:
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
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// bgt cr6,0x82351670
	if (ctx.cr6.gt) goto loc_82351670;
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// addi r12,r12,5632
	ctx.r12.s64 = ctx.r12.s64 + 5632;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_8235161C;
	case 1:
		goto loc_82351628;
	case 2:
		goto loc_82351634;
	case 3:
		goto loc_82351640;
	case 4:
		goto loc_8235164C;
	case 5:
		goto loc_82351658;
	case 6:
		goto loc_82351664;
	default:
		__builtin_unreachable();
	}
	// lwz r17,5660(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5660);
	// lwz r17,5672(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5672);
	// lwz r17,5684(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5684);
	// lwz r17,5696(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5696);
	// lwz r17,5708(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5708);
	// lwz r17,5720(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5720);
	// lwz r17,5732(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5732);
loc_8235161C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,21720
	ctx.r3.s64 = ctx.r11.s64 + 21720;
	// blr 
	return;
loc_82351628:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,21740
	ctx.r3.s64 = ctx.r11.s64 + 21740;
	// blr 
	return;
loc_82351634:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,21764
	ctx.r3.s64 = ctx.r11.s64 + 21764;
	// blr 
	return;
loc_82351640:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,21784
	ctx.r3.s64 = ctx.r11.s64 + 21784;
	// blr 
	return;
loc_8235164C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,21812
	ctx.r3.s64 = ctx.r11.s64 + 21812;
	// blr 
	return;
loc_82351658:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,21840
	ctx.r3.s64 = ctx.r11.s64 + 21840;
	// blr 
	return;
loc_82351664:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,21864
	ctx.r3.s64 = ctx.r11.s64 + 21864;
	// blr 
	return;
loc_82351670:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,21892
	ctx.r3.s64 = ctx.r11.s64 + 21892;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235167C"))) PPC_WEAK_FUNC(sub_8235167C);
PPC_FUNC_IMPL(__imp__sub_8235167C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351680"))) PPC_WEAK_FUNC(sub_82351680);
PPC_FUNC_IMPL(__imp__sub_82351680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x82351828
	if (ctx.cr6.gt) goto loc_82351828;
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// addi r12,r12,5808
	ctx.r12.s64 = ctx.r12.s64 + 5808;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_823516C0;
	case 1:
		goto loc_82351784;
	case 2:
		goto loc_823517C8;
	case 3:
		goto loc_823517E4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,5824(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5824);
	// lwz r17,6020(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 6020);
	// lwz r17,6088(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 6088);
	// lwz r17,6116(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 6116);
loc_823516C0:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82351768
	if (ctx.cr6.gt) goto loc_82351768;
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// addi r12,r12,5864
	ctx.r12.s64 = ctx.r12.s64 + 5864;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_823516F8;
	case 1:
		goto loc_82351714;
	case 2:
		goto loc_82351730;
	case 3:
		goto loc_8235174C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,5880(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5880);
	// lwz r17,5908(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5908);
	// lwz r17,5936(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5936);
	// lwz r17,5964(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5964);
loc_823516F8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,21900
	ctx.r3.s64 = ctx.r11.s64 + 21900;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82351714:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,21924
	ctx.r3.s64 = ctx.r11.s64 + 21924;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82351730:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,21944
	ctx.r3.s64 = ctx.r11.s64 + 21944;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8235174C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,21968
	ctx.r3.s64 = ctx.r11.s64 + 21968;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82351768:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,21996
	ctx.r3.s64 = ctx.r11.s64 + 21996;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82351784:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823517ac
	if (ctx.cr6.eq) goto loc_823517AC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,22004
	ctx.r3.s64 = ctx.r11.s64 + 22004;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823517AC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,22032
	ctx.r3.s64 = ctx.r11.s64 + 22032;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823517C8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,22068
	ctx.r3.s64 = ctx.r11.s64 + 22068;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823517E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294d90
	ctx.lr = 0x823517EC;
	sub_82294D90(ctx, base);
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r31,256(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82351810
	if (ctx.cr6.eq) goto loc_82351810;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351810
	if (ctx.cr6.eq) goto loc_82351810;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82294a58
	ctx.lr = 0x82351810;
	sub_82294A58(ctx, base);
loc_82351810:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82351828:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,22080
	ctx.r3.s64 = ctx.r11.s64 + 22080;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351844"))) PPC_WEAK_FUNC(sub_82351844);
PPC_FUNC_IMPL(__imp__sub_82351844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351848"))) PPC_WEAK_FUNC(sub_82351848);
PPC_FUNC_IMPL(__imp__sub_82351848) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351850"))) PPC_WEAK_FUNC(sub_82351850);
PPC_FUNC_IMPL(__imp__sub_82351850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351854"))) PPC_WEAK_FUNC(sub_82351854);
PPC_FUNC_IMPL(__imp__sub_82351854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351858"))) PPC_WEAK_FUNC(sub_82351858);
PPC_FUNC_IMPL(__imp__sub_82351858) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 11, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r4,42
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 42, ctx.xer);
	// bne cr6,0x82351890
	if (!ctx.cr6.eq) goto loc_82351890;
	// lis r10,-31904
	ctx.r10.s64 = -2090860544;
	// lbz r11,-14536(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -14536);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351890
	if (ctx.cr6.eq) goto loc_82351890;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,-14536(r10)
	PPC_STORE_U8(ctx.r10.u32 + -14536, ctx.r11.u8);
loc_82351890:
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25348);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r8,r10,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823518b4
	if (!ctx.cr6.eq) goto loc_823518B4;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823518B4:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82356f70
	sub_82356F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823518BC"))) PPC_WEAK_FUNC(sub_823518BC);
PPC_FUNC_IMPL(__imp__sub_823518BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823518C0"))) PPC_WEAK_FUNC(sub_823518C0);
PPC_FUNC_IMPL(__imp__sub_823518C0) {
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
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d7c620
	ctx.lr = 0x823518D8;
	sub_82D7C620(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r11,22108
	ctx.r6.s64 = ctx.r11.s64 + 22108;
	// addi r3,r10,11272
	ctx.r3.s64 = ctx.r10.s64 + 11272;
	// li r7,515
	ctx.r7.s64 = 515;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x823518F8;
	sub_82351858(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351908"))) PPC_WEAK_FUNC(sub_82351908);
PPC_FUNC_IMPL(__imp__sub_82351908) {
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
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d7c620
	ctx.lr = 0x82351920;
	sub_82D7C620(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r11,22108
	ctx.r6.s64 = ctx.r11.s64 + 22108;
	// addi r3,r10,11272
	ctx.r3.s64 = ctx.r10.s64 + 11272;
	// li r7,515
	ctx.r7.s64 = 515;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x82351940;
	sub_82351858(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351950"))) PPC_WEAK_FUNC(sub_82351950);
PPC_FUNC_IMPL(__imp__sub_82351950) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,218
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 218, ctx.xer);
	// blt cr6,0x82351960
	if (ctx.cr6.lt) goto loc_82351960;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82351960:
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mulli r10,r3,496
	ctx.r10.s64 = ctx.r3.s64 * 496;
	// addi r11,r11,-17128
	ctx.r11.s64 = ctx.r11.s64 + -17128;
	// addi r9,r11,156
	ctx.r9.s64 = ctx.r11.s64 + 156;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r11,-3
	ctx.r8.s64 = ctx.r11.s64 + -3;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351984"))) PPC_WEAK_FUNC(sub_82351984);
PPC_FUNC_IMPL(__imp__sub_82351984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351988"))) PPC_WEAK_FUNC(sub_82351988);
PPC_FUNC_IMPL(__imp__sub_82351988) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,218
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 218, ctx.xer);
	// blt cr6,0x82351998
	if (ctx.cr6.lt) goto loc_82351998;
loc_82351990:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82351998:
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// mulli r11,r3,496
	ctx.r11.s64 = ctx.r3.s64 * 496;
	// addi r10,r10,-17128
	ctx.r10.s64 = ctx.r10.s64 + -17128;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,156(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82351990
	if (!ctx.cr6.eq) goto loc_82351990;
	// lbz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 160);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823519CC"))) PPC_WEAK_FUNC(sub_823519CC);
PPC_FUNC_IMPL(__imp__sub_823519CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823519D0"))) PPC_WEAK_FUNC(sub_823519D0);
PPC_FUNC_IMPL(__imp__sub_823519D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,218
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 218, ctx.xer);
	// blt cr6,0x823519e0
	if (ctx.cr6.lt) goto loc_823519E0;
loc_823519D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823519E0:
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// mulli r11,r3,496
	ctx.r11.s64 = ctx.r3.s64 * 496;
	// addi r10,r10,-17128
	ctx.r10.s64 = ctx.r10.s64 + -17128;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,156(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823519d8
	if (!ctx.cr6.eq) goto loc_823519D8;
	// lbz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 160);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351A14"))) PPC_WEAK_FUNC(sub_82351A14);
PPC_FUNC_IMPL(__imp__sub_82351A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351A18"))) PPC_WEAK_FUNC(sub_82351A18);
PPC_FUNC_IMPL(__imp__sub_82351A18) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351A20"))) PPC_WEAK_FUNC(sub_82351A20);
PPC_FUNC_IMPL(__imp__sub_82351A20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,218
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 218, ctx.xer);
	// bge cr6,0x82351a48
	if (!ctx.cr6.lt) goto loc_82351A48;
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// mulli r11,r3,496
	ctx.r11.s64 = ctx.r3.s64 * 496;
	// addi r10,r10,-17128
	ctx.r10.s64 = ctx.r10.s64 + -17128;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// lbz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 104);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82351A48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351A50"))) PPC_WEAK_FUNC(sub_82351A50);
PPC_FUNC_IMPL(__imp__sub_82351A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r10,r11,-17128
	ctx.r10.s64 = ctx.r11.s64 + -17128;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// ori r8,r8,42592
	ctx.r8.u64 = ctx.r8.u64 | 42592;
loc_82351A6C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82351a94
	if (ctx.cr6.eq) goto loc_82351A94;
	// addi r11,r11,496
	ctx.r11.s64 = ctx.r11.s64 + 496;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,496
	ctx.r10.s64 = ctx.r10.s64 + 496;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82351a6c
	if (ctx.cr6.lt) goto loc_82351A6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82351A94:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351A9C"))) PPC_WEAK_FUNC(sub_82351A9C);
PPC_FUNC_IMPL(__imp__sub_82351A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351AA0"))) PPC_WEAK_FUNC(sub_82351AA0);
PPC_FUNC_IMPL(__imp__sub_82351AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82351AA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,-17128
	ctx.r30.s64 = ctx.r11.s64 + -17128;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r28,r11,42592
	ctx.r28.u64 = ctx.r11.u64 | 42592;
loc_82351AC8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb20a0
	ctx.lr = 0x82351AD4;
	sub_82CB20A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82351afc
	if (ctx.cr6.eq) goto loc_82351AFC;
	// addi r31,r31,496
	ctx.r31.s64 = ctx.r31.s64 + 496;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,496
	ctx.r30.s64 = ctx.r30.s64 + 496;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82351ac8
	if (ctx.cr6.lt) goto loc_82351AC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82351AFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351B08"))) PPC_WEAK_FUNC(sub_82351B08);
PPC_FUNC_IMPL(__imp__sub_82351B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82351b3c
	if (!ctx.cr6.eq) goto loc_82351B3C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,22136
	ctx.r3.s64 = ctx.r11.s64 + 22136;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82351B3C:
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82351b64
	if (!ctx.cr6.eq) goto loc_82351B64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,22148
	ctx.r3.s64 = ctx.r11.s64 + 22148;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82351B64:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82351b78
	if (ctx.cr6.eq) goto loc_82351B78;
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// b 0x82351b80
	goto loc_82351B80;
loc_82351B78:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_82351B80:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bbad8
	ctx.lr = 0x82351B88;
	sub_822BBAD8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82351bac
	if (ctx.cr6.eq) goto loc_82351BAC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351bac
	if (ctx.cr6.eq) goto loc_82351BAC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82294a58
	ctx.lr = 0x82351BAC;
	sub_82294A58(ctx, base);
loc_82351BAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351BC4"))) PPC_WEAK_FUNC(sub_82351BC4);
PPC_FUNC_IMPL(__imp__sub_82351BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351BC8"))) PPC_WEAK_FUNC(sub_82351BC8);
PPC_FUNC_IMPL(__imp__sub_82351BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82351BD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-2608(r1)
	ea = -2608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r10,28846(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28846);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82351e40
	if (!ctx.cr6.eq) goto loc_82351E40;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82351e40
	if (ctx.cr6.eq) goto loc_82351E40;
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mulli r10,r27,496
	ctx.r10.s64 = ctx.r27.s64 * 496;
	// addi r11,r11,-17128
	ctx.r11.s64 = ctx.r11.s64 + -17128;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r11,224
	ctx.r29.s64 = ctx.r11.s64 + 224;
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82351e40
	if (!ctx.cr6.eq) goto loc_82351E40;
	// lbz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 104);
	// addi r28,r11,104
	ctx.r28.s64 = ctx.r11.s64 + 104;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82351e40
	if (ctx.cr6.eq) goto loc_82351E40;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,22160
	ctx.r3.s64 = ctx.r11.s64 + 22160;
	// bl 0x823518c0
	ctx.lr = 0x82351C30;
	sub_823518C0(ctx, base);
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-24656
	ctx.r4.s64 = ctx.r10.s64 + -24656;
	// bl 0x82cafc18
	ctx.lr = 0x82351C40;
	sub_82CAFC18(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// addi r4,r9,22208
	ctx.r4.s64 = ctx.r9.s64 + 22208;
	// bl 0x82cafc18
	ctx.lr = 0x82351C50;
	sub_82CAFC18(ctx, base);
	// addi r4,r1,1520
	ctx.r4.s64 = ctx.r1.s64 + 1520;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82cafc18
	ctx.lr = 0x82351C5C;
	sub_82CAFC18(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,-18328
	ctx.r4.s64 = ctx.r8.s64 + -18328;
	// bl 0x82cb0328
	ctx.lr = 0x82351C6C;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82351c80
	if (!ctx.cr6.eq) goto loc_82351C80;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,22276
	ctx.r4.s64 = ctx.r11.s64 + 22276;
	// b 0x82351d18
	goto loc_82351D18;
loc_82351C80:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18304
	ctx.r4.s64 = ctx.r11.s64 + -18304;
	// bl 0x82cb0328
	ctx.lr = 0x82351C90;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82351ca4
	if (!ctx.cr6.eq) goto loc_82351CA4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,22292
	ctx.r4.s64 = ctx.r11.s64 + 22292;
	// b 0x82351d18
	goto loc_82351D18;
loc_82351CA4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18280
	ctx.r4.s64 = ctx.r11.s64 + -18280;
	// bl 0x82cb0328
	ctx.lr = 0x82351CB4;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82351cc8
	if (!ctx.cr6.eq) goto loc_82351CC8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,22312
	ctx.r4.s64 = ctx.r11.s64 + 22312;
	// b 0x82351d18
	goto loc_82351D18;
loc_82351CC8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18232
	ctx.r4.s64 = ctx.r11.s64 + -18232;
	// bl 0x82cb0328
	ctx.lr = 0x82351CD8;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82351d10
	if (ctx.cr6.eq) goto loc_82351D10;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18260
	ctx.r4.s64 = ctx.r11.s64 + -18260;
	// bl 0x82cb0328
	ctx.lr = 0x82351CF0;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82351d10
	if (ctx.cr6.eq) goto loc_82351D10;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,22348
	ctx.r4.s64 = ctx.r11.s64 + 22348;
	// bl 0x82cb0328
	ctx.lr = 0x82351D08;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82351d20
	if (!ctx.cr6.eq) goto loc_82351D20;
loc_82351D10:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,22328
	ctx.r4.s64 = ctx.r11.s64 + 22328;
loc_82351D18:
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82cafbe0
	ctx.lr = 0x82351D20;
	sub_82CAFBE0(ctx, base);
loc_82351D20:
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x822bbad8
	ctx.lr = 0x82351D2C;
	sub_822BBAD8(ctx, base);
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r3,-31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31884);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82351D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,484(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// addi r9,r1,356
	ctx.r9.s64 = ctx.r1.s64 + 356;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82351d64
	if (ctx.cr6.eq) goto loc_82351D64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82351d64
	if (ctx.cr6.eq) goto loc_82351D64;
	// bl 0x82294a58
	ctx.lr = 0x82351D64;
	sub_82294A58(ctx, base);
loc_82351D64:
	// lwz r3,-31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31884);
	// addi r30,r1,500
	ctx.r30.s64 = ctx.r1.s64 + 500;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82351D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82351e1c
	if (ctx.cr6.eq) goto loc_82351E1C;
	// addi r4,r1,1520
	ctx.r4.s64 = ctx.r1.s64 + 1520;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822bbad8
	ctx.lr = 0x82351D9C;
	sub_822BBAD8(ctx, base);
	// lwz r11,-31884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31884);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,132(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82351DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// addi r7,r1,212
	ctx.r7.s64 = ctx.r1.s64 + 212;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82351dd8
	if (ctx.cr6.eq) goto loc_82351DD8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82351dd8
	if (ctx.cr6.eq) goto loc_82351DD8;
	// bl 0x82294a58
	ctx.lr = 0x82351DD8;
	sub_82294A58(ctx, base);
loc_82351DD8:
	// lwz r3,-31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31884);
	// addi r30,r1,1524
	ctx.r30.s64 = ctx.r1.s64 + 1524;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82351DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r9,22356
	ctx.r6.s64 = ctx.r9.s64 + 22356;
	// addi r3,r8,11272
	ctx.r3.s64 = ctx.r8.s64 + 11272;
	// li r7,731
	ctx.r7.s64 = 731;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x82351E1C;
	sub_82351858(ctx, base);
loc_82351E1C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82352710
	ctx.lr = 0x82351E30;
	sub_82352710(ctx, base);
	// bl 0x82353260
	ctx.lr = 0x82351E34;
	sub_82353260(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,22380
	ctx.r3.s64 = ctx.r11.s64 + 22380;
	// bl 0x823518c0
	ctx.lr = 0x82351E40;
	sub_823518C0(ctx, base);
loc_82351E40:
	// addi r1,r1,2608
	ctx.r1.s64 = ctx.r1.s64 + 2608;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351E48"))) PPC_WEAK_FUNC(sub_82351E48);
PPC_FUNC_IMPL(__imp__sub_82351E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82351E50;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82351f3c
	if (ctx.cr6.eq) goto loc_82351F3C;
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mulli r31,r3,496
	ctx.r31.s64 = ctx.r3.s64 * 496;
	// addi r30,r11,-17128
	ctx.r30.s64 = ctx.r11.s64 + -17128;
	// add r28,r31,r30
	ctx.r28.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lwz r29,224(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82351f3c
	if (ctx.cr6.eq) goto loc_82351F3C;
	// lbz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351f3c
	if (ctx.cr6.eq) goto loc_82351F3C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,22420
	ctx.r3.s64 = ctx.r11.s64 + 22420;
	// bl 0x823518c0
	ctx.lr = 0x82351E90;
	sub_823518C0(ctx, base);
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lwz r4,100(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r3,r10,-15020
	ctx.r3.s64 = ctx.r10.s64 + -15020;
	// bl 0x8280e090
	ctx.lr = 0x82351EA0;
	sub_8280E090(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82351EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r30,488
	ctx.r29.s64 = ctx.r30.s64 + 488;
	// addi r7,r30,224
	ctx.r7.s64 = ctx.r30.s64 + 224;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzx r6,r31,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// stwx r28,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r28.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82351f30
	if (ctx.cr6.eq) goto loc_82351F30;
	// addi r11,r30,230
	ctx.r11.s64 = ctx.r30.s64 + 230;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822bbad8
	ctx.lr = 0x82351EE4;
	sub_822BBAD8(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,-31884(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31884);
	// lwz r4,132(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,144(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82351F04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82351f20
	if (ctx.cr6.eq) goto loc_82351F20;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82351f20
	if (ctx.cr6.eq) goto loc_82351F20;
	// bl 0x82294a58
	ctx.lr = 0x82351F20;
	sub_82294A58(ctx, base);
loc_82351F20:
	// lwzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x82294a58
	ctx.lr = 0x82351F28;
	sub_82294A58(ctx, base);
	// stwx r28,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u32);
	// sth r28,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r28.u16);
loc_82351F30:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,22468
	ctx.r3.s64 = ctx.r11.s64 + 22468;
	// bl 0x823518c0
	ctx.lr = 0x82351F3C;
	sub_823518C0(ctx, base);
loc_82351F3C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351F44"))) PPC_WEAK_FUNC(sub_82351F44);
PPC_FUNC_IMPL(__imp__sub_82351F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351F48"))) PPC_WEAK_FUNC(sub_82351F48);
PPC_FUNC_IMPL(__imp__sub_82351F48) {
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
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r3,-31860(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31860);
	// bl 0x82351aa0
	ctx.lr = 0x82351F60;
	sub_82351AA0(ctx, base);
	// bl 0x82351e48
	ctx.lr = 0x82351F64;
	sub_82351E48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351F74"))) PPC_WEAK_FUNC(sub_82351F74);
PPC_FUNC_IMPL(__imp__sub_82351F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351F78"))) PPC_WEAK_FUNC(sub_82351F78);
PPC_FUNC_IMPL(__imp__sub_82351F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82351F80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-17128
	ctx.r11.s64 = ctx.r11.s64 + -17128;
	// li r30,218
	ctx.r30.s64 = 218;
	// addi r31,r11,160
	ctx.r31.s64 = ctx.r11.s64 + 160;
loc_82351F98:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82351fd4
	if (!ctx.cr6.eq) goto loc_82351FD4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82351fd4
	if (!ctx.cr6.eq) goto loc_82351FD4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82351fd4
	if (!ctx.cr6.eq) goto loc_82351FD4;
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82351fd4
	if (!ctx.cr6.eq) goto loc_82351FD4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351bc8
	ctx.lr = 0x82351FD4;
	sub_82351BC8(ctx, base);
loc_82351FD4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,496
	ctx.r31.s64 = ctx.r31.s64 + 496;
	// bne 0x82351f98
	if (!ctx.cr0.eq) goto loc_82351F98;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351FEC"))) PPC_WEAK_FUNC(sub_82351FEC);
PPC_FUNC_IMPL(__imp__sub_82351FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351FF0"))) PPC_WEAK_FUNC(sub_82351FF0);
PPC_FUNC_IMPL(__imp__sub_82351FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82351FF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-17128
	ctx.r11.s64 = ctx.r11.s64 + -17128;
	// li r30,218
	ctx.r30.s64 = 218;
	// addi r31,r11,224
	ctx.r31.s64 = ctx.r11.s64 + 224;
loc_82352010:
	// lwz r11,-68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82352030
	if (!ctx.cr6.eq) goto loc_82352030;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352030
	if (ctx.cr6.eq) goto loc_82352030;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351e48
	ctx.lr = 0x82352030;
	sub_82351E48(ctx, base);
loc_82352030:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,496
	ctx.r31.s64 = ctx.r31.s64 + 496;
	// bne 0x82352010
	if (!ctx.cr0.eq) goto loc_82352010;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82352048"))) PPC_WEAK_FUNC(sub_82352048);
PPC_FUNC_IMPL(__imp__sub_82352048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82352050;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31883
	ctx.r28.s64 = -2089484288;
	// lwz r11,-31900(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823520d0
	if (ctx.cr6.eq) goto loc_823520D0;
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-17128
	ctx.r11.s64 = ctx.r11.s64 + -17128;
	// li r30,218
	ctx.r30.s64 = 218;
	// addi r31,r11,224
	ctx.r31.s64 = ctx.r11.s64 + 224;
loc_82352078:
	// lwz r11,-68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823520c0
	if (!ctx.cr6.eq) goto loc_823520C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823520c0
	if (!ctx.cr6.eq) goto loc_823520C0;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823520c0
	if (!ctx.cr6.eq) goto loc_823520C0;
	// addi r3,r31,-224
	ctx.r3.s64 = ctx.r31.s64 + -224;
	// lwz r4,-31900(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31900);
	// bl 0x82352c20
	ctx.lr = 0x823520A8;
	sub_82352C20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823520c0
	if (ctx.cr6.eq) goto loc_823520C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351bc8
	ctx.lr = 0x823520C0;
	sub_82351BC8(ctx, base);
loc_823520C0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,496
	ctx.r31.s64 = ctx.r31.s64 + 496;
	// bne 0x82352078
	if (!ctx.cr0.eq) goto loc_82352078;
loc_823520D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823520D8"))) PPC_WEAK_FUNC(sub_823520D8);
PPC_FUNC_IMPL(__imp__sub_823520D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x823520E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31883
	ctx.r27.s64 = -2089484288;
	// lwz r11,-31900(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823521c0
	if (ctx.cr6.eq) goto loc_823521C0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82352108
	if (ctx.cr6.eq) goto loc_82352108;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x82352110
	goto loc_82352110;
loc_82352108:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_82352110:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cafc18
	ctx.lr = 0x82352118;
	sub_82CAFC18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb3ad8
	ctx.lr = 0x82352120;
	sub_82CB3AD8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,22512
	ctx.r4.s64 = ctx.r11.s64 + 22512;
	// bl 0x82cafee0
	ctx.lr = 0x82352130;
	sub_82CAFEE0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-31888
	ctx.r10.s64 = -2089811968;
	// subf r9,r30,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r30.s64;
	// addi r11,r10,-17128
	ctx.r11.s64 = ctx.r10.s64 + -17128;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r31,r11,156
	ctx.r31.s64 = ctx.r11.s64 + 156;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// li r29,218
	ctx.r29.s64 = 218;
	// xori r28,r7,1
	ctx.r28.u64 = ctx.r7.u64 ^ 1;
loc_82352154:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823521ac
	if (!ctx.cr6.eq) goto loc_823521AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82352180
	if (!ctx.cr6.eq) goto loc_82352180;
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82352180
	if (ctx.cr6.eq) goto loc_82352180;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823521a0
	if (ctx.cr6.eq) goto loc_823521A0;
loc_82352180:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823521ac
	if (!ctx.cr6.eq) goto loc_823521AC;
	// addi r3,r31,-156
	ctx.r3.s64 = ctx.r31.s64 + -156;
	// lwz r4,-31900(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31900);
	// bl 0x82352d30
	ctx.lr = 0x82352194;
	sub_82352D30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823521ac
	if (ctx.cr6.eq) goto loc_823521AC;
loc_823521A0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82351bc8
	ctx.lr = 0x823521AC;
	sub_82351BC8(ctx, base);
loc_823521AC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,496
	ctx.r31.s64 = ctx.r31.s64 + 496;
	// bne 0x82352154
	if (!ctx.cr0.eq) goto loc_82352154;
	// bl 0x82352048
	ctx.lr = 0x823521C0;
	sub_82352048(ctx, base);
loc_823521C0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823521C8"))) PPC_WEAK_FUNC(sub_823521C8);
PPC_FUNC_IMPL(__imp__sub_823521C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x823521D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-17128
	ctx.r11.s64 = ctx.r11.s64 + -17128;
	// li r29,218
	ctx.r29.s64 = 218;
	// addi r31,r11,156
	ctx.r31.s64 = ctx.r11.s64 + 156;
loc_823521E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82352200
	if (!ctx.cr6.eq) goto loc_82352200;
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235221c
	if (!ctx.cr6.eq) goto loc_8235221C;
loc_82352200:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82352210
	if (ctx.cr6.eq) goto loc_82352210;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82352224
	if (!ctx.cr6.eq) goto loc_82352224;
loc_82352210:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352224
	if (ctx.cr6.eq) goto loc_82352224;
loc_8235221C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82351e48
	ctx.lr = 0x82352224;
	sub_82351E48(ctx, base);
loc_82352224:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,496
	ctx.r31.s64 = ctx.r31.s64 + 496;
	// bne 0x823521e8
	if (!ctx.cr0.eq) goto loc_823521E8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235223C"))) PPC_WEAK_FUNC(sub_8235223C);
PPC_FUNC_IMPL(__imp__sub_8235223C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352240"))) PPC_WEAK_FUNC(sub_82352240);
PPC_FUNC_IMPL(__imp__sub_82352240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82352248;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// beq cr6,0x8235239c
	if (ctx.cr6.eq) goto loc_8235239C;
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mulli r27,r3,496
	ctx.r27.s64 = ctx.r3.s64 * 496;
	// addi r11,r11,-17128
	ctx.r11.s64 = ctx.r11.s64 + -17128;
	// addi r26,r11,224
	ctx.r26.s64 = ctx.r11.s64 + 224;
	// lwzx r31,r27,r26
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8235239c
	if (ctx.cr6.eq) goto loc_8235239C;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// lbzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235239c
	if (ctx.cr6.eq) goto loc_8235239C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,22536
	ctx.r3.s64 = ctx.r11.s64 + 22536;
	// bl 0x823518c0
	ctx.lr = 0x82352294;
	sub_823518C0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823522AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,22596
	ctx.r30.s64 = ctx.r11.s64 + 22596;
	// addi r29,r10,11272
	ctx.r29.s64 = ctx.r10.s64 + 11272;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,966
	ctx.r7.s64 = 966;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82351858
	ctx.lr = 0x823522D8;
	sub_82351858(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82352378
	if (!ctx.cr6.eq) goto loc_82352378;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82352378
	if (!ctx.cr6.gt) goto loc_82352378;
loc_823522F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82352310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,971
	ctx.r7.s64 = 971;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82351858
	ctx.lr = 0x8235232C;
	sub_82351858(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82352368
	if (!ctx.cr6.eq) goto loc_82352368;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82352350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,974
	ctx.r7.s64 = 974;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x82352368;
	sub_82351858(ctx, base);
loc_82352368:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823522f0
	if (ctx.cr6.lt) goto loc_823522F0;
loc_82352378:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235238C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r25,r27,r26
	PPC_STORE_U32(ctx.r27.u32 + ctx.r26.u32, ctx.r25.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r3,r9,22640
	ctx.r3.s64 = ctx.r9.s64 + 22640;
	// bl 0x823518c0
	ctx.lr = 0x8235239C;
	sub_823518C0(ctx, base);
loc_8235239C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823523A4"))) PPC_WEAK_FUNC(sub_823523A4);
PPC_FUNC_IMPL(__imp__sub_823523A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823523A8"))) PPC_WEAK_FUNC(sub_823523A8);
PPC_FUNC_IMPL(__imp__sub_823523A8) {
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
	// lwz r3,25000(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25000);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82352404
	if (!ctx.cr6.eq) goto loc_82352404;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823523F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82352404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82352404:
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

__attribute__((alias("__imp__sub_8235241C"))) PPC_WEAK_FUNC(sub_8235241C);
PPC_FUNC_IMPL(__imp__sub_8235241C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352420"))) PPC_WEAK_FUNC(sub_82352420);
PPC_FUNC_IMPL(__imp__sub_82352420) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82352464
	if (!ctx.cr6.eq) goto loc_82352464;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25000(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25000);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82352454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82352464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82352464:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82352474"))) PPC_WEAK_FUNC(sub_82352474);
PPC_FUNC_IMPL(__imp__sub_82352474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352478"))) PPC_WEAK_FUNC(sub_82352478);
PPC_FUNC_IMPL(__imp__sub_82352478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82352480;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823524B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,22700
	ctx.r27.s64 = ctx.r11.s64 + 22700;
	// addi r26,r10,11272
	ctx.r26.s64 = ctx.r10.s64 + 11272;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r7,1036
	ctx.r7.s64 = 1036;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82351858
	ctx.lr = 0x823524E0;
	sub_82351858(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82352688
	if (!ctx.cr6.eq) goto loc_82352688;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82352500
	if (!ctx.cr6.eq) goto loc_82352500;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_82352500:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235251C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82352688
	if (!ctx.cr6.gt) goto loc_82352688;
	// lis r21,-31904
	ctx.r21.s64 = -2090860544;
loc_82352530:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82352550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82352580
	if (ctx.cr6.eq) goto loc_82352580;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x82352678
	if (ctx.cr6.eq) goto loc_82352678;
	// cmpwi cr6,r3,42
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 42, ctx.xer);
	// bne cr6,0x82352678
	if (!ctx.cr6.eq) goto loc_82352678;
	// lbz r11,-14536(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + -14536);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352678
	if (ctx.cr6.eq) goto loc_82352678;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stb r11,-14536(r21)
	PPC_STORE_U8(ctx.r21.u32 + -14536, ctx.r11.u8);
	// b 0x82352678
	goto loc_82352678;
loc_82352580:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235259C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82352660
	if (!ctx.cr6.eq) goto loc_82352660;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r4,2
	ctx.r4.s64 = 2;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823525C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r7,1086
	ctx.r7.s64 = 1086;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x823525E0;
	sub_82351858(ctx, base);
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82352660
	if (ctx.cr6.eq) goto loc_82352660;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82352604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82352660
	if (ctx.cr6.eq) goto loc_82352660;
loc_82352618:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82352660
	if (!ctx.cr6.eq) goto loc_82352660;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82e645c8
	ctx.lr = 0x8235262C;
	sub_82E645C8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82352644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bgt cr6,0x82352660
	if (ctx.cr6.gt) goto loc_82352660;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82352618
	if (!ctx.cr6.eq) goto loc_82352618;
loc_82352660:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r23,1
	ctx.r4.s64 = ctx.r23.s64 + 1;
	// bl 0x82352478
	ctx.lr = 0x82352674;
	sub_82352478(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82352678:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82352530
	if (ctx.cr6.lt) goto loc_82352530;
loc_82352688:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82352694"))) PPC_WEAK_FUNC(sub_82352694);
PPC_FUNC_IMPL(__imp__sub_82352694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352698"))) PPC_WEAK_FUNC(sub_82352698);
PPC_FUNC_IMPL(__imp__sub_82352698) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823526A0"))) PPC_WEAK_FUNC(sub_823526A0);
PPC_FUNC_IMPL(__imp__sub_823526A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x823526A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-28776
	ctx.r29.s64 = ctx.r11.s64 + -28776;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-28776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28776);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823526f8
	if (ctx.cr6.eq) goto loc_823526F8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_823526CC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82cb0328
	ctx.lr = 0x823526D8;
	sub_82CB0328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82352704
	if (ctx.cr6.eq) goto loc_82352704;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823526cc
	if (!ctx.cr6.eq) goto loc_823526CC;
loc_823526F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82352704:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82352710"))) PPC_WEAK_FUNC(sub_82352710);
PPC_FUNC_IMPL(__imp__sub_82352710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82352718;
	__savegprlr_20(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82352b48
	if (ctx.cr6.eq) goto loc_82352B48;
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mulli r10,r3,496
	ctx.r10.s64 = ctx.r3.s64 * 496;
	// addi r11,r11,-17128
	ctx.r11.s64 = ctx.r11.s64 + -17128;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r23,224(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 224);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82352b48
	if (ctx.cr6.eq) goto loc_82352B48;
	// lbz r11,104(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 104);
	// addi r31,r26,104
	ctx.r31.s64 = ctx.r26.s64 + 104;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352b48
	if (ctx.cr6.eq) goto loc_82352B48;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82352778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r24,r11,22700
	ctx.r24.s64 = ctx.r11.s64 + 22700;
	// addi r25,r10,11272
	ctx.r25.s64 = ctx.r10.s64 + 11272;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r7,1169
	ctx.r7.s64 = 1169;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82351858
	ctx.lr = 0x823527A4;
	sub_82351858(ctx, base);
	// lis r22,-31883
	ctx.r22.s64 = -2089484288;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82352b2c
	if (!ctx.cr6.eq) goto loc_82352B2C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823523a8
	ctx.lr = 0x823527B8;
	sub_823523A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82294d90
	ctx.lr = 0x823527C4;
	sub_82294D90(ctx, base);
	// lwz r3,256(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// bl 0x823526a0
	ctx.lr = 0x823527CC;
	sub_823526A0(ctx, base);
	// lwz r11,560(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823527f0
	if (ctx.cr6.eq) goto loc_823527F0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823527f0
	if (ctx.cr6.eq) goto loc_823527F0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82294a58
	ctx.lr = 0x823527F0;
	sub_82294A58(ctx, base);
loc_823527F0:
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// beq cr6,0x823529cc
	if (ctx.cr6.eq) goto loc_823529CC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823529cc
	if (ctx.cr6.eq) goto loc_823529CC;
	// lbz r11,229(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 229);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823529cc
	if (ctx.cr6.eq) goto loc_823529CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b2a20
	ctx.lr = 0x82352824;
	sub_822B2A20(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,22796
	ctx.r4.s64 = ctx.r11.s64 + 22796;
	// bl 0x822b3f98
	ctx.lr = 0x82352834;
	sub_822B3F98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// bl 0x822960c0
	ctx.lr = 0x82352844;
	sub_822960C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822952c8
	ctx.lr = 0x82352854;
	sub_822952C8(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82352868
	if (ctx.cr6.eq) goto loc_82352868;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8235286c
	goto loc_8235286C;
loc_82352868:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_8235286C:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r10,-20648
	ctx.r6.s64 = ctx.r10.s64 + -20648;
	// lwz r3,28892(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28892);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82352890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82299080
	ctx.lr = 0x8235289C;
	sub_82299080(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82299080
	ctx.lr = 0x823528A4;
	sub_82299080(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823529cc
	if (ctx.cr6.eq) goto loc_823529CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823528C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822959a8
	ctx.lr = 0x823528CC;
	sub_822959A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823528f4
	if (ctx.cr6.eq) goto loc_823528F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823528F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823528F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82352908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82352920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823529cc
	if (ctx.cr6.eq) goto loc_823529CC;
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bne cr6,0x82352940
	if (!ctx.cr6.eq) goto loc_82352940;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82352940:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822bbad8
	ctx.lr = 0x82352948;
	sub_822BBAD8(ctx, base);
	// lwz r11,-31884(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -31884);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,132(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r8,140(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82352974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82352998
	if (ctx.cr6.eq) goto loc_82352998;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352998
	if (ctx.cr6.eq) goto loc_82352998;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82294a58
	ctx.lr = 0x82352998;
	sub_82294A58(ctx, base);
loc_82352998:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x823529ac
	if (ctx.cr6.eq) goto loc_823529AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82294a58
	ctx.lr = 0x823529A8;
	sub_82294A58(ctx, base);
	// b 0x823529cc
	goto loc_823529CC;
loc_823529AC:
	// stw r30,488(r26)
	PPC_STORE_U32(ctx.r26.u32 + 488, ctx.r30.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r29,492(r26)
	PPC_STORE_U32(ctx.r26.u32 + 492, ctx.r29.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bne cr6,0x823529c4
	if (!ctx.cr6.eq) goto loc_823529C4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_823529C4:
	// addi r3,r26,230
	ctx.r3.s64 = ctx.r26.s64 + 230;
	// bl 0x82cafc18
	ctx.lr = 0x823529CC;
	sub_82CAFC18(ctx, base);
loc_823529CC:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82352b1c
	if (!ctx.cr6.gt) goto loc_82352B1C;
loc_823529DC:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823529FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r7,1272
	ctx.r7.s64 = 1272;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82351858
	ctx.lr = 0x82352A18;
	sub_82351858(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82352b0c
	if (!ctx.cr6.eq) goto loc_82352B0C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82352A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82352af8
	if (!ctx.cr6.eq) goto loc_82352AF8;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82352A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r7,1300
	ctx.r7.s64 = 1300;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x82352A78;
	sub_82351858(ctx, base);
	// clrlwi r9,r20,24
	ctx.r9.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82352af8
	if (ctx.cr6.eq) goto loc_82352AF8;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82352A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82352af8
	if (ctx.cr6.eq) goto loc_82352AF8;
loc_82352AB0:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82352af8
	if (!ctx.cr6.eq) goto loc_82352AF8;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82e645c8
	ctx.lr = 0x82352AC4;
	sub_82E645C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82352ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bgt cr6,0x82352af8
	if (ctx.cr6.gt) goto loc_82352AF8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82352ab0
	if (!ctx.cr6.eq) goto loc_82352AB0;
loc_82352AF8:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82352478
	ctx.lr = 0x82352B0C;
	sub_82352478(ctx, base);
loc_82352B0C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823529dc
	if (ctx.cr6.lt) goto loc_823529DC;
loc_82352B1C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82352B24;
	sub_82299080(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82352420
	ctx.lr = 0x82352B2C;
	sub_82352420(ctx, base);
loc_82352B2C:
	// lwz r3,-31884(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -31884);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82352B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82352B48:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82352B50"))) PPC_WEAK_FUNC(sub_82352B50);
PPC_FUNC_IMPL(__imp__sub_82352B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82352B58;
	__savegprlr_28(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cafc18
	ctx.lr = 0x82352B68;
	sub_82CAFC18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb3ad8
	ctx.lr = 0x82352B70;
	sub_82CB3AD8(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,22128
	ctx.r28.s64 = ctx.r11.s64 + 22128;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r29,r11,-31908
	ctx.r29.s64 = ctx.r11.s64 + -31908;
loc_82352B88:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352bc4
	if (ctx.cr6.eq) goto loc_82352BC4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// bl 0x82cb20a0
	ctx.lr = 0x82352BA0;
	sub_82CB20A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82352bb4
	if (!ctx.cr6.eq) goto loc_82352BB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cafc18
	ctx.lr = 0x82352BB4;
	sub_82CAFC18(ctx, base);
loc_82352BB4:
	// addi r30,r30,220
	ctx.r30.s64 = ctx.r30.s64 + 220;
	// addi r31,r31,220
	ctx.r31.s64 = ctx.r31.s64 + 220;
	// cmplwi cr6,r30,2640
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2640, ctx.xer);
	// blt cr6,0x82352b88
	if (ctx.cr6.lt) goto loc_82352B88;
loc_82352BC4:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82352BD0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cafee0
	ctx.lr = 0x82352BDC;
	sub_82CAFEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82352c08
	if (!ctx.cr6.eq) goto loc_82352C08;
	// addi r31,r31,220
	ctx.r31.s64 = ctx.r31.s64 + 220;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,220
	ctx.r29.s64 = ctx.r29.s64 + 220;
	// cmplwi cr6,r31,2640
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2640, ctx.xer);
	// blt cr6,0x82352bd0
	if (ctx.cr6.lt) goto loc_82352BD0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,22864
	ctx.r3.s64 = ctx.r11.s64 + 22864;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82352C08:
	// mulli r11,r30,220
	ctx.r11.s64 = ctx.r30.s64 * 220;
	// addi r10,r28,134
	ctx.r10.s64 = ctx.r28.s64 + 134;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82352C1C"))) PPC_WEAK_FUNC(sub_82352C1C);
PPC_FUNC_IMPL(__imp__sub_82352C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352C20"))) PPC_WEAK_FUNC(sub_82352C20);
PPC_FUNC_IMPL(__imp__sub_82352C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-31900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31900);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82352c50
	if (ctx.cr6.eq) goto loc_82352C50;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x82352c58
	goto loc_82352C58;
loc_82352C50:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11272
	ctx.r3.s64 = ctx.r11.s64 + 11272;
loc_82352C58:
	// bl 0x82352b50
	ctx.lr = 0x82352C5C;
	sub_82352B50(ctx, base);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
loc_82352C60:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82352c60
	if (!ctx.cr6.eq) goto loc_82352C60;
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82352C84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82352c84
	if (!ctx.cr6.eq) goto loc_82352C84;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,22868
	ctx.r31.s64 = ctx.r11.s64 + 22868;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cb34b0
	ctx.lr = 0x82352CAC;
	sub_82CB34B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82352cfc
	if (ctx.cr6.eq) goto loc_82352CFC;
loc_82352CB4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
loc_82352CBC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82352ce0
	if (ctx.cr6.eq) goto loc_82352CE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82352cbc
	if (ctx.cr6.eq) goto loc_82352CBC;
loc_82352CE0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82352d14
	if (ctx.cr6.eq) goto loc_82352D14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb34b0
	ctx.lr = 0x82352CF4;
	sub_82CB34B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82352cb4
	if (!ctx.cr6.eq) goto loc_82352CB4;
loc_82352CFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82352D14:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82352D2C"))) PPC_WEAK_FUNC(sub_82352D2C);
PPC_FUNC_IMPL(__imp__sub_82352D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352D30"))) PPC_WEAK_FUNC(sub_82352D30);
PPC_FUNC_IMPL(__imp__sub_82352D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82352D38;
	__savegprlr_28(ctx, base);
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-31900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31900);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82352d5c
	if (ctx.cr6.eq) goto loc_82352D5C;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x82352d64
	goto loc_82352D64;
loc_82352D5C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
loc_82352D64:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822bbad8
	ctx.lr = 0x82352D6C;
	sub_822BBAD8(ctx, base);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
loc_82352D74:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x82352d74
	if (!ctx.cr6.eq) goto loc_82352D74;
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82352da8
	if (ctx.cr6.eq) goto loc_82352DA8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82352da8
	if (ctx.cr6.eq) goto loc_82352DA8;
	// bl 0x82294a58
	ctx.lr = 0x82352DA8;
	sub_82294A58(ctx, base);
loc_82352DA8:
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// addi r10,r1,624
	ctx.r10.s64 = ctx.r1.s64 + 624;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82352DB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82352db4
	if (!ctx.cr6.eq) goto loc_82352DB4;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,22128
	ctx.r31.s64 = ctx.r11.s64 + 22128;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lis r30,-31904
	ctx.r30.s64 = -2090860544;
	// addi r29,r11,-31908
	ctx.r29.s64 = ctx.r11.s64 + -31908;
loc_82352DE0:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352e6c
	if (ctx.cr6.eq) goto loc_82352E6C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// bl 0x82cb20a0
	ctx.lr = 0x82352DF8;
	sub_82CB20A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82352e5c
	if (!ctx.cr6.eq) goto loc_82352E5C;
	// lbz r11,-14535(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -14535);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352e14
	if (ctx.cr6.eq) goto loc_82352E14;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-14535(r30)
	PPC_STORE_U8(ctx.r30.u32 + -14535, ctx.r11.u8);
loc_82352E14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bbad8
	ctx.lr = 0x82352E20;
	sub_822BBAD8(ctx, base);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
loc_82352E28:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x82352e28
	if (!ctx.cr6.eq) goto loc_82352E28;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82352e5c
	if (ctx.cr6.eq) goto loc_82352E5C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82352e5c
	if (ctx.cr6.eq) goto loc_82352E5C;
	// bl 0x82294a58
	ctx.lr = 0x82352E5C;
	sub_82294A58(ctx, base);
loc_82352E5C:
	// addi r28,r28,220
	ctx.r28.s64 = ctx.r28.s64 + 220;
	// addi r31,r31,220
	ctx.r31.s64 = ctx.r31.s64 + 220;
	// cmplwi cr6,r28,2640
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2640, ctx.xer);
	// blt cr6,0x82352de0
	if (ctx.cr6.lt) goto loc_82352DE0;
loc_82352E6C:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82cb86a8
	ctx.lr = 0x82352E74;
	sub_82CB86A8(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82cb86a8
	ctx.lr = 0x82352E7C;
	sub_82CB86A8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r31,r11,22868
	ctx.r31.s64 = ctx.r11.s64 + 22868;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cb34b0
	ctx.lr = 0x82352E90;
	sub_82CB34B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82352ebc
	if (ctx.cr6.eq) goto loc_82352EBC;
loc_82352E98:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82cb35d8
	ctx.lr = 0x82352EA4;
	sub_82CB35D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82352ec8
	if (!ctx.cr6.eq) goto loc_82352EC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cb34b0
	ctx.lr = 0x82352EB4;
	sub_82CB34B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82352e98
	if (!ctx.cr6.eq) goto loc_82352E98;
loc_82352EBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82352EC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82352ED4"))) PPC_WEAK_FUNC(sub_82352ED4);
PPC_FUNC_IMPL(__imp__sub_82352ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352ED8"))) PPC_WEAK_FUNC(sub_82352ED8);
PPC_FUNC_IMPL(__imp__sub_82352ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82352EE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31883
	ctx.r28.s64 = -2089484288;
	// lwz r11,-31900(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352f5c
	if (ctx.cr6.eq) goto loc_82352F5C;
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-17128
	ctx.r11.s64 = ctx.r11.s64 + -17128;
	// li r30,218
	ctx.r30.s64 = 218;
	// addi r31,r11,224
	ctx.r31.s64 = ctx.r11.s64 + 224;
loc_82352F08:
	// lwz r11,-68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82352f4c
	if (!ctx.cr6.eq) goto loc_82352F4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352f4c
	if (ctx.cr6.eq) goto loc_82352F4C;
	// addi r3,r31,-224
	ctx.r3.s64 = ctx.r31.s64 + -224;
	// lwz r4,-31900(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31900);
	// bl 0x82352d30
	ctx.lr = 0x82352F2C;
	sub_82352D30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352f4c
	if (ctx.cr6.eq) goto loc_82352F4C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82352710
	ctx.lr = 0x82352F4C;
	sub_82352710(ctx, base);
loc_82352F4C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,496
	ctx.r31.s64 = ctx.r31.s64 + 496;
	// bne 0x82352f08
	if (!ctx.cr0.eq) goto loc_82352F08;
loc_82352F5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82352F64"))) PPC_WEAK_FUNC(sub_82352F64);
PPC_FUNC_IMPL(__imp__sub_82352F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352F68"))) PPC_WEAK_FUNC(sub_82352F68);
PPC_FUNC_IMPL(__imp__sub_82352F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82352F70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-17128
	ctx.r11.s64 = ctx.r11.s64 + -17128;
	// li r30,218
	ctx.r30.s64 = 218;
	// addi r31,r11,224
	ctx.r31.s64 = ctx.r11.s64 + 224;
loc_82352F88:
	// lwz r11,-68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82352fac
	if (!ctx.cr6.eq) goto loc_82352FAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352fac
	if (ctx.cr6.eq) goto loc_82352FAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82352240
	ctx.lr = 0x82352FAC;
	sub_82352240(ctx, base);
loc_82352FAC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,496
	ctx.r31.s64 = ctx.r31.s64 + 496;
	// bne 0x82352f88
	if (!ctx.cr0.eq) goto loc_82352F88;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82352FC4"))) PPC_WEAK_FUNC(sub_82352FC4);
PPC_FUNC_IMPL(__imp__sub_82352FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352FC8"))) PPC_WEAK_FUNC(sub_82352FC8);
PPC_FUNC_IMPL(__imp__sub_82352FC8) {
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
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// mulli r31,r3,496
	ctx.r31.s64 = ctx.r3.s64 * 496;
	// addi r11,r11,-17128
	ctx.r11.s64 = ctx.r11.s64 + -17128;
	// addi r30,r11,224
	ctx.r30.s64 = ctx.r11.s64 + 224;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82353000
	if (!ctx.cr6.eq) goto loc_82353000;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82351bc8
	ctx.lr = 0x82353000;
	sub_82351BC8(ctx, base);
loc_82353000:
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8235301C"))) PPC_WEAK_FUNC(sub_8235301C);
PPC_FUNC_IMPL(__imp__sub_8235301C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353020"))) PPC_WEAK_FUNC(sub_82353020);
PPC_FUNC_IMPL(__imp__sub_82353020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// addi r8,r10,14864
	ctx.r8.s64 = ctx.r10.s64 + 14864;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lbz r11,28847(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28847);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// addi r5,r7,24968
	ctx.r5.s64 = ctx.r7.s64 + 24968;
	// lwz r4,68(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r10,r11,31,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFFFFF80;
	// clrlwi r8,r4,2
	ctx.r8.u64 = ctx.r4.u32 & 0x3FFFFFFF;
	// lwz r11,-25660(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// addi r6,r6,25256
	ctx.r6.s64 = ctx.r6.s64 + 25256;
	// oris r5,r7,16384
	ctx.r5.u64 = ctx.r7.u64 | 1073741824;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r6.u32);
	// stw r5,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// stw r11,-25660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353078"))) PPC_WEAK_FUNC(sub_82353078);
PPC_FUNC_IMPL(__imp__sub_82353078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235307C"))) PPC_WEAK_FUNC(sub_8235307C);
PPC_FUNC_IMPL(__imp__sub_8235307C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353080"))) PPC_WEAK_FUNC(sub_82353080);
PPC_FUNC_IMPL(__imp__sub_82353080) {
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
	// bl 0x826fa6f0
	ctx.lr = 0x82353090;
	sub_826FA6F0(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r11,25348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25348);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823530b8
	if (ctx.cr6.eq) goto loc_823530B8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823530B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823530B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823530C8"))) PPC_WEAK_FUNC(sub_823530C8);
PPC_FUNC_IMPL(__imp__sub_823530C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x823530D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353254
	if (ctx.cr6.eq) goto loc_82353254;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82353254
	if (ctx.cr6.eq) goto loc_82353254;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82353254
	if (ctx.cr6.eq) goto loc_82353254;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// std r29,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r29.u64);
	// std r29,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r29.u64);
	// std r29,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r29.u64);
	// stw r29,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r29.u32);
	// bl 0x82e40800
	ctx.lr = 0x8235312C;
	sub_82E40800(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82353254
	if (!ctx.cr6.eq) goto loc_82353254;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r8,100
	ctx.r8.s64 = 100;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r29.u64);
	// std r29,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r29.u64);
	// std r29,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r29.u64);
	// std r29,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r29.u64);
	// lwz r3,-31884(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31884);
	// stw r29,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r29.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82353180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82353254
	if (!ctx.cr6.eq) goto loc_82353254;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82353254
	if (!ctx.cr6.gt) goto loc_82353254;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_823531A0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_823531A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x823531cc
	if (ctx.cr6.eq) goto loc_823531CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823531a8
	if (ctx.cr6.eq) goto loc_823531A8;
loc_823531CC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823531ec
	if (ctx.cr6.eq) goto loc_823531EC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823531a0
	if (ctx.cr6.lt) goto loc_823531A0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_823531EC:
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353254
	if (ctx.cr0.eq) goto loc_82353254;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82353254
	if (!ctx.cr6.gt) goto loc_82353254;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8235320C:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r29.u64);
	// std r29,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r29.u64);
	// std r29,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r29.u64);
	// std r29,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r29.u64);
	// std r29,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r29.u64);
	// stw r29,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r29.u32);
	// bl 0x82e48f60
	ctx.lr = 0x82353240;
	sub_82E48F60(ctx, base);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8235320c
	if (ctx.cr6.lt) goto loc_8235320C;
loc_82353254:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235325C"))) PPC_WEAK_FUNC(sub_8235325C);
PPC_FUNC_IMPL(__imp__sub_8235325C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353260"))) PPC_WEAK_FUNC(sub_82353260);
PPC_FUNC_IMPL(__imp__sub_82353260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r8,100
	ctx.r8.s64 = 100;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// lwz r3,-31884(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31884);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823532B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823532C4"))) PPC_WEAK_FUNC(sub_823532C4);
PPC_FUNC_IMPL(__imp__sub_823532C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823532C8"))) PPC_WEAK_FUNC(sub_823532C8);
PPC_FUNC_IMPL(__imp__sub_823532C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x823532D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// bl 0x82bea278
	ctx.lr = 0x823532F8;
	sub_82BEA278(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,308
	ctx.r3.s64 = 308;
	// lfd f0,-3832(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3832);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// stfd f0,-31896(r10)
	PPC_STORE_U64(ctx.r10.u32 + -31896, ctx.f0.u64);
	// bl 0x822959a8
	ctx.lr = 0x82353320;
	sub_822959A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235333c
	if (ctx.cr6.eq) goto loc_8235333C;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// bl 0x827fe180
	ctx.lr = 0x82353330;
	sub_827FE180(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82353348
	if (!ctx.cr6.eq) goto loc_82353348;
loc_8235333C:
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82353348:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fe288
	ctx.lr = 0x8235335C;
	sub_827FE288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fe618
	ctx.lr = 0x82353364;
	sub_827FE618(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82353384
	if (ctx.cr6.eq) goto loc_82353384;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234a088
	ctx.lr = 0x82353378;
	sub_8234A088(ctx, base);
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82353384:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fe6b8
	ctx.lr = 0x82353390;
	sub_827FE6B8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823533A0"))) PPC_WEAK_FUNC(sub_823533A0);
PPC_FUNC_IMPL(__imp__sub_823533A0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bea278
	ctx.lr = 0x823533BC;
	sub_82BEA278(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfd f0,-3832(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3832);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// stfd f0,-31896(r10)
	PPC_STORE_U64(ctx.r10.u32 + -31896, ctx.f0.u64);
	// bne cr6,0x823533f8
	if (!ctx.cr6.eq) goto loc_823533F8;
	// li r3,19
	ctx.r3.s64 = 19;
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
loc_823533F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fe3b0
	ctx.lr = 0x82353400;
	sub_827FE3B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234a088
	ctx.lr = 0x8235340C;
	sub_8234A088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82353424"))) PPC_WEAK_FUNC(sub_82353424);
PPC_FUNC_IMPL(__imp__sub_82353424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353428"))) PPC_WEAK_FUNC(sub_82353428);
PPC_FUNC_IMPL(__imp__sub_82353428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82353430;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82bea278
	ctx.lr = 0x8235344C;
	sub_82BEA278(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// lfd f0,-3832(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3832);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// stfd f0,-31896(r10)
	PPC_STORE_U64(ctx.r10.u32 + -31896, ctx.f0.u64);
	// bne cr6,0x82353484
	if (!ctx.cr6.eq) goto loc_82353484;
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_82353484:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fe708
	ctx.lr = 0x8235348C;
	sub_827FE708(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fe470
	ctx.lr = 0x823534A0;
	sub_827FE470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fe618
	ctx.lr = 0x823534A8;
	sub_827FE618(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x823534bc
	if (!ctx.cr6.eq) goto loc_823534BC;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_823534BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fe708
	ctx.lr = 0x823534C4;
	sub_827FE708(ctx, base);
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823534D8"))) PPC_WEAK_FUNC(sub_823534D8);
PPC_FUNC_IMPL(__imp__sub_823534D8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82bea278
	ctx.lr = 0x823534FC;
	sub_82BEA278(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfd f0,-3832(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3832);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// stfd f0,-31896(r10)
	PPC_STORE_U64(ctx.r10.u32 + -31896, ctx.f0.u64);
	// bne cr6,0x82353528
	if (!ctx.cr6.eq) goto loc_82353528;
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x82353550
	goto loc_82353550;
loc_82353528:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fe568
	ctx.lr = 0x82353538;
	sub_827FE568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fe618
	ctx.lr = 0x82353540;
	sub_827FE618(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r3,r10,0,27,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C;
	// rlwinm r3,r3,0,29,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_82353550:
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

__attribute__((alias("__imp__sub_82353568"))) PPC_WEAK_FUNC(sub_82353568);
PPC_FUNC_IMPL(__imp__sub_82353568) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bea278
	ctx.lr = 0x8235357C;
	sub_82BEA278(ctx, base);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfd f0,-3832(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3832);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfd f13,-31896(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31896);
	// lfd f12,-18360(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18360);
	// fmsub f9,f10,f0,f13
	ctx.f9.f64 = ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64;
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// blt cr6,0x823535b0
	if (ctx.cr6.lt) goto loc_823535B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823535B0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823535C4"))) PPC_WEAK_FUNC(sub_823535C4);
PPC_FUNC_IMPL(__imp__sub_823535C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823535C8"))) PPC_WEAK_FUNC(sub_823535C8);
PPC_FUNC_IMPL(__imp__sub_823535C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x823535D0;
	__savegprlr_14(ctx, base);
	// stwu r1,-1552(r1)
	ea = -1552 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r26,r11,-17128
	ctx.r26.s64 = ctx.r11.s64 + -17128;
	// ori r5,r5,42592
	ctx.r5.u64 = ctx.r5.u64 | 42592;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e640b8
	ctx.lr = 0x823535F0;
	sub_82E640B8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,22872
	ctx.r4.s64 = ctx.r11.s64 + 22872;
	// bl 0x82cafc18
	ctx.lr = 0x82353600;
	sub_82CAFC18(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
	// stb r10,160(r26)
	PPC_STORE_U8(ctx.r26.u32 + 160, ctx.r10.u8);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,156(r26)
	PPC_STORE_U32(ctx.r26.u32 + 156, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,22888
	ctx.r4.s64 = ctx.r9.s64 + 22888;
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r27.u32);
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// bl 0x82295680
	ctx.lr = 0x82353634;
	sub_82295680(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82295908
	ctx.lr = 0x82353640;
	sub_82295908(ctx, base);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82353664
	if (ctx.cr6.eq) goto loc_82353664;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294520
	ctx.lr = 0x82353664;
	sub_82294520(ctx, base);
loc_82353664:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294cc8
	ctx.lr = 0x8235366C;
	sub_82294CC8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r4,r11,22896
	ctx.r4.s64 = ctx.r11.s64 + 22896;
	// bl 0x822b3f98
	ctx.lr = 0x8235367C;
	sub_822B3F98(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// addi r25,r11,11272
	ctx.r25.s64 = ctx.r11.s64 + 11272;
	// stw r29,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
	// lwz r31,188(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x823536b0
	if (!ctx.cr6.eq) goto loc_823536B0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_823536B0:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lis r10,-31905
	ctx.r10.s64 = -2090926080;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r10,-20648
	ctx.r6.s64 = ctx.r10.s64 + -20648;
	// lwz r3,28892(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28892);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823536D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823536f0
	if (ctx.cr6.eq) goto loc_823536F0;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x823348f0
	ctx.lr = 0x823536E8;
	sub_823348F0(ctx, base);
	// lwz r29,220(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r28,216(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
loc_823536F0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82353700
	if (!ctx.cr6.eq) goto loc_82353700;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82353700:
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// bl 0x822bcd88
	ctx.lr = 0x82353708;
	sub_822BCD88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82353778
	if (ctx.cr6.eq) goto loc_82353778;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82353724
	if (ctx.cr6.eq) goto loc_82353724;
	// addi r4,r29,-1
	ctx.r4.s64 = ctx.r29.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x8235372c
	goto loc_8235372C;
loc_82353724:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8235372C:
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// bl 0x823327a8
	ctx.lr = 0x82353734;
	sub_823327A8(ctx, base);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
loc_82353740:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82353760
	if (!ctx.cr0.eq) goto loc_82353760;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82353740
	if (!ctx.cr6.eq) goto loc_82353740;
loc_82353760:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82353778
	if (!ctx.cr6.eq) goto loc_82353778;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e64750
	ctx.lr = 0x82353778;
	sub_82E64750(ctx, base);
loc_82353778:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// bne cr6,0x82353788
	if (!ctx.cr6.eq) goto loc_82353788;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
loc_82353788:
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333728
	ctx.lr = 0x823537A4;
	sub_82333728(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82353f98
	if (ctx.cr6.eq) goto loc_82353F98;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,22972
	ctx.r11.s64 = ctx.r11.s64 + 22972;
	// lis r28,-31885
	ctx.r28.s64 = -2089615360;
	// li r21,2
	ctx.r21.s64 = 2;
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// li r22,3
	ctx.r22.s64 = 3;
	// addi r20,r8,23064
	ctx.r20.s64 = ctx.r8.s64 + 23064;
	// addi r19,r7,23056
	ctx.r19.s64 = ctx.r7.s64 + 23056;
	// addi r18,r6,23048
	ctx.r18.s64 = ctx.r6.s64 + 23048;
	// addi r17,r5,23032
	ctx.r17.s64 = ctx.r5.s64 + 23032;
	// addi r16,r4,23012
	ctx.r16.s64 = ctx.r4.s64 + 23012;
	// addi r15,r3,23004
	ctx.r15.s64 = ctx.r3.s64 + 23004;
	// addi r14,r31,22976
	ctx.r14.s64 = ctx.r31.s64 + 22976;
	// addi r24,r9,-16948
	ctx.r24.s64 = ctx.r9.s64 + -16948;
	// addi r23,r10,-19584
	ctx.r23.s64 = ctx.r10.s64 + -19584;
loc_8235380C:
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82295770
	ctx.lr = 0x82353818;
	sub_82295770(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r31,200(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// beq cr6,0x82353864
	if (ctx.cr6.eq) goto loc_82353864;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82353894
	if (ctx.cr6.eq) goto loc_82353894;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82353844
	if (!ctx.cr6.eq) goto loc_82353844;
	// bl 0x822900a0
	ctx.lr = 0x82353840;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_82353844:
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
	ctx.lr = 0x82353860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82353864:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82353894
	if (ctx.cr6.eq) goto loc_82353894;
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82353880
	if (!ctx.cr6.eq) goto loc_82353880;
	// bl 0x822900a0
	ctx.lr = 0x8235387C;
	sub_822900A0(ctx, base);
	// lwz r3,28888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28888);
loc_82353880:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82353894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82353894:
	// lwz r30,156(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r31,152(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r27,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r27.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r27.u32);
	// bne cr6,0x823538b8
	if (!ctx.cr6.eq) goto loc_823538B8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_823538B8:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,340(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x82cb3658
	ctx.lr = 0x823538C4;
	sub_82CB3658(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82353f80
	if (ctx.cr6.eq) goto loc_82353F80;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x823538dc
	if (!ctx.cr6.eq) goto loc_823538DC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_823538DC:
	// bl 0x82cb0ec8
	ctx.lr = 0x823538E0;
	sub_82CB0EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82353f80
	if (ctx.cr6.eq) goto loc_82353F80;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,217
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 217, ctx.xer);
	// bge cr6,0x82353f98
	if (!ctx.cr6.lt) goto loc_82353F98;
	// stw r27,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r27.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r27,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r27.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r27,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r27.u32);
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8232d6f8
	ctx.lr = 0x82353914;
	sub_8232D6F8(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r31,280(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82294bb8
	ctx.lr = 0x82353924;
	sub_82294BB8(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294bb8
	ctx.lr = 0x82353930;
	sub_82294BB8(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294bb8
	ctx.lr = 0x8235393C;
	sub_82294BB8(ctx, base);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82294bb8
	ctx.lr = 0x82353948;
	sub_82294BB8(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294bb8
	ctx.lr = 0x82353954;
	sub_82294BB8(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82295770
	ctx.lr = 0x82353960;
	sub_82295770(ctx, base);
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// stw r27,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82353984
	if (ctx.cr6.eq) goto loc_82353984;
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82294520
	ctx.lr = 0x82353984;
	sub_82294520(ctx, base);
loc_82353984:
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82294cc8
	ctx.lr = 0x8235398C;
	sub_82294CC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x823570c0
	ctx.lr = 0x8235399C;
	sub_823570C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82295908
	ctx.lr = 0x823539A8;
	sub_82295908(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stw r27,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823539cc
	if (ctx.cr6.eq) goto loc_823539CC;
	// stw r27,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82294520
	ctx.lr = 0x823539CC;
	sub_82294520(ctx, base);
loc_823539CC:
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82294cc8
	ctx.lr = 0x823539D4;
	sub_82294CC8(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82295770
	ctx.lr = 0x823539E0;
	sub_82295770(ctx, base);
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// stw r27,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82353a04
	if (ctx.cr6.eq) goto loc_82353A04;
	// stw r27,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82294520
	ctx.lr = 0x82353A04;
	sub_82294520(ctx, base);
loc_82353A04:
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82294cc8
	ctx.lr = 0x82353A0C;
	sub_82294CC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x823570c0
	ctx.lr = 0x82353A1C;
	sub_823570C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82295908
	ctx.lr = 0x82353A28;
	sub_82295908(ctx, base);
	// lwz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// stw r27,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82353a4c
	if (ctx.cr6.eq) goto loc_82353A4C;
	// stw r27,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82294520
	ctx.lr = 0x82353A4C;
	sub_82294520(ctx, base);
loc_82353A4C:
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82294cc8
	ctx.lr = 0x82353A54;
	sub_82294CC8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82295770
	ctx.lr = 0x82353A60;
	sub_82295770(ctx, base);
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// stw r27,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82353a84
	if (ctx.cr6.eq) goto loc_82353A84;
	// stw r27,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82294520
	ctx.lr = 0x82353A84;
	sub_82294520(ctx, base);
loc_82353A84:
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82294cc8
	ctx.lr = 0x82353A8C;
	sub_82294CC8(ctx, base);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82295770
	ctx.lr = 0x82353A98;
	sub_82295770(ctx, base);
	// lwz r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// stw r27,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82353abc
	if (ctx.cr6.eq) goto loc_82353ABC;
	// stw r27,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82294520
	ctx.lr = 0x82353ABC;
	sub_82294520(ctx, base);
loc_82353ABC:
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82294cc8
	ctx.lr = 0x82353AC4;
	sub_82294CC8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82295770
	ctx.lr = 0x82353AD0;
	sub_82295770(ctx, base);
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// stw r27,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82353af4
	if (ctx.cr6.eq) goto loc_82353AF4;
	// stw r27,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82294520
	ctx.lr = 0x82353AF4;
	sub_82294520(ctx, base);
loc_82353AF4:
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82294cc8
	ctx.lr = 0x82353AFC;
	sub_82294CC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x823570c0
	ctx.lr = 0x82353B0C;
	sub_823570C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295908
	ctx.lr = 0x82353B18;
	sub_82295908(ctx, base);
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// stw r27,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82353b3c
	if (ctx.cr6.eq) goto loc_82353B3C;
	// stw r27,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82294520
	ctx.lr = 0x82353B3C;
	sub_82294520(ctx, base);
loc_82353B3C:
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82294cc8
	ctx.lr = 0x82353B44;
	sub_82294CC8(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82353b58
	if (!ctx.cr6.eq) goto loc_82353B58;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82353B58:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mulli r31,r11,496
	ctx.r31.s64 = ctx.r11.s64 * 496;
	// add r3,r31,r26
	ctx.r3.u64 = ctx.r31.u64 + ctx.r26.u64;
	// bl 0x82cafc18
	ctx.lr = 0x82353B68;
	sub_82CAFC18(ctx, base);
	// lwz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r29,120(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x82353b80
	if (!ctx.cr6.eq) goto loc_82353B80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82353B80:
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x822bbad8
	ctx.lr = 0x82353B88;
	sub_822BBAD8(ctx, base);
	// addi r10,r26,104
	ctx.r10.s64 = ctx.r26.s64 + 104;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
loc_82353B94:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x82353b94
	if (!ctx.cr6.eq) goto loc_82353B94;
	// lwz r3,868(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// addi r11,r1,740
	ctx.r11.s64 = ctx.r1.s64 + 740;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82353bc8
	if (ctx.cr6.eq) goto loc_82353BC8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82353bc8
	if (ctx.cr6.eq) goto loc_82353BC8;
	// bl 0x82294a58
	ctx.lr = 0x82353BC8;
	sub_82294A58(ctx, base);
loc_82353BC8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82353bd8
	if (!ctx.cr6.eq) goto loc_82353BD8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82353BD8:
	// bl 0x82cb0ec8
	ctx.lr = 0x82353BDC;
	sub_82CB0EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82353c28
	if (ctx.cr6.eq) goto loc_82353C28;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x82353bf4
	if (!ctx.cr6.eq) goto loc_82353BF4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82353BF4:
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82cafc18
	ctx.lr = 0x82353BFC;
	sub_82CAFC18(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82cb36a8
	ctx.lr = 0x82353C08;
	sub_82CB36A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82353c14
	if (ctx.cr6.eq) goto loc_82353C14;
	// sth r27,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r27.u16);
loc_82353C14:
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x8232fc40
	ctx.lr = 0x82353C1C;
	sub_8232FC40(ctx, base);
	// addi r11,r26,100
	ctx.r11.s64 = ctx.r26.s64 + 100;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// b 0x82353c30
	goto loc_82353C30;
loc_82353C28:
	// addi r11,r26,100
	ctx.r11.s64 = ctx.r26.s64 + 100;
	// stwx r27,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u32);
loc_82353C30:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82353c44
	if (!ctx.cr6.eq) goto loc_82353C44;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82353C44:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82cb3658
	ctx.lr = 0x82353C50;
	sub_82CB3658(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r10,r26,229
	ctx.r10.s64 = ctx.r26.s64 + 229;
	// lwz r30,172(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r9,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// bne cr6,0x82353c78
	if (!ctx.cr6.eq) goto loc_82353C78;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82353C78:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82cb3658
	ctx.lr = 0x82353C84;
	sub_82CB3658(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82353cc8
	if (!ctx.cr6.eq) goto loc_82353CC8;
	// addi r11,r26,156
	ctx.r11.s64 = ctx.r26.s64 + 156;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// bne cr6,0x82353cac
	if (!ctx.cr6.eq) goto loc_82353CAC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82353CAC:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82cb20a0
	ctx.lr = 0x82353CB4;
	sub_82CB20A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r26,160
	ctx.r11.s64 = ctx.r26.s64 + 160;
	// bne cr6,0x82353e18
	if (!ctx.cr6.eq) goto loc_82353E18;
	// stbx r30,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u8);
	// b 0x82353e88
	goto loc_82353E88;
loc_82353CC8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82353cd8
	if (!ctx.cr6.eq) goto loc_82353CD8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82353CD8:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82cb3658
	ctx.lr = 0x82353CE4;
	sub_82CB3658(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82353d54
	if (!ctx.cr6.eq) goto loc_82353D54;
	// addi r30,r26,223
	ctx.r30.s64 = ctx.r26.s64 + 223;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r26,156
	ctx.r10.s64 = ctx.r26.s64 + 156;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stbx r27,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u8);
	// stwx r21,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r21.u32);
	// bne cr6,0x82353d10
	if (!ctx.cr6.eq) goto loc_82353D10;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82353D10:
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x822bbad8
	ctx.lr = 0x82353D18;
	sub_822BBAD8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r26,160
	ctx.r11.s64 = ctx.r26.s64 + 160;
	// li r5,64
	ctx.r5.s64 = 64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r4,132(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// bl 0x82cb2ea0
	ctx.lr = 0x82353D30;
	sub_82CB2EA0(ctx, base);
	// lwz r3,580(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// addi r9,r1,452
	ctx.r9.s64 = ctx.r1.s64 + 452;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82353dd8
	if (ctx.cr6.eq) goto loc_82353DD8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82353dd8
	if (ctx.cr6.eq) goto loc_82353DD8;
	// bl 0x82294a58
	ctx.lr = 0x82353D4C;
	sub_82294A58(ctx, base);
	// stbx r27,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u8);
	// b 0x82353e88
	goto loc_82353E88;
loc_82353D54:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82353d64
	if (!ctx.cr6.eq) goto loc_82353D64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82353D64:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x82cb3658
	ctx.lr = 0x82353D70;
	sub_82CB3658(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82353de0
	if (!ctx.cr6.eq) goto loc_82353DE0;
	// addi r30,r26,223
	ctx.r30.s64 = ctx.r26.s64 + 223;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r26,156
	ctx.r10.s64 = ctx.r26.s64 + 156;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stbx r27,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u8);
	// stwx r22,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r22.u32);
	// bne cr6,0x82353d9c
	if (!ctx.cr6.eq) goto loc_82353D9C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82353D9C:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x822bbad8
	ctx.lr = 0x82353DA4;
	sub_822BBAD8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r26,160
	ctx.r11.s64 = ctx.r26.s64 + 160;
	// li r5,64
	ctx.r5.s64 = 64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r4,132(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// bl 0x82cb2ea0
	ctx.lr = 0x82353DBC;
	sub_82CB2EA0(ctx, base);
	// lwz r3,724(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// addi r9,r1,596
	ctx.r9.s64 = ctx.r1.s64 + 596;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82353dd8
	if (ctx.cr6.eq) goto loc_82353DD8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82353dd8
	if (ctx.cr6.eq) goto loc_82353DD8;
	// bl 0x82294a58
	ctx.lr = 0x82353DD8;
	sub_82294A58(ctx, base);
loc_82353DD8:
	// stbx r27,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u8);
	// b 0x82353e88
	goto loc_82353E88;
loc_82353DE0:
	// addi r11,r26,156
	ctx.r11.s64 = ctx.r26.s64 + 156;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r27,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u32);
	// bne cr6,0x82353e00
	if (!ctx.cr6.eq) goto loc_82353E00;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82353E00:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82cb3658
	ctx.lr = 0x82353E0C;
	sub_82CB3658(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82353e20
	if (!ctx.cr6.eq) goto loc_82353E20;
	// addi r11,r26,160
	ctx.r11.s64 = ctx.r26.s64 + 160;
loc_82353E18:
	// stbx r27,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u8);
	// b 0x82353e88
	goto loc_82353E88;
loc_82353E20:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82353e30
	if (!ctx.cr6.eq) goto loc_82353E30;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82353E30:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82cb3658
	ctx.lr = 0x82353E3C;
	sub_82CB3658(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82353e50
	if (!ctx.cr6.eq) goto loc_82353E50;
	// addi r11,r26,160
	ctx.r11.s64 = ctx.r26.s64 + 160;
	// stbx r21,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r21.u8);
	// b 0x82353e88
	goto loc_82353E88;
loc_82353E50:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82353e60
	if (!ctx.cr6.eq) goto loc_82353E60;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82353E60:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82cb3658
	ctx.lr = 0x82353E6C;
	sub_82CB3658(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r26,160
	ctx.r11.s64 = ctx.r26.s64 + 160;
	// bne cr6,0x82353e80
	if (!ctx.cr6.eq) goto loc_82353E80;
	// stbx r22,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u8);
	// b 0x82353e88
	goto loc_82353E88;
loc_82353E80:
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_82353E88:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mulli r9,r11,496
	ctx.r9.s64 = ctx.r11.s64 * 496;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// sthx r27,r9,r26
	PPC_STORE_U16(ctx.r9.u32 + ctx.r26.u32, ctx.r27.u16);
	// beq cr6,0x82353ec0
	if (ctx.cr6.eq) goto loc_82353EC0;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294520
	ctx.lr = 0x82353EC0;
	sub_82294520(ctx, base);
loc_82353EC0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294cc8
	ctx.lr = 0x82353EC8;
	sub_82294CC8(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r27,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82353eec
	if (ctx.cr6.eq) goto loc_82353EEC;
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82294520
	ctx.lr = 0x82353EEC;
	sub_82294520(ctx, base);
loc_82353EEC:
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82294cc8
	ctx.lr = 0x82353EF4;
	sub_82294CC8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82353f18
	if (ctx.cr6.eq) goto loc_82353F18;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294520
	ctx.lr = 0x82353F18;
	sub_82294520(ctx, base);
loc_82353F18:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294cc8
	ctx.lr = 0x82353F20;
	sub_82294CC8(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82353f44
	if (ctx.cr6.eq) goto loc_82353F44;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294520
	ctx.lr = 0x82353F44;
	sub_82294520(ctx, base);
loc_82353F44:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82294cc8
	ctx.lr = 0x82353F4C;
	sub_82294CC8(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82353f70
	if (ctx.cr6.eq) goto loc_82353F70;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82294520
	ctx.lr = 0x82353F70;
	sub_82294520(ctx, base);
loc_82353F70:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82294cc8
	ctx.lr = 0x82353F78;
	sub_82294CC8(ctx, base);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82295e20
	ctx.lr = 0x82353F80;
	sub_82295E20(ctx, base);
loc_82353F80:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333728
	ctx.lr = 0x82353F90;
	sub_82333728(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235380c
	if (!ctx.cr6.eq) goto loc_8235380C;
loc_82353F98:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82299080
	ctx.lr = 0x82353FA0;
	sub_82299080(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82299080
	ctx.lr = 0x82353FA8;
	sub_82299080(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82299080
	ctx.lr = 0x82353FB0;
	sub_82299080(ctx, base);
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82353FB8"))) PPC_WEAK_FUNC(sub_82353FB8);
PPC_FUNC_IMPL(__imp__sub_82353FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82353FC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,5134
	ctx.r3.s64 = 5134;
	// bl 0x82d7fd48
	ctx.lr = 0x82353FCC;
	sub_82D7FD48(ctx, base);
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// lbz r10,28846(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28846);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r11,-31856
	ctx.r31.s64 = ctx.r11.s64 + -31856;
	// beq cr6,0x82353fec
	if (ctx.cr6.eq) goto loc_82353FEC;
	// lis r3,64
	ctx.r3.s64 = 4194304;
	// b 0x82353ff4
	goto loc_82353FF4;
loc_82353FEC:
	// lis r3,377
	ctx.r3.s64 = 24707072;
	// ori r3,r3,47360
	ctx.r3.u64 = ctx.r3.u64 | 47360;
loc_82353FF4:
	// stw r3,-31856(r11)
	PPC_STORE_U32(ctx.r11.u32 + -31856, ctx.r3.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82bea130
	ctx.lr = 0x82354008;
	sub_82BEA130(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d7c498
	ctx.lr = 0x8235401C;
	sub_82D7C498(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d7c620
	ctx.lr = 0x82354028;
	sub_82D7C620(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r27,r11,22108
	ctx.r27.s64 = ctx.r11.s64 + 22108;
	// addi r29,r10,11272
	ctx.r29.s64 = ctx.r10.s64 + 11272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,515
	ctx.r7.s64 = 515;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x82354050;
	sub_82351858(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// addi r28,r11,-31884
	ctx.r28.s64 = ctx.r11.s64 + -31884;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e483b0
	ctx.lr = 0x82354060;
	sub_82E483B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r30,r11,23132
	ctx.r30.s64 = ctx.r11.s64 + 23132;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r10,23180
	ctx.r3.s64 = ctx.r10.s64 + 23180;
	// li r7,2155
	ctx.r7.s64 = 2155;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x82354084;
	sub_82351858(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// addi r31,r11,-31888
	ctx.r31.s64 = ctx.r11.s64 + -31888;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823540A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r7,23220
	ctx.r3.s64 = ctx.r7.s64 + 23220;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,2156
	ctx.r7.s64 = 2156;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x823540C0;
	sub_82351858(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354268
	if (ctx.cr6.eq) goto loc_82354268;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82d80cc8
	ctx.lr = 0x823540D8;
	sub_82D80CC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d80c70
	ctx.lr = 0x823540E8;
	sub_82D80C70(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// lis r4,-32203
	ctx.r4.s64 = -2110455808;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// addi r7,r11,13528
	ctx.r7.s64 = ctx.r11.s64 + 13528;
	// addi r6,r10,13352
	ctx.r6.s64 = ctx.r10.s64 + 13352;
	// addi r5,r9,13216
	ctx.r5.s64 = ctx.r9.s64 + 13216;
	// addi r4,r4,13000
	ctx.r4.s64 = ctx.r4.s64 + 13000;
	// bl 0x82d80400
	ctx.lr = 0x82354114;
	sub_82D80400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,2175
	ctx.r7.s64 = 2175;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x8235412C;
	sub_82351858(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d800d0
	ctx.lr = 0x82354148;
	sub_82D800D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,2182
	ctx.r7.s64 = 2182;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x82354160;
	sub_82351858(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d80538
	ctx.lr = 0x8235416C;
	sub_82D80538(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,2183
	ctx.r7.s64 = 2183;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x82354184;
	sub_82351858(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,180
	ctx.r4.s64 = 180;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823541A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,2199
	ctx.r7.s64 = 2199;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x823541C0;
	sub_82351858(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354204
	if (ctx.cr6.eq) goto loc_82354204;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r9,r11,32548
	ctx.r9.s64 = ctx.r11.s64 + 32548;
	// lfs f2,32548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32548);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,544(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d80970
	ctx.lr = 0x823541E8;
	sub_82D80970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,2203
	ctx.r7.s64 = 2203;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x82354200;
	sub_82351858(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82354204:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d80a20
	ctx.lr = 0x8235420C;
	sub_82D80A20(ctx, base);
	// bl 0x82353260
	ctx.lr = 0x82354210;
	sub_82353260(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,23252
	ctx.r4.s64 = ctx.r11.s64 + 23252;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8235422C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,2219
	ctx.r7.s64 = 2219;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x82354244;
	sub_82351858(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82d7c620
	ctx.lr = 0x82354250;
	sub_82D7C620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,515
	ctx.r7.s64 = 515;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x82354268;
	sub_82351858(ctx, base);
loc_82354268:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82354270"))) PPC_WEAK_FUNC(sub_82354270);
PPC_FUNC_IMPL(__imp__sub_82354270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82354278;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823535c8
	ctx.lr = 0x82354284;
	sub_823535C8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f13,-1916(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1916);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r8,r30,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f13,-16112(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16112);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// rldicr r10,r6,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r6,r7,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x82355b10
	ctx.lr = 0x82354308;
	sub_82355B10(ctx, base);
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lwz r3,-27524(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82354338
	if (!ctx.cr6.eq) goto loc_82354338;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,14488
	ctx.r3.s64 = ctx.r11.s64 + 14488;
	// bl 0x826ff8f8
	ctx.lr = 0x8235432C;
	sub_826FF8F8(ctx, base);
	// stw r3,-27524(r29)
	PPC_STORE_U32(ctx.r29.u32 + -27524, ctx.r3.u32);
	// bl 0x826ff9b8
	ctx.lr = 0x82354334;
	sub_826FF9B8(ctx, base);
	// lwz r3,-27524(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27524);
loc_82354338:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x8235434c
	if (!ctx.cr6.eq) goto loc_8235434C;
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// lwz r4,25104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25104);
loc_8235434C:
	// lis r11,-31885
	ctx.r11.s64 = -2089615360;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
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
	// bl 0x822a93e8
	ctx.lr = 0x8235436C;
	sub_822A93E8(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,264(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82354380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82351f78
	ctx.lr = 0x82354384;
	sub_82351F78(ctx, base);
	// lis r28,-31883
	ctx.r28.s64 = -2089484288;
	// lis r27,-31883
	ctx.r27.s64 = -2089484288;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r27,-27692
	ctx.r5.s64 = ctx.r27.s64 + -27692;
	// lwz r3,-31888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31888);
	// bl 0x82d81118
	ctx.lr = 0x8235439C;
	sub_82D81118(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r29,r11,23360
	ctx.r29.s64 = ctx.r11.s64 + 23360;
	// addi r30,r10,11272
	ctx.r30.s64 = ctx.r10.s64 + 11272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,2274
	ctx.r7.s64 = 2274;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82351858
	ctx.lr = 0x823543C4;
	sub_82351858(ctx, base);
	// lwz r3,-27692(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -27692);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823543f8
	if (ctx.cr6.eq) goto loc_823543F8;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,18928(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18928);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d82160
	ctx.lr = 0x823543E0;
	sub_82D82160(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,2277
	ctx.r7.s64 = 2277;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82351858
	ctx.lr = 0x823543F8;
	sub_82351858(ctx, base);
loc_823543F8:
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r3,-31888(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31888);
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r5,r11,-27688
	ctx.r5.s64 = ctx.r11.s64 + -27688;
	// bl 0x82d81118
	ctx.lr = 0x8235440C;
	sub_82D81118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,2279
	ctx.r7.s64 = 2279;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82351858
	ctx.lr = 0x82354424;
	sub_82351858(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82d7c620
	ctx.lr = 0x82354430;
	sub_82D7C620(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r10,22108
	ctx.r6.s64 = ctx.r10.s64 + 22108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,515
	ctx.r7.s64 = 515;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x8235444C;
	sub_82351858(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82354454"))) PPC_WEAK_FUNC(sub_82354454);
PPC_FUNC_IMPL(__imp__sub_82354454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354458"))) PPC_WEAK_FUNC(sub_82354458);
PPC_FUNC_IMPL(__imp__sub_82354458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r3,-31884(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31884);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82354470"))) PPC_WEAK_FUNC(sub_82354470);
PPC_FUNC_IMPL(__imp__sub_82354470) {
	PPC_FUNC_PROLOGUE();
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x822a1020
	sub_822A1020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82354484"))) PPC_WEAK_FUNC(sub_82354484);
PPC_FUNC_IMPL(__imp__sub_82354484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354488"))) PPC_WEAK_FUNC(sub_82354488);
PPC_FUNC_IMPL(__imp__sub_82354488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235448C"))) PPC_WEAK_FUNC(sub_8235448C);
PPC_FUNC_IMPL(__imp__sub_8235448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354490"))) PPC_WEAK_FUNC(sub_82354490);
PPC_FUNC_IMPL(__imp__sub_82354490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82354498;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// addi r4,r11,23476
	ctx.r4.s64 = ctx.r11.s64 + 23476;
	// bl 0x82333168
	ctx.lr = 0x823544B4;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823544f4
	if (ctx.cr6.eq) goto loc_823544F4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82d7c620
	ctx.lr = 0x823544C8;
	sub_82D7C620(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r11,22108
	ctx.r6.s64 = ctx.r11.s64 + 22108;
	// addi r3,r10,11272
	ctx.r3.s64 = ctx.r10.s64 + 11272;
	// li r7,515
	ctx.r7.s64 = 515;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x823544E8;
	sub_82351858(ctx, base);
loc_823544E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_823544F4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// addi r4,r11,23496
	ctx.r4.s64 = ctx.r11.s64 + 23496;
	// bl 0x82333168
	ctx.lr = 0x82354504;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354590
	if (ctx.cr6.eq) goto loc_82354590;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823335a8
	ctx.lr = 0x8235451C;
	sub_823335A8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354530
	if (ctx.cr6.eq) goto loc_82354530;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82354538
	goto loc_82354538;
loc_82354530:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11272
	ctx.r3.s64 = ctx.r11.s64 + 11272;
loc_82354538:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23508
	ctx.r4.s64 = ctx.r11.s64 + 23508;
	// bl 0x82cb37a8
	ctx.lr = 0x82354548;
	sub_82CB37A8(ctx, base);
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r3,25348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25348);
	// bne cr6,0x82354574
	if (!ctx.cr6.eq) goto loc_82354574;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82356350
	ctx.lr = 0x82354560;
	sub_82356350(ctx, base);
loc_82354560:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82354568;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82354574:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823562a8
	ctx.lr = 0x8235457C;
	sub_823562A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82354584;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_82354590:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// addi r4,r11,23516
	ctx.r4.s64 = ctx.r11.s64 + 23516;
	// bl 0x82333168
	ctx.lr = 0x823545A0;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235466c
	if (ctx.cr6.eq) goto loc_8235466C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823335a8
	ctx.lr = 0x823545B8;
	sub_823335A8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823545d4
	if (!ctx.cr6.eq) goto loc_823545D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823545D4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,23508
	ctx.r4.s64 = ctx.r11.s64 + 23508;
	// bl 0x82cb37a8
	ctx.lr = 0x823545E4;
	sub_82CB37A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82354560
	if (!ctx.cr6.eq) goto loc_82354560;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,23536
	ctx.r4.s64 = ctx.r10.s64 + 23536;
	// lwz r3,-31884(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31884);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82354610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r6,r7,23544
	ctx.r6.s64 = ctx.r7.s64 + 23544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,2393
	ctx.r7.s64 = 2393;
	// addi r5,r30,-60
	ctx.r5.s64 = ctx.r30.s64 + -60;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82351858
	ctx.lr = 0x82354630;
	sub_82351858(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82354658
	if (!ctx.cr6.eq) goto loc_82354658;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354658
	if (ctx.cr6.eq) goto loc_82354658;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82354658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82354658:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82299080
	ctx.lr = 0x82354660;
	sub_82299080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_8235466C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// addi r4,r11,23588
	ctx.r4.s64 = ctx.r11.s64 + 23588;
	// bl 0x82333168
	ctx.lr = 0x8235467C;
	sub_82333168(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823544e8
	if (ctx.cr6.eq) goto loc_823544E8;
	// bl 0x82353260
	ctx.lr = 0x82354688;
	sub_82353260(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82354694"))) PPC_WEAK_FUNC(sub_82354694);
PPC_FUNC_IMPL(__imp__sub_82354694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354698"))) PPC_WEAK_FUNC(sub_82354698);
PPC_FUNC_IMPL(__imp__sub_82354698) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x827009c0
	ctx.lr = 0x823546AC;
	sub_827009C0(ctx, base);
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lwz r3,-31884(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31884);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823546C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x826fa5e0
	ctx.lr = 0x823546C8;
	sub_826FA5E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823546D8"))) PPC_WEAK_FUNC(sub_823546D8);
PPC_FUNC_IMPL(__imp__sub_823546D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x823546E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d7c620
	ctx.lr = 0x823546F8;
	sub_82D7C620(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r11,22108
	ctx.r6.s64 = ctx.r11.s64 + 22108;
	// addi r3,r10,11272
	ctx.r3.s64 = ctx.r10.s64 + 11272;
	// li r7,515
	ctx.r7.s64 = 515;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x82354718;
	sub_82351858(ctx, base);
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,-17128
	ctx.r28.s64 = ctx.r11.s64 + -17128;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r30,218
	ctx.r30.s64 = 218;
	// addi r31,r28,160
	ctx.r31.s64 = ctx.r28.s64 + 160;
	// addi r26,r11,-28128
	ctx.r26.s64 = ctx.r11.s64 + -28128;
loc_82354734:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8235476c
	if (!ctx.cr6.eq) goto loc_8235476C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// lbzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r26.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8235476c
	if (ctx.cr6.eq) goto loc_8235476C;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235476c
	if (ctx.cr6.eq) goto loc_8235476C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351e48
	ctx.lr = 0x8235476C;
	sub_82351E48(ctx, base);
loc_8235476C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,496
	ctx.r31.s64 = ctx.r31.s64 + 496;
	// bne 0x82354734
	if (!ctx.cr0.eq) goto loc_82354734;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,218
	ctx.r29.s64 = 218;
	// addi r31,r28,160
	ctx.r31.s64 = ctx.r28.s64 + 160;
loc_82354788:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823547c4
	if (!ctx.cr6.eq) goto loc_823547C4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// lbzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r26.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x823547c4
	if (!ctx.cr6.eq) goto loc_823547C4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823547c4
	if (!ctx.cr6.eq) goto loc_823547C4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82351bc8
	ctx.lr = 0x823547C4;
	sub_82351BC8(ctx, base);
loc_823547C4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,496
	ctx.r31.s64 = ctx.r31.s64 + 496;
	// bne 0x82354788
	if (!ctx.cr0.eq) goto loc_82354788;
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// stw r27,-31868(r11)
	PPC_STORE_U32(ctx.r11.u32 + -31868, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823547E4"))) PPC_WEAK_FUNC(sub_823547E4);
PPC_FUNC_IMPL(__imp__sub_823547E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823547E8"))) PPC_WEAK_FUNC(sub_823547E8);
PPC_FUNC_IMPL(__imp__sub_823547E8) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823546d8
	sub_823546D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823547F4"))) PPC_WEAK_FUNC(sub_823547F4);
PPC_FUNC_IMPL(__imp__sub_823547F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823547F8"))) PPC_WEAK_FUNC(sub_823547F8);
PPC_FUNC_IMPL(__imp__sub_823547F8) {
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
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d7c620
	ctx.lr = 0x82354810;
	sub_82D7C620(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r11,22108
	ctx.r6.s64 = ctx.r11.s64 + 22108;
	// addi r3,r10,11272
	ctx.r3.s64 = ctx.r10.s64 + 11272;
	// li r7,515
	ctx.r7.s64 = 515;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x82354830;
	sub_82351858(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823546d8
	ctx.lr = 0x8235483C;
	sub_823546D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235484C"))) PPC_WEAK_FUNC(sub_8235484C);
PPC_FUNC_IMPL(__imp__sub_8235484C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354850"))) PPC_WEAK_FUNC(sub_82354850);
PPC_FUNC_IMPL(__imp__sub_82354850) {
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
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d7c620
	ctx.lr = 0x82354868;
	sub_82D7C620(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r11,22108
	ctx.r6.s64 = ctx.r11.s64 + 22108;
	// addi r3,r10,11272
	ctx.r3.s64 = ctx.r10.s64 + 11272;
	// li r7,515
	ctx.r7.s64 = 515;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82351858
	ctx.lr = 0x82354888;
	sub_82351858(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823546d8
	ctx.lr = 0x82354894;
	sub_823546D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823548A4"))) PPC_WEAK_FUNC(sub_823548A4);
PPC_FUNC_IMPL(__imp__sub_823548A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823548A8"))) PPC_WEAK_FUNC(sub_823548A8);
PPC_FUNC_IMPL(__imp__sub_823548A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x823548B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31883
	ctx.r28.s64 = -2089484288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23536
	ctx.r4.s64 = ctx.r11.s64 + 23536;
	// lwz r3,-31884(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31884);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823548DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r30,r11,23768
	ctx.r30.s64 = ctx.r11.s64 + 23768;
	// addi r29,r10,11272
	ctx.r29.s64 = ctx.r10.s64 + 11272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,2558
	ctx.r7.s64 = 2558;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82351858
	ctx.lr = 0x82354904;
	sub_82351858(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354920
	if (ctx.cr6.eq) goto loc_82354920;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82354920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82354920:
	// lwz r3,-31884(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31884);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23840
	ctx.r4.s64 = ctx.r11.s64 + 23840;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82354940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,2566
	ctx.r7.s64 = 2566;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82351858
	ctx.lr = 0x82354958;
	sub_82351858(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354974
	if (ctx.cr6.eq) goto loc_82354974;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82354974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82354974:
	// lwz r3,-31884(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31884);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,13612
	ctx.r4.s64 = ctx.r11.s64 + 13612;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82354994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,2571
	ctx.r7.s64 = 2571;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82351858
	ctx.lr = 0x823549AC;
	sub_82351858(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823549c8
	if (ctx.cr6.eq) goto loc_823549C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823549C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823549C8:
	// lwz r3,-31884(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31884);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23844
	ctx.r4.s64 = ctx.r11.s64 + 23844;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823549E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,2576
	ctx.r7.s64 = 2576;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82351858
	ctx.lr = 0x82354A00;
	sub_82351858(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354a1c
	if (ctx.cr6.eq) goto loc_82354A1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82354A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82354A1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82354A24"))) PPC_WEAK_FUNC(sub_82354A24);
PPC_FUNC_IMPL(__imp__sub_82354A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354A28"))) PPC_WEAK_FUNC(sub_82354A28);
PPC_FUNC_IMPL(__imp__sub_82354A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82354A30;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,31564(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31564);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r9,23852
	ctx.r4.s64 = ctx.r9.s64 + 23852;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r31,-31884(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31884);
	// bl 0x82295680
	ctx.lr = 0x82354A60;
	sub_82295680(ctx, base);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82354a84
	if (ctx.cr6.eq) goto loc_82354A84;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294520
	ctx.lr = 0x82354A84;
	sub_82294520(ctx, base);
loc_82354A84:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294cc8
	ctx.lr = 0x82354A8C;
	sub_82294CC8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,23536
	ctx.r4.s64 = ctx.r11.s64 + 23536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82354AAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354aec
	if (ctx.cr6.eq) goto loc_82354AEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82354ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354aec
	if (ctx.cr6.eq) goto loc_82354AEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82354AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82354AEC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r30,r11,23916
	ctx.r30.s64 = ctx.r11.s64 + 23916;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// addi r29,r10,23924
	ctx.r29.s64 = ctx.r10.s64 + 23924;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x82354b10
	if (ctx.cr6.eq) goto loc_82354B10;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82354B10:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82295680
	ctx.lr = 0x82354B18;
	sub_82295680(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,23840
	ctx.r4.s64 = ctx.r11.s64 + 23840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82354B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354b78
	if (ctx.cr6.eq) goto loc_82354B78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82354B58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354b78
	if (ctx.cr6.eq) goto loc_82354B78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82354B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82354B78:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82354b8c
	if (ctx.cr6.eq) goto loc_82354B8C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82354B8C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82295680
	ctx.lr = 0x82354B94;
	sub_82295680(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82295908
	ctx.lr = 0x82354BA0;
	sub_82295908(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354bc4
	if (ctx.cr6.eq) goto loc_82354BC4;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294520
	ctx.lr = 0x82354BC4;
	sub_82294520(ctx, base);
loc_82354BC4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294cc8
	ctx.lr = 0x82354BCC;
	sub_82294CC8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,13612
	ctx.r4.s64 = ctx.r11.s64 + 13612;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82354BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354c2c
	if (ctx.cr6.eq) goto loc_82354C2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82354C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354c2c
	if (ctx.cr6.eq) goto loc_82354C2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82354C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82354C2C:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82354c40
	if (ctx.cr6.eq) goto loc_82354C40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82354C40:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82295680
	ctx.lr = 0x82354C48;
	sub_82295680(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82295908
	ctx.lr = 0x82354C54;
	sub_82295908(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354c78
	if (ctx.cr6.eq) goto loc_82354C78;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294520
	ctx.lr = 0x82354C78;
	sub_82294520(ctx, base);
loc_82354C78:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294cc8
	ctx.lr = 0x82354C80;
	sub_82294CC8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,23844
	ctx.r4.s64 = ctx.r11.s64 + 23844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82354CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354ce0
	if (ctx.cr6.eq) goto loc_82354CE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82354CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354ce0
	if (ctx.cr6.eq) goto loc_82354CE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82354CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82354CE0:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82354cf4
	if (ctx.cr6.eq) goto loc_82354CF4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82354CF4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82295680
	ctx.lr = 0x82354CFC;
	sub_82295680(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82295908
	ctx.lr = 0x82354D08;
	sub_82295908(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354d2c
	if (ctx.cr6.eq) goto loc_82354D2C;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294520
	ctx.lr = 0x82354D2C;
	sub_82294520(ctx, base);
loc_82354D2C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294cc8
	ctx.lr = 0x82354D34;
	sub_82294CC8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,23932
	ctx.r4.s64 = ctx.r11.s64 + 23932;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82354D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354d94
	if (ctx.cr6.eq) goto loc_82354D94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82354D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354d94
	if (ctx.cr6.eq) goto loc_82354D94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82354D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82354D94:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82354da8
	if (ctx.cr6.eq) goto loc_82354DA8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82354DA8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82295680
	ctx.lr = 0x82354DB0;
	sub_82295680(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82295908
	ctx.lr = 0x82354DBC;
	sub_82295908(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354de0
	if (ctx.cr6.eq) goto loc_82354DE0;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294520
	ctx.lr = 0x82354DE0;
	sub_82294520(ctx, base);
loc_82354DE0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82294cc8
	ctx.lr = 0x82354DE8;
	sub_82294CC8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354e0c
	if (ctx.cr6.eq) goto loc_82354E0C;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294520
	ctx.lr = 0x82354E0C;
	sub_82294520(ctx, base);
loc_82354E0C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294cc8
	ctx.lr = 0x82354E14;
	sub_82294CC8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82354E1C"))) PPC_WEAK_FUNC(sub_82354E1C);
PPC_FUNC_IMPL(__imp__sub_82354E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354E20"))) PPC_WEAK_FUNC(sub_82354E20);
PPC_FUNC_IMPL(__imp__sub_82354E20) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,10
	ctx.r3.s64 = 10;
	// b 0x823553a0
	sub_823553A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82354E2C"))) PPC_WEAK_FUNC(sub_82354E2C);
PPC_FUNC_IMPL(__imp__sub_82354E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354E30"))) PPC_WEAK_FUNC(sub_82354E30);
PPC_FUNC_IMPL(__imp__sub_82354E30) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x823553a0
	sub_823553A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82354E3C"))) PPC_WEAK_FUNC(sub_82354E3C);
PPC_FUNC_IMPL(__imp__sub_82354E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354E40"))) PPC_WEAK_FUNC(sub_82354E40);
PPC_FUNC_IMPL(__imp__sub_82354E40) {
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
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lbz r11,-31852(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -31852);
	// beq cr6,0x82354e7c
	if (ctx.cr6.eq) goto loc_82354E7C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82354e98
	if (!ctx.cr6.eq) goto loc_82354E98;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x823553a0
	ctx.lr = 0x82354E74;
	sub_823553A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82354e94
	goto loc_82354E94;
loc_82354E7C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82354e98
	if (ctx.cr6.eq) goto loc_82354E98;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x823553a0
	ctx.lr = 0x82354E90;
	sub_823553A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82354E94:
	// stb r11,-31852(r31)
	PPC_STORE_U8(ctx.r31.u32 + -31852, ctx.r11.u8);
loc_82354E98:
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

__attribute__((alias("__imp__sub_82354EAC"))) PPC_WEAK_FUNC(sub_82354EAC);
PPC_FUNC_IMPL(__imp__sub_82354EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354EB0"))) PPC_WEAK_FUNC(sub_82354EB0);
PPC_FUNC_IMPL(__imp__sub_82354EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82354EB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,-31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31884);
	// addi r4,r11,23536
	ctx.r4.s64 = ctx.r11.s64 + 23536;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82354EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r29,r11,23940
	ctx.r29.s64 = ctx.r11.s64 + 23940;
	// addi r28,r10,11272
	ctx.r28.s64 = ctx.r10.s64 + 11272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r7,2676
	ctx.r7.s64 = 2676;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82351858
	ctx.lr = 0x82354F10;
	sub_82351858(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354f30
	if (ctx.cr6.eq) goto loc_82354F30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82354F30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82354F30:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354f94
	if (ctx.cr6.eq) goto loc_82354F94;
	// lwz r3,-31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31884);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23840
	ctx.r4.s64 = ctx.r11.s64 + 23840;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82354F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r7,2683
	ctx.r7.s64 = 2683;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82351858
	ctx.lr = 0x82354F74;
	sub_82351858(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354f94
	if (ctx.cr6.eq) goto loc_82354F94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82354F94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82354F94:
	// rlwinm r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354ff8
	if (ctx.cr6.eq) goto loc_82354FF8;
	// lwz r3,-31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31884);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,13612
	ctx.r4.s64 = ctx.r11.s64 + 13612;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82354FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r7,2691
	ctx.r7.s64 = 2691;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82351858
	ctx.lr = 0x82354FD8;
	sub_82351858(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82354ff8
	if (ctx.cr6.eq) goto loc_82354FF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82354FF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82354FF8:
	// rlwinm r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823550b4
	if (ctx.cr6.eq) goto loc_823550B4;
	// lwz r3,-31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31884);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23844
	ctx.r4.s64 = ctx.r11.s64 + 23844;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82355024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r7,2699
	ctx.r7.s64 = 2699;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82351858
	ctx.lr = 0x8235503C;
	sub_82351858(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235505c
	if (ctx.cr6.eq) goto loc_8235505C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235505C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235505C:
	// lwz r3,-31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31884);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23996
	ctx.r4.s64 = ctx.r11.s64 + 23996;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8235507C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r7,2705
	ctx.r7.s64 = 2705;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82351858
	ctx.lr = 0x82355094;
	sub_82351858(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823550b4
	if (ctx.cr6.eq) goto loc_823550B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823550B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823550B4:
	// rlwinm r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82355118
	if (ctx.cr6.eq) goto loc_82355118;
	// lwz r3,-31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31884);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23932
	ctx.r4.s64 = ctx.r11.s64 + 23932;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823550E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r7,2713
	ctx.r7.s64 = 2713;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82351858
	ctx.lr = 0x823550F8;
	sub_82351858(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355118
	if (ctx.cr6.eq) goto loc_82355118;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82355118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82355118:
	// lwz r3,-31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31884);
	// bl 0x82354a28
	ctx.lr = 0x82355120;
	sub_82354A28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82355128"))) PPC_WEAK_FUNC(sub_82355128);
PPC_FUNC_IMPL(__imp__sub_82355128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82355130;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31883
	ctx.r31.s64 = -2089484288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,-31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31884);
	// addi r4,r11,23536
	ctx.r4.s64 = ctx.r11.s64 + 23536;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82355160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r29,r11,24004
	ctx.r29.s64 = ctx.r11.s64 + 24004;
	// addi r28,r10,11272
	ctx.r28.s64 = ctx.r10.s64 + 11272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r7,2735
	ctx.r7.s64 = 2735;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82351858
	ctx.lr = 0x82355188;
	sub_82351858(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823551a8
	if (ctx.cr6.eq) goto loc_823551A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823551A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823551A8:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235520c
	if (ctx.cr6.eq) goto loc_8235520C;
	// lwz r3,-31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31884);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23840
	ctx.r4.s64 = ctx.r11.s64 + 23840;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823551D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r7,2742
	ctx.r7.s64 = 2742;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82351858
	ctx.lr = 0x823551EC;
	sub_82351858(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235520c
	if (ctx.cr6.eq) goto loc_8235520C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235520C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235520C:
	// rlwinm r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82355270
	if (ctx.cr6.eq) goto loc_82355270;
	// lwz r3,-31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31884);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,13612
	ctx.r4.s64 = ctx.r11.s64 + 13612;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82355238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r7,2750
	ctx.r7.s64 = 2750;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82351858
	ctx.lr = 0x82355250;
	sub_82351858(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355270
	if (ctx.cr6.eq) goto loc_82355270;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82355270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82355270:
	// rlwinm r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235532c
	if (ctx.cr6.eq) goto loc_8235532C;
	// lwz r3,-31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31884);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23844
	ctx.r4.s64 = ctx.r11.s64 + 23844;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8235529C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r7,2758
	ctx.r7.s64 = 2758;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82351858
	ctx.lr = 0x823552B4;
	sub_82351858(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823552d4
	if (ctx.cr6.eq) goto loc_823552D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823552D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823552D4:
	// lwz r3,-31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31884);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23996
	ctx.r4.s64 = ctx.r11.s64 + 23996;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823552F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r7,2764
	ctx.r7.s64 = 2764;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82351858
	ctx.lr = 0x8235530C;
	sub_82351858(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235532c
	if (ctx.cr6.eq) goto loc_8235532C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235532C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235532C:
	// rlwinm r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82355390
	if (ctx.cr6.eq) goto loc_82355390;
	// lwz r3,-31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31884);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23932
	ctx.r4.s64 = ctx.r11.s64 + 23932;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82355358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r7,2772
	ctx.r7.s64 = 2772;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82351858
	ctx.lr = 0x82355370;
	sub_82351858(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355390
	if (ctx.cr6.eq) goto loc_82355390;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82355390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82355390:
	// lwz r3,-31884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31884);
	// bl 0x82354a28
	ctx.lr = 0x82355398;
	sub_82354A28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823553A0"))) PPC_WEAK_FUNC(sub_823553A0);
PPC_FUNC_IMPL(__imp__sub_823553A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x823553A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r9,r28,31
	ctx.r9.u64 = ctx.r28.u32 & 0x1;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r29,-31883
	ctx.r29.s64 = -2089484288;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r31,r11,11272
	ctx.r31.s64 = ctx.r11.s64 + 11272;
	// addi r30,r10,24064
	ctx.r30.s64 = ctx.r10.s64 + 24064;
	// beq cr6,0x82355440
	if (ctx.cr6.eq) goto loc_82355440;
	// lwz r3,-31884(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31884);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23840
	ctx.r4.s64 = ctx.r11.s64 + 23840;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823553F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,2798
	ctx.r7.s64 = 2798;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82351858
	ctx.lr = 0x82355410;
	sub_82351858(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82355440
	if (!ctx.cr6.eq) goto loc_82355440;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355440
	if (ctx.cr6.eq) goto loc_82355440;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r27
	ctx.r10.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r4,r9,1
	ctx.r4.u64 = ctx.r9.u64 ^ 1;
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82355440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82355440:
	// rlwinm r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823554b8
	if (ctx.cr6.eq) goto loc_823554B8;
	// lwz r3,-31884(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31884);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,13612
	ctx.r4.s64 = ctx.r11.s64 + 13612;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8235546C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,2808
	ctx.r7.s64 = 2808;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82351858
	ctx.lr = 0x82355488;
	sub_82351858(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x823554b8
	if (!ctx.cr6.eq) goto loc_823554B8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823554b8
	if (ctx.cr6.eq) goto loc_823554B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r27
	ctx.r10.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r4,r9,1
	ctx.r4.u64 = ctx.r9.u64 ^ 1;
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823554B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823554B8:
	// rlwinm r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235559c
	if (ctx.cr6.eq) goto loc_8235559C;
	// lwz r3,-31884(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31884);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23844
	ctx.r4.s64 = ctx.r11.s64 + 23844;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823554E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,2818
	ctx.r7.s64 = 2818;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82351858
	ctx.lr = 0x82355500;
	sub_82351858(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82355530
	if (!ctx.cr6.eq) goto loc_82355530;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355530
	if (ctx.cr6.eq) goto loc_82355530;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r27
	ctx.r10.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r4,r9,1
	ctx.r4.u64 = ctx.r9.u64 ^ 1;
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82355530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82355530:
	// lwz r3,-31884(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31884);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23996
	ctx.r4.s64 = ctx.r11.s64 + 23996;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82355550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,2826
	ctx.r7.s64 = 2826;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82351858
	ctx.lr = 0x8235556C;
	sub_82351858(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8235559c
	if (!ctx.cr6.eq) goto loc_8235559C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235559c
	if (ctx.cr6.eq) goto loc_8235559C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r27
	ctx.r10.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r4,r9,1
	ctx.r4.u64 = ctx.r9.u64 ^ 1;
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8235559C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235559C:
	// rlwinm r11,r28,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82355614
	if (ctx.cr6.eq) goto loc_82355614;
	// lwz r3,-31884(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31884);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23932
	ctx.r4.s64 = ctx.r11.s64 + 23932;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823555C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,2836
	ctx.r7.s64 = 2836;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82351858
	ctx.lr = 0x823555E4;
	sub_82351858(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82355614
	if (!ctx.cr6.eq) goto loc_82355614;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355614
	if (ctx.cr6.eq) goto loc_82355614;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r27
	ctx.r10.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r4,r9,1
	ctx.r4.u64 = ctx.r9.u64 ^ 1;
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82355614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82355614:
	// lwz r3,-31884(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -31884);
	// bl 0x82354a28
	ctx.lr = 0x8235561C;
	sub_82354A28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82355624"))) PPC_WEAK_FUNC(sub_82355624);
PPC_FUNC_IMPL(__imp__sub_82355624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82355628"))) PPC_WEAK_FUNC(sub_82355628);
PPC_FUNC_IMPL(__imp__sub_82355628) {
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
	// lis r11,-31884
	ctx.r11.s64 = -2089549824;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25344);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,288(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82355654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31884
	ctx.r8.s64 = -2089549824;
	// lwz r3,25348(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25348);
	// bl 0x823548a8
	ctx.lr = 0x82355660;
	sub_823548A8(ctx, base);
	// lis r7,-31882
	ctx.r7.s64 = -2089418752;
	// addi r3,r7,-15020
	ctx.r3.s64 = ctx.r7.s64 + -15020;
	// bl 0x8280df40
	ctx.lr = 0x8235566C;
	sub_8280DF40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235567C"))) PPC_WEAK_FUNC(sub_8235567C);
PPC_FUNC_IMPL(__imp__sub_8235567C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82355680"))) PPC_WEAK_FUNC(sub_82355680);
PPC_FUNC_IMPL(__imp__sub_82355680) {
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
	// lis r30,-31884
	ctx.r30.s64 = -2089549824;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,25348(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25348);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823556B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,25348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25348);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823556d8
	if (ctx.cr6.eq) goto loc_823556D8;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823556D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823556D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823548a8
	ctx.lr = 0x823556E0;
	sub_823548A8(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x827009c0
	ctx.lr = 0x823556E8;
	sub_827009C0(ctx, base);
	// lis r30,-31883
	ctx.r30.s64 = -2089484288;
	// lwz r3,-31884(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31884);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82355700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x826fa5e0
	ctx.lr = 0x82355704;
	sub_826FA5E0(ctx, base);
	// bl 0x823521c8
	ctx.lr = 0x82355708;
	sub_823521C8(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x827009c0
	ctx.lr = 0x82355710;
	sub_827009C0(ctx, base);
	// lwz r3,-31884(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31884);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82355724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x826fa5e0
	ctx.lr = 0x82355728;
	sub_826FA5E0(ctx, base);
	// bl 0x82351f78
	ctx.lr = 0x8235572C;
	sub_82351F78(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x827009c0
	ctx.lr = 0x82355734;
	sub_827009C0(ctx, base);
	// lwz r3,-31884(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31884);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82355748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x826fa5e0
	ctx.lr = 0x8235574C;
	sub_826FA5E0(ctx, base);
	// lis r5,-31882
	ctx.r5.s64 = -2089418752;
	// addi r3,r5,-15020
	ctx.r3.s64 = ctx.r5.s64 + -15020;
	// bl 0x8280df40
	ctx.lr = 0x82355758;
	sub_8280DF40(ctx, base);
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

__attribute__((alias("__imp__sub_82355770"))) PPC_WEAK_FUNC(sub_82355770);
PPC_FUNC_IMPL(__imp__sub_82355770) {
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
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lis r10,-31884
	ctx.r10.s64 = -2089549824;
	// lwz r11,-31264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31264);
	// lwz r3,25348(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25348);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235580c
	if (ctx.cr6.eq) goto loc_8235580C;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8235580c
	if (!ctx.cr6.gt) goto loc_8235580C;
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8235580c
	if (ctx.cr6.eq) goto loc_8235580C;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x823557c8
	if (ctx.cr6.gt) goto loc_823557C8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823557d0
	goto loc_823557D0;
loc_823557C8:
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_823557D0:
	// lwz r10,980(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 980);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235580c
	if (ctx.cr6.eq) goto loc_8235580C;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x823557f0
	if (ctx.cr6.gt) goto loc_823557F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823557f8
	goto loc_823557F8;
loc_823557F0:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823557F8:
	// lwz r11,980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// lwz r10,568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8235580c
	if (ctx.cr6.eq) goto loc_8235580C;
	// bl 0x823547f8
	ctx.lr = 0x8235580C;
	sub_823547F8(ctx, base);
loc_8235580C:
	// bl 0x823520d8
	ctx.lr = 0x82355810;
	sub_823520D8(ctx, base);
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-31901(r10)
	PPC_STORE_U8(ctx.r10.u32 + -31901, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235582C"))) PPC_WEAK_FUNC(sub_8235582C);
PPC_FUNC_IMPL(__imp__sub_8235582C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82355830"))) PPC_WEAK_FUNC(sub_82355830);
PPC_FUNC_IMPL(__imp__sub_82355830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82355838;
	__savegprlr_25(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31883
	ctx.r25.s64 = -2089484288;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,-31860(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823558ac
	if (ctx.cr6.eq) goto loc_823558AC;
	// addi r4,r11,104
	ctx.r4.s64 = ctx.r11.s64 + 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294d90
	ctx.lr = 0x8235585C;
	sub_82294D90(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,256(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// bl 0x82cb20a0
	ctx.lr = 0x82355868;
	sub_82CB20A0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8235588c
	if (ctx.cr6.eq) goto loc_8235588C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235588c
	if (ctx.cr6.eq) goto loc_8235588C;
	// bl 0x82294a58
	ctx.lr = 0x8235588C;
	sub_82294A58(ctx, base);
loc_8235588C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235594c
	if (!ctx.cr6.eq) goto loc_8235594C;
	// lwz r3,-31860(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -31860);
	// bl 0x82351aa0
	ctx.lr = 0x823558A0;
	sub_82351AA0(ctx, base);
	// bl 0x82351e48
	ctx.lr = 0x823558A4;
	sub_82351E48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-31860(r25)
	PPC_STORE_U32(ctx.r25.u32 + -31860, ctx.r11.u32);
loc_823558AC:
	// lis r11,-31888
	ctx.r11.s64 = -2089811968;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,-17128
	ctx.r11.s64 = ctx.r11.s64 + -17128;
	// li r30,496
	ctx.r30.s64 = 496;
	// addi r31,r11,496
	ctx.r31.s64 = ctx.r11.s64 + 496;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r27,r11,42592
	ctx.r27.u64 = ctx.r11.u64 | 42592;
loc_823558C8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb0ec8
	ctx.lr = 0x823558D0;
	sub_82CB0EC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294d90
	ctx.lr = 0x823558E0;
	sub_82294D90(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,256(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// bl 0x82cb3658
	ctx.lr = 0x823558F0;
	sub_82CB3658(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82355914
	if (ctx.cr6.eq) goto loc_82355914;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355914
	if (ctx.cr6.eq) goto loc_82355914;
	// bl 0x82294a58
	ctx.lr = 0x82355914;
	sub_82294A58(ctx, base);
loc_82355914:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235593c
	if (!ctx.cr6.eq) goto loc_8235593C;
	// addi r30,r30,496
	ctx.r30.s64 = ctx.r30.s64 + 496;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,496
	ctx.r31.s64 = ctx.r31.s64 + 496;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823558c8
	if (ctx.cr6.lt) goto loc_823558C8;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
loc_8235593C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351bc8
	ctx.lr = 0x82355948;
	sub_82351BC8(ctx, base);
	// stw r31,-31860(r25)
	PPC_STORE_U32(ctx.r25.u32 + -31860, ctx.r31.u32);
loc_8235594C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82355954"))) PPC_WEAK_FUNC(sub_82355954);
PPC_FUNC_IMPL(__imp__sub_82355954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

