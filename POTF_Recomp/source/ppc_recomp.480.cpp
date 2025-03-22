#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F1BCD8"))) PPC_WEAK_FUNC(sub_82F1BCD8);
PPC_FUNC_IMPL(__imp__sub_82F1BCD8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f1bce8
	if (ctx.cr6.eq) goto loc_82F1BCE8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82F1BCE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1BCF0"))) PPC_WEAK_FUNC(sub_82F1BCF0);
PPC_FUNC_IMPL(__imp__sub_82F1BCF0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1BD08"))) PPC_WEAK_FUNC(sub_82F1BD08);
PPC_FUNC_IMPL(__imp__sub_82F1BD08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r11,-18112
	ctx.r6.s64 = ctx.r11.s64 + -18112;
	// beq cr6,0x82f1bd30
	if (ctx.cr6.eq) goto loc_82F1BD30;
	// li r5,7101
	ctx.r5.s64 = 7101;
	// b 0x82eea308
	sub_82EEA308(ctx, base);
	return;
loc_82F1BD30:
	// li r5,7102
	ctx.r5.s64 = 7102;
	// b 0x82eea530
	sub_82EEA530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1BD38"))) PPC_WEAK_FUNC(sub_82F1BD38);
PPC_FUNC_IMPL(__imp__sub_82F1BD38) {
	PPC_FUNC_PROLOGUE();
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// stw r4,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1BD44"))) PPC_WEAK_FUNC(sub_82F1BD44);
PPC_FUNC_IMPL(__imp__sub_82F1BD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1BD48"))) PPC_WEAK_FUNC(sub_82F1BD48);
PPC_FUNC_IMPL(__imp__sub_82F1BD48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,316(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1BD50"))) PPC_WEAK_FUNC(sub_82F1BD50);
PPC_FUNC_IMPL(__imp__sub_82F1BD50) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// beq cr6,0x82f1bd7c
	if (ctx.cr6.eq) goto loc_82F1BD7C;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x82f1bd74
	if (ctx.cr6.eq) goto loc_82F1BD74;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// bne cr6,0x82f1be38
	if (!ctx.cr6.eq) goto loc_82F1BE38;
loc_82F1BD74:
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// bne cr6,0x82f1be00
	if (!ctx.cr6.eq) goto loc_82F1BE00;
loc_82F1BD7C:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r10,-168
	ctx.r10.s64 = ctx.r10.s64 + -168;
loc_82F1BD88:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82f1bdac
	if (ctx.cr0.eq) goto loc_82F1BDAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82f1bd88
	if (ctx.cr6.eq) goto loc_82F1BD88;
loc_82F1BDAC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f1be60
	if (ctx.cr0.eq) goto loc_82F1BE60;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r10,-172
	ctx.r10.s64 = ctx.r10.s64 + -172;
loc_82F1BDC0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82f1bde4
	if (ctx.cr0.eq) goto loc_82F1BDE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82f1bdc0
	if (ctx.cr6.eq) goto loc_82F1BDC0;
loc_82F1BDE4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f1be60
	if (ctx.cr0.eq) goto loc_82F1BE60;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// bne cr6,0x82f1be54
	if (!ctx.cr6.eq) goto loc_82F1BE54;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82f1be54
	goto loc_82F1BE54;
loc_82F1BE00:
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// bne cr6,0x82f1be54
	if (!ctx.cr6.eq) goto loc_82F1BE54;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// bne cr6,0x82f1be30
	if (!ctx.cr6.eq) goto loc_82F1BE30;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82F1BE30:
	// cmpwi cr6,r11,77
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 77, ctx.xer);
	// beq cr6,0x82f1be54
	if (ctx.cr6.eq) goto loc_82F1BE54;
loc_82F1BE38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F1BE40:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82f1be38
	if (ctx.cr6.lt) goto loc_82F1BE38;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82f1be38
	if (ctx.cr6.gt) goto loc_82F1BE38;
loc_82F1BE54:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f1be40
	if (!ctx.cr0.eq) goto loc_82F1BE40;
loc_82F1BE60:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1BE68"))) PPC_WEAK_FUNC(sub_82F1BE68);
PPC_FUNC_IMPL(__imp__sub_82F1BE68) {
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
	// bl 0x82ee2358
	ctx.lr = 0x82F1BE80;
	sub_82EE2358(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f1be9c
	if (ctx.cr0.lt) goto loc_82F1BE9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82f1be9c
	if (!ctx.cr6.eq) goto loc_82F1BE9C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F1BE9C:
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

__attribute__((alias("__imp__sub_82F1BEB0"))) PPC_WEAK_FUNC(sub_82F1BEB0);
PPC_FUNC_IMPL(__imp__sub_82F1BEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82F1BEB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82f1c328
	if (!ctx.cr6.eq) goto loc_82F1C328;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82F1BED8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f1bed8
	if (!ctx.cr6.eq) goto loc_82F1BED8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bge cr6,0x82f1c328
	if (!ctx.cr6.lt) goto loc_82F1C328;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb1160
	ctx.lr = 0x82F1BF08;
	sub_82CB1160(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f1bf3c
	if (ctx.cr0.eq) goto loc_82F1BF3C;
loc_82F1BF18:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdc30
	ctx.lr = 0x82F1BF24;
	sub_82CBDC30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f1bf3c
	if (ctx.cr0.eq) goto loc_82F1BF3C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1bf18
	if (!ctx.cr6.eq) goto loc_82F1BF18;
loc_82F1BF3C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1bf58
	if (ctx.cr6.eq) goto loc_82F1BF58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb6a70
	ctx.lr = 0x82F1BF54;
	sub_82CB6A70(ctx, base);
	// b 0x82f1bf5c
	goto loc_82F1BF5C;
loc_82F1BF58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82F1BF5C:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 15, ctx.xer);
	// bgt cr6,0x82f1c328
	if (ctx.cr6.gt) goto loc_82F1C328;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1bf8c
	if (ctx.cr6.eq) goto loc_82F1BF8C;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// b 0x82f1bf88
	goto loc_82F1BF88;
loc_82F1BF7C:
	// bl 0x82cbdd38
	ctx.lr = 0x82F1BF80;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f1bf98
	if (ctx.cr0.eq) goto loc_82F1BF98;
loc_82F1BF88:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82F1BF8C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f1bf7c
	if (!ctx.cr0.eq) goto loc_82F1BF7C;
loc_82F1BF98:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1c328
	if (!ctx.cr6.eq) goto loc_82F1C328;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,21620
	ctx.r10.s64 = ctx.r10.s64 + 21620;
loc_82F1BFB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1bfd8
	if (ctx.cr0.eq) goto loc_82F1BFD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1bfb4
	if (ctx.cr6.eq) goto loc_82F1BFB4;
loc_82F1BFD8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1bfe8
	if (!ctx.cr0.eq) goto loc_82F1BFE8;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// b 0x82f1c320
	goto loc_82F1C320;
loc_82F1BFE8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,21632
	ctx.r10.s64 = ctx.r10.s64 + 21632;
loc_82F1BFF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1c018
	if (ctx.cr0.eq) goto loc_82F1C018;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1bff4
	if (ctx.cr6.eq) goto loc_82F1BFF4;
loc_82F1C018:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1c028
	if (!ctx.cr0.eq) goto loc_82F1C028;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82f1c31c
	goto loc_82F1C31C;
loc_82F1C028:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,21652
	ctx.r10.s64 = ctx.r10.s64 + 21652;
loc_82F1C034:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1c058
	if (ctx.cr0.eq) goto loc_82F1C058;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1c034
	if (ctx.cr6.eq) goto loc_82F1C034;
loc_82F1C058:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1c068
	if (!ctx.cr0.eq) goto loc_82F1C068;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82f1c31c
	goto loc_82F1C31C;
loc_82F1C068:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,21668
	ctx.r10.s64 = ctx.r10.s64 + 21668;
loc_82F1C074:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1c098
	if (ctx.cr0.eq) goto loc_82F1C098;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1c074
	if (ctx.cr6.eq) goto loc_82F1C074;
loc_82F1C098:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1c0a8
	if (!ctx.cr0.eq) goto loc_82F1C0A8;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82f1c31c
	goto loc_82F1C31C;
loc_82F1C0A8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,21676
	ctx.r10.s64 = ctx.r10.s64 + 21676;
loc_82F1C0B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1c0d8
	if (ctx.cr0.eq) goto loc_82F1C0D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1c0b4
	if (ctx.cr6.eq) goto loc_82F1C0B4;
loc_82F1C0D8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1c0e8
	if (!ctx.cr0.eq) goto loc_82F1C0E8;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82f1c31c
	goto loc_82F1C31C;
loc_82F1C0E8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,8268
	ctx.r10.s64 = ctx.r10.s64 + 8268;
loc_82F1C0F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1c118
	if (ctx.cr0.eq) goto loc_82F1C118;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1c0f4
	if (ctx.cr6.eq) goto loc_82F1C0F4;
loc_82F1C118:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1c128
	if (!ctx.cr0.eq) goto loc_82F1C128;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82f1c31c
	goto loc_82F1C31C;
loc_82F1C128:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,21684
	ctx.r10.s64 = ctx.r10.s64 + 21684;
loc_82F1C134:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1c158
	if (ctx.cr0.eq) goto loc_82F1C158;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1c134
	if (ctx.cr6.eq) goto loc_82F1C134;
loc_82F1C158:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1c168
	if (!ctx.cr0.eq) goto loc_82F1C168;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82f1c31c
	goto loc_82F1C31C;
loc_82F1C168:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,21704
	ctx.r10.s64 = ctx.r10.s64 + 21704;
loc_82F1C174:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1c198
	if (ctx.cr0.eq) goto loc_82F1C198;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1c174
	if (ctx.cr6.eq) goto loc_82F1C174;
loc_82F1C198:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1c1a8
	if (!ctx.cr0.eq) goto loc_82F1C1A8;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82f1c31c
	goto loc_82F1C31C;
loc_82F1C1A8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,21692
	ctx.r10.s64 = ctx.r10.s64 + 21692;
loc_82F1C1B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1c1d8
	if (ctx.cr0.eq) goto loc_82F1C1D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1c1b4
	if (ctx.cr6.eq) goto loc_82F1C1B4;
loc_82F1C1D8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1c1e8
	if (!ctx.cr0.eq) goto loc_82F1C1E8;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82f1c31c
	goto loc_82F1C31C;
loc_82F1C1E8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,21716
	ctx.r10.s64 = ctx.r10.s64 + 21716;
loc_82F1C1F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1c218
	if (ctx.cr0.eq) goto loc_82F1C218;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1c1f4
	if (ctx.cr6.eq) goto loc_82F1C1F4;
loc_82F1C218:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f1c328
	if (ctx.cr0.eq) goto loc_82F1C328;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,21728
	ctx.r10.s64 = ctx.r10.s64 + 21728;
loc_82F1C22C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1c250
	if (ctx.cr0.eq) goto loc_82F1C250;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1c22c
	if (ctx.cr6.eq) goto loc_82F1C22C;
loc_82F1C250:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1c260
	if (!ctx.cr0.eq) goto loc_82F1C260;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82f1c31c
	goto loc_82F1C31C;
loc_82F1C260:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,21644
	ctx.r10.s64 = ctx.r10.s64 + 21644;
loc_82F1C26C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1c290
	if (ctx.cr0.eq) goto loc_82F1C290;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1c26c
	if (ctx.cr6.eq) goto loc_82F1C26C;
loc_82F1C290:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1c2a0
	if (!ctx.cr0.eq) goto loc_82F1C2A0;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82f1c31c
	goto loc_82F1C31C;
loc_82F1C2A0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,21804
	ctx.r10.s64 = ctx.r10.s64 + 21804;
loc_82F1C2AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1c2d0
	if (ctx.cr0.eq) goto loc_82F1C2D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1c2ac
	if (ctx.cr6.eq) goto loc_82F1C2AC;
loc_82F1C2D0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1c2e0
	if (!ctx.cr0.eq) goto loc_82F1C2E0;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82f1c31c
	goto loc_82F1C31C;
loc_82F1C2E0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,21816
	ctx.r10.s64 = ctx.r10.s64 + 21816;
loc_82F1C2EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1c310
	if (ctx.cr0.eq) goto loc_82F1C310;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1c2ec
	if (ctx.cr6.eq) goto loc_82F1C2EC;
loc_82F1C310:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1c328
	if (!ctx.cr0.eq) goto loc_82F1C328;
	// li r11,13
	ctx.r11.s64 = 13;
loc_82F1C31C:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82F1C320:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f1c32c
	goto loc_82F1C32C;
loc_82F1C328:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F1C32C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1C334"))) PPC_WEAK_FUNC(sub_82F1C334);
PPC_FUNC_IMPL(__imp__sub_82F1C334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1C338"))) PPC_WEAK_FUNC(sub_82F1C338);
PPC_FUNC_IMPL(__imp__sub_82F1C338) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82f1beb0
	ctx.lr = 0x82F1C350;
	sub_82F1BEB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1C360"))) PPC_WEAK_FUNC(sub_82F1C360);
PPC_FUNC_IMPL(__imp__sub_82F1C360) {
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
	// beq cr6,0x82f1c388
	if (ctx.cr6.eq) goto loc_82F1C388;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82f1c3bc
	goto loc_82F1C3BC;
loc_82F1C388:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f1c3b4
	if (!ctx.cr6.eq) goto loc_82F1C3B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,5564
	ctx.r6.s64 = ctx.r11.s64 + 5564;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x82eea308
	ctx.lr = 0x82F1C3B0;
	sub_82EEA308(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_82F1C3B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_82F1C3BC:
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

__attribute__((alias("__imp__sub_82F1C3D4"))) PPC_WEAK_FUNC(sub_82F1C3D4);
PPC_FUNC_IMPL(__imp__sub_82F1C3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1C3D8"))) PPC_WEAK_FUNC(sub_82F1C3D8);
PPC_FUNC_IMPL(__imp__sub_82F1C3D8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// b 0x82f1c418
	goto loc_82F1C418;
loc_82F1C3EC:
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// bne cr6,0x82f1c3fc
	if (!ctx.cr6.eq) goto loc_82F1C3FC;
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82f1c430
	if (ctx.cr0.eq) goto loc_82F1C430;
loc_82F1C3FC:
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82f1c438
	if (!ctx.cr6.eq) goto loc_82F1C438;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82F1C418:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f1c3ec
	if (!ctx.cr0.eq) goto loc_82F1C3EC;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82F1C430:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82F1C438:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1C440"))) PPC_WEAK_FUNC(sub_82F1C440);
PPC_FUNC_IMPL(__imp__sub_82F1C440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82F1C448;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82F1C45C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f1c45c
	if (!ctx.cr6.eq) goto loc_82F1C45C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82f1c4b8
	goto loc_82F1C4B8;
loc_82F1C47C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82F1C480:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f1c480
	if (!ctx.cr6.eq) goto loc_82F1C480;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82f1c4b4
	if (!ctx.cr6.eq) goto loc_82F1C4B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1690
	ctx.lr = 0x82F1C4AC;
	sub_82CB1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f1c4dc
	if (ctx.cr0.eq) goto loc_82F1C4DC;
loc_82F1C4B4:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_82F1C4B8:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f1c47c
	if (!ctx.cr6.eq) goto loc_82F1C47C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82F1C4D0:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82F1C4DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f1c4d0
	goto loc_82F1C4D0;
}

__attribute__((alias("__imp__sub_82F1C4E8"))) PPC_WEAK_FUNC(sub_82F1C4E8);
PPC_FUNC_IMPL(__imp__sub_82F1C4E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1C4EC"))) PPC_WEAK_FUNC(sub_82F1C4EC);
PPC_FUNC_IMPL(__imp__sub_82F1C4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1C4F0"))) PPC_WEAK_FUNC(sub_82F1C4F0);
PPC_FUNC_IMPL(__imp__sub_82F1C4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1C4FC"))) PPC_WEAK_FUNC(sub_82F1C4FC);
PPC_FUNC_IMPL(__imp__sub_82F1C4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1C500"))) PPC_WEAK_FUNC(sub_82F1C500);
PPC_FUNC_IMPL(__imp__sub_82F1C500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82F1C508;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r5,r29,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f1c590
	if (ctx.cr6.eq) goto loc_82F1C590;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82F1C530:
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82f1c590
	if (ctx.cr6.lt) goto loc_82F1C590;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x82f1c574
	if (ctx.cr0.eq) goto loc_82F1C574;
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82F1C554:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r28.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1c574
	if (!ctx.cr0.eq) goto loc_82F1C574;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82f1c554
	if (!ctx.cr6.eq) goto loc_82F1C554;
loc_82F1C574:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f1c5bc
	if (ctx.cr0.eq) goto loc_82F1C5BC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1c530
	if (ctx.cr6.lt) goto loc_82F1C530;
loc_82F1C590:
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F1C5A4;
	sub_82CB1160(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82F1C5B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
loc_82F1C5BC:
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82f1c5b4
	goto loc_82F1C5B4;
}

__attribute__((alias("__imp__sub_82F1C5C8"))) PPC_WEAK_FUNC(sub_82F1C5C8);
PPC_FUNC_IMPL(__imp__sub_82F1C5C8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f1c62c
	if (ctx.cr6.eq) goto loc_82F1C62C;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_82F1C5E4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r7,r3,16
	ctx.r7.s64 = ctx.r3.s64 + 16;
loc_82F1C5F0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82f1c610
	if (!ctx.cr0.eq) goto loc_82F1C610;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82f1c5f0
	if (!ctx.cr6.eq) goto loc_82F1C5F0;
loc_82F1C610:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f1c670
	if (ctx.cr0.eq) goto loc_82F1C670;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1c5e4
	if (ctx.cr6.lt) goto loc_82F1C5E4;
loc_82F1C62C:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82F1C664:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82F1C670:
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// b 0x82f1c664
	goto loc_82F1C664;
}

__attribute__((alias("__imp__sub_82F1C67C"))) PPC_WEAK_FUNC(sub_82F1C67C);
PPC_FUNC_IMPL(__imp__sub_82F1C67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1C680"))) PPC_WEAK_FUNC(sub_82F1C680);
PPC_FUNC_IMPL(__imp__sub_82F1C680) {
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
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f1c7e0
	if (ctx.cr6.eq) goto loc_82F1C7E0;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1c7e0
	if (ctx.cr6.eq) goto loc_82F1C7E0;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r10,21940
	ctx.r10.s64 = ctx.r10.s64 + 21940;
loc_82F1C6BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1c6e0
	if (ctx.cr0.eq) goto loc_82F1C6E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1c6bc
	if (ctx.cr6.eq) goto loc_82F1C6BC;
loc_82F1C6E0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1c6f0
	if (!ctx.cr0.eq) goto loc_82F1C6F0;
	// li r3,4095
	ctx.r3.s64 = 4095;
	// b 0x82f1c7e4
	goto loc_82F1C7E4;
loc_82F1C6F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82F1C700:
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bge cr6,0x82f1c7c0
	if (!ctx.cr6.lt) goto loc_82F1C7C0;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// bgt cr6,0x82f1c760
	if (ctx.cr6.gt) goto loc_82F1C760;
	// beq cr6,0x82f1c790
	if (ctx.cr6.eq) goto loc_82F1C790;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x82f1c758
	if (ctx.cr6.eq) goto loc_82F1C758;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// beq cr6,0x82f1c750
	if (ctx.cr6.eq) goto loc_82F1C750;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x82f1c744
	if (ctx.cr6.eq) goto loc_82F1C744;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x82f1c798
	if (ctx.cr6.eq) goto loc_82F1C798;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// b 0x82f1c784
	goto loc_82F1C784;
loc_82F1C744:
	// li r11,7
	ctx.r11.s64 = 7;
loc_82F1C748:
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x82f1c7a4
	goto loc_82F1C7A4;
loc_82F1C750:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82f1c748
	goto loc_82F1C748;
loc_82F1C758:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82f1c748
	goto loc_82F1C748;
loc_82F1C760:
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x82f1c7a0
	if (ctx.cr6.eq) goto loc_82F1C7A0;
	// cmpwi cr6,r11,119
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 119, ctx.xer);
	// beq cr6,0x82f1c798
	if (ctx.cr6.eq) goto loc_82F1C798;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82f1c7a0
	if (ctx.cr6.eq) goto loc_82F1C7A0;
	// cmpwi cr6,r11,121
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 121, ctx.xer);
	// beq cr6,0x82f1c790
	if (ctx.cr6.eq) goto loc_82F1C790;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
loc_82F1C784:
	// bne cr6,0x82f1c7c0
	if (!ctx.cr6.eq) goto loc_82F1C7C0;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82f1c748
	goto loc_82F1C748;
loc_82F1C790:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82f1c748
	goto loc_82F1C748;
loc_82F1C798:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82f1c748
	goto loc_82F1C748;
loc_82F1C7A0:
	// slw r11,r31,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
loc_82F1C7A4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1c700
	if (!ctx.cr6.eq) goto loc_82F1C700;
	// b 0x82f1c7e4
	goto loc_82F1C7E4;
loc_82F1C7C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,2003
	ctx.r5.s64 = 2003;
	// addi r6,r11,19084
	ctx.r6.s64 = ctx.r11.s64 + 19084;
	// bl 0x82eea308
	ctx.lr = 0x82F1C7D4;
	sub_82EEA308(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
	// b 0x82f1c7e4
	goto loc_82F1C7E4;
loc_82F1C7E0:
	// li r3,2257
	ctx.r3.s64 = 2257;
loc_82F1C7E4:
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

__attribute__((alias("__imp__sub_82F1C7FC"))) PPC_WEAK_FUNC(sub_82F1C7FC);
PPC_FUNC_IMPL(__imp__sub_82F1C7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1C800"))) PPC_WEAK_FUNC(sub_82F1C800);
PPC_FUNC_IMPL(__imp__sub_82F1C800) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82F1C810:
	// srw r11,r4,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bgt cr6,0x82f1c840
	if (ctx.cr6.gt) goto loc_82F1C840;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82f1c870
	if (!ctx.cr6.gt) goto loc_82F1C870;
	// mulli r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 * 3;
	// addi r7,r9,-3
	ctx.r7.s64 = ctx.r9.s64 + -3;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// slw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// b 0x82f1c858
	goto loc_82F1C858;
loc_82F1C840:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f1c854
	if (ctx.cr6.eq) goto loc_82F1C854;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82f1c870
	if (!ctx.cr6.eq) goto loc_82F1C870;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82F1C854:
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
loc_82F1C858:
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// blt cr6,0x82f1c810
	if (ctx.cr6.lt) goto loc_82F1C810;
	// blr 
	return;
loc_82F1C870:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1C878"))) PPC_WEAK_FUNC(sub_82F1C878);
PPC_FUNC_IMPL(__imp__sub_82F1C878) {
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
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f1c968
	if (ctx.cr6.eq) goto loc_82F1C968;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1c968
	if (ctx.cr6.eq) goto loc_82F1C968;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82F1C8B4:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f1c8f4
	if (ctx.cr0.eq) goto loc_82F1C8F4;
	// cmpwi cr6,r11,119
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 119, ctx.xer);
	// bgt cr6,0x82f1c940
	if (ctx.cr6.gt) goto loc_82F1C940;
	// beq cr6,0x82f1c938
	if (ctx.cr6.eq) goto loc_82F1C938;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x82f1c938
	if (ctx.cr6.eq) goto loc_82F1C938;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// beq cr6,0x82f1c958
	if (ctx.cr6.eq) goto loc_82F1C958;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// beq cr6,0x82f1c960
	if (ctx.cr6.eq) goto loc_82F1C960;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// bne cr6,0x82f1c914
	if (!ctx.cr6.eq) goto loc_82F1C914;
loc_82F1C8EC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82F1C8F0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82F1C8F4:
	// slw r11,r10,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x82f1c8b4
	if (ctx.cr6.lt) goto loc_82F1C8B4;
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1c96c
	if (ctx.cr6.eq) goto loc_82F1C96C;
loc_82F1C914:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2004
	ctx.r5.s64 = 2004;
	// addi r6,r11,19104
	ctx.r6.s64 = ctx.r11.s64 + 19104;
	// bl 0x82eea308
	ctx.lr = 0x82F1C928;
	sub_82EEA308(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// b 0x82f1c96c
	goto loc_82F1C96C;
loc_82F1C938:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x82f1c8f0
	goto loc_82F1C8F0;
loc_82F1C940:
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82f1c8ec
	if (ctx.cr6.eq) goto loc_82F1C8EC;
	// cmpwi cr6,r11,121
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 121, ctx.xer);
	// beq cr6,0x82f1c960
	if (ctx.cr6.eq) goto loc_82F1C960;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// bne cr6,0x82f1c914
	if (!ctx.cr6.eq) goto loc_82F1C914;
loc_82F1C958:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82f1c8f0
	goto loc_82F1C8F0;
loc_82F1C960:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82f1c8f0
	goto loc_82F1C8F0;
loc_82F1C968:
	// li r3,228
	ctx.r3.s64 = 228;
loc_82F1C96C:
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

__attribute__((alias("__imp__sub_82F1C980"))) PPC_WEAK_FUNC(sub_82F1C980);
PPC_FUNC_IMPL(__imp__sub_82F1C980) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1c9ac
	if (ctx.cr6.eq) goto loc_82F1C9AC;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f1c9a4
	if (!ctx.cr6.eq) goto loc_82F1C9A4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82F1C9A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82F1C9AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1C9B4"))) PPC_WEAK_FUNC(sub_82F1C9B4);
PPC_FUNC_IMPL(__imp__sub_82F1C9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1C9B8"))) PPC_WEAK_FUNC(sub_82F1C9B8);
PPC_FUNC_IMPL(__imp__sub_82F1C9B8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,24
	ctx.r11.s64 = ctx.r5.s64 + 24;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// beq cr6,0x82f1ca10
	if (ctx.cr6.eq) goto loc_82F1CA10;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x82f1ca28
	if (ctx.cr6.eq) goto loc_82F1CA28;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82f1c9e8
	if (ctx.cr6.eq) goto loc_82F1C9E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82F1C9E8:
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r10,85
	ctx.r10.s64 = ctx.r10.s64 * 85;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f1ca00
	if (ctx.cr6.eq) goto loc_82F1CA00;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F1CA00:
	// addi r11,r5,25
	ctx.r11.s64 = ctx.r5.s64 + 25;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_82F1CA10:
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r10,85
	ctx.r10.s64 = ctx.r10.s64 * 85;
loc_82F1CA18:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82F1CA28:
	// rlwinm r10,r11,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 * 84;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x82f1ca18
	goto loc_82F1CA18;
}

__attribute__((alias("__imp__sub_82F1CA3C"))) PPC_WEAK_FUNC(sub_82F1CA3C);
PPC_FUNC_IMPL(__imp__sub_82F1CA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CA40"))) PPC_WEAK_FUNC(sub_82F1CA40);
PPC_FUNC_IMPL(__imp__sub_82F1CA40) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,24
	ctx.r11.s64 = ctx.r5.s64 + 24;
	// lis r10,-31908
	ctx.r10.s64 = -2091122688;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,20712
	ctx.r10.s64 = ctx.r10.s64 + 20712;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// beq cr6,0x82f1caa4
	if (ctx.cr6.eq) goto loc_82F1CAA4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82f1cabc
	if (ctx.cr6.eq) goto loc_82F1CABC;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x82f1ca7c
	if (ctx.cr6.eq) goto loc_82F1CA7C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82F1CA7C:
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r10,85
	ctx.r10.s64 = ctx.r10.s64 * 85;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f1ca94
	if (ctx.cr6.eq) goto loc_82F1CA94;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F1CA94:
	// addi r11,r5,25
	ctx.r11.s64 = ctx.r5.s64 + 25;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_82F1CAA4:
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r10,85
	ctx.r10.s64 = ctx.r10.s64 * 85;
loc_82F1CAAC:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82F1CABC:
	// rlwinm r10,r11,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 * 84;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x82f1caac
	goto loc_82F1CAAC;
}

__attribute__((alias("__imp__sub_82F1CAD0"))) PPC_WEAK_FUNC(sub_82F1CAD0);
PPC_FUNC_IMPL(__imp__sub_82F1CAD0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 + 24;
	// lis r9,-31908
	ctx.r9.s64 = -2091122688;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,20712
	ctx.r9.s64 = ctx.r9.s64 + 20712;
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lwz r3,36(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// beq cr6,0x82f1cb7c
	if (ctx.cr6.eq) goto loc_82F1CB7C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82f1cb68
	if (ctx.cr6.eq) goto loc_82F1CB68;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r10,r4,25
	ctx.r10.s64 = ctx.r4.s64 + 25;
	// clrlwi r7,r3,30
	ctx.r7.u64 = ctx.r3.u32 & 0x3;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1cb44
	if (ctx.cr6.eq) goto loc_82F1CB44;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82f1cb3c
	if (!ctx.cr6.eq) goto loc_82F1CB3C;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82F1CB3C:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
loc_82F1CB44:
	// rlwinm r8,r10,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r11,r10,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r10,r7,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwimi r11,r10,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// or r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 | ctx.r9.u64;
	// blr 
	return;
loc_82F1CB68:
	// rlwinm r11,r3,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3;
	// rlwinm r10,r3,6,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xC0;
	// mulli r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 * 21;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// blr 
	return;
loc_82F1CB7C:
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// mulli r3,r11,85
	ctx.r3.s64 = ctx.r11.s64 * 85;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1CB88"))) PPC_WEAK_FUNC(sub_82F1CB88);
PPC_FUNC_IMPL(__imp__sub_82F1CB88) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82f1cbac
	if (ctx.cr6.eq) goto loc_82F1CBAC;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82f1cbac
	if (ctx.cr6.eq) goto loc_82F1CBAC;
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82F1CBAC:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1CBB4"))) PPC_WEAK_FUNC(sub_82F1CBB4);
PPC_FUNC_IMPL(__imp__sub_82F1CBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CBB8"))) PPC_WEAK_FUNC(sub_82F1CBB8);
PPC_FUNC_IMPL(__imp__sub_82F1CBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-164
	ctx.r10.s64 = ctx.r10.s64 + -164;
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// lbzx r10,r4,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// bgt cr6,0x82f1cc50
	if (ctx.cr6.gt) goto loc_82F1CC50;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-752
	ctx.r12.s64 = ctx.r12.s64 + -752;
	// lbzx r0,r12,r3
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r3.u32);
	// lis r12,-32014
	ctx.r12.s64 = -2098069504;
	// addi r12,r12,-13320
	ctx.r12.s64 = ctx.r12.s64 + -13320;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82F1CBF8;
	case 1:
		goto loc_82F1CC4C;
	case 2:
		goto loc_82F1CC10;
	case 3:
		goto loc_82F1CC10;
	case 4:
		goto loc_82F1CC10;
	case 5:
		goto loc_82F1CBF8;
	case 6:
		goto loc_82F1CC18;
	case 7:
		goto loc_82F1CC18;
	case 8:
		goto loc_82F1CBF8;
	case 9:
		goto loc_82F1CBF8;
	case 10:
		goto loc_82F1CC28;
	case 11:
		goto loc_82F1CC10;
	case 12:
		goto loc_82F1CC10;
	case 13:
		goto loc_82F1CC30;
	case 14:
		goto loc_82F1CC38;
	default:
		__builtin_unreachable();
	}
loc_82F1CBF8:
	// andi. r10,r10,23
	ctx.r10.u64 = ctx.r10.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_82F1CBFC:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// b 0x82f1cc50
	goto loc_82F1CC50;
loc_82F1CC10:
	// andi. r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// b 0x82f1cbfc
	goto loc_82F1CBFC;
loc_82F1CC18:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// blt cr6,0x82f1cc50
	if (ctx.cr6.lt) goto loc_82F1CC50;
	// andi. r10,r10,23
	ctx.r10.u64 = ctx.r10.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// b 0x82f1cc44
	goto loc_82F1CC44;
loc_82F1CC28:
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// b 0x82f1cbfc
	goto loc_82F1CBFC;
loc_82F1CC30:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// b 0x82f1cc3c
	goto loc_82F1CC3C;
loc_82F1CC38:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
loc_82F1CC3C:
	// blt cr6,0x82f1cc50
	if (ctx.cr6.lt) goto loc_82F1CC50;
	// andi. r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_82F1CC44:
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f1cc50
	if (ctx.cr0.eq) goto loc_82F1CC50;
loc_82F1CC4C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F1CC50:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82f1cc84
	if (ctx.cr6.eq) goto loc_82F1CC84;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// addi r6,r9,-18112
	ctx.r6.s64 = ctx.r9.s64 + -18112;
	// b 0x82eea308
	sub_82EEA308(ctx, base);
	return;
loc_82F1CC84:
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r6,r10,-18112
	ctx.r6.s64 = ctx.r10.s64 + -18112;
	// b 0x82eea530
	sub_82EEA530(ctx, base);
	return;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82f1ccbc
	if (ctx.cr6.eq) goto loc_82F1CCBC;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// addi r6,r9,-18112
	ctx.r6.s64 = ctx.r9.s64 + -18112;
	// b 0x82eea308
	sub_82EEA308(ctx, base);
	return;
loc_82F1CCBC:
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r6,r10,-18112
	ctx.r6.s64 = ctx.r10.s64 + -18112;
	// b 0x82eea530
	sub_82EEA530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CCC8"))) PPC_WEAK_FUNC(sub_82F1CCC8);
PPC_FUNC_IMPL(__imp__sub_82F1CCC8) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f16108
	ctx.lr = 0x82F1CCEC;
	sub_82F16108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f1cd00
	if (ctx.cr0.eq) goto loc_82F1CD00;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82f9edd8
	ctx.lr = 0x82F1CCFC;
	sub_82F9EDD8(ctx, base);
	// b 0x82f1cd04
	goto loc_82F1CD04;
loc_82F1CD00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F1CD04:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82f1cd18
	if (!ctx.cr6.eq) goto loc_82F1CD18;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f1cd20
	goto loc_82F1CD20;
loc_82F1CD18:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F1CD20:
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

__attribute__((alias("__imp__sub_82F1CD38"))) PPC_WEAK_FUNC(sub_82F1CD38);
PPC_FUNC_IMPL(__imp__sub_82F1CD38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// b 0x82f1cd50
	goto loc_82F1CD50;
loc_82F1CD40:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_82F1CD50:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82f1cd40
	if (!ctx.cr6.eq) goto loc_82F1CD40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1CD5C"))) PPC_WEAK_FUNC(sub_82F1CD5C);
PPC_FUNC_IMPL(__imp__sub_82F1CD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CD60"))) PPC_WEAK_FUNC(sub_82F1CD60);
PPC_FUNC_IMPL(__imp__sub_82F1CD60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1CD6C"))) PPC_WEAK_FUNC(sub_82F1CD6C);
PPC_FUNC_IMPL(__imp__sub_82F1CD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CD70"))) PPC_WEAK_FUNC(sub_82F1CD70);
PPC_FUNC_IMPL(__imp__sub_82F1CD70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1CD74"))) PPC_WEAK_FUNC(sub_82F1CD74);
PPC_FUNC_IMPL(__imp__sub_82F1CD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CD78"))) PPC_WEAK_FUNC(sub_82F1CD78);
PPC_FUNC_IMPL(__imp__sub_82F1CD78) {
	PPC_FUNC_PROLOGUE();
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cb16f0
	sub_82CB16F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CD84"))) PPC_WEAK_FUNC(sub_82F1CD84);
PPC_FUNC_IMPL(__imp__sub_82F1CD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CD88"))) PPC_WEAK_FUNC(sub_82F1CD88);
PPC_FUNC_IMPL(__imp__sub_82F1CD88) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1CDB0"))) PPC_WEAK_FUNC(sub_82F1CDB0);
PPC_FUNC_IMPL(__imp__sub_82F1CDB0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1CDD0"))) PPC_WEAK_FUNC(sub_82F1CDD0);
PPC_FUNC_IMPL(__imp__sub_82F1CDD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1CDD4"))) PPC_WEAK_FUNC(sub_82F1CDD4);
PPC_FUNC_IMPL(__imp__sub_82F1CDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CDD8"))) PPC_WEAK_FUNC(sub_82F1CDD8);
PPC_FUNC_IMPL(__imp__sub_82F1CDD8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1CDE4"))) PPC_WEAK_FUNC(sub_82F1CDE4);
PPC_FUNC_IMPL(__imp__sub_82F1CDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CDE8"))) PPC_WEAK_FUNC(sub_82F1CDE8);
PPC_FUNC_IMPL(__imp__sub_82F1CDE8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1CE10"))) PPC_WEAK_FUNC(sub_82F1CE10);
PPC_FUNC_IMPL(__imp__sub_82F1CE10) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1CE30"))) PPC_WEAK_FUNC(sub_82F1CE30);
PPC_FUNC_IMPL(__imp__sub_82F1CE30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f1ce4c
	if (!ctx.cr6.eq) goto loc_82F1CE4C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82F1CE4C:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82f1ce6c
	if (ctx.cr0.eq) goto loc_82F1CE6C;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bne 0x82f1ce4c
	if (!ctx.cr0.eq) goto loc_82F1CE4C;
loc_82F1CE6C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f1ce80
	if (!ctx.cr6.eq) goto loc_82F1CE80;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
loc_82F1CE80:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1CE8C"))) PPC_WEAK_FUNC(sub_82F1CE8C);
PPC_FUNC_IMPL(__imp__sub_82F1CE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CE90"))) PPC_WEAK_FUNC(sub_82F1CE90);
PPC_FUNC_IMPL(__imp__sub_82F1CE90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f1cec4
	if (ctx.cr6.eq) goto loc_82F1CEC4;
loc_82F1CEA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1cebc
	if (ctx.cr6.eq) goto loc_82F1CEBC;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82f1cea4
	if (!ctx.cr0.eq) goto loc_82F1CEA4;
loc_82F1CEBC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f1ced0
	if (!ctx.cr6.eq) goto loc_82F1CED0;
loc_82F1CEC4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82F1CED0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r11,r4,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r4.s64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1CEE4"))) PPC_WEAK_FUNC(sub_82F1CEE4);
PPC_FUNC_IMPL(__imp__sub_82F1CEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CEE8"))) PPC_WEAK_FUNC(sub_82F1CEE8);
PPC_FUNC_IMPL(__imp__sub_82F1CEE8) {
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
	// bl 0x82f16148
	ctx.lr = 0x82F1CF00;
	sub_82F16148(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r10,-136
	ctx.r10.s64 = ctx.r10.s64 + -136;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F1CF30"))) PPC_WEAK_FUNC(sub_82F1CF30);
PPC_FUNC_IMPL(__imp__sub_82F1CF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-136
	ctx.r11.s64 = ctx.r11.s64 + -136;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1CF40"))) PPC_WEAK_FUNC(sub_82F1CF40);
PPC_FUNC_IMPL(__imp__sub_82F1CF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-136
	ctx.r11.s64 = ctx.r11.s64 + -136;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1CF50"))) PPC_WEAK_FUNC(sub_82F1CF50);
PPC_FUNC_IMPL(__imp__sub_82F1CF50) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e73580
	sub_82E73580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CF54"))) PPC_WEAK_FUNC(sub_82F1CF54);
PPC_FUNC_IMPL(__imp__sub_82F1CF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CF58"))) PPC_WEAK_FUNC(sub_82F1CF58);
PPC_FUNC_IMPL(__imp__sub_82F1CF58) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e73588
	sub_82E73588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CF5C"))) PPC_WEAK_FUNC(sub_82F1CF5C);
PPC_FUNC_IMPL(__imp__sub_82F1CF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CF60"))) PPC_WEAK_FUNC(sub_82F1CF60);
PPC_FUNC_IMPL(__imp__sub_82F1CF60) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e6e668
	sub_82E6E668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CF64"))) PPC_WEAK_FUNC(sub_82F1CF64);
PPC_FUNC_IMPL(__imp__sub_82F1CF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CF68"))) PPC_WEAK_FUNC(sub_82F1CF68);
PPC_FUNC_IMPL(__imp__sub_82F1CF68) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e6aca0
	sub_82E6ACA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CF6C"))) PPC_WEAK_FUNC(sub_82F1CF6C);
PPC_FUNC_IMPL(__imp__sub_82F1CF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CF70"))) PPC_WEAK_FUNC(sub_82F1CF70);
PPC_FUNC_IMPL(__imp__sub_82F1CF70) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e735f8
	sub_82E735F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CF74"))) PPC_WEAK_FUNC(sub_82F1CF74);
PPC_FUNC_IMPL(__imp__sub_82F1CF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CF78"))) PPC_WEAK_FUNC(sub_82F1CF78);
PPC_FUNC_IMPL(__imp__sub_82F1CF78) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e73590
	sub_82E73590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CF7C"))) PPC_WEAK_FUNC(sub_82F1CF7C);
PPC_FUNC_IMPL(__imp__sub_82F1CF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CF80"))) PPC_WEAK_FUNC(sub_82F1CF80);
PPC_FUNC_IMPL(__imp__sub_82F1CF80) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e6ac60
	sub_82E6AC60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CF84"))) PPC_WEAK_FUNC(sub_82F1CF84);
PPC_FUNC_IMPL(__imp__sub_82F1CF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CF88"))) PPC_WEAK_FUNC(sub_82F1CF88);
PPC_FUNC_IMPL(__imp__sub_82F1CF88) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e72c88
	sub_82E72C88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CF8C"))) PPC_WEAK_FUNC(sub_82F1CF8C);
PPC_FUNC_IMPL(__imp__sub_82F1CF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CF90"))) PPC_WEAK_FUNC(sub_82F1CF90);
PPC_FUNC_IMPL(__imp__sub_82F1CF90) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e6ac80
	sub_82E6AC80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CF94"))) PPC_WEAK_FUNC(sub_82F1CF94);
PPC_FUNC_IMPL(__imp__sub_82F1CF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CF98"))) PPC_WEAK_FUNC(sub_82F1CF98);
PPC_FUNC_IMPL(__imp__sub_82F1CF98) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e6e690
	sub_82E6E690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CF9C"))) PPC_WEAK_FUNC(sub_82F1CF9C);
PPC_FUNC_IMPL(__imp__sub_82F1CF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CFA0"))) PPC_WEAK_FUNC(sub_82F1CFA0);
PPC_FUNC_IMPL(__imp__sub_82F1CFA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e70dd0
	sub_82E70DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CFA4"))) PPC_WEAK_FUNC(sub_82F1CFA4);
PPC_FUNC_IMPL(__imp__sub_82F1CFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CFA8"))) PPC_WEAK_FUNC(sub_82F1CFA8);
PPC_FUNC_IMPL(__imp__sub_82F1CFA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e6e6a8
	sub_82E6E6A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CFAC"))) PPC_WEAK_FUNC(sub_82F1CFAC);
PPC_FUNC_IMPL(__imp__sub_82F1CFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CFB0"))) PPC_WEAK_FUNC(sub_82F1CFB0);
PPC_FUNC_IMPL(__imp__sub_82F1CFB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e72cb8
	sub_82E72CB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CFB4"))) PPC_WEAK_FUNC(sub_82F1CFB4);
PPC_FUNC_IMPL(__imp__sub_82F1CFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CFB8"))) PPC_WEAK_FUNC(sub_82F1CFB8);
PPC_FUNC_IMPL(__imp__sub_82F1CFB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e72ca0
	sub_82E72CA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CFBC"))) PPC_WEAK_FUNC(sub_82F1CFBC);
PPC_FUNC_IMPL(__imp__sub_82F1CFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CFC0"))) PPC_WEAK_FUNC(sub_82F1CFC0);
PPC_FUNC_IMPL(__imp__sub_82F1CFC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e73598
	sub_82E73598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CFC4"))) PPC_WEAK_FUNC(sub_82F1CFC4);
PPC_FUNC_IMPL(__imp__sub_82F1CFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CFC8"))) PPC_WEAK_FUNC(sub_82F1CFC8);
PPC_FUNC_IMPL(__imp__sub_82F1CFC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e735b0
	sub_82E735B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CFCC"))) PPC_WEAK_FUNC(sub_82F1CFCC);
PPC_FUNC_IMPL(__imp__sub_82F1CFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CFD0"))) PPC_WEAK_FUNC(sub_82F1CFD0);
PPC_FUNC_IMPL(__imp__sub_82F1CFD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e735c8
	sub_82E735C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CFD4"))) PPC_WEAK_FUNC(sub_82F1CFD4);
PPC_FUNC_IMPL(__imp__sub_82F1CFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CFD8"))) PPC_WEAK_FUNC(sub_82F1CFD8);
PPC_FUNC_IMPL(__imp__sub_82F1CFD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e735e0
	sub_82E735E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CFDC"))) PPC_WEAK_FUNC(sub_82F1CFDC);
PPC_FUNC_IMPL(__imp__sub_82F1CFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CFE0"))) PPC_WEAK_FUNC(sub_82F1CFE0);
PPC_FUNC_IMPL(__imp__sub_82F1CFE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e73878
	sub_82E73878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CFE4"))) PPC_WEAK_FUNC(sub_82F1CFE4);
PPC_FUNC_IMPL(__imp__sub_82F1CFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CFE8"))) PPC_WEAK_FUNC(sub_82F1CFE8);
PPC_FUNC_IMPL(__imp__sub_82F1CFE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e6e6c0
	sub_82E6E6C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CFEC"))) PPC_WEAK_FUNC(sub_82F1CFEC);
PPC_FUNC_IMPL(__imp__sub_82F1CFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CFF0"))) PPC_WEAK_FUNC(sub_82F1CFF0);
PPC_FUNC_IMPL(__imp__sub_82F1CFF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e73890
	sub_82E73890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CFF4"))) PPC_WEAK_FUNC(sub_82F1CFF4);
PPC_FUNC_IMPL(__imp__sub_82F1CFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CFF8"))) PPC_WEAK_FUNC(sub_82F1CFF8);
PPC_FUNC_IMPL(__imp__sub_82F1CFF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e6e6f0
	sub_82E6E6F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CFFC"))) PPC_WEAK_FUNC(sub_82F1CFFC);
PPC_FUNC_IMPL(__imp__sub_82F1CFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D000"))) PPC_WEAK_FUNC(sub_82F1D000);
PPC_FUNC_IMPL(__imp__sub_82F1D000) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e6e720
	sub_82E6E720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D004"))) PPC_WEAK_FUNC(sub_82F1D004);
PPC_FUNC_IMPL(__imp__sub_82F1D004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D008"))) PPC_WEAK_FUNC(sub_82F1D008);
PPC_FUNC_IMPL(__imp__sub_82F1D008) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e6e750
	sub_82E6E750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D00C"))) PPC_WEAK_FUNC(sub_82F1D00C);
PPC_FUNC_IMPL(__imp__sub_82F1D00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D010"))) PPC_WEAK_FUNC(sub_82F1D010);
PPC_FUNC_IMPL(__imp__sub_82F1D010) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e73600
	sub_82E73600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D014"))) PPC_WEAK_FUNC(sub_82F1D014);
PPC_FUNC_IMPL(__imp__sub_82F1D014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D018"))) PPC_WEAK_FUNC(sub_82F1D018);
PPC_FUNC_IMPL(__imp__sub_82F1D018) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e73918
	sub_82E73918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D01C"))) PPC_WEAK_FUNC(sub_82F1D01C);
PPC_FUNC_IMPL(__imp__sub_82F1D01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D020"))) PPC_WEAK_FUNC(sub_82F1D020);
PPC_FUNC_IMPL(__imp__sub_82F1D020) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e73608
	sub_82E73608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D024"))) PPC_WEAK_FUNC(sub_82F1D024);
PPC_FUNC_IMPL(__imp__sub_82F1D024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D028"))) PPC_WEAK_FUNC(sub_82F1D028);
PPC_FUNC_IMPL(__imp__sub_82F1D028) {
	PPC_FUNC_PROLOGUE();
	// b 0x831f71a8
	sub_831F71A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D02C"))) PPC_WEAK_FUNC(sub_82F1D02C);
PPC_FUNC_IMPL(__imp__sub_82F1D02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D030"))) PPC_WEAK_FUNC(sub_82F1D030);
PPC_FUNC_IMPL(__imp__sub_82F1D030) {
	PPC_FUNC_PROLOGUE();
	// b 0x831f7218
	sub_831F7218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D034"))) PPC_WEAK_FUNC(sub_82F1D034);
PPC_FUNC_IMPL(__imp__sub_82F1D034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D038"))) PPC_WEAK_FUNC(sub_82F1D038);
PPC_FUNC_IMPL(__imp__sub_82F1D038) {
	PPC_FUNC_PROLOGUE();
	// b 0x831f7228
	sub_831F7228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D03C"))) PPC_WEAK_FUNC(sub_82F1D03C);
PPC_FUNC_IMPL(__imp__sub_82F1D03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D040"))) PPC_WEAK_FUNC(sub_82F1D040);
PPC_FUNC_IMPL(__imp__sub_82F1D040) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fc510
	sub_831FC510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D044"))) PPC_WEAK_FUNC(sub_82F1D044);
PPC_FUNC_IMPL(__imp__sub_82F1D044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D048"))) PPC_WEAK_FUNC(sub_82F1D048);
PPC_FUNC_IMPL(__imp__sub_82F1D048) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fbab8
	sub_831FBAB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D04C"))) PPC_WEAK_FUNC(sub_82F1D04C);
PPC_FUNC_IMPL(__imp__sub_82F1D04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D050"))) PPC_WEAK_FUNC(sub_82F1D050);
PPC_FUNC_IMPL(__imp__sub_82F1D050) {
	PPC_FUNC_PROLOGUE();
	// b 0x831fc518
	sub_831FC518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D054"))) PPC_WEAK_FUNC(sub_82F1D054);
PPC_FUNC_IMPL(__imp__sub_82F1D054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D058"))) PPC_WEAK_FUNC(sub_82F1D058);
PPC_FUNC_IMPL(__imp__sub_82F1D058) {
	PPC_FUNC_PROLOGUE();
	// b 0x831f91f8
	sub_831F91F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D05C"))) PPC_WEAK_FUNC(sub_82F1D05C);
PPC_FUNC_IMPL(__imp__sub_82F1D05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D060"))) PPC_WEAK_FUNC(sub_82F1D060);
PPC_FUNC_IMPL(__imp__sub_82F1D060) {
	PPC_FUNC_PROLOGUE();
	// b 0x831f71c8
	sub_831F71C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D064"))) PPC_WEAK_FUNC(sub_82F1D064);
PPC_FUNC_IMPL(__imp__sub_82F1D064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D068"))) PPC_WEAK_FUNC(sub_82F1D068);
PPC_FUNC_IMPL(__imp__sub_82F1D068) {
	PPC_FUNC_PROLOGUE();
	// b 0x831f7238
	sub_831F7238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D06C"))) PPC_WEAK_FUNC(sub_82F1D06C);
PPC_FUNC_IMPL(__imp__sub_82F1D06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D070"))) PPC_WEAK_FUNC(sub_82F1D070);
PPC_FUNC_IMPL(__imp__sub_82F1D070) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x82299698
	sub_82299698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D078"))) PPC_WEAK_FUNC(sub_82F1D078);
PPC_FUNC_IMPL(__imp__sub_82F1D078) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D080"))) PPC_WEAK_FUNC(sub_82F1D080);
PPC_FUNC_IMPL(__imp__sub_82F1D080) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1D094"))) PPC_WEAK_FUNC(sub_82F1D094);
PPC_FUNC_IMPL(__imp__sub_82F1D094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D098"))) PPC_WEAK_FUNC(sub_82F1D098);
PPC_FUNC_IMPL(__imp__sub_82F1D098) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1D0A8"))) PPC_WEAK_FUNC(sub_82F1D0A8);
PPC_FUNC_IMPL(__imp__sub_82F1D0A8) {
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
	// addi r7,r31,16
	ctx.r7.s64 = ctx.r31.s64 + 16;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,-18112
	ctx.r6.s64 = ctx.r11.s64 + -18112;
	// beq cr6,0x82f1d0fc
	if (ctx.cr6.eq) goto loc_82F1D0FC;
	// li r5,7101
	ctx.r5.s64 = 7101;
	// bl 0x82eea308
	ctx.lr = 0x82F1D0F8;
	sub_82EEA308(ctx, base);
	// b 0x82f1d104
	goto loc_82F1D104;
loc_82F1D0FC:
	// li r5,7102
	ctx.r5.s64 = 7102;
	// bl 0x82eea530
	ctx.lr = 0x82F1D104;
	sub_82EEA530(ctx, base);
loc_82F1D104:
	// sth r30,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r30.u16);
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

__attribute__((alias("__imp__sub_82F1D120"))) PPC_WEAK_FUNC(sub_82F1D120);
PPC_FUNC_IMPL(__imp__sub_82F1D120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F1D128;
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
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F1D13C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f1d18c
	if (ctx.cr6.eq) goto loc_82F1D18C;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82f1d17c
	if (ctx.cr6.eq) goto loc_82F1D17C;
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r11,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r11.u8);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// cmplwi cr6,r11,511
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 511, ctx.xer);
	// blt cr6,0x82f1d184
	if (ctx.cr6.lt) goto loc_82F1D184;
loc_82F1D17C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1d0a8
	ctx.lr = 0x82F1D184;
	sub_82F1D0A8(ctx, base);
loc_82F1D184:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82f1d13c
	if (!ctx.cr6.lt) goto loc_82F1D13C;
loc_82F1D18C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D194"))) PPC_WEAK_FUNC(sub_82F1D194);
PPC_FUNC_IMPL(__imp__sub_82F1D194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D198"))) PPC_WEAK_FUNC(sub_82F1D198);
PPC_FUNC_IMPL(__imp__sub_82F1D198) {
	PPC_FUNC_PROLOGUE();
	// b 0x82f1d120
	sub_82F1D120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D19C"))) PPC_WEAK_FUNC(sub_82F1D19C);
PPC_FUNC_IMPL(__imp__sub_82F1D19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D1A0"))) PPC_WEAK_FUNC(sub_82F1D1A0);
PPC_FUNC_IMPL(__imp__sub_82F1D1A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1D1D0"))) PPC_WEAK_FUNC(sub_82F1D1D0);
PPC_FUNC_IMPL(__imp__sub_82F1D1D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1d260
	if (ctx.cr6.eq) goto loc_82F1D260;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82f1d1fc
	if (ctx.cr6.eq) goto loc_82F1D1FC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82f1d1fc
	if (ctx.cr6.eq) goto loc_82F1D1FC;
	// ble cr6,0x82f1d200
	if (!ctx.cr6.gt) goto loc_82F1D200;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82f1d208
	if (!ctx.cr6.gt) goto loc_82F1D208;
	// b 0x82f1d200
	goto loc_82F1D200;
loc_82F1D1FC:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82F1D200:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82f1d26c
	if (!ctx.cr6.eq) goto loc_82F1D26C;
loc_82F1D208:
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lfd f0,8(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82f1d260
	if (ctx.cr6.lt) goto loc_82F1D260;
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82f1d260
	if (ctx.cr6.gt) goto loc_82F1D260;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82f1d2a8
	if (ctx.cr6.eq) goto loc_82F1D2A8;
loc_82F1D260:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82F1D26C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82f1d28c
	if (!ctx.cr6.eq) goto loc_82F1D28C;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82f1d260
	if (ctx.cr6.gt) goto loc_82F1D260;
	// b 0x82f1d298
	goto loc_82F1D298;
loc_82F1D28C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82f1d260
	if (!ctx.cr6.eq) goto loc_82F1D260;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_82F1D298:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82f1d260
	if (ctx.cr6.lt) goto loc_82F1D260;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82f1d260
	if (ctx.cr6.gt) goto loc_82F1D260;
loc_82F1D2A8:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1D2B4"))) PPC_WEAK_FUNC(sub_82F1D2B4);
PPC_FUNC_IMPL(__imp__sub_82F1D2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D2B8"))) PPC_WEAK_FUNC(sub_82F1D2B8);
PPC_FUNC_IMPL(__imp__sub_82F1D2B8) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1d380
	if (ctx.cr6.eq) goto loc_82F1D380;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82f1d1d0
	ctx.lr = 0x82F1D2DC;
	sub_82F1D1D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f1d2ec
	if (ctx.cr0.lt) goto loc_82F1D2EC;
loc_82F1D2E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f1d388
	goto loc_82F1D388;
loc_82F1D2EC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x82f1d380
	if (!ctx.cr6.eq) goto loc_82F1D380;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r10,r11,-12384
	ctx.r10.s64 = ctx.r11.s64 + -12384;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82F1D308:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f1d32c
	if (ctx.cr0.eq) goto loc_82F1D32C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1d308
	if (ctx.cr6.eq) goto loc_82F1D308;
loc_82F1D32C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1d33c
	if (!ctx.cr0.eq) goto loc_82F1D33C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82f1d378
	goto loc_82F1D378;
loc_82F1D33C:
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-12392
	ctx.r10.s64 = ctx.r10.s64 + -12392;
loc_82F1D348:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1d36c
	if (ctx.cr0.eq) goto loc_82F1D36C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1d348
	if (ctx.cr6.eq) goto loc_82F1D348;
loc_82F1D36C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1d380
	if (!ctx.cr0.eq) goto loc_82F1D380;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F1D378:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82f1d2e4
	goto loc_82F1D2E4;
loc_82F1D380:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82F1D388:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1D398"))) PPC_WEAK_FUNC(sub_82F1D398);
PPC_FUNC_IMPL(__imp__sub_82F1D398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82F1D3A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// stw r7,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r5.u32);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// rlwinm r8,r7,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lwz r26,132(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// oris r29,r10,8
	ctx.r29.u64 = ctx.r10.u64 | 524288;
	// rlwimi r26,r8,30,1,1
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r8.u32, 30) & 0x40000000) | (ctx.r26.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// beq cr6,0x82f1d5e4
	if (ctx.cr6.eq) goto loc_82F1D5E4;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// lis r31,-32253
	ctx.r31.s64 = -2113732608;
	// lis r30,-32253
	ctx.r30.s64 = -2113732608;
	// lis r29,-32253
	ctx.r29.s64 = -2113732608;
	// lis r8,-31908
	ctx.r8.s64 = -2091122688;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r9,r9,456
	ctx.r9.s64 = ctx.r9.s64 + 456;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r19,r7,432
	ctx.r19.s64 = ctx.r7.s64 + 432;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// addi r25,r6,380
	ctx.r25.s64 = ctx.r6.s64 + 380;
	// addi r18,r5,344
	ctx.r18.s64 = ctx.r5.s64 + 344;
	// addi r21,r4,308
	ctx.r21.s64 = ctx.r4.s64 + 308;
	// addi r17,r3,268
	ctx.r17.s64 = ctx.r3.s64 + 268;
	// addi r16,r31,232
	ctx.r16.s64 = ctx.r31.s64 + 232;
	// addi r15,r30,176
	ctx.r15.s64 = ctx.r30.s64 + 176;
	// addi r14,r29,116
	ctx.r14.s64 = ctx.r29.s64 + 116;
	// addi r23,r8,21272
	ctx.r23.s64 = ctx.r8.s64 + 21272;
	// addi r22,r10,84
	ctx.r22.s64 = ctx.r10.s64 + 84;
	// addi r20,r11,16
	ctx.r20.s64 = ctx.r11.s64 + 16;
loc_82F1D488:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82f1d4b4
	if (ctx.cr6.eq) goto loc_82F1D4B4;
loc_82F1D4A8:
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
	// b 0x82f1d5c8
	goto loc_82F1D5C8;
loc_82F1D4B4:
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r31,24(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82f1d548
	if (!ctx.cr6.eq) goto loc_82F1D548;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f1d548
	if (!ctx.cr6.eq) goto loc_82F1D548;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82f1d548
	if (!ctx.cr0.eq) goto loc_82F1D548;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f1d4fc
	if (ctx.cr6.eq) goto loc_82F1D4FC;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82F1D4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f1d528
	goto loc_82F1D528;
loc_82F1D4FC:
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// bl 0x82f1beb0
	ctx.lr = 0x82F1D50C;
	sub_82F1BEB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f1d530
	if (!ctx.cr0.eq) goto loc_82F1D530;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82F1D528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F1D528:
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// b 0x82f1d5c8
	goto loc_82F1D5C8;
loc_82F1D530:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x82f1d5c8
	goto loc_82F1D5C8;
loc_82F1D548:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f1d558
	if (!ctx.cr6.eq) goto loc_82F1D558;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x82f1d5b8
	goto loc_82F1D5B8;
loc_82F1D558:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82f1d4a8
	if (!ctx.cr6.eq) goto loc_82F1D4A8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82F1D570:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_82F1D578:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// beq 0x82f1d59c
	if (ctx.cr0.eq) goto loc_82F1D59C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82f1d578
	if (ctx.cr6.eq) goto loc_82F1D578;
loc_82F1D59C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f1d620
	if (ctx.cr0.eq) goto loc_82F1D620;
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplwi cr6,r7,216
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 216, ctx.xer);
	// blt cr6,0x82f1d570
	if (ctx.cr6.lt) goto loc_82F1D570;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_82F1D5B8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82F1D5C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F1D5C8:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1d488
	if (!ctx.cr6.eq) goto loc_82F1D488;
	// lwz r31,332(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r29,128(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82F1D5E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1d83c
	if (ctx.cr6.eq) goto loc_82F1D83C;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f1d83c
	if (!ctx.cr0.eq) goto loc_82F1D83C;
	// lis r10,-31908
	ctx.r10.s64 = -2091122688;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,21804
	ctx.r10.s64 = ctx.r10.s64 + 21804;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r9,-40
	ctx.r4.s64 = ctx.r9.s64 + -40;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82F1D61C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f1d860
	goto loc_82F1D860;
loc_82F1D620:
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x82f1d63c
	if (!ctx.cr6.eq) goto loc_82F1D63C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82f1d658
	if (!ctx.cr6.eq) goto loc_82F1D658;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// b 0x82f1d5b8
	goto loc_82F1D5B8;
loc_82F1D63C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82f1d658
	if (!ctx.cr6.eq) goto loc_82F1D658;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82f1d658
	if (!ctx.cr6.eq) goto loc_82F1D658;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// b 0x82f1d5b8
	goto loc_82F1D5B8;
loc_82F1D658:
	// lbz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// slw r9,r24,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r29.u8 & 0x3F));
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f1d674
	if (ctx.cr0.eq) goto loc_82F1D674;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// b 0x82f1d5b8
	goto loc_82F1D5B8;
loc_82F1D674:
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// li r30,0
	ctx.r30.s64 = 0;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// blt cr6,0x82f1d74c
	if (ctx.cr6.lt) goto loc_82F1D74C;
	// beq cr6,0x82f1d734
	if (ctx.cr6.eq) goto loc_82F1D734;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82f1d6e8
	if (ctx.cr6.lt) goto loc_82F1D6E8;
	// bne cr6,0x82f1d704
	if (!ctx.cr6.eq) goto loc_82F1D704;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r11,r24,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// subfic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r5.s64 = -1 - ctx.r6.s64;
	// bl 0x82f1d1d0
	ctx.lr = 0x82F1D6C8;
	sub_82F1D1D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f1d7cc
	if (!ctx.cr0.lt) goto loc_82F1D7CC;
loc_82F1D6D0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82F1D6E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f1d5c8
	goto loc_82F1D5C8;
loc_82F1D6E8:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82f1d1d0
	ctx.lr = 0x82F1D6F8;
	sub_82F1D1D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f1d6d0
	if (ctx.cr0.lt) goto loc_82F1D6D0;
loc_82F1D700:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82F1D704:
	// cmplwi cr6,r29,10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 10, ctx.xer);
	// bgt cr6,0x82f1d5c8
	if (ctx.cr6.gt) goto loc_82F1D5C8;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-736
	ctx.r12.s64 = ctx.r12.s64 + -736;
	// lbzx r0,r12,r29
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r29.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32014
	ctx.r12.s64 = -2098069504;
	// addi r12,r12,-10808
	ctx.r12.s64 = ctx.r12.s64 + -10808;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r29.u64) {
	case 0:
		goto loc_82F1D7D4;
	case 1:
		goto loc_82F1D7E8;
	case 2:
		goto loc_82F1D7F0;
	case 3:
		goto loc_82F1D7F8;
	case 4:
		goto loc_82F1D800;
	case 5:
		goto loc_82F1D808;
	case 6:
		goto loc_82F1D810;
	case 7:
		goto loc_82F1D818;
	case 8:
		goto loc_82F1D828;
	case 9:
		goto loc_82F1D5C8;
	case 10:
		goto loc_82F1D834;
	default:
		__builtin_unreachable();
	}
loc_82F1D734:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82f1d2b8
	ctx.lr = 0x82F1D73C;
	sub_82F1D2B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f1d700
	if (!ctx.cr0.lt) goto loc_82F1D700;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// b 0x82f1d5b8
	goto loc_82F1D5B8;
loc_82F1D74C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x82f1d760
	if (ctx.cr6.eq) goto loc_82F1D760;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// b 0x82f1d5b8
	goto loc_82F1D5B8;
loc_82F1D760:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82f1d7a0
	goto loc_82F1D7A0;
loc_82F1D76C:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82F1D770:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f1d794
	if (ctx.cr0.eq) goto loc_82F1D794;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1d770
	if (ctx.cr6.eq) goto loc_82F1D770;
loc_82F1D794:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f1d7c4
	if (ctx.cr0.eq) goto loc_82F1D7C4;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
loc_82F1D7A0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1d76c
	if (!ctx.cr6.eq) goto loc_82F1D76C;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82F1D7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f1d5c8
	goto loc_82F1D5C8;
loc_82F1D7C4:
	// lbz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// b 0x82f1d704
	goto loc_82F1D704;
loc_82F1D7CC:
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82f1d704
	goto loc_82F1D704;
loc_82F1D7D4:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// rlwimi r11,r10,27,2,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 27) & 0x38000000) | (ctx.r11.u64 & 0xFFFFFFFFC7FFFFFF);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// b 0x82f1d5c8
	goto loc_82F1D5C8;
loc_82F1D7E8:
	// rlwimi r26,r8,12,19,19
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0x1000) | (ctx.r26.u64 & 0xFFFFFFFFFFFFEFFF);
	// b 0x82f1d5c8
	goto loc_82F1D5C8;
loc_82F1D7F0:
	// rlwimi r26,r8,13,18,18
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r8.u32, 13) & 0x2000) | (ctx.r26.u64 & 0xFFFFFFFFFFFFDFFF);
	// b 0x82f1d5c8
	goto loc_82F1D5C8;
loc_82F1D7F8:
	// rlwimi r26,r8,15,16,16
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r8.u32, 15) & 0x8000) | (ctx.r26.u64 & 0xFFFFFFFFFFFF7FFF);
	// b 0x82f1d5c8
	goto loc_82F1D5C8;
loc_82F1D800:
	// rlwimi r26,r8,16,10,15
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0x3F0000) | (ctx.r26.u64 & 0xFFFFFFFFFFC0FFFF);
	// b 0x82f1d5c8
	goto loc_82F1D5C8;
loc_82F1D808:
	// rlwimi r26,r30,24,2,7
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r30.u32, 24) & 0x3F000000) | (ctx.r26.u64 & 0xFFFFFFFFC0FFFFFF);
	// b 0x82f1d5c8
	goto loc_82F1D5C8;
loc_82F1D810:
	// rlwimi r26,r8,30,1,1
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r8.u32, 30) & 0x40000000) | (ctx.r26.u64 & 0xFFFFFFFFBFFFFFFF);
	// b 0x82f1d5c8
	goto loc_82F1D5C8;
loc_82F1D818:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwimi r11,r8,0,24,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF00);
loc_82F1D820:
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// b 0x82f1d5c8
	goto loc_82F1D5C8;
loc_82F1D828:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwimi r11,r30,8,1,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0x7FFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF800000FF);
	// b 0x82f1d820
	goto loc_82F1D820;
loc_82F1D834:
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// b 0x82f1d5c8
	goto loc_82F1D5C8;
loc_82F1D83C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82f1d860
	if (ctx.cr6.eq) goto loc_82F1D860;
	// rlwinm. r11,r29,0,2,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x38000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f1d860
	if (ctx.cr0.eq) goto loc_82F1D860;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-120
	ctx.r4.s64 = ctx.r11.s64 + -120;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82F1D860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F1D860:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,340(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r8,348(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D890"))) PPC_WEAK_FUNC(sub_82F1D890);
PPC_FUNC_IMPL(__imp__sub_82F1D890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82F1D898;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r23,52(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r8,60(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r5,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r5.u32);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r25,160(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// oris r21,r11,7967
	ctx.r21.u64 = ctx.r11.u64 | 522125312;
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// rlwimi r25,r8,14,16,17
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r8.u32, 14) & 0xC000) | (ctx.r25.u64 & 0xFFFFFFFFFFFF3FFF);
	// ori r21,r21,61440
	ctx.r21.u64 = ctx.r21.u64 | 61440;
	// rlwimi r23,r10,0,0,26
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFE0) | (ctx.r23.u64 & 0xFFFFFFFF0000001F);
	// beq cr6,0x82f1da34
	if (ctx.cr6.eq) goto loc_82F1DA34;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r29,-32253
	ctx.r29.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfd f31,-18352(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18352);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// lis r31,-32253
	ctx.r31.s64 = -2113732608;
	// lis r30,-32253
	ctx.r30.s64 = -2113732608;
	// lis r28,-32253
	ctx.r28.s64 = -2113732608;
	// lis r10,-31908
	ctx.r10.s64 = -2091122688;
	// addi r29,r29,780
	ctx.r29.s64 = ctx.r29.s64 + 780;
	// addi r8,r8,268
	ctx.r8.s64 = ctx.r8.s64 + 268;
	// addi r9,r9,232
	ctx.r9.s64 = ctx.r9.s64 + 232;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r11,r11,456
	ctx.r11.s64 = ctx.r11.s64 + 456;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r24,r7,-164
	ctx.r24.s64 = ctx.r7.s64 + -164;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r18,r6,432
	ctx.r18.s64 = ctx.r6.s64 + 432;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r17,r5,736
	ctx.r17.s64 = ctx.r5.s64 + 736;
	// addi r16,r4,632
	ctx.r16.s64 = ctx.r4.s64 + 632;
	// addi r15,r3,576
	ctx.r15.s64 = ctx.r3.s64 + 576;
	// addi r14,r31,544
	ctx.r14.s64 = ctx.r31.s64 + 544;
	// addi r20,r30,492
	ctx.r20.s64 = ctx.r30.s64 + 492;
	// addi r19,r28,308
	ctx.r19.s64 = ctx.r28.s64 + 308;
	// addi r22,r10,21624
	ctx.r22.s64 = ctx.r10.s64 + 21624;
loc_82F1D97C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,24(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// bne cr6,0x82f1d9a8
	if (!ctx.cr6.eq) goto loc_82F1D9A8;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82f1da18
	goto loc_82F1DA18;
loc_82F1D9A8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82f1d9c4
	if (ctx.cr6.eq) goto loc_82F1D9C4;
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82f1da28
	goto loc_82F1DA28;
loc_82F1D9C4:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82F1D9D0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82F1D9D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f1d9fc
	if (ctx.cr0.eq) goto loc_82F1D9FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1d9d8
	if (ctx.cr6.eq) goto loc_82F1D9D8;
loc_82F1D9FC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f1da50
	if (ctx.cr0.eq) goto loc_82F1DA50;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r8,180
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 180, ctx.xer);
	// blt cr6,0x82f1d9d0
	if (ctx.cr6.lt) goto loc_82F1D9D0;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
loc_82F1DA18:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82F1DA28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F1DA28:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1d97c
	if (!ctx.cr6.eq) goto loc_82F1D97C;
loc_82F1DA34:
	// lwz r11,364(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r21,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82F1DA50:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f1da70
	if (ctx.cr0.eq) goto loc_82F1DA70;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82f1da18
	goto loc_82F1DA18;
loc_82F1DA70:
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// li r31,0
	ctx.r31.s64 = 0;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// blt cr6,0x82f1dc80
	if (ctx.cr6.lt) goto loc_82F1DC80;
	// beq cr6,0x82f1dc68
	if (ctx.cr6.eq) goto loc_82F1DC68;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82f1dc30
	if (ctx.cr6.lt) goto loc_82F1DC30;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82f1dd04
	if (!ctx.cr6.eq) goto loc_82F1DD04;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82f1dacc
	if (ctx.cr6.lt) goto loc_82F1DACC;
	// bne cr6,0x82f1dad4
	if (!ctx.cr6.eq) goto loc_82F1DAD4;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x82f1dad4
	goto loc_82F1DAD4;
loc_82F1DACC:
	// li r10,63
	ctx.r10.s64 = 63;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82F1DAD4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82f1dafc
	if (ctx.cr6.eq) goto loc_82F1DAFC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82f1dafc
	if (ctx.cr6.eq) goto loc_82F1DAFC;
	// ble cr6,0x82f1db00
	if (!ctx.cr6.gt) goto loc_82F1DB00;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x82f1db00
	if (ctx.cr6.gt) goto loc_82F1DB00;
loc_82F1DAF4:
	// lfd f0,8(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// b 0x82f1db40
	goto loc_82F1DB40;
loc_82F1DAFC:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82F1DB00:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82f1db30
	if (ctx.cr6.eq) goto loc_82F1DB30;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82f1db20
	if (ctx.cr6.eq) goto loc_82F1DB20;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82f1daf4
	if (ctx.cr6.eq) goto loc_82F1DAF4;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// b 0x82f1da18
	goto loc_82F1DA18;
loc_82F1DB20:
	// lwa r11,8(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 8));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// b 0x82f1db3c
	goto loc_82F1DB3C;
loc_82F1DB30:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
loc_82F1DB3C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
loc_82F1DB40:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// frsp f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// li r8,1
	ctx.r8.s64 = 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// slw r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f11,136(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fdiv f0,f31,f13
	ctx.f0.f64 = ctx.f31.f64 / ctx.f13.f64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f3,f11,f0
	ctx.f3.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fneg f2,f12
	ctx.f2.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// blt cr6,0x82f1dc00
	if (ctx.cr6.lt) goto loc_82F1DC00;
	// fcmpu cr6,f1,f3
	ctx.cr6.compare(ctx.f1.f64, ctx.f3.f64);
	// bgt cr6,0x82f1dc00
	if (ctx.cr6.gt) goto loc_82F1DC00;
	// fmul f12,f13,f1
	ctx.f12.f64 = ctx.f13.f64 * ctx.f1.f64;
	// fctiwz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// lfd f13,152(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x82f1dd04
	if (ctx.cr6.eq) goto loc_82F1DD04;
	// fmul f2,f13,f0
	ctx.f2.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fadd f3,f2,f0
	ctx.f3.f64 = ctx.f2.f64 + ctx.f0.f64;
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82F1DBFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f1dd04
	goto loc_82F1DD04;
loc_82F1DC00:
	// stfd f2,48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82F1DC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f1da28
	goto loc_82F1DA28;
loc_82F1DC30:
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82f1d1d0
	ctx.lr = 0x82F1DC44;
	sub_82F1D1D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f1dd00
	if (!ctx.cr0.lt) goto loc_82F1DD00;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82F1DC64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f1da28
	goto loc_82F1DA28;
loc_82F1DC68:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f1d2b8
	ctx.lr = 0x82F1DC70;
	sub_82F1D2B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f1dd00
	if (!ctx.cr0.lt) goto loc_82F1DD00;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x82f1da18
	goto loc_82F1DA18;
loc_82F1DC80:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82f1dc94
	if (ctx.cr6.eq) goto loc_82F1DC94;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x82f1da18
	goto loc_82F1DA18;
loc_82F1DC94:
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82f1dcd4
	goto loc_82F1DCD4;
loc_82F1DCA0:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82F1DCA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f1dcc8
	if (ctx.cr0.eq) goto loc_82F1DCC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1dca4
	if (ctx.cr6.eq) goto loc_82F1DCA4;
loc_82F1DCC8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f1dcf8
	if (ctx.cr0.eq) goto loc_82F1DCF8;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
loc_82F1DCD4:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1dca0
	if (!ctx.cr6.eq) goto loc_82F1DCA0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82F1DCF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f1da28
	goto loc_82F1DA28;
loc_82F1DCF8:
	// lbz r29,4(r8)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// b 0x82f1dd04
	goto loc_82F1DD04;
loc_82F1DD00:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82F1DD04:
	// clrlwi r11,r23,27
	ctx.r11.u64 = ctx.r23.u32 & 0x1F;
	// lbz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// rlwinm r10,r25,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// lbzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// bgt cr6,0x82f1ddd8
	if (ctx.cr6.gt) goto loc_82F1DDD8;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-688
	ctx.r12.s64 = ctx.r12.s64 + -688;
	// lbzx r0,r12,r9
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r9.u32);
	// lis r12,-32014
	ctx.r12.s64 = -2098069504;
	// addi r12,r12,-8892
	ctx.r12.s64 = ctx.r12.s64 + -8892;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82F1DD44;
	case 1:
		goto loc_82F1DD78;
	case 2:
		goto loc_82F1DD5C;
	case 3:
		goto loc_82F1DD5C;
	case 4:
		goto loc_82F1DD5C;
	case 5:
		goto loc_82F1DD44;
	case 6:
		goto loc_82F1DD64;
	case 7:
		goto loc_82F1DD64;
	case 8:
		goto loc_82F1DD44;
	case 9:
		goto loc_82F1DD44;
	case 10:
		goto loc_82F1DDA0;
	case 11:
		goto loc_82F1DD5C;
	case 12:
		goto loc_82F1DD5C;
	case 13:
		goto loc_82F1DDA8;
	case 14:
		goto loc_82F1DDB8;
	default:
		__builtin_unreachable();
	}
loc_82F1DD44:
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82F1DD48:
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// b 0x82f1ddd0
	goto loc_82F1DDD0;
loc_82F1DD5C:
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82f1dd48
	goto loc_82F1DD48;
loc_82F1DD64:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82f1ddd8
	if (ctx.cr6.lt) goto loc_82F1DDD8;
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82F1DD70:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f1ddd8
	if (ctx.cr0.eq) goto loc_82F1DDD8;
loc_82F1DD78:
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-720
	ctx.r12.s64 = ctx.r12.s64 + -720;
	// rlwinm r0,r9,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32014
	ctx.r12.s64 = -2098069504;
	// addi r12,r12,-9688
	ctx.r12.s64 = ctx.r12.s64 + -9688;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82F1DDE0;
	case 1:
		goto loc_82F1DDE8;
	case 2:
		goto loc_82F1DDF0;
	case 3:
		goto loc_82F1DDF8;
	case 4:
		goto loc_82F1DE00;
	case 5:
		goto loc_82F1DE08;
	case 6:
		goto loc_82F1DE10;
	case 7:
		goto loc_82F1DE18;
	case 8:
		goto loc_82F1DE20;
	case 9:
		goto loc_82F1DE28;
	case 10:
		goto loc_82F1DE30;
	case 11:
		goto loc_82F1DE3C;
	case 12:
		goto loc_82F1DE44;
	case 13:
		goto loc_82F1DE4C;
	case 14:
		goto loc_82F1DE54;
	default:
		__builtin_unreachable();
	}
loc_82F1DDA0:
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// b 0x82f1dd48
	goto loc_82F1DD48;
loc_82F1DDA8:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82f1ddd8
	if (ctx.cr6.lt) goto loc_82F1DDD8;
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82f1dd70
	goto loc_82F1DD70;
loc_82F1DDB8:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82f1ddcc
	if (ctx.cr6.lt) goto loc_82F1DDCC;
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f1dd78
	if (!ctx.cr0.eq) goto loc_82F1DD78;
loc_82F1DDCC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F1DDD0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f1dd78
	if (!ctx.cr6.eq) goto loc_82F1DD78;
loc_82F1DDD8:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// b 0x82f1da18
	goto loc_82F1DA18;
loc_82F1DDE0:
	// rlwimi r23,r29,25,6,6
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r29.u32, 25) & 0x2000000) | (ctx.r23.u64 & 0xFFFFFFFFFDFFFFFF);
	// b 0x82f1da28
	goto loc_82F1DA28;
loc_82F1DDE8:
	// rlwimi r23,r29,19,12,12
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r29.u32, 19) & 0x80000) | (ctx.r23.u64 & 0xFFFFFFFFFFF7FFFF);
	// b 0x82f1da28
	goto loc_82F1DA28;
loc_82F1DDF0:
	// rlwimi r21,r29,12,18,19
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0x3000) | (ctx.r21.u64 & 0xFFFFFFFFFFFFCFFF);
	// b 0x82f1da28
	goto loc_82F1DA28;
loc_82F1DDF8:
	// rlwimi r21,r29,14,16,17
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r29.u32, 14) & 0xC000) | (ctx.r21.u64 & 0xFFFFFFFFFFFF3FFF);
	// b 0x82f1da28
	goto loc_82F1DA28;
loc_82F1DE00:
	// rlwimi r21,r29,16,14,15
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0x30000) | (ctx.r21.u64 & 0xFFFFFFFFFFFCFFFF);
	// b 0x82f1da28
	goto loc_82F1DA28;
loc_82F1DE08:
	// rlwimi r21,r29,18,11,13
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r29.u32, 18) & 0x1C0000) | (ctx.r21.u64 & 0xFFFFFFFFFFE3FFFF);
	// b 0x82f1da28
	goto loc_82F1DA28;
loc_82F1DE10:
	// rlwimi r21,r29,24,6,7
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r29.u32, 24) & 0x3000000) | (ctx.r21.u64 & 0xFFFFFFFFFCFFFFFF);
	// b 0x82f1da28
	goto loc_82F1DA28;
loc_82F1DE18:
	// rlwimi r21,r29,26,4,5
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r29.u32, 26) & 0xC000000) | (ctx.r21.u64 & 0xFFFFFFFFF3FFFFFF);
	// b 0x82f1da28
	goto loc_82F1DA28;
loc_82F1DE20:
	// rlwimi r21,r29,28,3,3
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r29.u32, 28) & 0x10000000) | (ctx.r21.u64 & 0xFFFFFFFFEFFFFFFF);
	// b 0x82f1da28
	goto loc_82F1DA28;
loc_82F1DE28:
	// rlwimi r21,r29,29,2,2
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r29.u32, 29) & 0x20000000) | (ctx.r21.u64 & 0xFFFFFFFFDFFFFFFF);
	// b 0x82f1da28
	goto loc_82F1DA28;
loc_82F1DE30:
	// rlwimi r29,r25,0,0,30
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r25.u32, 0) & 0xFFFFFFFE) | (ctx.r29.u64 & 0xFFFFFFFF00000001);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// b 0x82f1da28
	goto loc_82F1DA28;
loc_82F1DE3C:
	// rlwimi r25,r31,2,23,29
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r31.u32, 2) & 0x1FC) | (ctx.r25.u64 & 0xFFFFFFFFFFFFFE03);
	// b 0x82f1da28
	goto loc_82F1DA28;
loc_82F1DE44:
	// rlwimi r25,r31,16,11,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0x1F0000) | (ctx.r25.u64 & 0xFFFFFFFFFFE0FFFF);
	// b 0x82f1da28
	goto loc_82F1DA28;
loc_82F1DE4C:
	// rlwimi r25,r31,21,6,10
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r31.u32, 21) & 0x3E00000) | (ctx.r25.u64 & 0xFFFFFFFFFC1FFFFF);
	// b 0x82f1da28
	goto loc_82F1DA28;
loc_82F1DE54:
	// rlwimi r25,r31,26,1,5
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r31.u32, 26) & 0x7C000000) | (ctx.r25.u64 & 0xFFFFFFFF83FFFFFF);
	// b 0x82f1da28
	goto loc_82F1DA28;
}

__attribute__((alias("__imp__sub_82F1DE5C"))) PPC_WEAK_FUNC(sub_82F1DE5C);
PPC_FUNC_IMPL(__imp__sub_82F1DE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1DE60"))) PPC_WEAK_FUNC(sub_82F1DE60);
PPC_FUNC_IMPL(__imp__sub_82F1DE60) {
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
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// rlwinm r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82F1DEA4;
	sub_82CB16F0(ctx, base);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82F1DEC4;
	sub_82CB16F0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,212(r31)
	PPC_STORE_U16(ctx.r31.u32 + 212, ctx.r30.u16);
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x82cb16f0
	ctx.lr = 0x82F1DED8;
	sub_82CB16F0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// bl 0x82cb16f0
	ctx.lr = 0x82F1DEEC;
	sub_82CB16F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F1DF0C"))) PPC_WEAK_FUNC(sub_82F1DF0C);
PPC_FUNC_IMPL(__imp__sub_82F1DF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1DF10"))) PPC_WEAK_FUNC(sub_82F1DF10);
PPC_FUNC_IMPL(__imp__sub_82F1DF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82F1DF18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82f16108
	ctx.lr = 0x82F1DF30;
	sub_82F16108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f1df60
	if (ctx.cr0.eq) goto loc_82F1DF60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f16148
	ctx.lr = 0x82F1DF40;
	sub_82F16148(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r10,-136
	ctx.r10.s64 = ctx.r10.s64 + -136;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82f1df64
	goto loc_82F1DF64;
loc_82F1DF60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F1DF64:
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r3,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1DF80"))) PPC_WEAK_FUNC(sub_82F1DF80);
PPC_FUNC_IMPL(__imp__sub_82F1DF80) {
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
	// beq cr6,0x82f1dfac
	if (ctx.cr6.eq) goto loc_82F1DFAC;
	// bl 0x831f71b8
	ctx.lr = 0x82F1DFA4;
	sub_831F71B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F1DFAC:
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

__attribute__((alias("__imp__sub_82F1DFC0"))) PPC_WEAK_FUNC(sub_82F1DFC0);
PPC_FUNC_IMPL(__imp__sub_82F1DFC0) {
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
	// beq cr6,0x82f1dfec
	if (ctx.cr6.eq) goto loc_82F1DFEC;
	// bl 0x82e73580
	ctx.lr = 0x82F1DFE4;
	sub_82E73580(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F1DFEC:
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

__attribute__((alias("__imp__sub_82F1E000"))) PPC_WEAK_FUNC(sub_82F1E000);
PPC_FUNC_IMPL(__imp__sub_82F1E000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82f1e01c
	if (!ctx.cr6.gt) goto loc_82F1E01C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82F1E01C:
	// b 0x82f1ce30
	sub_82F1CE30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1E020"))) PPC_WEAK_FUNC(sub_82F1E020);
PPC_FUNC_IMPL(__imp__sub_82F1E020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F1E028;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f1ce90
	ctx.lr = 0x82F1E040;
	sub_82F1CE90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f1e05c
	if (ctx.cr0.lt) goto loc_82F1E05C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82f1ce30
	ctx.lr = 0x82F1E05C;
	sub_82F1CE30(ctx, base);
loc_82F1E05C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1E064"))) PPC_WEAK_FUNC(sub_82F1E064);
PPC_FUNC_IMPL(__imp__sub_82F1E064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1E068"))) PPC_WEAK_FUNC(sub_82F1E068);
PPC_FUNC_IMPL(__imp__sub_82F1E068) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f1e078
	if (ctx.cr0.eq) goto loc_82F1E078;
	// b 0x82f1d0a8
	sub_82F1D0A8(ctx, base);
	return;
loc_82F1E078:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1E080"))) PPC_WEAK_FUNC(sub_82F1E080);
PPC_FUNC_IMPL(__imp__sub_82F1E080) {
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
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1e0b0
	if (ctx.cr6.eq) goto loc_82F1E0B0;
	// bl 0x831f71b8
	ctx.lr = 0x82F1E0AC;
	sub_831F71B8(ctx, base);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
loc_82F1E0B0:
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1e0c4
	if (ctx.cr6.eq) goto loc_82F1E0C4;
	// bl 0x82e73580
	ctx.lr = 0x82F1E0C0;
	sub_82E73580(ctx, base);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
loc_82F1E0C4:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1e0e4
	if (ctx.cr6.eq) goto loc_82F1E0E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F1E0E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
loc_82F1E0E4:
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

__attribute__((alias("__imp__sub_82F1E0FC"))) PPC_WEAK_FUNC(sub_82F1E0FC);
PPC_FUNC_IMPL(__imp__sub_82F1E0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1E100"))) PPC_WEAK_FUNC(sub_82F1E100);
PPC_FUNC_IMPL(__imp__sub_82F1E100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4192(r1)
	ea = -4192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r10,r10,5916
	ctx.r10.s64 = ctx.r10.s64 + 5916;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82F1E130:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1e154
	if (ctx.cr0.eq) goto loc_82F1E154;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1e130
	if (ctx.cr6.eq) goto loc_82F1E130;
loc_82F1E154:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1e170
	if (!ctx.cr0.eq) goto loc_82F1E170;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2000
	ctx.r4.s64 = 2000;
	// bl 0x82eea7f0
	ctx.lr = 0x82F1E16C;
	sub_82EEA7F0(ctx, base);
	// b 0x82f1e1a4
	goto loc_82F1E1A4;
loc_82F1E170:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaad20
	ctx.lr = 0x82F1E180;
	sub_82EAAD20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r11,4175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 4175, ctx.r11.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r10,-18112
	ctx.r6.s64 = ctx.r10.s64 + -18112;
	// li r5,7100
	ctx.r5.s64 = 7100;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x82eea308
	ctx.lr = 0x82F1E1A4;
	sub_82EEA308(ctx, base);
loc_82F1E1A4:
	// addi r1,r1,4192
	ctx.r1.s64 = ctx.r1.s64 + 4192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1E1B8"))) PPC_WEAK_FUNC(sub_82F1E1B8);
PPC_FUNC_IMPL(__imp__sub_82F1E1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F1E1C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f1e248
	if (ctx.cr6.eq) goto loc_82F1E248;
loc_82F1E1E0:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82F1E1E8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82f1e20c
	if (ctx.cr0.eq) goto loc_82F1E20C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82f1e1e8
	if (ctx.cr6.eq) goto loc_82F1E1E8;
loc_82F1E20C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f1e294
	if (ctx.cr0.eq) goto loc_82F1E294;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F1E218:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82f1e218
	if (!ctx.cr6.eq) goto loc_82F1E218;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bne 0x82f1e1e0
	if (!ctx.cr0.eq) goto loc_82F1E1E0;
loc_82F1E248:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82f1e264
	if (ctx.cr6.gt) goto loc_82F1E264;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1ce30
	ctx.lr = 0x82F1E264;
	sub_82F1CE30(ctx, base);
loc_82F1E264:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82F1E268:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f1e268
	if (!ctx.cr6.eq) goto loc_82F1E268;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82F1E294:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1E2A0"))) PPC_WEAK_FUNC(sub_82F1E2A0);
PPC_FUNC_IMPL(__imp__sub_82F1E2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82F1E2A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r28,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r28.u8);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stb r28,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r28.u8);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x82f1e354
	if (!ctx.cr6.eq) goto loc_82F1E354;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// b 0x82f1e31c
	goto loc_82F1E31C;
loc_82F1E304:
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x82f1e328
	if (ctx.cr6.eq) goto loc_82F1E328;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f1e328
	if (ctx.cr6.eq) goto loc_82F1E328;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
loc_82F1E31C:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x82f1e304
	if (!ctx.cr6.eq) goto loc_82F1E304;
loc_82F1E328:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82f1e344
	if (ctx.cr6.gt) goto loc_82F1E344;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f1ce30
	ctx.lr = 0x82F1E344;
	sub_82F1CE30(ctx, base);
loc_82F1E344:
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
	// b 0x82f1e404
	goto loc_82F1E404;
loc_82F1E354:
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// bne cr6,0x82f1e3ac
	if (!ctx.cr6.eq) goto loc_82F1E3AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb6a70
	ctx.lr = 0x82F1E370;
	sub_82CB6A70(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// b 0x82f1e38c
	goto loc_82F1E38C;
loc_82F1E37C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f1e398
	if (ctx.cr6.eq) goto loc_82F1E398;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
loc_82F1E38C:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,93
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 93, ctx.xer);
	// bne cr6,0x82f1e37c
	if (!ctx.cr6.eq) goto loc_82F1E37C;
loc_82F1E398:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1e3dc
	if (ctx.cr6.eq) goto loc_82F1E3DC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82f1e3dc
	goto loc_82F1E3DC;
loc_82F1E3AC:
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// b 0x82f1e3d0
	goto loc_82F1E3D0;
loc_82F1E3B8:
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x82f1e3dc
	if (ctx.cr6.eq) goto loc_82F1E3DC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f1e3dc
	if (ctx.cr6.eq) goto loc_82F1E3DC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
loc_82F1E3D0:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x82f1e3b8
	if (!ctx.cr6.eq) goto loc_82F1E3B8;
loc_82F1E3DC:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82f1e3fc
	if (ctx.cr6.gt) goto loc_82F1E3FC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f1ce30
	ctx.lr = 0x82F1E3FC;
	sub_82F1CE30(ctx, base);
loc_82F1E3FC:
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// stbx r28,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r28.u8);
loc_82F1E404:
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82f1e41c
	if (ctx.cr6.gt) goto loc_82F1E41C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f1ce30
	ctx.lr = 0x82F1E41C;
	sub_82F1CE30(ctx, base);
loc_82F1E41C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1E424"))) PPC_WEAK_FUNC(sub_82F1E424);
PPC_FUNC_IMPL(__imp__sub_82F1E424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1E428"))) PPC_WEAK_FUNC(sub_82F1E428);
PPC_FUNC_IMPL(__imp__sub_82F1E428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82F1E430;
	__savegprlr_23(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// li r7,128
	ctx.r7.s64 = 128;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82f1e2a0
	ctx.lr = 0x82F1E460;
	sub_82F1E2A0(ctx, base);
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bne cr6,0x82f1e47c
	if (!ctx.cr6.eq) goto loc_82F1E47C;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f1ce30
	ctx.lr = 0x82F1E47C;
	sub_82F1CE30(ctx, base);
loc_82F1E47C:
	// lbz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsb. r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82f1e50c
	if (ctx.cr0.eq) goto loc_82F1E50C;
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f1e50c
	if (!ctx.cr6.gt) goto loc_82F1E50C;
	// addi r7,r25,60
	ctx.r7.s64 = ctx.r25.s64 + 60;
loc_82F1E4A4:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82F1E4B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq 0x82f1e4d4
	if (ctx.cr0.eq) goto loc_82F1E4D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1e4b0
	if (ctx.cr6.eq) goto loc_82F1E4B0;
loc_82F1E4D4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1e4f8
	if (!ctx.cr0.eq) goto loc_82F1E4F8;
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82f1e4f8
	if (!ctx.cr6.eq) goto loc_82F1E4F8;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f1e5ec
	if (ctx.cr6.eq) goto loc_82F1E5EC;
loc_82F1E4F8:
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1e4a4
	if (ctx.cr6.lt) goto loc_82F1E4A4;
loc_82F1E50C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1084
	ctx.r4.s64 = 1084;
	// beq cr6,0x82f1e60c
	if (ctx.cr6.eq) goto loc_82F1E60C;
	// bl 0x82f15fc0
	ctx.lr = 0x82F1E524;
	sub_82F15FC0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82F1E530:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82f1e530
	if (!ctx.cr6.eq) goto loc_82F1E530;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f15fc0
	ctx.lr = 0x82F1E560;
	sub_82F15FC0(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82f1e580
	if (ctx.cr6.gt) goto loc_82F1E580;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f1ce30
	ctx.lr = 0x82F1E580;
	sub_82F1CE30(ctx, base);
loc_82F1E580:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r24,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r24.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r23,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// bl 0x82f1e428
	ctx.lr = 0x82F1E5E0;
	sub_82F1E428(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82f1e6d0
	if (!ctx.cr6.eq) goto loc_82F1E6D0;
	// b 0x82f1e6f0
	goto loc_82F1E6F0;
loc_82F1E5EC:
	// addi r11,r6,15
	ctx.r11.s64 = ctx.r6.s64 + 15;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r6,r11,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x82f1e428
	ctx.lr = 0x82F1E608;
	sub_82F1E428(ctx, base);
	// b 0x82f1e6f0
	goto loc_82F1E6F0;
loc_82F1E60C:
	// bl 0x82f15fc0
	ctx.lr = 0x82F1E610;
	sub_82F15FC0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82F1E61C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82f1e61c
	if (!ctx.cr6.eq) goto loc_82F1E61C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f15fc0
	ctx.lr = 0x82F1E64C;
	sub_82F15FC0(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82f1e66c
	if (ctx.cr6.gt) goto loc_82F1E66C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f1ce30
	ctx.lr = 0x82F1E66C;
	sub_82F1CE30(ctx, base);
loc_82F1E66C:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r24,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r24.u32);
	// stw r23,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82F1E6D0:
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r31.u32);
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r11.u32);
loc_82F1E6F0:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1E6F8"))) PPC_WEAK_FUNC(sub_82F1E6F8);
PPC_FUNC_IMPL(__imp__sub_82F1E6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82F1E700;
	__savegprlr_20(ctx, base);
	// stwu r1,-2256(r1)
	ea = -2256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r7,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r7.u16);
	// sth r6,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// bne cr6,0x82f1e76c
	if (!ctx.cr6.eq) goto loc_82F1E76C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1e770
	if (!ctx.cr6.eq) goto loc_82F1E770;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1e770
	if (ctx.cr6.eq) goto loc_82F1E770;
loc_82F1E76C:
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
loc_82F1E770:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1e788
	if (!ctx.cr6.eq) goto loc_82F1E788;
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x82f1e81c
	goto loc_82F1E81C;
loc_82F1E788:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// clrlwi r20,r11,16
	ctx.r20.u64 = ctx.r11.u32 & 0xFFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// sth r20,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r20.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82f1e804
	if (!ctx.cr6.gt) goto loc_82F1E804;
	// addi r29,r1,100
	ctx.r29.s64 = ctx.r1.s64 + 100;
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
loc_82F1E7A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f1e1b8
	ctx.lr = 0x82F1E7C0;
	sub_82F1E1B8(ctx, base);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r3,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r3.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82f1e6f8
	ctx.lr = 0x82F1E7E8;
	sub_82F1E6F8(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1e7a8
	if (ctx.cr6.lt) goto loc_82F1E7A8;
loc_82F1E804:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r4,r20,16
	ctx.r4.u64 = ctx.r20.u32 & 0xFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f1c500
	ctx.lr = 0x82F1E818;
	sub_82F1C500(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_82F1E81C:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f1c5c8
	ctx.lr = 0x82F1E82C;
	sub_82F1C5C8(ctx, base);
	// addi r1,r1,2256
	ctx.r1.s64 = ctx.r1.s64 + 2256;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1E834"))) PPC_WEAK_FUNC(sub_82F1E834);
PPC_FUNC_IMPL(__imp__sub_82F1E834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1E838"))) PPC_WEAK_FUNC(sub_82F1E838);
PPC_FUNC_IMPL(__imp__sub_82F1E838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F1E840;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
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
	// ble cr6,0x82f1e86c
	if (!ctx.cr6.gt) goto loc_82F1E86C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82f1e898
	goto loc_82F1E898;
loc_82F1E86C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1ce90
	ctx.lr = 0x82F1E87C;
	sub_82F1CE90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f1e898
	if (ctx.cr0.lt) goto loc_82F1E898;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// subf r4,r11,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r11.s64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82f1ce30
	ctx.lr = 0x82F1E898;
	sub_82F1CE30(ctx, base);
loc_82F1E898:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1E8A0"))) PPC_WEAK_FUNC(sub_82F1E8A0);
PPC_FUNC_IMPL(__imp__sub_82F1E8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,3032(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3032);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82f1e100
	ctx.lr = 0x82F1E8DC;
	sub_82F1E100(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1E8EC"))) PPC_WEAK_FUNC(sub_82F1E8EC);
PPC_FUNC_IMPL(__imp__sub_82F1E8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1E8F0"))) PPC_WEAK_FUNC(sub_82F1E8F0);
PPC_FUNC_IMPL(__imp__sub_82F1E8F0) {
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
	// bl 0x82f1e080
	ctx.lr = 0x82F1E910;
	sub_82F1E080(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f1e924
	if (ctx.cr0.eq) goto loc_82F1E924;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82F1E924;
	sub_822996C0(ctx, base);
loc_82F1E924:
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

__attribute__((alias("__imp__sub_82F1E940"))) PPC_WEAK_FUNC(sub_82F1E940);
PPC_FUNC_IMPL(__imp__sub_82F1E940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82f1e100
	ctx.lr = 0x82F1E978;
	sub_82F1E100(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1E988"))) PPC_WEAK_FUNC(sub_82F1E988);
PPC_FUNC_IMPL(__imp__sub_82F1E988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82f1e100
	ctx.lr = 0x82F1E9C0;
	sub_82F1E100(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1E9D0"))) PPC_WEAK_FUNC(sub_82F1E9D0);
PPC_FUNC_IMPL(__imp__sub_82F1E9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82F1E9D8;
	__savegprlr_14(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r29,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r29.u32);
	// addi r31,r10,-3272
	ctx.r31.s64 = ctx.r10.s64 + -3272;
	// li r28,277
	ctx.r28.s64 = 277;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// stw r27,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r27.u32);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r14,r27
	ctx.r14.u64 = ctx.r27.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
loc_82F1EA3C:
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// extsb. r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// beq 0x82f1ea88
	if (ctx.cr0.eq) goto loc_82F1EA88;
loc_82F1EA54:
	// cmpwi cr6,r10,95
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 95, ctx.xer);
	// bne cr6,0x82f1ea64
	if (!ctx.cr6.eq) goto loc_82F1EA64;
	// extsb. r24,r9
	ctx.r24.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x82f1ea98
	if (ctx.cr0.eq) goto loc_82F1EA98;
loc_82F1EA64:
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82f1eaa0
	if (!ctx.cr6.eq) goto loc_82F1EAA0;
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f1ea54
	if (!ctx.cr0.eq) goto loc_82F1EA54;
loc_82F1EA88:
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82f1eaa4
	goto loc_82F1EAA4;
loc_82F1EA98:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// b 0x82f1eaa4
	goto loc_82F1EAA4;
loc_82F1EAA0:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82F1EAA4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f1eac0
	if (!ctx.cr0.eq) goto loc_82F1EAC0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// blt cr6,0x82f1ea3c
	if (ctx.cr6.lt) goto loc_82F1EA3C;
	// b 0x82f1eb00
	goto loc_82F1EB00;
loc_82F1EAC0:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82F1EAC4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82f1eac4
	if (!ctx.cr6.eq) goto loc_82F1EAC4;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82f1eafc
	if (!ctx.cr6.eq) goto loc_82F1EAFC;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
loc_82F1EAFC:
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
loc_82F1EB00:
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// bne cr6,0x82f1eb10
	if (!ctx.cr6.eq) goto loc_82F1EB10;
loc_82F1EB08:
	// li r3,277
	ctx.r3.s64 = 277;
	// b 0x82f1f978
	goto loc_82F1F978;
loc_82F1EB10:
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82f1eb48
	if (!ctx.cr6.eq) goto loc_82F1EB48;
	// lwz r9,72(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1ee54
	if (ctx.cr6.eq) goto loc_82F1EE54;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r31,10
	ctx.r9.s64 = ctx.r31.s64 + 10;
	// lhzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
loc_82F1EB48:
	// cmplwi cr6,r11,65526
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65526, ctx.xer);
	// bgt cr6,0x82f1ee54
	if (ctx.cr6.gt) goto loc_82F1EE54;
	// beq cr6,0x82f1ee4c
	if (ctx.cr6.eq) goto loc_82F1EE4C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82f1ee0c
	if (ctx.cr6.gt) goto loc_82F1EE0C;
	// beq cr6,0x82f1ee04
	if (ctx.cr6.eq) goto loc_82F1EE04;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82f1eba0
	if (ctx.cr6.lt) goto loc_82F1EBA0;
	// beq cr6,0x82f1eb98
	if (ctx.cr6.eq) goto loc_82F1EB98;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82f1eb90
	if (ctx.cr6.lt) goto loc_82F1EB90;
	// beq cr6,0x82f1eb88
	if (ctx.cr6.eq) goto loc_82F1EB88;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82f1eba8
	if (!ctx.cr6.lt) goto loc_82F1EBA8;
	// li r28,262
	ctx.r28.s64 = 262;
	// b 0x82f1eba4
	goto loc_82F1EBA4;
loc_82F1EB88:
	// li r28,261
	ctx.r28.s64 = 261;
	// b 0x82f1eba4
	goto loc_82F1EBA4;
loc_82F1EB90:
	// li r28,260
	ctx.r28.s64 = 260;
	// b 0x82f1eba4
	goto loc_82F1EBA4;
loc_82F1EB98:
	// li r28,259
	ctx.r28.s64 = 259;
	// b 0x82f1eba4
	goto loc_82F1EBA4;
loc_82F1EBA0:
	// li r28,258
	ctx.r28.s64 = 258;
loc_82F1EBA4:
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
loc_82F1EBA8:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// addi r8,r28,-259
	ctx.r8.s64 = ctx.r28.s64 + -259;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r8,r9,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xF;
	// rlwinm r11,r9,13,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1FF;
	// rlwinm r9,r9,15,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x3;
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// bgt cr6,0x82f1ebe4
	if (ctx.cr6.gt) goto loc_82F1EBE4;
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// beq cr6,0x82f1ebe4
	if (ctx.cr6.eq) goto loc_82F1EBE4;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
loc_82F1EBE4:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82f1ebf8
	if (!ctx.cr6.eq) goto loc_82F1EBF8;
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// bne cr6,0x82f1ec04
	if (!ctx.cr6.eq) goto loc_82F1EC04;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
loc_82F1EBF8:
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// bne cr6,0x82f1ec04
	if (!ctx.cr6.eq) goto loc_82F1EC04;
	// mr r14,r25
	ctx.r14.u64 = ctx.r25.u64;
loc_82F1EC04:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82f1ec18
	if (!ctx.cr6.eq) goto loc_82F1EC18;
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// bne cr6,0x82f1ec18
	if (!ctx.cr6.eq) goto loc_82F1EC18;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
loc_82F1EC18:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82f1ec2c
	if (!ctx.cr6.eq) goto loc_82F1EC2C;
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// bne cr6,0x82f1ec2c
	if (!ctx.cr6.eq) goto loc_82F1EC2C;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
loc_82F1EC2C:
	// li r10,2024
	ctx.r10.s64 = 2024;
	// stw r10,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r10.u32);
	// lbz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// extsb. r15,r10
	ctx.r15.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq 0x82f1f934
	if (ctx.cr0.eq) goto loc_82F1F934;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r11,980
	ctx.r11.s64 = ctx.r11.s64 + 980;
	// addi r10,r10,968
	ctx.r10.s64 = ctx.r10.s64 + 968;
	// addi r9,r9,960
	ctx.r9.s64 = ctx.r9.s64 + 960;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r11,r8,896
	ctx.r11.s64 = ctx.r8.s64 + 896;
	// addi r10,r7,21816
	ctx.r10.s64 = ctx.r7.s64 + 21816;
	// addi r9,r6,21804
	ctx.r9.s64 = ctx.r6.s64 + 21804;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lis r20,-32254
	ctx.r20.s64 = -2113798144;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// lis r29,-32254
	ctx.r29.s64 = -2113798144;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// lis r26,-32254
	ctx.r26.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r27,r20,21608
	ctx.r27.s64 = ctx.r20.s64 + 21608;
	// addi r25,r29,21704
	ctx.r25.s64 = ctx.r29.s64 + 21704;
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r24,r26,21676
	ctx.r24.s64 = ctx.r26.s64 + 21676;
	// stw r27,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r27.u32);
	// lis r19,-32254
	ctx.r19.s64 = -2113798144;
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// addi r11,r5,21644
	ctx.r11.s64 = ctx.r5.s64 + 21644;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// addi r10,r4,21728
	ctx.r10.s64 = ctx.r4.s64 + 21728;
	// lwz r26,116(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r3,836
	ctx.r9.s64 = ctx.r3.s64 + 836;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lis r18,-32253
	ctx.r18.s64 = -2113732608;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lis r31,-32254
	ctx.r31.s64 = -2113798144;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// lis r30,-32254
	ctx.r30.s64 = -2113798144;
	// lis r28,-32254
	ctx.r28.s64 = -2113798144;
	// lis r17,-32254
	ctx.r17.s64 = -2113798144;
	// lis r16,-32254
	ctx.r16.s64 = -2113798144;
	// addi r20,r19,21852
	ctx.r20.s64 = ctx.r19.s64 + 21852;
	// lis r27,-32254
	ctx.r27.s64 = -2113798144;
	// lis r25,-32254
	ctx.r25.s64 = -2113798144;
	// lis r24,-32254
	ctx.r24.s64 = -2113798144;
	// lis r23,-32254
	ctx.r23.s64 = -2113798144;
	// lis r22,-32254
	ctx.r22.s64 = -2113798144;
	// lis r21,-32254
	ctx.r21.s64 = -2113798144;
	// addi r11,r31,21716
	ctx.r11.s64 = ctx.r31.s64 + 21716;
	// addi r10,r30,21692
	ctx.r10.s64 = ctx.r30.s64 + 21692;
	// addi r9,r28,21684
	ctx.r9.s64 = ctx.r28.s64 + 21684;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r19,r18,820
	ctx.r19.s64 = ctx.r18.s64 + 820;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r18,r17,21584
	ctx.r18.s64 = ctx.r17.s64 + 21584;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// addi r17,r16,21604
	ctx.r17.s64 = ctx.r16.s64 + 21604;
	// addi r27,r27,8268
	ctx.r27.s64 = ctx.r27.s64 + 8268;
	// addi r25,r25,21668
	ctx.r25.s64 = ctx.r25.s64 + 21668;
	// addi r24,r24,21652
	ctx.r24.s64 = ctx.r24.s64 + 21652;
	// addi r23,r23,21632
	ctx.r23.s64 = ctx.r23.s64 + 21632;
	// addi r22,r22,21620
	ctx.r22.s64 = ctx.r22.s64 + 21620;
	// addi r21,r21,21856
	ctx.r21.s64 = ctx.r21.s64 + 21856;
	// li r16,0
	ctx.r16.s64 = 0;
loc_82F1ED50:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x82f1ed74
	if (ctx.cr6.eq) goto loc_82F1ED74;
loc_82F1ED58:
	// cmpwi cr6,r15,95
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 95, ctx.xer);
	// beq cr6,0x82f1ed74
	if (ctx.cr6.eq) goto loc_82F1ED74;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb. r15,r11
	ctx.r15.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne 0x82f1ed58
	if (!ctx.cr0.eq) goto loc_82F1ED58;
loc_82F1ED74:
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// subf r31,r4,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r4.s64;
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 15, ctx.xer);
	// bgt cr6,0x82f1eb08
	if (ctx.cr6.gt) goto loc_82F1EB08;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82cb1160
	ctx.lr = 0x82F1ED90;
	sub_82CB1160(ctx, base);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r16,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r16.u8);
	// beq cr6,0x82f1edac
	if (ctx.cr6.eq) goto loc_82F1EDAC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
loc_82F1EDAC:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f1eedc
	if (ctx.cr6.eq) goto loc_82F1EEDC;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1EDC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1ede8
	if (ctx.cr0.eq) goto loc_82F1EDE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1edc4
	if (ctx.cr6.eq) goto loc_82F1EDC4;
loc_82F1EDE8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1eedc
	if (!ctx.cr0.eq) goto loc_82F1EEDC;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r16,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r16.u32);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
loc_82F1EDFC:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x82f1f918
	goto loc_82F1F918;
loc_82F1EE04:
	// li r28,263
	ctx.r28.s64 = 263;
	// b 0x82f1eba4
	goto loc_82F1EBA4;
loc_82F1EE0C:
	// cmplwi cr6,r11,65512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65512, ctx.xer);
	// beq cr6,0x82f1ee44
	if (ctx.cr6.eq) goto loc_82F1EE44;
	// cmplwi cr6,r11,65513
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65513, ctx.xer);
	// beq cr6,0x82f1ee3c
	if (ctx.cr6.eq) goto loc_82F1EE3C;
	// cmplwi cr6,r11,65514
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65514, ctx.xer);
	// beq cr6,0x82f1ee34
	if (ctx.cr6.eq) goto loc_82F1EE34;
	// cmplwi cr6,r11,65515
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65515, ctx.xer);
	// bne cr6,0x82f1eba8
	if (!ctx.cr6.eq) goto loc_82F1EBA8;
	// li r28,273
	ctx.r28.s64 = 273;
	// b 0x82f1eba4
	goto loc_82F1EBA4;
loc_82F1EE34:
	// li r28,274
	ctx.r28.s64 = 274;
	// b 0x82f1eba4
	goto loc_82F1EBA4;
loc_82F1EE3C:
	// li r28,275
	ctx.r28.s64 = 275;
	// b 0x82f1eba4
	goto loc_82F1EBA4;
loc_82F1EE44:
	// li r28,276
	ctx.r28.s64 = 276;
	// b 0x82f1eba4
	goto loc_82F1EBA4;
loc_82F1EE4C:
	// li r28,272
	ctx.r28.s64 = 272;
	// b 0x82f1eba4
	goto loc_82F1EBA4;
loc_82F1EE54:
	// addis r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -65536;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82f1eba8
	if (ctx.cr6.gt) goto loc_82F1EBA8;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-672
	ctx.r12.s64 = ctx.r12.s64 + -672;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32014
	ctx.r12.s64 = -2098069504;
	// addi r12,r12,-5208
	ctx.r12.s64 = ctx.r12.s64 + -5208;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82F1EEB4;
	case 1:
		goto loc_82F1EEA4;
	case 2:
		goto loc_82F1EEC4;
	case 3:
		goto loc_82F1EEBC;
	case 4:
		goto loc_82F1EEAC;
	case 5:
		goto loc_82F1EE9C;
	case 6:
		goto loc_82F1EE94;
	case 7:
		goto loc_82F1EE8C;
	case 8:
		goto loc_82F1EECC;
	default:
		__builtin_unreachable();
	}
loc_82F1EE8C:
	// li r28,265
	ctx.r28.s64 = 265;
	// b 0x82f1eba4
	goto loc_82F1EBA4;
loc_82F1EE94:
	// li r28,264
	ctx.r28.s64 = 264;
	// b 0x82f1eba4
	goto loc_82F1EBA4;
loc_82F1EE9C:
	// li r28,266
	ctx.r28.s64 = 266;
	// b 0x82f1eba4
	goto loc_82F1EBA4;
loc_82F1EEA4:
	// li r28,270
	ctx.r28.s64 = 270;
	// b 0x82f1eba4
	goto loc_82F1EBA4;
loc_82F1EEAC:
	// li r28,267
	ctx.r28.s64 = 267;
	// b 0x82f1eba4
	goto loc_82F1EBA4;
loc_82F1EEB4:
	// li r28,271
	ctx.r28.s64 = 271;
	// b 0x82f1eba4
	goto loc_82F1EBA4;
loc_82F1EEBC:
	// li r28,268
	ctx.r28.s64 = 268;
	// b 0x82f1eba4
	goto loc_82F1EBA4;
loc_82F1EEC4:
	// li r28,269
	ctx.r28.s64 = 269;
	// b 0x82f1eba4
	goto loc_82F1EBA4;
loc_82F1EECC:
	// li r11,2023
	ctx.r11.s64 = 2023;
	// li r3,277
	ctx.r3.s64 = 277;
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// b 0x82f1f978
	goto loc_82F1F978;
loc_82F1EEDC:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f1ef70
	if (ctx.cr6.eq) goto loc_82F1EF70;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1EEF0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1ef14
	if (ctx.cr0.eq) goto loc_82F1EF14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1eef0
	if (ctx.cr6.eq) goto loc_82F1EEF0;
loc_82F1EF14:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1ef2c
	if (!ctx.cr0.eq) goto loc_82F1EF2C;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r16.u32);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// b 0x82f1edfc
	goto loc_82F1EDFC;
loc_82F1EF2C:
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1EF34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1ef58
	if (ctx.cr0.eq) goto loc_82F1EF58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1ef34
	if (ctx.cr6.eq) goto loc_82F1EF34;
loc_82F1EF58:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1ef70
	if (!ctx.cr0.eq) goto loc_82F1EF70;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r16.u32);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// b 0x82f1edfc
	goto loc_82F1EDFC;
loc_82F1EF70:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x82f1f04c
	if (ctx.cr6.eq) goto loc_82F1F04C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1EF84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f1efa8
	if (ctx.cr0.eq) goto loc_82F1EFA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1ef84
	if (ctx.cr6.eq) goto loc_82F1EF84;
loc_82F1EFA8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1efb8
	if (!ctx.cr0.eq) goto loc_82F1EFB8;
	// lis r8,4096
	ctx.r8.s64 = 268435456;
	// b 0x82f1f02c
	goto loc_82F1F02C;
loc_82F1EFB8:
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1EFC0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f1efe4
	if (ctx.cr0.eq) goto loc_82F1EFE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1efc0
	if (ctx.cr6.eq) goto loc_82F1EFC0;
loc_82F1EFE4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1eff4
	if (!ctx.cr0.eq) goto loc_82F1EFF4;
	// lis r8,6144
	ctx.r8.s64 = 402653184;
	// b 0x82f1f02c
	goto loc_82F1F02C;
loc_82F1EFF4:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1EFFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f1f020
	if (ctx.cr0.eq) goto loc_82F1F020;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1effc
	if (ctx.cr6.eq) goto loc_82F1EFFC;
loc_82F1F020:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f02c
	if (!ctx.cr0.eq) goto loc_82F1F02C;
	// lis r8,8192
	ctx.r8.s64 = 536870912;
loc_82F1F02C:
	// or r26,r8,r26
	ctx.r26.u64 = ctx.r8.u64 | ctx.r26.u64;
	// mr r14,r16
	ctx.r14.u64 = ctx.r16.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f1f04c
	if (ctx.cr6.eq) goto loc_82F1F04C;
	// stw r16,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r16.u32);
	// stw r16,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// b 0x82f1f918
	goto loc_82F1F918;
loc_82F1F04C:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f1f148
	if (ctx.cr6.eq) goto loc_82F1F148;
	// lbz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// addi r31,r1,208
	ctx.r31.s64 = ctx.r1.s64 + 208;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f1f08c
	if (ctx.cr0.eq) goto loc_82F1F08C;
loc_82F1F068:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdc30
	ctx.lr = 0x82F1F074;
	sub_82CBDC30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f1f08c
	if (ctx.cr0.eq) goto loc_82F1F08C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1f068
	if (!ctx.cr6.eq) goto loc_82F1F068;
loc_82F1F08C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1f0a8
	if (ctx.cr6.eq) goto loc_82F1F0A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb6a70
	ctx.lr = 0x82F1F0A0;
	sub_82CB6A70(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82f1f0ac
	goto loc_82F1F0AC;
loc_82F1F0A8:
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
loc_82F1F0AC:
	// cmplwi cr6,r28,15
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 15, ctx.xer);
	// bgt cr6,0x82f1f148
	if (ctx.cr6.gt) goto loc_82F1F148;
	// lbz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82f1f0dc
	if (ctx.cr0.eq) goto loc_82F1F0DC;
	// stb r16,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r16.u8);
	// b 0x82f1f0d8
	goto loc_82F1F0D8;
loc_82F1F0CC:
	// bl 0x82cbdd38
	ctx.lr = 0x82F1F0D0;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f1f0e8
	if (ctx.cr0.eq) goto loc_82F1F0E8;
loc_82F1F0D8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82F1F0DC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f1f0cc
	if (!ctx.cr0.eq) goto loc_82F1F0CC;
loc_82F1F0E8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1f140
	if (!ctx.cr6.eq) goto loc_82F1F140;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F0FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f120
	if (ctx.cr0.eq) goto loc_82F1F120;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f0fc
	if (ctx.cr6.eq) goto loc_82F1F0FC;
loc_82F1F120:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f1a4
	if (!ctx.cr0.eq) goto loc_82F1F1A4;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82f1f1dc
	if (!ctx.cr6.eq) goto loc_82F1F1DC;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
loc_82F1F138:
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x82f1e940
	ctx.lr = 0x82F1F140;
	sub_82F1E940(ctx, base);
loc_82F1F140:
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82F1F148:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f1eb08
	if (ctx.cr6.eq) goto loc_82F1EB08;
	// lbz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// addi r31,r1,208
	ctx.r31.s64 = ctx.r1.s64 + 208;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f1f188
	if (ctx.cr0.eq) goto loc_82F1F188;
loc_82F1F164:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdc30
	ctx.lr = 0x82F1F170;
	sub_82CBDC30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f1f188
	if (ctx.cr0.eq) goto loc_82F1F188;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1f164
	if (!ctx.cr6.eq) goto loc_82F1F164;
loc_82F1F188:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1f4c8
	if (ctx.cr6.eq) goto loc_82F1F4C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb6a70
	ctx.lr = 0x82F1F19C;
	sub_82CB6A70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f1f4cc
	goto loc_82F1F4CC;
loc_82F1F1A4:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F1AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f1d0
	if (ctx.cr0.eq) goto loc_82F1F1D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f1ac
	if (ctx.cr6.eq) goto loc_82F1F1AC;
loc_82F1F1D0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f1f8
	if (!ctx.cr0.eq) goto loc_82F1F1F8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F1F1DC:
	// rlwinm r10,r28,16,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xF0000;
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// stw r16,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r16.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 | ctx.r26.u64;
	// b 0x82f1f910
	goto loc_82F1F910;
loc_82F1F1F8:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F200:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f224
	if (ctx.cr0.eq) goto loc_82F1F224;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f200
	if (ctx.cr6.eq) goto loc_82F1F200;
loc_82F1F224:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f234
	if (!ctx.cr0.eq) goto loc_82F1F234;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82f1f1dc
	goto loc_82F1F1DC;
loc_82F1F234:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F23C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f260
	if (ctx.cr0.eq) goto loc_82F1F260;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f23c
	if (ctx.cr6.eq) goto loc_82F1F23C;
loc_82F1F260:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f270
	if (!ctx.cr0.eq) goto loc_82F1F270;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82f1f1dc
	goto loc_82F1F1DC;
loc_82F1F270:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F278:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f29c
	if (ctx.cr0.eq) goto loc_82F1F29C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f278
	if (ctx.cr6.eq) goto loc_82F1F278;
loc_82F1F29C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f2ac
	if (!ctx.cr0.eq) goto loc_82F1F2AC;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82f1f1dc
	goto loc_82F1F1DC;
loc_82F1F2AC:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F2B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f2d8
	if (ctx.cr0.eq) goto loc_82F1F2D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f2b4
	if (ctx.cr6.eq) goto loc_82F1F2B4;
loc_82F1F2D8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f2e8
	if (!ctx.cr0.eq) goto loc_82F1F2E8;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82f1f1dc
	goto loc_82F1F1DC;
loc_82F1F2E8:
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F2F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f314
	if (ctx.cr0.eq) goto loc_82F1F314;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f2f0
	if (ctx.cr6.eq) goto loc_82F1F2F0;
loc_82F1F314:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f324
	if (!ctx.cr0.eq) goto loc_82F1F324;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82f1f1dc
	goto loc_82F1F1DC;
loc_82F1F324:
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F32C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f350
	if (ctx.cr0.eq) goto loc_82F1F350;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f32c
	if (ctx.cr6.eq) goto loc_82F1F32C;
loc_82F1F350:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f360
	if (!ctx.cr0.eq) goto loc_82F1F360;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82f1f1dc
	goto loc_82F1F1DC;
loc_82F1F360:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F368:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f38c
	if (ctx.cr0.eq) goto loc_82F1F38C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f368
	if (ctx.cr6.eq) goto loc_82F1F368;
loc_82F1F38C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f39c
	if (!ctx.cr0.eq) goto loc_82F1F39C;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82f1f1dc
	goto loc_82F1F1DC;
loc_82F1F39C:
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F3A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f3c8
	if (ctx.cr0.eq) goto loc_82F1F3C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f3a4
	if (ctx.cr6.eq) goto loc_82F1F3A4;
loc_82F1F3C8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f3d8
	if (!ctx.cr0.eq) goto loc_82F1F3D8;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// b 0x82f1f138
	goto loc_82F1F138;
loc_82F1F3D8:
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F3E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f404
	if (ctx.cr0.eq) goto loc_82F1F404;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f3e0
	if (ctx.cr6.eq) goto loc_82F1F3E0;
loc_82F1F404:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f414
	if (!ctx.cr0.eq) goto loc_82F1F414;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82f1f1dc
	goto loc_82F1F1DC;
loc_82F1F414:
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F41C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f440
	if (ctx.cr0.eq) goto loc_82F1F440;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f41c
	if (ctx.cr6.eq) goto loc_82F1F41C;
loc_82F1F440:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f450
	if (!ctx.cr0.eq) goto loc_82F1F450;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82f1f1dc
	goto loc_82F1F1DC;
loc_82F1F450:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F458:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f47c
	if (ctx.cr0.eq) goto loc_82F1F47C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f458
	if (ctx.cr6.eq) goto loc_82F1F458;
loc_82F1F47C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f48c
	if (!ctx.cr0.eq) goto loc_82F1F48C;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82f1f1dc
	goto loc_82F1F1DC;
loc_82F1F48C:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F494:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f4b8
	if (ctx.cr0.eq) goto loc_82F1F4B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f494
	if (ctx.cr6.eq) goto loc_82F1F494;
loc_82F1F4B8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f140
	if (!ctx.cr0.eq) goto loc_82F1F140;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82f1f1dc
	goto loc_82F1F1DC;
loc_82F1F4C8:
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_82F1F4CC:
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// bgt cr6,0x82f1eb08
	if (ctx.cr6.gt) goto loc_82F1EB08;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1f4f8
	if (ctx.cr6.eq) goto loc_82F1F4F8;
	// stb r16,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r16.u8);
	// b 0x82f1f4f4
	goto loc_82F1F4F4;
loc_82F1F4E8:
	// bl 0x82cbdd38
	ctx.lr = 0x82F1F4EC;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f1f504
	if (ctx.cr0.eq) goto loc_82F1F504;
loc_82F1F4F4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82F1F4F8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f1f4e8
	if (!ctx.cr0.eq) goto loc_82F1F4E8;
loc_82F1F504:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1eb08
	if (!ctx.cr6.eq) goto loc_82F1EB08;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F518:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f53c
	if (ctx.cr0.eq) goto loc_82F1F53C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f518
	if (ctx.cr6.eq) goto loc_82F1F518;
loc_82F1F53C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f54c
	if (!ctx.cr0.eq) goto loc_82F1F54C;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// b 0x82f1f900
	goto loc_82F1F900;
loc_82F1F54C:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F554:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f578
	if (ctx.cr0.eq) goto loc_82F1F578;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f554
	if (ctx.cr6.eq) goto loc_82F1F554;
loc_82F1F578:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f588
	if (!ctx.cr0.eq) goto loc_82F1F588;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82f1f900
	goto loc_82F1F900;
loc_82F1F588:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F590:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f5b4
	if (ctx.cr0.eq) goto loc_82F1F5B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f590
	if (ctx.cr6.eq) goto loc_82F1F590;
loc_82F1F5B4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f5c4
	if (!ctx.cr0.eq) goto loc_82F1F5C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82f1f900
	goto loc_82F1F900;
loc_82F1F5C4:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F5CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f5f0
	if (ctx.cr0.eq) goto loc_82F1F5F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f5cc
	if (ctx.cr6.eq) goto loc_82F1F5CC;
loc_82F1F5F0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f600
	if (!ctx.cr0.eq) goto loc_82F1F600;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82f1f900
	goto loc_82F1F900;
loc_82F1F600:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F608:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f62c
	if (ctx.cr0.eq) goto loc_82F1F62C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f608
	if (ctx.cr6.eq) goto loc_82F1F608;
loc_82F1F62C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f63c
	if (!ctx.cr0.eq) goto loc_82F1F63C;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82f1f900
	goto loc_82F1F900;
loc_82F1F63C:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F644:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f668
	if (ctx.cr0.eq) goto loc_82F1F668;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f644
	if (ctx.cr6.eq) goto loc_82F1F644;
loc_82F1F668:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f678
	if (!ctx.cr0.eq) goto loc_82F1F678;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82f1f900
	goto loc_82F1F900;
loc_82F1F678:
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F680:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f6a4
	if (ctx.cr0.eq) goto loc_82F1F6A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f680
	if (ctx.cr6.eq) goto loc_82F1F680;
loc_82F1F6A4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f6b4
	if (!ctx.cr0.eq) goto loc_82F1F6B4;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82f1f900
	goto loc_82F1F900;
loc_82F1F6B4:
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F6BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f6e0
	if (ctx.cr0.eq) goto loc_82F1F6E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f6bc
	if (ctx.cr6.eq) goto loc_82F1F6BC;
loc_82F1F6E0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f6f0
	if (!ctx.cr0.eq) goto loc_82F1F6F0;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82f1f900
	goto loc_82F1F900;
loc_82F1F6F0:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F6F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f71c
	if (ctx.cr0.eq) goto loc_82F1F71C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f6f8
	if (ctx.cr6.eq) goto loc_82F1F6F8;
loc_82F1F71C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f72c
	if (!ctx.cr0.eq) goto loc_82F1F72C;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82f1f900
	goto loc_82F1F900;
loc_82F1F72C:
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F734:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f758
	if (ctx.cr0.eq) goto loc_82F1F758;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f734
	if (ctx.cr6.eq) goto loc_82F1F734;
loc_82F1F758:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f1f980
	if (ctx.cr0.eq) goto loc_82F1F980;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F768:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f78c
	if (ctx.cr0.eq) goto loc_82F1F78C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f768
	if (ctx.cr6.eq) goto loc_82F1F768;
loc_82F1F78C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f79c
	if (!ctx.cr0.eq) goto loc_82F1F79C;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82f1f900
	goto loc_82F1F900;
loc_82F1F79C:
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F7A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f7c8
	if (ctx.cr0.eq) goto loc_82F1F7C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f7a4
	if (ctx.cr6.eq) goto loc_82F1F7A4;
loc_82F1F7C8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f7d8
	if (!ctx.cr0.eq) goto loc_82F1F7D8;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82f1f900
	goto loc_82F1F900;
loc_82F1F7D8:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F7E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f804
	if (ctx.cr0.eq) goto loc_82F1F804;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f7e0
	if (ctx.cr6.eq) goto loc_82F1F7E0;
loc_82F1F804:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f814
	if (!ctx.cr0.eq) goto loc_82F1F814;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82f1f900
	goto loc_82F1F900;
loc_82F1F814:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F81C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f840
	if (ctx.cr0.eq) goto loc_82F1F840;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f81c
	if (ctx.cr6.eq) goto loc_82F1F81C;
loc_82F1F840:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f850
	if (!ctx.cr0.eq) goto loc_82F1F850;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82f1f900
	goto loc_82F1F900;
loc_82F1F850:
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F858:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f87c
	if (ctx.cr0.eq) goto loc_82F1F87C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f858
	if (ctx.cr6.eq) goto loc_82F1F858;
loc_82F1F87C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f88c
	if (!ctx.cr0.eq) goto loc_82F1F88C;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82f1f900
	goto loc_82F1F900;
loc_82F1F88C:
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F894:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f8b8
	if (ctx.cr0.eq) goto loc_82F1F8B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f894
	if (ctx.cr6.eq) goto loc_82F1F894;
loc_82F1F8B8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f8c8
	if (!ctx.cr0.eq) goto loc_82F1F8C8;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82f1f900
	goto loc_82F1F900;
loc_82F1F8C8:
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_82F1F8D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1f8f4
	if (ctx.cr0.eq) goto loc_82F1F8F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1f8d0
	if (ctx.cr6.eq) goto loc_82F1F8D0;
loc_82F1F8F4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1eb08
	if (!ctx.cr0.eq) goto loc_82F1EB08;
	// li r11,15
	ctx.r11.s64 = 15;
loc_82F1F900:
	// rlwinm r10,r30,16,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xF0000;
	// stw r16,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// or r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82F1F910:
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r14,r16
	ctx.r14.u64 = ctx.r16.u64;
loc_82F1F918:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb. r15,r11
	ctx.r15.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne 0x82f1ed50
	if (!ctx.cr0.eq) goto loc_82F1ED50;
	// lwz r29,404(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82F1F934:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82f1eb08
	if (!ctx.cr6.eq) goto loc_82F1EB08;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82f1eb08
	if (!ctx.cr6.eq) goto loc_82F1EB08;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r11.u32);
	// stw r10,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r10.u32);
	// stw r9,112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 112, ctx.r9.u32);
	// stw r8,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r8.u32);
	// stw r7,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r7.u32);
	// stw r27,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r27.u32);
loc_82F1F978:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82F1F980:
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x82f1e940
	ctx.lr = 0x82F1F98C;
	sub_82F1E940(ctx, base);
	// b 0x82f1eb08
	goto loc_82F1EB08;
}

__attribute__((alias("__imp__sub_82F1F990"))) PPC_WEAK_FUNC(sub_82F1F990);
PPC_FUNC_IMPL(__imp__sub_82F1F990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82F1F998;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f200b0
	if (ctx.cr6.eq) goto loc_82F200B0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// beq cr6,0x82f1f9f0
	if (ctx.cr6.eq) goto loc_82F1F9F0;
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
loc_82F1F9C8:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82f1f990
	ctx.lr = 0x82F1F9D4;
	sub_82F1F990(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f20000
	if (ctx.cr6.eq) goto loc_82F20000;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1f9c8
	if (ctx.cr6.lt) goto loc_82F1F9C8;
loc_82F1F9F0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82f1feb0
	if (!ctx.cr6.eq) goto loc_82F1FEB0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f1fab4
	if (!ctx.cr6.gt) goto loc_82F1FAB4;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82F1FA1C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f1fa68
	if (!ctx.cr6.lt) goto loc_82F1FA68;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_82F1FA30:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r6,52(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82f1fa94
	if (ctx.cr6.eq) goto loc_82F1FA94;
	// ble cr6,0x82f1fa54
	if (!ctx.cr6.gt) goto loc_82F1FA54;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82F1FA54:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1fa30
	if (ctx.cr6.lt) goto loc_82F1FA30;
loc_82F1FA68:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1faa0
	if (ctx.cr6.eq) goto loc_82F1FAA0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1fa1c
	if (ctx.cr6.lt) goto loc_82F1FA1C;
	// b 0x82f1fab4
	goto loc_82F1FAB4;
loc_82F1FA94:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1572
	ctx.r5.s64 = ctx.r11.s64 + 1572;
	// b 0x82f1fff0
	goto loc_82F1FFF0;
loc_82F1FAA0:
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r11,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82f1fac0
	if (!ctx.cr6.eq) goto loc_82F1FAC0;
loc_82F1FAB4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1532
	ctx.r5.s64 = ctx.r11.s64 + 1532;
	// b 0x82f1fff0
	goto loc_82F1FFF0;
loc_82F1FAC0:
	// lwz r24,4(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r23,28(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r22,24(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// mullw r11,r22,r23
	ctx.r11.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r23.s32);
	// beq cr6,0x82f1fae8
	if (ctx.cr6.eq) goto loc_82F1FAE8;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// beq cr6,0x82f1fae8
	if (ctx.cr6.eq) goto loc_82F1FAE8;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// b 0x82f1fb00
	goto loc_82F1FB00;
loc_82F1FAE8:
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f1faf8
	if (!ctx.cr0.eq) goto loc_82F1FAF8;
	// rlwinm r25,r11,30,2,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82f1fb00
	goto loc_82F1FB00;
loc_82F1FAF8:
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
loc_82F1FB00:
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// ble cr6,0x82f1fd18
	if (!ctx.cr6.gt) goto loc_82F1FD18;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r31,64
	ctx.r5.s64 = ctx.r31.s64 + 64;
loc_82F1FB1C:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82F1FB28:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82f1fb4c
	if (ctx.cr0.eq) goto loc_82F1FB4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82f1fb28
	if (ctx.cr6.eq) goto loc_82F1FB28;
loc_82F1FB4C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82f1fe04
	if (!ctx.cr0.eq) goto loc_82F1FE04;
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r7,56(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82f1fe10
	if (!ctx.cr6.eq) goto loc_82F1FE10;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// clrldi r10,r23,32
	ctx.r10.u64 = ctx.r23.u64 & 0xFFFFFFFF;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r7,16(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rldimi r10,r7,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82f1fe10
	if (!ctx.cr6.eq) goto loc_82F1FE10;
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// clrldi r10,r24,32
	ctx.r10.u64 = ctx.r24.u64 & 0xFFFFFFFF;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r10,r22,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r22.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82f1fe10
	if (!ctx.cr6.eq) goto loc_82F1FE10;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82f1fe10
	if (!ctx.cr6.eq) goto loc_82F1FE10;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// beq 0x82f1fbf0
	if (ctx.cr0.eq) goto loc_82F1FBF0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1fc08
	if (ctx.cr6.eq) goto loc_82F1FC08;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1448
	ctx.r5.s64 = ctx.r11.s64 + 1448;
	// b 0x82f1fff0
	goto loc_82F1FFF0;
loc_82F1FBF0:
	// lwz r10,40(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f1fc08
	if (ctx.cr6.eq) goto loc_82F1FC08;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1fe10
	if (!ctx.cr6.eq) goto loc_82F1FE10;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
loc_82F1FC08:
	// clrlwi. r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f1fc1c
	if (ctx.cr0.eq) goto loc_82F1FC1C;
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1fe1c
	if (!ctx.cr6.eq) goto loc_82F1FE1C;
loc_82F1FC1C:
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1fc34
	if (ctx.cr6.eq) goto loc_82F1FC34;
	// lwz r8,44(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f1ffe8
	if (ctx.cr6.eq) goto loc_82F1FFE8;
loc_82F1FC34:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f1fc50
	if (!ctx.cr6.eq) goto loc_82F1FC50;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1fc50
	if (!ctx.cr6.eq) goto loc_82F1FC50;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1ffe8
	if (!ctx.cr6.eq) goto loc_82F1FFE8;
loc_82F1FC50:
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1fc68
	if (ctx.cr6.eq) goto loc_82F1FC68;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82f1fe28
	if (!ctx.cr6.eq) goto loc_82F1FE28;
loc_82F1FC68:
	// lwz r8,12(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82f1fcf8
	if (ctx.cr6.eq) goto loc_82F1FCF8;
	// cmplw cr6,r8,r25
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82f1fcf8
	if (!ctx.cr6.eq) goto loc_82F1FCF8;
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x82f1fc90
	if (ctx.cr6.eq) goto loc_82F1FC90;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82f1fcc4
	if (!ctx.cr6.gt) goto loc_82F1FCC4;
loc_82F1FC90:
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82f1fcc4
	if (!ctx.cr6.lt) goto loc_82F1FCC4;
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
loc_82F1FCA0:
	// lwz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r28,12(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x82f1fe34
	if (!ctx.cr6.eq) goto loc_82F1FE34;
	// lwz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f1fca0
	if (ctx.cr6.lt) goto loc_82F1FCA0;
loc_82F1FCC4:
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x82f1fd04
	if (ctx.cr6.eq) goto loc_82F1FD04;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82f1fe34
	if (ctx.cr6.lt) goto loc_82F1FE34;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mullw r10,r8,r6
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f1fd04
	if (ctx.cr6.eq) goto loc_82F1FD04;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1396
	ctx.r5.s64 = ctx.r11.s64 + 1396;
	// b 0x82f1fff0
	goto loc_82F1FFF0;
loc_82F1FCF8:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f1fe34
	if (!ctx.cr6.eq) goto loc_82F1FE34;
loc_82F1FD04:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1fb1c
	if (ctx.cr6.lt) goto loc_82F1FB1C;
loc_82F1FD18:
	// addi r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 + 14;
	// lwz r10,44(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// beq cr6,0x82f1fd40
	if (ctx.cr6.eq) goto loc_82F1FD40;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82f1fe28
	if (!ctx.cr6.eq) goto loc_82F1FE28;
loc_82F1FD40:
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1fe40
	if (ctx.cr6.eq) goto loc_82F1FE40;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,40(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// mullw r28,r11,r10
	ctx.r28.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82f15fc0
	ctx.lr = 0x82F1FDA0;
	sub_82F15FC0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x82F1FDB0;
	sub_82CB16F0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f1fe44
	if (!ctx.cr6.gt) goto loc_82F1FE44;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82F1FDC4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f1fdec
	if (ctx.cr6.eq) goto loc_82F1FDEC;
	// lwz r10,40(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F1FDEC;
	sub_82CB1160(ctx, base);
loc_82F1FDEC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1fdc4
	if (ctx.cr6.lt) goto loc_82F1FDC4;
	// b 0x82f1fe44
	goto loc_82F1FE44;
loc_82F1FE04:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1352
	ctx.r5.s64 = ctx.r11.s64 + 1352;
	// b 0x82f1fff0
	goto loc_82F1FFF0;
loc_82F1FE10:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1304
	ctx.r5.s64 = ctx.r11.s64 + 1304;
	// b 0x82f1fff0
	goto loc_82F1FFF0;
loc_82F1FE1C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1240
	ctx.r5.s64 = ctx.r11.s64 + 1240;
	// b 0x82f1fff0
	goto loc_82F1FFF0;
loc_82F1FE28:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1144
	ctx.r5.s64 = ctx.r11.s64 + 1144;
	// b 0x82f1fff0
	goto loc_82F1FFF0;
loc_82F1FE34:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1080
	ctx.r5.s64 = ctx.r11.s64 + 1080;
	// b 0x82f1fff0
	goto loc_82F1FFF0;
loc_82F1FE40:
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_82F1FE44:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f1fe64
	if (!ctx.cr6.eq) goto loc_82F1FE64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82f200b0
	goto loc_82F200B0;
loc_82F1FE64:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82f200b0
	if (!ctx.cr6.gt) goto loc_82F200B0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82F1FE7C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82f200b0
	if (ctx.cr6.eq) goto loc_82F200B0;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82f1fe7c
	if (ctx.cr6.lt) goto loc_82F1FE7C;
	// b 0x82f200b0
	goto loc_82F200B0;
loc_82F1FEB0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f200b0
	if (!ctx.cr6.eq) goto loc_82F200B0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f1ff2c
	if (!ctx.cr6.gt) goto loc_82F1FF2C;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82F1FECC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f1ff14
	if (!ctx.cr6.lt) goto loc_82F1FF14;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82F1FEE0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82f1ff00
	if (!ctx.cr6.gt) goto loc_82F1FF00;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82F1FF00:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f1fee0
	if (ctx.cr6.lt) goto loc_82F1FEE0;
loc_82F1FF14:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1fecc
	if (ctx.cr6.lt) goto loc_82F1FECC;
loc_82F1FF2C:
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r21,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r21.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r21,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r21.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// beq cr6,0x82f20024
	if (ctx.cr6.eq) goto loc_82F20024;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82F1FF70:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82f1ff8c
	if (ctx.cr6.eq) goto loc_82F1FF8C;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82F1FF8C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r5,32(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r4,28(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mullw r5,r5,r4
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r10,44(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// beq cr6,0x82f20008
	if (ctx.cr6.eq) goto loc_82F20008;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f20010
	if (!ctx.cr6.eq) goto loc_82F20010;
loc_82F1FFE8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1008
	ctx.r5.s64 = ctx.r11.s64 + 1008;
loc_82F1FFF0:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r4,r10,988
	ctx.r4.s64 = ctx.r10.s64 + 988;
	// bl 0x82f1e940
	ctx.lr = 0x82F20000;
	sub_82F1E940(ctx, base);
loc_82F20000:
	// li r21,-1
	ctx.r21.s64 = -1;
	// b 0x82f200b0
	goto loc_82F200B0;
loc_82F20008:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f1ffe8
	if (!ctx.cr6.eq) goto loc_82F1FFE8;
loc_82F20010:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f1ff70
	if (ctx.cr6.lt) goto loc_82F1FF70;
loc_82F20024:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f20038
	if (!ctx.cr6.eq) goto loc_82F20038;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82F20038:
	// lwz r11,44(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f200b0
	if (ctx.cr6.eq) goto loc_82F200B0;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// bl 0x82f15fc0
	ctx.lr = 0x82F20054;
	sub_82F15FC0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f200b0
	if (!ctx.cr6.gt) goto loc_82F200B0;
loc_82F20068:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r4,44(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mullw r5,r11,r9
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// bl 0x82cb1160
	ctx.lr = 0x82F20088;
	sub_82CB1160(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// blt cr6,0x82f20068
	if (ctx.cr6.lt) goto loc_82F20068;
loc_82F200B0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F200BC"))) PPC_WEAK_FUNC(sub_82F200BC);
PPC_FUNC_IMPL(__imp__sub_82F200BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F200C0"))) PPC_WEAK_FUNC(sub_82F200C0);
PPC_FUNC_IMPL(__imp__sub_82F200C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x82F200C8;
	__savegprlr_19(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82f20c74
	if (!ctx.cr6.eq) goto loc_82F20C74;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r21,r31,24
	ctx.r21.s64 = ctx.r31.s64 + 24;
	// addi r10,r11,2264
	ctx.r10.s64 = ctx.r11.s64 + 2264;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_82F20104:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f20128
	if (ctx.cr0.eq) goto loc_82F20128;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f20104
	if (ctx.cr6.eq) goto loc_82F20104;
loc_82F20128:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f20c74
	if (!ctx.cr0.eq) goto loc_82F20C74;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82F20140;
	sub_82CB16F0(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r22,32(r20)
	PPC_STORE_U32(ctx.r20.u32 + 32, ctx.r22.u32);
	// stb r19,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r19.u8);
	// b 0x82f20164
	goto loc_82F20164;
loc_82F20150:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f20188
	if (!ctx.cr6.eq) goto loc_82F20188;
loc_82F20164:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F20170;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f20150
	if (!ctx.cr0.lt) goto loc_82F20150;
	// b 0x82f20c08
	goto loc_82F20C08;
loc_82F2017C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,2236
	ctx.r5.s64 = ctx.r11.s64 + 2236;
	// b 0x82f20c38
	goto loc_82F20C38;
loc_82F20188:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_82F2018C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f201a4
	if (!ctx.cr6.eq) goto loc_82F201A4;
	// lbz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r10,44
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 44, ctx.xer);
	// beq cr6,0x82f20280
	if (ctx.cr6.eq) goto loc_82F20280;
loc_82F201A4:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82f201c0
	if (!ctx.cr6.eq) goto loc_82F201C0;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// lwz r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// b 0x82f20248
	goto loc_82F20248;
loc_82F201C0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f20228
	if (!ctx.cr6.eq) goto loc_82F20228;
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x82f201f0
	if (ctx.cr6.eq) goto loc_82F201F0;
	// cmpwi cr6,r11,93
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 93, ctx.xer);
	// beq cr6,0x82f201f0
	if (ctx.cr6.eq) goto loc_82F201F0;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x82f201f0
	if (ctx.cr6.eq) goto loc_82F201F0;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// bne cr6,0x82f20c68
	if (!ctx.cr6.eq) goto loc_82F20C68;
loc_82F201F0:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f1e838
	ctx.lr = 0x82F20200;
	sub_82F1E838(ctx, base);
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// bne cr6,0x82f20218
	if (!ctx.cr6.eq) goto loc_82F20218;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82f20c5c
	if (!ctx.cr6.eq) goto loc_82F20C5C;
loc_82F20218:
	// addi r11,r11,-93
	ctx.r11.s64 = ctx.r11.s64 + -93;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82f20254
	goto loc_82F20254;
loc_82F20228:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82f20c68
	if (!ctx.cr6.eq) goto loc_82F20C68;
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// bl 0x82cb8848
	ctx.lr = 0x82F20244;
	sub_82CB8848(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82F20248:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f1e838
	ctx.lr = 0x82F20254;
	sub_82F1E838(ctx, base);
loc_82F20254:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F20260;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f20c08
	if (ctx.cr0.lt) goto loc_82F20C08;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82f20254
	if (ctx.cr6.eq) goto loc_82F20254;
	// b 0x82f2018c
	goto loc_82F2018C;
loc_82F20280:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f202b0
	if (ctx.cr6.eq) goto loc_82F202B0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82F20290:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f20290
	if (!ctx.cr6.eq) goto loc_82F20290;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f202d0
	if (!ctx.cr0.eq) goto loc_82F202D0;
loc_82F202B0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,2216
	ctx.r5.s64 = ctx.r11.s64 + 2216;
	// b 0x82f20c38
	goto loc_82F20C38;
loc_82F202BC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f202e8
	if (!ctx.cr6.eq) goto loc_82F202E8;
loc_82F202D0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F202DC;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f202bc
	if (!ctx.cr0.lt) goto loc_82F202BC;
	// b 0x82f20c08
	goto loc_82F20C08;
loc_82F202E8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82f20300
	if (ctx.cr6.eq) goto loc_82F20300;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,2196
	ctx.r5.s64 = ctx.r11.s64 + 2196;
	// b 0x82f20c38
	goto loc_82F20C38;
loc_82F20300:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,20960
	ctx.r3.s64 = ctx.r11.s64 + 20960;
	// bl 0x82f1c440
	ctx.lr = 0x82F20314;
	sub_82F1C440(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f20328
	if (!ctx.cr0.lt) goto loc_82F20328;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,2172
	ctx.r5.s64 = ctx.r11.s64 + 2172;
	// b 0x82f20c38
	goto loc_82F20C38;
loc_82F20328:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,20(r20)
	PPC_STORE_U32(ctx.r20.u32 + 20, ctx.r11.u32);
	// b 0x82f20348
	goto loc_82F20348;
loc_82F20334:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f20360
	if (!ctx.cr6.eq) goto loc_82F20360;
loc_82F20348:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F20354;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f20334
	if (!ctx.cr0.lt) goto loc_82F20334;
	// b 0x82f20c08
	goto loc_82F20C08;
loc_82F20360:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82f20398
	if (ctx.cr6.eq) goto loc_82F20398;
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x82f20398
	if (ctx.cr6.eq) goto loc_82F20398;
loc_82F20378:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,2144
	ctx.r5.s64 = ctx.r11.s64 + 2144;
	// b 0x82f20c38
	goto loc_82F20C38;
loc_82F20384:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f203b0
	if (!ctx.cr6.eq) goto loc_82F203B0;
loc_82F20398:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F203A4;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f20384
	if (!ctx.cr0.lt) goto loc_82F20384;
	// b 0x82f20c08
	goto loc_82F20C08;
loc_82F203B0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82f203c8
	if (ctx.cr6.eq) goto loc_82F203C8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,2124
	ctx.r5.s64 = ctx.r11.s64 + 2124;
	// b 0x82f20c38
	goto loc_82F20C38;
loc_82F203C8:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,20904
	ctx.r3.s64 = ctx.r11.s64 + 20904;
	// bl 0x82f1c440
	ctx.lr = 0x82F203DC;
	sub_82F1C440(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f203f0
	if (!ctx.cr0.lt) goto loc_82F203F0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,2100
	ctx.r5.s64 = ctx.r11.s64 + 2100;
	// b 0x82f20c38
	goto loc_82F20C38;
loc_82F203F0:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r11.u32);
	// b 0x82f20410
	goto loc_82F20410;
loc_82F203FC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f20428
	if (!ctx.cr6.eq) goto loc_82F20428;
loc_82F20410:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F2041C;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f203fc
	if (!ctx.cr0.lt) goto loc_82F203FC;
	// b 0x82f20c08
	goto loc_82F20C08;
loc_82F20428:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82f20458
	if (ctx.cr6.eq) goto loc_82F20458;
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x82f20458
	if (ctx.cr6.eq) goto loc_82F20458;
	// b 0x82f20378
	goto loc_82F20378;
loc_82F20444:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f20470
	if (!ctx.cr6.eq) goto loc_82F20470;
loc_82F20458:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F20464;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f20444
	if (!ctx.cr0.lt) goto loc_82F20444;
	// b 0x82f20c08
	goto loc_82F20C08;
loc_82F20470:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82f204a8
	if (ctx.cr6.eq) goto loc_82F204A8;
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// beq cr6,0x82f204a8
	if (ctx.cr6.eq) goto loc_82F204A8;
loc_82F20488:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,2052
	ctx.r5.s64 = ctx.r11.s64 + 2052;
	// b 0x82f20c38
	goto loc_82F20C38;
loc_82F20494:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f204c0
	if (!ctx.cr6.eq) goto loc_82F204C0;
loc_82F204A8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F204B4;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f20494
	if (!ctx.cr0.lt) goto loc_82F20494;
	// b 0x82f20c08
	goto loc_82F20C08;
loc_82F204C0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82f204d8
	if (ctx.cr6.eq) goto loc_82F204D8;
loc_82F204CC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,2008
	ctx.r5.s64 = ctx.r11.s64 + 2008;
	// b 0x82f20c38
	goto loc_82F20C38;
loc_82F204D8:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// stw r11,24(r20)
	PPC_STORE_U32(ctx.r20.u32 + 24, ctx.r11.u32);
	// b 0x82f204f8
	goto loc_82F204F8;
loc_82F204E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f20510
	if (!ctx.cr6.eq) goto loc_82F20510;
loc_82F204F8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F20504;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f204e4
	if (!ctx.cr0.lt) goto loc_82F204E4;
	// b 0x82f20c08
	goto loc_82F20C08;
loc_82F20510:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82f20540
	if (ctx.cr6.eq) goto loc_82F20540;
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x82f20540
	if (ctx.cr6.eq) goto loc_82F20540;
	// b 0x82f20488
	goto loc_82F20488;
loc_82F2052C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f20558
	if (!ctx.cr6.eq) goto loc_82F20558;
loc_82F20540:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F2054C;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f2052c
	if (!ctx.cr0.lt) goto loc_82F2052C;
	// b 0x82f20c08
	goto loc_82F20C08;
loc_82F20558:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82f204cc
	if (!ctx.cr6.eq) goto loc_82F204CC;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// stw r11,28(r20)
	PPC_STORE_U32(ctx.r20.u32 + 28, ctx.r11.u32);
	// b 0x82f20584
	goto loc_82F20584;
loc_82F20570:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f2059c
	if (!ctx.cr6.eq) goto loc_82F2059C;
loc_82F20584:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F20590;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f20570
	if (!ctx.cr0.lt) goto loc_82F20570;
	// b 0x82f20c08
	goto loc_82F20C08;
loc_82F2059C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82f205cc
	if (ctx.cr6.eq) goto loc_82F205CC;
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// beq cr6,0x82f205cc
	if (ctx.cr6.eq) goto loc_82F205CC;
	// b 0x82f20488
	goto loc_82F20488;
loc_82F205B8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f205e4
	if (!ctx.cr6.eq) goto loc_82F205E4;
loc_82F205CC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F205D8;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f205b8
	if (!ctx.cr0.lt) goto loc_82F205B8;
	// b 0x82f20c08
	goto loc_82F20C08;
loc_82F205E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82f20614
	if (ctx.cr6.eq) goto loc_82F20614;
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x82f20614
	if (ctx.cr6.eq) goto loc_82F20614;
	// b 0x82f20378
	goto loc_82F20378;
loc_82F20600:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f2062c
	if (!ctx.cr6.eq) goto loc_82F2062C;
loc_82F20614:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F20620;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f20600
	if (!ctx.cr0.lt) goto loc_82F20600;
	// b 0x82f20c08
	goto loc_82F20C08;
loc_82F2062C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82f20c50
	if (!ctx.cr6.eq) goto loc_82F20C50;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82f20c50
	if (ctx.cr6.lt) goto loc_82F20C50;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdc30
	ctx.lr = 0x82F20654;
	sub_82CBDC30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f20668
	if (!ctx.cr0.eq) goto loc_82F20668;
loc_82F2065C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1964
	ctx.r5.s64 = ctx.r11.s64 + 1964;
	// b 0x82f20c38
	goto loc_82F20C38;
loc_82F20668:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cc8f70
	ctx.lr = 0x82F20678;
	sub_82CC8F70(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// beq cr6,0x82f206c4
	if (ctx.cr6.eq) goto loc_82F206C4;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x82f206b8
	if (ctx.cr6.eq) goto loc_82F206B8;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x82f206b0
	if (ctx.cr6.eq) goto loc_82F206B0;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x82f206a8
	if (ctx.cr6.eq) goto loc_82F206A8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1936
	ctx.r5.s64 = ctx.r11.s64 + 1936;
	// b 0x82f20c38
	goto loc_82F20C38;
loc_82F206A8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82f206bc
	goto loc_82F206BC;
loc_82F206B0:
	// stw r22,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r22.u32);
	// b 0x82f206c8
	goto loc_82F206C8;
loc_82F206B8:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82F206BC:
	// stw r11,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r11.u32);
	// b 0x82f206c8
	goto loc_82F206C8;
loc_82F206C4:
	// stw r19,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r19.u32);
loc_82F206C8:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdc30
	ctx.lr = 0x82F206D8;
	sub_82CBDC30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f20734
	if (ctx.cr0.eq) goto loc_82F20734;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cc8f70
	ctx.lr = 0x82F206F0;
	sub_82CC8F70(ctx, base);
	// cmpwi cr6,r3,120
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 120, ctx.xer);
	// bne cr6,0x82f20734
	if (!ctx.cr6.eq) goto loc_82F20734;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12(r20)
	PPC_STORE_U32(ctx.r20.u32 + 12, ctx.r11.u32);
	// stw r11,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r11.u32);
	// b 0x82f2071c
	goto loc_82F2071C;
loc_82F20708:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f207d0
	if (!ctx.cr6.eq) goto loc_82F207D0;
loc_82F2071C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F20728;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f20708
	if (!ctx.cr0.lt) goto loc_82F20708;
	// b 0x82f20c08
	goto loc_82F20C08;
loc_82F20734:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82f2076c
	if (!ctx.cr6.gt) goto loc_82F2076C;
loc_82F20744:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdd38
	ctx.lr = 0x82F20754;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f2065c
	if (ctx.cr0.eq) goto loc_82F2065C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f20744
	if (ctx.cr6.lt) goto loc_82F20744;
loc_82F2076C:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82cb6a70
	ctx.lr = 0x82F20778;
	sub_82CB6A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2065c
	if (ctx.cr0.lt) goto loc_82F2065C;
	// stw r3,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r3.u32);
	// b 0x82f2079c
	goto loc_82F2079C;
loc_82F20788:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f207b4
	if (!ctx.cr6.eq) goto loc_82F207B4;
loc_82F2079C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F207A8;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f20788
	if (!ctx.cr0.lt) goto loc_82F20788;
	// b 0x82f20c08
	goto loc_82F20C08;
loc_82F207B4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f207cc
	if (!ctx.cr6.eq) goto loc_82F207CC;
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x82f2081c
	if (ctx.cr6.eq) goto loc_82F2081C;
loc_82F207CC:
	// stw r22,12(r20)
	PPC_STORE_U32(ctx.r20.u32 + 12, ctx.r22.u32);
loc_82F207D0:
	// stw r19,44(r20)
	PPC_STORE_U32(ctx.r20.u32 + 44, ctx.r19.u32);
	// stw r19,40(r20)
	PPC_STORE_U32(ctx.r20.u32 + 40, ctx.r19.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f20c18
	if (!ctx.cr6.eq) goto loc_82F20C18;
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x82f20c18
	if (!ctx.cr6.eq) goto loc_82F20C18;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82f2089c
	if (!ctx.cr6.eq) goto loc_82F2089C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1896
	ctx.r5.s64 = ctx.r11.s64 + 1896;
	// b 0x82f20c38
	goto loc_82F20C38;
loc_82F20808:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f20834
	if (!ctx.cr6.eq) goto loc_82F20834;
loc_82F2081C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F20828;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f20808
	if (!ctx.cr0.lt) goto loc_82F20808;
	// b 0x82f20c08
	goto loc_82F20C08;
loc_82F20834:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82f2065c
	if (!ctx.cr6.eq) goto loc_82F2065C;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82f2065c
	if (ctx.cr0.lt) goto loc_82F2065C;
	// stw r11,12(r20)
	PPC_STORE_U32(ctx.r20.u32 + 12, ctx.r11.u32);
	// b 0x82f20870
	goto loc_82F20870;
loc_82F2085C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f207d0
	if (!ctx.cr6.eq) goto loc_82F207D0;
loc_82F20870:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F2087C;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f2085c
	if (!ctx.cr0.lt) goto loc_82F2085C;
	// b 0x82f20c08
	goto loc_82F20C08;
loc_82F20888:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f208b4
	if (!ctx.cr6.eq) goto loc_82F208B4;
loc_82F2089C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F208A8;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f20888
	if (!ctx.cr0.lt) goto loc_82F20888;
	// b 0x82f20c08
	goto loc_82F20C08;
loc_82F208B4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82f208d8
	if (ctx.cr6.eq) goto loc_82F208D8;
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// beq cr6,0x82f208d8
	if (ctx.cr6.eq) goto loc_82F208D8;
loc_82F208CC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1852
	ctx.r5.s64 = ctx.r11.s64 + 1852;
	// b 0x82f20c38
	goto loc_82F20C38;
loc_82F208D8:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r29,12(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82f208f0
	if (ctx.cr6.eq) goto loc_82F208F0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f208f4
	if (!ctx.cr6.eq) goto loc_82F208F4;
loc_82F208F0:
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82F208F4:
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r4,40(r20)
	PPC_STORE_U32(ctx.r20.u32 + 40, ctx.r4.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f15fc0
	ctx.lr = 0x82F20908;
	sub_82F15FC0(ctx, base);
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// stw r3,44(r20)
	PPC_STORE_U32(ctx.r20.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f20bac
	if (ctx.cr6.eq) goto loc_82F20BAC;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r24,r11,-12384
	ctx.r24.s64 = ctx.r11.s64 + -12384;
	// addi r25,r10,-12392
	ctx.r25.s64 = ctx.r10.s64 + -12392;
loc_82F2092C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F20938;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f20c08
	if (ctx.cr0.lt) goto loc_82F20C08;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82f2092c
	if (ctx.cr6.eq) goto loc_82F2092C;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f20998
	if (!ctx.cr6.eq) goto loc_82F20998;
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x82f20998
	if (!ctx.cr6.eq) goto loc_82F20998;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82F20970:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F2097C;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f20c08
	if (ctx.cr0.lt) goto loc_82F20C08;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82f20970
	if (ctx.cr6.eq) goto loc_82F20970;
loc_82F20998:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82f20a84
	if (ctx.cr6.lt) goto loc_82F20A84;
	// beq cr6,0x82f20a6c
	if (ctx.cr6.eq) goto loc_82F20A6C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82f20b2c
	if (!ctx.cr6.lt) goto loc_82F20B2C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82f209d4
	if (ctx.cr6.eq) goto loc_82F209D4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82f209d4
	if (ctx.cr6.eq) goto loc_82F209D4;
	// ble cr6,0x82f209d8
	if (!ctx.cr6.gt) goto loc_82F209D8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82f209f0
	if (!ctx.cr6.gt) goto loc_82F209F0;
	// b 0x82f209d8
	goto loc_82F209D8;
loc_82F209D4:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82F209D8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82f20a38
	if (ctx.cr6.eq) goto loc_82F20A38;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82f20a14
	if (ctx.cr6.eq) goto loc_82F20A14;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82f20a9c
	if (!ctx.cr6.eq) goto loc_82F20A9C;
loc_82F209F0:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lfd f0,0(r21)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
loc_82F20A00:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82f20a64
	goto loc_82F20A64;
loc_82F20A14:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lwa r10,0(r21)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r21.u32 + 0));
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lfd f13,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// b 0x82f20a00
	goto loc_82F20A00;
loc_82F20A38:
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f13,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,136(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82F20A64:
	// stfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// b 0x82f20b2c
	goto loc_82F20B2C;
loc_82F20A6C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82f20a9c
	if (!ctx.cr6.eq) goto loc_82F20A9C;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mullw r11,r30,r11
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// b 0x82f20b28
	goto loc_82F20B28;
loc_82F20A84:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82f20aa8
	if (!ctx.cr6.eq) goto loc_82F20AA8;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82f20b28
	if (!ctx.cr6.gt) goto loc_82F20B28;
loc_82F20A9C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1824
	ctx.r5.s64 = ctx.r11.s64 + 1824;
	// b 0x82f20c38
	goto loc_82F20C38;
loc_82F20AA8:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82f20a9c
	if (!ctx.cr6.eq) goto loc_82F20A9C;
	// lwz r8,0(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82F20ABC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f20ae0
	if (ctx.cr0.eq) goto loc_82F20AE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f20abc
	if (ctx.cr6.eq) goto loc_82F20ABC;
loc_82F20AE0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f20af0
	if (!ctx.cr0.eq) goto loc_82F20AF0;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82f20b28
	goto loc_82F20B28;
loc_82F20AF0:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82F20AF8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f20b1c
	if (ctx.cr0.eq) goto loc_82F20B1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f20af8
	if (ctx.cr6.eq) goto loc_82F20AF8;
loc_82F20B1C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f20a9c
	if (!ctx.cr0.eq) goto loc_82F20A9C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F20B28:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82F20B2C:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f20b78
	if (ctx.cr6.eq) goto loc_82F20B78;
loc_82F20B38:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F20B44;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f20c08
	if (ctx.cr0.lt) goto loc_82F20C08;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82f20b38
	if (ctx.cr6.eq) goto loc_82F20B38;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82f20b78
	if (ctx.cr6.eq) goto loc_82F20B78;
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x82f20b8c
	if (!ctx.cr6.eq) goto loc_82F20B8C;
loc_82F20B78:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82f2092c
	if (ctx.cr6.lt) goto loc_82F2092C;
	// b 0x82f20bac
	goto loc_82F20BAC;
loc_82F20B8C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1764
	ctx.r5.s64 = ctx.r11.s64 + 1764;
	// b 0x82f20c38
	goto loc_82F20C38;
loc_82F20B98:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f20bc4
	if (!ctx.cr6.eq) goto loc_82F20BC4;
loc_82F20BAC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F20BB8;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f20b98
	if (!ctx.cr0.lt) goto loc_82F20B98;
	// b 0x82f20c08
	goto loc_82F20C08;
loc_82F20BC4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82f20bf4
	if (ctx.cr6.eq) goto loc_82F20BF4;
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82f20bf4
	if (ctx.cr6.eq) goto loc_82F20BF4;
	// b 0x82f208cc
	goto loc_82F208CC;
loc_82F20BE0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f2017c
	if (ctx.cr6.eq) goto loc_82F2017C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82f20c18
	if (!ctx.cr6.eq) goto loc_82F20C18;
loc_82F20BF4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F20C00;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f20be0
	if (!ctx.cr0.lt) goto loc_82F20BE0;
loc_82F20C08:
	// stw r22,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r22.u32);
	// li r23,-1
	ctx.r23.s64 = -1;
	// stw r22,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r22.u32);
	// b 0x82f20c78
	goto loc_82F20C78;
loc_82F20C18:
	// lwz r11,32(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f20c78
	if (!ctx.cr6.eq) goto loc_82F20C78;
	// lwz r11,36(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 36);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f20c78
	if (!ctx.cr6.eq) goto loc_82F20C78;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1708
	ctx.r5.s64 = ctx.r11.s64 + 1708;
loc_82F20C38:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,988
	ctx.r4.s64 = ctx.r10.s64 + 988;
	// bl 0x82f1e940
	ctx.lr = 0x82F20C48;
	sub_82F1E940(ctx, base);
	// li r23,-1
	ctx.r23.s64 = -1;
	// b 0x82f20c78
	goto loc_82F20C78;
loc_82F20C50:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1680
	ctx.r5.s64 = ctx.r11.s64 + 1680;
	// b 0x82f20c38
	goto loc_82F20C38;
loc_82F20C5C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1636
	ctx.r5.s64 = ctx.r11.s64 + 1636;
	// b 0x82f20c38
	goto loc_82F20C38;
loc_82F20C68:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,1616
	ctx.r5.s64 = ctx.r11.s64 + 1616;
	// b 0x82f20c38
	goto loc_82F20C38;
loc_82F20C74:
	// li r23,280
	ctx.r23.s64 = 280;
loc_82F20C78:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F20C84"))) PPC_WEAK_FUNC(sub_82F20C84);
PPC_FUNC_IMPL(__imp__sub_82F20C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F20C88"))) PPC_WEAK_FUNC(sub_82F20C88);
PPC_FUNC_IMPL(__imp__sub_82F20C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82F20C90;
	__savegprlr_14(ctx, base);
	// stwu r1,-1552(r1)
	ea = -1552 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r14,284
	ctx.r14.s64 = 284;
	// addi r10,r23,16
	ctx.r10.s64 = ctx.r23.s64 + 16;
	// std r11,16(r23)
	PPC_STORE_U64(ctx.r23.u32 + 16, ctx.r11.u64);
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,24(r23)
	PPC_STORE_U64(ctx.r23.u32 + 24, ctx.r11.u64);
	// ld r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// lwz r10,92(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 92);
	// std r11,32(r23)
	PPC_STORE_U64(ctx.r23.u32 + 32, ctx.r11.u64);
	// ld r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r11,40(r23)
	PPC_STORE_U64(ctx.r23.u32 + 40, ctx.r11.u64);
	// beq cr6,0x82f20cf4
	if (ctx.cr6.eq) goto loc_82F20CF4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,2400
	ctx.r5.s64 = ctx.r11.s64 + 2400;
loc_82F20CD4:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r10,988
	ctx.r4.s64 = ctx.r10.s64 + 988;
	// bl 0x82f1e940
	ctx.lr = 0x82F20CE4;
	sub_82F1E940(ctx, base);
loc_82F20CE4:
	// li r14,-1
	ctx.r14.s64 = -1;
loc_82F20CE8:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82F20CF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r11,92(r23)
	PPC_STORE_U32(ctx.r23.u32 + 92, ctx.r11.u32);
	// lwz r3,128(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f20d20
	if (ctx.cr6.eq) goto loc_82F20D20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F20D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r24,128(r23)
	PPC_STORE_U32(ctx.r23.u32 + 128, ctx.r24.u32);
loc_82F20D20:
	// li r5,1084
	ctx.r5.s64 = 1084;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82cb16f0
	ctx.lr = 0x82F20D30;
	sub_82CB16F0(ctx, base);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x82f20d60
	goto loc_82F20D60;
loc_82F20D38:
	// cmpwi cr6,r3,280
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 280, ctx.xer);
	// beq cr6,0x82f20d80
	if (ctx.cr6.eq) goto loc_82F20D80;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f1e428
	ctx.lr = 0x82F20D54;
	sub_82F1E428(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f20ce4
	if (ctx.cr6.eq) goto loc_82F20CE4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82F20D60:
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f200c0
	ctx.lr = 0x82F20D74;
	sub_82F200C0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82f20d38
	if (!ctx.cr6.eq) goto loc_82F20D38;
	// b 0x82f20ce4
	goto loc_82F20CE4;
loc_82F20D80:
	// lwz r30,360(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f20db8
	if (ctx.cr6.eq) goto loc_82F20DB8;
	// addi r28,r1,364
	ctx.r28.s64 = ctx.r1.s64 + 364;
loc_82F20D94:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82f1f990
	ctx.lr = 0x82F20DA0;
	sub_82F1F990(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f20ce4
	if (ctx.cr6.eq) goto loc_82F20CE4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82f20d94
	if (ctx.cr6.lt) goto loc_82F20D94;
loc_82F20DB8:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mulli r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 * 20;
	// bl 0x82f15fc0
	ctx.lr = 0x82F20DC8;
	sub_82F15FC0(ctx, base);
	// mulli r20,r31,66
	ctx.r20.s64 = ctx.r31.s64 * 66;
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r4,r20,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// bl 0x82f15fc0
	ctx.lr = 0x82F20DE4;
	sub_82F15FC0(ctx, base);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r4,r31,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// bl 0x82f15fc0
	ctx.lr = 0x82F20DFC;
	sub_82F15FC0(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f20e38
	if (ctx.cr6.eq) goto loc_82F20E38;
	// addi r10,r1,364
	ctx.r10.s64 = ctx.r1.s64 + 364;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82F20E18:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r22,r9,r22
	ctx.r22.u64 = ctx.r9.u64 + ctx.r22.u64;
	// bne 0x82f20e18
	if (!ctx.cr0.eq) goto loc_82F20E18;
loc_82F20E38:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82f15fc0
	ctx.lr = 0x82F20E48;
	sub_82F15FC0(ctx, base);
	// rlwinm r27,r31,7,0,24
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r19,r24
	ctx.r19.u64 = ctx.r24.u64;
	// bl 0x82f15fc0
	ctx.lr = 0x82F20E64;
	sub_82F15FC0(ctx, base);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f20f2c
	if (ctx.cr6.eq) goto loc_82F20F2C;
	// addi r28,r1,364
	ctx.r28.s64 = ctx.r1.s64 + 364;
	// addi r31,r21,6
	ctx.r31.s64 = ctx.r21.s64 + 6;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82F20E84:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82f1e1b8
	ctx.lr = 0x82F20E9C;
	sub_82F1E1B8(ctx, base);
	// stw r3,-6(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// sth r11,-2(r31)
	PPC_STORE_U16(ctx.r31.u32 + -2, ctx.r11.u16);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// sth r24,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r24.u16);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f20ef0
	if (ctx.cr6.eq) goto loc_82F20EF0;
	// add r3,r19,r15
	ctx.r3.u64 = ctx.r19.u64 + ctx.r15.u64;
	// stw r3,10(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10, ctx.r3.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mullw r26,r11,r10
	ctx.r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x82cb1160
	ctx.lr = 0x82F20EE8;
	sub_82CB1160(ctx, base);
	// add r19,r26,r19
	ctx.r19.u64 = ctx.r26.u64 + ctx.r19.u64;
	// b 0x82f20ef4
	goto loc_82F20EF4;
loc_82F20EF0:
	// stw r24,10(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10, ctx.r24.u32);
loc_82F20EF4:
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1e6f8
	ctx.lr = 0x82F20F18;
	sub_82F1E6F8(ctx, base);
	// stw r3,6(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6, ctx.r3.u32);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x82f20e84
	if (!ctx.cr0.eq) goto loc_82F20E84;
loc_82F20F2C:
	// cmplw cr6,r19,r22
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82f20f40
	if (ctx.cr6.eq) goto loc_82F20F40;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,2368
	ctx.r5.s64 = ctx.r11.s64 + 2368;
	// b 0x82f20cd4
	goto loc_82F20CD4;
loc_82F20F40:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// ble cr6,0x82f20f58
	if (!ctx.cr6.gt) goto loc_82F20F58;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,2316
	ctx.r5.s64 = ctx.r11.s64 + 2316;
	// b 0x82f20cd4
	goto loc_82F20CD4;
loc_82F20F58:
	// mulli r30,r29,20
	ctx.r30.s64 = ctx.r29.s64 * 20;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r28,r30,28
	ctx.r28.s64 = ctx.r30.s64 + 28;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r25,r10,r26
	ctx.r25.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r27,r25,r19
	ctx.r27.u64 = ctx.r25.u64 + ctx.r19.u64;
	// add r22,r27,r9
	ctx.r22.u64 = ctx.r27.u64 + ctx.r9.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82f15fc0
	ctx.lr = 0x82F20F90;
	sub_82F15FC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,28
	ctx.r11.s64 = 28;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// stw r24,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r24.u32);
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// stw r24,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r24.u32);
	// bl 0x82cb1160
	ctx.lr = 0x82F20FC8;
	sub_82CB1160(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f21018
	if (ctx.cr6.eq) goto loc_82F21018;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
loc_82F20FD4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f20fec
	if (ctx.cr6.eq) goto loc_82F20FEC;
	// subf r10,r15,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r15.s64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82F20FEC:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// subf r10,r17,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r17.s64;
	// subf r9,r18,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r18.s64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r9,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r9.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bne 0x82f20fd4
	if (!ctx.cr0.eq) goto loc_82F20FD4;
loc_82F21018:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r30,r31,r28
	ctx.r30.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F21030;
	sub_82CB1160(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f21070
	if (ctx.cr6.eq) goto loc_82F21070;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
loc_82F21044:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f2105c
	if (ctx.cr6.eq) goto loc_82F2105C;
	// subf r10,r16,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r16.s64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82F2105C:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f21044
	if (ctx.cr6.lt) goto loc_82F21044;
loc_82F21070:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r30,r31,r26
	ctx.r30.u64 = ctx.r31.u64 + ctx.r26.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F21088;
	sub_82CB1160(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f210d0
	if (ctx.cr6.eq) goto loc_82F210D0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82F2109C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r18,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r18.s64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r17,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r17.s64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82f2109c
	if (ctx.cr6.lt) goto loc_82F2109C;
loc_82F210D0:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// add r3,r31,r25
	ctx.r3.u64 = ctx.r31.u64 + ctx.r25.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82F210E0;
	sub_82CB1160(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82cb1160
	ctx.lr = 0x82F210F0;
	sub_82CB1160(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82299698
	ctx.lr = 0x82F210FC;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f21110
	if (ctx.cr0.eq) goto loc_82F21110;
	// bl 0x82ee8ca0
	ctx.lr = 0x82F21108;
	sub_82EE8CA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f21114
	goto loc_82F21114;
loc_82F21110:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82F21114:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ee8cd0
	ctx.lr = 0x82F21128;
	sub_82EE8CD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f2113c
	if (!ctx.cr0.lt) goto loc_82F2113C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,2276
	ctx.r5.s64 = ctx.r11.s64 + 2276;
	// b 0x82f20cd4
	goto loc_82F20CD4;
loc_82F2113C:
	// lwz r11,324(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 324);
	// stw r30,128(r23)
	PPC_STORE_U32(ctx.r23.u32 + 128, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f2115c
	if (ctx.cr6.eq) goto loc_82F2115C;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r3,316(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 316);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831f91f8
	ctx.lr = 0x82F2115C;
	sub_831F91F8(ctx, base);
loc_82F2115C:
	// stw r24,124(r23)
	PPC_STORE_U32(ctx.r23.u32 + 124, ctx.r24.u32);
	// b 0x82f20ce8
	goto loc_82F20CE8;
}

__attribute__((alias("__imp__sub_82F21164"))) PPC_WEAK_FUNC(sub_82F21164);
PPC_FUNC_IMPL(__imp__sub_82F21164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F21168"))) PPC_WEAK_FUNC(sub_82F21168);
PPC_FUNC_IMPL(__imp__sub_82F21168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x82F21170;
	__savegprlr_16(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r25,8(r21)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f21634
	if (ctx.cr6.eq) goto loc_82F21634;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r16,r11,8328
	ctx.r16.s64 = ctx.r11.s64 + 8328;
	// addi r22,r10,-1208
	ctx.r22.s64 = ctx.r10.s64 + -1208;
	// b 0x82f211d8
	goto loc_82F211D8;
loc_82F211CC:
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x82f211e4
	if (ctx.cr6.eq) goto loc_82F211E4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82F211D8:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f211cc
	if (!ctx.cr0.eq) goto loc_82F211CC;
loc_82F211E4:
	// subf r31,r24,r26
	ctx.r31.s64 = ctx.r26.s64 - ctx.r24.s64;
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 15, ctx.xer);
	// ble cr6,0x82f21230
	if (!ctx.cr6.gt) goto loc_82F21230;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82f21354
	if (!ctx.cr6.eq) goto loc_82F21354;
loc_82F211F8:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f21680
	if (ctx.cr6.eq) goto loc_82F21680;
loc_82F21200:
	// lwz r11,40(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f21668
	if (!ctx.cr6.eq) goto loc_82F21668;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// addi r6,r11,19964
	ctx.r6.s64 = ctx.r11.s64 + 19964;
	// li r5,2005
	ctx.r5.s64 = 2005;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82eea308
	ctx.lr = 0x82F2122C;
	sub_82EEA308(ctx, base);
	// b 0x82f2169c
	goto loc_82F2169C;
loc_82F21230:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82cb1160
	ctx.lr = 0x82F21240;
	sub_82CB1160(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stbx r18,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r18.u8);
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f21258
	if (ctx.cr6.eq) goto loc_82F21258;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82F21258:
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82f215e4
	if (ctx.cr6.eq) goto loc_82F215E4;
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f21298
	if (ctx.cr0.eq) goto loc_82F21298;
loc_82F21274:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82cbdc30
	ctx.lr = 0x82F21280;
	sub_82CBDC30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f21298
	if (ctx.cr0.eq) goto loc_82F21298;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f21274
	if (!ctx.cr6.eq) goto loc_82F21274;
loc_82F21298:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f212b4
	if (ctx.cr6.eq) goto loc_82F212B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb6a70
	ctx.lr = 0x82F212AC;
	sub_82CB6A70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f212bc
	goto loc_82F212BC;
loc_82F212B4:
	// lis r30,0
	ctx.r30.s64 = 0;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
loc_82F212BC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f212e0
	if (ctx.cr6.eq) goto loc_82F212E0;
	// stb r18,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r18.u8);
	// b 0x82f212dc
	goto loc_82F212DC;
loc_82F212D0:
	// bl 0x82cbdd38
	ctx.lr = 0x82F212D4;
	sub_82CBDD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f212ec
	if (ctx.cr0.eq) goto loc_82F212EC;
loc_82F212DC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82F212E0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f212d0
	if (!ctx.cr0.eq) goto loc_82F212D0;
loc_82F212EC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f21360
	if (!ctx.cr6.eq) goto loc_82F21360;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
loc_82F21304:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82F2130C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// beq 0x82f21330
	if (ctx.cr0.eq) goto loc_82F21330;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82f2130c
	if (ctx.cr6.eq) goto loc_82F2130C;
loc_82F21330:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f2134c
	if (ctx.cr0.eq) goto loc_82F2134C;
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// cmplwi cr6,r6,432
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 432, ctx.xer);
	// blt cr6,0x82f21304
	if (ctx.cr6.lt) goto loc_82F21304;
loc_82F2134C:
	// cmplwi cr6,r9,18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 18, ctx.xer);
	// bne cr6,0x82f2146c
	if (!ctx.cr6.eq) goto loc_82F2146C;
loc_82F21354:
	// lwz r11,72(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f211f8
	if (ctx.cr6.eq) goto loc_82F211F8;
loc_82F21360:
	// lwz r11,72(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f215e4
	if (ctx.cr6.eq) goto loc_82F215E4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82F21370:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f21370
	if (!ctx.cr6.eq) goto loc_82F21370;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 256, ctx.xer);
	// bge cr6,0x82f211f8
	if (!ctx.cr6.lt) goto loc_82F211F8;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82cb1160
	ctx.lr = 0x82F213A4;
	sub_82CB1160(ctx, base);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// ble cr6,0x82f21404
	if (!ctx.cr6.gt) goto loc_82F21404;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -4);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82f21404
	if (!ctx.cr6.eq) goto loc_82F21404;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r11,-3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// bne cr6,0x82f21404
	if (!ctx.cr6.eq) goto loc_82F21404;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r11,-2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r11,98
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 98, ctx.xer);
	// bne cr6,0x82f21404
	if (!ctx.cr6.eq) goto loc_82F21404;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,115
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 115, ctx.xer);
	// bne cr6,0x82f21404
	if (!ctx.cr6.eq) goto loc_82F21404;
	// addi r31,r31,-3
	ctx.r31.s64 = ctx.r31.s64 + -3;
	// stb r18,-4(r10)
	PPC_STORE_U8(ctx.r10.u32 + -4, ctx.r18.u8);
loc_82F21404:
	// ld r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r9,8(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 8);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// ld r7,16(r21)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r21.u32 + 16);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// ld r30,24(r21)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r21.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,76(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 76);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r7,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r7.u64);
	// std r30,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r30.u64);
	// lwz r11,80(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 80);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2144C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f211f8
	if (!ctx.cr0.eq) goto loc_82F211F8;
	// add r26,r31,r25
	ctx.r26.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// b 0x82f215d8
	goto loc_82F215D8;
loc_82F2146C:
	// lwz r11,64(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 64);
	// mulli r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 * 12;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r22,8
	ctx.r10.s64 = ctx.r22.s64 + 8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82f211f8
	if (ctx.cr6.eq) goto loc_82F211F8;
	// mulli r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 * 24;
	// addi r11,r22,20
	ctx.r11.s64 = ctx.r22.s64 + 20;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f214cc
	if (ctx.cr6.eq) goto loc_82F214CC;
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 65535, ctx.xer);
	// bne cr6,0x82f214b8
	if (!ctx.cr6.eq) goto loc_82F214B8;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f21680
	if (ctx.cr6.eq) goto loc_82F21680;
	// lwz r30,24(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// b 0x82f214d4
	goto loc_82F214D4;
loc_82F214B8:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f214d4
	if (ctx.cr6.eq) goto loc_82F214D4;
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82f214d4
	goto loc_82F214D4;
loc_82F214CC:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82f21200
	if (!ctx.cr6.eq) goto loc_82F21200;
loc_82F214D4:
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 65535, ctx.xer);
	// bne cr6,0x82f214ec
	if (!ctx.cr6.eq) goto loc_82F214EC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f21360
	if (!ctx.cr6.eq) goto loc_82F21360;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x82f21508
	goto loc_82F21508;
loc_82F214EC:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f21500
	if (ctx.cr6.eq) goto loc_82F21500;
	// lwz r11,40(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f21508
	if (!ctx.cr6.eq) goto loc_82F21508;
loc_82F21500:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f211f8
	if (!ctx.cr6.lt) goto loc_82F211F8;
loc_82F21508:
	// addi r11,r22,4
	ctx.r11.s64 = ctx.r22.s64 + 4;
	// addi r10,r22,16
	ctx.r10.s64 = ctx.r22.s64 + 16;
	// lwzx r29,r9,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r23,r9,r10
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bne cr6,0x82f21560
	if (!ctx.cr6.eq) goto loc_82F21560;
	// clrlwi r11,r30,19
	ctx.r11.u64 = ctx.r30.u32 & 0x1FFF;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// blt cr6,0x82f21558
	if (ctx.cr6.lt) goto loc_82F21558;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x82f2153c
	if (!ctx.cr6.lt) goto loc_82F2153C;
	// li r29,11
	ctx.r29.s64 = 11;
	// b 0x82f21558
	goto loc_82F21558;
loc_82F2153C:
	// cmplwi cr6,r11,6144
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6144, ctx.xer);
	// bge cr6,0x82f2154c
	if (!ctx.cr6.lt) goto loc_82F2154C;
	// li r29,12
	ctx.r29.s64 = 12;
	// b 0x82f21558
	goto loc_82F21558;
loc_82F2154C:
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bge cr6,0x82f21558
	if (!ctx.cr6.lt) goto loc_82F21558;
	// li r29,13
	ctx.r29.s64 = 13;
loc_82F21558:
	// clrlwi r30,r11,21
	ctx.r30.u64 = ctx.r11.u32 & 0x7FF;
	// b 0x82f215d8
	goto loc_82F215D8;
loc_82F21560:
	// cmpwi cr6,r29,-3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -3, ctx.xer);
	// bne cr6,0x82f21570
	if (!ctx.cr6.eq) goto loc_82F21570;
	// li r30,62
	ctx.r30.s64 = 62;
	// b 0x82f215d4
	goto loc_82F215D4;
loc_82F21570:
	// cmpwi cr6,r29,-4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -4, ctx.xer);
	// bne cr6,0x82f21580
	if (!ctx.cr6.eq) goto loc_82F21580;
	// li r30,63
	ctx.r30.s64 = 63;
	// b 0x82f215d4
	goto loc_82F215D4;
loc_82F21580:
	// cmplwi cr6,r29,9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 9, ctx.xer);
	// bne cr6,0x82f21590
	if (!ctx.cr6.eq) goto loc_82F21590;
	// li r30,61
	ctx.r30.s64 = 61;
	// b 0x82f215d4
	goto loc_82F215D4;
loc_82F21590:
	// cmpwi cr6,r29,-6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -6, ctx.xer);
	// bne cr6,0x82f215a4
	if (!ctx.cr6.eq) goto loc_82F215A4;
	// li r29,17
	ctx.r29.s64 = 17;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x82f215d8
	goto loc_82F215D8;
loc_82F215A4:
	// cmpwi cr6,r29,-7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -7, ctx.xer);
	// bne cr6,0x82f215b8
	if (!ctx.cr6.eq) goto loc_82F215B8;
	// li r29,17
	ctx.r29.s64 = 17;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82f215d8
	goto loc_82F215D8;
loc_82F215B8:
	// cmpwi cr6,r29,-1000
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1000, ctx.xer);
	// bne cr6,0x82f215c8
	if (!ctx.cr6.eq) goto loc_82F215C8;
	// li r30,32
	ctx.r30.s64 = 32;
	// b 0x82f215d4
	goto loc_82F215D4;
loc_82F215C8:
	// cmpwi cr6,r29,-1001
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1001, ctx.xer);
	// bne cr6,0x82f215d8
	if (!ctx.cr6.eq) goto loc_82F215D8;
	// addi r30,r30,33
	ctx.r30.s64 = ctx.r30.s64 + 33;
loc_82F215D4:
	// li r29,4
	ctx.r29.s64 = 4;
loc_82F215D8:
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82f21628
	goto loc_82F21628;
loc_82F215E4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82f211f8
	if (ctx.cr6.eq) goto loc_82F211F8;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82F215F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f21618
	if (ctx.cr0.eq) goto loc_82F21618;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f215f4
	if (ctx.cr6.eq) goto loc_82F215F4;
loc_82F21618:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f211f8
	if (!ctx.cr0.eq) goto loc_82F211F8;
	// lis r20,2816
	ctx.r20.s64 = 184549376;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
loc_82F21628:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f211d8
	if (!ctx.cr6.eq) goto loc_82F211D8;
loc_82F21634:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82f16108
	ctx.lr = 0x82F2163C;
	sub_82F16108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f216dc
	if (ctx.cr0.eq) goto loc_82F216DC;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82f9ec20
	ctx.lr = 0x82F21660;
	sub_82F9EC20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f216e0
	goto loc_82F216E0;
loc_82F21668:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f2169c
	if (ctx.cr6.eq) goto loc_82F2169C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,19936
	ctx.r6.s64 = ctx.r11.s64 + 19936;
	// b 0x82f21688
	goto loc_82F21688;
loc_82F21680:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,19912
	ctx.r6.s64 = ctx.r11.s64 + 19912;
loc_82F21688:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r5,2005
	ctx.r5.s64 = 2005;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82eea308
	ctx.lr = 0x82F2169C;
	sub_82EEA308(ctx, base);
loc_82F2169C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,80
	ctx.r3.s64 = 80;
	// stw r11,52(r17)
	PPC_STORE_U32(ctx.r17.u32 + 52, ctx.r11.u32);
	// bl 0x82f16108
	ctx.lr = 0x82F216AC;
	sub_82F16108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f216d4
	if (ctx.cr0.eq) goto loc_82F216D4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82f9ec20
	ctx.lr = 0x82F216D0;
	sub_82F9EC20(ctx, base);
	// b 0x82f21768
	goto loc_82F21768;
loc_82F216D4:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// b 0x82f21768
	goto loc_82F21768;
loc_82F216DC:
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_82F216E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f216f0
	if (!ctx.cr6.eq) goto loc_82F216F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f21768
	goto loc_82F21768;
loc_82F216F0:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f21700
	if (ctx.cr6.eq) goto loc_82F21700;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_82F21700:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f21764
	if (ctx.cr6.eq) goto loc_82F21764;
	// lwz r11,40(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r18,40(r19)
	PPC_STORE_U32(ctx.r19.u32 + 40, ctx.r18.u32);
	// beq cr6,0x82f21730
	if (ctx.cr6.eq) goto loc_82F21730;
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82f21764
	goto loc_82F21764;
loc_82F21730:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f21764
	if (!ctx.cr6.eq) goto loc_82F21764;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f21764
	if (ctx.cr6.eq) goto loc_82F21764;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x82f21764
	if (ctx.cr6.eq) goto loc_82F21764;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r4,r11,2448
	ctx.r4.s64 = ctx.r11.s64 + 2448;
	// bl 0x82f1e940
	ctx.lr = 0x82F21764;
	sub_82F1E940(ctx, base);
loc_82F21764:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F21768:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F21770"))) PPC_WEAK_FUNC(sub_82F21770);
PPC_FUNC_IMPL(__imp__sub_82F21770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82F21778;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82f217a0
	if (ctx.cr6.eq) goto loc_82F217A0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82F217A0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82f21bc0
	if (!ctx.cr6.eq) goto loc_82F21BC0;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82f21bc0
	if (!ctx.cr6.eq) goto loc_82F21BC0;
	// lwz r30,56(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r30,-27
	ctx.r11.s64 = ctx.r30.s64 + -27;
	// addi r10,r30,-35
	ctx.r10.s64 = ctx.r30.s64 + -35;
	// subfic r11,r11,7
	ctx.xer.ca = ctx.r11.u32 <= 7;
	ctx.r11.s64 = 7 - ctx.r11.s64;
	// addi r9,r7,-20
	ctx.r9.s64 = ctx.r7.s64 + -20;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r10.s64;
	// addi r8,r7,-24
	ctx.r8.s64 = ctx.r7.s64 + -24;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r9,3
	ctx.xer.ca = ctx.r9.u32 <= 3;
	ctx.r9.s64 = 3 - ctx.r9.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r8,r8,3
	ctx.xer.ca = ctx.r8.u32 <= 3;
	ctx.r8.s64 = 3 - ctx.r8.s64;
	// clrlwi. r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// bne 0x82f21820
	if (!ctx.cr0.eq) goto loc_82F21820;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82f21824
	if (ctx.cr0.eq) goto loc_82F21824;
loc_82F21820:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F21824:
	// clrlwi. r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// bne 0x82f2183c
	if (!ctx.cr0.eq) goto loc_82F2183C;
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82f21840
	if (ctx.cr0.eq) goto loc_82F21840;
loc_82F2183C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F21840:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f2185c
	if (ctx.cr0.eq) goto loc_82F2185C;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2185c
	if (ctx.cr0.eq) goto loc_82F2185C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,3472
	ctx.r4.s64 = ctx.r11.s64 + 3472;
	// b 0x82f21bc8
	goto loc_82F21BC8;
loc_82F2185C:
	// cmplwi cr6,r30,23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 23, ctx.xer);
	// beq cr6,0x82f21880
	if (ctx.cr6.eq) goto loc_82F21880;
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 24, ctx.xer);
	// beq cr6,0x82f21880
	if (ctx.cr6.eq) goto loc_82F21880;
	// cmplwi cr6,r30,252
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 252, ctx.xer);
	// beq cr6,0x82f21880
	if (ctx.cr6.eq) goto loc_82F21880;
	// cmplwi cr6,r30,253
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 253, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82f21884
	if (!ctx.cr6.eq) goto loc_82F21884;
loc_82F21880:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F21884:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 29, ctx.xer);
	// beq cr6,0x82f2189c
	if (ctx.cr6.eq) goto loc_82F2189C;
	// cmplwi cr6,r7,244
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 244, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82f218a0
	if (!ctx.cr6.eq) goto loc_82F218A0;
loc_82F2189C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F218A0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f218bc
	if (ctx.cr0.eq) goto loc_82F218BC;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f218bc
	if (ctx.cr0.eq) goto loc_82F218BC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,3428
	ctx.r4.s64 = ctx.r11.s64 + 3428;
	// b 0x82f21bc8
	goto loc_82F21BC8;
loc_82F218BC:
	// lwz r29,104(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f21a38
	if (ctx.cr6.eq) goto loc_82F21A38;
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f21a38
	if (ctx.cr6.eq) goto loc_82F21A38;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r30,241
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 241, ctx.xer);
	// beq cr6,0x82f21920
	if (ctx.cr6.eq) goto loc_82F21920;
	// cmplwi cr6,r30,243
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 243, ctx.xer);
	// beq cr6,0x82f21908
	if (ctx.cr6.eq) goto loc_82F21908;
	// cmplwi cr6,r30,251
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 251, ctx.xer);
	// ble cr6,0x82f218f8
	if (!ctx.cr6.gt) goto loc_82F218F8;
	// cmplwi cr6,r30,253
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 253, ctx.xer);
	// ble cr6,0x82f21908
	if (!ctx.cr6.gt) goto loc_82F21908;
loc_82F218F8:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r11,r11,20712
	ctx.r11.s64 = ctx.r11.s64 + 20712;
	// lbzx r6,r30,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// b 0x82f2190c
	goto loc_82F2190C;
loc_82F21908:
	// li r6,2
	ctx.r6.s64 = 2;
loc_82F2190C:
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bne cr6,0x82f21920
	if (!ctx.cr6.eq) goto loc_82F21920;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,3320
	ctx.r5.s64 = ctx.r11.s64 + 3320;
	// b 0x82f21928
	goto loc_82F21928;
loc_82F21920:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,3216
	ctx.r5.s64 = ctx.r11.s64 + 3216;
loc_82F21928:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f2194c
	if (ctx.cr6.eq) goto loc_82F2194C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,3188
	ctx.r4.s64 = ctx.r11.s64 + 3188;
loc_82F21940:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F21948;
	sub_82F1E940(ctx, base);
	// b 0x82f21bd0
	goto loc_82F21BD0;
loc_82F2194C:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f21968
	if (ctx.cr6.eq) goto loc_82F21968;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,3156
	ctx.r4.s64 = ctx.r11.s64 + 3156;
	// b 0x82f21940
	goto loc_82F21940;
loc_82F21968:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f21984
	if (ctx.cr6.eq) goto loc_82F21984;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,3120
	ctx.r4.s64 = ctx.r11.s64 + 3120;
	// b 0x82f21940
	goto loc_82F21940;
loc_82F21984:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// xor. r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f21a2c
	if (!ctx.cr0.eq) goto loc_82F21A2C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f219c4
	if (ctx.cr6.eq) goto loc_82F219C4;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f21a2c
	if (!ctx.cr6.eq) goto loc_82F21A2C;
loc_82F219C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 11, ctx.xer);
	// blt cr6,0x82f219dc
	if (ctx.cr6.lt) goto loc_82F219DC;
	// cmplwi cr6,r7,14
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 14, ctx.xer);
	// bgt cr6,0x82f219dc
	if (ctx.cr6.gt) goto loc_82F219DC;
	// li r11,5
	ctx.r11.s64 = 5;
loc_82F219DC:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,3108
	ctx.r10.s64 = ctx.r10.s64 + 3108;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82f1cad0
	ctx.lr = 0x82F219F8;
	sub_82F1CAD0(ctx, base);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// and r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 & ctx.r5.u64;
	// and r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f21a18
	if (ctx.cr6.eq) goto loc_82F21A18;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,3008
	ctx.r4.s64 = ctx.r11.s64 + 3008;
	// b 0x82f21bc8
	goto loc_82F21BC8;
loc_82F21A18:
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bne cr6,0x82f21a38
	if (!ctx.cr6.eq) goto loc_82F21A38;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,2904
	ctx.r4.s64 = ctx.r11.s64 + 2904;
	// b 0x82f21bc8
	goto loc_82F21BC8;
loc_82F21A2C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,2852
	ctx.r4.s64 = ctx.r11.s64 + 2852;
	// b 0x82f21940
	goto loc_82F21940;
loc_82F21A38:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f21a64
	if (ctx.cr6.eq) goto loc_82F21A64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f21a5c
	if (!ctx.cr6.eq) goto loc_82F21A5C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x82f21a68
	goto loc_82F21A68;
loc_82F21A5C:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82f21a68
	goto loc_82F21A68;
loc_82F21A64:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82F21A68:
	// lwz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f21a90
	if (ctx.cr6.eq) goto loc_82F21A90;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f21a88
	if (!ctx.cr6.eq) goto loc_82F21A88;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82f21a94
	goto loc_82F21A94;
loc_82F21A88:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82f21a94
	goto loc_82F21A94;
loc_82F21A90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F21A94:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f21aa8
	if (ctx.cr6.eq) goto loc_82F21AA8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,2792
	ctx.r4.s64 = ctx.r11.s64 + 2792;
	// b 0x82f21bc8
	goto loc_82F21BC8;
loc_82F21AA8:
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r8,88(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f21ac8
	if (ctx.cr6.eq) goto loc_82F21AC8;
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82f21acc
	if (!ctx.cr6.eq) goto loc_82F21ACC;
loc_82F21AC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F21ACC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f21ae8
	if (ctx.cr6.eq) goto loc_82F21AE8;
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f21aec
	if (ctx.cr6.eq) goto loc_82F21AEC;
loc_82F21AE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F21AEC:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f21b08
	if (ctx.cr6.eq) goto loc_82F21B08;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82f21b0c
	if (!ctx.cr6.eq) goto loc_82F21B0C;
loc_82F21B08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F21B0C:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f21b28
	if (ctx.cr6.eq) goto loc_82F21B28;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f21b2c
	if (ctx.cr6.eq) goto loc_82F21B2C;
loc_82F21B28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F21B2C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82f21b5c
	if (ctx.cr0.eq) goto loc_82F21B5C;
	// clrlwi. r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82f21b5c
	if (ctx.cr0.eq) goto loc_82F21B5C;
	// lwz r7,24(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82f21b5c
	if (ctx.cr6.eq) goto loc_82F21B5C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,2720
	ctx.r4.s64 = ctx.r11.s64 + 2720;
	// b 0x82f21bc8
	goto loc_82F21BC8;
loc_82F21B5C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f21b6c
	if (ctx.cr6.eq) goto loc_82F21B6C;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f21b7c
	if (!ctx.cr0.eq) goto loc_82F21B7C;
loc_82F21B6C:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f21b88
	if (ctx.cr0.eq) goto loc_82F21B88;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f21b88
	if (ctx.cr0.eq) goto loc_82F21B88;
loc_82F21B7C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,2592
	ctx.r4.s64 = ctx.r11.s64 + 2592;
	// b 0x82f21bc8
	goto loc_82F21BC8;
loc_82F21B88:
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bne cr6,0x82f21bac
	if (!ctx.cr6.eq) goto loc_82F21BAC;
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_82F21BAC:
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// b 0x82f21bd0
	goto loc_82F21BD0;
loc_82F21BC0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,2520
	ctx.r4.s64 = ctx.r11.s64 + 2520;
loc_82F21BC8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F21BD0;
	sub_82F1E940(ctx, base);
loc_82F21BD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F21BDC"))) PPC_WEAK_FUNC(sub_82F21BDC);
PPC_FUNC_IMPL(__imp__sub_82F21BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F21BE0"))) PPC_WEAK_FUNC(sub_82F21BE0);
PPC_FUNC_IMPL(__imp__sub_82F21BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82F21BE8;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 112);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r25,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r25.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stb r25,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r25.u8);
	// stb r25,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r25.u8);
	// beq cr6,0x82f21ffc
	if (ctx.cr6.eq) goto loc_82F21FFC;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// lis r31,-32253
	ctx.r31.s64 = -2113732608;
	// lis r30,-32253
	ctx.r30.s64 = -2113732608;
	// lis r29,-32253
	ctx.r29.s64 = -2113732608;
	// lis r28,-32253
	ctx.r28.s64 = -2113732608;
	// lis r27,-32253
	ctx.r27.s64 = -2113732608;
	// lis r26,-32253
	ctx.r26.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r21,r6,4076
	ctx.r21.s64 = ctx.r6.s64 + 4076;
	// addi r22,r5,4032
	ctx.r22.s64 = ctx.r5.s64 + 4032;
	// addi r23,r4,3984
	ctx.r23.s64 = ctx.r4.s64 + 3984;
	// addi r15,r3,3976
	ctx.r15.s64 = ctx.r3.s64 + 3976;
	// addi r14,r31,3968
	ctx.r14.s64 = ctx.r31.s64 + 3968;
	// addi r30,r30,3888
	ctx.r30.s64 = ctx.r30.s64 + 3888;
	// addi r29,r29,3864
	ctx.r29.s64 = ctx.r29.s64 + 3864;
	// addi r28,r28,3812
	ctx.r28.s64 = ctx.r28.s64 + 3812;
	// addi r27,r27,3760
	ctx.r27.s64 = ctx.r27.s64 + 3760;
	// addi r26,r26,3744
	ctx.r26.s64 = ctx.r26.s64 + 3744;
	// addi r20,r7,3708
	ctx.r20.s64 = ctx.r7.s64 + 3708;
	// addi r19,r8,3700
	ctx.r19.s64 = ctx.r8.s64 + 3700;
	// addi r18,r9,3692
	ctx.r18.s64 = ctx.r9.s64 + 3692;
	// addi r17,r10,3676
	ctx.r17.s64 = ctx.r10.s64 + 3676;
	// addi r16,r11,21620
	ctx.r16.s64 = ctx.r11.s64 + 21620;
loc_82F21C98:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r3,r8,16
	ctx.r3.s64 = ctx.r8.s64 + 16;
	// lwz r31,24(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// bne cr6,0x82f21cc4
	if (!ctx.cr6.eq) goto loc_82F21CC4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F21CC4:
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F21CCC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f21cf0
	if (ctx.cr0.eq) goto loc_82F21CF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f21ccc
	if (ctx.cr6.eq) goto loc_82F21CCC;
loc_82F21CF0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f21d34
	if (!ctx.cr0.eq) goto loc_82F21D34;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,64(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82f21d18
	if (!ctx.cr6.eq) goto loc_82F21D18;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
loc_82F21D18:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f21d24
	if (ctx.cr6.eq) goto loc_82F21D24;
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
loc_82F21D24:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r9,r10,9,21,22
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 9) & 0x600) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF9FF);
	// b 0x82f21df4
	goto loc_82F21DF4;
loc_82F21D34:
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F21D3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f21d60
	if (ctx.cr0.eq) goto loc_82F21D60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f21d3c
	if (ctx.cr6.eq) goto loc_82F21D3C;
loc_82F21D60:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f21d88
	if (!ctx.cr0.eq) goto loc_82F21D88;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,64(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82f21ddc
	if (!ctx.cr6.eq) goto loc_82F21DDC;
	// b 0x82f21dd8
	goto loc_82F21DD8;
loc_82F21D88:
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F21D90:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f21db4
	if (ctx.cr0.eq) goto loc_82F21DB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f21d90
	if (ctx.cr6.eq) goto loc_82F21D90;
loc_82F21DB4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f21dfc
	if (!ctx.cr0.eq) goto loc_82F21DFC;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,64(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82f21ddc
	if (ctx.cr6.eq) goto loc_82F21DDC;
loc_82F21DD8:
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
loc_82F21DDC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f21de8
	if (ctx.cr6.eq) goto loc_82F21DE8;
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
loc_82F21DE8:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r9,r10,10,21,22
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x600) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF9FF);
loc_82F21DF4:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82f21f20
	goto loc_82F21F20;
loc_82F21DFC:
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F21E04:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f21e28
	if (ctx.cr0.eq) goto loc_82F21E28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f21e04
	if (ctx.cr6.eq) goto loc_82F21E04;
loc_82F21E28:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f21e88
	if (!ctx.cr0.eq) goto loc_82F21E88;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82f1d1d0
	ctx.lr = 0x82F21E40;
	sub_82F1D1D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f21e58
	if (!ctx.cr0.lt) goto loc_82F21E58;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_82F21E4C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F21E54;
	sub_82F1E940(ctx, base);
	// b 0x82f21f1c
	goto loc_82F21F1C;
loc_82F21E58:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// rlwimi r8,r9,0,29,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF8);
	// ori r10,r7,1536
	ctx.r10.u64 = ctx.r7.u64 | 1536;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82f21f20
	goto loc_82F21F20;
loc_82F21E88:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F21E90:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f21eb4
	if (ctx.cr0.eq) goto loc_82F21EB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f21e90
	if (ctx.cr6.eq) goto loc_82F21E90;
loc_82F21EB4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f21f0c
	if (!ctx.cr0.eq) goto loc_82F21F0C;
	// lbz r11,114(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f21ed0
	if (ctx.cr0.eq) goto loc_82F21ED0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x82f21e4c
	goto loc_82F21E4C;
loc_82F21ED0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stb r10,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r10.u8);
	// bl 0x82f1d2b8
	ctx.lr = 0x82F21EE8;
	sub_82F1D2B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f21f04
	if (ctx.cr0.lt) goto loc_82F21F04;
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r9,r10,8,23,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x100) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFEFF);
	// b 0x82f21df4
	goto loc_82F21DF4;
loc_82F21F04:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82f21e4c
	goto loc_82F21E4C;
loc_82F21F0C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F21F1C;
	sub_82F1E940(ctx, base);
loc_82F21F1C:
	// li r25,1
	ctx.r25.s64 = 1;
loc_82F21F20:
	// lbz r11,115(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f21f5c
	if (ctx.cr0.eq) goto loc_82F21F5C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f21f54
	if (!ctx.cr6.eq) goto loc_82F21F54;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f21f54
	if (!ctx.cr0.eq) goto loc_82F21F54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F21F50;
	sub_82F1E940(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
loc_82F21F54:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r11.u8);
loc_82F21F5C:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f21f98
	if (ctx.cr0.eq) goto loc_82F21F98;
	// lwz r11,64(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 64);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82f21f7c
	if (ctx.cr6.eq) goto loc_82F21F7C;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
loc_82F21F7C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F21F8C;
	sub_82F1E940(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
loc_82F21F98:
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f21fc0
	if (ctx.cr0.eq) goto loc_82F21FC0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F21FB4;
	sub_82F1E940(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
loc_82F21FC0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82f21fe4
	if (!ctx.cr6.gt) goto loc_82F21FE4;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f21fe4
	if (!ctx.cr0.eq) goto loc_82F21FE4;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F21FE0;
	sub_82F1E940(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
loc_82F21FE4:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f21c98
	if (!ctx.cr6.eq) goto loc_82F21C98;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f22038
	if (!ctx.cr6.eq) goto loc_82F22038;
loc_82F21FFC:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f22038
	if (!ctx.cr0.eq) goto loc_82F22038;
	// lwz r11,64(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f2201c
	if (!ctx.cr6.eq) goto loc_82F2201C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,3656
	ctx.r5.s64 = ctx.r11.s64 + 3656;
	// b 0x82f22024
	goto loc_82F22024;
loc_82F2201C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,3620
	ctx.r5.s64 = ctx.r11.s64 + 3620;
loc_82F22024:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,3564
	ctx.r4.s64 = ctx.r11.s64 + 3564;
	// bl 0x82f1e940
	ctx.lr = 0x82F22034;
	sub_82F1E940(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
loc_82F22038:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2204c
	if (ctx.cr0.eq) goto loc_82F2204C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f22050
	goto loc_82F22050;
loc_82F2204C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F22050:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F22058"))) PPC_WEAK_FUNC(sub_82F22058);
PPC_FUNC_IMPL(__imp__sub_82F22058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F22060;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f22080
	if (!ctx.cr6.eq) goto loc_82F22080;
loc_82F22078:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f22130
	goto loc_82F22130;
loc_82F22080:
	// lwz r31,112(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f22120
	if (ctx.cr6.eq) goto loc_82F22120;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,4116
	ctx.r29.s64 = ctx.r11.s64 + 4116;
loc_82F2209C:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82F220B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq 0x82f220d8
	if (ctx.cr0.eq) goto loc_82F220D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f220b4
	if (ctx.cr6.eq) goto loc_82F220B4;
loc_82F220D8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f220fc
	if (!ctx.cr0.eq) goto loc_82F220FC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82f22138
	if (!ctx.cr6.eq) goto loc_82F22138;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f22150
	if (ctx.cr6.eq) goto loc_82F22150;
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
	// b 0x82f22118
	goto loc_82F22118;
loc_82F220FC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82f22118
	if (ctx.cr6.eq) goto loc_82F22118;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F22114;
	sub_82F1E940(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_82F22118:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f2209c
	if (!ctx.cr6.eq) goto loc_82F2209C;
loc_82F22120:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x82f22130
	if (!ctx.cr0.eq) goto loc_82F22130;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82F22130:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
loc_82F22138:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
loc_82F22140:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F2214C;
	sub_82F1E940(ctx, base);
	// b 0x82f22078
	goto loc_82F22078;
loc_82F22150:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,456
	ctx.r4.s64 = ctx.r11.s64 + 456;
	// b 0x82f22140
	goto loc_82F22140;
}

__attribute__((alias("__imp__sub_82F2215C"))) PPC_WEAK_FUNC(sub_82F2215C);
PPC_FUNC_IMPL(__imp__sub_82F2215C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F22160"))) PPC_WEAK_FUNC(sub_82F22160);
PPC_FUNC_IMPL(__imp__sub_82F22160) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,4156
	ctx.r5.s64 = ctx.r11.s64 + 4156;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82f22058
	ctx.lr = 0x82F22184;
	sub_82F22058(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f221a4
	if (ctx.cr0.eq) goto loc_82F221A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x82f1d2b8
	ctx.lr = 0x82F22198;
	sub_82F1D2B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f221a4
	if (ctx.cr0.lt) goto loc_82F221A4;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82F221A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82F221BC"))) PPC_WEAK_FUNC(sub_82F221BC);
PPC_FUNC_IMPL(__imp__sub_82F221BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F221C0"))) PPC_WEAK_FUNC(sub_82F221C0);
PPC_FUNC_IMPL(__imp__sub_82F221C0) {
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
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82f221f4
	if (!ctx.cr6.gt) goto loc_82F221F4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,4168
	ctx.r4.s64 = ctx.r11.s64 + 4168;
	// bl 0x82f1e940
	ctx.lr = 0x82F221EC;
	sub_82F1E940(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
loc_82F221F4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F22208"))) PPC_WEAK_FUNC(sub_82F22208);
PPC_FUNC_IMPL(__imp__sub_82F22208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F22210;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,36(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F2223C:
	// srw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r28,r7,r28
	ctx.r28.u64 = ctx.r7.u64 | ctx.r28.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x82f2223c
	if (ctx.cr6.lt) goto loc_82F2223C;
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f2228c
	if (ctx.cr6.eq) goto loc_82F2228C;
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f222b8
	if (ctx.cr6.eq) goto loc_82F222B8;
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f22290
	if (!ctx.cr6.eq) goto loc_82F22290;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82F2228C:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82F22290:
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f222cc
	if (ctx.cr6.eq) goto loc_82F222CC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82f222c0
	if (ctx.cr6.eq) goto loc_82F222C0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r26,1
	ctx.r5.s64 = ctx.r26.s64 + 1;
	// addi r4,r11,4296
	ctx.r4.s64 = ctx.r11.s64 + 4296;
	// bl 0x82f1e940
	ctx.lr = 0x82F222B4;
	sub_82F1E940(ctx, base);
	// b 0x82f22300
	goto loc_82F22300;
loc_82F222B8:
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x82f22290
	goto loc_82F22290;
loc_82F222C0:
	// lbz r30,27(r6)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r6.u32 + 27);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82f22300
	goto loc_82F22300;
loc_82F222CC:
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// clrlwi r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	// beq cr6,0x82f222e4
	if (ctx.cr6.eq) goto loc_82F222E4;
	// ori r30,r30,128
	ctx.r30.u64 = ctx.r30.u64 | 128;
loc_82F222E4:
	// lwz r11,40(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f22300
	if (ctx.cr6.eq) goto loc_82F22300;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x82f22300
	if (!ctx.cr6.eq) goto loc_82F22300;
	// ori r30,r30,64
	ctx.r30.u64 = ctx.r30.u64 | 64;
loc_82F22300:
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x82f22354
	if (ctx.cr6.lt) goto loc_82F22354;
	// beq cr6,0x82f22330
	if (ctx.cr6.eq) goto loc_82F22330;
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bge cr6,0x82f22374
	if (!ctx.cr6.lt) goto loc_82F22374;
	// stb r28,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r28.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r30,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r30.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r11,r29,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// rlwimi r10,r27,24,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r27.u32, 24) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// b 0x82f22348
	goto loc_82F22348;
loc_82F22330:
	// stb r30,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r30.u8);
	// stb r28,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r28.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r29,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// rlwimi r10,r27,25,6,6
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r27.u32, 25) & 0x2000000) | (ctx.r10.u64 & 0xFFFFFFFFFDFFFFFF);
loc_82F22348:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82f22374
	goto loc_82F22374;
loc_82F22354:
	// stb r28,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r28.u8);
	// stb r30,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r30.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r10,r29,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwimi r11,r27,26,5,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 26) & 0x4000000) | (ctx.r11.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82F22374:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2237C"))) PPC_WEAK_FUNC(sub_82F2237C);
PPC_FUNC_IMPL(__imp__sub_82F2237C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F22380"))) PPC_WEAK_FUNC(sub_82F22380);
PPC_FUNC_IMPL(__imp__sub_82F22380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82F22388;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// std r25,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r25.u64);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r29,r5,68
	ctx.r29.s64 = ctx.r5.s64 + 68;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r27,r11,5100
	ctx.r27.s64 = ctx.r11.s64 + 5100;
loc_82F223B8:
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f224d8
	if (ctx.cr6.eq) goto loc_82F224D8;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f2241c
	if (ctx.cr6.eq) goto loc_82F2241C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82f22598
	if (ctx.cr6.eq) goto loc_82F22598;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82f22400
	if (ctx.cr6.eq) goto loc_82F22400;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82f22400
	if (ctx.cr6.eq) goto loc_82F22400;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82f22400
	if (ctx.cr6.eq) goto loc_82F22400;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F223FC;
	sub_82F1E940(ctx, base);
	// b 0x82f2242c
	goto loc_82F2242C;
loc_82F22400:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// clrlwi r11,r11,7
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFF;
	// rlwimi r10,r9,25,1,6
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 25) & 0x7E000000) | (ctx.r10.u64 & 0xFFFFFFFF81FFFFFF);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x82f22428
	goto loc_82F22428;
loc_82F2241C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwimi r11,r10,25,1,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0x7E000000) | (ctx.r11.u64 & 0xFFFFFFFF81FFFFFF);
loc_82F22428:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F2242C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x82f1c800
	ctx.lr = 0x82F22438;
	sub_82F1C800(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f225ac
	if (ctx.cr6.eq) goto loc_82F225AC;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_82F2244C:
	// srw r11,r3,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82f22474
	if (ctx.cr6.lt) goto loc_82F22474;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82f22584
	if (ctx.cr6.lt) goto loc_82F22584;
	// beq cr6,0x82f2255c
	if (ctx.cr6.eq) goto loc_82F2255C;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x82f22548
	if (ctx.cr6.lt) goto loc_82F22548;
	// bne cr6,0x82f2248c
	if (!ctx.cr6.eq) goto loc_82F2248C;
loc_82F22474:
	// slw r11,r25,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r10.u8 & 0x3F));
loc_82F22478:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwimi r11,r7,0,15,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFFFFE01FFFF) | (ctx.r11.u64 & 0x1FE0000);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F2248C:
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// blt cr6,0x82f2244c
	if (ctx.cr6.lt) goto loc_82F2244C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwimi r11,r9,28,15,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82f224d8
	if (ctx.cr6.eq) goto loc_82F224D8;
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f225fc
	if (!ctx.cr0.eq) goto loc_82F225FC;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x82f22608
	if (!ctx.cr6.eq) goto loc_82F22608;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F224D8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x82f223b8
	if (ctx.cr6.lt) goto loc_82F223B8;
loc_82F224EC:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82F224FC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82f22514
	if (!ctx.cr0.eq) goto loc_82F22514;
	// rlwinm. r7,r7,0,7,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1FE0000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// bne 0x82f22518
	if (!ctx.cr0.eq) goto loc_82F22518;
loc_82F22514:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
loc_82F22518:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82f224fc
	if (!ctx.cr0.eq) goto loc_82F224FC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f22614
	if (ctx.cr6.eq) goto loc_82F22614;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f22614
	if (ctx.cr6.eq) goto loc_82F22614;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,5040
	ctx.r4.s64 = ctx.r11.s64 + 5040;
	// b 0x82f225a0
	goto loc_82F225A0;
loc_82F22548:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r7,r11,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82f225c0
	if (ctx.cr0.eq) goto loc_82F225C0;
	// li r7,3
	ctx.r7.s64 = 3;
	// b 0x82f2256c
	goto loc_82F2256C;
loc_82F2255C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r7,r11,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82f225cc
	if (ctx.cr0.eq) goto loc_82F225CC;
	// li r7,2
	ctx.r7.s64 = 2;
loc_82F2256C:
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r7,17,0,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0xFFFE0000;
	// or r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwimi r7,r11,0,15,6
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFFFE01FFFF) | (ctx.r7.u64 & 0x1FE0000);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// b 0x82f2248c
	goto loc_82F2248C;
loc_82F22584:
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82f225d8
	if (!ctx.cr6.eq) goto loc_82F225D8;
	// slw r11,r23,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x82f22478
	goto loc_82F22478;
loc_82F22598:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,5008
	ctx.r4.s64 = ctx.r11.s64 + 5008;
loc_82F225A0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F225A8;
	sub_82F1E940(ctx, base);
	// b 0x82f22898
	goto loc_82F22898;
loc_82F225AC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,4968
	ctx.r4.s64 = ctx.r11.s64 + 4968;
	// bl 0x82f1e940
	ctx.lr = 0x82F225BC;
	sub_82F1E940(ctx, base);
	// b 0x82f224ec
	goto loc_82F224EC;
loc_82F225C0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,4896
	ctx.r4.s64 = ctx.r11.s64 + 4896;
	// b 0x82f225a0
	goto loc_82F225A0;
loc_82F225CC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,4824
	ctx.r4.s64 = ctx.r11.s64 + 4824;
	// b 0x82f225a0
	goto loc_82F225A0;
loc_82F225D8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,-10024
	ctx.r11.s64 = ctx.r11.s64 + -10024;
	// addi r4,r10,4792
	ctx.r4.s64 = ctx.r10.s64 + 4792;
	// lbzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
loc_82F225EC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82f1e940
	ctx.lr = 0x82F225F8;
	sub_82F1E940(ctx, base);
	// b 0x82f22898
	goto loc_82F22898;
loc_82F225FC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,4720
	ctx.r4.s64 = ctx.r11.s64 + 4720;
	// b 0x82f225a0
	goto loc_82F225A0;
loc_82F22608:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,4640
	ctx.r4.s64 = ctx.r11.s64 + 4640;
	// b 0x82f225a0
	goto loc_82F225A0;
loc_82F22614:
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm. r11,r28,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f22630
	if (!ctx.cr0.eq) goto loc_82F22630;
	// rlwinm. r11,r29,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq 0x82f22634
	if (ctx.cr0.eq) goto loc_82F22634;
loc_82F22630:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82F22634:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwimi r10,r11,15,16,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 15) & 0x8000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// beq 0x82f227d8
	if (ctx.cr0.eq) goto loc_82F227D8;
	// rlwinm. r31,r28,15,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 15) & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwinm r11,r28,7,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0x3F;
	// bne 0x82f22658
	if (!ctx.cr0.eq) goto loc_82F22658;
	// rlwinm r11,r29,7,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0x3F;
loc_82F22658:
	// rlwinm r10,r29,7,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0x3F;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f22678
	if (ctx.cr6.eq) goto loc_82F22678;
	// rlwinm. r10,r29,0,7,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x1FE0000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f22678
	if (ctx.cr0.eq) goto loc_82F22678;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,4576
	ctx.r4.s64 = ctx.r11.s64 + 4576;
	// b 0x82f225a0
	goto loc_82F225A0;
loc_82F22678:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// rlwimi r10,r11,0,26,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC0);
	// rlwinm r3,r29,15,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 15) & 0xFF;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
loc_82F226A0:
	// srw r11,r31,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// srw r10,r3,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82f226c0
	if (!ctx.cr6.eq) goto loc_82F226C0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82f227b4
	if (ctx.cr6.eq) goto loc_82F227B4;
loc_82F226C0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f226d8
	if (ctx.cr6.eq) goto loc_82F226D8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82f226d8
	if (ctx.cr6.lt) goto loc_82F226D8;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x82f227cc
	if (!ctx.cr6.lt) goto loc_82F227CC;
loc_82F226D8:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f226f4
	if (!ctx.cr6.eq) goto loc_82F226F4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82f226f4
	if (!ctx.cr6.eq) goto loc_82F226F4;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82F226F4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x82f22740
	if (ctx.cr6.lt) goto loc_82F22740;
	// beq cr6,0x82f22734
	if (ctx.cr6.eq) goto loc_82F22734;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x82f2272c
	if (ctx.cr6.lt) goto loc_82F2272C;
	// beq cr6,0x82f22724
	if (ctx.cr6.eq) goto loc_82F22724;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bge cr6,0x82f2274c
	if (!ctx.cr6.lt) goto loc_82F2274C;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82f22748
	goto loc_82F22748;
loc_82F22724:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82f22738
	goto loc_82F22738;
loc_82F2272C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x82f22744
	goto loc_82F22744;
loc_82F22734:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82F22738:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// b 0x82f2274c
	goto loc_82F2274C;
loc_82F22740:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82F22744:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82F22748:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82F2274C:
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// slw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// or r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 | ctx.r6.u64;
	// or r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 | ctx.r5.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x82f226a0
	if (ctx.cr6.lt) goto loc_82F226A0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwimi r6,r5,4,24,27
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0xF0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF0F);
	// clrlwi. r31,r4,24
	ctx.r31.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwimi r11,r6,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// beq 0x82f2279c
	if (ctx.cr0.eq) goto loc_82F2279C;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2279c
	if (ctx.cr0.eq) goto loc_82F2279C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,4528
	ctx.r4.s64 = ctx.r11.s64 + 4528;
	// bl 0x82f1e940
	ctx.lr = 0x82F2279C;
	sub_82F1E940(ctx, base);
loc_82F2279C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f22888
	if (ctx.cr6.eq) goto loc_82F22888;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x82f22888
	goto loc_82F22888;
loc_82F227B4:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,4456
	ctx.r4.s64 = ctx.r10.s64 + 4456;
loc_82F227BC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-10024
	ctx.r11.s64 = ctx.r11.s64 + -10024;
	// lbzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// b 0x82f225ec
	goto loc_82F225EC;
loc_82F227CC:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,4396
	ctx.r4.s64 = ctx.r10.s64 + 4396;
	// b 0x82f227bc
	goto loc_82F227BC;
loc_82F227D8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82F227DC:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r6,r11,15,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// rlwinm r7,r11,15,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
loc_82F227FC:
	// srw r4,r7,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x82f22814
	if (!ctx.cr6.eq) goto loc_82F22814;
	// slw r4,r23,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r8.u8 & 0x3F));
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
loc_82F22814:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x82f227fc
	if (ctx.cr6.lt) goto loc_82F227FC;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82f22854
	if (!ctx.cr6.eq) goto loc_82F22854;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwinm r10,r10,16,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF0000;
	// rlwimi r11,r28,16,17,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0x7E00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF81FF);
	// rlwinm r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r11,r11,23,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// rlwinm r9,r9,0,16,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x82f22878
	goto loc_82F22878;
loc_82F22854:
	// rlwinm r10,r10,20,8,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF00000;
	// rlwinm r11,r11,31,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x4000;
	// rlwimi r9,r6,0,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// rlwinm r10,r10,0,18,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82F22878:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// blt cr6,0x82f227dc
	if (ctx.cr6.lt) goto loc_82F227DC;
loc_82F22888:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwimi r28,r29,1,14,14
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r29.u32, 1) & 0x20000) | (ctx.r28.u64 & 0xFFFFFFFFFFFDFFFF);
	// rlwimi r11,r28,8,6,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0x3000000) | (ctx.r11.u64 & 0xFFFFFFFFFCFFFFFF);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82F22898:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F228A0"))) PPC_WEAK_FUNC(sub_82F228A0);
PPC_FUNC_IMPL(__imp__sub_82F228A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82F228A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,20(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r28,3072
	ctx.r28.s64 = 201326592;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f228d4
	if (ctx.cr6.eq) goto loc_82F228D4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82f228ec
	if (!ctx.cr6.eq) goto loc_82F228EC;
loc_82F228D4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,5208
	ctx.r4.s64 = ctx.r11.s64 + 5208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F228E8;
	sub_82F1E940(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F228EC:
	// lis r11,2816
	ctx.r11.s64 = 184549376;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f22900
	if (ctx.cr6.eq) goto loc_82F22900;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82f22918
	if (!ctx.cr6.eq) goto loc_82F22918;
loc_82F22900:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,5136
	ctx.r4.s64 = ctx.r11.s64 + 5136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F22914;
	sub_82F1E940(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F22918:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F22920"))) PPC_WEAK_FUNC(sub_82F22920);
PPC_FUNC_IMPL(__imp__sub_82F22920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82F22928;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r29,4(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r24,8(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// beq cr6,0x82f22984
	if (ctx.cr6.eq) goto loc_82F22984;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// beq cr6,0x82f2296c
	if (ctx.cr6.eq) goto loc_82F2296C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F2296C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// oris r29,r29,32768
	ctx.r29.u64 = ctx.r29.u64 | 2147483648;
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82f22980
	if (ctx.cr6.gt) goto loc_82F22980;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F22980:
	// rlwimi r24,r11,31,0,0
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x80000000) | (ctx.r24.u64 & 0xFFFFFFFF7FFFFFFF);
loc_82F22984:
	// clrlwi r11,r31,27
	ctx.r11.u64 = ctx.r31.u32 & 0x1F;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x82f22a48
	if (ctx.cr6.gt) goto loc_82F22A48;
	// lwz r30,84(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r5,r11,5832
	ctx.r5.s64 = ctx.r11.s64 + 5832;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f228a0
	ctx.lr = 0x82F229A8;
	sub_82F228A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f22b78
	if (!ctx.cr0.eq) goto loc_82F22B78;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f229d0
	if (ctx.cr6.eq) goto loc_82F229D0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,5772
	ctx.r4.s64 = ctx.r11.s64 + 5772;
loc_82F229C4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F229CC;
	sub_82F1E940(ctx, base);
	// b 0x82f22b78
	goto loc_82F22B78;
loc_82F229D0:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwimi r31,r10,12,14,19
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x3F000) | (ctx.r31.u64 & 0xFFFFFFFFFFFC0FFF);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f22a00
	if (ctx.cr6.eq) goto loc_82F22A00;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x82f229fc
	if (ctx.cr6.eq) goto loc_82F229FC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,5680
	ctx.r4.s64 = ctx.r11.s64 + 5680;
	// b 0x82f229c4
	goto loc_82F229C4;
loc_82F229FC:
	// oris r31,r31,4
	ctx.r31.u64 = ctx.r31.u64 | 262144;
loc_82F22A00:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// rlwinm r9,r29,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFF000;
	// addi r10,r10,5644
	ctx.r10.s64 = ctx.r10.s64 + 5644;
	// rlwinm r8,r11,25,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1C;
	// rlwinm r7,r11,28,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1C;
	// rlwinm r6,r11,31,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1C;
	// rlwinm r11,r11,2,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r6,r6,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// rlwimi r7,r8,3,26,28
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 3) & 0x38) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFC7);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r10,r7,26
	ctx.r10.u64 = ctx.r7.u32 & 0x3F;
	// rlwimi r6,r10,3,0,28
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0xFFFFFFF8) | (ctx.r6.u64 & 0xFFFFFFFF00000007);
	// rlwimi r11,r6,3,0,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 3) & 0xFFFFFFF8) | (ctx.r11.u64 & 0xFFFFFFFF00000007);
	// or r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x82f22a4c
	goto loc_82F22A4C;
loc_82F22A48:
	// ori r29,r29,4095
	ctx.r29.u64 = ctx.r29.u64 | 4095;
loc_82F22A4C:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// beq cr6,0x82f22b6c
	if (ctx.cr6.eq) goto loc_82F22B6C;
	// lwz r30,96(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f22a70
	if (ctx.cr6.eq) goto loc_82F22A70;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,5576
	ctx.r4.s64 = ctx.r11.s64 + 5576;
	// b 0x82f229c4
	goto loc_82F229C4;
loc_82F22A70:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f22a98
	if (ctx.cr6.eq) goto loc_82F22A98;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x82f22a94
	if (ctx.cr6.eq) goto loc_82F22A94;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,5488
	ctx.r4.s64 = ctx.r11.s64 + 5488;
	// b 0x82f229c4
	goto loc_82F229C4;
loc_82F22A94:
	// ori r31,r31,2048
	ctx.r31.u64 = ctx.r31.u64 | 2048;
loc_82F22A98:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,5476
	ctx.r5.s64 = ctx.r11.s64 + 5476;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f228a0
	ctx.lr = 0x82F22AAC;
	sub_82F228A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f22b78
	if (!ctx.cr0.eq) goto loc_82F22B78;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwimi r31,r11,5,21,26
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0x7E0) | (ctx.r31.u64 & 0xFFFFFFFFFFFFF81F);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// clrlwi. r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f22b64
	if (ctx.cr0.eq) goto loc_82F22B64;
	// rlwimi r11,r10,26,0,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0xFC000000) | (ctx.r11.u64 & 0xFFFFFFFF03FFFFFF);
	// cmplwi cr6,r9,18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 18, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// beq cr6,0x82f22b3c
	if (ctx.cr6.eq) goto loc_82F22B3C;
	// cmplwi cr6,r9,24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24, ctx.xer);
	// beq cr6,0x82f22b00
	if (ctx.cr6.eq) goto loc_82F22B00;
	// rlwinm r10,r10,0,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0;
	// rlwinm r11,r31,8,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xC0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f22b6c
	if (ctx.cr6.eq) goto loc_82F22B6C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,5408
	ctx.r4.s64 = ctx.r11.s64 + 5408;
	// b 0x82f22b30
	goto loc_82F22B30;
loc_82F22B00:
	// rlwinm r11,r31,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0x3;
	// rlwinm r9,r31,4,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0x3;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f22b28
	if (!ctx.cr6.eq) goto loc_82F22B28;
	// rlwinm r9,r31,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f22b28
	if (!ctx.cr6.eq) goto loc_82F22B28;
	// rlwinm r10,r10,26,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f22b6c
	if (ctx.cr6.eq) goto loc_82F22B6C;
loc_82F22B28:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,5344
	ctx.r4.s64 = ctx.r11.s64 + 5344;
loc_82F22B30:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F22B38;
	sub_82F1E940(ctx, base);
	// b 0x82f22b6c
	goto loc_82F22B6C;
loc_82F22B3C:
	// rlwinm r11,r31,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0x3;
	// rlwinm r9,r31,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f22b58
	if (!ctx.cr6.eq) goto loc_82F22B58;
	// rlwinm r10,r10,26,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f22b6c
	if (ctx.cr6.eq) goto loc_82F22B6C;
loc_82F22B58:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,5276
	ctx.r4.s64 = ctx.r11.s64 + 5276;
	// b 0x82f22b30
	goto loc_82F22B30;
loc_82F22B64:
	// rlwimi r11,r10,30,0,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0xC0000000) | (ctx.r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82F22B6C:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// stw r29,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r29.u32);
	// stw r24,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r24.u32);
loc_82F22B78:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F22B80"))) PPC_WEAK_FUNC(sub_82F22B80);
PPC_FUNC_IMPL(__imp__sub_82F22B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F22B88;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f22c58
	if (!ctx.cr0.eq) goto loc_82F22C58;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r26,r29,164
	ctx.r26.s64 = ctx.r29.s64 + 164;
loc_82F22BAC:
	// lbzx r9,r26,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82f22bc0
	if (ctx.cr0.eq) goto loc_82F22BC0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82F22BC0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82f22bac
	if (ctx.cr6.lt) goto loc_82F22BAC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f22c58
	if (ctx.cr6.eq) goto loc_82F22C58;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f22c58
	if (ctx.cr6.eq) goto loc_82F22C58;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,5896
	ctx.r4.s64 = ctx.r10.s64 + 5896;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,111
	ctx.r11.s64 = ctx.r11.s64 + 111;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F22C18;
	sub_82F1E940(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f22c58
	if (ctx.cr6.eq) goto loc_82F22C58;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,5844
	ctx.r27.s64 = ctx.r11.s64 + 5844;
loc_82F22C2C:
	// lbzx r11,r26,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r31.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82f22c4c
	if (!ctx.cr0.eq) goto loc_82F22C4C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F22C4C;
	sub_82F1E940(ctx, base);
loc_82F22C4C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f22c2c
	if (ctx.cr6.lt) goto loc_82F22C2C;
loc_82F22C58:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F22C60"))) PPC_WEAK_FUNC(sub_82F22C60);
PPC_FUNC_IMPL(__imp__sub_82F22C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F22C68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F22C78:
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f22c98
	if (ctx.cr6.eq) goto loc_82F22C98;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f1be68
	ctx.lr = 0x82F22C90;
	sub_82F1BE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f22d5c
	if (ctx.cr0.lt) goto loc_82F22D5C;
loc_82F22C98:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r31,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r31.u32);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// beq cr6,0x82f22d28
	if (ctx.cr6.eq) goto loc_82F22D28;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82f22d00
	if (ctx.cr6.lt) goto loc_82F22D00;
	// beq cr6,0x82f22cd4
	if (ctx.cr6.eq) goto loc_82F22CD4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82f22d28
	if (!ctx.cr6.lt) goto loc_82F22D28;
loc_82F22CC0:
	// stb r29,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82edeee8
	ctx.lr = 0x82F22CD0;
	sub_82EDEEE8(ctx, base);
	// b 0x82f22d28
	goto loc_82F22D28;
loc_82F22CD4:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82f22cc0
	if (!ctx.cr6.eq) goto loc_82F22CC0;
	// lbz r11,25(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f22cc0
	if (!ctx.cr6.eq) goto loc_82F22CC0;
	// lbz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x82f22cc0
	if (!ctx.cr6.eq) goto loc_82F22CC0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// b 0x82f22d28
	goto loc_82F22D28;
loc_82F22D00:
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x82f22d28
	if (!ctx.cr6.eq) goto loc_82F22D28;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82f1bd50
	ctx.lr = 0x82F22D10;
	sub_82F1BD50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f22d28
	if (ctx.cr0.eq) goto loc_82F22D28;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82edeee8
	ctx.lr = 0x82F22D24;
	sub_82EDEEE8(ctx, base);
	// stb r31,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r31.u8);
loc_82F22D28:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82f22ee4
	if (ctx.cr6.gt) goto loc_82F22EE4;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-656
	ctx.r12.s64 = ctx.r12.s64 + -656;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32014
	ctx.r12.s64 = -2098069504;
	// addi r12,r12,11384
	ctx.r12.s64 = ctx.r12.s64 + 11384;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82F22EE4;
	case 1:
		goto loc_82F22D6C;
	case 2:
		goto loc_82F22D80;
	case 3:
		goto loc_82F22D80;
	case 4:
		goto loc_82F22D80;
	case 5:
		goto loc_82F22D88;
	case 6:
		goto loc_82F22D88;
	case 7:
		goto loc_82F22D88;
	case 8:
		goto loc_82F22D88;
	case 9:
		goto loc_82F22D90;
	case 10:
		goto loc_82F22EE4;
	case 11:
		goto loc_82F22EE4;
	case 12:
		goto loc_82F22C78;
	case 13:
		goto loc_82F22D64;
	default:
		__builtin_unreachable();
	}
loc_82F22D5C:
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
	// stw r31,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
loc_82F22D64:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82f22ee8
	goto loc_82F22EE8;
loc_82F22D6C:
	// lbz r11,25(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f22ee4
	if (!ctx.cr6.eq) goto loc_82F22EE4;
	// lbz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// b 0x82f22ee8
	goto loc_82F22EE8;
loc_82F22D80:
	// li r3,278
	ctx.r3.s64 = 278;
	// b 0x82f22ee8
	goto loc_82F22EE8;
loc_82F22D88:
	// li r3,279
	ctx.r3.s64 = 279;
	// b 0x82f22ee8
	goto loc_82F22EE8;
loc_82F22D90:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r10,r11,21864
	ctx.r10.s64 = ctx.r11.s64 + 21864;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82F22DA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f22dc4
	if (ctx.cr0.eq) goto loc_82F22DC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f22da0
	if (ctx.cr6.eq) goto loc_82F22DA0;
loc_82F22DC4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f22dd4
	if (!ctx.cr0.eq) goto loc_82F22DD4;
	// li r3,257
	ctx.r3.s64 = 257;
	// b 0x82f22ee8
	goto loc_82F22EE8;
loc_82F22DD4:
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-12384
	ctx.r10.s64 = ctx.r10.s64 + -12384;
loc_82F22DE0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f22e04
	if (ctx.cr0.eq) goto loc_82F22E04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f22de0
	if (ctx.cr6.eq) goto loc_82F22DE0;
loc_82F22E04:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f22e14
	if (!ctx.cr0.eq) goto loc_82F22E14;
	// li r3,281
	ctx.r3.s64 = 281;
	// b 0x82f22ee8
	goto loc_82F22EE8;
loc_82F22E14:
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-12392
	ctx.r10.s64 = ctx.r10.s64 + -12392;
loc_82F22E20:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f22e44
	if (ctx.cr0.eq) goto loc_82F22E44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f22e20
	if (ctx.cr6.eq) goto loc_82F22E20;
loc_82F22E44:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f22e54
	if (!ctx.cr0.eq) goto loc_82F22E54;
	// li r3,282
	ctx.r3.s64 = 282;
	// b 0x82f22ee8
	goto loc_82F22EE8;
loc_82F22E54:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,6004
	ctx.r10.s64 = ctx.r10.s64 + 6004;
loc_82F22E60:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f22e84
	if (ctx.cr0.eq) goto loc_82F22E84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f22e60
	if (ctx.cr6.eq) goto loc_82F22E60;
loc_82F22E84:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f22e94
	if (!ctx.cr0.eq) goto loc_82F22E94;
	// li r3,283
	ctx.r3.s64 = 283;
	// b 0x82f22ee8
	goto loc_82F22EE8;
loc_82F22E94:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,2264
	ctx.r10.s64 = ctx.r10.s64 + 2264;
loc_82F22EA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f22ec4
	if (ctx.cr0.eq) goto loc_82F22EC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f22ea0
	if (ctx.cr6.eq) goto loc_82F22EA0;
loc_82F22EC4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x82f22edc
	if (!ctx.cr0.eq) goto loc_82F22EDC;
	// bl 0x82f20c88
	ctx.lr = 0x82F22ED8;
	sub_82F20C88(ctx, base);
	// b 0x82f22ee8
	goto loc_82F22EE8;
loc_82F22EDC:
	// bl 0x82f1e9d0
	ctx.lr = 0x82F22EE0;
	sub_82F1E9D0(ctx, base);
	// b 0x82f22ee8
	goto loc_82F22EE8;
loc_82F22EE4:
	// li r3,280
	ctx.r3.s64 = 280;
loc_82F22EE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F22EF0"))) PPC_WEAK_FUNC(sub_82F22EF0);
PPC_FUNC_IMPL(__imp__sub_82F22EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82F22EF8;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r27,r10,16389
	ctx.r27.u64 = ctx.r10.u64 | 16389;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f22f2c
	if (ctx.cr6.eq) goto loc_82F22F2C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,6352
	ctx.r4.s64 = ctx.r11.s64 + 6352;
	// bl 0x82f1e940
	ctx.lr = 0x82F22F28;
	sub_82F1E940(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82F22F2C:
	// lwz r26,112(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f23394
	if (ctx.cr6.eq) goto loc_82F23394;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// lis r31,-32253
	ctx.r31.s64 = -2113732608;
	// lis r30,-32253
	ctx.r30.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r9,r9,3976
	ctx.r9.s64 = ctx.r9.s64 + 3976;
	// addi r10,r10,3968
	ctx.r10.s64 = ctx.r10.s64 + 3968;
	// addi r20,r5,6316
	ctx.r20.s64 = ctx.r5.s64 + 6316;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r24,r4,6260
	ctx.r24.s64 = ctx.r4.s64 + 6260;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r15,r3,6220
	ctx.r15.s64 = ctx.r3.s64 + 6220;
	// addi r23,r31,6188
	ctx.r23.s64 = ctx.r31.s64 + 6188;
	// addi r19,r30,6148
	ctx.r19.s64 = ctx.r30.s64 + 6148;
	// addi r14,r6,6088
	ctx.r14.s64 = ctx.r6.s64 + 6088;
	// addi r18,r7,6056
	ctx.r18.s64 = ctx.r7.s64 + 6056;
	// addi r22,r8,6016
	ctx.r22.s64 = ctx.r8.s64 + 6016;
	// addi r17,r11,20432
	ctx.r17.s64 = ctx.r11.s64 + 20432;
	// b 0x82f22fa0
	goto loc_82F22FA0;
loc_82F22F9C:
	// lwz r26,116(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82F22FA0:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r26,r11,16
	ctx.r26.s64 = ctx.r11.s64 + 16;
	// lwz r21,24(r9)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// bne cr6,0x82f22fc8
	if (!ctx.cr6.eq) goto loc_82F22FC8;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82F22FC8:
	// li r25,0
	ctx.r25.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// addi r30,r17,16
	ctx.r30.s64 = ctx.r17.s64 + 16;
loc_82F22FD4:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f2336c
	if (!ctx.cr0.eq) goto loc_82F2336C;
	// lwz r5,-16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82F22FE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f2300c
	if (ctx.cr0.eq) goto loc_82F2300C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f22fe8
	if (ctx.cr6.eq) goto loc_82F22FE8;
loc_82F2300C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f2335c
	if (!ctx.cr0.eq) goto loc_82F2335C;
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82f2302c
	if (ctx.cr6.eq) goto loc_82F2302C;
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// b 0x82f23030
	goto loc_82F23030;
loc_82F2302C:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
loc_82F23030:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f23058
	if (!ctx.cr6.eq) goto loc_82F23058;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82f23048
	if (!ctx.cr6.eq) goto loc_82F23048;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_82F23048:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F23054;
	sub_82F1E940(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82F23058:
	// lbz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,296(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// slw r31,r10,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 & ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f23084
	if (ctx.cr0.eq) goto loc_82F23084;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r5,-16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F23080;
	sub_82F1E940(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82F23084:
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// lwz r10,300(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,296(r29)
	PPC_STORE_U32(ctx.r29.u32 + 296, ctx.r11.u32);
	// bne cr6,0x82f230ac
	if (!ctx.cr6.eq) goto loc_82F230AC;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F230A8;
	sub_82F1E940(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82F230AC:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// blt cr6,0x82f2335c
	if (ctx.cr6.lt) goto loc_82F2335C;
	// lbz r11,-3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -3);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82f23134
	if (ctx.cr6.lt) goto loc_82F23134;
	// beq cr6,0x82f23108
	if (ctx.cr6.eq) goto loc_82F23108;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82f231cc
	if (!ctx.cr6.lt) goto loc_82F231CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f1d1d0
	ctx.lr = 0x82F230E8;
	sub_82F1D1D0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x82f231d8
	if (!ctx.cr0.lt) goto loc_82F231D8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82F230F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,-16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x82f1e940
	ctx.lr = 0x82F23100;
	sub_82F1E940(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x82f2335c
	goto loc_82F2335C;
loc_82F23108:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f1d2b8
	ctx.lr = 0x82F23114;
	sub_82F1D2B8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x82f231d8
	if (!ctx.cr0.lt) goto loc_82F231D8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r5,-16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F2312C;
	sub_82F1E940(ctx, base);
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x82f231cc
	goto loc_82F231CC;
loc_82F23134:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f231b8
	if (ctx.cr6.eq) goto loc_82F231B8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82f231b8
	if (!ctx.cr6.eq) goto loc_82F231B8;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f231a8
	if (ctx.cr6.eq) goto loc_82F231A8;
loc_82F2315C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82F23164:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// beq 0x82f23188
	if (ctx.cr0.eq) goto loc_82F23188;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82f23164
	if (ctx.cr6.eq) goto loc_82F23164;
loc_82F23188:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f231a0
	if (ctx.cr0.eq) goto loc_82F231A0;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82f2315c
	if (!ctx.cr6.eq) goto loc_82F2315C;
loc_82F231A0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82f231b0
	if (!ctx.cr6.eq) goto loc_82F231B0;
loc_82F231A8:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x82f230f4
	goto loc_82F230F4;
loc_82F231B0:
	// lbz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r7.u32 + 4);
	// b 0x82f231cc
	goto loc_82F231CC;
loc_82F231B8:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r5,-16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F231C8;
	sub_82F1E940(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82F231CC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82f2335c
	if (ctx.cr6.lt) goto loc_82F2335C;
	// b 0x82f231dc
	goto loc_82F231DC;
loc_82F231D8:
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82F231DC:
	// lbz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -4);
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bgt cr6,0x82f2335c
	if (ctx.cr6.gt) goto loc_82F2335C;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-640
	ctx.r12.s64 = ctx.r12.s64 + -640;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32014
	ctx.r12.s64 = -2098069504;
	// addi r12,r12,12816
	ctx.r12.s64 = ctx.r12.s64 + 12816;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82F23210;
	case 1:
		goto loc_82F23220;
	case 2:
		goto loc_82F23230;
	case 3:
		goto loc_82F2323C;
	case 4:
		goto loc_82F23248;
	case 5:
		goto loc_82F23254;
	case 6:
		goto loc_82F23260;
	case 7:
		goto loc_82F2326C;
	case 8:
		goto loc_82F23278;
	case 9:
		goto loc_82F23284;
	case 10:
		goto loc_82F23290;
	case 11:
		goto loc_82F2329C;
	case 12:
		goto loc_82F232AC;
	case 13:
		goto loc_82F232B8;
	case 14:
		goto loc_82F232C0;
	case 15:
		goto loc_82F232CC;
	case 16:
		goto loc_82F232D8;
	case 17:
		goto loc_82F232E4;
	case 18:
		goto loc_82F232F8;
	case 19:
		goto loc_82F23320;
	case 20:
		goto loc_82F23334;
	case 21:
		goto loc_82F2330C;
	default:
		__builtin_unreachable();
	}
loc_82F23210:
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// rlwimi r31,r11,0,0,25
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFC0) | (ctx.r31.u64 & 0xFFFFFFFF0000003F);
	// stw r31,288(r29)
	PPC_STORE_U32(ctx.r29.u32 + 288, ctx.r31.u32);
	// b 0x82f2335c
	goto loc_82F2335C;
loc_82F23220:
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// rlwimi r11,r31,8,18,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0x3F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC0FF);
loc_82F23228:
	// stw r11,288(r29)
	PPC_STORE_U32(ctx.r29.u32 + 288, ctx.r11.u32);
	// b 0x82f2335c
	goto loc_82F2335C;
loc_82F23230:
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// rlwimi r11,r31,16,15,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// b 0x82f23228
	goto loc_82F23228;
loc_82F2323C:
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// rlwimi r11,r31,17,14,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 17) & 0x20000) | (ctx.r11.u64 & 0xFFFFFFFFFFFDFFFF);
	// b 0x82f23228
	goto loc_82F23228;
loc_82F23248:
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// rlwimi r11,r31,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// b 0x82f23228
	goto loc_82F23228;
loc_82F23254:
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// rlwimi r11,r31,19,12,12
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 19) & 0x80000) | (ctx.r11.u64 & 0xFFFFFFFFFFF7FFFF);
	// b 0x82f23228
	goto loc_82F23228;
loc_82F23260:
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// rlwimi r11,r31,20,8,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 20) & 0xF00000) | (ctx.r11.u64 & 0xFFFFFFFFFF0FFFFF);
	// b 0x82f23228
	goto loc_82F23228;
loc_82F2326C:
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// rlwimi r11,r31,24,5,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 24) & 0x7000000) | (ctx.r11.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x82f23228
	goto loc_82F23228;
loc_82F23278:
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// rlwimi r11,r31,27,4,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 27) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// b 0x82f23228
	goto loc_82F23228;
loc_82F23284:
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// rlwimi r11,r31,28,1,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 28) & 0x70000000) | (ctx.r11.u64 & 0xFFFFFFFF8FFFFFFF);
	// b 0x82f23228
	goto loc_82F23228;
loc_82F23290:
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// rlwimi r11,r31,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// b 0x82f23228
	goto loc_82F23228;
loc_82F2329C:
	// lwz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// rlwimi r11,r31,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
loc_82F232A4:
	// stw r11,292(r29)
	PPC_STORE_U32(ctx.r29.u32 + 292, ctx.r11.u32);
	// b 0x82f2335c
	goto loc_82F2335C;
loc_82F232AC:
	// lwz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// rlwimi r11,r31,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// b 0x82f232a4
	goto loc_82F232A4;
loc_82F232B8:
	// stb r31,294(r29)
	PPC_STORE_U8(ctx.r29.u32 + 294, ctx.r31.u8);
	// b 0x82f2335c
	goto loc_82F2335C;
loc_82F232C0:
	// lwz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// rlwimi r11,r31,16,15,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// b 0x82f232a4
	goto loc_82F232A4;
loc_82F232CC:
	// lwz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// rlwimi r11,r31,17,14,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 17) & 0x20000) | (ctx.r11.u64 & 0xFFFFFFFFFFFDFFFF);
	// b 0x82f232a4
	goto loc_82F232A4;
loc_82F232D8:
	// lwz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// rlwimi r11,r31,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// b 0x82f232a4
	goto loc_82F232A4;
loc_82F232E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f2335c
	if (ctx.cr6.eq) goto loc_82F2335C;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x82f23358
	goto loc_82F23358;
loc_82F232F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f2335c
	if (!ctx.cr6.eq) goto loc_82F2335C;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// b 0x82f23358
	goto loc_82F23358;
loc_82F2330C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f2335c
	if (!ctx.cr6.eq) goto loc_82F2335C;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// b 0x82f23358
	goto loc_82F23358;
loc_82F23320:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f2335c
	if (!ctx.cr6.eq) goto loc_82F2335C;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// b 0x82f23358
	goto loc_82F23358;
loc_82F23334:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f221c0
	ctx.lr = 0x82F23340;
	sub_82F221C0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82f2335c
	if (ctx.cr0.lt) goto loc_82F2335C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f2335c
	if (ctx.cr6.eq) goto loc_82F2335C;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_82F23358:
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
loc_82F2335C:
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplwi cr6,r16,14
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 14, ctx.xer);
	// blt cr6,0x82f22fd4
	if (ctx.cr6.lt) goto loc_82F22FD4;
loc_82F2336C:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f23388
	if (!ctx.cr0.eq) goto loc_82F23388;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F23384;
	sub_82F1E940(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82F23388:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f22f9c
	if (!ctx.cr6.eq) goto loc_82F22F9C;
loc_82F23394:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F233A0"))) PPC_WEAK_FUNC(sub_82F233A0);
PPC_FUNC_IMPL(__imp__sub_82F233A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3032(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3032);
	// b 0x82f22c60
	sub_82F22C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F233A8"))) PPC_WEAK_FUNC(sub_82F233A8);
PPC_FUNC_IMPL(__imp__sub_82F233A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F233B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f233e0
	if (!ctx.cr6.eq) goto loc_82F233E0;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// bl 0x82f22b80
	ctx.lr = 0x82F233D4;
	sub_82F22B80(ctx, base);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// bl 0x82e73588
	ctx.lr = 0x82F233E0;
	sub_82E73588(ctx, base);
loc_82F233E0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82f23450
	if (ctx.cr6.eq) goto loc_82F23450;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f23428
	if (ctx.cr6.eq) goto loc_82F23428;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82f23450
	if (!ctx.cr6.eq) goto loc_82F23450;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwimi r4,r30,0,29,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0xFFFFFFFFFFFFFF07) | (ctx.r4.u64 & 0xF8);
	// bl 0x82e6ac60
	ctx.lr = 0x82F23414;
	sub_82E6AC60(ctx, base);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f23450
	if (ctx.cr6.eq) goto loc_82F23450;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82f2344c
	goto loc_82F2344C;
loc_82F23428:
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r4,r11,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF8;
	// bl 0x82e6ac60
	ctx.lr = 0x82F2343C;
	sub_82E6AC60(ctx, base);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f23450
	if (ctx.cr6.eq) goto loc_82F23450;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82F2344C:
	// bl 0x831f7218
	ctx.lr = 0x82F23450;
	sub_831F7218(ctx, base);
loc_82F23450:
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2345C"))) PPC_WEAK_FUNC(sub_82F2345C);
PPC_FUNC_IMPL(__imp__sub_82F2345C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F23460"))) PPC_WEAK_FUNC(sub_82F23460);
PPC_FUNC_IMPL(__imp__sub_82F23460) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82f233a8
	sub_82F233A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F23468"))) PPC_WEAK_FUNC(sub_82F23468);
PPC_FUNC_IMPL(__imp__sub_82F23468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82F23470;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r27.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,245
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 245, ctx.xer);
	// beq cr6,0x82f23a54
	if (ctx.cr6.eq) goto loc_82F23A54;
	// cmplwi cr6,r11,246
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 246, ctx.xer);
	// beq cr6,0x82f238d4
	if (ctx.cr6.eq) goto loc_82F238D4;
	// cmplwi cr6,r11,247
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 247, ctx.xer);
	// beq cr6,0x82f23818
	if (ctx.cr6.eq) goto loc_82F23818;
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// bne cr6,0x82f23b68
	if (!ctx.cr6.eq) goto loc_82F23B68;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f234c0
	if (ctx.cr6.eq) goto loc_82F234C0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,7812
	ctx.r4.s64 = ctx.r11.s64 + 7812;
	// bl 0x82f1e940
	ctx.lr = 0x82F234C0;
	sub_82F1E940(ctx, base);
loc_82F234C0:
	// lwz r28,84(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm. r9,r11,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r24,r11,10,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// clrlwi r23,r10,28
	ctx.r23.u64 = ctx.r10.u32 & 0xF;
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r29,r10,16,28,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// rlwinm r22,r11,27,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq 0x82f234f0
	if (ctx.cr0.eq) goto loc_82F234F0;
	// li r24,2
	ctx.r24.s64 = 2;
loc_82F234F0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r26,32(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r25,r11,7792
	ctx.r25.s64 = ctx.r11.s64 + 7792;
loc_82F23500:
	// srw r11,r26,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r30.u8 & 0x3F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82f23568
	if (ctx.cr6.eq) goto loc_82F23568;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82f23560
	if (ctx.cr6.eq) goto loc_82F23560;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82f23558
	if (ctx.cr6.eq) goto loc_82F23558;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82f23550
	if (ctx.cr6.eq) goto loc_82F23550;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82f235bc
	if (ctx.cr6.eq) goto loc_82F235BC;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82f235b0
	if (ctx.cr6.eq) goto loc_82F235B0;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82f2356c
	if (!ctx.cr6.eq) goto loc_82F2356C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F2354C;
	sub_82F1E940(ctx, base);
	// b 0x82f2356c
	goto loc_82F2356C;
loc_82F23550:
	// ori r27,r27,8
	ctx.r27.u64 = ctx.r27.u64 | 8;
	// b 0x82f2356c
	goto loc_82F2356C;
loc_82F23558:
	// ori r27,r27,4
	ctx.r27.u64 = ctx.r27.u64 | 4;
	// b 0x82f2356c
	goto loc_82F2356C;
loc_82F23560:
	// ori r27,r27,2
	ctx.r27.u64 = ctx.r27.u64 | 2;
	// b 0x82f2356c
	goto loc_82F2356C;
loc_82F23568:
	// ori r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 1;
loc_82F2356C:
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// blt cr6,0x82f23500
	if (ctx.cr6.lt) goto loc_82F23500;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f236d4
	if (!ctx.cr6.eq) goto loc_82F236D4;
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f236d4
	if (ctx.cr0.eq) goto loc_82F236D4;
	// cmplwi cr6,r23,9
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 9, ctx.xer);
	// beq cr6,0x82f235d8
	if (ctx.cr6.eq) goto loc_82F235D8;
	// cmplwi cr6,r23,13
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 13, ctx.xer);
	// ble cr6,0x82f235a4
	if (!ctx.cr6.gt) goto loc_82F235A4;
	// cmplwi cr6,r23,15
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 15, ctx.xer);
	// ble cr6,0x82f235d8
	if (!ctx.cr6.gt) goto loc_82F235D8;
loc_82F235A4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,7688
	ctx.r4.s64 = ctx.r11.s64 + 7688;
	// b 0x82f235c4
	goto loc_82F235C4;
loc_82F235B0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,7668
	ctx.r4.s64 = ctx.r11.s64 + 7668;
	// b 0x82f235c4
	goto loc_82F235C4;
loc_82F235BC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,7648
	ctx.r4.s64 = ctx.r11.s64 + 7648;
loc_82F235C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F235CC;
	sub_82F1E940(ctx, base);
loc_82F235CC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f23b6c
	goto loc_82F23B6C;
loc_82F235D8:
	// rlwinm r11,r23,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r8,r10,45
	ctx.r8.s64 = ctx.r10.s64 + 45;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2364c
	if (ctx.cr0.eq) goto loc_82F2364C;
	// cmplwi cr6,r23,9
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 9, ctx.xer);
	// bne cr6,0x82f23618
	if (!ctx.cr6.eq) goto loc_82F23618;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,960
	ctx.r5.s64 = ctx.r11.s64 + 960;
	// b 0x82f23634
	goto loc_82F23634;
loc_82F23618:
	// cmplwi cr6,r23,14
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 14, ctx.xer);
	// bne cr6,0x82f2362c
	if (!ctx.cr6.eq) goto loc_82F2362C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,968
	ctx.r5.s64 = ctx.r11.s64 + 968;
	// b 0x82f23634
	goto loc_82F23634;
loc_82F2362C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,980
	ctx.r5.s64 = ctx.r11.s64 + 980;
loc_82F23634:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,7608
	ctx.r4.s64 = ctx.r11.s64 + 7608;
loc_82F23640:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F23644:
	// bl 0x82f1e940
	ctx.lr = 0x82F23648;
	sub_82F1E940(ctx, base);
	// b 0x82f235cc
	goto loc_82F235CC;
loc_82F2364C:
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r30,24(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x82f23678
	if (ctx.cr6.lt) goto loc_82F23678;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,7536
	ctx.r4.s64 = ctx.r11.s64 + 7536;
	// b 0x82f235c4
	goto loc_82F235C4;
loc_82F23678:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 212);
	// and. r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 & ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f236ac
	if (ctx.cr0.eq) goto loc_82F236AC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r9,7464
	ctx.r4.s64 = ctx.r9.s64 + 7464;
loc_82F23698:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r11,r11,20800
	ctx.r11.s64 = ctx.r11.s64 + 20800;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82f23644
	goto loc_82F23644;
loc_82F236AC:
	// or r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 | ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,212(r11)
	PPC_STORE_U8(ctx.r11.u32 + 212, ctx.r10.u8);
	// bl 0x82f233a8
	ctx.lr = 0x82F236BC;
	sub_82F233A8(ctx, base);
	// rlwimi r29,r23,4,24,27
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r23.u32, 4) & 0xF0) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFF0F);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// bl 0x82e72cb8
	ctx.lr = 0x82F236D0;
	sub_82E72CB8(ctx, base);
	// b 0x82f23b68
	goto loc_82F23B68;
loc_82F236D4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r11,r24,4,26,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 4) & 0x30) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFCF);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// rlwimi r29,r11,4,0,27
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0xFFFFFFF0) | (ctx.r29.u64 & 0xFFFFFFFF0000000F);
	// rlwinm r10,r29,27,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7;
	// clrlwi r11,r29,27
	ctx.r11.u64 = ctx.r29.u32 & 0x1F;
	// addi r8,r10,33
	ctx.r8.s64 = ctx.r10.s64 + 33;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f23714
	if (ctx.cr0.eq) goto loc_82F23714;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,7400
	ctx.r4.s64 = ctx.r11.s64 + 7400;
	// b 0x82f235c4
	goto loc_82F235C4;
loc_82F23714:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,132
	ctx.r11.s64 = ctx.r31.s64 + 132;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r30,24(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r9,r10,111
	ctx.r9.s64 = ctx.r10.s64 + 111;
	// ble cr6,0x82f2375c
	if (!ctx.cr6.gt) goto loc_82F2375C;
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r11,7356
	ctx.r4.s64 = ctx.r11.s64 + 7356;
	// b 0x82f23640
	goto loc_82F23640;
loc_82F2375C:
	// cmplwi cr6,r23,9
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 9, ctx.xer);
	// bne cr6,0x82f23770
	if (!ctx.cr6.eq) goto loc_82F23770;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,7280
	ctx.r4.s64 = ctx.r11.s64 + 7280;
	// b 0x82f235c4
	goto loc_82F235C4;
loc_82F23770:
	// cmplwi cr6,r23,14
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 14, ctx.xer);
	// bne cr6,0x82f23784
	if (!ctx.cr6.eq) goto loc_82F23784;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,7192
	ctx.r4.s64 = ctx.r11.s64 + 7192;
	// b 0x82f235c4
	goto loc_82F235C4;
loc_82F23784:
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// lwz r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f237d0
	if (ctx.cr6.eq) goto loc_82F237D0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f237b8
	if (ctx.cr6.eq) goto loc_82F237B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,3968
	ctx.r5.s64 = ctx.r11.s64 + 3968;
	// b 0x82f237c0
	goto loc_82F237C0;
loc_82F237B8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,3976
	ctx.r5.s64 = ctx.r11.s64 + 3976;
loc_82F237C0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// addi r4,r11,7136
	ctx.r4.s64 = ctx.r11.s64 + 7136;
	// b 0x82f23640
	goto loc_82F23640;
loc_82F237D0:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 164);
	// and. r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 & ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f237f4
	if (ctx.cr0.eq) goto loc_82F237F4;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r9,7072
	ctx.r4.s64 = ctx.r9.s64 + 7072;
	// b 0x82f23698
	goto loc_82F23698;
loc_82F237F4:
	// or r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 | ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,164(r11)
	PPC_STORE_U8(ctx.r11.u32 + 164, ctx.r10.u8);
	// bl 0x82f233a8
	ctx.lr = 0x82F23804;
	sub_82F233A8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e72ca0
	ctx.lr = 0x82F23814;
	sub_82E72CA0(ctx, base);
	// b 0x82f23b68
	goto loc_82F23B68;
loc_82F23818:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f23834
	if (ctx.cr6.eq) goto loc_82F23834;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7032
	ctx.r4.s64 = ctx.r11.s64 + 7032;
	// bl 0x82f1e940
	ctx.lr = 0x82F23834;
	sub_82F1E940(ctx, base);
loc_82F23834:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bne cr6,0x82f238c8
	if (!ctx.cr6.eq) goto loc_82F238C8;
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,96(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// rlwinm r10,r29,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r29,27
	ctx.r9.u64 = ctx.r29.u32 & 0x1F;
	// addi r7,r10,63
	ctx.r7.s64 = ctx.r10.s64 + 63;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// xori r30,r8,1
	ctx.r30.u64 = ctx.r8.u64 ^ 1;
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f23898
	if (ctx.cr0.eq) goto loc_82F23898;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,6984
	ctx.r4.s64 = ctx.r11.s64 + 6984;
loc_82F2388C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F23894;
	sub_82F1E940(ctx, base);
	// b 0x82f23b68
	goto loc_82F23B68;
loc_82F23898:
	// addi r11,r31,252
	ctx.r11.s64 = ctx.r31.s64 + 252;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82f233a8
	ctx.lr = 0x82F238B8;
	sub_82F233A8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e6e690
	ctx.lr = 0x82F238C4;
	sub_82E6E690(ctx, base);
	// b 0x82f23b68
	goto loc_82F23B68;
loc_82F238C8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,6948
	ctx.r4.s64 = ctx.r11.s64 + 6948;
	// b 0x82f23b60
	goto loc_82F23B60;
loc_82F238D4:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f238f0
	if (ctx.cr6.eq) goto loc_82F238F0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6908
	ctx.r4.s64 = ctx.r11.s64 + 6908;
	// bl 0x82f1e940
	ctx.lr = 0x82F238F0;
	sub_82F1E940(ctx, base);
loc_82F238F0:
	// lwz r29,84(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82f23a48
	if (!ctx.cr6.eq) goto loc_82F23A48;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82F23910:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82f23928
	if (ctx.cr6.eq) goto loc_82F23928;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bne cr6,0x82f23930
	if (!ctx.cr6.eq) goto loc_82F23930;
loc_82F23928:
	// lwz r8,24(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82F23930:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82f23910
	if (!ctx.cr0.eq) goto loc_82F23910;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82f23954
	if (ctx.cr6.lt) goto loc_82F23954;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x82f23968
	if (!ctx.cr6.gt) goto loc_82F23968;
loc_82F23954:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6840
	ctx.r4.s64 = ctx.r11.s64 + 6840;
	// bl 0x82f1e940
	ctx.lr = 0x82F23964;
	sub_82F1E940(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_82F23968:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82f2397c
	if (ctx.cr6.lt) goto loc_82F2397C;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x82f23990
	if (!ctx.cr6.gt) goto loc_82F23990;
loc_82F2397C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6768
	ctx.r4.s64 = ctx.r11.s64 + 6768;
	// bl 0x82f1e940
	ctx.lr = 0x82F2398C;
	sub_82F1E940(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_82F23990:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,-128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -128, ctx.xer);
	// blt cr6,0x82f239a4
	if (ctx.cr6.lt) goto loc_82F239A4;
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// ble cr6,0x82f239b8
	if (!ctx.cr6.gt) goto loc_82F239B8;
loc_82F239A4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6696
	ctx.r4.s64 = ctx.r11.s64 + 6696;
	// bl 0x82f1e940
	ctx.lr = 0x82F239B4;
	sub_82F1E940(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_82F239B8:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f239d8
	if (ctx.cr6.eq) goto loc_82F239D8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6640
	ctx.r4.s64 = ctx.r11.s64 + 6640;
	// bl 0x82f1e940
	ctx.lr = 0x82F239D4;
	sub_82F1E940(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_82F239D8:
	// lwz r30,24(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r30,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// addi r8,r10,62
	ctx.r8.s64 = ctx.r10.s64 + 62;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f23a10
	if (ctx.cr0.eq) goto loc_82F23A10;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,6592
	ctx.r4.s64 = ctx.r11.s64 + 6592;
	// b 0x82f2388c
	goto loc_82F2388C;
loc_82F23A10:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82f23b68
	if (!ctx.cr6.eq) goto loc_82F23B68;
	// addi r11,r31,248
	ctx.r11.s64 = ctx.r31.s64 + 248;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82f233a8
	ctx.lr = 0x82F23A38;
	sub_82F233A8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e70dd0
	ctx.lr = 0x82F23A44;
	sub_82E70DD0(ctx, base);
	// b 0x82f23b68
	goto loc_82F23B68;
loc_82F23A48:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,6552
	ctx.r4.s64 = ctx.r11.s64 + 6552;
	// b 0x82f23b60
	goto loc_82F23B60;
loc_82F23A54:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f23a70
	if (ctx.cr6.eq) goto loc_82F23A70;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6512
	ctx.r4.s64 = ctx.r11.s64 + 6512;
	// bl 0x82f1e940
	ctx.lr = 0x82F23A70;
	sub_82F1E940(ctx, base);
loc_82F23A70:
	// lwz r26,84(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82f23b58
	if (!ctx.cr6.eq) goto loc_82F23B58;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r27,r11,6476
	ctx.r27.s64 = ctx.r11.s64 + 6476;
loc_82F23A94:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82f23b0c
	if (ctx.cr6.eq) goto loc_82F23B0C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82f23b0c
	if (ctx.cr6.eq) goto loc_82F23B0C;
	// ble cr6,0x82f23b10
	if (!ctx.cr6.gt) goto loc_82F23B10;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x82f23b10
	if (ctx.cr6.gt) goto loc_82F23B10;
loc_82F23AB8:
	// lfd f0,24(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82F23AC4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82f23a94
	if (!ctx.cr0.eq) goto loc_82F23A94;
	// lwz r30,24(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r30,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// addi r8,r10,54
	ctx.r8.s64 = ctx.r10.s64 + 54;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f23b28
	if (ctx.cr0.eq) goto loc_82F23B28;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// b 0x82f2388c
	goto loc_82F2388C;
loc_82F23B0C:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82F23B10:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82f23ab8
	if (ctx.cr6.eq) goto loc_82F23AB8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F23B24;
	sub_82F1E940(ctx, base);
	// b 0x82f23ac4
	goto loc_82F23AC4;
loc_82F23B28:
	// addi r11,r31,216
	ctx.r11.s64 = ctx.r31.s64 + 216;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82f233a8
	ctx.lr = 0x82F23B48;
	sub_82F233A8(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e6e6a8
	ctx.lr = 0x82F23B54;
	sub_82E6E6A8(ctx, base);
	// b 0x82f23b68
	goto loc_82F23B68;
loc_82F23B58:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,6392
	ctx.r4.s64 = ctx.r11.s64 + 6392;
loc_82F23B60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F23B68;
	sub_82F1E940(ctx, base);
loc_82F23B68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F23B6C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F23B74"))) PPC_WEAK_FUNC(sub_82F23B74);
PPC_FUNC_IMPL(__imp__sub_82F23B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F23B78"))) PPC_WEAK_FUNC(sub_82F23B78);
PPC_FUNC_IMPL(__imp__sub_82F23B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82F23B80;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// std r23,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r23.u64);
	// stw r23,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r23.u32);
	// stw r23,300(r21)
	PPC_STORE_U32(ctx.r21.u32 + 300, ctx.r23.u32);
	// lwz r11,92(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// oris r8,r10,57344
	ctx.r8.u64 = ctx.r10.u64 | 3758096384;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// beq cr6,0x82f23bf0
	if (ctx.cr6.eq) goto loc_82F23BF0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// beq cr6,0x82f23bd0
	if (ctx.cr6.eq) goto loc_82F23BD0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F23BD0:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// bgt cr6,0x82f23be8
	if (ctx.cr6.gt) goto loc_82F23BE8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82F23BE8:
	// rlwimi r10,r11,27,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
loc_82F23BF0:
	// lis r11,-31908
	ctx.r11.s64 = -2091122688;
	// addi r27,r11,20712
	ctx.r27.s64 = ctx.r11.s64 + 20712;
	// lwz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r22,r10,27,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r24,r9,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82f23c24
	if (ctx.cr6.eq) goto loc_82F23C24;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82f23cc0
	if (!ctx.cr6.eq) goto loc_82F23CC0;
loc_82F23C24:
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// cmplwi cr6,r11,240
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 240, ctx.xer);
	// beq cr6,0x82f23c5c
	if (ctx.cr6.eq) goto loc_82F23C5C;
	// cmplwi cr6,r11,242
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 242, ctx.xer);
	// beq cr6,0x82f23c48
	if (ctx.cr6.eq) goto loc_82F23C48;
	// cmplwi cr6,r11,244
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 244, ctx.xer);
	// bne cr6,0x82f23c60
	if (!ctx.cr6.eq) goto loc_82F23C60;
	// li r10,29
	ctx.r10.s64 = 29;
	// b 0x82f23c4c
	goto loc_82F23C4C;
loc_82F23C48:
	// li r10,2
	ctx.r10.s64 = 2;
loc_82F23C4C:
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// stw r10,52(r26)
	PPC_STORE_U32(ctx.r26.u32 + 52, ctx.r10.u32);
	// stw r11,100(r26)
	PPC_STORE_U32(ctx.r26.u32 + 100, ctx.r11.u32);
	// b 0x82f23c60
	goto loc_82F23C60;
loc_82F23C5C:
	// li r22,1
	ctx.r22.s64 = 1;
loc_82F23C60:
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f23cc0
	if (!ctx.cr0.eq) goto loc_82F23CC0;
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// addi r10,r27,52
	ctx.r10.s64 = ctx.r27.s64 + 52;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// rlwimi r8,r11,24,3,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0x1F000000) | (ctx.r8.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm r11,r8,8,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0x1F;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lbzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82f23cc0
	if (ctx.cr0.eq) goto loc_82F23CC0;
	// addi r29,r26,96
	ctx.r29.s64 = ctx.r26.s64 + 96;
loc_82F23C90:
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f23cac
	if (ctx.cr6.eq) goto loc_82F23CAC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82f22208
	ctx.lr = 0x82F23CAC;
	sub_82F22208(ctx, base);
loc_82F23CAC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82f23c90
	if (ctx.cr6.lt) goto loc_82F23C90;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82F23CC0:
	// lwz r9,48(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x82f23cd4
	if (ctx.cr6.eq) goto loc_82F23CD4;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x82f23f44
	if (!ctx.cr6.eq) goto loc_82F23F44;
loc_82F23CD4:
	// addi r7,r9,-3
	ctx.r7.s64 = ctx.r9.s64 + -3;
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cmplwi cr6,r11,241
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 241, ctx.xer);
	// rlwinm r7,r7,28,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x2;
	// xori r28,r7,2
	ctx.r28.u64 = ctx.r7.u64 ^ 2;
	// addi r7,r28,24
	ctx.r7.s64 = ctx.r28.s64 + 24;
	// rlwinm r25,r7,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r25,r26
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// beq cr6,0x82f23d34
	if (ctx.cr6.eq) goto loc_82F23D34;
	// cmplwi cr6,r11,243
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 243, ctx.xer);
	// beq cr6,0x82f23d28
	if (ctx.cr6.eq) goto loc_82F23D28;
	// cmplwi cr6,r11,252
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 252, ctx.xer);
	// beq cr6,0x82f23d20
	if (ctx.cr6.eq) goto loc_82F23D20;
	// cmplwi cr6,r11,253
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 253, ctx.xer);
	// bne cr6,0x82f23d38
	if (!ctx.cr6.eq) goto loc_82F23D38;
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82f23d2c
	goto loc_82F23D2C;
loc_82F23D20:
	// li r11,23
	ctx.r11.s64 = 23;
	// b 0x82f23d2c
	goto loc_82F23D2C;
loc_82F23D28:
	// li r11,5
	ctx.r11.s64 = 5;
loc_82F23D2C:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82f23d38
	goto loc_82F23D38;
loc_82F23D34:
	// li r24,1
	ctx.r24.s64 = 1;
loc_82F23D38:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f23d70
	if (ctx.cr0.eq) goto loc_82F23D70;
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// clrlwi r7,r10,30
	ctx.r7.u64 = ctx.r10.u32 & 0x3;
	// mulli r7,r7,85
	ctx.r7.s64 = ctx.r7.s64 * 85;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82f23d70
	if (ctx.cr6.eq) goto loc_82F23D70;
loc_82F23D54:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,8760
	ctx.r4.s64 = ctx.r11.s64 + 8760;
loc_82F23D5C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F23D64;
	sub_82F1E940(ctx, base);
loc_82F23D64:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f24198
	goto loc_82F24198;
loc_82F23D70:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi. r7,r24,24
	ctx.r7.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwimi r10,r11,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bne 0x82f23f48
	if (!ctx.cr0.eq) goto loc_82F23F48;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x82f23da0
	if (ctx.cr6.eq) goto loc_82F23DA0;
	// lwz r9,52(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// addi r7,r27,52
	ctx.r7.s64 = ctx.r27.s64 + 52;
	// lbzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x82f23f48
	if (!ctx.cr6.lt) goto loc_82F23F48;
loc_82F23DA0:
	// lbzx r31,r11,r27
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82f23f48
	if (ctx.cr0.eq) goto loc_82F23F48;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// addi r30,r29,36
	ctx.r30.s64 = ctx.r29.s64 + 36;
	// bne cr6,0x82f23ddc
	if (!ctx.cr6.eq) goto loc_82F23DDC;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r10,85
	ctx.r10.s64 = ctx.r10.s64 * 85;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f23e58
	if (!ctx.cr6.eq) goto loc_82F23E58;
	// b 0x82f23d54
	goto loc_82F23D54;
loc_82F23DDC:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// beq cr6,0x82f23e34
	if (ctx.cr6.eq) goto loc_82F23E34;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bne cr6,0x82f23e48
	if (!ctx.cr6.eq) goto loc_82F23E48;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r10,85
	ctx.r10.s64 = ctx.r10.s64 * 85;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f23e28
	if (!ctx.cr6.eq) goto loc_82F23E28;
	// addi r11,r28,25
	ctx.r11.s64 = ctx.r28.s64 + 25;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r10,85
	ctx.r10.s64 = ctx.r10.s64 * 85;
loc_82F23E14:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f23e48
	if (!ctx.cr6.eq) goto loc_82F23E48;
loc_82F23E28:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,8656
	ctx.r4.s64 = ctx.r11.s64 + 8656;
	// b 0x82f23d5c
	goto loc_82F23D5C;
loc_82F23E34:
	// rlwinm r10,r11,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 * 84;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x82f23e14
	goto loc_82F23E14;
loc_82F23E48:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f1cad0
	ctx.lr = 0x82F23E54;
	sub_82F1CAD0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82F23E58:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82f22208
	ctx.lr = 0x82F23E6C;
	sub_82F22208(ctx, base);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bne cr6,0x82f23f40
	if (!ctx.cr6.eq) goto loc_82F23F40;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82f23e8c
	if (ctx.cr6.eq) goto loc_82F23E8C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,8568
	ctx.r4.s64 = ctx.r11.s64 + 8568;
	// b 0x82f23d5c
	goto loc_82F23D5C;
loc_82F23E8C:
	// addi r11,r28,25
	ctx.r11.s64 = ctx.r28.s64 + 25;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f23f34
	if (ctx.cr6.eq) goto loc_82F23F34;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f23f34
	if (!ctx.cr6.eq) goto loc_82F23F34;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r9,26,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f23ee4
	if (!ctx.cr6.eq) goto loc_82F23EE4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r11,8560
	ctx.r11.s64 = ctx.r11.s64 + 8560;
	// addi r4,r9,8448
	ctx.r4.s64 = ctx.r9.s64 + 8448;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82f1e940
	ctx.lr = 0x82F23EE0;
	sub_82F1E940(ctx, base);
	// b 0x82f23d64
	goto loc_82F23D64;
loc_82F23EE4:
	// lwzx r10,r25,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f23f04
	if (ctx.cr6.eq) goto loc_82F23F04;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,8336
	ctx.r4.s64 = ctx.r11.s64 + 8336;
	// b 0x82f23d5c
	goto loc_82F23D5C;
loc_82F23F04:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r7,r9,0,30,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFFFFFFFC3) | (ctx.r7.u64 & 0x3C);
	// rlwimi r8,r11,28,2,2
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0x20000000) | (ctx.r8.u64 & 0xFFFFFFFFDFFFFFFF);
	// rlwimi r10,r11,26,5,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 26) & 0x4000000) | (ctx.r10.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// b 0x82f23f48
	goto loc_82F23F48;
loc_82F23F34:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,8248
	ctx.r4.s64 = ctx.r11.s64 + 8248;
	// b 0x82f23d5c
	goto loc_82F23D5C;
loc_82F23F40:
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82F23F44:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82F23F48:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f23f5c
	if (ctx.cr0.eq) goto loc_82F23F5C;
	// clrlwi r11,r10,6
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// oris r11,r11,51200
	ctx.r11.u64 = ctx.r11.u64 | 3355443200;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82F23F5C:
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f23f70
	if (ctx.cr0.eq) goto loc_82F23F70;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r8,r11,25,3,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 25) & 0x1F000000) | (ctx.r8.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
loc_82F23F70:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82f22380
	ctx.lr = 0x82F23F80;
	sub_82F22380(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r5,48(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// std r23,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r23.u64);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
loc_82F23FAC:
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bne cr6,0x82f23fc4
	if (!ctx.cr6.eq) goto loc_82F23FC4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82f24044
	if (!ctx.cr6.eq) goto loc_82F24044;
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// b 0x82f23fd0
	goto loc_82F23FD0;
loc_82F23FC4:
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
loc_82F23FD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f24044
	if (ctx.cr6.eq) goto loc_82F24044;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82f24044
	if (!ctx.cr6.eq) goto loc_82F24044;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r4,2816
	ctx.r4.s64 = 184549376;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82f24008
	if (ctx.cr6.eq) goto loc_82F24008;
	// lis r4,3072
	ctx.r4.s64 = 201326592;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82f24008
	if (ctx.cr6.eq) goto loc_82F24008;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// b 0x82f2400c
	goto loc_82F2400C;
loc_82F24008:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_82F2400C:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f24038
	if (ctx.cr6.eq) goto loc_82F24038;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x82f24030
	if (!ctx.cr6.eq) goto loc_82F24030;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82f24034
	goto loc_82F24034;
loc_82F24030:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82F24034:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F24038:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_82F24044:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x82f23fac
	if (ctx.cr6.lt) goto loc_82F23FAC;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f24080
	if (ctx.cr6.eq) goto loc_82F24080;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f24074
	if (ctx.cr6.eq) goto loc_82F24074;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,8112
	ctx.r4.s64 = ctx.r11.s64 + 8112;
	// bl 0x82f1e940
	ctx.lr = 0x82F24070;
	sub_82F1E940(ctx, base);
	// b 0x82f24080
	goto loc_82F24080;
loc_82F24074:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82F24080:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f240a0
	if (ctx.cr6.eq) goto loc_82F240A0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f240a0
	if (ctx.cr6.eq) goto loc_82F240A0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,7992
	ctx.r4.s64 = ctx.r11.s64 + 7992;
	// bl 0x82f1e940
	ctx.lr = 0x82F240A0;
	sub_82F1E940(ctx, base);
loc_82F240A0:
	// lwz r30,136(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bne cr6,0x82f240d8
	if (!ctx.cr6.eq) goto loc_82F240D8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82f240d8
	if (ctx.cr6.eq) goto loc_82F240D8;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82f240d8
	if (ctx.cr6.eq) goto loc_82F240D8;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82f240d8
	if (ctx.cr6.eq) goto loc_82F240D8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,7856
	ctx.r4.s64 = ctx.r11.s64 + 7856;
	// bl 0x82f1e940
	ctx.lr = 0x82F240D8;
	sub_82F1E940(ctx, base);
loc_82F240D8:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// rlwinm r11,r11,29,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x4;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r9,r9,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// rlwinm r11,r11,29,0,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xE0000000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// beq cr6,0x82f2411c
	if (ctx.cr6.eq) goto loc_82F2411C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82f24128
	goto loc_82F24128;
loc_82F2411C:
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82F24128:
	// rlwimi r11,r10,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82f233a8
	ctx.lr = 0x82F2413C;
	sub_82F233A8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e735e0
	ctx.lr = 0x82F24148;
	sub_82E735E0(ctx, base);
	// lwz r11,80(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f24168
	if (ctx.cr6.eq) goto loc_82F24168;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6e6c0
	ctx.lr = 0x82F24168;
	sub_82E6E6C0(ctx, base);
loc_82F24168:
	// lwz r11,324(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f24194
	if (ctx.cr6.eq) goto loc_82F24194;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,36(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,32(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,316(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 316);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831fc518
	ctx.lr = 0x82F24194;
	sub_831FC518(ctx, base);
loc_82F24194:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F24198:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F241A0"))) PPC_WEAK_FUNC(sub_82F241A0);
PPC_FUNC_IMPL(__imp__sub_82F241A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82F241A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r8,r10,-5752
	ctx.r8.s64 = ctx.r10.s64 + -5752;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82f1d398
	ctx.lr = 0x82F241E4;
	sub_82F1D398(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r30,52(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82f22920
	ctx.lr = 0x82F241FC;
	sub_82F22920(ctx, base);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bne cr6,0x82f2425c
	if (!ctx.cr6.eq) goto loc_82F2425C;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,-1003
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1003, ctx.xer);
	// beq cr6,0x82f24230
	if (ctx.cr6.eq) goto loc_82F24230;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8916
	ctx.r4.s64 = ctx.r11.s64 + 8916;
	// bl 0x82f1e940
	ctx.lr = 0x82F24224;
	sub_82F1E940(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f24320
	goto loc_82F24320;
loc_82F24230:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subfic r11,r11,95
	ctx.xer.ca = ctx.r11.u32 <= 95;
	ctx.r11.s64 = 95 - ctx.r11.s64;
	// divwu r8,r11,r10
	ctx.r8.u32 = ctx.r11.u32 / ctx.r10.u32;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 * 3;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwimi r10,r11,5,25,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0x60) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF9F);
	// rlwimi r9,r10,20,5,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x7F00000) | (ctx.r9.u64 & 0xFFFFFFFFF80FFFFF);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
loc_82F2425C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f233a8
	ctx.lr = 0x82F24268;
	sub_82F233A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82f242c0
	if (!ctx.cr6.eq) goto loc_82F242C0;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82f2428c
	if (!ctx.cr6.eq) goto loc_82F2428C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// b 0x82f242a0
	goto loc_82F242A0;
loc_82F2428C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f242ac
	if (!ctx.cr6.eq) goto loc_82F242AC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,8860
	ctx.r4.s64 = ctx.r11.s64 + 8860;
loc_82F242A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F242A8;
	sub_82F1E940(ctx, base);
	// b 0x82f2431c
	goto loc_82F2431C;
loc_82F242AC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e735c8
	ctx.lr = 0x82F242BC;
	sub_82E735C8(ctx, base);
	// b 0x82f242d0
	goto loc_82F242D0;
loc_82F242C0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e735b0
	ctx.lr = 0x82F242D0;
	sub_82E735B0(ctx, base);
loc_82F242D0:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f242f0
	if (ctx.cr6.eq) goto loc_82F242F0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e6e6c0
	ctx.lr = 0x82F242F0;
	sub_82E6E6C0(ctx, base);
loc_82F242F0:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f2431c
	if (ctx.cr6.eq) goto loc_82F2431C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,36(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,32(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831fc518
	ctx.lr = 0x82F2431C;
	sub_831FC518(ctx, base);
loc_82F2431C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F24320:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F24328"))) PPC_WEAK_FUNC(sub_82F24328);
PPC_FUNC_IMPL(__imp__sub_82F24328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82F24330;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,-5752
	ctx.r6.s64 = ctx.r10.s64 + -5752;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82f1d890
	ctx.lr = 0x82F24364;
	sub_82F1D890(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f22920
	ctx.lr = 0x82F24378;
	sub_82F22920(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bgt cr6,0x82f243c0
	if (ctx.cr6.gt) goto loc_82F243C0;
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,-1002
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1002, ctx.xer);
	// beq cr6,0x82f243b4
	if (ctx.cr6.eq) goto loc_82F243B4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8972
	ctx.r4.s64 = ctx.r11.s64 + 8972;
	// bl 0x82f1e940
	ctx.lr = 0x82F243A8;
	sub_82F1E940(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f24428
	goto loc_82F24428;
loc_82F243B4:
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r11,r10,20,7,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x1F00000) | (ctx.r11.u64 & 0xFFFFFFFFFE0FFFFF);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82F243C0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f233a8
	ctx.lr = 0x82F243CC;
	sub_82F233A8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82e73598
	ctx.lr = 0x82F243D8;
	sub_82E73598(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f243f8
	if (ctx.cr6.eq) goto loc_82F243F8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e6e6c0
	ctx.lr = 0x82F243F8;
	sub_82E6E6C0(ctx, base);
loc_82F243F8:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f24424
	if (ctx.cr6.eq) goto loc_82F24424;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831fc518
	ctx.lr = 0x82F24424;
	sub_831FC518(ctx, base);
loc_82F24424:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F24428:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F24430"))) PPC_WEAK_FUNC(sub_82F24430);
PPC_FUNC_IMPL(__imp__sub_82F24430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82F24438;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,24
	ctx.r11.s64 = ctx.r5.s64 + 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// beq cr6,0x82f24468
	if (ctx.cr6.eq) goto loc_82F24468;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,9036
	ctx.r4.s64 = ctx.r11.s64 + 9036;
	// bl 0x82f1e940
	ctx.lr = 0x82F24464;
	sub_82F1E940(ctx, base);
	// b 0x82f24508
	goto loc_82F24508;
loc_82F24468:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r28,24(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82f233a8
	ctx.lr = 0x82F24474;
	sub_82F233A8(ctx, base);
	// bl 0x82e73890
	ctx.lr = 0x82F24478;
	sub_82E73890(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82f24494
	goto loc_82F24494;
loc_82F24484:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82f2449c
	if (ctx.cr6.eq) goto loc_82F2449C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82F24494:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f24484
	if (!ctx.cr6.eq) goto loc_82F24484;
loc_82F2449C:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f244c0
	if (!ctx.cr6.eq) goto loc_82F244C0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1df10
	ctx.lr = 0x82F244BC;
	sub_82F1DF10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82F244C0:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82f16108
	ctx.lr = 0x82F244C8;
	sub_82F16108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f244f4
	if (ctx.cr0.eq) goto loc_82F244F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f16148
	ctx.lr = 0x82F244D8;
	sub_82F16148(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-136
	ctx.r10.s64 = ctx.r10.s64 + -136;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82f244f8
	goto loc_82F244F8;
loc_82F244F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F244F8:
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_82F24508:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F24510"))) PPC_WEAK_FUNC(sub_82F24510);
PPC_FUNC_IMPL(__imp__sub_82F24510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82F24518;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,328(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// bl 0x82f233a8
	ctx.lr = 0x82F2452C;
	sub_82F233A8(ctx, base);
	// bl 0x82e73890
	ctx.lr = 0x82F24530;
	sub_82E73890(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f245cc
	if (ctx.cr6.eq) goto loc_82F245CC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r27,r11,9112
	ctx.r27.s64 = ctx.r11.s64 + 9112;
	// addi r26,r10,9072
	ctx.r26.s64 = ctx.r10.s64 + 9072;
loc_82F2454C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f24560
	if (!ctx.cr6.eq) goto loc_82F24560;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x82f2456c
	goto loc_82F2456C;
loc_82F24560:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82f2457c
	if (ctx.cr6.lt) goto loc_82F2457C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82F2456C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82f1e940
	ctx.lr = 0x82F24578;
	sub_82F1E940(ctx, base);
	// b 0x82f245c0
	goto loc_82F245C0;
loc_82F2457C:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f245c0
	if (ctx.cr6.eq) goto loc_82F245C0;
	// clrlwi r28,r11,19
	ctx.r28.u64 = ctx.r11.u32 & 0x1FFF;
loc_82F2458C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r24,16(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f233a8
	ctx.lr = 0x82F2459C;
	sub_82F233A8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82e6e720
	ctx.lr = 0x82F245A4;
	sub_82E6E720(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f2458c
	if (!ctx.cr6.eq) goto loc_82F2458C;
loc_82F245C0:
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82f2454c
	if (!ctx.cr6.eq) goto loc_82F2454C;
loc_82F245CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,328(r29)
	PPC_STORE_U32(ctx.r29.u32 + 328, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F245DC"))) PPC_WEAK_FUNC(sub_82F245DC);
PPC_FUNC_IMPL(__imp__sub_82F245DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F245E0"))) PPC_WEAK_FUNC(sub_82F245E0);
PPC_FUNC_IMPL(__imp__sub_82F245E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82F245E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82f233a8
	ctx.lr = 0x82F245F8;
	sub_82F233A8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82e6e6f0
	ctx.lr = 0x82F24600;
	sub_82E6E6F0(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x82f246bc
	if (ctx.cr0.eq) goto loc_82F246BC;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82F2461C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e6e750
	ctx.lr = 0x82F2462C;
	sub_82E6E750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f246d8
	if (ctx.cr0.eq) goto loc_82F246D8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f246a4
	if (!ctx.cr6.eq) goto loc_82F246A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f246a4
	if (ctx.cr0.eq) goto loc_82F246A4;
	// lwz r10,64(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82f2467c
	if (!ctx.cr6.eq) goto loc_82F2467C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f24684
	if (ctx.cr6.lt) goto loc_82F24684;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bne cr6,0x82f246a4
	if (!ctx.cr6.eq) goto loc_82F246A4;
	// lwz r11,288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,288(r28)
	PPC_STORE_U32(ctx.r28.u32 + 288, ctx.r11.u32);
	// b 0x82f246a4
	goto loc_82F246A4;
loc_82F2467C:
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x82f246a4
	if (ctx.cr6.gt) goto loc_82F246A4;
loc_82F24684:
	// slw r10,r24,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
	// and. r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 & ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f246a4
	if (!ctx.cr0.eq) goto loc_82F246A4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// or r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 | ctx.r31.u64;
	// bge cr6,0x82f246a4
	if (!ctx.cr6.lt) goto loc_82F246A4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82F246A4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82f2461c
	if (ctx.cr6.lt) goto loc_82F2461C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// bne cr6,0x82f246c0
	if (!ctx.cr6.eq) goto loc_82F246C0;
loc_82F246BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F246C0:
	// lwz r10,64(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82f246ec
	if (!ctx.cr6.eq) goto loc_82F246EC;
	// lwz r10,288(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// rlwimi r10,r11,28,1,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0x70000000) | (ctx.r10.u64 & 0xFFFFFFFF8FFFFFFF);
	// b 0x82f24710
	goto loc_82F24710;
loc_82F246D8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,9180
	ctx.r4.s64 = ctx.r11.s64 + 9180;
	// bl 0x82f1e940
	ctx.lr = 0x82F246E8;
	sub_82F1E940(ctx, base);
	// b 0x82f24714
	goto loc_82F24714;
loc_82F246EC:
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f246fc
	if (!ctx.cr0.eq) goto loc_82F246FC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82F246FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f24708
	if (ctx.cr6.eq) goto loc_82F24708;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82F24708:
	// lwz r10,288(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// rlwimi r10,r11,20,8,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xF00000) | (ctx.r10.u64 & 0xFFFFFFFFFF0FFFFF);
loc_82F24710:
	// stw r10,288(r28)
	PPC_STORE_U32(ctx.r28.u32 + 288, ctx.r10.u32);
loc_82F24714:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2471C"))) PPC_WEAK_FUNC(sub_82F2471C);
PPC_FUNC_IMPL(__imp__sub_82F2471C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F24720"))) PPC_WEAK_FUNC(sub_82F24720);
PPC_FUNC_IMPL(__imp__sub_82F24720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82F24728;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r24,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r24.u32);
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r24,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// beq cr6,0x82f24760
	if (ctx.cr6.eq) goto loc_82F24760;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,9548
	ctx.r4.s64 = ctx.r11.s64 + 9548;
	// bl 0x82f1e940
	ctx.lr = 0x82F24760;
	sub_82F1E940(ctx, base);
loc_82F24760:
	// lwz r28,92(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lis r23,3328
	ctx.r23.s64 = 218103808;
	// lwz r31,52(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f24784
	if (ctx.cr6.eq) goto loc_82F24784;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82f24788
	if (!ctx.cr6.eq) goto loc_82F24788;
loc_82F24784:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_82F24788:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f247c8
	if (ctx.cr6.eq) goto loc_82F247C8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f247b8
	if (ctx.cr6.eq) goto loc_82F247B8;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// ble cr6,0x82f247c8
	if (!ctx.cr6.gt) goto loc_82F247C8;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// beq cr6,0x82f247c8
	if (ctx.cr6.eq) goto loc_82F247C8;
	// cmplwi cr6,r31,249
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 249, ctx.xer);
	// ble cr6,0x82f247b8
	if (!ctx.cr6.gt) goto loc_82F247B8;
	// cmplwi cr6,r31,251
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 251, ctx.xer);
	// ble cr6,0x82f247c8
	if (!ctx.cr6.gt) goto loc_82F247C8;
loc_82F247B8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,9508
	ctx.r4.s64 = ctx.r11.s64 + 9508;
	// bl 0x82f1e940
	ctx.lr = 0x82F247C8;
	sub_82F1E940(ctx, base);
loc_82F247C8:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r11,r31,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x82f233a8
	ctx.lr = 0x82F247E0;
	sub_82F233A8(ctx, base);
	// bl 0x82e6e6f0
	ctx.lr = 0x82F247E4;
	sub_82E6E6F0(ctx, base);
	// slw r11,r26,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r31.u8 & 0x3F));
	// andi. r11,r11,16404
	ctx.r11.u64 = ctx.r11.u64 & 16404;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f247fc
	if (ctx.cr0.eq) goto loc_82F247FC;
	// stw r26,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r26.u32);
loc_82F247FC:
	// cmplwi cr6,r31,30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 30, ctx.xer);
	// bgt cr6,0x82f24bb8
	if (ctx.cr6.gt) goto loc_82F24BB8;
	// beq cr6,0x82f24b0c
	if (ctx.cr6.eq) goto loc_82F24B0C;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82f24cb4
	if (ctx.cr6.gt) goto loc_82F24CB4;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-616
	ctx.r12.s64 = ctx.r12.s64 + -616;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32014
	ctx.r12.s64 = -2098069504;
	// addi r12,r12,18492
	ctx.r12.s64 = ctx.r12.s64 + 18492;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82F2483C;
	case 1:
		goto loc_82F24884;
	case 2:
		goto loc_82F248B8;
	case 3:
		goto loc_82F248B8;
	case 4:
		goto loc_82F24CB4;
	case 5:
		goto loc_82F24CB4;
	case 6:
		goto loc_82F24924;
	case 7:
		goto loc_82F249BC;
	case 8:
		goto loc_82F24A88;
	case 9:
		goto loc_82F24CB4;
	case 10:
		goto loc_82F24A30;
	case 11:
		goto loc_82F24AF4;
	case 12:
		goto loc_82F248B8;
	case 13:
		goto loc_82F248B8;
	default:
		__builtin_unreachable();
	}
loc_82F2483C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f22160
	ctx.lr = 0x82F24848;
	sub_82F22160(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwimi r11,r3,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// rlwimi r11,r29,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// beq cr6,0x82f24cb4
	if (ctx.cr6.eq) goto loc_82F24CB4;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// li r10,20480
	ctx.r10.s64 = 20480;
	// ori r12,r12,23551
	ctx.r12.u64 = ctx.r12.u64 | 23551;
loc_82F2486C:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwimi r10,r25,10,21,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r25.u32, 10) & 0x400) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFBFF);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82F2487C:
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x82f24cb4
	goto loc_82F24CB4;
loc_82F24884:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f22160
	ctx.lr = 0x82F24890;
	sub_82F22160(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwimi r11,r3,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// rlwimi r11,r29,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// beq cr6,0x82f24cb4
	if (ctx.cr6.eq) goto loc_82F24CB4;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// li r10,24576
	ctx.r10.s64 = 24576;
	// ori r12,r12,27647
	ctx.r12.u64 = ctx.r12.u64 | 27647;
	// b 0x82f2486c
	goto loc_82F2486C;
loc_82F248B8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f22160
	ctx.lr = 0x82F248C4;
	sub_82F22160(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// rlwimi r10,r3,15,16,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 15) & 0x8000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF7FFF);
	// rlwimi r10,r29,0,20,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF000);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bne cr6,0x82f24910
	if (!ctx.cr6.eq) goto loc_82F24910;
	// lbz r10,27(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r9,r9,0,30,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFC03;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82f24cb4
	if (ctx.cr6.eq) goto loc_82F24CB4;
	// ori r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 1024;
	// b 0x82f2487c
	goto loc_82F2487C;
loc_82F24910:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,9468
	ctx.r4.s64 = ctx.r11.s64 + 9468;
loc_82F24918:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F24920;
	sub_82F1E940(ctx, base);
	// b 0x82f24cb4
	goto loc_82F24CB4;
loc_82F24924:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x82f24948
	if (ctx.cr6.eq) goto loc_82F24948;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,9424
	ctx.r4.s64 = ctx.r11.s64 + 9424;
	// bl 0x82f1e940
	ctx.lr = 0x82F24944;
	sub_82F1E940(ctx, base);
	// b 0x82f24958
	goto loc_82F24958;
loc_82F24948:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r10,r11,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_82F24958:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f24430
	ctx.lr = 0x82F24968;
	sub_82F24430(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,9416
	ctx.r5.s64 = ctx.r11.s64 + 9416;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f22058
	ctx.lr = 0x82F24980;
	sub_82F22058(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f24cb4
	if (ctx.cr0.eq) goto loc_82F24CB4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// bl 0x82f1d2b8
	ctx.lr = 0x82F24994;
	sub_82F1D2B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f249b0
	if (ctx.cr0.lt) goto loc_82F249B0;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r11,r10,13,18,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0x2000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x82f24cb4
	goto loc_82F24CB4;
loc_82F249B0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,9372
	ctx.r4.s64 = ctx.r11.s64 + 9372;
	// b 0x82f24918
	goto loc_82F24918;
loc_82F249BC:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x82f249e0
	if (ctx.cr6.eq) goto loc_82F249E0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,9424
	ctx.r4.s64 = ctx.r11.s64 + 9424;
	// bl 0x82f1e940
	ctx.lr = 0x82F249DC;
	sub_82F1E940(ctx, base);
	// b 0x82f249f0
	goto loc_82F249F0;
loc_82F249E0:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r10,r11,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_82F249F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f24430
	ctx.lr = 0x82F24A00;
	sub_82F24430(ctx, base);
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f24cb4
	if (ctx.cr6.eq) goto loc_82F24CB4;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// oris r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 2097152;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82f24cb4
	if (ctx.cr6.eq) goto loc_82F24CB4;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// b 0x82f2487c
	goto loc_82F2487C;
loc_82F24A30:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,9360
	ctx.r5.s64 = ctx.r11.s64 + 9360;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f22058
	ctx.lr = 0x82F24A48;
	sub_82F22058(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f24a88
	if (ctx.cr0.eq) goto loc_82F24A88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// bl 0x82f1d2b8
	ctx.lr = 0x82F24A5C;
	sub_82F1D2B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f24a78
	if (ctx.cr0.lt) goto loc_82F24A78;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x82f24a8c
	goto loc_82F24A8C;
loc_82F24A78:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,9308
	ctx.r4.s64 = ctx.r11.s64 + 9308;
	// bl 0x82f1e940
	ctx.lr = 0x82F24A88;
	sub_82F1E940(ctx, base);
loc_82F24A88:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_82F24A8C:
	// lwz r10,96(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// bne cr6,0x82f24ad0
	if (!ctx.cr6.eq) goto loc_82F24AD0;
	// lbz r9,27(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 27);
	// rlwinm r11,r11,0,30,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFC03;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// subf r10,r10,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// rlwimi r11,r10,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x82f24ae0
	goto loc_82F24AE0;
loc_82F24AD0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,9264
	ctx.r4.s64 = ctx.r11.s64 + 9264;
	// bl 0x82f1e940
	ctx.lr = 0x82F24AE0;
	sub_82F1E940(ctx, base);
loc_82F24AE0:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82F24AE4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f24430
	ctx.lr = 0x82F24AF0;
	sub_82F24430(ctx, base);
	// b 0x82f24cb4
	goto loc_82F24CB4;
loc_82F24AF4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f21be0
	ctx.lr = 0x82F24B04;
	sub_82F21BE0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x82f24cac
	goto loc_82F24CAC;
loc_82F24B0C:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// beq cr6,0x82f24b34
	if (ctx.cr6.eq) goto loc_82F24B34;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,9216
	ctx.r4.s64 = ctx.r11.s64 + 9216;
	// bl 0x82f1e940
	ctx.lr = 0x82F24B30;
	sub_82F1E940(ctx, base);
	// b 0x82f24b94
	goto loc_82F24B94;
loc_82F24B34:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82f233a8
	ctx.lr = 0x82F24B40;
	sub_82F233A8(ctx, base);
	// bl 0x82e73890
	ctx.lr = 0x82F24B44;
	sub_82E73890(ctx, base);
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f24ba8
	if (ctx.cr6.eq) goto loc_82F24BA8;
loc_82F24B54:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82f24b6c
	if (ctx.cr6.eq) goto loc_82F24B6C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f24b54
	if (!ctx.cr6.eq) goto loc_82F24B54;
loc_82F24B6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f24ba8
	if (ctx.cr6.eq) goto loc_82F24BA8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82f24ba0
	if (ctx.cr6.eq) goto loc_82F24BA0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,9196
	ctx.r4.s64 = ctx.r11.s64 + 9196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1e940
	ctx.lr = 0x82F24B94;
	sub_82F1E940(ctx, base);
loc_82F24B94:
	// lis r24,-32768
	ctx.r24.s64 = -2147483648;
	// ori r24,r24,16389
	ctx.r24.u64 = ctx.r24.u64 | 16389;
	// b 0x82f24cfc
	goto loc_82F24CFC;
loc_82F24BA0:
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// b 0x82f24cb4
	goto loc_82F24CB4;
loc_82F24BA8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1df10
	ctx.lr = 0x82F24BB4;
	sub_82F1DF10(ctx, base);
	// b 0x82f24cb4
	goto loc_82F24CB4;
loc_82F24BB8:
	// cmplwi cr6,r31,250
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 250, ctx.xer);
	// beq cr6,0x82f24c0c
	if (ctx.cr6.eq) goto loc_82F24C0C;
	// cmplwi cr6,r31,251
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 251, ctx.xer);
	// bne cr6,0x82f24cb4
	if (!ctx.cr6.eq) goto loc_82F24CB4;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,19,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
	// ori r11,r11,36864
	ctx.r11.u64 = ctx.r11.u64 | 36864;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq cr6,0x82f24bf8
	if (ctx.cr6.eq) goto loc_82F24BF8;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r11,r25,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// b 0x82f24c04
	goto loc_82F24C04;
loc_82F24BF8:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82F24C04:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82f24ae4
	goto loc_82F24AE4;
loc_82F24C0C:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// ori r11,r11,45056
	ctx.r11.u64 = ctx.r11.u64 | 45056;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq cr6,0x82f24c3c
	if (ctx.cr6.eq) goto loc_82F24C3C;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r11,r25,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// b 0x82f24c48
	goto loc_82F24C48;
loc_82F24C3C:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82F24C48:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f24430
	ctx.lr = 0x82F24C58;
	sub_82F24430(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,9360
	ctx.r5.s64 = ctx.r11.s64 + 9360;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f22058
	ctx.lr = 0x82F24C70;
	sub_82F22058(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f24cb4
	if (ctx.cr0.eq) goto loc_82F24CB4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// bl 0x82f1d2b8
	ctx.lr = 0x82F24C84;
	sub_82F1D2B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f24c9c
	if (ctx.cr0.lt) goto loc_82F24C9C;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// b 0x82f2487c
	goto loc_82F2487C;
loc_82F24C9C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,9308
	ctx.r4.s64 = ctx.r11.s64 + 9308;
	// bl 0x82f1e940
	ctx.lr = 0x82F24CAC;
	sub_82F1E940(ctx, base);
loc_82F24CAC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82f24cfc
	if (ctx.cr6.lt) goto loc_82F24CFC;
loc_82F24CB4:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f24cfc
	if (ctx.cr0.eq) goto loc_82F24CFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f233a8
	ctx.lr = 0x82F24CC8;
	sub_82F233A8(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x82e73878
	ctx.lr = 0x82F24CD0;
	sub_82E73878(ctx, base);
	// lwz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f24cfc
	if (ctx.cr6.eq) goto loc_82F24CFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,36(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,32(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,316(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// bl 0x831fc518
	ctx.lr = 0x82F24CFC;
	sub_831FC518(ctx, base);
loc_82F24CFC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F24D08"))) PPC_WEAK_FUNC(sub_82F24D08);
PPC_FUNC_IMPL(__imp__sub_82F24D08) {
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
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f24d34
	if (!ctx.cr6.eq) goto loc_82F24D34;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f24e3c
	goto loc_82F24E3C;
loc_82F24D34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f245e0
	ctx.lr = 0x82F24D3C;
	sub_82F245E0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f24d9c
	if (!ctx.cr0.eq) goto loc_82F24D9C;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f24d64
	if (ctx.cr0.eq) goto loc_82F24D64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9880
	ctx.r4.s64 = ctx.r11.s64 + 9880;
	// bl 0x82f1e940
	ctx.lr = 0x82F24D64;
	sub_82F1E940(ctx, base);
loc_82F24D64:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f24d80
	if (ctx.cr0.eq) goto loc_82F24D80;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9808
	ctx.r4.s64 = ctx.r11.s64 + 9808;
	// bl 0x82f1e940
	ctx.lr = 0x82F24D80;
	sub_82F1E940(ctx, base);
loc_82F24D80:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f24d9c
	if (ctx.cr0.eq) goto loc_82F24D9C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9736
	ctx.r4.s64 = ctx.r11.s64 + 9736;
	// bl 0x82f1e940
	ctx.lr = 0x82F24D9C;
	sub_82F1E940(ctx, base);
loc_82F24D9C:
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// rlwinm. r11,r10,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f24db4
	if (ctx.cr0.eq) goto loc_82F24DB4;
	// lwz r9,288(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// oris r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 262144;
	// stw r9,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r9.u32);
loc_82F24DB4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f24e08
	if (!ctx.cr6.eq) goto loc_82F24E08;
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f24de0
	if (ctx.cr0.eq) goto loc_82F24DE0;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f24de0
	if (ctx.cr0.eq) goto loc_82F24DE0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9668
	ctx.r4.s64 = ctx.r11.s64 + 9668;
	// bl 0x82f1e940
	ctx.lr = 0x82F24DE0;
	sub_82F1E940(ctx, base);
loc_82F24DE0:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f24e08
	if (ctx.cr0.eq) goto loc_82F24E08;
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f24e08
	if (ctx.cr0.eq) goto loc_82F24E08;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9600
	ctx.r4.s64 = ctx.r11.s64 + 9600;
	// bl 0x82f1e940
	ctx.lr = 0x82F24E08;
	sub_82F1E940(ctx, base);
loc_82F24E08:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f24e20
	if (ctx.cr6.eq) goto loc_82F24E20;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x82f24e3c
	goto loc_82F24E3C;
loc_82F24E20:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f233a8
	ctx.lr = 0x82F24E2C;
	sub_82F233A8(ctx, base);
	// lwz r5,292(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x82e6ac80
	ctx.lr = 0x82F24E38;
	sub_82E6AC80(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F24E3C:
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

__attribute__((alias("__imp__sub_82F24E50"))) PPC_WEAK_FUNC(sub_82F24E50);
PPC_FUNC_IMPL(__imp__sub_82F24E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82F24E58;
	__savegprlr_25(ctx, base);
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82f24d08
	ctx.lr = 0x82F24E6C;
	sub_82F24D08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f252a8
	if (ctx.cr0.lt) goto loc_82F252A8;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f24eb4
	if (ctx.cr0.eq) goto loc_82F24EB4;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f24ea8
	if (!ctx.cr6.eq) goto loc_82F24EA8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,10128
	ctx.r4.s64 = ctx.r11.s64 + 10128;
	// bl 0x82f1e940
	ctx.lr = 0x82F24E9C;
	sub_82F1E940(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x82f252a8
	goto loc_82F252A8;
loc_82F24EA8:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f233a8
	ctx.lr = 0x82F24EB0;
	sub_82F233A8(ctx, base);
	// bl 0x82e72c88
	ctx.lr = 0x82F24EB4;
	sub_82E72C88(ctx, base);
loc_82F24EB4:
	// lwz r29,316(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f24ee0
	if (ctx.cr6.eq) goto loc_82F24EE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f7238
	ctx.lr = 0x82F24EC8;
	sub_831F7238(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f233a8
	ctx.lr = 0x82F24ED8;
	sub_82F233A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e6aca0
	ctx.lr = 0x82F24EE0;
	sub_82E6ACA0(ctx, base);
loc_82F24EE0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f233a8
	ctx.lr = 0x82F24EEC;
	sub_82F233A8(ctx, base);
	// bl 0x82e73600
	ctx.lr = 0x82F24EF0;
	sub_82E73600(ctx, base);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f24f1c
	if (ctx.cr6.eq) goto loc_82F24F1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f233a8
	ctx.lr = 0x82F24F08;
	sub_82F233A8(ctx, base);
	// bl 0x82e73890
	ctx.lr = 0x82F24F0C;
	sub_82E73890(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x831f71c8
	ctx.lr = 0x82F24F1C;
	sub_831F71C8(ctx, base);
loc_82F24F1C:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f24f88
	if (ctx.cr6.eq) goto loc_82F24F88;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f24f68
	if (ctx.cr6.eq) goto loc_82F24F68;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,260
	ctx.r8.s64 = 260;
	// addi r7,r1,672
	ctx.r7.s64 = ctx.r1.s64 + 672;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82beac80
	ctx.lr = 0x82F24F50;
	sub_82BEAC80(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f233a8
	ctx.lr = 0x82F24F5C;
	sub_82F233A8(ctx, base);
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82e735f8
	ctx.lr = 0x82F24F68;
	sub_82E735F8(ctx, base);
loc_82F24F68:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// bl 0x831fbab8
	ctx.lr = 0x82F24F74;
	sub_831FBAB8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f233a8
	ctx.lr = 0x82F24F80;
	sub_82F233A8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82e6e668
	ctx.lr = 0x82F24F88;
	sub_82E6E668(ctx, base);
loc_82F24F88:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f233a8
	ctx.lr = 0x82F24F94;
	sub_82F233A8(ctx, base);
	// bl 0x82e73918
	ctx.lr = 0x82F24F98;
	sub_82E73918(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82ee3870
	ctx.lr = 0x82F24FA0;
	sub_82EE3870(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f252a8
	if (ctx.cr0.lt) goto loc_82F252A8;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f233a8
	ctx.lr = 0x82F24FBC;
	sub_82F233A8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F24FD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F24FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e73608
	ctx.lr = 0x82F25008;
	sub_82E73608(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f2509c
	if (ctx.cr0.lt) goto loc_82F2509C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f25040
	if (ctx.cr6.eq) goto loc_82F25040;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r25,r11,-17624
	ctx.r25.s64 = ctx.r11.s64 + -17624;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F25034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82e6ef90
	ctx.lr = 0x82F25040;
	sub_82E6EF90(ctx, base);
loc_82F25040:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f2509c
	if (ctx.cr6.eq) goto loc_82F2509C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2509c
	if (ctx.cr0.eq) goto loc_82F2509C;
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r8,r11,-13168
	ctx.r8.s64 = ctx.r11.s64 + -13168;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x83205d50
	ctx.lr = 0x82F25078;
	sub_83205D50(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82f2509c
	if (!ctx.cr0.eq) goto loc_82F2509C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F25094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f252a8
	goto loc_82F252A8;
loc_82F2509C:
	// lis r11,-30602
	ctx.r11.s64 = -2005532672;
	// ori r11,r11,2945
	ctx.r11.u64 = ctx.r11.u64 | 2945;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f250c4
	if (!ctx.cr6.eq) goto loc_82F250C4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10048
	ctx.r4.s64 = ctx.r11.s64 + 10048;
	// bl 0x82f1e940
	ctx.lr = 0x82F250BC;
	sub_82F1E940(ctx, base);
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_82F250C4:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// blt cr6,0x82f252a4
	if (ctx.cr6.lt) goto loc_82F252A4;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f252a4
	if (!ctx.cr0.eq) goto loc_82F252A4;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f250f8
	if (ctx.cr6.eq) goto loc_82F250F8;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r29,r10,10,15,21
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1FC00;
loc_82F250F8:
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f25104
	if (ctx.cr0.eq) goto loc_82F25104;
	// oris r29,r29,4
	ctx.r29.u64 = ctx.r29.u64 | 262144;
loc_82F25104:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// addi r30,r1,116
	ctx.r30.s64 = ctx.r1.s64 + 116;
	// addi r28,r10,-17192
	ctx.r28.s64 = ctx.r10.s64 + -17192;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F25120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2513C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x831fc6c0
	ctx.lr = 0x82F25154;
	sub_831FC6C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f25168
	if (ctx.cr0.lt) goto loc_82F25168;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f252a4
	if (ctx.cr6.eq) goto loc_82F252A4;
loc_82F25168:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// sth r27,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, ctx.r27.u16);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r4,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bge cr6,0x82f251a8
	if (!ctx.cr6.lt) goto loc_82F251A8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r7,r11,10000
	ctx.r7.s64 = ctx.r11.s64 + 10000;
	// b 0x82f251b4
	goto loc_82F251B4;
loc_82F251A8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r7,r11,9948
	ctx.r7.s64 = ctx.r11.s64 + 9948;
loc_82F251B4:
	// addi r6,r10,-18112
	ctx.r6.s64 = ctx.r10.s64 + -18112;
	// beq cr6,0x82f251c8
	if (ctx.cr6.eq) goto loc_82F251C8;
	// li r5,7101
	ctx.r5.s64 = 7101;
	// bl 0x82eea308
	ctx.lr = 0x82F251C4;
	sub_82EEA308(ctx, base);
	// b 0x82f251d0
	goto loc_82F251D0;
loc_82F251C8:
	// li r5,7102
	ctx.r5.s64 = 7102;
	// bl 0x82eea530
	ctx.lr = 0x82F251D0;
	sub_82EEA530(ctx, base);
loc_82F251D0:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// addi r28,r11,-11880
	ctx.r28.s64 = ctx.r11.s64 + -11880;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F251F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
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
	ctx.lr = 0x82F2520C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x831fc6c0
	ctx.lr = 0x82F25224;
	sub_831FC6C0(ctx, base);
	// lhz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f25238
	if (ctx.cr0.eq) goto loc_82F25238;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f1d0a8
	ctx.lr = 0x82F25238;
	sub_82F1D0A8(ctx, base);
loc_82F25238:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// addi r29,r11,-11880
	ctx.r29.s64 = ctx.r11.s64 + -11880;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F25258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F25274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x832031c0
	ctx.lr = 0x82F25290;
	sub_832031C0(ctx, base);
	// lhz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f252a4
	if (ctx.cr0.eq) goto loc_82F252A4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f1d0a8
	ctx.lr = 0x82F252A4;
	sub_82F1D0A8(ctx, base);
loc_82F252A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82F252A8:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F252B0"))) PPC_WEAK_FUNC(sub_82F252B0);
PPC_FUNC_IMPL(__imp__sub_82F252B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F252B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r30,r10,16389
	ctx.r30.u64 = ctx.r10.u64 | 16389;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f252e8
	if (ctx.cr6.eq) goto loc_82F252E8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,10400
	ctx.r4.s64 = ctx.r11.s64 + 10400;
	// bl 0x82f1e940
	ctx.lr = 0x82F252E4;
	sub_82F1E940(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82F252E8:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f25308
	if (!ctx.cr0.eq) goto loc_82F25308;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10328
	ctx.r4.s64 = ctx.r11.s64 + 10328;
	// bl 0x82f1e940
	ctx.lr = 0x82F25304;
	sub_82F1E940(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82F25308:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f25328
	if (ctx.cr6.eq) goto loc_82F25328;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10276
	ctx.r4.s64 = ctx.r11.s64 + 10276;
	// bl 0x82f1e940
	ctx.lr = 0x82F25324;
	sub_82F1E940(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82F25328:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f25348
	if (ctx.cr6.eq) goto loc_82F25348;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10208
	ctx.r4.s64 = ctx.r11.s64 + 10208;
	// bl 0x82f1e940
	ctx.lr = 0x82F25344;
	sub_82F1E940(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82F25348:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82f253b8
	if (ctx.cr6.lt) goto loc_82F253B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f24510
	ctx.lr = 0x82F25358;
	sub_82F24510(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// bl 0x82f24d08
	ctx.lr = 0x82F25368;
	sub_82F24D08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f233a8
	ctx.lr = 0x82F25374;
	sub_82F233A8(ctx, base);
	// bl 0x82e72c88
	ctx.lr = 0x82F25378;
	sub_82E72C88(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f233a8
	ctx.lr = 0x82F25384;
	sub_82F233A8(ctx, base);
	// bl 0x82e73890
	ctx.lr = 0x82F25388;
	sub_82E73890(ctx, base);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r4,r10,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// beq cr6,0x82f253a4
	if (ctx.cr6.eq) goto loc_82F253A4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831f7228
	ctx.lr = 0x82F253A4;
	sub_831F7228(ctx, base);
loc_82F253A4:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82f1de60
	ctx.lr = 0x82F253B8;
	sub_82F1DE60(ctx, base);
loc_82F253B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F253C4"))) PPC_WEAK_FUNC(sub_82F253C4);
PPC_FUNC_IMPL(__imp__sub_82F253C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F253C8"))) PPC_WEAK_FUNC(sub_82F253C8);
PPC_FUNC_IMPL(__imp__sub_82F253C8) {
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
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// beq cr6,0x82f25448
	if (ctx.cr6.eq) goto loc_82F25448;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x82f25430
	if (ctx.cr6.eq) goto loc_82F25430;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x82f2540c
	if (ctx.cr6.eq) goto loc_82F2540C;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82f254b0
	if (!ctx.cr6.eq) goto loc_82F254B0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,10600
	ctx.r4.s64 = ctx.r11.s64 + 10600;
	// b 0x82f25438
	goto loc_82F25438;
loc_82F2540C:
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// beq cr6,0x82f25424
	if (ctx.cr6.eq) goto loc_82F25424;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,10548
	ctx.r4.s64 = ctx.r11.s64 + 10548;
	// b 0x82f25438
	goto loc_82F25438;
loc_82F25424:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,10496
	ctx.r4.s64 = ctx.r11.s64 + 10496;
	// b 0x82f25438
	goto loc_82F25438;
loc_82F25430:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,10440
	ctx.r4.s64 = ctx.r11.s64 + 10440;
loc_82F25438:
	// bl 0x82f1e940
	ctx.lr = 0x82F2543C;
	sub_82F1E940(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x82f254b0
	goto loc_82F254B0;
loc_82F25448:
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x82f254b0
	if (ctx.cr6.gt) goto loc_82F254B0;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-584
	ctx.r12.s64 = ctx.r12.s64 + -584;
	// lbzx r0,r12,r10
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// lis r12,-32014
	ctx.r12.s64 = -2098069504;
	// addi r12,r12,21624
	ctx.r12.s64 = ctx.r12.s64 + 21624;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82F254A0;
	case 1:
		goto loc_82F25498;
	case 2:
		goto loc_82F25478;
	case 3:
		goto loc_82F25478;
	case 4:
		goto loc_82F25478;
	case 5:
		goto loc_82F25480;
	case 6:
		goto loc_82F25490;
	case 7:
		goto loc_82F254A8;
	case 8:
		goto loc_82F25488;
	default:
		__builtin_unreachable();
	}
loc_82F25478:
	// bl 0x82f23b78
	ctx.lr = 0x82F2547C;
	sub_82F23B78(ctx, base);
	// b 0x82f254ac
	goto loc_82F254AC;
loc_82F25480:
	// bl 0x82f24720
	ctx.lr = 0x82F25484;
	sub_82F24720(ctx, base);
	// b 0x82f254ac
	goto loc_82F254AC;
loc_82F25488:
	// bl 0x82f252b0
	ctx.lr = 0x82F2548C;
	sub_82F252B0(ctx, base);
	// b 0x82f254ac
	goto loc_82F254AC;
loc_82F25490:
	// bl 0x82f22ef0
	ctx.lr = 0x82F25494;
	sub_82F22EF0(ctx, base);
	// b 0x82f254ac
	goto loc_82F254AC;
loc_82F25498:
	// bl 0x82f241a0
	ctx.lr = 0x82F2549C;
	sub_82F241A0(ctx, base);
	// b 0x82f254ac
	goto loc_82F254AC;
loc_82F254A0:
	// bl 0x82f24328
	ctx.lr = 0x82F254A4;
	sub_82F24328(ctx, base);
	// b 0x82f254ac
	goto loc_82F254AC;
loc_82F254A8:
	// bl 0x82f23468
	ctx.lr = 0x82F254AC;
	sub_82F23468(ctx, base);
loc_82F254AC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82F254B0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F254C4"))) PPC_WEAK_FUNC(sub_82F254C4);
PPC_FUNC_IMPL(__imp__sub_82F254C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F254C8"))) PPC_WEAK_FUNC(sub_82F254C8);
PPC_FUNC_IMPL(__imp__sub_82F254C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F254D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f25de4
	if (!ctx.cr6.eq) goto loc_82F25DE4;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f25534
	if (ctx.cr6.eq) goto loc_82F25534;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82F25508:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f25568
	if (ctx.cr6.eq) goto loc_82F25568;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r9.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// bdnz 0x82f25508
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F25508;
loc_82F25534:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r4,98
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 98, ctx.xer);
	// bgt cr6,0x82f25d7c
	if (ctx.cr6.gt) goto loc_82F25D7C;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-568
	ctx.r12.s64 = ctx.r12.s64 + -568;
	// rlwinm r0,r4,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32014
	ctx.r12.s64 = -2098069504;
	// addi r12,r12,21864
	ctx.r12.s64 = ctx.r12.s64 + 21864;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82F2567C;
	case 1:
		goto loc_82F2558C;
	case 2:
		goto loc_82F2558C;
	case 3:
		goto loc_82F25594;
	case 4:
		goto loc_82F2558C;
	case 5:
		goto loc_82F2558C;
	case 6:
		goto loc_82F255A8;
	case 7:
		goto loc_82F2567C;
	case 8:
		goto loc_82F25664;
	case 9:
		goto loc_82F25684;
	case 10:
		goto loc_82F25698;
	case 11:
		goto loc_82F2558C;
	case 12:
		goto loc_82F256A4;
	case 13:
		goto loc_82F2558C;
	case 14:
		goto loc_82F256B8;
	case 15:
		goto loc_82F256C8;
	case 16:
		goto loc_82F256C8;
	case 17:
		goto loc_82F256C8;
	case 18:
		goto loc_82F256C8;
	case 19:
		goto loc_82F256C8;
	case 20:
		goto loc_82F256C8;
	case 21:
		goto loc_82F256C8;
	case 22:
		goto loc_82F256C8;
	case 23:
		goto loc_82F256C8;
	case 24:
		goto loc_82F2571C;
	case 25:
		goto loc_82F2571C;
	case 26:
		goto loc_82F25758;
	case 27:
		goto loc_82F25768;
	case 28:
		goto loc_82F25778;
	case 29:
		goto loc_82F25788;
	case 30:
		goto loc_82F257A0;
	case 31:
		goto loc_82F256C8;
	case 32:
		goto loc_82F257D0;
	case 33:
		goto loc_82F256C8;
	case 34:
		goto loc_82F257D0;
	case 35:
		goto loc_82F256C8;
	case 36:
		goto loc_82F25758;
	case 37:
		goto loc_82F25778;
	case 38:
		goto loc_82F257A0;
	case 39:
		goto loc_82F2571C;
	case 40:
		goto loc_82F257B0;
	case 41:
		goto loc_82F25840;
	case 42:
		goto loc_82F2586C;
	case 43:
		goto loc_82F25894;
	case 44:
		goto loc_82F258B0;
	case 45:
		goto loc_82F25938;
	case 46:
		goto loc_82F2558C;
	case 47:
		goto loc_82F2595C;
	case 48:
		goto loc_82F2558C;
	case 49:
		goto loc_82F2558C;
	case 50:
		goto loc_82F2558C;
	case 51:
		goto loc_82F259A4;
	case 52:
		goto loc_82F2558C;
	case 53:
		goto loc_82F259F4;
	case 54:
		goto loc_82F25A20;
	case 55:
		goto loc_82F25A4C;
	case 56:
		goto loc_82F2558C;
	case 57:
		goto loc_82F25A94;
	case 58:
		goto loc_82F25D7C;
	case 59:
		goto loc_82F25D7C;
	case 60:
		goto loc_82F25AE4;
	case 61:
		goto loc_82F25AFC;
	case 62:
		goto loc_82F2558C;
	case 63:
		goto loc_82F25B04;
	case 64:
		goto loc_82F25B64;
	case 65:
		goto loc_82F25B94;
	case 66:
		goto loc_82F25BB4;
	case 67:
		goto loc_82F25BF4;
	case 68:
		goto loc_82F2558C;
	case 69:
		goto loc_82F2558C;
	case 70:
		goto loc_82F25C2C;
	case 71:
		goto loc_82F25C40;
	case 72:
		goto loc_82F25C40;
	case 73:
		goto loc_82F25C68;
	case 74:
		goto loc_82F2558C;
	case 75:
		goto loc_82F2558C;
	case 76:
		goto loc_82F25C90;
	case 77:
		goto loc_82F25D1C;
	case 78:
		goto loc_82F25D1C;
	case 79:
		goto loc_82F25D1C;
	case 80:
		goto loc_82F25D1C;
	case 81:
		goto loc_82F25D1C;
	case 82:
		goto loc_82F25D1C;
	case 83:
		goto loc_82F25D1C;
	case 84:
		goto loc_82F25D1C;
	case 85:
		goto loc_82F25D1C;
	case 86:
		goto loc_82F25D1C;
	case 87:
		goto loc_82F25D1C;
	case 88:
		goto loc_82F25D1C;
	case 89:
		goto loc_82F25D1C;
	case 90:
		goto loc_82F25D7C;
	case 91:
		goto loc_82F25D1C;
	case 92:
		goto loc_82F25D1C;
	case 93:
		goto loc_82F25D1C;
	case 94:
		goto loc_82F25D1C;
	case 95:
		goto loc_82F25D1C;
	case 96:
		goto loc_82F25D4C;
	case 97:
		goto loc_82F25D4C;
	case 98:
		goto loc_82F25D4C;
	default:
		__builtin_unreachable();
	}
loc_82F25568:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,6332
	ctx.r6.s64 = ctx.r11.s64 + 6332;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x82eea308
	ctx.lr = 0x82F25580;
	sub_82EEA308(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// b 0x82f25de4
	goto loc_82F25DE4;
loc_82F2558C:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F25594:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82f16268
	ctx.lr = 0x82F255A0;
	sub_82F16268(ctx, base);
loc_82F255A0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F255A8:
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f25d7c
	if (ctx.cr6.eq) goto loc_82F25D7C;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f255d8
	if (ctx.cr6.eq) goto loc_82F255D8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,10672
	ctx.r4.s64 = ctx.r11.s64 + 10672;
	// bl 0x82f1e940
	ctx.lr = 0x82F255D4;
	sub_82F1E940(ctx, base);
	// b 0x82f25640
	goto loc_82F25640;
loc_82F255D8:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f255fc
	if (!ctx.cr6.eq) goto loc_82F255FC;
	// stw r27,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f22b80
	ctx.lr = 0x82F255F0;
	sub_82F22B80(ctx, base);
	// lwz r4,96(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r3,312(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// bl 0x82e73588
	ctx.lr = 0x82F255FC;
	sub_82E73588(ctx, base);
loc_82F255FC:
	// lwz r3,128(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r30,312(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F25614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F25630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e73590
	ctx.lr = 0x82F25640;
	sub_82E73590(ctx, base);
loc_82F25640:
	// lwz r3,128(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f25d7c
	if (ctx.cr6.eq) goto loc_82F25D7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2565C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r28.u32);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F25664:
	// lwz r11,284(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f2567c
	if (!ctx.cr6.eq) goto loc_82F2567C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,284(r29)
	PPC_STORE_U32(ctx.r29.u32 + 284, ctx.r11.u32);
loc_82F2567C:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F25684:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82F25688:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82f253c8
	ctx.lr = 0x82F25694;
	sub_82F253C8(ctx, base);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F25698:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r27,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r27.u32);
	// b 0x82f25688
	goto loc_82F25688;
loc_82F256A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82f21770
	ctx.lr = 0x82F256B4;
	sub_82F21770(ctx, base);
	// b 0x82f255a0
	goto loc_82F255A0;
loc_82F256B8:
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F256C8:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// ble cr6,0x82f256e8
	if (!ctx.cr6.gt) goto loc_82F256E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82f9e9f0
	ctx.lr = 0x82F256E4;
	sub_82F9E9F0(ctx, base);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
loc_82F256E8:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// ble cr6,0x82f25d7c
	if (!ctx.cr6.gt) goto loc_82F25D7C;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
loc_82F256FC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82f256fc
	if (!ctx.cr0.eq) goto loc_82F256FC;
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F2571C:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// ble cr6,0x82f25d7c
	if (!ctx.cr6.gt) goto loc_82F25D7C;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
loc_82F25738:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82f25738
	if (!ctx.cr0.eq) goto loc_82F25738;
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F25758:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F25768:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F25778:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F25788:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82F25794:
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_82F25798:
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F257A0:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x82f25794
	goto loc_82F25794;
loc_82F257B0:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F257D0:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// ble cr6,0x82f257f0
	if (!ctx.cr6.gt) goto loc_82F257F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82f9e9f0
	ctx.lr = 0x82F257EC;
	sub_82F9E9F0(ctx, base);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
loc_82F257F0:
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// ble cr6,0x82f25824
	if (!ctx.cr6.gt) goto loc_82F25824;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_82F25808:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82f25808
	if (!ctx.cr0.eq) goto loc_82F25808;
loc_82F25824:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// b 0x82f25798
	goto loc_82F25798;
loc_82F25840:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f25d7c
	if (ctx.cr6.eq) goto loc_82F25D7C;
loc_82F25850:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f25850
	if (!ctx.cr6.eq) goto loc_82F25850;
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F2586C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82f16108
	ctx.lr = 0x82F25874;
	sub_82F16108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f2567c
	if (ctx.cr0.eq) goto loc_82F2567C;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r5,0
	ctx.r5.s64 = 0;
loc_82F25884:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r11,10664
	ctx.r6.s64 = ctx.r11.s64 + 10664;
loc_82F2588C:
	// bl 0x82f162e0
	ctx.lr = 0x82F25890;
	sub_82F162E0(ctx, base);
	// b 0x82f255a0
	goto loc_82F255A0;
loc_82F25894:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82f16108
	ctx.lr = 0x82F2589C;
	sub_82F16108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f2567c
	if (ctx.cr0.eq) goto loc_82F2567C;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x82f25884
	goto loc_82F25884;
loc_82F258B0:
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq cr6,0x82f25914
	if (ctx.cr6.eq) goto loc_82F25914;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82f25914
	if (!ctx.cr6.eq) goto loc_82F25914;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1beb0
	ctx.lr = 0x82F258E4;
	sub_82F1BEB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f25914
	if (!ctx.cr0.eq) goto loc_82F25914;
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F25908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f25914
	if (!ctx.cr0.eq) goto loc_82F25914;
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82F25914:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82f16108
	ctx.lr = 0x82F2591C;
	sub_82F16108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f2567c
	if (ctx.cr0.eq) goto loc_82F2567C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,10656
	ctx.r6.s64 = ctx.r11.s64 + 10656;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x82f2588c
	goto loc_82F2588C;
loc_82F25938:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82f16108
	ctx.lr = 0x82F25940;
	sub_82F16108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f2567c
	if (ctx.cr0.eq) goto loc_82F2567C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r6,r11,10656
	ctx.r6.s64 = ctx.r11.s64 + 10656;
	// b 0x82f2588c
	goto loc_82F2588C;
loc_82F2595C:
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f25d7c
	if (ctx.cr6.eq) goto loc_82F25D7C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82f25d7c
	if (!ctx.cr6.eq) goto loc_82F25D7C;
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F25994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f25d7c
	if (!ctx.cr0.eq) goto loc_82F25D7C;
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F259A4:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f259dc
	if (ctx.cr6.eq) goto loc_82F259DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,2022
	ctx.r5.s64 = 2022;
	// addi r6,r11,21328
	ctx.r6.s64 = ctx.r11.s64 + 21328;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x82eea308
	ctx.lr = 0x82F259CC;
	sub_82EEA308(ctx, base);
	// li r11,2257
	ctx.r11.s64 = 2257;
	// stw r27,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r27.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F259DC:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82f1c680
	ctx.lr = 0x82F259EC;
	sub_82F1C680(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F259F4:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f25a14
	if (ctx.cr6.eq) goto loc_82F25A14;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2018
	ctx.r5.s64 = 2018;
	// addi r6,r11,21288
	ctx.r6.s64 = ctx.r11.s64 + 21288;
	// b 0x82f25b50
	goto loc_82F25B50;
loc_82F25A14:
	// lis r11,3328
	ctx.r11.s64 = 218103808;
loc_82F25A18:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F25A20:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f25a44
	if (ctx.cr6.eq) goto loc_82F25A44;
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f25d7c
	if (!ctx.cr6.eq) goto loc_82F25D7C;
	// lis r11,3072
	ctx.r11.s64 = 201326592;
	// b 0x82f25a18
	goto loc_82F25A18;
loc_82F25A44:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// b 0x82f25a18
	goto loc_82F25A18;
loc_82F25A4C:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82f25a70
	if (ctx.cr6.eq) goto loc_82F25A70;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2010
	ctx.r5.s64 = 2010;
	// addi r6,r11,21208
	ctx.r6.s64 = ctx.r11.s64 + 21208;
	// b 0x82f25b50
	goto loc_82F25B50;
loc_82F25A70:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f25a8c
	if (ctx.cr6.eq) goto loc_82F25A8C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2012
	ctx.r5.s64 = 2012;
	// addi r6,r11,21160
	ctx.r6.s64 = ctx.r11.s64 + 21160;
	// b 0x82f25b50
	goto loc_82F25B50;
loc_82F25A8C:
	// lis r11,1536
	ctx.r11.s64 = 100663296;
	// b 0x82f25a18
	goto loc_82F25A18;
loc_82F25A94:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f25acc
	if (ctx.cr6.eq) goto loc_82F25ACC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,2022
	ctx.r5.s64 = 2022;
	// addi r6,r11,21072
	ctx.r6.s64 = ctx.r11.s64 + 21072;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x82eea308
	ctx.lr = 0x82F25ABC;
	sub_82EEA308(ctx, base);
	// li r11,228
	ctx.r11.s64 = 228;
	// stw r27,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r27.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F25ACC:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82f1c878
	ctx.lr = 0x82F25ADC;
	sub_82F1C878(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F25AE4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82F25AE8:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82f21168
	ctx.lr = 0x82F25AF8;
	sub_82F21168(ctx, base);
	// b 0x82f25d64
	goto loc_82F25D64;
loc_82F25AFC:
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x82f25ae8
	goto loc_82F25AE8;
loc_82F25B04:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bne cr6,0x82f25b38
	if (!ctx.cr6.eq) goto loc_82F25B38;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r28,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F25B38:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f25d7c
	if (ctx.cr6.eq) goto loc_82F25D7C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2009
	ctx.r5.s64 = 2009;
	// addi r6,r11,20992
	ctx.r6.s64 = ctx.r11.s64 + 20992;
loc_82F25B50:
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82eea308
	ctx.lr = 0x82F25B5C;
	sub_82EEA308(ctx, base);
	// stw r27,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r27.u32);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F25B64:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82f16108
	ctx.lr = 0x82F25B6C;
	sub_82F16108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f25d6c
	if (ctx.cr0.eq) goto loc_82F25D6C;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,0
	ctx.r7.s64 = 0;
loc_82F25B7C:
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82f9ec20
	ctx.lr = 0x82F25B90;
	sub_82F9EC20(ctx, base);
	// b 0x82f25d64
	goto loc_82F25D64;
loc_82F25B94:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82f16108
	ctx.lr = 0x82F25B9C;
	sub_82F16108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f25d6c
	if (ctx.cr0.eq) goto loc_82F25D6C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82f25b7c
	goto loc_82F25B7C;
loc_82F25BB4:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82f16108
	ctx.lr = 0x82F25BBC;
	sub_82F16108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f25bd4
	if (ctx.cr0.eq) goto loc_82F25BD4;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x82f16848
	ctx.lr = 0x82F25BCC;
	sub_82F16848(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f25bd8
	goto loc_82F25BD8;
loc_82F25BD4:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82F25BD8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f1c360
	ctx.lr = 0x82F25BE4;
	sub_82F1C360(ctx, base);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
loc_82F25BE8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F25BF4:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82f16108
	ctx.lr = 0x82F25BFC;
	sub_82F16108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f25c14
	if (ctx.cr0.eq) goto loc_82F25C14;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x82f16848
	ctx.lr = 0x82F25C0C;
	sub_82F16848(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f25c18
	goto loc_82F25C18;
loc_82F25C14:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82F25C18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f1c360
	ctx.lr = 0x82F25C24;
	sub_82F1C360(ctx, base);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// b 0x82f25be8
	goto loc_82F25BE8;
loc_82F25C2C:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F25C40:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
loc_82F25C60:
	// stfd f0,24(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.f0.u64);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F25C68:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82f25c60
	goto loc_82F25C60;
loc_82F25C90:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfd f0,24(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f25cb4
	if (!ctx.cr6.eq) goto loc_82F25CB4;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// b 0x82f25d0c
	goto loc_82F25D0C;
loc_82F25CB4:
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f25cc8
	if (!ctx.cr6.eq) goto loc_82F25CC8;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// b 0x82f25d10
	goto loc_82F25D10;
loc_82F25CC8:
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f25d08
	if (!ctx.cr6.eq) goto loc_82F25D08;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f25ce8
	if (!ctx.cr6.eq) goto loc_82F25CE8;
	// lis r11,-128
	ctx.r11.s64 = -8388608;
	// b 0x82f25d0c
	goto loc_82F25D0C;
loc_82F25CE8:
	// lis r9,-128
	ctx.r9.s64 = -8388608;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f25d00
	if (ctx.cr6.eq) goto loc_82F25D00;
	// lis r10,-64
	ctx.r10.s64 = -4194304;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f25d08
	if (!ctx.cr6.eq) goto loc_82F25D08;
loc_82F25D00:
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// b 0x82f25d10
	goto loc_82F25D10;
loc_82F25D08:
	// xoris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 ^ 2147483648;
loc_82F25D0C:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82F25D10:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfd f0,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.f0.u64);
	// b 0x82f25d7c
	goto loc_82F25D7C;
loc_82F25D1C:
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82f16108
	ctx.lr = 0x82F25D24;
	sub_82F16108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f25d6c
	if (ctx.cr0.eq) goto loc_82F25D6C;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// lwz r9,120(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// lwz r8,116(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// lwz r7,112(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// lwz r6,108(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r5,104(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// bl 0x82f9e910
	ctx.lr = 0x82F25D48;
	sub_82F9E910(ctx, base);
	// b 0x82f25d64
	goto loc_82F25D64;
loc_82F25D4C:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82f16108
	ctx.lr = 0x82F25D54;
	sub_82F16108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f25d6c
	if (ctx.cr0.eq) goto loc_82F25D6C;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x82f16848
	ctx.lr = 0x82F25D64;
	sub_82F16848(ctx, base);
loc_82F25D64:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f25d70
	goto loc_82F25D70;
loc_82F25D6C:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82F25D70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f1c360
	ctx.lr = 0x82F25D7C;
	sub_82F1C360(ctx, base);
loc_82F25D7C:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f25de4
	if (!ctx.cr6.eq) goto loc_82F25DE4;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82f16108
	ctx.lr = 0x82F25D90;
	sub_82F16108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f25db0
	if (ctx.cr0.eq) goto loc_82F25DB0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r5,48(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,6280
	ctx.r6.s64 = ctx.r11.s64 + 6280;
	// bl 0x82f162e0
	ctx.lr = 0x82F25DAC;
	sub_82F162E0(ctx, base);
	// b 0x82f25db4
	goto loc_82F25DB4;
loc_82F25DB0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82F25DB4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82f25de0
	if (!ctx.cr6.eq) goto loc_82F25DE0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,6248
	ctx.r6.s64 = ctx.r11.s64 + 6248;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x82eea308
	ctx.lr = 0x82F25DD4;
	sub_82EEA308(ctx, base);
	// stw r27,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r27.u32);
	// stw r27,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r27.u32);
	// b 0x82f25de4
	goto loc_82F25DE4;
loc_82F25DE0:
	// stw r3,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r3.u32);
loc_82F25DE4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F25DEC"))) PPC_WEAK_FUNC(sub_82F25DEC);
PPC_FUNC_IMPL(__imp__sub_82F25DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F25DF0"))) PPC_WEAK_FUNC(sub_82F25DF0);
PPC_FUNC_IMPL(__imp__sub_82F25DF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3032(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3032);
	// b 0x82f254c8
	sub_82F254C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F25DF8"))) PPC_WEAK_FUNC(sub_82F25DF8);
PPC_FUNC_IMPL(__imp__sub_82F25DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82F25E00;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r11,r31,1032
	ctx.r11.s64 = ctx.r31.s64 + 1032;
	// li r26,-1
	ctx.r26.s64 = -1;
	// addi r24,r31,32
	ctx.r24.s64 = ctx.r31.s64 + 32;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// addi r27,r11,-8696
	ctx.r27.s64 = ctx.r11.s64 + -8696;
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// addi r23,r10,5916
	ctx.r23.s64 = ctx.r10.s64 + 5916;
	// sth r25,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r25.u16);
loc_82F25E44:
	// addi r11,r27,400
	ctx.r11.s64 = ctx.r27.s64 + 400;
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f25f40
	if (!ctx.cr0.eq) goto loc_82F25F40;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82f25e7c
	if (!ctx.cr6.lt) goto loc_82F25E7C;
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x82f22c60
	ctx.lr = 0x82F25E6C;
	sub_82F22C60(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f25e7c
	if (!ctx.cr0.lt) goto loc_82F25E7C;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_82F25E7C:
	// addi r11,r27,880
	ctx.r11.s64 = ctx.r27.s64 + 880;
	// lhax r10,r29,r11
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f25f04
	if (ctx.cr0.eq) goto loc_82F25F04;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r10,917
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 917, ctx.xer);
	// bgt cr6,0x82f25f04
	if (ctx.cr6.gt) goto loc_82F25F04;
	// addi r9,r27,3584
	ctx.r9.s64 = ctx.r27.s64 + 3584;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r10,r9
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82f25f04
	if (!ctx.cr6.eq) goto loc_82F25F04;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r31,1030
	ctx.r9.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82f265ac
	if (!ctx.cr6.lt) goto loc_82F265AC;
	// addi r9,r27,1744
	ctx.r9.s64 = ctx.r27.s64 + 1744;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhax r30,r10,r9
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// ble cr6,0x82f25e44
	if (!ctx.cr6.gt) goto loc_82F25E44;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82f25e44
	goto loc_82F25E44;
loc_82F25F04:
	// addi r11,r27,1264
	ctx.r11.s64 = ctx.r27.s64 + 1264;
	// lhax r10,r29,r11
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f264d4
	if (ctx.cr0.eq) goto loc_82F264D4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r10,917
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 917, ctx.xer);
	// bgt cr6,0x82f264d4
	if (ctx.cr6.gt) goto loc_82F264D4;
	// addi r9,r27,3584
	ctx.r9.s64 = ctx.r27.s64 + 3584;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r10,r9
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82f264d4
	if (!ctx.cr6.eq) goto loc_82F264D4;
	// addi r11,r27,1744
	ctx.r11.s64 = ctx.r27.s64 + 1744;
	// lhax r11,r10,r11
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
loc_82F25F40:
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r27,200
	ctx.r9.s64 = ctx.r27.s64 + 200;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// lhax r29,r30,r9
	ctx.r29.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + ctx.r9.u32));
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bgt cr6,0x82f263c0
	if (ctx.cr6.gt) goto loc_82F263C0;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-368
	ctx.r12.s64 = ctx.r12.s64 + -368;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32014
	ctx.r12.s64 = -2098069504;
	// addi r12,r12,24468
	ctx.r12.s64 = ctx.r12.s64 + 24468;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82F25F94;
	case 1:
		goto loc_82F25F9C;
	case 2:
		goto loc_82F25FA8;
	case 3:
		goto loc_82F25FB4;
	case 4:
		goto loc_82F25FC0;
	case 5:
		goto loc_82F25FCC;
	case 6:
		goto loc_82F25FD8;
	case 7:
		goto loc_82F25FE4;
	case 8:
		goto loc_82F25FEC;
	case 9:
		goto loc_82F25FF8;
	case 10:
		goto loc_82F26004;
	case 11:
		goto loc_82F26010;
	case 12:
		goto loc_82F2601C;
	case 13:
		goto loc_82F26028;
	case 14:
		goto loc_82F26034;
	case 15:
		goto loc_82F26040;
	case 16:
		goto loc_82F2604C;
	case 17:
		goto loc_82F26058;
	case 18:
		goto loc_82F26064;
	case 19:
		goto loc_82F26070;
	case 20:
		goto loc_82F2607C;
	case 21:
		goto loc_82F26088;
	case 22:
		goto loc_82F26094;
	case 23:
		goto loc_82F260A0;
	case 24:
		goto loc_82F260AC;
	case 25:
		goto loc_82F260B8;
	case 26:
		goto loc_82F260C4;
	case 27:
		goto loc_82F260D0;
	case 28:
		goto loc_82F260DC;
	case 29:
		goto loc_82F260E8;
	case 30:
		goto loc_82F260F4;
	case 31:
		goto loc_82F26100;
	case 32:
		goto loc_82F2610C;
	case 33:
		goto loc_82F26118;
	case 34:
		goto loc_82F26124;
	case 35:
		goto loc_82F26130;
	case 36:
		goto loc_82F2613C;
	case 37:
		goto loc_82F26148;
	case 38:
		goto loc_82F26154;
	case 39:
		goto loc_82F26160;
	case 40:
		goto loc_82F2616C;
	case 41:
		goto loc_82F26178;
	case 42:
		goto loc_82F26184;
	case 43:
		goto loc_82F26190;
	case 44:
		goto loc_82F2619C;
	case 45:
		goto loc_82F261A8;
	case 46:
		goto loc_82F261B4;
	case 47:
		goto loc_82F261C0;
	case 48:
		goto loc_82F261CC;
	case 49:
		goto loc_82F261D8;
	case 50:
		goto loc_82F261E4;
	case 51:
		goto loc_82F261F0;
	case 52:
		goto loc_82F261FC;
	case 53:
		goto loc_82F26208;
	case 54:
		goto loc_82F26214;
	case 55:
		goto loc_82F26220;
	case 56:
		goto loc_82F2622C;
	case 57:
		goto loc_82F26238;
	case 58:
		goto loc_82F26244;
	case 59:
		goto loc_82F26250;
	case 60:
		goto loc_82F2625C;
	case 61:
		goto loc_82F26268;
	case 62:
		goto loc_82F26274;
	case 63:
		goto loc_82F26280;
	case 64:
		goto loc_82F2628C;
	case 65:
		goto loc_82F26294;
	case 66:
		goto loc_82F2629C;
	case 67:
		goto loc_82F262A8;
	case 68:
		goto loc_82F262B4;
	case 69:
		goto loc_82F262C0;
	case 70:
		goto loc_82F262CC;
	case 71:
		goto loc_82F262D8;
	case 72:
		goto loc_82F262E4;
	case 73:
		goto loc_82F262F0;
	case 74:
		goto loc_82F262FC;
	case 75:
		goto loc_82F26308;
	case 76:
		goto loc_82F26310;
	case 77:
		goto loc_82F26318;
	case 78:
		goto loc_82F26320;
	case 79:
		goto loc_82F26328;
	case 80:
		goto loc_82F26330;
	case 81:
		goto loc_82F26338;
	case 82:
		goto loc_82F26340;
	case 83:
		goto loc_82F26348;
	case 84:
		goto loc_82F26350;
	case 85:
		goto loc_82F26358;
	case 86:
		goto loc_82F26360;
	case 87:
		goto loc_82F26368;
	case 88:
		goto loc_82F26370;
	case 89:
		goto loc_82F26370;
	case 90:
		goto loc_82F26378;
	case 91:
		goto loc_82F26380;
	case 92:
		goto loc_82F26388;
	case 93:
		goto loc_82F26390;
	case 94:
		goto loc_82F26398;
	case 95:
		goto loc_82F263A0;
	case 96:
		goto loc_82F263A8;
	case 97:
		goto loc_82F263B0;
	default:
		__builtin_unreachable();
	}
loc_82F25F94:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F25F9C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F25FA8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F25FB4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F25FC0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F25FCC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F25FD8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F25FE4:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F25FEC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F25FF8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26004:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26010:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F2601C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26028:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26034:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26040:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F2604C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26058:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,17
	ctx.r4.s64 = 17;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26064:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26070:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F2607C:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26088:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26094:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F260A0:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F260AC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F260B8:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F260C4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,26
	ctx.r4.s64 = 26;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F260D0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,27
	ctx.r4.s64 = 27;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F260DC:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,29
	ctx.r4.s64 = 29;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F260E8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,28
	ctx.r4.s64 = 28;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F260F4:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,30
	ctx.r4.s64 = 30;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26100:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F2610C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26118:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,33
	ctx.r4.s64 = 33;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26124:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,34
	ctx.r4.s64 = 34;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26130:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,35
	ctx.r4.s64 = 35;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F2613C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,36
	ctx.r4.s64 = 36;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26148:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,37
	ctx.r4.s64 = 37;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26154:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26160:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,39
	ctx.r4.s64 = 39;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F2616C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26178:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,41
	ctx.r4.s64 = 41;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26184:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,42
	ctx.r4.s64 = 42;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26190:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,43
	ctx.r4.s64 = 43;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F2619C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F261A8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,45
	ctx.r4.s64 = 45;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F261B4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,46
	ctx.r4.s64 = 46;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F261C0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,47
	ctx.r4.s64 = 47;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F261CC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F261D8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,49
	ctx.r4.s64 = 49;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F261E4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,50
	ctx.r4.s64 = 50;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F261F0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,51
	ctx.r4.s64 = 51;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F261FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,52
	ctx.r4.s64 = 52;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26208:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,53
	ctx.r4.s64 = 53;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26214:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,54
	ctx.r4.s64 = 54;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26220:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,55
	ctx.r4.s64 = 55;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F2622C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,56
	ctx.r4.s64 = 56;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26238:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,57
	ctx.r4.s64 = 57;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26244:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,60
	ctx.r4.s64 = 60;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26250:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,61
	ctx.r4.s64 = 61;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F2625C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,62
	ctx.r4.s64 = 62;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26268:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,63
	ctx.r4.s64 = 63;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26274:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,64
	ctx.r4.s64 = 64;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26280:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,65
	ctx.r4.s64 = 65;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F2628C:
	// li r4,66
	ctx.r4.s64 = 66;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26294:
	// li r4,67
	ctx.r4.s64 = 67;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F2629C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,68
	ctx.r4.s64 = 68;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F262A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,69
	ctx.r4.s64 = 69;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F262B4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,70
	ctx.r4.s64 = 70;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F262C0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,71
	ctx.r4.s64 = 71;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F262CC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,72
	ctx.r4.s64 = 72;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F262D8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,73
	ctx.r4.s64 = 73;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F262E4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,74
	ctx.r4.s64 = 74;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F262F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,75
	ctx.r4.s64 = 75;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F262FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,76
	ctx.r4.s64 = 76;
	// b 0x82f263b8
	goto loc_82F263B8;
loc_82F26308:
	// li r4,77
	ctx.r4.s64 = 77;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26310:
	// li r4,78
	ctx.r4.s64 = 78;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26318:
	// li r4,79
	ctx.r4.s64 = 79;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26320:
	// li r4,80
	ctx.r4.s64 = 80;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26328:
	// li r4,81
	ctx.r4.s64 = 81;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26330:
	// li r4,82
	ctx.r4.s64 = 82;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26338:
	// li r4,83
	ctx.r4.s64 = 83;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26340:
	// li r4,84
	ctx.r4.s64 = 84;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26348:
	// li r4,85
	ctx.r4.s64 = 85;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26350:
	// li r4,87
	ctx.r4.s64 = 87;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26358:
	// li r4,89
	ctx.r4.s64 = 89;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26360:
	// li r4,91
	ctx.r4.s64 = 91;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26368:
	// li r4,86
	ctx.r4.s64 = 86;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26370:
	// li r4,88
	ctx.r4.s64 = 88;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26378:
	// li r4,92
	ctx.r4.s64 = 92;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26380:
	// li r4,93
	ctx.r4.s64 = 93;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26388:
	// li r4,94
	ctx.r4.s64 = 94;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26390:
	// li r4,95
	ctx.r4.s64 = 95;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F26398:
	// li r4,96
	ctx.r4.s64 = 96;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F263A0:
	// li r4,97
	ctx.r4.s64 = 97;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F263A8:
	// li r4,98
	ctx.r4.s64 = 98;
	// b 0x82f263b4
	goto loc_82F263B4;
loc_82F263B0:
	// li r4,99
	ctx.r4.s64 = 99;
loc_82F263B4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82F263B8:
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x82f254c8
	ctx.lr = 0x82F263C0;
	sub_82F254C8(ctx, base);
loc_82F263C0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r28,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r28.s64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lhax r10,r30,r27
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + ctx.r27.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f26458
	if (!ctx.cr0.eq) goto loc_82F26458;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82f26458
	if (!ctx.cr6.eq) goto loc_82F26458;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,25
	ctx.r10.s64 = 25;
	// li r30,25
	ctx.r30.s64 = 25;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82f26444
	if (!ctx.cr6.lt) goto loc_82F26444;
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x82f22c60
	ctx.lr = 0x82F26434;
	sub_82F22C60(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f26444
	if (!ctx.cr0.lt) goto loc_82F26444;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_82F26444:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f25e44
	if (!ctx.cr6.eq) goto loc_82F25E44;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f265c0
	goto loc_82F265C0;
loc_82F26458:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r27,1648
	ctx.r10.s64 = ctx.r27.s64 + 1648;
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f26498
	if (ctx.cr0.eq) goto loc_82F26498;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,917
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 917, ctx.xer);
	// bgt cr6,0x82f26498
	if (ctx.cr6.gt) goto loc_82F26498;
	// addi r8,r27,3584
	ctx.r8.s64 = ctx.r27.s64 + 3584;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r10,r8
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82f26498
	if (!ctx.cr6.eq) goto loc_82F26498;
	// addi r11,r27,1744
	ctx.r11.s64 = ctx.r27.s64 + 1744;
	// lhax r30,r10,r11
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// b 0x82f264a0
	goto loc_82F264A0;
loc_82F26498:
	// addi r11,r27,784
	ctx.r11.s64 = ctx.r27.s64 + 784;
	// lhax r30,r9,r11
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32));
loc_82F264A0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r31,1030
	ctx.r10.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f265ac
	if (!ctx.cr6.lt) goto loc_82F265AC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_82F264C0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82f25e44
	goto loc_82F25E44;
loc_82F264D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f264f8
	if (!ctx.cr6.eq) goto loc_82F264F8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1e8a0
	ctx.lr = 0x82F264EC;
	sub_82F1E8A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82F264F8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82f26598
	if (!ctx.cr6.lt) goto loc_82F26598;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82F2650C:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r27,880
	ctx.r11.s64 = ctx.r27.s64 + 880;
	// lha r10,0(r9)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + 0));
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r10,r11
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f26548
	if (ctx.cr0.eq) goto loc_82F26548;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// cmplwi cr6,r10,917
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 917, ctx.xer);
	// bgt cr6,0x82f26548
	if (ctx.cr6.gt) goto loc_82F26548;
	// addi r11,r27,3584
	ctx.r11.s64 = ctx.r27.s64 + 3584;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x82f26568
	if (ctx.cr6.eq) goto loc_82F26568;
loc_82F26548:
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x82f265bc
	if (!ctx.cr6.gt) goto loc_82F265BC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82f2650c
	goto loc_82F2650C;
loc_82F26568:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r31,1030
	ctx.r9.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82f265ac
	if (!ctx.cr6.lt) goto loc_82F265AC;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r27,1744
	ctx.r9.s64 = ctx.r27.s64 + 1744;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhax r30,r10,r9
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x82f264c0
	goto loc_82F264C0;
loc_82F26598:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f265bc
	if (ctx.cr6.eq) goto loc_82F265BC;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// b 0x82f25e44
	goto loc_82F25E44;
loc_82F265AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6364
	ctx.r4.s64 = ctx.r11.s64 + 6364;
	// bl 0x82f1e8a0
	ctx.lr = 0x82F265BC;
	sub_82F1E8A0(ctx, base);
loc_82F265BC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F265C0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F265C8"))) PPC_WEAK_FUNC(sub_82F265C8);
PPC_FUNC_IMPL(__imp__sub_82F265C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x82F265D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-3232(r1)
	ea = -3232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82edeee8
	ctx.lr = 0x82F265FC;
	sub_82EDEEE8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82f26608
	if (!ctx.cr6.eq) goto loc_82F26608;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
loc_82F26608:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r26,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r26.u32);
	// bl 0x82f1de60
	ctx.lr = 0x82F26648;
	sub_82F1DE60(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// beq 0x82f26664
	if (ctx.cr0.eq) goto loc_82F26664;
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
	// stw r26,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r26.u32);
	// b 0x82f2666c
	goto loc_82F2666C;
loc_82F26664:
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_82F2666C:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2667c
	if (ctx.cr0.eq) goto loc_82F2667C;
	// stw r26,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r26.u32);
	// b 0x82f26680
	goto loc_82F26680;
loc_82F2667C:
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_82F26680:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f266a8
	if (!ctx.cr6.eq) goto loc_82F266A8;
	// bl 0x82e71c98
	ctx.lr = 0x82F26690;
	sub_82E71C98(ctx, base);
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f266a8
	if (!ctx.cr0.eq) goto loc_82F266A8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f267c0
	goto loc_82F267C0;
loc_82F266A8:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// beq cr6,0x82f266c8
	if (ctx.cr6.eq) goto loc_82F266C8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82F266C8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82f266e0
	if (ctx.cr6.eq) goto loc_82F266E0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne 0x82f266e4
	if (!ctx.cr0.eq) goto loc_82F266E4;
loc_82F266E0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82F266E4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// beq cr6,0x82f26744
	if (ctx.cr6.eq) goto loc_82F26744;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f26744
	if (!ctx.cr6.eq) goto loc_82F26744;
	// lwz r3,20(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
	// bne cr6,0x82f26718
	if (!ctx.cr6.eq) goto loc_82F26718;
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// b 0x82f26744
	goto loc_82F26744;
loc_82F26718:
	// bl 0x831f71a8
	ctx.lr = 0x82F2671C;
	sub_831F71A8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r26,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r26.u32);
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82f26734
	if (ctx.cr6.eq) goto loc_82F26734;
	// lis r5,-2
	ctx.r5.s64 = -131072;
loc_82F26734:
	// ori r5,r5,1021
	ctx.r5.u64 = ctx.r5.u64 | 1021;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831fc510
	ctx.lr = 0x82F26744;
	sub_831FC510(ctx, base);
loc_82F26744:
	// li r5,3036
	ctx.r5.s64 = 3036;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82cb16f0
	ctx.lr = 0x82F26754;
	sub_82CB16F0(ctx, base);
	// stw r31,3160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3160, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f25df8
	ctx.lr = 0x82F26760;
	sub_82F25DF8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ee9700
	ctx.lr = 0x82F26768;
	sub_82EE9700(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82f26798
	if (!ctx.cr6.eq) goto loc_82F26798;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f26798
	if (!ctx.cr6.eq) goto loc_82F26798;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10728
	ctx.r4.s64 = ctx.r11.s64 + 10728;
	// bl 0x82f1e940
	ctx.lr = 0x82F26798;
	sub_82F1E940(ctx, base);
loc_82F26798:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f24510
	ctx.lr = 0x82F267A0;
	sub_82F24510(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ee9700
	ctx.lr = 0x82F267A8;
	sub_82EE9700(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f267bc
	if (ctx.cr0.eq) goto loc_82F267BC;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x82f267c0
	goto loc_82F267C0;
loc_82F267BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82F267C0:
	// addi r1,r1,3232
	ctx.r1.s64 = ctx.r1.s64 + 3232;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F267C8"))) PPC_WEAK_FUNC(sub_82F267C8);
PPC_FUNC_IMPL(__imp__sub_82F267C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82F267D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,23396
	ctx.r9.s64 = ctx.r11.s64 + 23396;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82F26800:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82f26824
	if (ctx.cr0.eq) goto loc_82F26824;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82f26800
	if (ctx.cr6.eq) goto loc_82F26800;
loc_82F26824:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,23388
	ctx.r11.s64 = ctx.r11.s64 + 23388;
loc_82F2682C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f26850
	if (ctx.cr0.eq) goto loc_82F26850;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f2682c
	if (ctx.cr6.eq) goto loc_82F2682C;
loc_82F26850:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x82f2686c
	if (!ctx.cr6.eq) goto loc_82F2686C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82f26894
	if (ctx.cr6.eq) goto loc_82F26894;
loc_82F2686C:
	// clrlwi. r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f26894
	if (!ctx.cr0.eq) goto loc_82F26894;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,2001
	ctx.r5.s64 = 2001;
	// addi r6,r11,10792
	ctx.r6.s64 = ctx.r11.s64 + 10792;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82eea308
	ctx.lr = 0x82F26888;
	sub_82EEA308(ctx, base);
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2905
	ctx.r31.u64 = ctx.r31.u64 | 2905;
	// b 0x82f26948
	goto loc_82F26948;
loc_82F26894:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f268a0
	if (ctx.cr0.eq) goto loc_82F268A0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82F268A0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82299698
	ctx.lr = 0x82F268AC;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f268e4
	if (ctx.cr0.eq) goto loc_82F268E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r31.u32);
	// stw r31,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r31.u32);
	// stw r31,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r31.u32);
	// stw r31,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r31.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
	// stw r31,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r31.u32);
	// b 0x82f268e8
	goto loc_82F268E8;
loc_82F268E4:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82F268E8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82f268fc
	if (!ctx.cr6.eq) goto loc_82F268FC;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82f26948
	goto loc_82F26948;
loc_82F268FC:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f265c8
	ctx.lr = 0x82F26918;
	sub_82F265C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f26934
	if (ctx.cr0.lt) goto loc_82F26934;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f24e50
	ctx.lr = 0x82F26930;
	sub_82F24E50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F26934:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1e080
	ctx.lr = 0x82F2693C;
	sub_82F1E080(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822996c0
	ctx.lr = 0x82F26948;
	sub_822996C0(ctx, base);
loc_82F26948:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F26954"))) PPC_WEAK_FUNC(sub_82F26954);
PPC_FUNC_IMPL(__imp__sub_82F26954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F26958"))) PPC_WEAK_FUNC(sub_82F26958);
PPC_FUNC_IMPL(__imp__sub_82F26958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82F26960;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,336
	ctx.r3.s64 = 336;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82299698
	ctx.lr = 0x82F26984;
	sub_82299698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f269c0
	if (ctx.cr0.eq) goto loc_82F269C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// b 0x82f269c4
	goto loc_82F269C4;
loc_82F269C0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F269C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f269d8
	if (!ctx.cr6.eq) goto loc_82F269D8;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82f26a44
	goto loc_82F26A44;
loc_82F269D8:
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82edf678
	ctx.lr = 0x82F269EC;
	sub_82EDF678(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f26a30
	if (ctx.cr0.lt) goto loc_82F26A30;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f265c8
	ctx.lr = 0x82F26A10;
	sub_82F265C8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f26a28
	if (ctx.cr0.lt) goto loc_82F26A28;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1ccc8
	ctx.lr = 0x82F26A24;
	sub_82F1CCC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82F26A28:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ee2858
	ctx.lr = 0x82F26A30;
	sub_82EE2858(ctx, base);
loc_82F26A30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1e080
	ctx.lr = 0x82F26A38;
	sub_82F1E080(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82F26A44;
	sub_822996C0(ctx, base);
loc_82F26A44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F26A50"))) PPC_WEAK_FUNC(sub_82F26A50);
PPC_FUNC_IMPL(__imp__sub_82F26A50) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F26A58;
	__savegprlr_29(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r7,1279
	ctx.r7.s64 = 1279;
	// li r3,256
	ctx.r3.s64 = 256;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r10,108(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// li r31,64
	ctx.r31.s64 = 64;
	// lwz r5,200(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 200);
	// li r30,24
	ctx.r30.s64 = 24;
	// lwz r6,112(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// rlwinm r4,r10,0,10,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r3.u32);
	// rlwinm r4,r4,0,4,2
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r11,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// rlwimi r6,r7,18,6,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 18) & 0x3FC0000) | (ctx.r6.u64 & 0xFFFFFFFFFC03FFFF);
	// stw r11,84(r8)
	PPC_STORE_U32(ctx.r8.u32 + 84, ctx.r11.u32);
	// stw r5,268(r8)
	PPC_STORE_U32(ctx.r8.u32 + 268, ctx.r5.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r29,4
	ctx.r29.s64 = 4;
	// stw r11,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r11.u32);
	// ori r4,r4,513
	ctx.r4.u64 = ctx.r4.u64 | 513;
	// stw r9,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r9.u32);
	// rlwimi r6,r7,18,2,4
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 18) & 0x38000000) | (ctx.r6.u64 & 0xFFFFFFFFC7FFFFFF);
	// stw r10,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r10.u32);
	// stw r31,96(r8)
	PPC_STORE_U32(ctx.r8.u32 + 96, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r9.u32);
	// stw r5,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r5.u32);
	// stw r10,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r10.u32);
	// stw r30,88(r8)
	PPC_STORE_U32(ctx.r8.u32 + 88, ctx.r30.u32);
	// stw r29,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r29.u32);
	// stw r4,108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 108, ctx.r4.u32);
	// stw r6,112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 112, ctx.r6.u32);
	// stw r11,68(r8)
	PPC_STORE_U32(ctx.r8.u32 + 68, ctx.r11.u32);
	// stw r9,468(r8)
	PPC_STORE_U32(ctx.r8.u32 + 468, ctx.r9.u32);
	// stw r10,344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 344, ctx.r10.u32);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F26AF0"))) PPC_WEAK_FUNC(sub_82F26AF0);
PPC_FUNC_IMPL(__imp__sub_82F26AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82F26AF8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f26b40
	if (!ctx.cr6.gt) goto loc_82F26B40;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F26B14:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// bl 0x82f33de8
	ctx.lr = 0x82F26B2C;
	sub_82F33DE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f26b14
	if (ctx.cr6.lt) goto loc_82F26B14;
loc_82F26B40:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f272a4
	if (!ctx.cr6.gt) goto loc_82F272A4;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r29,24816
	ctx.r29.s64 = 1626341376;
	// lis r14,4336
	ctx.r14.s64 = 284164096;
	// lis r15,4176
	ctx.r15.s64 = 273678336;
	// lis r30,1
	ctx.r30.s64 = 65536;
	// ori r27,r11,16385
	ctx.r27.u64 = ctx.r11.u64 | 16385;
	// lis r16,8208
	ctx.r16.s64 = 537919488;
	// lis r17,24640
	ctx.r17.s64 = 1614807040;
	// lis r18,20528
	ctx.r18.s64 = 1345323008;
	// lis r28,15
	ctx.r28.s64 = 983040;
	// lis r19,24736
	ctx.r19.s64 = 1621098496;
	// lis r20,29504
	ctx.r20.s64 = 1933574144;
	// lis r21,28768
	ctx.r21.s64 = 1885339648;
	// lis r22,28688
	ctx.r22.s64 = 1880096768;
	// lis r23,28880
	ctx.r23.s64 = 1892679680;
	// lis r24,29680
	ctx.r24.s64 = 1945108480;
	// lis r25,29600
	ctx.r25.s64 = 1939865600;
	// lis r26,29776
	ctx.r26.s64 = 1951399936;
loc_82F26B9C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f26bd4
	if (ctx.cr6.eq) goto loc_82F26BD4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x82f26bd4
	if (!ctx.cr6.eq) goto loc_82F26BD4;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
loc_82F26BD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f4a050
	ctx.lr = 0x82F26BDC;
	sub_82F4A050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f272a8
	if (ctx.cr0.lt) goto loc_82F272A8;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r10,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82f26fc0
	if (ctx.cr6.gt) goto loc_82F26FC0;
	// beq cr6,0x82f26fa8
	if (ctx.cr6.eq) goto loc_82F26FA8;
	// lis r9,8304
	ctx.r9.s64 = 544210944;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82f26e14
	if (ctx.cr6.gt) goto loc_82F26E14;
	// beq cr6,0x82f26e08
	if (ctx.cr6.eq) goto loc_82F26E08;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bgt cr6,0x82f26d3c
	if (ctx.cr6.gt) goto loc_82F26D3C;
	// beq cr6,0x82f271fc
	if (ctx.cr6.eq) goto loc_82F271FC;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// bgt cr6,0x82f26cb4
	if (ctx.cr6.gt) goto loc_82F26CB4;
	// beq cr6,0x82f26ca4
	if (ctx.cr6.eq) goto loc_82F26CA4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f26c98
	if (ctx.cr6.eq) goto loc_82F26C98;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26c8c
	if (ctx.cr6.eq) goto loc_82F26C8C;
	// lis r10,4112
	ctx.r10.s64 = 269484032;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26c80
	if (ctx.cr6.eq) goto loc_82F26C80;
	// lis r10,4144
	ctx.r10.s64 = 271581184;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26c70
	if (ctx.cr6.eq) goto loc_82F26C70;
	// lis r10,4160
	ctx.r10.s64 = 272629760;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f27314
	if (!ctx.cr6.eq) goto loc_82F27314;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26C70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r30.u32);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26C80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26C8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26C98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26CA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r30.u32);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26CB4:
	// lis r10,4192
	ctx.r10.s64 = 274726912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26d2c
	if (ctx.cr6.eq) goto loc_82F26D2C;
	// lis r10,4208
	ctx.r10.s64 = 275775488;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26d1c
	if (ctx.cr6.eq) goto loc_82F26D1C;
	// lis r10,4304
	ctx.r10.s64 = 282066944;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26cfc
	if (ctx.cr6.eq) goto loc_82F26CFC;
	// lis r10,4320
	ctx.r10.s64 = 283115520;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f27314
	if (!ctx.cr6.eq) goto loc_82F27314;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f26d14
	if (ctx.cr0.eq) goto loc_82F26D14;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26CFC:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f26d14
	if (ctx.cr0.eq) goto loc_82F26D14;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26D14:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82f27284
	goto loc_82F27284;
loc_82F26D1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r30.u32);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26D2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r30.u32);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26D3C:
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// bgt cr6,0x82f26da8
	if (ctx.cr6.gt) goto loc_82F26DA8;
	// beq cr6,0x82f270f8
	if (ctx.cr6.eq) goto loc_82F270F8;
	// lis r10,4352
	ctx.r10.s64 = 285212672;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26d90
	if (ctx.cr6.eq) goto loc_82F26D90;
	// lis r10,4384
	ctx.r10.s64 = 287309824;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26c8c
	if (ctx.cr6.eq) goto loc_82F26C8C;
	// lis r10,4400
	ctx.r10.s64 = 288358400;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f2728c
	if (ctx.cr6.eq) goto loc_82F2728C;
	// lis r10,4432
	ctx.r10.s64 = 290455552;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26c8c
	if (ctx.cr6.eq) goto loc_82F26C8C;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f27314
	if (!ctx.cr6.eq) goto loc_82F27314;
loc_82F26D84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26D90:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f27314
	if (!ctx.cr0.eq) goto loc_82F27314;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26DA8:
	// lis r10,8224
	ctx.r10.s64 = 538968064;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26dfc
	if (ctx.cr6.eq) goto loc_82F26DFC;
	// lis r10,8240
	ctx.r10.s64 = 540016640;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26df0
	if (ctx.cr6.eq) goto loc_82F26DF0;
	// lis r10,8256
	ctx.r10.s64 = 541065216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26de4
	if (ctx.cr6.eq) goto loc_82F26DE4;
	// lis r10,8272
	ctx.r10.s64 = 542113792;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f27314
	if (!ctx.cr6.eq) goto loc_82F27314;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26DE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26DF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26DFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26E08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26E14:
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// bgt cr6,0x82f26f1c
	if (ctx.cr6.gt) goto loc_82F26F1C;
	// beq cr6,0x82f26f64
	if (ctx.cr6.eq) goto loc_82F26F64;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// bgt cr6,0x82f26ed4
	if (ctx.cr6.gt) goto loc_82F26ED4;
	// beq cr6,0x82f26ec4
	if (ctx.cr6.eq) goto loc_82F26EC4;
	// lis r9,8320
	ctx.r9.s64 = 545259520;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f2728c
	if (ctx.cr6.eq) goto loc_82F2728C;
	// lis r9,8336
	ctx.r9.s64 = 546308096;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f26c8c
	if (ctx.cr6.eq) goto loc_82F26C8C;
	// lis r9,12288
	ctx.r9.s64 = 805306368;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f26eac
	if (ctx.cr6.eq) goto loc_82F26EAC;
	// lis r9,20480
	ctx.r9.s64 = 1342177280;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f26e74
	if (ctx.cr6.eq) goto loc_82F26E74;
	// lis r10,20496
	ctx.r10.s64 = 1343225856;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f27314
	if (!ctx.cr6.eq) goto loc_82F27314;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26E74:
	// clrlwi r11,r10,12
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82f26e98
	if (ctx.cr6.eq) goto loc_82F26E98;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82f27310
	if (!ctx.cr6.eq) goto loc_82F27310;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r28.u32);
	// lwz r11,584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26E98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// stw r10,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r10.u32);
	// lwz r11,580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26EAC:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f27314
	if (!ctx.cr0.eq) goto loc_82F27314;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26EC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r28.u32);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26ED4:
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26fa8
	if (ctx.cr6.eq) goto loc_82F26FA8;
	// lis r10,24592
	ctx.r10.s64 = 1611661312;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f27044
	if (ctx.cr6.eq) goto loc_82F27044;
	// lis r10,24608
	ctx.r10.s64 = 1612709888;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f2702c
	if (ctx.cr6.eq) goto loc_82F2702C;
	// lis r10,24624
	ctx.r10.s64 = 1613758464;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f27314
	if (!ctx.cr6.eq) goto loc_82F27314;
loc_82F26F04:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f27314
	if (!ctx.cr0.eq) goto loc_82F27314;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26F1C:
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bgt cr6,0x82f26f7c
	if (ctx.cr6.gt) goto loc_82F26F7C;
	// beq cr6,0x82f26fa8
	if (ctx.cr6.eq) goto loc_82F26FA8;
	// lis r10,24656
	ctx.r10.s64 = 1615855616;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26fa8
	if (ctx.cr6.eq) goto loc_82F26FA8;
	// lis r10,24672
	ctx.r10.s64 = 1616904192;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f27044
	if (ctx.cr6.eq) goto loc_82F27044;
	// lis r10,24688
	ctx.r10.s64 = 1617952768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f2702c
	if (ctx.cr6.eq) goto loc_82F2702C;
	// lis r10,24704
	ctx.r10.s64 = 1619001344;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26f04
	if (ctx.cr6.eq) goto loc_82F26F04;
	// lis r10,24720
	ctx.r10.s64 = 1620049920;
loc_82F26F5C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f27314
	if (!ctx.cr6.eq) goto loc_82F27314;
loc_82F26F64:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f27314
	if (ctx.cr0.eq) goto loc_82F27314;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26F7C:
	// lis r10,24752
	ctx.r10.s64 = 1622147072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f27044
	if (ctx.cr6.eq) goto loc_82F27044;
	// lis r10,24768
	ctx.r10.s64 = 1623195648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f2702c
	if (ctx.cr6.eq) goto loc_82F2702C;
	// lis r10,24784
	ctx.r10.s64 = 1624244224;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26f04
	if (ctx.cr6.eq) goto loc_82F26F04;
	// lis r10,24800
	ctx.r10.s64 = 1625292800;
	// b 0x82f26f5c
	goto loc_82F26F5C;
loc_82F26FA8:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f27314
	if (!ctx.cr0.eq) goto loc_82F27314;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F26FC0:
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bgt cr6,0x82f2719c
	if (ctx.cr6.gt) goto loc_82F2719C;
	// beq cr6,0x82f27190
	if (ctx.cr6.eq) goto loc_82F27190;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bgt cr6,0x82f270b0
	if (ctx.cr6.gt) goto loc_82F270B0;
	// beq cr6,0x82f2708c
	if (ctx.cr6.eq) goto loc_82F2708C;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x82f2705c
	if (ctx.cr6.gt) goto loc_82F2705C;
	// beq cr6,0x82f27050
	if (ctx.cr6.eq) goto loc_82F27050;
	// lis r10,24832
	ctx.r10.s64 = 1627389952;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f27044
	if (ctx.cr6.eq) goto loc_82F27044;
	// lis r10,24848
	ctx.r10.s64 = 1628438528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f2702c
	if (ctx.cr6.eq) goto loc_82F2702C;
	// lis r10,24864
	ctx.r10.s64 = 1629487104;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26f04
	if (ctx.cr6.eq) goto loc_82F26F04;
	// lis r10,24880
	ctx.r10.s64 = 1630535680;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26f64
	if (ctx.cr6.eq) goto loc_82F26F64;
	// lis r10,28672
	ctx.r10.s64 = 1879048192;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f27314
	if (!ctx.cr6.eq) goto loc_82F27314;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F2702C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f27314
	if (!ctx.cr0.eq) goto loc_82F27314;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F27044:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F27050:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F2705C:
	// lis r10,28704
	ctx.r10.s64 = 1881145344;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f270a4
	if (ctx.cr6.eq) goto loc_82F270A4;
	// lis r10,28720
	ctx.r10.s64 = 1882193920;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f27098
	if (ctx.cr6.eq) goto loc_82F27098;
	// lis r10,28736
	ctx.r10.s64 = 1883242496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f27098
	if (ctx.cr6.eq) goto loc_82F27098;
	// lis r10,28752
	ctx.r10.s64 = 1884291072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f27314
	if (!ctx.cr6.eq) goto loc_82F27314;
loc_82F2708C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F27098:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F270A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F270B0:
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x82f27130
	if (ctx.cr6.gt) goto loc_82F27130;
	// beq cr6,0x82f27124
	if (ctx.cr6.eq) goto loc_82F27124;
	// lis r10,28784
	ctx.r10.s64 = 1886388224;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f2708c
	if (ctx.cr6.eq) goto loc_82F2708C;
	// lis r10,28800
	ctx.r10.s64 = 1887436800;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f27110
	if (ctx.cr6.eq) goto loc_82F27110;
	// lis r10,28816
	ctx.r10.s64 = 1888485376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f27104
	if (ctx.cr6.eq) goto loc_82F27104;
	// lis r10,28848
	ctx.r10.s64 = 1890582528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f26d84
	if (ctx.cr6.eq) goto loc_82F26D84;
	// lis r10,28864
	ctx.r10.s64 = 1891631104;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f27314
	if (!ctx.cr6.eq) goto loc_82F27314;
loc_82F270F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F27104:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F27110:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// stw r10,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r10.u32);
	// lwz r11,284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F27124:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F27130:
	// lis r10,29440
	ctx.r10.s64 = 1929379840;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f27174
	if (ctx.cr6.eq) goto loc_82F27174;
	// lis r10,29456
	ctx.r10.s64 = 1930428416;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f27160
	if (ctx.cr6.eq) goto loc_82F27160;
	// lis r10,29472
	ctx.r10.s64 = 1931476992;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f2716c
	if (ctx.cr6.eq) goto loc_82F2716C;
	// lis r10,29488
	ctx.r10.s64 = 1932525568;
loc_82F27158:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f27314
	if (!ctx.cr6.eq) goto loc_82F27314;
loc_82F27160:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F2716C:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82f27178
	goto loc_82F27178;
loc_82F27174:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82F27178:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2718C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f27284
	goto loc_82F27284;
loc_82F27190:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F2719C:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x82f27234
	if (ctx.cr6.gt) goto loc_82F27234;
	// beq cr6,0x82f27160
	if (ctx.cr6.eq) goto loc_82F27160;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x82f27208
	if (ctx.cr6.gt) goto loc_82F27208;
	// beq cr6,0x82f271f0
	if (ctx.cr6.eq) goto loc_82F271F0;
	// lis r10,29520
	ctx.r10.s64 = 1934622720;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f271fc
	if (ctx.cr6.eq) goto loc_82F271FC;
	// lis r10,29536
	ctx.r10.s64 = 1935671296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f271fc
	if (ctx.cr6.eq) goto loc_82F271FC;
	// lis r10,29552
	ctx.r10.s64 = 1936719872;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f271fc
	if (ctx.cr6.eq) goto loc_82F271FC;
	// lis r10,29568
	ctx.r10.s64 = 1937768448;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f271fc
	if (ctx.cr6.eq) goto loc_82F271FC;
	// lis r10,29584
	ctx.r10.s64 = 1938817024;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f27314
	if (!ctx.cr6.eq) goto loc_82F27314;
loc_82F271F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F271FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F27208:
	// lis r10,29616
	ctx.r10.s64 = 1940914176;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f271f0
	if (ctx.cr6.eq) goto loc_82F271F0;
	// lis r10,29632
	ctx.r10.s64 = 1941962752;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f271f0
	if (ctx.cr6.eq) goto loc_82F271F0;
	// lis r10,29648
	ctx.r10.s64 = 1943011328;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f27160
	if (ctx.cr6.eq) goto loc_82F27160;
	// lis r10,29664
	ctx.r10.s64 = 1944059904;
	// b 0x82f27158
	goto loc_82F27158;
loc_82F27234:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82f272c8
	if (ctx.cr6.gt) goto loc_82F272C8;
	// beq cr6,0x82f27270
	if (ctx.cr6.eq) goto loc_82F27270;
	// lis r10,29696
	ctx.r10.s64 = 1946157056;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f27160
	if (ctx.cr6.eq) goto loc_82F27160;
	// lis r10,29712
	ctx.r10.s64 = 1947205632;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f272bc
	if (ctx.cr6.eq) goto loc_82F272BC;
	// lis r10,29728
	ctx.r10.s64 = 1948254208;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f272b0
	if (ctx.cr6.eq) goto loc_82F272B0;
	// lis r10,29760
	ctx.r10.s64 = 1950351360;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f27314
	if (!ctx.cr6.eq) goto loc_82F27314;
loc_82F27270:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
loc_82F27278:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F27284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F27284:
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82f27314
	if (ctx.cr6.eq) goto loc_82F27314;
loc_82F2728C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f26b9c
	if (ctx.cr6.lt) goto loc_82F26B9C;
loc_82F272A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F272A8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_82F272B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F272BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F272C8:
	// lis r10,29792
	ctx.r10.s64 = 1952448512;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f27270
	if (ctx.cr6.eq) goto loc_82F27270;
	// lis r10,29808
	ctx.r10.s64 = 1953497088;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f27270
	if (ctx.cr6.eq) goto loc_82F27270;
	// lis r10,29856
	ctx.r10.s64 = 1956642816;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f27304
	if (ctx.cr6.eq) goto loc_82F27304;
	// lis r10,29872
	ctx.r10.s64 = 1957691392;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f27314
	if (!ctx.cr6.eq) goto loc_82F27314;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F27304:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// b 0x82f27278
	goto loc_82F27278;
loc_82F27310:
	// twi 31,r0,22
loc_82F27314:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r5,4532
	ctx.r5.s64 = 4532;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// beq 0x82f2733c
	if (ctx.cr0.eq) goto loc_82F2733C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r6,r10,11144
	ctx.r6.s64 = ctx.r10.s64 + 11144;
	// b 0x82f27344
	goto loc_82F27344;
loc_82F2733C:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r6,r10,11088
	ctx.r6.s64 = ctx.r10.s64 + 11088;
loc_82F27344:
	// bl 0x82f5e840
	ctx.lr = 0x82F27348;
	sub_82F5E840(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82f272a8
	goto loc_82F272A8;
}

__attribute__((alias("__imp__sub_82F27350"))) PPC_WEAK_FUNC(sub_82F27350);
PPC_FUNC_IMPL(__imp__sub_82F27350) {
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
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f27380
	if (ctx.cr6.eq) goto loc_82F27380;
loc_82F27378:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f27448
	goto loc_82F27448;
loc_82F27380:
	// lis r4,512
	ctx.r4.s64 = 33554432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,31
	ctx.r4.u64 = ctx.r4.u64 | 31;
	// bl 0x82f451c0
	ctx.lr = 0x82F27390;
	sub_82F451C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f27448
	if (ctx.cr0.lt) goto loc_82F27448;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f27400
	if (!ctx.cr6.eq) goto loc_82F27400;
	// lis r4,-28672
	ctx.r4.s64 = -1879048192;
loc_82F273AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F273B0:
	// bl 0x82f42438
	ctx.lr = 0x82F273B4;
	sub_82F42438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f27448
	if (ctx.cr0.lt) goto loc_82F27448;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,16389
	ctx.r10.s64 = 16389;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,15
	ctx.r5.s64 = 983040;
	// rlwimi r4,r10,29,0,20
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0xFFFFF800) | (ctx.r4.u64 & 0xFFFFFFFF000007FF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F273E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f27448
	if (ctx.cr0.lt) goto loc_82F27448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f3c828
	ctx.lr = 0x82F273F4;
	sub_82F3C828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f27448
	if (ctx.cr0.lt) goto loc_82F27448;
	// b 0x82f27378
	goto loc_82F27378;
loc_82F27400:
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f27414
	if (!ctx.cr6.eq) goto loc_82F27414;
	// lis r4,-24576
	ctx.r4.s64 = -1610612736;
	// b 0x82f273ac
	goto loc_82F273AC;
loc_82F27414:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f2742c
	if (!ctx.cr6.eq) goto loc_82F2742C;
	// lis r4,-26624
	ctx.r4.s64 = -1744830464;
	// b 0x82f273b0
	goto loc_82F273B0;
loc_82F2742C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,4814
	ctx.r5.s64 = 4814;
	// addi r6,r11,11200
	ctx.r6.s64 = ctx.r11.s64 + 11200;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f5e840
	ctx.lr = 0x82F27440;
	sub_82F5E840(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82F27448:
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

__attribute__((alias("__imp__sub_82F27460"))) PPC_WEAK_FUNC(sub_82F27460);
PPC_FUNC_IMPL(__imp__sub_82F27460) {
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
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f274c0
	if (ctx.cr6.eq) goto loc_82F274C0;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
loc_82F27488:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f42438
	ctx.lr = 0x82F27490;
	sub_82F42438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f274ac
	if (ctx.cr0.lt) goto loc_82F274AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f3c828
	ctx.lr = 0x82F274A0;
	sub_82F3C828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f274ac
	if (ctx.cr0.lt) goto loc_82F274AC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F274AC:
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
loc_82F274C0:
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// b 0x82f27488
	goto loc_82F27488;
}

__attribute__((alias("__imp__sub_82F274C8"))) PPC_WEAK_FUNC(sub_82F274C8);
PPC_FUNC_IMPL(__imp__sub_82F274C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F274D8"))) PPC_WEAK_FUNC(sub_82F274D8);
PPC_FUNC_IMPL(__imp__sub_82F274D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F274E8"))) PPC_WEAK_FUNC(sub_82F274E8);
PPC_FUNC_IMPL(__imp__sub_82F274E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F274F8"))) PPC_WEAK_FUNC(sub_82F274F8);
PPC_FUNC_IMPL(__imp__sub_82F274F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F27508"))) PPC_WEAK_FUNC(sub_82F27508);
PPC_FUNC_IMPL(__imp__sub_82F27508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F27510;
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
	// bl 0x82f4b2f0
	ctx.lr = 0x82F27524;
	sub_82F4B2F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2754c
	if (ctx.cr0.lt) goto loc_82F2754C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2754C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F2754C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F27554"))) PPC_WEAK_FUNC(sub_82F27554);
PPC_FUNC_IMPL(__imp__sub_82F27554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F27558"))) PPC_WEAK_FUNC(sub_82F27558);
PPC_FUNC_IMPL(__imp__sub_82F27558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82F27560;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,112(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// lwz r4,108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F2759C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// bne cr6,0x82f275b4
	if (!ctx.cr6.eq) goto loc_82F275B4;
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82f275cc
	goto loc_82F275CC;
loc_82F275B4:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f3c5d0
	ctx.lr = 0x82F275CC;
	sub_82F3C5D0(ctx, base);
loc_82F275CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F275D4"))) PPC_WEAK_FUNC(sub_82F275D4);
PPC_FUNC_IMPL(__imp__sub_82F275D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F275D8"))) PPC_WEAK_FUNC(sub_82F275D8);
PPC_FUNC_IMPL(__imp__sub_82F275D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F275E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82f3bbf0
	ctx.lr = 0x82F275F4;
	sub_82F3BBF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f27628
	if (ctx.cr0.lt) goto loc_82F27628;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F27614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// bne cr6,0x82f27624
	if (!ctx.cr6.eq) goto loc_82F27624;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82F27624:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F27628:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F27630"))) PPC_WEAK_FUNC(sub_82F27630);
PPC_FUNC_IMPL(__imp__sub_82F27630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82F27638;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82f27660
	if (ctx.cr6.eq) goto loc_82F27660;
	// lis r24,15
	ctx.r24.s64 = 983040;
	// b 0x82f27714
	goto loc_82F27714;
loc_82F27660:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f27680
	if (ctx.cr0.eq) goto loc_82F27680;
	// lis r24,16
	ctx.r24.s64 = 1048576;
loc_82F27680:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f27714
	if (ctx.cr6.eq) goto loc_82F27714;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r27,r11,11256
	ctx.r27.s64 = ctx.r11.s64 + 11256;
loc_82F27698:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82f276e0
	if (ctx.cr6.lt) goto loc_82F276E0;
	// beq cr6,0x82f276d8
	if (ctx.cr6.eq) goto loc_82F276D8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82f276d0
	if (ctx.cr6.lt) goto loc_82F276D0;
	// bne cr6,0x82f276e4
	if (!ctx.cr6.eq) goto loc_82F276E4;
	// lis r31,8
	ctx.r31.s64 = 524288;
	// b 0x82f276e4
	goto loc_82F276E4;
loc_82F276D0:
	// lis r31,4
	ctx.r31.s64 = 262144;
	// b 0x82f276e4
	goto loc_82F276E4;
loc_82F276D8:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x82f276e4
	goto loc_82F276E4;
loc_82F276E0:
	// lis r31,1
	ctx.r31.s64 = 65536;
loc_82F276E4:
	// and. r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 & ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f27704
	if (ctx.cr0.eq) goto loc_82F27704;
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,4821
	ctx.r5.s64 = 4821;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82f5e840
	ctx.lr = 0x82F27704;
	sub_82F5E840(ctx, base);
loc_82F27704:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// or r24,r31,r24
	ctx.r24.u64 = ctx.r31.u64 | ctx.r24.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82f27698
	if (!ctx.cr0.eq) goto loc_82F27698;
loc_82F27714:
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f277a8
	if (!ctx.cr0.eq) goto loc_82F277A8;
	// lwz r11,204(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f277a4
	if (!ctx.cr0.eq) goto loc_82F277A4;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f2779c
	if (ctx.cr6.eq) goto loc_82F2779C;
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82F27740:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r7,0,6,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82f2778c
	if (!ctx.cr0.eq) goto loc_82F2778C;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,16(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82f2779c
	if (ctx.cr0.eq) goto loc_82F2779C;
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x82f2779c
	if (ctx.cr6.eq) goto loc_82F2779C;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82f2779c
	if (!ctx.cr6.eq) goto loc_82F2779C;
loc_82F2778C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82f27740
	if (ctx.cr6.lt) goto loc_82F27740;
loc_82F2779C:
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82f277a8
	if (!ctx.cr6.eq) goto loc_82F277A8;
loc_82F277A4:
	// oris r24,r24,32
	ctx.r24.u64 = ctx.r24.u64 | 2097152;
loc_82F277A8:
	// lwz r11,204(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f27800
	if (ctx.cr0.eq) goto loc_82F27800;
	// lwz r11,296(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f27800
	if (ctx.cr6.eq) goto loc_82F27800;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f27800
	if (ctx.cr6.eq) goto loc_82F27800;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82F277D0:
	// lwz r9,300(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 300);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mulli r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 * 6;
	// lwz r7,296(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// blt cr6,0x82f277d0
	if (ctx.cr6.lt) goto loc_82F277D0;
loc_82F27800:
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F27810"))) PPC_WEAK_FUNC(sub_82F27810);
PPC_FUNC_IMPL(__imp__sub_82F27810) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// clrlwi r9,r11,12
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r10,17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// beq cr6,0x82f2784c
	if (ctx.cr6.eq) goto loc_82F2784C;
loc_82F27844:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F2784C:
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f27860
	if (!ctx.cr6.eq) goto loc_82F27860;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// b 0x82f278c8
	goto loc_82F278C8;
loc_82F27860:
	// lis r10,29568
	ctx.r10.s64 = 1937768448;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82f2789c
	if (ctx.cr6.gt) goto loc_82F2789C;
	// beq cr6,0x82f278cc
	if (ctx.cr6.eq) goto loc_82F278CC;
	// lis r10,4336
	ctx.r10.s64 = 284164096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f278cc
	if (ctx.cr6.eq) goto loc_82F278CC;
	// lis r10,29520
	ctx.r10.s64 = 1934622720;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f278cc
	if (ctx.cr6.eq) goto loc_82F278CC;
	// lis r10,29536
	ctx.r10.s64 = 1935671296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f278cc
	if (ctx.cr6.eq) goto loc_82F278CC;
	// lis r10,29552
	ctx.r10.s64 = 1936719872;
	// b 0x82f278c4
	goto loc_82F278C4;
loc_82F2789C:
	// lis r10,29760
	ctx.r10.s64 = 1950351360;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f278cc
	if (ctx.cr6.eq) goto loc_82F278CC;
	// lis r10,29776
	ctx.r10.s64 = 1951399936;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f278cc
	if (ctx.cr6.eq) goto loc_82F278CC;
	// lis r10,29792
	ctx.r10.s64 = 1952448512;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f278cc
	if (ctx.cr6.eq) goto loc_82F278CC;
	// lis r10,29808
	ctx.r10.s64 = 1953497088;
loc_82F278C4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82F278C8:
	// bne cr6,0x82f27844
	if (!ctx.cr6.eq) goto loc_82F27844;
loc_82F278CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F278D4"))) PPC_WEAK_FUNC(sub_82F278D4);
PPC_FUNC_IMPL(__imp__sub_82F278D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F278D8"))) PPC_WEAK_FUNC(sub_82F278D8);
PPC_FUNC_IMPL(__imp__sub_82F278D8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-31908
	ctx.r10.s64 = -2091122688;
	// rlwimi r11,r4,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r10,r10,23080
	ctx.r10.s64 = ctx.r10.s64 + 23080;
	// rlwinm r11,r11,26,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7C;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F278F4"))) PPC_WEAK_FUNC(sub_82F278F4);
PPC_FUNC_IMPL(__imp__sub_82F278F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F278F8"))) PPC_WEAK_FUNC(sub_82F278F8);
PPC_FUNC_IMPL(__imp__sub_82F278F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r6,r10,11336
	ctx.r6.s64 = ctx.r10.s64 + 11336;
	// addi r5,r9,11316
	ctx.r5.s64 = ctx.r9.s64 + 11316;
	// lwz r11,524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// addi r4,r8,11300
	ctx.r4.s64 = ctx.r8.s64 + 11300;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F27920"))) PPC_WEAK_FUNC(sub_82F27920);
PPC_FUNC_IMPL(__imp__sub_82F27920) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r6,r10,11396
	ctx.r6.s64 = ctx.r10.s64 + 11396;
	// addi r5,r9,11372
	ctx.r5.s64 = ctx.r9.s64 + 11372;
	// lwz r11,532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// addi r4,r8,11364
	ctx.r4.s64 = ctx.r8.s64 + 11364;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F27948"))) PPC_WEAK_FUNC(sub_82F27948);
PPC_FUNC_IMPL(__imp__sub_82F27948) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r6,r10,11396
	ctx.r6.s64 = ctx.r10.s64 + 11396;
	// addi r5,r9,11372
	ctx.r5.s64 = ctx.r9.s64 + 11372;
	// lwz r11,536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// addi r4,r8,11364
	ctx.r4.s64 = ctx.r8.s64 + 11364;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F27970"))) PPC_WEAK_FUNC(sub_82F27970);
PPC_FUNC_IMPL(__imp__sub_82F27970) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r6,r10,11460
	ctx.r6.s64 = ctx.r10.s64 + 11460;
	// addi r5,r9,11440
	ctx.r5.s64 = ctx.r9.s64 + 11440;
	// lwz r11,532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// addi r4,r8,11424
	ctx.r4.s64 = ctx.r8.s64 + 11424;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F27998"))) PPC_WEAK_FUNC(sub_82F27998);
PPC_FUNC_IMPL(__imp__sub_82F27998) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r6,r10,11460
	ctx.r6.s64 = ctx.r10.s64 + 11460;
	// addi r5,r9,11440
	ctx.r5.s64 = ctx.r9.s64 + 11440;
	// lwz r11,536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// addi r4,r8,11424
	ctx.r4.s64 = ctx.r8.s64 + 11424;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F279C0"))) PPC_WEAK_FUNC(sub_82F279C0);
PPC_FUNC_IMPL(__imp__sub_82F279C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82F279C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f279e8
	if (!ctx.cr6.eq) goto loc_82F279E8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82f27b40
	goto loc_82F27B40;
loc_82F279E8:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f27a00
	if (!ctx.cr6.eq) goto loc_82F27A00;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f27b40
	goto loc_82F27B40;
loc_82F27A00:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82F27A18:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r8,r7,r29
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82f27a84
	if (!ctx.cr6.eq) goto loc_82F27A84;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f27a84
	if (!ctx.cr6.eq) goto loc_82F27A84;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f27b2c
	if (ctx.cr6.eq) goto loc_82F27B2C;
loc_82F27A84:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// oris r9,r10,45056
	ctx.r9.u64 = ctx.r10.u64 | 2952790016;
	// ori r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 4096;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82f27ae8
	if (ctx.cr6.lt) goto loc_82F27AE8;
	// beq cr6,0x82f27ae0
	if (ctx.cr6.eq) goto loc_82F27AE0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82f27ad8
	if (ctx.cr6.lt) goto loc_82F27AD8;
	// bne cr6,0x82f27ae8
	if (!ctx.cr6.eq) goto loc_82F27AE8;
	// oris r9,r9,255
	ctx.r9.u64 = ctx.r9.u64 | 16711680;
	// b 0x82f27ae4
	goto loc_82F27AE4;
loc_82F27AD8:
	// oris r9,r9,170
	ctx.r9.u64 = ctx.r9.u64 | 11141120;
	// b 0x82f27ae4
	goto loc_82F27AE4;
loc_82F27AE0:
	// oris r9,r9,85
	ctx.r9.u64 = ctx.r9.u64 | 5570560;
loc_82F27AE4:
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82F27AE8:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f27afc
	if (!ctx.cr6.eq) goto loc_82F27AFC;
	// oris r11,r9,3328
	ctx.r11.u64 = ctx.r9.u64 | 218103808;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82F27AFC:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,572(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 572);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mullw r4,r11,r29
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F27B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f27b40
	if (ctx.cr0.lt) goto loc_82F27B40;
loc_82F27B2C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// blt cr6,0x82f27a18
	if (ctx.cr6.lt) goto loc_82F27A18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f46a38
	ctx.lr = 0x82F27B40;
	sub_82F46A38(ctx, base);
loc_82F27B40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F27B48"))) PPC_WEAK_FUNC(sub_82F27B48);
PPC_FUNC_IMPL(__imp__sub_82F27B48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F27B5C"))) PPC_WEAK_FUNC(sub_82F27B5C);
PPC_FUNC_IMPL(__imp__sub_82F27B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F27B60"))) PPC_WEAK_FUNC(sub_82F27B60);
PPC_FUNC_IMPL(__imp__sub_82F27B60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F27B74"))) PPC_WEAK_FUNC(sub_82F27B74);
PPC_FUNC_IMPL(__imp__sub_82F27B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F27B78"))) PPC_WEAK_FUNC(sub_82F27B78);
PPC_FUNC_IMPL(__imp__sub_82F27B78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F27B8C"))) PPC_WEAK_FUNC(sub_82F27B8C);
PPC_FUNC_IMPL(__imp__sub_82F27B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F27B90"))) PPC_WEAK_FUNC(sub_82F27B90);
PPC_FUNC_IMPL(__imp__sub_82F27B90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

