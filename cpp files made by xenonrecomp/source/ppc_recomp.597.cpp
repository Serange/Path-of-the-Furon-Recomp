#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8335A650"))) PPC_WEAK_FUNC(sub_8335A650);
PPC_FUNC_IMPL(__imp__sub_8335A650) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r10,10576
	ctx.r8.s64 = ctx.r10.s64 + 10576;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r9,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r5,14
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 14, ctx.xer);
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,10528
	ctx.r12.s64 = ctx.r12.s64 + 10528;
	// lbzx r0,r12,r5
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r5.u32);
	// lis r12,-31946
	ctx.r12.s64 = -2093613056;
	// addi r12,r12,-22880
	ctx.r12.s64 = ctx.r12.s64 + -22880;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r5.u64) {
	case 0:
		goto loc_8335A6A0;
	case 1:
		goto loc_8335A6F4;
	case 2:
		goto loc_8335A6B8;
	case 3:
		goto loc_8335A6B8;
	case 4:
		goto loc_8335A6B8;
	case 5:
		goto loc_8335A6A0;
	case 6:
		goto loc_8335A6C0;
	case 7:
		goto loc_8335A6C0;
	case 8:
		goto loc_8335A6A0;
	case 9:
		goto loc_8335A6A0;
	case 10:
		goto loc_8335A6D0;
	case 11:
		goto loc_8335A6B8;
	case 12:
		goto loc_8335A6B8;
	case 13:
		goto loc_8335A6D8;
	case 14:
		goto loc_8335A6E0;
	default:
		__builtin_unreachable();
	}
loc_8335A6A0:
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8335A6A4:
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
loc_8335A6B8:
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8335a6a4
	goto loc_8335A6A4;
loc_8335A6C0:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8335a6ec
	goto loc_8335A6EC;
loc_8335A6D0:
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// b 0x8335a6a4
	goto loc_8335A6A4;
loc_8335A6D8:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// b 0x8335a6e4
	goto loc_8335A6E4;
loc_8335A6E0:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
loc_8335A6E4:
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8335A6EC:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_8335A6F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A6FC"))) PPC_WEAK_FUNC(sub_8335A6FC);
PPC_FUNC_IMPL(__imp__sub_8335A6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A700"))) PPC_WEAK_FUNC(sub_8335A700);
PPC_FUNC_IMPL(__imp__sub_8335A700) {
	PPC_FUNC_PROLOGUE();
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8335a72c
	if (ctx.cr6.eq) goto loc_8335A72C;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x8335a72c
	if (ctx.cr6.eq) goto loc_8335A72C;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8335a724
	if (ctx.cr6.lt) goto loc_8335A724;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x8335a72c
	if (!ctx.cr6.gt) goto loc_8335A72C;
loc_8335A724:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8335a730
	goto loc_8335A730;
loc_8335A72C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8335A730:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A738"))) PPC_WEAK_FUNC(sub_8335A738);
PPC_FUNC_IMPL(__imp__sub_8335A738) {
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
	// stwu r1,-2160(r1)
	ea = -2160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8335a81c
	if (ctx.cr6.eq) goto loc_8335A81C;
	// lwz r11,8236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8335a81c
	if (ctx.cr6.lt) goto loc_8335A81C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833b8404
	ctx.lr = 0x8335A778;
	__imp___vsnprintf(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x8335a81c
	if (!ctx.cr0.gt) goto loc_8335A81C;
	// lbz r11,8233(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8233);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335a7f8
	if (ctx.cr0.eq) goto loc_8335A7F8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r10,8233(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8233, ctx.r10.u8);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8335a7c4
	if (ctx.cr6.eq) goto loc_8335A7C4;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x8335a7c4
	if (ctx.cr6.eq) goto loc_8335A7C4;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8335a7bc
	if (ctx.cr6.lt) goto loc_8335A7BC;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x8335a7c4
	if (!ctx.cr6.gt) goto loc_8335A7C4;
loc_8335A7BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8335a7c8
	goto loc_8335A7C8;
loc_8335A7C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8335A7C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335a7f8
	if (!ctx.cr0.eq) goto loc_8335A7F8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,8220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8220);
	// lwz r10,8216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8216);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335A7EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8335a7f8
	if (!ctx.cr0.lt) goto loc_8335A7F8;
	// stw r3,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r3.u32);
loc_8335A7F8:
	// lwz r3,8220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8220);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,8216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8216);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8335A810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8335a81c
	if (!ctx.cr0.lt) goto loc_8335A81C;
	// stw r3,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r3.u32);
loc_8335A81C:
	// addi r1,r1,2160
	ctx.r1.s64 = ctx.r1.s64 + 2160;
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

__attribute__((alias("__imp__sub_8335A834"))) PPC_WEAK_FUNC(sub_8335A834);
PPC_FUNC_IMPL(__imp__sub_8335A834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A838"))) PPC_WEAK_FUNC(sub_8335A838);
PPC_FUNC_IMPL(__imp__sub_8335A838) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r11,8232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8232, ctx.r11.u8);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8335a738
	ctx.lr = 0x8335A878;
	sub_8335A738(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A888"))) PPC_WEAK_FUNC(sub_8335A888);
PPC_FUNC_IMPL(__imp__sub_8335A888) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,12136
	ctx.r4.s64 = ctx.r11.s64 + 12136;
	// bl 0x8335a838
	ctx.lr = 0x8335A8A0;
	sub_8335A838(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A8B0"))) PPC_WEAK_FUNC(sub_8335A8B0);
PPC_FUNC_IMPL(__imp__sub_8335A8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8335A8B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r11,-12392
	ctx.r29.s64 = ctx.r11.s64 + -12392;
	// addi r28,r10,-12384
	ctx.r28.s64 = ctx.r10.s64 + -12384;
	// rlwinm. r9,r9,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8335a8ec
	if (!ctx.cr0.eq) goto loc_8335A8EC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8335a924
	if (ctx.cr6.eq) goto loc_8335A924;
loc_8335A8EC:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335a904
	if (ctx.cr0.eq) goto loc_8335A904;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5768
	ctx.r4.s64 = ctx.r11.s64 + 5768;
	// bl 0x8335a838
	ctx.lr = 0x8335A904;
	sub_8335A838(ctx, base);
loc_8335A904:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x8335a914
	if (!ctx.cr6.eq) goto loc_8335A914;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8335A914:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10632
	ctx.r4.s64 = ctx.r11.s64 + 10632;
	// bl 0x8335a838
	ctx.lr = 0x8335A924;
	sub_8335A838(ctx, base);
loc_8335A924:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335a938
	if (!ctx.cr0.eq) goto loc_8335A938;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8335a958
	if (!ctx.cr6.eq) goto loc_8335A958;
loc_8335A938:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x8335a948
	if (!ctx.cr6.eq) goto loc_8335A948;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8335A948:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10604
	ctx.r4.s64 = ctx.r11.s64 + 10604;
	// bl 0x8335a838
	ctx.lr = 0x8335A958;
	sub_8335A838(ctx, base);
loc_8335A958:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335A960"))) PPC_WEAK_FUNC(sub_8335A960);
PPC_FUNC_IMPL(__imp__sub_8335A960) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8335a980
	if (ctx.cr6.eq) goto loc_8335A980;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10652
	ctx.r4.s64 = ctx.r11.s64 + 10652;
	// b 0x8335a988
	goto loc_8335A988;
loc_8335A980:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10644
	ctx.r4.s64 = ctx.r11.s64 + 10644;
loc_8335A988:
	// bl 0x8335a838
	ctx.lr = 0x8335A98C;
	sub_8335A838(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A99C"))) PPC_WEAK_FUNC(sub_8335A99C);
PPC_FUNC_IMPL(__imp__sub_8335A99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A9A0"))) PPC_WEAK_FUNC(sub_8335A9A0);
PPC_FUNC_IMPL(__imp__sub_8335A9A0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335a9e0
	if (ctx.cr0.eq) goto loc_8335A9E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stb r11,8233(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8233, ctx.r11.u8);
	// addi r4,r10,-18112
	ctx.r4.s64 = ctx.r10.s64 + -18112;
	// bl 0x8335a838
	ctx.lr = 0x8335A9D8;
	sub_8335A838(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8233(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8233, ctx.r11.u8);
loc_8335A9E0:
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

__attribute__((alias("__imp__sub_8335A9F4"))) PPC_WEAK_FUNC(sub_8335A9F4);
PPC_FUNC_IMPL(__imp__sub_8335A9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A9F8"))) PPC_WEAK_FUNC(sub_8335A9F8);
PPC_FUNC_IMPL(__imp__sub_8335A9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8335AA00;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-20308
	ctx.r4.s64 = ctx.r11.s64 + -20308;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8335a9a0
	ctx.lr = 0x8335AA1C;
	sub_8335A9A0(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335aa30
	if (ctx.cr0.eq) goto loc_8335AA30;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r6,r11,10660
	ctx.r6.s64 = ctx.r11.s64 + 10660;
	// b 0x8335aa38
	goto loc_8335AA38;
loc_8335AA30:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r11,21574
	ctx.r6.s64 = ctx.r11.s64 + 21574;
loc_8335AA38:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,6784
	ctx.r4.s64 = ctx.r11.s64 + 6784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335AA4C;
	sub_8335A838(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-20300
	ctx.r4.s64 = ctx.r11.s64 + -20300;
	// bl 0x8335a9a0
	ctx.lr = 0x8335AA5C;
	sub_8335A9A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335AA64"))) PPC_WEAK_FUNC(sub_8335AA64);
PPC_FUNC_IMPL(__imp__sub_8335AA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335AA68"))) PPC_WEAK_FUNC(sub_8335AA68);
PPC_FUNC_IMPL(__imp__sub_8335AA68) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,10668
	ctx.r4.s64 = ctx.r11.s64 + 10668;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8335a9a0
	ctx.lr = 0x8335AA90;
	sub_8335A9A0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18112
	ctx.r4.s64 = ctx.r11.s64 + -18112;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335AAA4;
	sub_8335A838(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-20300
	ctx.r4.s64 = ctx.r11.s64 + -20300;
	// bl 0x8335a9a0
	ctx.lr = 0x8335AAB4;
	sub_8335A9A0(ctx, base);
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

__attribute__((alias("__imp__sub_8335AACC"))) PPC_WEAK_FUNC(sub_8335AACC);
PPC_FUNC_IMPL(__imp__sub_8335AACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335AAD0"))) PPC_WEAK_FUNC(sub_8335AAD0);
PPC_FUNC_IMPL(__imp__sub_8335AAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-20292
	ctx.r4.s64 = ctx.r11.s64 + -20292;
	// b 0x8335a9a0
	sub_8335A9A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335AADC"))) PPC_WEAK_FUNC(sub_8335AADC);
PPC_FUNC_IMPL(__imp__sub_8335AADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335AAE0"))) PPC_WEAK_FUNC(sub_8335AAE0);
PPC_FUNC_IMPL(__imp__sub_8335AAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-20300
	ctx.r4.s64 = ctx.r11.s64 + -20300;
	// b 0x8335a9a0
	sub_8335A9A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335AAEC"))) PPC_WEAK_FUNC(sub_8335AAEC);
PPC_FUNC_IMPL(__imp__sub_8335AAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335AAF0"))) PPC_WEAK_FUNC(sub_8335AAF0);
PPC_FUNC_IMPL(__imp__sub_8335AAF0) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8335ab30
	if (ctx.cr0.eq) goto loc_8335AB30;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r9,10676
	ctx.r4.s64 = ctx.r9.s64 + 10676;
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x8335a838
	ctx.lr = 0x8335AB30;
	sub_8335A838(ctx, base);
loc_8335AB30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335AB40"))) PPC_WEAK_FUNC(sub_8335AB40);
PPC_FUNC_IMPL(__imp__sub_8335AB40) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335ab68
	if (ctx.cr0.eq) goto loc_8335AB68;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10692
	ctx.r4.s64 = ctx.r11.s64 + 10692;
	// bl 0x8335a838
	ctx.lr = 0x8335AB68;
	sub_8335A838(ctx, base);
loc_8335AB68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335AB78"))) PPC_WEAK_FUNC(sub_8335AB78);
PPC_FUNC_IMPL(__imp__sub_8335AB78) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335ab9c
	if (ctx.cr0.eq) goto loc_8335AB9C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10708
	ctx.r4.s64 = ctx.r11.s64 + 10708;
	// bl 0x8335a838
	ctx.lr = 0x8335AB9C;
	sub_8335A838(ctx, base);
loc_8335AB9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335ABAC"))) PPC_WEAK_FUNC(sub_8335ABAC);
PPC_FUNC_IMPL(__imp__sub_8335ABAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335ABB0"))) PPC_WEAK_FUNC(sub_8335ABB0);
PPC_FUNC_IMPL(__imp__sub_8335ABB0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-20292
	ctx.r4.s64 = ctx.r11.s64 + -20292;
	// bl 0x8335a9a0
	ctx.lr = 0x8335ABD0;
	sub_8335A9A0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10724
	ctx.r4.s64 = ctx.r11.s64 + 10724;
	// bl 0x8335a838
	ctx.lr = 0x8335ABE0;
	sub_8335A838(ctx, base);
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

__attribute__((alias("__imp__sub_8335ABF4"))) PPC_WEAK_FUNC(sub_8335ABF4);
PPC_FUNC_IMPL(__imp__sub_8335ABF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335ABF8"))) PPC_WEAK_FUNC(sub_8335ABF8);
PPC_FUNC_IMPL(__imp__sub_8335ABF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335AC04"))) PPC_WEAK_FUNC(sub_8335AC04);
PPC_FUNC_IMPL(__imp__sub_8335AC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335AC08"))) PPC_WEAK_FUNC(sub_8335AC08);
PPC_FUNC_IMPL(__imp__sub_8335AC08) {
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
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8335ac48
	if (ctx.cr6.eq) goto loc_8335AC48;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stbx r30,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r10,-18112
	ctx.r3.s64 = ctx.r10.s64 + -18112;
	// bl 0x82e90f20
	ctx.lr = 0x8335AC44;
	sub_82E90F20(ctx, base);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
loc_8335AC48:
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

__attribute__((alias("__imp__sub_8335AC60"))) PPC_WEAK_FUNC(sub_8335AC60);
PPC_FUNC_IMPL(__imp__sub_8335AC60) {
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
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x8335AC80;
	sub_82CB16F0(ctx, base);
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

__attribute__((alias("__imp__sub_8335AC98"))) PPC_WEAK_FUNC(sub_8335AC98);
PPC_FUNC_IMPL(__imp__sub_8335AC98) {
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

__attribute__((alias("__imp__sub_8335ACC0"))) PPC_WEAK_FUNC(sub_8335ACC0);
PPC_FUNC_IMPL(__imp__sub_8335ACC0) {
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

__attribute__((alias("__imp__sub_8335ACE0"))) PPC_WEAK_FUNC(sub_8335ACE0);
PPC_FUNC_IMPL(__imp__sub_8335ACE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8335ACE8;
	__savegprlr_27(ctx, base);
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
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x8335AD10;
	sub_82CB16F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,8216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8216, ctx.r30.u32);
	// stw r29,8220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8220, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,8224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8224, ctx.r28.u32);
	// stw r27,8228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8228, ctx.r27.u32);
	// stb r11,8233(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8233, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335AD34"))) PPC_WEAK_FUNC(sub_8335AD34);
PPC_FUNC_IMPL(__imp__sub_8335AD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335AD38"))) PPC_WEAK_FUNC(sub_8335AD38);
PPC_FUNC_IMPL(__imp__sub_8335AD38) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-7544
	ctx.r4.s64 = ctx.r10.s64 + -7544;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335AD5C;
	sub_8335A838(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335AD6C"))) PPC_WEAK_FUNC(sub_8335AD6C);
PPC_FUNC_IMPL(__imp__sub_8335AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335AD70"))) PPC_WEAK_FUNC(sub_8335AD70);
PPC_FUNC_IMPL(__imp__sub_8335AD70) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,10728
	ctx.r4.s64 = ctx.r11.s64 + 10728;
	// bl 0x8335a838
	ctx.lr = 0x8335AD8C;
	sub_8335A838(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335AD9C"))) PPC_WEAK_FUNC(sub_8335AD9C);
PPC_FUNC_IMPL(__imp__sub_8335AD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335ADA0"))) PPC_WEAK_FUNC(sub_8335ADA0);
PPC_FUNC_IMPL(__imp__sub_8335ADA0) {
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
	// lbzx r11,r4,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r4,r10,-22340
	ctx.r4.s64 = ctx.r10.s64 + -22340;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335ADC0;
	sub_8335A838(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335ADD0"))) PPC_WEAK_FUNC(sub_8335ADD0);
PPC_FUNC_IMPL(__imp__sub_8335ADD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x8335ADD8;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r10,-12592
	ctx.r4.s64 = ctx.r10.s64 + -12592;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// clrlwi r31,r11,26
	ctx.r31.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x8335a838
	ctx.lr = 0x8335AE08;
	sub_8335A838(ctx, base);
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8335ae20
	if (!ctx.cr6.eq) goto loc_8335AE20;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8335ae24
	if (!ctx.cr6.eq) goto loc_8335AE24;
loc_8335AE20:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8335AE24:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8335ae48
	if (!ctx.cr6.eq) goto loc_8335AE48;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8335ae40
	if (ctx.cr6.eq) goto loc_8335AE40;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x8335ae48
	if (!ctx.cr6.eq) goto loc_8335AE48;
loc_8335AE40:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8335ae4c
	goto loc_8335AE4C;
loc_8335AE48:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8335AE4C:
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8335af04
	if (ctx.cr6.eq) goto loc_8335AF04;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// beq cr6,0x8335aef8
	if (ctx.cr6.eq) goto loc_8335AEF8;
	// ble cr6,0x8335aea8
	if (!ctx.cr6.gt) goto loc_8335AEA8;
	// cmpwi cr6,r31,37
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 37, ctx.xer);
	// ble cr6,0x8335ae98
	if (!ctx.cr6.gt) goto loc_8335AE98;
	// cmpwi cr6,r31,62
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 62, ctx.xer);
	// beq cr6,0x8335ae8c
	if (ctx.cr6.eq) goto loc_8335AE8C;
	// cmpwi cr6,r31,63
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 63, ctx.xer);
	// bne cr6,0x8335aea8
	if (!ctx.cr6.eq) goto loc_8335AEA8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,7904
	ctx.r5.s64 = ctx.r11.s64 + 7904;
	// b 0x8335af10
	goto loc_8335AF10;
loc_8335AE8C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,7912
	ctx.r5.s64 = ctx.r11.s64 + 7912;
	// b 0x8335af10
	goto loc_8335AF10;
loc_8335AE98:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r31,-33
	ctx.r30.s64 = ctx.r31.s64 + -33;
	// addi r5,r11,-9696
	ctx.r5.s64 = ctx.r11.s64 + -9696;
	// b 0x8335af10
	goto loc_8335AF10;
loc_8335AEA8:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm. r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335aeec
	if (ctx.cr0.eq) goto loc_8335AEEC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r11,4,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x7;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8335aed0
	if (!ctx.cr6.lt) goto loc_8335AED0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,7880
	ctx.r5.s64 = ctx.r11.s64 + 7880;
	// b 0x8335af0c
	goto loc_8335AF0C;
loc_8335AED0:
	// cmpwi cr6,r31,61
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 61, ctx.xer);
	// bne cr6,0x8335aeec
	if (!ctx.cr6.eq) goto loc_8335AEEC;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335aeec
	if (ctx.cr0.eq) goto loc_8335AEEC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,7872
	ctx.r5.s64 = ctx.r11.s64 + 7872;
	// b 0x8335af10
	goto loc_8335AF10;
loc_8335AEEC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,7836
	ctx.r5.s64 = ctx.r11.s64 + 7836;
	// b 0x8335af0c
	goto loc_8335AF0C;
loc_8335AEF8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-9692
	ctx.r5.s64 = ctx.r11.s64 + -9692;
	// b 0x8335af10
	goto loc_8335AF10;
loc_8335AF04:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,7924
	ctx.r5.s64 = ctx.r11.s64 + 7924;
loc_8335AF0C:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8335AF10:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-18112
	ctx.r4.s64 = ctx.r11.s64 + -18112;
	// bl 0x8335a838
	ctx.lr = 0x8335AF20;
	sub_8335A838(ctx, base);
	// clrlwi. r31,r28,24
	ctx.r31.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8335af38
	if (ctx.cr0.eq) goto loc_8335AF38;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-7508
	ctx.r4.s64 = ctx.r11.s64 + -7508;
	// bl 0x8335a838
	ctx.lr = 0x8335AF38;
	sub_8335A838(ctx, base);
loc_8335AF38:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8335af58
	if (!ctx.cr6.eq) goto loc_8335AF58;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8335af58
	if (ctx.cr6.eq) goto loc_8335AF58;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,10740
	ctx.r4.s64 = ctx.r11.s64 + 10740;
	// bl 0x8335a838
	ctx.lr = 0x8335AF58;
	sub_8335A838(ctx, base);
loc_8335AF58:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8335af74
	if (ctx.cr6.lt) goto loc_8335AF74;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,24704
	ctx.r4.s64 = ctx.r11.s64 + 24704;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335AF74;
	sub_8335A838(ctx, base);
loc_8335AF74:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8335af8c
	if (ctx.cr6.eq) goto loc_8335AF8C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-7516
	ctx.r4.s64 = ctx.r11.s64 + -7516;
	// bl 0x8335a838
	ctx.lr = 0x8335AF8C;
	sub_8335A838(ctx, base);
loc_8335AF8C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335afa0
	if (ctx.cr0.eq) goto loc_8335AFA0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10736
	ctx.r4.s64 = ctx.r11.s64 + 10736;
	// b 0x8335b134
	goto loc_8335B134;
loc_8335AFA0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8335b01c
	if (!ctx.cr6.eq) goto loc_8335B01C;
	// cmpwi cr6,r24,15
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 15, ctx.xer);
	// beq cr6,0x8335b13c
	if (ctx.cr6.eq) goto loc_8335B13C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,22368
	ctx.r4.s64 = ctx.r11.s64 + 22368;
	// bl 0x8335a838
	ctx.lr = 0x8335AFC0;
	sub_8335A838(ctx, base);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335afd8
	if (ctx.cr0.eq) goto loc_8335AFD8;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,24368
	ctx.r4.s64 = ctx.r11.s64 + 24368;
	// bl 0x8335a838
	ctx.lr = 0x8335AFD8;
	sub_8335A838(ctx, base);
loc_8335AFD8:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335aff0
	if (ctx.cr0.eq) goto loc_8335AFF0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,24372
	ctx.r4.s64 = ctx.r11.s64 + 24372;
	// bl 0x8335a838
	ctx.lr = 0x8335AFF0;
	sub_8335A838(ctx, base);
loc_8335AFF0:
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335b008
	if (ctx.cr0.eq) goto loc_8335B008;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,24376
	ctx.r4.s64 = ctx.r11.s64 + 24376;
	// bl 0x8335a838
	ctx.lr = 0x8335B008;
	sub_8335A838(ctx, base);
loc_8335B008:
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335b13c
	if (ctx.cr0.eq) goto loc_8335B13C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9992
	ctx.r4.s64 = ctx.r11.s64 + -9992;
	// b 0x8335b134
	goto loc_8335B134;
loc_8335B01C:
	// cmpwi cr6,r24,15
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 15, ctx.xer);
	// bne cr6,0x8335b02c
	if (!ctx.cr6.eq) goto loc_8335B02C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8335b13c
	if (ctx.cr6.eq) goto loc_8335B13C;
loc_8335B02C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,22368
	ctx.r4.s64 = ctx.r11.s64 + 22368;
	// bl 0x8335a838
	ctx.lr = 0x8335B03C;
	sub_8335A838(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// addi r9,r11,10732
	ctx.r9.s64 = ctx.r11.s64 + 10732;
loc_8335B048:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// and. r8,r11,r24
	ctx.r8.u64 = ctx.r11.u64 & ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8335b070
	if (ctx.cr0.eq) goto loc_8335B070;
	// and. r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & ctx.r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335b068
	if (ctx.cr0.eq) goto loc_8335B068;
	// li r11,49
	ctx.r11.s64 = 49;
	// b 0x8335b094
	goto loc_8335B094;
loc_8335B068:
	// lbzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// b 0x8335b094
	goto loc_8335B094;
loc_8335B070:
	// and. r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & ctx.r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335b080
	if (ctx.cr0.eq) goto loc_8335B080;
	// li r11,95
	ctx.r11.s64 = 95;
	// b 0x8335b094
	goto loc_8335B094;
loc_8335B080:
	// subfic r11,r22,0
	ctx.xer.ca = ctx.r22.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r22.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
loc_8335B094:
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8335b048
	if (ctx.cr6.lt) goto loc_8335B048;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_8335B0B4:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x8335b0f0
	if (ctx.cr6.eq) goto loc_8335B0F0;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// beq cr6,0x8335b0f0
	if (ctx.cr6.eq) goto loc_8335B0F0;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x8335b0e0
	if (ctx.cr6.eq) goto loc_8335B0E0;
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_8335B0E0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8335b0b4
	if (ctx.cr6.lt) goto loc_8335B0B4;
	// b 0x8335b0f4
	goto loc_8335B0F4;
loc_8335B0F0:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_8335B0F4:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335b108
	if (ctx.cr0.eq) goto loc_8335B108;
	// stb r21,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r21.u8);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// b 0x8335b134
	goto loc_8335B134;
loc_8335B108:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r21,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r21.u8);
loc_8335B110:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,95
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 95, ctx.xer);
	// bne cr6,0x8335b130
	if (!ctx.cr6.eq) goto loc_8335B130;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r21,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r21.u8);
	// bgt 0x8335b110
	if (ctx.cr0.gt) goto loc_8335B110;
loc_8335B130:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_8335B134:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335B13C;
	sub_8335A838(ctx, base);
loc_8335B13C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335B144"))) PPC_WEAK_FUNC(sub_8335B144);
PPC_FUNC_IMPL(__imp__sub_8335B144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335B148"))) PPC_WEAK_FUNC(sub_8335B148);
PPC_FUNC_IMPL(__imp__sub_8335B148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x8335B150;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8335b174
	if (!ctx.cr6.eq) goto loc_8335B174;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8335b184
	if (!ctx.cr6.eq) goto loc_8335B184;
loc_8335B174:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8335b18c
	if (!ctx.cr6.eq) goto loc_8335B18C;
	// rlwinm. r11,r5,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335b18c
	if (ctx.cr0.eq) goto loc_8335B18C;
loc_8335B184:
	// li r21,1
	ctx.r21.s64 = 1;
	// b 0x8335b190
	goto loc_8335B190;
loc_8335B18C:
	// li r21,0
	ctx.r21.s64 = 0;
loc_8335B190:
	// srawi r11,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 6;
	// subfic r10,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r30.s64;
	// and r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 & ctx.r30.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r8,r30
	ctx.r8.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r10,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// clrlwi r28,r7,31
	ctx.r28.u64 = ctx.r7.u32 & 0x1;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// and r23,r10,r6
	ctx.r23.u64 = ctx.r10.u64 & ctx.r6.u64;
	// and r24,r11,r5
	ctx.r24.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8335b1d8
	if (ctx.cr6.eq) goto loc_8335B1D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5764
	ctx.r4.s64 = ctx.r11.s64 + 5764;
	// bl 0x8335a838
	ctx.lr = 0x8335B1D8;
	sub_8335A838(ctx, base);
loc_8335B1D8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8335b1ec
	if (!ctx.cr6.eq) goto loc_8335B1EC;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x8335b1f0
	if (ctx.cr6.eq) goto loc_8335B1F0;
loc_8335B1EC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8335B1F0:
	// subfic r9,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r30.s64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r25,r11,-22340
	ctx.r25.s64 = ctx.r11.s64 + -22340;
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,99
	ctx.r5.s64 = ctx.r11.s64 + 99;
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x8335a838
	ctx.lr = 0x8335B218;
	sub_8335A838(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,10744
	ctx.r29.s64 = ctx.r11.s64 + 10744;
	// beq 0x8335b250
	if (ctx.cr0.eq) goto loc_8335B250;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8335b240
	if (ctx.cr6.eq) goto loc_8335B240;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335B240;
	sub_8335A838(ctx, base);
loc_8335B240:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7508
	ctx.r4.s64 = ctx.r11.s64 + -7508;
	// bl 0x8335a838
	ctx.lr = 0x8335B250;
	sub_8335A838(ctx, base);
loc_8335B250:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r11,24704
	ctx.r4.s64 = ctx.r11.s64 + 24704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335B264;
	sub_8335A838(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r11,-7500
	ctx.r30.s64 = ctx.r11.s64 + -7500;
	// beq cr6,0x8335b280
	if (ctx.cr6.eq) goto loc_8335B280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335B280;
	sub_8335A838(ctx, base);
loc_8335B280:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8335b2a8
	if (ctx.cr6.eq) goto loc_8335B2A8;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8335b29c
	if (ctx.cr6.eq) goto loc_8335B29C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7512
	ctx.r4.s64 = ctx.r11.s64 + -7512;
	// b 0x8335b2a0
	goto loc_8335B2A0;
loc_8335B29C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8335B2A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335B2A8;
	sub_8335A838(ctx, base);
loc_8335B2A8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8335b2bc
	if (ctx.cr6.eq) goto loc_8335B2BC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7516
	ctx.r4.s64 = ctx.r11.s64 + -7516;
	// b 0x8335b2c8
	goto loc_8335B2C8;
loc_8335B2BC:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8335b2d0
	if (ctx.cr6.eq) goto loc_8335B2D0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8335B2C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335B2D0;
	sub_8335A838(ctx, base);
loc_8335B2D0:
	// lwz r29,340(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bge cr6,0x8335b344
	if (!ctx.cr6.lt) goto loc_8335B344;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22368
	ctx.r4.s64 = ctx.r11.s64 + 22368;
	// bl 0x8335a838
	ctx.lr = 0x8335B2EC;
	sub_8335A838(ctx, base);
	// srawi r11,r26,6
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 6;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r10,-10024
	ctx.r30.s64 = ctx.r10.s64 + -10024;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335B314;
	sub_8335A838(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// ble cr6,0x8335b418
	if (!ctx.cr6.gt) goto loc_8335B418;
	// lbz r11,351(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335b338
	if (ctx.cr0.eq) goto loc_8335B338;
	// srawi r11,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// b 0x8335b33c
	goto loc_8335B33C;
loc_8335B338:
	// clrlwi r11,r26,30
	ctx.r11.u64 = ctx.r26.u32 & 0x3;
loc_8335B33C:
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// b 0x8335b408
	goto loc_8335B408;
loc_8335B344:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8335b418
	if (ctx.cr6.eq) goto loc_8335B418;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22368
	ctx.r4.s64 = ctx.r11.s64 + 22368;
	// bl 0x8335a838
	ctx.lr = 0x8335B35C;
	sub_8335A838(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// srawi r9,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r26.s32 >> 2;
	// addi r28,r11,-10024
	ctx.r28.s64 = ctx.r11.s64 + -10024;
	// srawi r10,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 4;
	// srawi r11,r26,6
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 6;
	// clrlwi r30,r26,30
	ctx.r30.u64 = ctx.r26.u32 & 0x3;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r24,r11,30
	ctx.r24.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r27,r9,30
	ctx.r27.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r29,r10,30
	ctx.r29.u64 = ctx.r10.u32 & 0x3;
	// lbzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335B3A0;
	sub_8335A838(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// rldicr r11,r27,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// rldimi r10,r26,32,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r26.u64, 32) & 0x300000000) | (ctx.r10.u64 & 0xFFFFFFFCFFFFFFFF);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | ctx.r30.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x8335b3c4
	if (!ctx.cr6.eq) goto loc_8335B3C4;
	// cmpw cr6,r24,r30
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8335b418
	if (ctx.cr6.eq) goto loc_8335B418;
loc_8335B3C4:
	// lbzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r28.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335B3D8;
	sub_8335A838(ctx, base);
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x8335b3e8
	if (!ctx.cr6.eq) goto loc_8335B3E8;
	// cmpw cr6,r24,r27
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8335b418
	if (ctx.cr6.eq) goto loc_8335B418;
loc_8335B3E8:
	// lbzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335B3FC;
	sub_8335A838(ctx, base);
	// cmpw cr6,r24,r29
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8335b418
	if (ctx.cr6.eq) goto loc_8335B418;
	// lbzx r11,r24,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r28.u32);
loc_8335B408:
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335B418;
	sub_8335A838(ctx, base);
loc_8335B418:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335B420"))) PPC_WEAK_FUNC(sub_8335B420);
PPC_FUNC_IMPL(__imp__sub_8335B420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8335B428;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// clrlwi r28,r4,26
	ctx.r28.u64 = ctx.r4.u32 & 0x3F;
	// clrlwi r27,r11,31
	ctx.r27.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8335b454
	if (ctx.cr6.eq) goto loc_8335B454;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5764
	ctx.r4.s64 = ctx.r11.s64 + 5764;
	// bl 0x8335a838
	ctx.lr = 0x8335B454;
	sub_8335A838(ctx, base);
loc_8335B454:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r11,-7504
	ctx.r29.s64 = ctx.r11.s64 + -7504;
	// beq cr6,0x8335b470
	if (ctx.cr6.eq) goto loc_8335B470;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335B470;
	sub_8335A838(ctx, base);
loc_8335B470:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-7472
	ctx.r4.s64 = ctx.r11.s64 + -7472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335B484;
	sub_8335A838(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7516
	ctx.r4.s64 = ctx.r11.s64 + -7516;
	// bl 0x8335a838
	ctx.lr = 0x8335B494;
	sub_8335A838(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8335b540
	if (ctx.cr6.eq) goto loc_8335B540;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22368
	ctx.r4.s64 = ctx.r11.s64 + 22368;
	// bl 0x8335a838
	ctx.lr = 0x8335B4AC;
	sub_8335A838(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// clrlwi r10,r30,30
	ctx.r10.u64 = ctx.r30.u32 & 0x3;
	// addi r11,r11,-10024
	ctx.r11.s64 = ctx.r11.s64 + -10024;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r9,-22340
	ctx.r28.s64 = ctx.r9.s64 + -22340;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335B4D4;
	sub_8335A838(ctx, base);
	// srawi r11,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 2;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-7480
	ctx.r10.s64 = ctx.r10.s64 + -7480;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335B4F8;
	sub_8335A838(ctx, base);
	// srawi r11,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 4;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-7488
	ctx.r10.s64 = ctx.r10.s64 + -7488;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335B51C;
	sub_8335A838(ctx, base);
	// srawi r11,r30,6
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 6;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-7496
	ctx.r10.s64 = ctx.r10.s64 + -7496;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335B540;
	sub_8335A838(ctx, base);
loc_8335B540:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8335b550
	if (ctx.cr6.eq) goto loc_8335B550;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8335b558
	goto loc_8335B558;
loc_8335B550:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,21574
	ctx.r4.s64 = ctx.r11.s64 + 21574;
loc_8335B558:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335B560;
	sub_8335A838(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335B568"))) PPC_WEAK_FUNC(sub_8335B568);
PPC_FUNC_IMPL(__imp__sub_8335B568) {
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
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-3264
	ctx.r10.s64 = ctx.r10.s64 + -3264;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r4,r9,-22340
	ctx.r4.s64 = ctx.r9.s64 + -22340;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335B594;
	sub_8335A838(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335B5A4"))) PPC_WEAK_FUNC(sub_8335B5A4);
PPC_FUNC_IMPL(__imp__sub_8335B5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335B5A8"))) PPC_WEAK_FUNC(sub_8335B5A8);
PPC_FUNC_IMPL(__imp__sub_8335B5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8335B5B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// bl 0x8335a450
	ctx.lr = 0x8335B5D0;
	sub_8335A450(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335b5f0
	if (ctx.cr0.eq) goto loc_8335B5F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,8496
	ctx.r4.s64 = ctx.r11.s64 + 8496;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8335a9f8
	ctx.lr = 0x8335B5EC;
	sub_8335A9F8(ctx, base);
	// b 0x8335b980
	goto loc_8335B980;
loc_8335B5F0:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,10368
	ctx.r10.s64 = ctx.r10.s64 + 10368;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lbzx r27,r11,r10
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x8335b684
	if (!ctx.cr6.eq) goto loc_8335B684;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335b684
	if (!ctx.cr0.eq) goto loc_8335B684;
	// lbz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8335b684
	if (!ctx.cr6.eq) goto loc_8335B684;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,31,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x40000000;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8335b684
	if (!ctx.cr6.eq) goto loc_8335B684;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8335b684
	if (!ctx.cr6.eq) goto loc_8335B684;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335b67c
	if (ctx.cr6.eq) goto loc_8335B67C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,31,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x40000000;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8335b684
	if (!ctx.cr6.eq) goto loc_8335B684;
loc_8335B67C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8335b688
	goto loc_8335B688;
loc_8335B684:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8335B688:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335b6a8
	if (ctx.cr0.eq) goto loc_8335B6A8;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,8492
	ctx.r4.s64 = ctx.r10.s64 + 8492;
loc_8335B698:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// b 0x8335b758
	goto loc_8335B758;
loc_8335B6A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,8,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1F;
	// cmplwi cr6,r10,29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 29, ctx.xer);
	// bne cr6,0x8335b728
	if (!ctx.cr6.eq) goto loc_8335B728;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// rlwinm. r8,r8,0,6,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8335b728
	if (!ctx.cr0.eq) goto loc_8335B728;
	// lbz r8,10(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// lbz r7,9(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8335b728
	if (!ctx.cr6.eq) goto loc_8335B728;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r7,r8,31,1,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x40000000;
	// rlwinm r8,r8,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8335b728
	if (!ctx.cr6.eq) goto loc_8335B728;
	// lbz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8335b728
	if (!ctx.cr6.eq) goto loc_8335B728;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335b720
	if (ctx.cr6.eq) goto loc_8335B720;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r11,31,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x40000000;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8335b728
	if (!ctx.cr6.eq) goto loc_8335B728;
loc_8335B720:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8335b72c
	goto loc_8335B72C;
loc_8335B728:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8335B72C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335b740
	if (ctx.cr0.eq) goto loc_8335B740;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,8280
	ctx.r4.s64 = ctx.r10.s64 + 8280;
	// b 0x8335b698
	goto loc_8335B698;
loc_8335B740:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-3248
	ctx.r11.s64 = ctx.r11.s64 + -3248;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8335B758:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8335a9f8
	ctx.lr = 0x8335B760;
	sub_8335A9F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r11,12,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// rlwinm r8,r11,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r7,r11,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// rlwinm r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// rlwinm r5,r11,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x8335add0
	ctx.lr = 0x8335B788;
	sub_8335ADD0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,32256
	ctx.r29.s64 = ctx.r11.s64 + 32256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335B79C;
	sub_8335A838(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8335b7bc
	if (!ctx.cr0.eq) goto loc_8335B7BC;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8335b7bc
	if (!ctx.cr0.eq) goto loc_8335B7BC;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335b7bc
	if (ctx.cr0.eq) goto loc_8335B7BC;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8335B7BC:
	// li r28,4
	ctx.r28.s64 = 4;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x8335b838
	if (ctx.cr6.lt) goto loc_8335B838;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r25,r10,31
	ctx.r25.u64 = ctx.r10.u32 & 0x1;
	// bne 0x8335b800
	if (!ctx.cr0.eq) goto loc_8335B800;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8335b800
	if (ctx.cr6.eq) goto loc_8335B800;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r6,5(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r5,r11,6,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// lbz r4,9(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// bl 0x8335b420
	ctx.lr = 0x8335B7FC;
	sub_8335B420(ctx, base);
	// b 0x8335b838
	goto loc_8335B838;
loc_8335B800:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// lbz r5,9(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r26.u8);
	// rlwinm r4,r4,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x8335b148
	ctx.lr = 0x8335B838;
	sub_8335B148(ctx, base);
loc_8335B838:
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// blt cr6,0x8335b8dc
	if (ctx.cr6.lt) goto loc_8335B8DC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335b858
	if (!ctx.cr0.eq) goto loc_8335B858;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8335b858
	if (!ctx.cr6.eq) goto loc_8335B858;
	// li r25,2
	ctx.r25.s64 = 2;
loc_8335B858:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335B864;
	sub_8335A838(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335b894
	if (!ctx.cr0.eq) goto loc_8335B894;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8335b894
	if (ctx.cr6.eq) goto loc_8335B894;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// lbz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x8335b420
	ctx.lr = 0x8335B890;
	sub_8335B420(ctx, base);
	// b 0x8335b8dc
	goto loc_8335B8DC;
loc_8335B894:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// beq cr6,0x8335b8a8
	if (ctx.cr6.eq) goto loc_8335B8A8;
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_8335B8A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// lbz r5,10(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// rlwinm r4,r4,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1;
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r26.u8);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x8335b148
	ctx.lr = 0x8335B8DC;
	sub_8335B148(ctx, base);
loc_8335B8DC:
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// blt cr6,0x8335b980
	if (ctx.cr6.lt) goto loc_8335B980;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335b8fc
	if (!ctx.cr0.eq) goto loc_8335B8FC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8335b8fc
	if (!ctx.cr6.eq) goto loc_8335B8FC;
	// li r25,3
	ctx.r25.s64 = 3;
loc_8335B8FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335B908;
	sub_8335A838(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8335b938
	if (!ctx.cr0.eq) goto loc_8335B938;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8335b938
	if (ctx.cr6.eq) goto loc_8335B938;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x8335b420
	ctx.lr = 0x8335B934;
	sub_8335B420(ctx, base);
	// b 0x8335b980
	goto loc_8335B980;
loc_8335B938:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// beq cr6,0x8335b94c
	if (ctx.cr6.eq) goto loc_8335B94C;
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_8335B94C:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r26.u8);
	// rlwinm r9,r11,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// rlwinm r8,r8,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// bl 0x8335b148
	ctx.lr = 0x8335B980;
	sub_8335B148(ctx, base);
loc_8335B980:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335B988"))) PPC_WEAK_FUNC(sub_8335B988);
PPC_FUNC_IMPL(__imp__sub_8335B988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x8335B990;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8335b9c4
	if (!ctx.cr0.eq) goto loc_8335B9C4;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8335b9c4
	if (!ctx.cr0.eq) goto loc_8335B9C4;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335b9c4
	if (ctx.cr0.eq) goto loc_8335B9C4;
	// li r23,1
	ctx.r23.s64 = 1;
loc_8335B9C4:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8335b9e0
	if (ctx.cr6.gt) goto loc_8335B9E0;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8335B9E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r9,r24,24
	ctx.r9.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// beq 0x8335ba00
	if (ctx.cr0.eq) goto loc_8335BA00;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_8335BA00:
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// li r26,1
	ctx.r26.s64 = 1;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// beq 0x8335ba3c
	if (ctx.cr0.eq) goto loc_8335BA3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,5120
	ctx.r9.s64 = 335544320;
	// rlwinm r8,r11,0,0,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8335ba3c
	if (!ctx.cr6.eq) goto loc_8335BA3C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,-9248
	ctx.r4.s64 = ctx.r10.s64 + -9248;
	// b 0x8335ba88
	goto loc_8335BA88;
loc_8335BA3C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8335ba98
	if (ctx.cr6.eq) goto loc_8335BA98;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,23552
	ctx.r9.s64 = 1543503872;
	// rlwinm r8,r11,0,0,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8335ba64
	if (!ctx.cr6.eq) goto loc_8335BA64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,-9256
	ctx.r4.s64 = ctx.r10.s64 + -9256;
	// b 0x8335ba88
	goto loc_8335BA88;
loc_8335BA64:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8335ba98
	if (ctx.cr6.eq) goto loc_8335BA98;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// rlwinm r9,r11,0,0,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8335ba98
	if (!ctx.cr6.eq) goto loc_8335BA98;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,-9264
	ctx.r4.s64 = ctx.r10.s64 + -9264;
loc_8335BA88:
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8335a9f8
	ctx.lr = 0x8335BA94;
	sub_8335A9F8(ctx, base);
	// b 0x8335babc
	goto loc_8335BABC;
loc_8335BA98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r10,r10,-3120
	ctx.r10.s64 = ctx.r10.s64 + -3120;
	// rlwinm r9,r11,8,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFC;
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8335a9f8
	ctx.lr = 0x8335BAB8;
	sub_8335A9F8(ctx, base);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_8335BABC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r7,r11,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// bne 0x8335bad0
	if (!ctx.cr0.eq) goto loc_8335BAD0;
	// rlwinm r7,r11,18,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
loc_8335BAD0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bne cr6,0x8335bae0
	if (!ctx.cr6.eq) goto loc_8335BAE0;
	// rlwinm r4,r11,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
loc_8335BAE0:
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r8,r11,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r5,r11,12,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8335add0
	ctx.lr = 0x8335BAF8;
	sub_8335ADD0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r10,32256
	ctx.r29.s64 = ctx.r10.s64 + 32256;
	// addi r28,r11,10464
	ctx.r28.s64 = ctx.r11.s64 + 10464;
	// addi r11,r28,-64
	ctx.r11.s64 = ctx.r28.s64 + -64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// lbzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x8335bb2c
	if (!ctx.cr0.gt) goto loc_8335BB2C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335BB2C;
	sub_8335A838(ctx, base);
loc_8335BB2C:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8335bc14
	if (!ctx.cr6.eq) goto loc_8335BC14;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335bb48
	if (!ctx.cr0.eq) goto loc_8335BB48;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8335bb70
	goto loc_8335BB70;
loc_8335BB48:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8335bb5c
	if (!ctx.cr0.eq) goto loc_8335BB5C;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8335bb70
	goto loc_8335BB70;
loc_8335BB5C:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
loc_8335BB70:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r9,r11,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8335bba0
	if (!ctx.cr0.eq) goto loc_8335BBA0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8335bba0
	if (ctx.cr6.eq) goto loc_8335BBA0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x8335b420
	ctx.lr = 0x8335BB9C;
	sub_8335B420(ctx, base);
	// b 0x8335bd0c
	goto loc_8335BD0C;
loc_8335BBA0:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335bbb0
	if (ctx.cr0.eq) goto loc_8335BBB0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8335bbbc
	goto loc_8335BBBC;
loc_8335BBB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
loc_8335BBBC:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8335bbd0
	if (!ctx.cr6.eq) goto loc_8335BBD0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// b 0x8335bbdc
	goto loc_8335BBDC;
loc_8335BBD0:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r10,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
loc_8335BBDC:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r9,r7,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0x1;
	// stb r24,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r24.u8);
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r8,r8,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// rlwinm r7,r7,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// bl 0x8335b148
	ctx.lr = 0x8335BC10;
	sub_8335B148(ctx, base);
	// b 0x8335bd0c
	goto loc_8335BD0C;
loc_8335BC14:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8335bd0c
	if (!ctx.cr6.eq) goto loc_8335BD0C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x8335bc58
	if (ctx.cr0.eq) goto loc_8335BC58;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm r10,r10,1,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x2;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8335bc58
	if (!ctx.cr6.eq) goto loc_8335BC58;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// b 0x8335bc64
	goto loc_8335BC64;
loc_8335BC58:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_8335BC64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r11,6,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r11,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// stb r25,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r25.u8);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r9,r7,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0x1;
	// rlwinm r7,r7,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// lbzx r11,r5,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r28.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8335b148
	ctx.lr = 0x8335BCA0;
	sub_8335B148(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335BCAC;
	sub_8335A838(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,6,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwimi r7,r8,30,4,4
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 30) & 0x8000000) | (ctx.r7.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwimi r9,r7,6,30,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 6) & 0x3) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFC);
	// clrlwi r5,r9,26
	ctx.r5.u64 = ctx.r9.u32 & 0x3F;
	// beq 0x8335bce0
	if (ctx.cr0.eq) goto loc_8335BCE0;
	// ori r5,r5,128
	ctx.r5.u64 = ctx.r5.u64 | 128;
loc_8335BCE0:
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r25,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r25.u8);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8335b148
	ctx.lr = 0x8335BD0C;
	sub_8335B148(ctx, base);
loc_8335BD0C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335BD14"))) PPC_WEAK_FUNC(sub_8335BD14);
PPC_FUNC_IMPL(__imp__sub_8335BD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335BD18"))) PPC_WEAK_FUNC(sub_8335BD18);
PPC_FUNC_IMPL(__imp__sub_8335BD18) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// beq cr6,0x8335bd3c
	if (ctx.cr6.eq) goto loc_8335BD3C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7460
	ctx.r4.s64 = ctx.r11.s64 + -7460;
	// b 0x8335bd44
	goto loc_8335BD44;
loc_8335BD3C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7464
	ctx.r4.s64 = ctx.r11.s64 + -7464;
loc_8335BD44:
	// bl 0x8335a838
	ctx.lr = 0x8335BD48;
	sub_8335A838(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335BD58"))) PPC_WEAK_FUNC(sub_8335BD58);
PPC_FUNC_IMPL(__imp__sub_8335BD58) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8335bd7c
	if (!ctx.cr0.eq) goto loc_8335BD7C;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8335bd94
	if (ctx.cr6.eq) goto loc_8335BD94;
loc_8335BD7C:
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r9,10752
	ctx.r4.s64 = ctx.r9.s64 + 10752;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8335a838
	ctx.lr = 0x8335BD94;
	sub_8335A838(ctx, base);
loc_8335BD94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335BDA4"))) PPC_WEAK_FUNC(sub_8335BDA4);
PPC_FUNC_IMPL(__imp__sub_8335BDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335BDA8"))) PPC_WEAK_FUNC(sub_8335BDA8);
PPC_FUNC_IMPL(__imp__sub_8335BDA8) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r10,r10,-12392
	ctx.r10.s64 = ctx.r10.s64 + -12392;
	// addi r9,r9,-12384
	ctx.r9.s64 = ctx.r9.s64 + -12384;
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// bne 0x8335bde0
	if (!ctx.cr0.eq) goto loc_8335BDE0;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8335bdfc
	if (ctx.cr6.eq) goto loc_8335BDFC;
loc_8335BDE0:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r9,10752
	ctx.r4.s64 = ctx.r9.s64 + 10752;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8335a838
	ctx.lr = 0x8335BDFC;
	sub_8335A838(ctx, base);
loc_8335BDFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335BE0C"))) PPC_WEAK_FUNC(sub_8335BE0C);
PPC_FUNC_IMPL(__imp__sub_8335BE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335BE10"))) PPC_WEAK_FUNC(sub_8335BE10);
PPC_FUNC_IMPL(__imp__sub_8335BE10) {
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
	// bl 0x8335a738
	ctx.lr = 0x8335BE48;
	sub_8335A738(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335BE58"))) PPC_WEAK_FUNC(sub_8335BE58);
PPC_FUNC_IMPL(__imp__sub_8335BE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,6004
	ctx.r4.s64 = ctx.r11.s64 + 6004;
	// b 0x8335aa68
	sub_8335AA68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335BE64"))) PPC_WEAK_FUNC(sub_8335BE64);
PPC_FUNC_IMPL(__imp__sub_8335BE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335BE68"))) PPC_WEAK_FUNC(sub_8335BE68);
PPC_FUNC_IMPL(__imp__sub_8335BE68) {
	PPC_FUNC_PROLOGUE();
	// b 0x8335ac08
	sub_8335AC08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335BE6C"))) PPC_WEAK_FUNC(sub_8335BE6C);
PPC_FUNC_IMPL(__imp__sub_8335BE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335BE70"))) PPC_WEAK_FUNC(sub_8335BE70);
PPC_FUNC_IMPL(__imp__sub_8335BE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8335BE78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8335bee0
	if (ctx.cr6.eq) goto loc_8335BEE0;
loc_8335BE90:
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// subfic r10,r11,259
	ctx.xer.ca = ctx.r11.u32 <= 259;
	ctx.r10.s64 = 259 - ctx.r11.s64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8335bea8
	if (!ctx.cr6.gt) goto loc_8335BEA8;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8335BEA8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x8335BEB8;
	sub_82CB1160(ctx, base);
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r11.u32);
	// cmplwi cr6,r11,259
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 259, ctx.xer);
	// bne cr6,0x8335bed4
	if (!ctx.cr6.eq) goto loc_8335BED4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8335ac08
	ctx.lr = 0x8335BED4;
	sub_8335AC08(ctx, base);
loc_8335BED4:
	// subf. r29,r31,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r28,r31,r28
	ctx.r28.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bne 0x8335be90
	if (!ctx.cr0.eq) goto loc_8335BE90;
loc_8335BEE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335BEEC"))) PPC_WEAK_FUNC(sub_8335BEEC);
PPC_FUNC_IMPL(__imp__sub_8335BEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335BEF0"))) PPC_WEAK_FUNC(sub_8335BEF0);
PPC_FUNC_IMPL(__imp__sub_8335BEF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8335be70
	sub_8335BE70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335BEF4"))) PPC_WEAK_FUNC(sub_8335BEF4);
PPC_FUNC_IMPL(__imp__sub_8335BEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335BEF8"))) PPC_WEAK_FUNC(sub_8335BEF8);
PPC_FUNC_IMPL(__imp__sub_8335BEF8) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335bf28
	if (ctx.cr0.eq) goto loc_8335BF28;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-20316
	ctx.r4.s64 = ctx.r11.s64 + -20316;
	// bl 0x8335a9a0
	ctx.lr = 0x8335BF24;
	sub_8335A9A0(ctx, base);
	// b 0x8335bf34
	goto loc_8335BF34;
loc_8335BF28:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,23280
	ctx.r4.s64 = ctx.r11.s64 + 23280;
	// bl 0x8335be10
	ctx.lr = 0x8335BF34;
	sub_8335BE10(ctx, base);
loc_8335BF34:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8232, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8335BF50"))) PPC_WEAK_FUNC(sub_8335BF50);
PPC_FUNC_IMPL(__imp__sub_8335BF50) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,8232(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8232);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// b 0x8335bef8
	sub_8335BEF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335BF60"))) PPC_WEAK_FUNC(sub_8335BF60);
PPC_FUNC_IMPL(__imp__sub_8335BF60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335BF64"))) PPC_WEAK_FUNC(sub_8335BF64);
PPC_FUNC_IMPL(__imp__sub_8335BF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335BF68"))) PPC_WEAK_FUNC(sub_8335BF68);
PPC_FUNC_IMPL(__imp__sub_8335BF68) {
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
	// lbz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8232);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8335bf8c
	if (!ctx.cr0.eq) goto loc_8335BF8C;
	// bl 0x8335bef8
	ctx.lr = 0x8335BF8C;
	sub_8335BEF8(ctx, base);
loc_8335BF8C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8335bfc0
	if (ctx.cr0.eq) goto loc_8335BFC0;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8335bfb4
	if (ctx.cr0.eq) goto loc_8335BFB4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-20316
	ctx.r4.s64 = ctx.r11.s64 + -20316;
	// bl 0x8335a9a0
	ctx.lr = 0x8335BFB0;
	sub_8335A9A0(ctx, base);
	// b 0x8335bfc0
	goto loc_8335BFC0;
loc_8335BFB4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10760
	ctx.r4.s64 = ctx.r11.s64 + 10760;
	// bl 0x8335be10
	ctx.lr = 0x8335BFC0;
	sub_8335BE10(ctx, base);
loc_8335BFC0:
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

__attribute__((alias("__imp__sub_8335BFD4"))) PPC_WEAK_FUNC(sub_8335BFD4);
PPC_FUNC_IMPL(__imp__sub_8335BFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335BFD8"))) PPC_WEAK_FUNC(sub_8335BFD8);
PPC_FUNC_IMPL(__imp__sub_8335BFD8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-20300
	ctx.r4.s64 = ctx.r11.s64 + -20300;
	// bl 0x8335a9a0
	ctx.lr = 0x8335BFF8;
	sub_8335A9A0(ctx, base);
	// lbz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8232);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8335c00c
	if (!ctx.cr0.eq) goto loc_8335C00C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bef8
	ctx.lr = 0x8335C00C;
	sub_8335BEF8(ctx, base);
loc_8335C00C:
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

__attribute__((alias("__imp__sub_8335C020"))) PPC_WEAK_FUNC(sub_8335C020);
PPC_FUNC_IMPL(__imp__sub_8335C020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8335C028;
	__savegprlr_28(ctx, base);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lbz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8232);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8335c05c
	if (!ctx.cr0.eq) goto loc_8335C05C;
	// bl 0x8335bef8
	ctx.lr = 0x8335C05C;
	sub_8335BEF8(ctx, base);
loc_8335C05C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335abb0
	ctx.lr = 0x8335C064;
	sub_8335ABB0(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8335c084
	if (ctx.cr0.eq) goto loc_8335C084;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,10784
	ctx.r4.s64 = ctx.r11.s64 + 10784;
	// bl 0x8335a838
	ctx.lr = 0x8335C080;
	sub_8335A838(ctx, base);
	// b 0x8335c0a8
	goto loc_8335C0A8;
loc_8335C084:
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r9,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r10,10776
	ctx.r4.s64 = ctx.r10.s64 + 10776;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x8335a838
	ctx.lr = 0x8335C0A8;
	sub_8335A838(ctx, base);
loc_8335C0A8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10764
	ctx.r4.s64 = ctx.r11.s64 + 10764;
	// bl 0x8335a838
	ctx.lr = 0x8335C0B8;
	sub_8335A838(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8335a738
	ctx.lr = 0x8335C0D4;
	sub_8335A738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bfd8
	ctx.lr = 0x8335C0DC;
	sub_8335BFD8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335C0E4"))) PPC_WEAK_FUNC(sub_8335C0E4);
PPC_FUNC_IMPL(__imp__sub_8335C0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335C0E8"))) PPC_WEAK_FUNC(sub_8335C0E8);
PPC_FUNC_IMPL(__imp__sub_8335C0E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,32256
	ctx.r4.s64 = ctx.r11.s64 + 32256;
	// bl 0x8335a838
	ctx.lr = 0x8335C108;
	sub_8335A838(ctx, base);
	// lbz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8232);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8335c11c
	if (!ctx.cr0.eq) goto loc_8335C11C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bef8
	ctx.lr = 0x8335C11C;
	sub_8335BEF8(ctx, base);
loc_8335C11C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335c138
	if (ctx.cr0.eq) goto loc_8335C138;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10708
	ctx.r4.s64 = ctx.r11.s64 + 10708;
	// bl 0x8335a838
	ctx.lr = 0x8335C138;
	sub_8335A838(ctx, base);
loc_8335C138:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7176
	ctx.r4.s64 = ctx.r11.s64 + -7176;
	// bl 0x8335a838
	ctx.lr = 0x8335C148;
	sub_8335A838(ctx, base);
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

__attribute__((alias("__imp__sub_8335C15C"))) PPC_WEAK_FUNC(sub_8335C15C);
PPC_FUNC_IMPL(__imp__sub_8335C15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335C160"))) PPC_WEAK_FUNC(sub_8335C160);
PPC_FUNC_IMPL(__imp__sub_8335C160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x8335C168;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8335c1bc
	if (!ctx.cr6.eq) goto loc_8335C1BC;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335c1ac
	if (ctx.cr0.eq) goto loc_8335C1AC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10652
	ctx.r4.s64 = ctx.r11.s64 + 10652;
	// b 0x8335c1b4
	goto loc_8335C1B4;
loc_8335C1AC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10644
	ctx.r4.s64 = ctx.r11.s64 + 10644;
loc_8335C1B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335C1BC;
	sub_8335A838(ctx, base);
loc_8335C1BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bne cr6,0x8335ca00
	if (!ctx.cr6.eq) goto loc_8335CA00;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8335ca1c
	if (ctx.cr6.eq) goto loc_8335CA1C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8335c208
	if (ctx.cr6.eq) goto loc_8335C208;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// ble cr6,0x8335c1fc
	if (!ctx.cr6.gt) goto loc_8335C1FC;
	// cmpwi cr6,r5,19
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 19, ctx.xer);
	// ble cr6,0x8335c208
	if (!ctx.cr6.gt) goto loc_8335C208;
	// cmpwi cr6,r5,23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 23, ctx.xer);
	// ble cr6,0x8335c1fc
	if (!ctx.cr6.gt) goto loc_8335C1FC;
	// cmpwi cr6,r5,26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 26, ctx.xer);
	// ble cr6,0x8335c208
	if (!ctx.cr6.gt) goto loc_8335C208;
loc_8335C1FC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11044
	ctx.r4.s64 = ctx.r11.s64 + 11044;
	// b 0x8335ca10
	goto loc_8335CA10;
loc_8335C208:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplwi cr6,r5,19
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 19, ctx.xer);
	// addi r4,r11,-6668
	ctx.r4.s64 = ctx.r11.s64 + -6668;
	// bgt cr6,0x8335c284
	if (ctx.cr6.gt) goto loc_8335C284;
	// beq cr6,0x8335c278
	if (ctx.cr6.eq) goto loc_8335C278;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x8335c260
	if (ctx.cr6.eq) goto loc_8335C260;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// beq cr6,0x8335c254
	if (ctx.cr6.eq) goto loc_8335C254;
	// cmplwi cr6,r5,17
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 17, ctx.xer);
	// beq cr6,0x8335c248
	if (ctx.cr6.eq) goto loc_8335C248;
	// cmplwi cr6,r5,18
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 18, ctx.xer);
	// bne cr6,0x8335c2bc
	if (!ctx.cr6.eq) goto loc_8335C2BC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9476
	ctx.r4.s64 = ctx.r11.s64 + -9476;
	// b 0x8335c2bc
	goto loc_8335C2BC;
loc_8335C248:
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// addi r10,r10,-2320
	ctx.r10.s64 = ctx.r10.s64 + -2320;
	// b 0x8335c268
	goto loc_8335C268;
loc_8335C254:
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// addi r10,r10,-2336
	ctx.r10.s64 = ctx.r10.s64 + -2336;
	// b 0x8335c268
	goto loc_8335C268;
loc_8335C260:
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// addi r10,r10,-2352
	ctx.r10.s64 = ctx.r10.s64 + -2352;
loc_8335C268:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,20,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x8335c2bc
	goto loc_8335C2BC;
loc_8335C278:
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// addi r10,r10,-2368
	ctx.r10.s64 = ctx.r10.s64 + -2368;
	// b 0x8335c268
	goto loc_8335C268;
loc_8335C284:
	// cmplwi cr6,r5,24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 24, ctx.xer);
	// beq cr6,0x8335c2b4
	if (ctx.cr6.eq) goto loc_8335C2B4;
	// cmplwi cr6,r5,25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 25, ctx.xer);
	// beq cr6,0x8335c2a8
	if (ctx.cr6.eq) goto loc_8335C2A8;
	// cmplwi cr6,r5,26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 26, ctx.xer);
	// bne cr6,0x8335c2bc
	if (!ctx.cr6.eq) goto loc_8335C2BC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9584
	ctx.r4.s64 = ctx.r11.s64 + -9584;
	// b 0x8335c2bc
	goto loc_8335C2BC;
loc_8335C2A8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9568
	ctx.r4.s64 = ctx.r11.s64 + -9568;
	// b 0x8335c2bc
	goto loc_8335C2BC;
loc_8335C2B4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9552
	ctx.r4.s64 = ctx.r11.s64 + -9552;
loc_8335C2BC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a9f8
	ctx.lr = 0x8335C2C8;
	sub_8335A9F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// bl 0x8335a838
	ctx.lr = 0x8335C2D8;
	sub_8335A838(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// addi r30,r11,-22340
	ctx.r30.s64 = ctx.r11.s64 + -22340;
	// addi r28,r10,-3264
	ctx.r28.s64 = ctx.r10.s64 + -3264;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r27,r9,22368
	ctx.r27.s64 = ctx.r9.s64 + 22368;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bgt cr6,0x8335c3e4
	if (ctx.cr6.gt) goto loc_8335C3E4;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8335c31c
	if (ctx.cr0.eq) goto loc_8335C31C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7460
	ctx.r4.s64 = ctx.r11.s64 + -7460;
	// b 0x8335c324
	goto loc_8335C324;
loc_8335C31C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7464
	ctx.r4.s64 = ctx.r11.s64 + -7464;
loc_8335C324:
	// bl 0x8335a838
	ctx.lr = 0x8335C328;
	sub_8335A838(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi. r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8335c358
	if (!ctx.cr0.eq) goto loc_8335C358;
	// rlwinm r10,r11,0,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x8335c358
	if (!ctx.cr6.eq) goto loc_8335C358;
	// rlwinm r10,r11,0,23,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x8335c358
	if (!ctx.cr6.eq) goto loc_8335C358;
	// rlwinm r11,r11,0,20,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r11,1536
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1536, ctx.xer);
	// beq cr6,0x8335c3d4
	if (ctx.cr6.eq) goto loc_8335C3D4;
loc_8335C358:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335C364;
	sub_8335A838(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335C380;
	sub_8335A838(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335C39C;
	sub_8335A838(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335C3B8;
	sub_8335A838(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335C3D4;
	sub_8335A838(ctx, base);
loc_8335C3D4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,32256
	ctx.r4.s64 = ctx.r11.s64 + 32256;
	// bl 0x8335a838
	ctx.lr = 0x8335C3E4;
	sub_8335A838(ctx, base);
loc_8335C3E4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r5,r11,27,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// stb r10,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335b148
	ctx.lr = 0x8335C420;
	sub_8335B148(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335C42C;
	sub_8335A838(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8335c48c
	if (ctx.cr6.eq) goto loc_8335C48C;
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// beq cr6,0x8335c4d4
	if (ctx.cr6.eq) goto loc_8335C4D4;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// beq cr6,0x8335c4f8
	if (ctx.cr6.eq) goto loc_8335C4F8;
loc_8335C460:
	// bl 0x8335a838
	ctx.lr = 0x8335C464;
	sub_8335A838(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335C480;
	sub_8335A838(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// b 0x8335c4e8
	goto loc_8335C4E8;
loc_8335C48C:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r10,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8335c4e4
	if (ctx.cr6.lt) goto loc_8335C4E4;
	// beq cr6,0x8335c4c0
	if (ctx.cr6.eq) goto loc_8335C4C0;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x8335c4fc
	if (!ctx.cr6.lt) goto loc_8335C4FC;
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// b 0x8335c460
	goto loc_8335C460;
loc_8335C4C0:
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
loc_8335C4D4:
	// bl 0x8335a838
	ctx.lr = 0x8335C4D8;
	sub_8335A838(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// b 0x8335c4e8
	goto loc_8335C4E8;
loc_8335C4E4:
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
loc_8335C4E8:
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
loc_8335C4F8:
	// bl 0x8335a838
	ctx.lr = 0x8335C4FC;
	sub_8335A838(ctx, base);
loc_8335C4FC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bgt cr6,0x8335c520
	if (ctx.cr6.gt) goto loc_8335C520;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// rlwinm r5,r11,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// addi r4,r10,11036
	ctx.r4.s64 = ctx.r10.s64 + 11036;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335C520;
	sub_8335A838(ctx, base);
loc_8335C520:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,-10796
	ctx.r4.s64 = ctx.r10.s64 + -10796;
	// rlwinm r5,r11,13,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bda8
	ctx.lr = 0x8335C53C;
	sub_8335BDA8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r27,r11,10576
	ctx.r27.s64 = ctx.r11.s64 + 10576;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// andi. r10,r10,23
	ctx.r10.u64 = ctx.r10.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8335c574
	if (ctx.cr0.eq) goto loc_8335C574;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-10780
	ctx.r4.s64 = ctx.r10.s64 + -10780;
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bda8
	ctx.lr = 0x8335C574;
	sub_8335BDA8(ctx, base);
loc_8335C574:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r30,r11,10752
	ctx.r30.s64 = ctx.r11.s64 + 10752;
	// lbzx r11,r10,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335c5d0
	if (ctx.cr0.eq) goto loc_8335C5D0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,20,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3;
	// bne 0x8335c5b0
	if (!ctx.cr0.eq) goto loc_8335C5B0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8335c5d0
	if (ctx.cr6.eq) goto loc_8335C5D0;
loc_8335C5B0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,400
	ctx.r10.s64 = ctx.r28.s64 + 400;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-10808
	ctx.r5.s64 = ctx.r9.s64 + -10808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8335a838
	ctx.lr = 0x8335C5D0;
	sub_8335A838(ctx, base);
loc_8335C5D0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335c624
	if (ctx.cr0.eq) goto loc_8335C624;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,18,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3;
	// bne 0x8335c604
	if (!ctx.cr0.eq) goto loc_8335C604;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8335c624
	if (ctx.cr6.eq) goto loc_8335C624;
loc_8335C604:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,416
	ctx.r10.s64 = ctx.r28.s64 + 416;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-10820
	ctx.r5.s64 = ctx.r9.s64 + -10820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8335a838
	ctx.lr = 0x8335C624;
	sub_8335A838(ctx, base);
loc_8335C624:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335c678
	if (ctx.cr0.eq) goto loc_8335C678;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// bne 0x8335c658
	if (!ctx.cr0.eq) goto loc_8335C658;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8335c678
	if (ctx.cr6.eq) goto loc_8335C678;
loc_8335C658:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,432
	ctx.r10.s64 = ctx.r28.s64 + 432;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-10832
	ctx.r5.s64 = ctx.r9.s64 + -10832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8335a838
	ctx.lr = 0x8335C678;
	sub_8335A838(ctx, base);
loc_8335C678:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335c6cc
	if (ctx.cr0.eq) goto loc_8335C6CC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,14,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x7;
	// bne 0x8335c6ac
	if (!ctx.cr0.eq) goto loc_8335C6AC;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8335c6cc
	if (ctx.cr6.eq) goto loc_8335C6CC;
loc_8335C6AC:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,448
	ctx.r10.s64 = ctx.r28.s64 + 448;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-10844
	ctx.r5.s64 = ctx.r9.s64 + -10844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8335a838
	ctx.lr = 0x8335C6CC;
	sub_8335A838(ctx, base);
loc_8335C6CC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x8335c730
	if (ctx.cr6.lt) goto loc_8335C730;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335c730
	if (ctx.cr0.eq) goto loc_8335C730;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// bne 0x8335c710
	if (!ctx.cr0.eq) goto loc_8335C710;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8335c730
	if (ctx.cr6.eq) goto loc_8335C730;
loc_8335C710:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,480
	ctx.r10.s64 = ctx.r28.s64 + 480;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-10860
	ctx.r5.s64 = ctx.r9.s64 + -10860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8335a838
	ctx.lr = 0x8335C730;
	sub_8335A838(ctx, base);
loc_8335C730:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x8335c794
	if (ctx.cr6.lt) goto loc_8335C794;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335c794
	if (ctx.cr0.eq) goto loc_8335C794;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3;
	// bne 0x8335c774
	if (!ctx.cr0.eq) goto loc_8335C774;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8335c794
	if (ctx.cr6.eq) goto loc_8335C794;
loc_8335C774:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,496
	ctx.r10.s64 = ctx.r28.s64 + 496;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-10876
	ctx.r5.s64 = ctx.r9.s64 + -10876;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8335a838
	ctx.lr = 0x8335C794;
	sub_8335A838(ctx, base);
loc_8335C794:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335c7c8
	if (ctx.cr0.eq) goto loc_8335C7C8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,-10892
	ctx.r4.s64 = ctx.r10.s64 + -10892;
	// rlwinm r5,r11,4,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bda8
	ctx.lr = 0x8335C7C8;
	sub_8335BDA8(ctx, base);
loc_8335C7C8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335c7fc
	if (ctx.cr0.eq) goto loc_8335C7FC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-10908
	ctx.r4.s64 = ctx.r10.s64 + -10908;
	// rlwinm r5,r11,3,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bda8
	ctx.lr = 0x8335C7FC;
	sub_8335BDA8(ctx, base);
loc_8335C7FC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335c82c
	if (ctx.cr0.eq) goto loc_8335C82C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-10932
	ctx.r4.s64 = ctx.r10.s64 + -10932;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bda8
	ctx.lr = 0x8335C82C;
	sub_8335BDA8(ctx, base);
loc_8335C82C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335c8a0
	if (ctx.cr0.eq) goto loc_8335C8A0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335c85c
	if (!ctx.cr0.eq) goto loc_8335C85C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,0,23,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335c8a0
	if (ctx.cr0.eq) goto loc_8335C8A0;
loc_8335C85C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// addi r4,r9,11020
	ctx.r4.s64 = ctx.r9.s64 + 11020;
	// srawi r11,r11,25
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 25;
	// lfs f0,-16796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16796);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8335a838
	ctx.lr = 0x8335C8A0;
	sub_8335A838(ctx, base);
loc_8335C8A0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lfs f31,6380(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f31.f64 = double(temp.f32);
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335c914
	if (ctx.cr0.eq) goto loc_8335C914;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335c8d8
	if (!ctx.cr0.eq) goto loc_8335C8D8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,0,11,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335c914
	if (ctx.cr0.eq) goto loc_8335C914;
loc_8335C8D8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// addi r4,r10,11004
	ctx.r4.s64 = ctx.r10.s64 + 11004;
	// srawi r11,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 27;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8335a838
	ctx.lr = 0x8335C914;
	sub_8335A838(ctx, base);
loc_8335C914:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// blt cr6,0x8335c988
	if (ctx.cr6.lt) goto loc_8335C988;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lbzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// andi. r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8335c988
	if (ctx.cr0.eq) goto loc_8335C988;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8335c950
	if (!ctx.cr0.eq) goto loc_8335C950;
	// rlwinm. r10,r11,0,6,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3E00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8335c988
	if (ctx.cr0.eq) goto loc_8335C988;
loc_8335C950:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// srawi r11,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 27;
	// addi r4,r10,10988
	ctx.r4.s64 = ctx.r10.s64 + 10988;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8335a838
	ctx.lr = 0x8335C988;
	sub_8335A838(ctx, base);
loc_8335C988:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// blt cr6,0x8335cf4c
	if (ctx.cr6.lt) goto loc_8335CF4C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lbzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// andi. r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8335cf4c
	if (ctx.cr0.eq) goto loc_8335CF4C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8335c9c4
	if (!ctx.cr0.eq) goto loc_8335C9C4;
	// rlwinm. r10,r11,0,1,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8335cf4c
	if (ctx.cr0.eq) goto loc_8335CF4C;
loc_8335C9C4:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// srawi r11,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 27;
	// addi r4,r10,10972
	ctx.r4.s64 = ctx.r10.s64 + 10972;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8335a838
	ctx.lr = 0x8335C9FC;
	sub_8335A838(ctx, base);
	// b 0x8335cf4c
	goto loc_8335CF4C;
loc_8335CA00:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8335ca1c
	if (ctx.cr6.eq) goto loc_8335CA1C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10940
	ctx.r4.s64 = ctx.r11.s64 + 10940;
loc_8335CA10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335CA18;
	sub_8335A838(ctx, base);
	// b 0x8335cf4c
	goto loc_8335CF4C;
loc_8335CA1C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// bne 0x8335ca78
	if (!ctx.cr0.eq) goto loc_8335CA78;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335ca78
	if (!ctx.cr0.eq) goto loc_8335CA78;
	// lwz r11,8224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8335ca78
	if (ctx.cr6.eq) goto loc_8335CA78;
	// lwz r3,8228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8228);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8335CA6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8335ca78
	if (!ctx.cr0.eq) goto loc_8335CA78;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8335CA78:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8335ca8c
	if (!ctx.cr6.eq) goto loc_8335CA8C;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8335ca90
	if (ctx.cr0.eq) goto loc_8335CA90;
loc_8335CA8C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8335CA90:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8335caa8
	if (ctx.cr6.eq) goto loc_8335CAA8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9288
	ctx.r4.s64 = ctx.r11.s64 + -9288;
	// b 0x8335cac4
	goto loc_8335CAC4;
loc_8335CAA8:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335cabc
	if (ctx.cr0.eq) goto loc_8335CABC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9296
	ctx.r4.s64 = ctx.r11.s64 + -9296;
	// b 0x8335cac4
	goto loc_8335CAC4;
loc_8335CABC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9276
	ctx.r4.s64 = ctx.r11.s64 + -9276;
loc_8335CAC4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a9f8
	ctx.lr = 0x8335CAD0;
	sub_8335A9F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// bl 0x8335a838
	ctx.lr = 0x8335CAE0;
	sub_8335A838(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// beq 0x8335cb00
	if (ctx.cr0.eq) goto loc_8335CB00;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7460
	ctx.r4.s64 = ctx.r11.s64 + -7460;
	// b 0x8335cb08
	goto loc_8335CB08;
loc_8335CB00:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7464
	ctx.r4.s64 = ctx.r11.s64 + -7464;
loc_8335CB08:
	// bl 0x8335a838
	ctx.lr = 0x8335CB0C;
	sub_8335A838(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// clrlwi. r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r28,r10,-3264
	ctx.r28.s64 = ctx.r10.s64 + -3264;
	// bne 0x8335cb44
	if (!ctx.cr0.eq) goto loc_8335CB44;
	// rlwinm r10,r11,0,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x8335cb44
	if (!ctx.cr6.eq) goto loc_8335CB44;
	// rlwinm r10,r11,0,23,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x8335cb44
	if (!ctx.cr6.eq) goto loc_8335CB44;
	// rlwinm r11,r11,0,20,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r11,1536
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1536, ctx.xer);
	// beq cr6,0x8335cbcc
	if (ctx.cr6.eq) goto loc_8335CBCC;
loc_8335CB44:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22368
	ctx.r4.s64 = ctx.r11.s64 + 22368;
	// bl 0x8335a838
	ctx.lr = 0x8335CB54;
	sub_8335A838(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r24,r11,-22340
	ctx.r24.s64 = ctx.r11.s64 + -22340;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335CB78;
	sub_8335A838(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335CB94;
	sub_8335A838(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335CBB0;
	sub_8335A838(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335CBCC;
	sub_8335A838(ctx, base);
loc_8335CBCC:
	// clrlwi. r24,r30,24
	ctx.r24.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x8335cbdc
	if (!ctx.cr0.eq) goto loc_8335CBDC;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335cc48
	if (ctx.cr0.eq) goto loc_8335CC48;
loc_8335CBDC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,32256
	ctx.r4.s64 = ctx.r11.s64 + 32256;
	// bl 0x8335a838
	ctx.lr = 0x8335CBEC;
	sub_8335A838(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r27,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r27.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r5,r11,27,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x40;
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x8335b148
	ctx.lr = 0x8335CC28;
	sub_8335B148(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7152
	ctx.r4.s64 = ctx.r11.s64 + -7152;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8335a838
	ctx.lr = 0x8335CC48;
	sub_8335A838(ctx, base);
loc_8335CC48:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8335cc78
	if (ctx.cr6.eq) goto loc_8335CC78;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r11,12,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// rlwinm r11,r11,7,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x3;
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// subfic r9,r9,95
	ctx.xer.ca = ctx.r9.u32 <= 95;
	ctx.r9.s64 = 95 - ctx.r9.s64;
	// addi r4,r10,10932
	ctx.r4.s64 = ctx.r10.s64 + 10932;
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// bl 0x8335a838
	ctx.lr = 0x8335CC78;
	sub_8335A838(ctx, base);
loc_8335CC78:
	// clrlwi. r26,r26,24
	ctx.r26.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x8335ccc0
	if (ctx.cr0.eq) goto loc_8335CCC0;
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// addi r10,r28,800
	ctx.r10.s64 = ctx.r28.s64 + 800;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// rlwinm r8,r11,30,2,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,12156
	ctx.r4.s64 = ctx.r9.s64 + 12156;
	// clrlwi r30,r11,28
	ctx.r30.u64 = ctx.r11.u32 & 0xF;
	// lwzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x8335a838
	ctx.lr = 0x8335CCA4;
	sub_8335A838(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8335ccc0
	if (ctx.cr6.eq) goto loc_8335CCC0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,24704
	ctx.r4.s64 = ctx.r11.s64 + 24704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335CCC0;
	sub_8335A838(ctx, base);
loc_8335CCC0:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r30,r11,-12392
	ctx.r30.s64 = ctx.r11.s64 + -12392;
	// addi r27,r10,-12384
	ctx.r27.s64 = ctx.r10.s64 + -12384;
	// bne cr6,0x8335cd58
	if (!ctx.cr6.eq) goto loc_8335CD58;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335ccec
	if (!ctx.cr0.eq) goto loc_8335CCEC;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8335cd14
	if (!ctx.cr6.eq) goto loc_8335CD14;
loc_8335CCEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335c0e8
	ctx.lr = 0x8335CCF4;
	sub_8335C0E8(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// beq cr6,0x8335cd04
	if (ctx.cr6.eq) goto loc_8335CD04;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8335CD04:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10912
	ctx.r4.s64 = ctx.r11.s64 + 10912;
	// bl 0x8335a838
	ctx.lr = 0x8335CD14;
	sub_8335A838(ctx, base);
loc_8335CD14:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335cd2c
	if (!ctx.cr0.eq) goto loc_8335CD2C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335cd58
	if (ctx.cr0.eq) goto loc_8335CD58;
loc_8335CD2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335c0e8
	ctx.lr = 0x8335CD34;
	sub_8335C0E8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335cd48
	if (!ctx.cr0.eq) goto loc_8335CD48;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8335CD48:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10896
	ctx.r4.s64 = ctx.r11.s64 + 10896;
	// bl 0x8335a838
	ctx.lr = 0x8335CD58;
	sub_8335A838(ctx, base);
loc_8335CD58:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335cd70
	if (!ctx.cr0.eq) goto loc_8335CD70;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,2,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335cd94
	if (ctx.cr0.eq) goto loc_8335CD94;
loc_8335CD70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335c0e8
	ctx.lr = 0x8335CD78;
	sub_8335C0E8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10880
	ctx.r4.s64 = ctx.r11.s64 + 10880;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r11,26
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 26;
	// bl 0x8335a838
	ctx.lr = 0x8335CD94;
	sub_8335A838(ctx, base);
loc_8335CD94:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8335cf4c
	if (!ctx.cr6.eq) goto loc_8335CF4C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-20292
	ctx.r4.s64 = ctx.r11.s64 + -20292;
	// bl 0x8335a9a0
	ctx.lr = 0x8335CDAC;
	sub_8335A9A0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335cdc4
	if (!ctx.cr0.eq) goto loc_8335CDC4;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,0,1,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335cde8
	if (ctx.cr0.eq) goto loc_8335CDE8;
loc_8335CDC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335c0e8
	ctx.lr = 0x8335CDCC;
	sub_8335C0E8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10868
	ctx.r4.s64 = ctx.r11.s64 + 10868;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 9;
	// bl 0x8335a838
	ctx.lr = 0x8335CDE8;
	sub_8335A838(ctx, base);
loc_8335CDE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335ce00
	if (!ctx.cr0.eq) goto loc_8335CE00;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// clrlwi. r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335ce28
	if (ctx.cr0.eq) goto loc_8335CE28;
loc_8335CE00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335c0e8
	ctx.lr = 0x8335CE08;
	sub_8335C0E8(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r28,528
	ctx.r11.s64 = ctx.r28.s64 + 528;
	// addi r4,r10,10852
	ctx.r4.s64 = ctx.r10.s64 + 10852;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// rlwinm r10,r10,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8335a838
	ctx.lr = 0x8335CE28;
	sub_8335A838(ctx, base);
loc_8335CE28:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8335ce64
	if (ctx.cr6.eq) goto loc_8335CE64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335ce48
	if (!ctx.cr0.eq) goto loc_8335CE48;
	// lbz r11,11(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335ce64
	if (ctx.cr0.eq) goto loc_8335CE64;
loc_8335CE48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335c0e8
	ctx.lr = 0x8335CE50;
	sub_8335C0E8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,11(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11);
	// addi r4,r11,10840
	ctx.r4.s64 = ctx.r11.s64 + 10840;
	// bl 0x8335a838
	ctx.lr = 0x8335CE64;
	sub_8335A838(ctx, base);
loc_8335CE64:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335ce7c
	if (!ctx.cr0.eq) goto loc_8335CE7C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335cea8
	if (ctx.cr0.eq) goto loc_8335CEA8;
loc_8335CE7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335c0e8
	ctx.lr = 0x8335CE84;
	sub_8335C0E8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335ce98
	if (!ctx.cr0.eq) goto loc_8335CE98;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8335CE98:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10828
	ctx.r4.s64 = ctx.r11.s64 + 10828;
	// bl 0x8335a838
	ctx.lr = 0x8335CEA8;
	sub_8335A838(ctx, base);
loc_8335CEA8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335cec0
	if (!ctx.cr0.eq) goto loc_8335CEC0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335cef8
	if (ctx.cr0.eq) goto loc_8335CEF8;
loc_8335CEC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335c0e8
	ctx.lr = 0x8335CEC8;
	sub_8335C0E8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335cee0
	if (ctx.cr0.eq) goto loc_8335CEE0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-10568
	ctx.r5.s64 = ctx.r11.s64 + -10568;
	// b 0x8335cee8
	goto loc_8335CEE8;
loc_8335CEE0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-10560
	ctx.r5.s64 = ctx.r11.s64 + -10560;
loc_8335CEE8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10812
	ctx.r4.s64 = ctx.r11.s64 + 10812;
	// bl 0x8335a838
	ctx.lr = 0x8335CEF8;
	sub_8335A838(ctx, base);
loc_8335CEF8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8335cf3c
	if (ctx.cr6.eq) goto loc_8335CF3C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335cf18
	if (!ctx.cr0.eq) goto loc_8335CF18;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,2,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335cf3c
	if (ctx.cr0.eq) goto loc_8335CF3C;
loc_8335CF18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335c0e8
	ctx.lr = 0x8335CF20;
	sub_8335C0E8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10792
	ctx.r4.s64 = ctx.r11.s64 + 10792;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,5,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x7;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8335a838
	ctx.lr = 0x8335CF3C;
	sub_8335A838(ctx, base);
loc_8335CF3C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-20300
	ctx.r4.s64 = ctx.r11.s64 + -20300;
	// bl 0x8335a9a0
	ctx.lr = 0x8335CF4C;
	sub_8335A9A0(ctx, base);
loc_8335CF4C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335CF58"))) PPC_WEAK_FUNC(sub_8335CF58);
PPC_FUNC_IMPL(__imp__sub_8335CF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x8335CF60;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335d7fc
	if (ctx.cr0.eq) goto loc_8335D7FC;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// rlwinm r30,r11,20,28,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8335d02c
	if (ctx.cr0.eq) goto loc_8335D02C;
	// bl 0x8335bf68
	ctx.lr = 0x8335CF94;
	sub_8335BF68(ctx, base);
	// rlwinm r11,r22,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r22,27
	ctx.r10.u64 = ctx.r22.u32 & 0x1F;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335d00c
	if (ctx.cr0.eq) goto loc_8335D00C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335cfd4
	if (ctx.cr0.eq) goto loc_8335CFD4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11180
	ctx.r4.s64 = ctx.r11.s64 + 11180;
	// bl 0x8335a838
	ctx.lr = 0x8335CFD4;
	sub_8335A838(ctx, base);
loc_8335CFD4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8344
	ctx.r4.s64 = ctx.r11.s64 + 8344;
	// bl 0x8335aa68
	ctx.lr = 0x8335CFE4;
	sub_8335AA68(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,11172
	ctx.r4.s64 = ctx.r11.s64 + 11172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335CFF8;
	sub_8335A838(ctx, base);
	// lbz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8232);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8335d00c
	if (!ctx.cr0.eq) goto loc_8335D00C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bef8
	ctx.lr = 0x8335D00C;
	sub_8335BEF8(ctx, base);
loc_8335D00C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335d020
	if (!ctx.cr0.eq) goto loc_8335D020;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8335d02c
	if (ctx.cr6.eq) goto loc_8335D02C;
loc_8335D020:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335aaf0
	ctx.lr = 0x8335D02C;
	sub_8335AAF0(ctx, base);
loc_8335D02C:
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// bgt cr6,0x8335d7b8
	if (ctx.cr6.gt) goto loc_8335D7B8;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// addi r12,r12,10544
	ctx.r12.s64 = ctx.r12.s64 + 10544;
	// rlwinm r0,r30,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31946
	ctx.r12.s64 = -2093613056;
	// addi r12,r12,-12196
	ctx.r12.s64 = ctx.r12.s64 + -12196;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_8335D05C;
	case 1:
		goto loc_8335D098;
	case 2:
		goto loc_8335D0E4;
	case 3:
		goto loc_8335D10C;
	case 4:
		goto loc_8335D190;
	case 5:
		goto loc_8335D1B8;
	case 6:
		goto loc_8335D1E8;
	case 7:
		goto loc_8335D218;
	case 8:
		goto loc_8335D2E4;
	case 9:
		goto loc_8335D3A0;
	case 10:
		goto loc_8335D4A8;
	case 11:
		goto loc_8335D4D0;
	case 12:
		goto loc_8335D644;
	case 13:
		goto loc_8335D6F0;
	case 14:
		goto loc_8335D768;
	case 15:
		goto loc_8335D790;
	default:
		__builtin_unreachable();
	}
loc_8335D05C:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12136
	ctx.r4.s64 = ctx.r11.s64 + 12136;
	// bl 0x8335a838
	ctx.lr = 0x8335D084;
	sub_8335A838(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9592
	ctx.r4.s64 = ctx.r11.s64 + -9592;
loc_8335D08C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335aa68
	ctx.lr = 0x8335D094;
	sub_8335AA68(ctx, base);
	// b 0x8335db50
	goto loc_8335DB50;
loc_8335D098:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,12136
	ctx.r4.s64 = ctx.r11.s64 + 12136;
loc_8335D0AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335D0B4;
	sub_8335A838(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9600
	ctx.r4.s64 = ctx.r11.s64 + -9600;
loc_8335D0BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335aa68
	ctx.lr = 0x8335D0C4;
	sub_8335AA68(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r11,23,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// rlwinm r4,r10,17,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
loc_8335D0D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a8b0
	ctx.lr = 0x8335D0E0;
	sub_8335A8B0(ctx, base);
	// b 0x8335db50
	goto loc_8335DB50;
loc_8335D0E4:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,12136
	ctx.r4.s64 = ctx.r11.s64 + 12136;
loc_8335D0F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335D100;
	sub_8335A838(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9608
	ctx.r4.s64 = ctx.r11.s64 + -9608;
	// b 0x8335d0bc
	goto loc_8335D0BC;
loc_8335D10C:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12136
	ctx.r4.s64 = ctx.r11.s64 + 12136;
	// bl 0x8335a838
	ctx.lr = 0x8335D128;
	sub_8335A838(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9616
	ctx.r4.s64 = ctx.r11.s64 + -9616;
loc_8335D130:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335aa68
	ctx.lr = 0x8335D138;
	sub_8335AA68(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// bl 0x8335a838
	ctx.lr = 0x8335D148;
	sub_8335A838(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335d164
	if (!ctx.cr0.eq) goto loc_8335D164;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11168
	ctx.r4.s64 = ctx.r11.s64 + 11168;
	// bl 0x8335a838
	ctx.lr = 0x8335D164;
	sub_8335A838(ctx, base);
loc_8335D164:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-6196
	ctx.r4.s64 = ctx.r10.s64 + -6196;
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x8335a838
	ctx.lr = 0x8335D17C;
	sub_8335A838(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_8335D180:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r4,r11,17,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// b 0x8335d0d8
	goto loc_8335D0D8;
loc_8335D190:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12136
	ctx.r4.s64 = ctx.r11.s64 + 12136;
	// bl 0x8335a838
	ctx.lr = 0x8335D1AC;
	sub_8335A838(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9624
	ctx.r4.s64 = ctx.r11.s64 + -9624;
	// b 0x8335d130
	goto loc_8335D130;
loc_8335D1B8:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335d1dc
	if (ctx.cr0.eq) goto loc_8335D1DC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10652
	ctx.r4.s64 = ctx.r11.s64 + 10652;
	// b 0x8335d0ac
	goto loc_8335D0AC;
loc_8335D1DC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10644
	ctx.r4.s64 = ctx.r11.s64 + 10644;
	// b 0x8335d0ac
	goto loc_8335D0AC;
loc_8335D1E8:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335d20c
	if (ctx.cr0.eq) goto loc_8335D20C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10652
	ctx.r4.s64 = ctx.r11.s64 + 10652;
	// b 0x8335d0f8
	goto loc_8335D0F8;
loc_8335D20C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10644
	ctx.r4.s64 = ctx.r11.s64 + 10644;
	// b 0x8335d0f8
	goto loc_8335D0F8;
loc_8335D218:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12136
	ctx.r4.s64 = ctx.r11.s64 + 12136;
	// bl 0x8335a838
	ctx.lr = 0x8335D234;
	sub_8335A838(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8364
	ctx.r4.s64 = ctx.r11.s64 + 8364;
	// bl 0x8335aa68
	ctx.lr = 0x8335D244;
	sub_8335AA68(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// bl 0x8335a838
	ctx.lr = 0x8335D254;
	sub_8335A838(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11160
	ctx.r4.s64 = ctx.r11.s64 + 11160;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8335a838
	ctx.lr = 0x8335D26C;
	sub_8335A838(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10728
	ctx.r4.s64 = ctx.r11.s64 + 10728;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x8335a838
	ctx.lr = 0x8335D284;
	sub_8335A838(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// bne 0x8335d2a0
	if (!ctx.cr0.eq) goto loc_8335D2A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8335d2cc
	if (ctx.cr6.eq) goto loc_8335D2CC;
loc_8335D2A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8335d2b4
	if (ctx.cr6.eq) goto loc_8335D2B4;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r5,r11,-12384
	ctx.r5.s64 = ctx.r11.s64 + -12384;
	// b 0x8335d2bc
	goto loc_8335D2BC;
loc_8335D2B4:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r5,r11,-12392
	ctx.r5.s64 = ctx.r11.s64 + -12392;
loc_8335D2BC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11148
	ctx.r4.s64 = ctx.r11.s64 + 11148;
	// bl 0x8335a838
	ctx.lr = 0x8335D2CC;
	sub_8335A838(ctx, base);
loc_8335D2CC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r5,r11,21,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-6376
	ctx.r4.s64 = ctx.r11.s64 + -6376;
	// b 0x8335d7f0
	goto loc_8335D7F0;
loc_8335D2E4:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335d320
	if (ctx.cr0.eq) goto loc_8335D320;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335d314
	if (ctx.cr0.eq) goto loc_8335D314;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10652
	ctx.r4.s64 = ctx.r11.s64 + 10652;
	// b 0x8335d328
	goto loc_8335D328;
loc_8335D314:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10644
	ctx.r4.s64 = ctx.r11.s64 + 10644;
	// b 0x8335d328
	goto loc_8335D328;
loc_8335D320:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,12136
	ctx.r4.s64 = ctx.r11.s64 + 12136;
loc_8335D328:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335D330;
	sub_8335A838(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8352
	ctx.r4.s64 = ctx.r11.s64 + 8352;
	// bl 0x8335aa68
	ctx.lr = 0x8335D340;
	sub_8335AA68(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// bl 0x8335a838
	ctx.lr = 0x8335D350;
	sub_8335A838(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11160
	ctx.r4.s64 = ctx.r11.s64 + 11160;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8335a838
	ctx.lr = 0x8335D368;
	sub_8335A838(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10728
	ctx.r4.s64 = ctx.r11.s64 + 10728;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x8335a838
	ctx.lr = 0x8335D380;
	sub_8335A838(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11128
	ctx.r4.s64 = ctx.r11.s64 + 11128;
loc_8335D394:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335D39C;
	sub_8335A838(ctx, base);
	// b 0x8335db50
	goto loc_8335DB50;
loc_8335D3A0:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335d3e4
	if (ctx.cr0.eq) goto loc_8335D3E4;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335d3d8
	if (ctx.cr0.eq) goto loc_8335D3D8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10652
	ctx.r4.s64 = ctx.r11.s64 + 10652;
	// b 0x8335d3ec
	goto loc_8335D3EC;
loc_8335D3D8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10644
	ctx.r4.s64 = ctx.r11.s64 + 10644;
	// b 0x8335d3ec
	goto loc_8335D3EC;
loc_8335D3E4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,12136
	ctx.r4.s64 = ctx.r11.s64 + 12136;
loc_8335D3EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335D3F4;
	sub_8335A838(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335d474
	if (!ctx.cr0.eq) goto loc_8335D474;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335d474
	if (!ctx.cr0.eq) goto loc_8335D474;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9632
	ctx.r4.s64 = ctx.r11.s64 + -9632;
	// bl 0x8335aa68
	ctx.lr = 0x8335D418;
	sub_8335AA68(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// bl 0x8335a838
	ctx.lr = 0x8335D428;
	sub_8335A838(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335d440
	if (ctx.cr0.eq) goto loc_8335D440;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r11,21574
	ctx.r5.s64 = ctx.r11.s64 + 21574;
	// b 0x8335d448
	goto loc_8335D448;
loc_8335D440:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11168
	ctx.r5.s64 = ctx.r11.s64 + 11168;
loc_8335D448:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18112
	ctx.r4.s64 = ctx.r11.s64 + -18112;
	// bl 0x8335a838
	ctx.lr = 0x8335D458;
	sub_8335A838(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11120
	ctx.r4.s64 = ctx.r11.s64 + 11120;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x8335a838
	ctx.lr = 0x8335D470;
	sub_8335A838(ctx, base);
	// b 0x8335d494
	goto loc_8335D494;
loc_8335D474:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8380
	ctx.r4.s64 = ctx.r11.s64 + 8380;
	// bl 0x8335aa68
	ctx.lr = 0x8335D484;
	sub_8335AA68(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// bl 0x8335a838
	ctx.lr = 0x8335D494;
	sub_8335A838(ctx, base);
loc_8335D494:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,10728
	ctx.r4.s64 = ctx.r10.s64 + 10728;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// b 0x8335d7f0
	goto loc_8335D7F0;
loc_8335D4A8:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12136
	ctx.r4.s64 = ctx.r11.s64 + 12136;
	// bl 0x8335a838
	ctx.lr = 0x8335D4C4;
	sub_8335A838(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,8360
	ctx.r4.s64 = ctx.r11.s64 + 8360;
	// b 0x8335d08c
	goto loc_8335D08C;
loc_8335D4D0:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335d514
	if (ctx.cr0.eq) goto loc_8335D514;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335d508
	if (ctx.cr0.eq) goto loc_8335D508;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10652
	ctx.r4.s64 = ctx.r11.s64 + 10652;
	// b 0x8335d51c
	goto loc_8335D51C;
loc_8335D508:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,10644
	ctx.r4.s64 = ctx.r11.s64 + 10644;
	// b 0x8335d51c
	goto loc_8335D51C;
loc_8335D514:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,12136
	ctx.r4.s64 = ctx.r11.s64 + 12136;
loc_8335D51C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335D524;
	sub_8335A838(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8335d53c
	if (!ctx.cr0.eq) goto loc_8335D53C;
	// clrlwi. r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8335d540
	if (ctx.cr0.eq) goto loc_8335D540;
loc_8335D53C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8335D540:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8335d56c
	if (ctx.cr0.eq) goto loc_8335D56C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9644
	ctx.r4.s64 = ctx.r11.s64 + -9644;
	// bl 0x8335aa68
	ctx.lr = 0x8335D558;
	sub_8335AA68(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// bl 0x8335a838
	ctx.lr = 0x8335D568;
	sub_8335A838(ctx, base);
	// b 0x8335d5d0
	goto loc_8335D5D0;
loc_8335D56C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9640
	ctx.r4.s64 = ctx.r11.s64 + -9640;
	// bl 0x8335aa68
	ctx.lr = 0x8335D578;
	sub_8335AA68(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// bl 0x8335a838
	ctx.lr = 0x8335D588;
	sub_8335A838(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335d5a0
	if (ctx.cr0.eq) goto loc_8335D5A0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r11,21574
	ctx.r5.s64 = ctx.r11.s64 + 21574;
	// b 0x8335d5a8
	goto loc_8335D5A8;
loc_8335D5A0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11168
	ctx.r5.s64 = ctx.r11.s64 + 11168;
loc_8335D5A8:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-18112
	ctx.r4.s64 = ctx.r11.s64 + -18112;
	// bl 0x8335a838
	ctx.lr = 0x8335D5B8;
	sub_8335A838(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11120
	ctx.r4.s64 = ctx.r11.s64 + 11120;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x8335a838
	ctx.lr = 0x8335D5D0;
	sub_8335A838(ctx, base);
loc_8335D5D0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,10728
	ctx.r4.s64 = ctx.r10.s64 + 10728;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x8335a838
	ctx.lr = 0x8335D5E8;
	sub_8335A838(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8335d620
	if (ctx.cr0.eq) goto loc_8335D620;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8335d638
	if (!ctx.cr0.eq) goto loc_8335D638;
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335d620
	if (ctx.cr0.eq) goto loc_8335D620;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r5,r11,-12392
	ctx.r5.s64 = ctx.r11.s64 + -12392;
loc_8335D610:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11100
	ctx.r4.s64 = ctx.r11.s64 + 11100;
	// bl 0x8335a838
	ctx.lr = 0x8335D620;
	sub_8335A838(ctx, base);
loc_8335D620:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r5,r11,21,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-6180
	ctx.r4.s64 = ctx.r11.s64 + -6180;
	// b 0x8335d7f0
	goto loc_8335D7F0;
loc_8335D638:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r5,r11,-12384
	ctx.r5.s64 = ctx.r11.s64 + -12384;
	// b 0x8335d610
	goto loc_8335D610;
loc_8335D644:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12136
	ctx.r4.s64 = ctx.r11.s64 + 12136;
	// bl 0x8335a838
	ctx.lr = 0x8335D660;
	sub_8335A838(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9652
	ctx.r4.s64 = ctx.r11.s64 + -9652;
	// bl 0x8335aa68
	ctx.lr = 0x8335D670;
	sub_8335AA68(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// bl 0x8335a838
	ctx.lr = 0x8335D680;
	sub_8335A838(ctx, base);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r9,r11,-2400
	ctx.r9.s64 = ctx.r11.s64 + -2400;
	// addi r4,r10,-18112
	ctx.r4.s64 = ctx.r10.s64 + -18112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r30,r11,23,30,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x3;
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x8335a838
	ctx.lr = 0x8335D6B8;
	sub_8335A838(ctx, base);
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bne cr6,0x8335d6d8
	if (!ctx.cr6.eq) goto loc_8335D6D8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,11096
	ctx.r4.s64 = ctx.r10.s64 + 11096;
	// clrlwi r5,r11,29
	ctx.r5.u64 = ctx.r11.u32 & 0x7;
	// bl 0x8335a838
	ctx.lr = 0x8335D6D8;
	sub_8335A838(ctx, base);
loc_8335D6D8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,11072
	ctx.r4.s64 = ctx.r11.s64 + 11072;
	// b 0x8335d394
	goto loc_8335D394;
loc_8335D6F0:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12136
	ctx.r4.s64 = ctx.r11.s64 + 12136;
	// bl 0x8335a838
	ctx.lr = 0x8335D70C;
	sub_8335A838(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9616
	ctx.r4.s64 = ctx.r11.s64 + -9616;
loc_8335D714:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335aa68
	ctx.lr = 0x8335D71C;
	sub_8335AA68(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// bl 0x8335a838
	ctx.lr = 0x8335D72C;
	sub_8335A838(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335d748
	if (!ctx.cr0.eq) goto loc_8335D748;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11168
	ctx.r4.s64 = ctx.r11.s64 + 11168;
	// bl 0x8335a838
	ctx.lr = 0x8335D748;
	sub_8335A838(ctx, base);
loc_8335D748:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-6196
	ctx.r4.s64 = ctx.r10.s64 + -6196;
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x8335a838
	ctx.lr = 0x8335D760;
	sub_8335A838(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8335d180
	goto loc_8335D180;
loc_8335D768:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12136
	ctx.r4.s64 = ctx.r11.s64 + 12136;
	// bl 0x8335a838
	ctx.lr = 0x8335D784;
	sub_8335A838(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9624
	ctx.r4.s64 = ctx.r11.s64 + -9624;
	// b 0x8335d714
	goto loc_8335D714;
loc_8335D790:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12136
	ctx.r4.s64 = ctx.r11.s64 + 12136;
	// bl 0x8335a838
	ctx.lr = 0x8335D7AC;
	sub_8335A838(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9660
	ctx.r4.s64 = ctx.r11.s64 + -9660;
	// b 0x8335d08c
	goto loc_8335D08C;
loc_8335D7B8:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12136
	ctx.r4.s64 = ctx.r11.s64 + 12136;
	// bl 0x8335a838
	ctx.lr = 0x8335D7D4;
	sub_8335A838(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6112
	ctx.r4.s64 = ctx.r11.s64 + -6112;
	// bl 0x8335aa68
	ctx.lr = 0x8335D7E4;
	sub_8335AA68(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-6192
	ctx.r4.s64 = ctx.r11.s64 + -6192;
loc_8335D7F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335D7F8;
	sub_8335A838(ctx, base);
	// b 0x8335db50
	goto loc_8335DB50;
loc_8335D7FC:
	// rlwinm. r11,r29,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// lwz r11,8240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x8335d814
	if (ctx.cr6.gt) goto loc_8335D814;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8335D814:
	// rlwinm. r10,r29,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r11.u32);
	// rlwinm r21,r29,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// beq 0x8335d8cc
	if (ctx.cr0.eq) goto loc_8335D8CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bf68
	ctx.lr = 0x8335D82C;
	sub_8335BF68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335d84c
	if (ctx.cr0.eq) goto loc_8335D84C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,10692
	ctx.r4.s64 = ctx.r11.s64 + 10692;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335D84C;
	sub_8335A838(ctx, base);
loc_8335D84C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// clrlwi. r10,r21,24
	ctx.r10.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,12136
	ctx.r30.s64 = ctx.r11.s64 + 12136;
	// beq 0x8335d8a8
	if (ctx.cr0.eq) goto loc_8335D8A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335D868;
	sub_8335A838(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6004
	ctx.r4.s64 = ctx.r11.s64 + 6004;
	// bl 0x8335aa68
	ctx.lr = 0x8335D878;
	sub_8335AA68(ctx, base);
	// lbz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8232);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8335d88c
	if (!ctx.cr0.eq) goto loc_8335D88C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bef8
	ctx.lr = 0x8335D88C;
	sub_8335BEF8(ctx, base);
loc_8335D88C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335d8a8
	if (ctx.cr0.eq) goto loc_8335D8A8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10708
	ctx.r4.s64 = ctx.r11.s64 + 10708;
	// bl 0x8335a838
	ctx.lr = 0x8335D8A8;
	sub_8335A838(ctx, base);
loc_8335D8A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335D8B4;
	sub_8335A838(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// rlwinm r5,r29,28,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0x1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335c160
	ctx.lr = 0x8335D8C8;
	sub_8335C160(ctx, base);
	// b 0x8335db50
	goto loc_8335DB50;
loc_8335D8CC:
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335db50
	if (ctx.cr0.eq) goto loc_8335DB50;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8335a450
	ctx.lr = 0x8335D8DC;
	sub_8335A450(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// clrlwi. r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lis r30,-14336
	ctx.r30.s64 = -939524096;
	// addi r25,r11,10708
	ctx.r25.s64 = ctx.r11.s64 + 10708;
	// addi r26,r10,6004
	ctx.r26.s64 = ctx.r10.s64 + 6004;
	// addi r27,r9,10692
	ctx.r27.s64 = ctx.r9.s64 + 10692;
	// addi r24,r8,10644
	ctx.r24.s64 = ctx.r8.s64 + 10644;
	// addi r23,r7,10652
	ctx.r23.s64 = ctx.r7.s64 + 10652;
	// addi r29,r6,12136
	ctx.r29.s64 = ctx.r6.s64 + 12136;
	// beq 0x8335d95c
	if (ctx.cr0.eq) goto loc_8335D95C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8335d950
	if (!ctx.cr6.eq) goto loc_8335D950;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8335d944
	if (ctx.cr0.eq) goto loc_8335D944;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8335a358
	ctx.lr = 0x8335D938;
	sub_8335A358(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x8335d954
	goto loc_8335D954;
loc_8335D944:
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8335d954
	if (ctx.cr0.eq) goto loc_8335D954;
loc_8335D950:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8335D954:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335da10
	if (ctx.cr0.eq) goto loc_8335DA10;
loc_8335D95C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bf68
	ctx.lr = 0x8335D964;
	sub_8335BF68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335d980
	if (ctx.cr0.eq) goto loc_8335D980;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335D980;
	sub_8335A838(ctx, base);
loc_8335D980:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335d9cc
	if (ctx.cr0.eq) goto loc_8335D9CC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335D994;
	sub_8335A838(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335aa68
	ctx.lr = 0x8335D9A0;
	sub_8335AA68(ctx, base);
	// lbz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8232);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8335d9b4
	if (!ctx.cr0.eq) goto loc_8335D9B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bef8
	ctx.lr = 0x8335D9B4;
	sub_8335BEF8(ctx, base);
loc_8335D9B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335d9cc
	if (ctx.cr0.eq) goto loc_8335D9CC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335D9CC;
	sub_8335A838(ctx, base);
loc_8335D9CC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335D9D8;
	sub_8335A838(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8335da04
	if (ctx.cr6.lt) goto loc_8335DA04;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bne 0x8335d9fc
	if (!ctx.cr0.eq) goto loc_8335D9FC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8335D9FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335DA04;
	sub_8335A838(ctx, base);
loc_8335DA04:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335b5a8
	ctx.lr = 0x8335DA10;
	sub_8335B5A8(ctx, base);
loc_8335DA10:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8335da48
	if (!ctx.cr6.eq) goto loc_8335DA48;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8335da3c
	if (ctx.cr0.eq) goto loc_8335DA3C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8335a358
	ctx.lr = 0x8335DA30;
	sub_8335A358(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x8335da4c
	goto loc_8335DA4C;
loc_8335DA3C:
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8335da4c
	if (ctx.cr0.eq) goto loc_8335DA4C;
loc_8335DA48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8335DA4C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335db50
	if (!ctx.cr0.eq) goto loc_8335DB50;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8335a450
	ctx.lr = 0x8335DA5C;
	sub_8335A450(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335da9c
	if (!ctx.cr0.eq) goto loc_8335DA9C;
	// lbz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8232);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8335da78
	if (!ctx.cr0.eq) goto loc_8335DA78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bef8
	ctx.lr = 0x8335DA78;
	sub_8335BEF8(ctx, base);
loc_8335DA78:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335da90
	if (ctx.cr0.eq) goto loc_8335DA90;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335DA90;
	sub_8335A838(ctx, base);
loc_8335DA90:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-6556
	ctx.r4.s64 = ctx.r11.s64 + -6556;
	// b 0x8335db10
	goto loc_8335DB10;
loc_8335DA9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bf68
	ctx.lr = 0x8335DAA4;
	sub_8335BF68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335dac0
	if (ctx.cr0.eq) goto loc_8335DAC0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335DAC0;
	sub_8335A838(ctx, base);
loc_8335DAC0:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335db0c
	if (ctx.cr0.eq) goto loc_8335DB0C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335DAD4;
	sub_8335A838(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335aa68
	ctx.lr = 0x8335DAE0;
	sub_8335AA68(ctx, base);
	// lbz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8232);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8335daf4
	if (!ctx.cr0.eq) goto loc_8335DAF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bef8
	ctx.lr = 0x8335DAF4;
	sub_8335BEF8(ctx, base);
loc_8335DAF4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335db0c
	if (ctx.cr0.eq) goto loc_8335DB0C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335DB0C;
	sub_8335A838(ctx, base);
loc_8335DB0C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8335DB10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335DB18;
	sub_8335A838(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8335db44
	if (ctx.cr6.lt) goto loc_8335DB44;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bne 0x8335db3c
	if (!ctx.cr0.eq) goto loc_8335DB3C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8335DB3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a838
	ctx.lr = 0x8335DB44;
	sub_8335A838(ctx, base);
loc_8335DB44:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335b988
	ctx.lr = 0x8335DB50;
	sub_8335B988(ctx, base);
loc_8335DB50:
	// lbz r11,8232(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8232);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8335db64
	if (!ctx.cr0.eq) goto loc_8335DB64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bef8
	ctx.lr = 0x8335DB64;
	sub_8335BEF8(ctx, base);
loc_8335DB64:
	// lwz r3,8236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8236);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335DB70"))) PPC_WEAK_FUNC(sub_8335DB70);
PPC_FUNC_IMPL(__imp__sub_8335DB70) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335dc00
	if (ctx.cr0.eq) goto loc_8335DC00;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335dbb0
	if (ctx.cr0.eq) goto loc_8335DBB0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,11188
	ctx.r6.s64 = ctx.r11.s64 + 11188;
	// bl 0x8335c020
	ctx.lr = 0x8335DBB0;
	sub_8335C020(ctx, base);
loc_8335DBB0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8335dbd8
	if (ctx.cr6.eq) goto loc_8335DBD8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x8335dbd8
	if (ctx.cr6.eq) goto loc_8335DBD8;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x8335dbd8
	if (ctx.cr6.eq) goto loc_8335DBD8;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x8335dc00
	if (!ctx.cr6.eq) goto loc_8335DC00;
loc_8335DBD8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r8,r10,19
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFF;
	// rlwinm r10,r8,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8335DC00:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8335DC1C"))) PPC_WEAK_FUNC(sub_8335DC1C);
PPC_FUNC_IMPL(__imp__sub_8335DC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335DC20"))) PPC_WEAK_FUNC(sub_8335DC20);
PPC_FUNC_IMPL(__imp__sub_8335DC20) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8335cf58
	sub_8335CF58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335DC38"))) PPC_WEAK_FUNC(sub_8335DC38);
PPC_FUNC_IMPL(__imp__sub_8335DC38) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8335db70
	sub_8335DB70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335DC50"))) PPC_WEAK_FUNC(sub_8335DC50);
PPC_FUNC_IMPL(__imp__sub_8335DC50) {
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
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,-9160
	ctx.r10.s64 = ctx.r10.s64 + -9160;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82e6b238
	ctx.lr = 0x8335DC8C;
	sub_82E6B238(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335DC9C"))) PPC_WEAK_FUNC(sub_8335DC9C);
PPC_FUNC_IMPL(__imp__sub_8335DC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335DCA0"))) PPC_WEAK_FUNC(sub_8335DCA0);
PPC_FUNC_IMPL(__imp__sub_8335DCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8335DCA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// not r9,r8
	ctx.r9.u64 = ~ctx.r8.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r10,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r10.u8);
	// stb r9,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r9.u8);
	// stb r10,8232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8232, ctx.r10.u8);
	// stw r11,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r11.u32);
	// stw r11,8236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8236, ctx.r11.u32);
	// bl 0x8335dc50
	ctx.lr = 0x8335DCF8;
	sub_8335DC50(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r10,r11,-9184
	ctx.r10.s64 = ctx.r11.s64 + -9184;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e6b238
	ctx.lr = 0x8335DD24;
	sub_82E6B238(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x8335dd88
	if (ctx.cr0.lt) goto loc_8335DD88;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8335dd88
	if (!ctx.cr0.eq) goto loc_8335DD88;
	// lwz r11,8240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8240);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r28,r11,12
	ctx.r28.s64 = ctx.r11.s64 * 12;
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x8335dd88
	if (ctx.cr6.gt) goto loc_8335DD88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bef8
	ctx.lr = 0x8335DD58;
	sub_8335BEF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r28,r30
	ctx.r29.u64 = ctx.r28.u64 + ctx.r30.u64;
	// bl 0x8335abb0
	ctx.lr = 0x8335DD64;
	sub_8335ABB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r11,11224
	ctx.r4.s64 = ctx.r11.s64 + 11224;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r5,r28,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// bl 0x8335a838
	ctx.lr = 0x8335DD80;
	sub_8335A838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335bfd8
	ctx.lr = 0x8335DD88;
	sub_8335BFD8(ctx, base);
loc_8335DD88:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335DD94"))) PPC_WEAK_FUNC(sub_8335DD94);
PPC_FUNC_IMPL(__imp__sub_8335DD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335DD98"))) PPC_WEAK_FUNC(sub_8335DD98);
PPC_FUNC_IMPL(__imp__sub_8335DD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8335DDA0;
	__savegprlr_25(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8400(r1)
	ea = -8400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lwz r10,8484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8484);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8335ddfc
	if (ctx.cr6.eq) goto loc_8335DDFC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8335ddec
	if (!ctx.cr6.eq) goto loc_8335DDEC;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x8335ddfc
	goto loc_8335DDFC;
loc_8335DDEC:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8335ddfc
	if (ctx.cr6.eq) goto loc_8335DDFC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8335DDFC:
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335de08
	if (ctx.cr0.eq) goto loc_8335DE08;
	// ori r31,r31,2
	ctx.r31.u64 = ctx.r31.u64 | 2;
loc_8335DE08:
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335de14
	if (ctx.cr0.eq) goto loc_8335DE14;
	// ori r31,r31,4
	ctx.r31.u64 = ctx.r31.u64 | 4;
loc_8335DE14:
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335de20
	if (ctx.cr0.eq) goto loc_8335DE20;
	// ori r31,r31,32
	ctx.r31.u64 = ctx.r31.u64 | 32;
loc_8335DE20:
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335de2c
	if (ctx.cr0.eq) goto loc_8335DE2C;
	// ori r31,r31,16
	ctx.r31.u64 = ctx.r31.u64 | 16;
loc_8335DE2C:
	// rlwinm. r11,r10,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335de38
	if (ctx.cr0.eq) goto loc_8335DE38;
	// ori r31,r31,64
	ctx.r31.u64 = ctx.r31.u64 | 64;
loc_8335DE38:
	// rlwinm. r11,r10,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335de44
	if (ctx.cr0.eq) goto loc_8335DE44;
	// ori r31,r31,128
	ctx.r31.u64 = ctx.r31.u64 | 128;
loc_8335DE44:
	// rlwinm. r11,r10,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8335de50
	if (ctx.cr0.eq) goto loc_8335DE50;
	// ori r31,r31,256
	ctx.r31.u64 = ctx.r31.u64 | 256;
loc_8335DE50:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8335dea4
	if (ctx.cr6.lt) goto loc_8335DEA4;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82cb16f0
	ctx.lr = 0x8335DE68;
	sub_82CB16F0(ctx, base);
	// lwz r11,8492(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8492);
	// lwz r10,8500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8500);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r26,8304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8304, ctx.r26.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r25,8308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8308, ctx.r25.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stb r9,8313(r1)
	PPC_STORE_U8(ctx.r1.u32 + 8313, ctx.r9.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r11,8296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8296, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r10,8300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8300, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8335dca0
	ctx.lr = 0x8335DEA4;
	sub_8335DCA0(ctx, base);
loc_8335DEA4:
	// addi r1,r1,8400
	ctx.r1.s64 = ctx.r1.s64 + 8400;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335DEAC"))) PPC_WEAK_FUNC(sub_8335DEAC);
PPC_FUNC_IMPL(__imp__sub_8335DEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335DEB0"))) PPC_WEAK_FUNC(sub_8335DEB0);
PPC_FUNC_IMPL(__imp__sub_8335DEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8335DEB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,11260
	ctx.r3.s64 = ctx.r11.s64 + 11260;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82e90f20
	ctx.lr = 0x8335DED4;
	sub_82E90F20(ctx, base);
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// stw r11,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// ori r4,r7,4
	ctx.r4.u64 = ctx.r7.u64 | 4;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r5,r8,-16656
	ctx.r5.s64 = ctx.r8.s64 + -16656;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8335dd98
	ctx.lr = 0x8335DF38;
	sub_8335DD98(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8335ac08
	ctx.lr = 0x8335DF40;
	sub_8335AC08(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,11248
	ctx.r3.s64 = ctx.r11.s64 + 11248;
	// bl 0x82e90f20
	ctx.lr = 0x8335DF4C;
	sub_82E90F20(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335DF54"))) PPC_WEAK_FUNC(sub_8335DF54);
PPC_FUNC_IMPL(__imp__sub_8335DF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335DF58"))) PPC_WEAK_FUNC(sub_8335DF58);
PPC_FUNC_IMPL(__imp__sub_8335DF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8335DF60;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stfd f31,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f31.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc1570
	ctx.lr = 0x8335DF80;
	sub_82CC1570(ctx, base);
	// lis r10,-16377
	ctx.r10.s64 = -1073283072;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// ori r28,r10,65279
	ctx.r28.u64 = ctx.r10.u64 | 65279;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-2304(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2304);
	// bl 0x82cc1570
	ctx.lr = 0x8335DF9C;
	sub_82CC1570(ctx, base);
	// lhz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// bne cr6,0x8335e038
	if (!ctx.cr6.eq) goto loc_8335E038;
	// lis r11,-31909
	ctx.r11.s64 = -2091188224;
	// lfd f0,14056(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14056);
	// stfd f0,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f0.u64);
	// bl 0x82cc08d0
	ctx.lr = 0x8335DFC4;
	sub_82CC08D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8335e010
	if (!ctx.cr0.gt) goto loc_8335E010;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x8335dff4
	if (!ctx.cr6.gt) goto loc_8335DFF4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8335e010
	if (!ctx.cr6.eq) goto loc_8335E010;
	// stfd f31,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f31.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cc12a0
	ctx.lr = 0x8335DFF0;
	sub_82CC12A0(ctx, base);
	// b 0x8335e07c
	goto loc_8335E07C;
loc_8335DFF4:
	// stfd f31,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f31.u64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfd f1,-18344(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// bl 0x82cb3db0
	ctx.lr = 0x8335E008;
	sub_82CB3DB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x8335e06c
	goto loc_8335E06C;
loc_8335E010:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfd f0,-18352(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// fadd f2,f31,f0
	ctx.f2.f64 = ctx.f31.f64 + ctx.f0.f64;
	// stfd f2,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f2.u64);
	// bl 0x82cc13a8
	ctx.lr = 0x8335E034;
	sub_82CC13A8(ctx, base);
	// b 0x8335e07c
	goto loc_8335E07C;
loc_8335E038:
	// bl 0x82cc1620
	ctx.lr = 0x8335E03C;
	sub_82CC1620(ctx, base);
	// fsub f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f31.f64 - ctx.f1.f64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfd f1,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f1.u64);
	// stfd f31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// lfd f0,-18344(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18344);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x8335e06c
	if (!ctx.cr6.eq) goto loc_8335E06C;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r10,r29,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lfd f31,80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_8335E06C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc1570
	ctx.lr = 0x8335E078;
	sub_82CC1570(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8335E07C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E088"))) PPC_WEAK_FUNC(sub_8335E088);
PPC_FUNC_IMPL(__imp__sub_8335E088) {
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
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// addi r11,r11,-23544
	ctx.r11.s64 = ctx.r11.s64 + -23544;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x833b77d4
	ctx.lr = 0x8335E0A4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,-16440
	ctx.r3.s64 = ctx.r10.s64 + -16440;
	// bl 0x82cb0ae8
	ctx.lr = 0x8335E0B0;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E0C0"))) PPC_WEAK_FUNC(sub_8335E0C0);
PPC_FUNC_IMPL(__imp__sub_8335E0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E0CC"))) PPC_WEAK_FUNC(sub_8335E0CC);
PPC_FUNC_IMPL(__imp__sub_8335E0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E0D0"))) PPC_WEAK_FUNC(sub_8335E0D0);
PPC_FUNC_IMPL(__imp__sub_8335E0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-16392
	ctx.r3.s64 = ctx.r11.s64 + -16392;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E0DC"))) PPC_WEAK_FUNC(sub_8335E0DC);
PPC_FUNC_IMPL(__imp__sub_8335E0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E0E0"))) PPC_WEAK_FUNC(sub_8335E0E0);
PPC_FUNC_IMPL(__imp__sub_8335E0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-16368
	ctx.r3.s64 = ctx.r11.s64 + -16368;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E0EC"))) PPC_WEAK_FUNC(sub_8335E0EC);
PPC_FUNC_IMPL(__imp__sub_8335E0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E0F0"))) PPC_WEAK_FUNC(sub_8335E0F0);
PPC_FUNC_IMPL(__imp__sub_8335E0F0) {
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
	// addi r3,r11,-22472
	ctx.r3.s64 = ctx.r11.s64 + -22472;
	// bl 0x82290178
	ctx.lr = 0x8335E108;
	sub_82290178(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,-16288
	ctx.r3.s64 = ctx.r10.s64 + -16288;
	// bl 0x82cb0ae8
	ctx.lr = 0x8335E114;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E124"))) PPC_WEAK_FUNC(sub_8335E124);
PPC_FUNC_IMPL(__imp__sub_8335E124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E128"))) PPC_WEAK_FUNC(sub_8335E128);
PPC_FUNC_IMPL(__imp__sub_8335E128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31905
	ctx.r11.s64 = -2090926080;
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r11,r11,-21384
	ctx.r11.s64 = ctx.r11.s64 + -21384;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_8335E13C:
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x8335e13c
	if (!ctx.cr0.lt) goto loc_8335E13C;
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-16272
	ctx.r3.s64 = ctx.r11.s64 + -16272;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E160"))) PPC_WEAK_FUNC(sub_8335E160);
PPC_FUNC_IMPL(__imp__sub_8335E160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-16256
	ctx.r3.s64 = ctx.r11.s64 + -16256;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E16C"))) PPC_WEAK_FUNC(sub_8335E16C);
PPC_FUNC_IMPL(__imp__sub_8335E16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E170"))) PPC_WEAK_FUNC(sub_8335E170);
PPC_FUNC_IMPL(__imp__sub_8335E170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// addi r9,r11,-18064
	ctx.r9.s64 = ctx.r11.s64 + -18064;
	// addi r8,r10,-22320
	ctx.r8.s64 = ctx.r10.s64 + -22320;
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E18C"))) PPC_WEAK_FUNC(sub_8335E18C);
PPC_FUNC_IMPL(__imp__sub_8335E18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E190"))) PPC_WEAK_FUNC(sub_8335E190);
PPC_FUNC_IMPL(__imp__sub_8335E190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-22288
	ctx.r9.s64 = ctx.r11.s64 + -22288;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E1C0"))) PPC_WEAK_FUNC(sub_8335E1C0);
PPC_FUNC_IMPL(__imp__sub_8335E1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lis r10,7967
	ctx.r10.s64 = 522125312;
	// lis r9,7967
	ctx.r9.s64 = 522125312;
	// lis r8,7967
	ctx.r8.s64 = 522125312;
	// lis r7,7967
	ctx.r7.s64 = 522125312;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-22272
	ctx.r5.s64 = ctx.r11.s64 + -22272;
	// ori r4,r10,7948
	ctx.r4.u64 = ctx.r10.u64 | 7948;
	// ori r3,r9,7949
	ctx.r3.u64 = ctx.r9.u64 | 7949;
	// ori r11,r8,7950
	ctx.r11.u64 = ctx.r8.u64 | 7950;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,7951
	ctx.r10.u64 = ctx.r7.u64 | 7951;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E208"))) PPC_WEAK_FUNC(sub_8335E208);
PPC_FUNC_IMPL(__imp__sub_8335E208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// lis r10,7967
	ctx.r10.s64 = 522125312;
	// lis r9,7967
	ctx.r9.s64 = 522125312;
	// lis r8,7967
	ctx.r8.s64 = 522125312;
	// lis r7,7967
	ctx.r7.s64 = 522125312;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-22304
	ctx.r5.s64 = ctx.r11.s64 + -22304;
	// ori r4,r10,7951
	ctx.r4.u64 = ctx.r10.u64 | 7951;
	// ori r3,r9,7950
	ctx.r3.u64 = ctx.r9.u64 | 7950;
	// ori r11,r8,7949
	ctx.r11.u64 = ctx.r8.u64 | 7949;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,7948
	ctx.r10.u64 = ctx.r7.u64 | 7948;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E250"))) PPC_WEAK_FUNC(sub_8335E250);
PPC_FUNC_IMPL(__imp__sub_8335E250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-22416
	ctx.r9.s64 = ctx.r11.s64 + -22416;
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// addi r3,r8,-16232
	ctx.r3.s64 = ctx.r8.s64 + -16232;
	// stw r10,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r10.u32);
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E26C"))) PPC_WEAK_FUNC(sub_8335E26C);
PPC_FUNC_IMPL(__imp__sub_8335E26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E270"))) PPC_WEAK_FUNC(sub_8335E270);
PPC_FUNC_IMPL(__imp__sub_8335E270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-16216
	ctx.r3.s64 = ctx.r11.s64 + -16216;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E27C"))) PPC_WEAK_FUNC(sub_8335E27C);
PPC_FUNC_IMPL(__imp__sub_8335E27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E280"))) PPC_WEAK_FUNC(sub_8335E280);
PPC_FUNC_IMPL(__imp__sub_8335E280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// addi r9,r11,-18064
	ctx.r9.s64 = ctx.r11.s64 + -18064;
	// addi r8,r10,-22048
	ctx.r8.s64 = ctx.r10.s64 + -22048;
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E29C"))) PPC_WEAK_FUNC(sub_8335E29C);
PPC_FUNC_IMPL(__imp__sub_8335E29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E2A0"))) PPC_WEAK_FUNC(sub_8335E2A0);
PPC_FUNC_IMPL(__imp__sub_8335E2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-22000
	ctx.r9.s64 = ctx.r11.s64 + -22000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E2D0"))) PPC_WEAK_FUNC(sub_8335E2D0);
PPC_FUNC_IMPL(__imp__sub_8335E2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,7967
	ctx.r10.s64 = 522125312;
	// lis r9,7967
	ctx.r9.s64 = 522125312;
	// lis r8,7967
	ctx.r8.s64 = 522125312;
	// lis r7,7967
	ctx.r7.s64 = 522125312;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-21984
	ctx.r5.s64 = ctx.r11.s64 + -21984;
	// ori r4,r10,7948
	ctx.r4.u64 = ctx.r10.u64 | 7948;
	// ori r3,r9,7949
	ctx.r3.u64 = ctx.r9.u64 | 7949;
	// ori r11,r8,7950
	ctx.r11.u64 = ctx.r8.u64 | 7950;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,7951
	ctx.r10.u64 = ctx.r7.u64 | 7951;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E318"))) PPC_WEAK_FUNC(sub_8335E318);
PPC_FUNC_IMPL(__imp__sub_8335E318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// lis r10,7967
	ctx.r10.s64 = 522125312;
	// lis r9,7967
	ctx.r9.s64 = 522125312;
	// lis r8,7967
	ctx.r8.s64 = 522125312;
	// lis r7,7967
	ctx.r7.s64 = 522125312;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-22032
	ctx.r5.s64 = ctx.r11.s64 + -22032;
	// ori r4,r10,7951
	ctx.r4.u64 = ctx.r10.u64 | 7951;
	// ori r3,r9,7950
	ctx.r3.u64 = ctx.r9.u64 | 7950;
	// ori r11,r8,7949
	ctx.r11.u64 = ctx.r8.u64 | 7949;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,7948
	ctx.r10.u64 = ctx.r7.u64 | 7948;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E360"))) PPC_WEAK_FUNC(sub_8335E360);
PPC_FUNC_IMPL(__imp__sub_8335E360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-16152
	ctx.r3.s64 = ctx.r11.s64 + -16152;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E36C"))) PPC_WEAK_FUNC(sub_8335E36C);
PPC_FUNC_IMPL(__imp__sub_8335E36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E370"))) PPC_WEAK_FUNC(sub_8335E370);
PPC_FUNC_IMPL(__imp__sub_8335E370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-16128
	ctx.r3.s64 = ctx.r11.s64 + -16128;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E37C"))) PPC_WEAK_FUNC(sub_8335E37C);
PPC_FUNC_IMPL(__imp__sub_8335E37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E380"))) PPC_WEAK_FUNC(sub_8335E380);
PPC_FUNC_IMPL(__imp__sub_8335E380) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// addi r3,r11,-22168
	ctx.r3.s64 = ctx.r11.s64 + -22168;
	// bl 0x82299df0
	ctx.lr = 0x8335E398;
	sub_82299DF0(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,-16104
	ctx.r3.s64 = ctx.r10.s64 + -16104;
	// bl 0x82cb0ae8
	ctx.lr = 0x8335E3A4;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E3B4"))) PPC_WEAK_FUNC(sub_8335E3B4);
PPC_FUNC_IMPL(__imp__sub_8335E3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E3B8"))) PPC_WEAK_FUNC(sub_8335E3B8);
PPC_FUNC_IMPL(__imp__sub_8335E3B8) {
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
	// addi r3,r11,-22232
	ctx.r3.s64 = ctx.r11.s64 + -22232;
	// bl 0x823a3f78
	ctx.lr = 0x8335E3D0;
	sub_823A3F78(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,-16080
	ctx.r3.s64 = ctx.r10.s64 + -16080;
	// bl 0x82cb0ae8
	ctx.lr = 0x8335E3DC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E3EC"))) PPC_WEAK_FUNC(sub_8335E3EC);
PPC_FUNC_IMPL(__imp__sub_8335E3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E3F0"))) PPC_WEAK_FUNC(sub_8335E3F0);
PPC_FUNC_IMPL(__imp__sub_8335E3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15984
	ctx.r3.s64 = ctx.r11.s64 + -15984;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E3FC"))) PPC_WEAK_FUNC(sub_8335E3FC);
PPC_FUNC_IMPL(__imp__sub_8335E3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E400"))) PPC_WEAK_FUNC(sub_8335E400);
PPC_FUNC_IMPL(__imp__sub_8335E400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31883
	ctx.r11.s64 = -2089484288;
	// addi r3,r11,-22168
	ctx.r3.s64 = ctx.r11.s64 + -22168;
	// b 0x823d2768
	sub_823D2768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E40C"))) PPC_WEAK_FUNC(sub_8335E40C);
PPC_FUNC_IMPL(__imp__sub_8335E40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E410"))) PPC_WEAK_FUNC(sub_8335E410);
PPC_FUNC_IMPL(__imp__sub_8335E410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15968
	ctx.r3.s64 = ctx.r11.s64 + -15968;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E41C"))) PPC_WEAK_FUNC(sub_8335E41C);
PPC_FUNC_IMPL(__imp__sub_8335E41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E420"))) PPC_WEAK_FUNC(sub_8335E420);
PPC_FUNC_IMPL(__imp__sub_8335E420) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31883
	ctx.r10.s64 = -2089484288;
	// addi r4,r11,11272
	ctx.r4.s64 = ctx.r11.s64 + 11272;
	// addi r3,r10,-22256
	ctx.r3.s64 = ctx.r10.s64 + -22256;
	// bl 0x822960c0
	ctx.lr = 0x8335E440;
	sub_822960C0(ctx, base);
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// addi r3,r9,-15952
	ctx.r3.s64 = ctx.r9.s64 + -15952;
	// bl 0x82cb0ae8
	ctx.lr = 0x8335E44C;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E45C"))) PPC_WEAK_FUNC(sub_8335E45C);
PPC_FUNC_IMPL(__imp__sub_8335E45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E460"))) PPC_WEAK_FUNC(sub_8335E460);
PPC_FUNC_IMPL(__imp__sub_8335E460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15856
	ctx.r3.s64 = ctx.r11.s64 + -15856;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E46C"))) PPC_WEAK_FUNC(sub_8335E46C);
PPC_FUNC_IMPL(__imp__sub_8335E46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E470"))) PPC_WEAK_FUNC(sub_8335E470);
PPC_FUNC_IMPL(__imp__sub_8335E470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15840
	ctx.r3.s64 = ctx.r11.s64 + -15840;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E47C"))) PPC_WEAK_FUNC(sub_8335E47C);
PPC_FUNC_IMPL(__imp__sub_8335E47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E480"))) PPC_WEAK_FUNC(sub_8335E480);
PPC_FUNC_IMPL(__imp__sub_8335E480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15824
	ctx.r3.s64 = ctx.r11.s64 + -15824;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E48C"))) PPC_WEAK_FUNC(sub_8335E48C);
PPC_FUNC_IMPL(__imp__sub_8335E48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E490"))) PPC_WEAK_FUNC(sub_8335E490);
PPC_FUNC_IMPL(__imp__sub_8335E490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15808
	ctx.r3.s64 = ctx.r11.s64 + -15808;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E49C"))) PPC_WEAK_FUNC(sub_8335E49C);
PPC_FUNC_IMPL(__imp__sub_8335E49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E4A0"))) PPC_WEAK_FUNC(sub_8335E4A0);
PPC_FUNC_IMPL(__imp__sub_8335E4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15792
	ctx.r3.s64 = ctx.r11.s64 + -15792;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E4AC"))) PPC_WEAK_FUNC(sub_8335E4AC);
PPC_FUNC_IMPL(__imp__sub_8335E4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E4B0"))) PPC_WEAK_FUNC(sub_8335E4B0);
PPC_FUNC_IMPL(__imp__sub_8335E4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15776
	ctx.r3.s64 = ctx.r11.s64 + -15776;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E4BC"))) PPC_WEAK_FUNC(sub_8335E4BC);
PPC_FUNC_IMPL(__imp__sub_8335E4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E4C0"))) PPC_WEAK_FUNC(sub_8335E4C0);
PPC_FUNC_IMPL(__imp__sub_8335E4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15760
	ctx.r3.s64 = ctx.r11.s64 + -15760;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E4CC"))) PPC_WEAK_FUNC(sub_8335E4CC);
PPC_FUNC_IMPL(__imp__sub_8335E4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E4D0"))) PPC_WEAK_FUNC(sub_8335E4D0);
PPC_FUNC_IMPL(__imp__sub_8335E4D0) {
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
	// lis r11,-31882
	ctx.r11.s64 = -2089418752;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r11,-21884
	ctx.r3.s64 = ctx.r11.s64 + -21884;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// bl 0x822b5390
	ctx.lr = 0x8335E4F0;
	sub_822B5390(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r3,r10,-15728
	ctx.r3.s64 = ctx.r10.s64 + -15728;
	// bl 0x82cb0ae8
	ctx.lr = 0x8335E4FC;
	sub_82CB0AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E50C"))) PPC_WEAK_FUNC(sub_8335E50C);
PPC_FUNC_IMPL(__imp__sub_8335E50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E510"))) PPC_WEAK_FUNC(sub_8335E510);
PPC_FUNC_IMPL(__imp__sub_8335E510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15664
	ctx.r3.s64 = ctx.r11.s64 + -15664;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E51C"))) PPC_WEAK_FUNC(sub_8335E51C);
PPC_FUNC_IMPL(__imp__sub_8335E51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E520"))) PPC_WEAK_FUNC(sub_8335E520);
PPC_FUNC_IMPL(__imp__sub_8335E520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15568
	ctx.r3.s64 = ctx.r11.s64 + -15568;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E52C"))) PPC_WEAK_FUNC(sub_8335E52C);
PPC_FUNC_IMPL(__imp__sub_8335E52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E530"))) PPC_WEAK_FUNC(sub_8335E530);
PPC_FUNC_IMPL(__imp__sub_8335E530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15504
	ctx.r3.s64 = ctx.r11.s64 + -15504;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E53C"))) PPC_WEAK_FUNC(sub_8335E53C);
PPC_FUNC_IMPL(__imp__sub_8335E53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E540"))) PPC_WEAK_FUNC(sub_8335E540);
PPC_FUNC_IMPL(__imp__sub_8335E540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15424
	ctx.r3.s64 = ctx.r11.s64 + -15424;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E54C"))) PPC_WEAK_FUNC(sub_8335E54C);
PPC_FUNC_IMPL(__imp__sub_8335E54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E550"))) PPC_WEAK_FUNC(sub_8335E550);
PPC_FUNC_IMPL(__imp__sub_8335E550) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335E580:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335e580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335E580;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E590"))) PPC_WEAK_FUNC(sub_8335E590);
PPC_FUNC_IMPL(__imp__sub_8335E590) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335E5C0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335e5c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335E5C0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E5D0"))) PPC_WEAK_FUNC(sub_8335E5D0);
PPC_FUNC_IMPL(__imp__sub_8335E5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r3,r11,-15144
	ctx.r3.s64 = ctx.r11.s64 + -15144;
	// b 0x82cb0ae8
	sub_82CB0AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E5DC"))) PPC_WEAK_FUNC(sub_8335E5DC);
PPC_FUNC_IMPL(__imp__sub_8335E5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E5E0"))) PPC_WEAK_FUNC(sub_8335E5E0);
PPC_FUNC_IMPL(__imp__sub_8335E5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335E610:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335e610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335E610;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E620"))) PPC_WEAK_FUNC(sub_8335E620);
PPC_FUNC_IMPL(__imp__sub_8335E620) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335E650:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335e650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335E650;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E660"))) PPC_WEAK_FUNC(sub_8335E660);
PPC_FUNC_IMPL(__imp__sub_8335E660) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335E690:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335e690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335E690;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E6A0"))) PPC_WEAK_FUNC(sub_8335E6A0);
PPC_FUNC_IMPL(__imp__sub_8335E6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335E6D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335e6d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335E6D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E6E0"))) PPC_WEAK_FUNC(sub_8335E6E0);
PPC_FUNC_IMPL(__imp__sub_8335E6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335E710:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335e710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335E710;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E720"))) PPC_WEAK_FUNC(sub_8335E720);
PPC_FUNC_IMPL(__imp__sub_8335E720) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335E750:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335e750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335E750;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E760"))) PPC_WEAK_FUNC(sub_8335E760);
PPC_FUNC_IMPL(__imp__sub_8335E760) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335E790:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335e790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335E790;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E7A0"))) PPC_WEAK_FUNC(sub_8335E7A0);
PPC_FUNC_IMPL(__imp__sub_8335E7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335E7D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335e7d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335E7D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E7E0"))) PPC_WEAK_FUNC(sub_8335E7E0);
PPC_FUNC_IMPL(__imp__sub_8335E7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335E810:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335e810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335E810;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E820"))) PPC_WEAK_FUNC(sub_8335E820);
PPC_FUNC_IMPL(__imp__sub_8335E820) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335E850:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335e850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335E850;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E860"))) PPC_WEAK_FUNC(sub_8335E860);
PPC_FUNC_IMPL(__imp__sub_8335E860) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335E890:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335e890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335E890;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E8A0"))) PPC_WEAK_FUNC(sub_8335E8A0);
PPC_FUNC_IMPL(__imp__sub_8335E8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335E8D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335e8d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335E8D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E8E0"))) PPC_WEAK_FUNC(sub_8335E8E0);
PPC_FUNC_IMPL(__imp__sub_8335E8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335E910:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335e910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335E910;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E920"))) PPC_WEAK_FUNC(sub_8335E920);
PPC_FUNC_IMPL(__imp__sub_8335E920) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335E950:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335e950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335E950;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E960"))) PPC_WEAK_FUNC(sub_8335E960);
PPC_FUNC_IMPL(__imp__sub_8335E960) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335E990:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335e990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335E990;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E9A0"))) PPC_WEAK_FUNC(sub_8335E9A0);
PPC_FUNC_IMPL(__imp__sub_8335E9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335E9D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335e9d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335E9D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E9E0"))) PPC_WEAK_FUNC(sub_8335E9E0);
PPC_FUNC_IMPL(__imp__sub_8335E9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EA10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ea10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EA10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EA20"))) PPC_WEAK_FUNC(sub_8335EA20);
PPC_FUNC_IMPL(__imp__sub_8335EA20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EA50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ea50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EA50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EA60"))) PPC_WEAK_FUNC(sub_8335EA60);
PPC_FUNC_IMPL(__imp__sub_8335EA60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EA90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ea90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EA90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EAA0"))) PPC_WEAK_FUNC(sub_8335EAA0);
PPC_FUNC_IMPL(__imp__sub_8335EAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EAD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ead0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EAD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EAE0"))) PPC_WEAK_FUNC(sub_8335EAE0);
PPC_FUNC_IMPL(__imp__sub_8335EAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EB10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335eb10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EB10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EB20"))) PPC_WEAK_FUNC(sub_8335EB20);
PPC_FUNC_IMPL(__imp__sub_8335EB20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EB50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335eb50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EB50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EB60"))) PPC_WEAK_FUNC(sub_8335EB60);
PPC_FUNC_IMPL(__imp__sub_8335EB60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EB90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335eb90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EB90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EBA0"))) PPC_WEAK_FUNC(sub_8335EBA0);
PPC_FUNC_IMPL(__imp__sub_8335EBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EBD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ebd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EBD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EBE0"))) PPC_WEAK_FUNC(sub_8335EBE0);
PPC_FUNC_IMPL(__imp__sub_8335EBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EC10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ec10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EC10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EC20"))) PPC_WEAK_FUNC(sub_8335EC20);
PPC_FUNC_IMPL(__imp__sub_8335EC20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EC50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ec50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EC50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EC60"))) PPC_WEAK_FUNC(sub_8335EC60);
PPC_FUNC_IMPL(__imp__sub_8335EC60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EC90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ec90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EC90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335ECA0"))) PPC_WEAK_FUNC(sub_8335ECA0);
PPC_FUNC_IMPL(__imp__sub_8335ECA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335ECD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ecd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335ECD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335ECE0"))) PPC_WEAK_FUNC(sub_8335ECE0);
PPC_FUNC_IMPL(__imp__sub_8335ECE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335ED10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ed10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335ED10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335ED20"))) PPC_WEAK_FUNC(sub_8335ED20);
PPC_FUNC_IMPL(__imp__sub_8335ED20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335ED50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ed50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335ED50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335ED60"))) PPC_WEAK_FUNC(sub_8335ED60);
PPC_FUNC_IMPL(__imp__sub_8335ED60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335ED90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ed90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335ED90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EDA0"))) PPC_WEAK_FUNC(sub_8335EDA0);
PPC_FUNC_IMPL(__imp__sub_8335EDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EDD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335edd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EDD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EDE0"))) PPC_WEAK_FUNC(sub_8335EDE0);
PPC_FUNC_IMPL(__imp__sub_8335EDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EE10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ee10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EE10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EE20"))) PPC_WEAK_FUNC(sub_8335EE20);
PPC_FUNC_IMPL(__imp__sub_8335EE20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EE50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ee50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EE50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EE60"))) PPC_WEAK_FUNC(sub_8335EE60);
PPC_FUNC_IMPL(__imp__sub_8335EE60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EE90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ee90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EE90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EEA0"))) PPC_WEAK_FUNC(sub_8335EEA0);
PPC_FUNC_IMPL(__imp__sub_8335EEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EED0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335eed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EED0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EEE0"))) PPC_WEAK_FUNC(sub_8335EEE0);
PPC_FUNC_IMPL(__imp__sub_8335EEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EF10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ef10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EF10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EF20"))) PPC_WEAK_FUNC(sub_8335EF20);
PPC_FUNC_IMPL(__imp__sub_8335EF20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EF50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ef50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EF50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EF60"))) PPC_WEAK_FUNC(sub_8335EF60);
PPC_FUNC_IMPL(__imp__sub_8335EF60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EF90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ef90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EF90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EFA0"))) PPC_WEAK_FUNC(sub_8335EFA0);
PPC_FUNC_IMPL(__imp__sub_8335EFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335EFD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335efd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335EFD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EFE0"))) PPC_WEAK_FUNC(sub_8335EFE0);
PPC_FUNC_IMPL(__imp__sub_8335EFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F010:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F010;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F020"))) PPC_WEAK_FUNC(sub_8335F020);
PPC_FUNC_IMPL(__imp__sub_8335F020) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F050:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F050;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F060"))) PPC_WEAK_FUNC(sub_8335F060);
PPC_FUNC_IMPL(__imp__sub_8335F060) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F090:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F090;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F0A0"))) PPC_WEAK_FUNC(sub_8335F0A0);
PPC_FUNC_IMPL(__imp__sub_8335F0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F0D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f0d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F0D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F0E0"))) PPC_WEAK_FUNC(sub_8335F0E0);
PPC_FUNC_IMPL(__imp__sub_8335F0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F110:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F110;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F120"))) PPC_WEAK_FUNC(sub_8335F120);
PPC_FUNC_IMPL(__imp__sub_8335F120) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F150:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F150;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F160"))) PPC_WEAK_FUNC(sub_8335F160);
PPC_FUNC_IMPL(__imp__sub_8335F160) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F190:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F190;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F1A0"))) PPC_WEAK_FUNC(sub_8335F1A0);
PPC_FUNC_IMPL(__imp__sub_8335F1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F1D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f1d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F1D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F1E0"))) PPC_WEAK_FUNC(sub_8335F1E0);
PPC_FUNC_IMPL(__imp__sub_8335F1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F210:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F210;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F220"))) PPC_WEAK_FUNC(sub_8335F220);
PPC_FUNC_IMPL(__imp__sub_8335F220) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8335f260
	if (!ctx.cr6.eq) goto loc_8335F260;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F254:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f254
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F254;
loc_8335F260:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1284(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1284);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335f290
	if (ctx.cr6.eq) goto loc_8335F290;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,321
	ctx.r11.s64 = 321;
	// lwz r10,25516(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25516);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1284, ctx.r10.u32);
	// blr 
	return;
loc_8335F290:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,25516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25516);
	// stw r11,1284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1284, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F2A0"))) PPC_WEAK_FUNC(sub_8335F2A0);
PPC_FUNC_IMPL(__imp__sub_8335F2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8335f2e0
	if (!ctx.cr6.eq) goto loc_8335F2E0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F2D4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f2d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F2D4;
loc_8335F2E0:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1248(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1248);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335f310
	if (ctx.cr6.eq) goto loc_8335F310;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,312
	ctx.r11.s64 = 312;
	// lwz r10,25520(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25520);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1248(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1248, ctx.r10.u32);
	// blr 
	return;
loc_8335F310:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,25520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25520);
	// stw r11,1248(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1248, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F320"))) PPC_WEAK_FUNC(sub_8335F320);
PPC_FUNC_IMPL(__imp__sub_8335F320) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8335f360
	if (!ctx.cr6.eq) goto loc_8335F360;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F354:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F354;
loc_8335F360:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1244(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1244);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335f390
	if (ctx.cr6.eq) goto loc_8335F390;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,311
	ctx.r11.s64 = 311;
	// lwz r10,25524(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25524);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1244, ctx.r10.u32);
	// blr 
	return;
loc_8335F390:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,25524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25524);
	// stw r11,1244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1244, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F3A0"))) PPC_WEAK_FUNC(sub_8335F3A0);
PPC_FUNC_IMPL(__imp__sub_8335F3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8335f3e0
	if (!ctx.cr6.eq) goto loc_8335F3E0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F3D4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f3d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F3D4;
loc_8335F3E0:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1236(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1236);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335f410
	if (ctx.cr6.eq) goto loc_8335F410;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,309
	ctx.r11.s64 = 309;
	// lwz r10,25528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25528);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1236, ctx.r10.u32);
	// blr 
	return;
loc_8335F410:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,25528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25528);
	// stw r11,1236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1236, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F420"))) PPC_WEAK_FUNC(sub_8335F420);
PPC_FUNC_IMPL(__imp__sub_8335F420) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8335f460
	if (!ctx.cr6.eq) goto loc_8335F460;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F454:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f454
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F454;
loc_8335F460:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1228(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1228);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335f490
	if (ctx.cr6.eq) goto loc_8335F490;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,307
	ctx.r11.s64 = 307;
	// lwz r10,25532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25532);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1228, ctx.r10.u32);
	// blr 
	return;
loc_8335F490:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,25532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25532);
	// stw r11,1228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1228, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F4A0"))) PPC_WEAK_FUNC(sub_8335F4A0);
PPC_FUNC_IMPL(__imp__sub_8335F4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8335f4e0
	if (!ctx.cr6.eq) goto loc_8335F4E0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F4D4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f4d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F4D4;
loc_8335F4E0:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1224(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1224);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335f510
	if (ctx.cr6.eq) goto loc_8335F510;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,306
	ctx.r11.s64 = 306;
	// lwz r10,25536(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25536);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1224, ctx.r10.u32);
	// blr 
	return;
loc_8335F510:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,25536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25536);
	// stw r11,1224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F520"))) PPC_WEAK_FUNC(sub_8335F520);
PPC_FUNC_IMPL(__imp__sub_8335F520) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8335f560
	if (!ctx.cr6.eq) goto loc_8335F560;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F554:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f554
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F554;
loc_8335F560:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1220(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1220);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335f590
	if (ctx.cr6.eq) goto loc_8335F590;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,305
	ctx.r11.s64 = 305;
	// lwz r10,25540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25540);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1220, ctx.r10.u32);
	// blr 
	return;
loc_8335F590:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,25540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25540);
	// stw r11,1220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F5A0"))) PPC_WEAK_FUNC(sub_8335F5A0);
PPC_FUNC_IMPL(__imp__sub_8335F5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8335f5e0
	if (!ctx.cr6.eq) goto loc_8335F5E0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F5D4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f5d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F5D4;
loc_8335F5E0:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1252(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1252);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335f610
	if (ctx.cr6.eq) goto loc_8335F610;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,313
	ctx.r11.s64 = 313;
	// lwz r10,25544(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25544);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1252(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1252, ctx.r10.u32);
	// blr 
	return;
loc_8335F610:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,25544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25544);
	// stw r11,1252(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1252, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F620"))) PPC_WEAK_FUNC(sub_8335F620);
PPC_FUNC_IMPL(__imp__sub_8335F620) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8335f660
	if (!ctx.cr6.eq) goto loc_8335F660;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F654:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f654
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F654;
loc_8335F660:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1216);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335f690
	if (ctx.cr6.eq) goto loc_8335F690;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,304
	ctx.r11.s64 = 304;
	// lwz r10,25548(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25548);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1216, ctx.r10.u32);
	// blr 
	return;
loc_8335F690:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,25548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25548);
	// stw r11,1216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F6A0"))) PPC_WEAK_FUNC(sub_8335F6A0);
PPC_FUNC_IMPL(__imp__sub_8335F6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8335f6e0
	if (!ctx.cr6.eq) goto loc_8335F6E0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F6D4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f6d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F6D4;
loc_8335F6E0:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,2188(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2188);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335f710
	if (ctx.cr6.eq) goto loc_8335F710;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,547
	ctx.r11.s64 = 547;
	// lwz r10,25552(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25552);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,2188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2188, ctx.r10.u32);
	// blr 
	return;
loc_8335F710:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,25552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25552);
	// stw r11,2188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2188, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F720"))) PPC_WEAK_FUNC(sub_8335F720);
PPC_FUNC_IMPL(__imp__sub_8335F720) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F750:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F750;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F760"))) PPC_WEAK_FUNC(sub_8335F760);
PPC_FUNC_IMPL(__imp__sub_8335F760) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F790:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F790;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F7A0"))) PPC_WEAK_FUNC(sub_8335F7A0);
PPC_FUNC_IMPL(__imp__sub_8335F7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8335f7e0
	if (!ctx.cr6.eq) goto loc_8335F7E0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F7D4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f7d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F7D4;
loc_8335F7E0:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,2128(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2128);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335f810
	if (ctx.cr6.eq) goto loc_8335F810;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,532
	ctx.r11.s64 = 532;
	// lwz r10,25564(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25564);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,2128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2128, ctx.r10.u32);
	// blr 
	return;
loc_8335F810:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,25564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25564);
	// stw r11,2128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F820"))) PPC_WEAK_FUNC(sub_8335F820);
PPC_FUNC_IMPL(__imp__sub_8335F820) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8335f860
	if (!ctx.cr6.eq) goto loc_8335F860;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F854:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F854;
loc_8335F860:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,2048(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2048);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335f890
	if (ctx.cr6.eq) goto loc_8335F890;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,512
	ctx.r11.s64 = 512;
	// lwz r10,25568(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25568);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,2048(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2048, ctx.r10.u32);
	// blr 
	return;
loc_8335F890:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,25568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25568);
	// stw r11,2048(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2048, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F8A0"))) PPC_WEAK_FUNC(sub_8335F8A0);
PPC_FUNC_IMPL(__imp__sub_8335F8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F8D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f8d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F8D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F8E0"))) PPC_WEAK_FUNC(sub_8335F8E0);
PPC_FUNC_IMPL(__imp__sub_8335F8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F910:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F910;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F920"))) PPC_WEAK_FUNC(sub_8335F920);
PPC_FUNC_IMPL(__imp__sub_8335F920) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F950:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F950;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F960"))) PPC_WEAK_FUNC(sub_8335F960);
PPC_FUNC_IMPL(__imp__sub_8335F960) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F990:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F990;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F9A0"))) PPC_WEAK_FUNC(sub_8335F9A0);
PPC_FUNC_IMPL(__imp__sub_8335F9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335F9D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335f9d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335F9D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F9E0"))) PPC_WEAK_FUNC(sub_8335F9E0);
PPC_FUNC_IMPL(__imp__sub_8335F9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FA10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335fa10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FA10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FA20"))) PPC_WEAK_FUNC(sub_8335FA20);
PPC_FUNC_IMPL(__imp__sub_8335FA20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FA50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335fa50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FA50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FA60"))) PPC_WEAK_FUNC(sub_8335FA60);
PPC_FUNC_IMPL(__imp__sub_8335FA60) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8335faa0
	if (!ctx.cr6.eq) goto loc_8335FAA0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FA94:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335fa94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FA94;
loc_8335FAA0:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1120);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335fad0
	if (ctx.cr6.eq) goto loc_8335FAD0;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,280
	ctx.r11.s64 = 280;
	// lwz r10,25600(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25600);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1120(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1120, ctx.r10.u32);
	// blr 
	return;
loc_8335FAD0:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,25600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25600);
	// stw r11,1120(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1120, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FAE0"))) PPC_WEAK_FUNC(sub_8335FAE0);
PPC_FUNC_IMPL(__imp__sub_8335FAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8335fb20
	if (!ctx.cr6.eq) goto loc_8335FB20;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FB14:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335fb14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FB14;
loc_8335FB20:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1116(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1116);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335fb50
	if (ctx.cr6.eq) goto loc_8335FB50;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,279
	ctx.r11.s64 = 279;
	// lwz r10,25604(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25604);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1116(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1116, ctx.r10.u32);
	// blr 
	return;
loc_8335FB50:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,25604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25604);
	// stw r11,1116(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1116, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FB60"))) PPC_WEAK_FUNC(sub_8335FB60);
PPC_FUNC_IMPL(__imp__sub_8335FB60) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8335fba0
	if (!ctx.cr6.eq) goto loc_8335FBA0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FB94:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335fb94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FB94;
loc_8335FBA0:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1112);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335fbd0
	if (ctx.cr6.eq) goto loc_8335FBD0;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,278
	ctx.r11.s64 = 278;
	// lwz r10,25608(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25608);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1112, ctx.r10.u32);
	// blr 
	return;
loc_8335FBD0:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,25608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25608);
	// stw r11,1112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FBE0"))) PPC_WEAK_FUNC(sub_8335FBE0);
PPC_FUNC_IMPL(__imp__sub_8335FBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FC10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335fc10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FC10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FC20"))) PPC_WEAK_FUNC(sub_8335FC20);
PPC_FUNC_IMPL(__imp__sub_8335FC20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FC50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335fc50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FC50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FC60"))) PPC_WEAK_FUNC(sub_8335FC60);
PPC_FUNC_IMPL(__imp__sub_8335FC60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FC90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335fc90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FC90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FCA0"))) PPC_WEAK_FUNC(sub_8335FCA0);
PPC_FUNC_IMPL(__imp__sub_8335FCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FCD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335fcd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FCD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FCE0"))) PPC_WEAK_FUNC(sub_8335FCE0);
PPC_FUNC_IMPL(__imp__sub_8335FCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FD10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335fd10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FD10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FD20"))) PPC_WEAK_FUNC(sub_8335FD20);
PPC_FUNC_IMPL(__imp__sub_8335FD20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FD50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335fd50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FD50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FD60"))) PPC_WEAK_FUNC(sub_8335FD60);
PPC_FUNC_IMPL(__imp__sub_8335FD60) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8335fda0
	if (!ctx.cr6.eq) goto loc_8335FDA0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FD94:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335fd94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FD94;
loc_8335FDA0:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,2192(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2192);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335fdd0
	if (ctx.cr6.eq) goto loc_8335FDD0;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,548
	ctx.r11.s64 = 548;
	// lwz r10,25636(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25636);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,2192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2192, ctx.r10.u32);
	// blr 
	return;
loc_8335FDD0:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,25636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25636);
	// stw r11,2192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2192, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FDE0"))) PPC_WEAK_FUNC(sub_8335FDE0);
PPC_FUNC_IMPL(__imp__sub_8335FDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FE10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335fe10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FE10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FE20"))) PPC_WEAK_FUNC(sub_8335FE20);
PPC_FUNC_IMPL(__imp__sub_8335FE20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8335fe60
	if (!ctx.cr6.eq) goto loc_8335FE60;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FE54:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335fe54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FE54;
loc_8335FE60:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,1108(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1108);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8335fe90
	if (ctx.cr6.eq) goto loc_8335FE90;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,277
	ctx.r11.s64 = 277;
	// lwz r10,25644(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25644);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,1108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1108, ctx.r10.u32);
	// blr 
	return;
loc_8335FE90:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,25644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25644);
	// stw r11,1108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FEA0"))) PPC_WEAK_FUNC(sub_8335FEA0);
PPC_FUNC_IMPL(__imp__sub_8335FEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FED0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335fed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FED0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FEE0"))) PPC_WEAK_FUNC(sub_8335FEE0);
PPC_FUNC_IMPL(__imp__sub_8335FEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FF10:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ff10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FF10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FF20"))) PPC_WEAK_FUNC(sub_8335FF20);
PPC_FUNC_IMPL(__imp__sub_8335FF20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FF50:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ff50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FF50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FF60"))) PPC_WEAK_FUNC(sub_8335FF60);
PPC_FUNC_IMPL(__imp__sub_8335FF60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FF90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ff90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FF90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FFA0"))) PPC_WEAK_FUNC(sub_8335FFA0);
PPC_FUNC_IMPL(__imp__sub_8335FFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8335FFD0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8335ffd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8335FFD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FFE0"))) PPC_WEAK_FUNC(sub_8335FFE0);
PPC_FUNC_IMPL(__imp__sub_8335FFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83360010:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83360010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83360010;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83360020"))) PPC_WEAK_FUNC(sub_83360020);
PPC_FUNC_IMPL(__imp__sub_83360020) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83360050:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83360050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83360050;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83360060"))) PPC_WEAK_FUNC(sub_83360060);
PPC_FUNC_IMPL(__imp__sub_83360060) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83360090:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83360090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83360090;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833600A0"))) PPC_WEAK_FUNC(sub_833600A0);
PPC_FUNC_IMPL(__imp__sub_833600A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31882
	ctx.r10.s64 = -2089418752;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// addi r8,r11,26648
	ctx.r8.s64 = ctx.r11.s64 + 26648;
	// lwz r11,18168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x833600e0
	if (!ctx.cr6.eq) goto loc_833600E0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32194
	ctx.r7.s64 = -2109865984;
	// stw r9,18168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18168, ctx.r9.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r7,-31560
	ctx.r9.s64 = ctx.r7.s64 + -31560;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833600D4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833600d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833600D4;
loc_833600E0:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,15880(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15880);
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83360110
	if (ctx.cr6.eq) goto loc_83360110;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// lis r9,-31883
	ctx.r9.s64 = -2089484288;
	// li r11,3970
	ctx.r11.s64 = 3970;
	// lwz r10,25680(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25680);
	// stw r11,-31468(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31468, ctx.r11.u32);
	// stw r10,15880(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15880, ctx.r10.u32);
	// blr 
	return;
loc_83360110:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r11,25680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25680);
	// stw r11,15880(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15880, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83360120"))) PPC_WEAK_FUNC(sub_83360120);
PPC_FUNC_IMPL(__imp__sub_83360120) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83360150:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83360150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83360150;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83360160"))) PPC_WEAK_FUNC(sub_83360160);
PPC_FUNC_IMPL(__imp__sub_83360160) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83360190:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83360190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83360190;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833601A0"))) PPC_WEAK_FUNC(sub_833601A0);
PPC_FUNC_IMPL(__imp__sub_833601A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833601D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833601d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833601D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833601E0"))) PPC_WEAK_FUNC(sub_833601E0);
PPC_FUNC_IMPL(__imp__sub_833601E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83360210:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83360210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83360210;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83360220"))) PPC_WEAK_FUNC(sub_83360220);
PPC_FUNC_IMPL(__imp__sub_83360220) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83360250:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83360250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83360250;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83360260"))) PPC_WEAK_FUNC(sub_83360260);
PPC_FUNC_IMPL(__imp__sub_83360260) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83360290:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83360290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83360290;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833602A0"))) PPC_WEAK_FUNC(sub_833602A0);
PPC_FUNC_IMPL(__imp__sub_833602A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31882
	ctx.r8.s64 = -2089418752;
	// lwz r11,18168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// stw r10,18168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18168, ctx.r10.u32);
	// addi r9,r9,-31560
	ctx.r9.s64 = ctx.r9.s64 + -31560;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_833602D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x833602d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_833602D0;
	// blr 
	return;
}

