#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83247070"))) PPC_WEAK_FUNC(sub_83247070);
PPC_FUNC_IMPL(__imp__sub_83247070) {
	PPC_FUNC_PROLOGUE();
	// li r4,3566
	ctx.r4.s64 = 3566;
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247078"))) PPC_WEAK_FUNC(sub_83247078);
PPC_FUNC_IMPL(__imp__sub_83247078) {
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
	// lwz r11,780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832470ac
	if (ctx.cr6.eq) goto loc_832470AC;
	// bl 0x83246fd8
	ctx.lr = 0x8324709C;
	sub_83246FD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3567
	ctx.r4.s64 = 3567;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204d78
	ctx.lr = 0x832470AC;
	sub_83204D78(ctx, base);
loc_832470AC:
	// bl 0x83246fd8
	ctx.lr = 0x832470B0;
	sub_83246FD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3568
	ctx.r4.s64 = 3568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204d78
	ctx.lr = 0x832470C0;
	sub_83204D78(ctx, base);
}

__attribute__((alias("__imp__sub_832470C0"))) PPC_WEAK_FUNC(sub_832470C0);
PPC_FUNC_IMPL(__imp__sub_832470C0) {
	PPC_FUNC_PROLOGUE();
	// li r4,3569
	ctx.r4.s64 = 3569;
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832470C8"))) PPC_WEAK_FUNC(sub_832470C8);
PPC_FUNC_IMPL(__imp__sub_832470C8) {
	PPC_FUNC_PROLOGUE();
	// li r4,3570
	ctx.r4.s64 = 3570;
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832470D0"))) PPC_WEAK_FUNC(sub_832470D0);
PPC_FUNC_IMPL(__imp__sub_832470D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832470D8"))) PPC_WEAK_FUNC(sub_832470D8);
PPC_FUNC_IMPL(__imp__sub_832470D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832470E0"))) PPC_WEAK_FUNC(sub_832470E0);
PPC_FUNC_IMPL(__imp__sub_832470E0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832470E8"))) PPC_WEAK_FUNC(sub_832470E8);
PPC_FUNC_IMPL(__imp__sub_832470E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832470F8"))) PPC_WEAK_FUNC(sub_832470F8);
PPC_FUNC_IMPL(__imp__sub_832470F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247100"))) PPC_WEAK_FUNC(sub_83247100);
PPC_FUNC_IMPL(__imp__sub_83247100) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324710C"))) PPC_WEAK_FUNC(sub_8324710C);
PPC_FUNC_IMPL(__imp__sub_8324710C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247110"))) PPC_WEAK_FUNC(sub_83247110);
PPC_FUNC_IMPL(__imp__sub_83247110) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247118"))) PPC_WEAK_FUNC(sub_83247118);
PPC_FUNC_IMPL(__imp__sub_83247118) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247124"))) PPC_WEAK_FUNC(sub_83247124);
PPC_FUNC_IMPL(__imp__sub_83247124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247128"))) PPC_WEAK_FUNC(sub_83247128);
PPC_FUNC_IMPL(__imp__sub_83247128) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247134"))) PPC_WEAK_FUNC(sub_83247134);
PPC_FUNC_IMPL(__imp__sub_83247134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247138"))) PPC_WEAK_FUNC(sub_83247138);
PPC_FUNC_IMPL(__imp__sub_83247138) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247144"))) PPC_WEAK_FUNC(sub_83247144);
PPC_FUNC_IMPL(__imp__sub_83247144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247148"))) PPC_WEAK_FUNC(sub_83247148);
PPC_FUNC_IMPL(__imp__sub_83247148) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247150"))) PPC_WEAK_FUNC(sub_83247150);
PPC_FUNC_IMPL(__imp__sub_83247150) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83247178
	if (!ctx.cr6.eq) goto loc_83247178;
	// bl 0x832b8320
	ctx.lr = 0x8324716C;
	sub_832B8320(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8324717c
	if (ctx.cr0.eq) goto loc_8324717C;
loc_83247178:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324717C:
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

__attribute__((alias("__imp__sub_83247190"))) PPC_WEAK_FUNC(sub_83247190);
PPC_FUNC_IMPL(__imp__sub_83247190) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwimi r11,r5,4,14,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0x3FFF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFC000F);
	// rlwimi r11,r6,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// bne cr6,0x832471b8
	if (!ctx.cr6.eq) goto loc_832471B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r11,r9,18,12,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 18) & 0xC0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF3FFFF);
	// b 0x83247204
	goto loc_83247204;
loc_832471B8:
	// ble cr6,0x832471c8
	if (!ctx.cr6.gt) goto loc_832471C8;
	// cmpwi cr6,r7,9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 9, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// ble cr6,0x832471cc
	if (!ctx.cr6.gt) goto loc_832471CC;
loc_832471C8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_832471CC:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83247208
	if (ctx.cr0.eq) goto loc_83247208;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x832471e8
	if (ctx.cr6.lt) goto loc_832471E8;
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// ble cr6,0x832471ec
	if (!ctx.cr6.gt) goto loc_832471EC;
loc_832471E8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_832471EC:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83247200
	if (ctx.cr0.eq) goto loc_83247200;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r11,r9,19,12,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 19) & 0xC0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF3FFFF);
	// b 0x83247204
	goto loc_83247204;
loc_83247200:
	// oris r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 | 786432;
loc_83247204:
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_83247208:
	// rlwinm r11,r8,11,13,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x7F800;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// clrlwi r8,r7,26
	ctx.r8.u64 = ctx.r7.u32 & 0x3F;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r9,0,12,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0FFFFF;
	// rlwinm r11,r11,20,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247230"))) PPC_WEAK_FUNC(sub_83247230);
PPC_FUNC_IMPL(__imp__sub_83247230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83247238;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// bgt cr6,0x832472c4
	if (ctx.cr6.gt) goto loc_832472C4;
	// beq cr6,0x83247288
	if (ctx.cr6.eq) goto loc_83247288;
	// cmpwi cr6,r11,66
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 66, ctx.xer);
	// beq cr6,0x83247288
	if (ctx.cr6.eq) goto loc_83247288;
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// beq cr6,0x832473ec
	if (ctx.cr6.eq) goto loc_832473EC;
	// cmpwi cr6,r11,73
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 73, ctx.xer);
	// beq cr6,0x832473ac
	if (ctx.cr6.eq) goto loc_832473AC;
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// beq cr6,0x8324734c
	if (ctx.cr6.eq) goto loc_8324734C;
	// cmpwi cr6,r11,86
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 86, ctx.xer);
	// b 0x832472e0
	goto loc_832472E0;
loc_83247288:
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// beq cr6,0x832472a4
	if (ctx.cr6.eq) goto loc_832472A4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x832472a4
	if (ctx.cr6.eq) goto loc_832472A4;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// li r4,4509
	ctx.r4.s64 = 4509;
	// bl 0x83204d78
	ctx.lr = 0x832472A4;
	sub_83204D78(ctx, base);
loc_832472A4:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,2,24,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x80;
	// b 0x83247410
	goto loc_83247410;
loc_832472C4:
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x832473ec
	if (ctx.cr6.eq) goto loc_832473EC;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x832473ac
	if (ctx.cr6.eq) goto loc_832473AC;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x8324734c
	if (ctx.cr6.eq) goto loc_8324734C;
	// cmpwi cr6,r11,118
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 118, ctx.xer);
loc_832472E0:
	// beq cr6,0x83247304
	if (ctx.cr6.eq) goto loc_83247304;
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// beq cr6,0x832472f8
	if (ctx.cr6.eq) goto loc_832472F8;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// li r4,4509
	ctx.r4.s64 = 4509;
	// bl 0x83204d78
	ctx.lr = 0x832472F8;
	sub_83204D78(ctx, base);
loc_832472F8:
	// li r31,256
	ctx.r31.s64 = 256;
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x83247414
	goto loc_83247414;
loc_83247304:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x83247340
	if (!ctx.cr6.eq) goto loc_83247340;
	// lbz r10,1(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,102
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 102, ctx.xer);
	// beq cr6,0x83247328
	if (ctx.cr6.eq) goto loc_83247328;
	// cmpwi cr6,r10,70
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 70, ctx.xer);
	// bne cr6,0x83247340
	if (!ctx.cr6.eq) goto loc_83247340;
loc_83247328:
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// li r30,96
	ctx.r30.s64 = 96;
	// b 0x83247414
	goto loc_83247414;
loc_83247340:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// li r4,4509
	ctx.r4.s64 = 4509;
	// bl 0x83204d78
	ctx.lr = 0x8324734C;
	sub_83204D78(ctx, base);
loc_8324734C:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x83247360
	if (ctx.cr6.eq) goto loc_83247360;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// li r4,4509
	ctx.r4.s64 = 4509;
	// bl 0x83204d78
	ctx.lr = 0x83247360;
	sub_83204D78(ctx, base);
loc_83247360:
	// lwz r11,780(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83247374
	if (ctx.cr6.eq) goto loc_83247374;
	// lwz r31,776(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 776);
	// b 0x832473a4
	goto loc_832473A4;
loc_83247374:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83247388
	if (ctx.cr0.eq) goto loc_83247388;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832473a4
	goto loc_832473A4;
loc_83247388:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x10;
	// xori r31,r11,16
	ctx.r31.u64 = ctx.r11.u64 ^ 16;
loc_832473A4:
	// li r30,32
	ctx.r30.s64 = 32;
	// b 0x83247414
	goto loc_83247414;
loc_832473AC:
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// beq cr6,0x832473c8
	if (ctx.cr6.eq) goto loc_832473C8;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x832473c8
	if (ctx.cr6.eq) goto loc_832473C8;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// li r4,4509
	ctx.r4.s64 = 4509;
	// bl 0x83204d78
	ctx.lr = 0x832473C8;
	sub_83204D78(ctx, base);
loc_832473C8:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// li r29,1
	ctx.r29.s64 = 1;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// li r30,32
	ctx.r30.s64 = 32;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,31,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x10;
	// b 0x83247414
	goto loc_83247414;
loc_832473EC:
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// beq cr6,0x83247408
	if (ctx.cr6.eq) goto loc_83247408;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x83247408
	if (ctx.cr6.eq) goto loc_83247408;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// li r4,4509
	ctx.r4.s64 = 4509;
	// bl 0x83204d78
	ctx.lr = 0x83247408;
	sub_83204D78(ctx, base);
loc_83247408:
	// li r29,2
	ctx.r29.s64 = 2;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83247410:
	// li r30,256
	ctx.r30.s64 = 256;
loc_83247414:
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// bl 0x82cc3000
	ctx.lr = 0x83247424;
	sub_82CC3000(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83247438
	if (ctx.cr6.eq) goto loc_83247438;
	// li r31,256
	ctx.r31.s64 = 256;
loc_83247438:
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x83247448
	if (ctx.cr6.lt) goto loc_83247448;
	// li r31,256
	ctx.r31.s64 = 256;
loc_83247448:
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x83247458
	if (!ctx.cr6.gt) goto loc_83247458;
	// li r11,256
	ctx.r11.s64 = 256;
loc_83247458:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247468"))) PPC_WEAK_FUNC(sub_83247468);
PPC_FUNC_IMPL(__imp__sub_83247468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r10,r10,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247488"))) PPC_WEAK_FUNC(sub_83247488);
PPC_FUNC_IMPL(__imp__sub_83247488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324748C"))) PPC_WEAK_FUNC(sub_8324748C);
PPC_FUNC_IMPL(__imp__sub_8324748C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247490"))) PPC_WEAK_FUNC(sub_83247490);
PPC_FUNC_IMPL(__imp__sub_83247490) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247494"))) PPC_WEAK_FUNC(sub_83247494);
PPC_FUNC_IMPL(__imp__sub_83247494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247498"))) PPC_WEAK_FUNC(sub_83247498);
PPC_FUNC_IMPL(__imp__sub_83247498) {
	PPC_FUNC_PROLOGUE();
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cb16f0
	sub_82CB16F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832474A4"))) PPC_WEAK_FUNC(sub_832474A4);
PPC_FUNC_IMPL(__imp__sub_832474A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832474A8"))) PPC_WEAK_FUNC(sub_832474A8);
PPC_FUNC_IMPL(__imp__sub_832474A8) {
	PPC_FUNC_PROLOGUE();
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// rlwinm r11,r4,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// sld r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// bge cr6,0x832474ec
	if (!ctx.cr6.lt) goto loc_832474EC;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_832474C8:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x832474f4
	if (!ctx.cr6.eq) goto loc_832474F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x832474c8
	if (ctx.cr6.lt) goto loc_832474C8;
loc_832474EC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_832474F4:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// cntlzd r10,r10
	ctx.r10.u64 = ctx.r10.u64 == 0 ? 64 : __builtin_clzll(ctx.r10.u64);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r11,63
	ctx.r3.s64 = ctx.r11.s64 + 63;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247510"))) PPC_WEAK_FUNC(sub_83247510);
PPC_FUNC_IMPL(__imp__sub_83247510) {
	PPC_FUNC_PROLOGUE();
	// li r5,128
	ctx.r5.s64 = 128;
	// b 0x82cb1160
	sub_82CB1160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83247518"))) PPC_WEAK_FUNC(sub_83247518);
PPC_FUNC_IMPL(__imp__sub_83247518) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247520"))) PPC_WEAK_FUNC(sub_83247520);
PPC_FUNC_IMPL(__imp__sub_83247520) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247528"))) PPC_WEAK_FUNC(sub_83247528);
PPC_FUNC_IMPL(__imp__sub_83247528) {
	PPC_FUNC_PROLOGUE();
	// li r3,1024
	ctx.r3.s64 = 1024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247530"))) PPC_WEAK_FUNC(sub_83247530);
PPC_FUNC_IMPL(__imp__sub_83247530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247534"))) PPC_WEAK_FUNC(sub_83247534);
PPC_FUNC_IMPL(__imp__sub_83247534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247538"))) PPC_WEAK_FUNC(sub_83247538);
PPC_FUNC_IMPL(__imp__sub_83247538) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247540"))) PPC_WEAK_FUNC(sub_83247540);
PPC_FUNC_IMPL(__imp__sub_83247540) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247548"))) PPC_WEAK_FUNC(sub_83247548);
PPC_FUNC_IMPL(__imp__sub_83247548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324754C"))) PPC_WEAK_FUNC(sub_8324754C);
PPC_FUNC_IMPL(__imp__sub_8324754C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247550"))) PPC_WEAK_FUNC(sub_83247550);
PPC_FUNC_IMPL(__imp__sub_83247550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247554"))) PPC_WEAK_FUNC(sub_83247554);
PPC_FUNC_IMPL(__imp__sub_83247554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247558"))) PPC_WEAK_FUNC(sub_83247558);
PPC_FUNC_IMPL(__imp__sub_83247558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324755C"))) PPC_WEAK_FUNC(sub_8324755C);
PPC_FUNC_IMPL(__imp__sub_8324755C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247560"))) PPC_WEAK_FUNC(sub_83247560);
PPC_FUNC_IMPL(__imp__sub_83247560) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247568"))) PPC_WEAK_FUNC(sub_83247568);
PPC_FUNC_IMPL(__imp__sub_83247568) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247570"))) PPC_WEAK_FUNC(sub_83247570);
PPC_FUNC_IMPL(__imp__sub_83247570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247574"))) PPC_WEAK_FUNC(sub_83247574);
PPC_FUNC_IMPL(__imp__sub_83247574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247578"))) PPC_WEAK_FUNC(sub_83247578);
PPC_FUNC_IMPL(__imp__sub_83247578) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r4,26
	ctx.r3.u64 = ctx.r4.u32 & 0x3F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247580"))) PPC_WEAK_FUNC(sub_83247580);
PPC_FUNC_IMPL(__imp__sub_83247580) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324758C"))) PPC_WEAK_FUNC(sub_8324758C);
PPC_FUNC_IMPL(__imp__sub_8324758C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247590"))) PPC_WEAK_FUNC(sub_83247590);
PPC_FUNC_IMPL(__imp__sub_83247590) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324759C"))) PPC_WEAK_FUNC(sub_8324759C);
PPC_FUNC_IMPL(__imp__sub_8324759C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832475A0"))) PPC_WEAK_FUNC(sub_832475A0);
PPC_FUNC_IMPL(__imp__sub_832475A0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r4,26,6,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832475A8"))) PPC_WEAK_FUNC(sub_832475A8);
PPC_FUNC_IMPL(__imp__sub_832475A8) {
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
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x832474a8
	ctx.lr = 0x832475C0;
	sub_832474A8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832475d0
	if (!ctx.cr6.eq) goto loc_832475D0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832475d4
	goto loc_832475D4;
loc_832475D0:
	// rlwinm r3,r3,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
loc_832475D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832475E4"))) PPC_WEAK_FUNC(sub_832475E4);
PPC_FUNC_IMPL(__imp__sub_832475E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832475E8"))) PPC_WEAK_FUNC(sub_832475E8);
PPC_FUNC_IMPL(__imp__sub_832475E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832475F0"))) PPC_WEAK_FUNC(sub_832475F0);
PPC_FUNC_IMPL(__imp__sub_832475F0) {
	PPC_FUNC_PROLOGUE();
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// rlwinm r11,r4,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// sld r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// bge cr6,0x83247634
	if (!ctx.cr6.lt) goto loc_83247634;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_83247610:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// andc r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x8324763c
	if (!ctx.cr6.eq) goto loc_8324763C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x83247610
	if (ctx.cr6.lt) goto loc_83247610;
loc_83247634:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8324763C:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// cntlzd r10,r10
	ctx.r10.u64 = ctx.r10.u64 == 0 ? 64 : __builtin_clzll(ctx.r10.u64);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r11,63
	ctx.r3.s64 = ctx.r11.s64 + 63;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247658"))) PPC_WEAK_FUNC(sub_83247658);
PPC_FUNC_IMPL(__imp__sub_83247658) {
	PPC_FUNC_PROLOGUE();
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// rlwinm r11,r4,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// sld r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// bge cr6,0x8324769c
	if (!ctx.cr6.lt) goto loc_8324769C;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_83247678:
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x832476a4
	if (!ctx.cr6.eq) goto loc_832476A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x83247678
	if (ctx.cr6.lt) goto loc_83247678;
loc_8324769C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_832476A4:
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// andc r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// cntlzd r11,r11
	ctx.r11.u64 = ctx.r11.u64 == 0 ? 64 : __builtin_clzll(ctx.r11.u64);
	// subfic r11,r11,63
	ctx.xer.ca = ctx.r11.u32 <= 63;
	ctx.r11.s64 = 63 - ctx.r11.s64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srd r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r10.u8 & 0x7F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832476D0"))) PPC_WEAK_FUNC(sub_832476D0);
PPC_FUNC_IMPL(__imp__sub_832476D0) {
	PPC_FUNC_PROLOGUE();
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm. r11,r4,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sld r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// blt 0x83247710
	if (ctx.cr0.lt) goto loc_83247710;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_832476F0:
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// andc r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x83247718
	if (!ctx.cr6.eq) goto loc_83247718;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// bge 0x832476f0
	if (!ctx.cr0.lt) goto loc_832476F0;
loc_83247710:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83247718:
	// cntlzd r8,r8
	ctx.r8.u64 = ctx.r8.u64 == 0 ? 64 : __builtin_clzll(ctx.r8.u64);
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// subfic r11,r8,63
	ctx.xer.ca = ctx.r8.u32 <= 63;
	ctx.r11.s64 = 63 - ctx.r8.s64;
	// rlwinm r8,r11,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srd r11,r9,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r8.u8 & 0x7F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324773C"))) PPC_WEAK_FUNC(sub_8324773C);
PPC_FUNC_IMPL(__imp__sub_8324773C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247740"))) PPC_WEAK_FUNC(sub_83247740);
PPC_FUNC_IMPL(__imp__sub_83247740) {
	PPC_FUNC_PROLOGUE();
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// rlwinm r11,r4,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// sld r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// bge cr6,0x83247784
	if (!ctx.cr6.lt) goto loc_83247784;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_83247760:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// andc r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x8324778c
	if (!ctx.cr6.eq) goto loc_8324778C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x83247760
	if (ctx.cr6.lt) goto loc_83247760;
loc_83247784:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8324778C:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// cntlzd r10,r10
	ctx.r10.u64 = ctx.r10.u64 == 0 ? 64 : __builtin_clzll(ctx.r10.u64);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r11,63
	ctx.r3.s64 = ctx.r11.s64 + 63;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832477A8"))) PPC_WEAK_FUNC(sub_832477A8);
PPC_FUNC_IMPL(__imp__sub_832477A8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// slw r8,r3,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_832477CC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// andc. r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x832477f0
	if (!ctx.cr0.eq) goto loc_832477F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832477cc
	if (ctx.cr6.lt) goto loc_832477CC;
	// blr 
	return;
loc_832477F0:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r11,31
	ctx.r3.s64 = ctx.r11.s64 + 31;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324780C"))) PPC_WEAK_FUNC(sub_8324780C);
PPC_FUNC_IMPL(__imp__sub_8324780C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247810"))) PPC_WEAK_FUNC(sub_83247810);
PPC_FUNC_IMPL(__imp__sub_83247810) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_83247834:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// andc. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83247858
	if (!ctx.cr0.eq) goto loc_83247858;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83247834
	if (ctx.cr6.lt) goto loc_83247834;
	// blr 
	return;
loc_83247858:
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// andc r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srw r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247884"))) PPC_WEAK_FUNC(sub_83247884);
PPC_FUNC_IMPL(__imp__sub_83247884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247888"))) PPC_WEAK_FUNC(sub_83247888);
PPC_FUNC_IMPL(__imp__sub_83247888) {
	PPC_FUNC_PROLOGUE();
	// li r8,2
	ctx.r8.s64 = 2;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm. r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// bltlr 
	if (ctx.cr0.lt) return;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_832478B0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// andc. r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x832478d0
	if (!ctx.cr0.eq) goto loc_832478D0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x832478b0
	if (!ctx.cr0.lt) goto loc_832478B0;
	// blr 
	return;
loc_832478D0:
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subfic r11,r8,31
	ctx.xer.ca = ctx.r8.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r8.s64;
	// rlwinm r8,r11,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srw r11,r9,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832478F4"))) PPC_WEAK_FUNC(sub_832478F4);
PPC_FUNC_IMPL(__imp__sub_832478F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832478F8"))) PPC_WEAK_FUNC(sub_832478F8);
PPC_FUNC_IMPL(__imp__sub_832478F8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x83247924;
	sub_8321CE60(ctx, base);
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r3,r11,17,18,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FFF;
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

__attribute__((alias("__imp__sub_83247944"))) PPC_WEAK_FUNC(sub_83247944);
PPC_FUNC_IMPL(__imp__sub_83247944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247948"))) PPC_WEAK_FUNC(sub_83247948);
PPC_FUNC_IMPL(__imp__sub_83247948) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x83247974;
	sub_8321CE60(ctx, base);
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r11,r10,21,14,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0x3FFF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFC000F);
	// clrlwi r3,r11,14
	ctx.r3.u64 = ctx.r11.u32 & 0x3FFFF;
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

__attribute__((alias("__imp__sub_832479A0"))) PPC_WEAK_FUNC(sub_832479A0);
PPC_FUNC_IMPL(__imp__sub_832479A0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82cb16f0
	sub_82CB16F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832479B4"))) PPC_WEAK_FUNC(sub_832479B4);
PPC_FUNC_IMPL(__imp__sub_832479B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832479B8"))) PPC_WEAK_FUNC(sub_832479B8);
PPC_FUNC_IMPL(__imp__sub_832479B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x832474a8
	sub_832474A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832479C0"))) PPC_WEAK_FUNC(sub_832479C0);
PPC_FUNC_IMPL(__imp__sub_832479C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// li r5,128
	ctx.r5.s64 = 128;
	// b 0x82cb1160
	sub_82CB1160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832479D0"))) PPC_WEAK_FUNC(sub_832479D0);
PPC_FUNC_IMPL(__imp__sub_832479D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832479E0"))) PPC_WEAK_FUNC(sub_832479E0);
PPC_FUNC_IMPL(__imp__sub_832479E0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832479FC"))) PPC_WEAK_FUNC(sub_832479FC);
PPC_FUNC_IMPL(__imp__sub_832479FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247A00"))) PPC_WEAK_FUNC(sub_83247A00);
PPC_FUNC_IMPL(__imp__sub_83247A00) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247A10"))) PPC_WEAK_FUNC(sub_83247A10);
PPC_FUNC_IMPL(__imp__sub_83247A10) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247A28"))) PPC_WEAK_FUNC(sub_83247A28);
PPC_FUNC_IMPL(__imp__sub_83247A28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1024
	ctx.r3.s64 = 1024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247A30"))) PPC_WEAK_FUNC(sub_83247A30);
PPC_FUNC_IMPL(__imp__sub_83247A30) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247A3C"))) PPC_WEAK_FUNC(sub_83247A3C);
PPC_FUNC_IMPL(__imp__sub_83247A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247A40"))) PPC_WEAK_FUNC(sub_83247A40);
PPC_FUNC_IMPL(__imp__sub_83247A40) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247A48"))) PPC_WEAK_FUNC(sub_83247A48);
PPC_FUNC_IMPL(__imp__sub_83247A48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247A54"))) PPC_WEAK_FUNC(sub_83247A54);
PPC_FUNC_IMPL(__imp__sub_83247A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247A58"))) PPC_WEAK_FUNC(sub_83247A58);
PPC_FUNC_IMPL(__imp__sub_83247A58) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247A64"))) PPC_WEAK_FUNC(sub_83247A64);
PPC_FUNC_IMPL(__imp__sub_83247A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247A68"))) PPC_WEAK_FUNC(sub_83247A68);
PPC_FUNC_IMPL(__imp__sub_83247A68) {
	PPC_FUNC_PROLOGUE();
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247A70"))) PPC_WEAK_FUNC(sub_83247A70);
PPC_FUNC_IMPL(__imp__sub_83247A70) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247A7C"))) PPC_WEAK_FUNC(sub_83247A7C);
PPC_FUNC_IMPL(__imp__sub_83247A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247A80"))) PPC_WEAK_FUNC(sub_83247A80);
PPC_FUNC_IMPL(__imp__sub_83247A80) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r8,r3,1
	ctx.r8.u64 = ctx.r3.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247AAC"))) PPC_WEAK_FUNC(sub_83247AAC);
PPC_FUNC_IMPL(__imp__sub_83247AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247AB0"))) PPC_WEAK_FUNC(sub_83247AB0);
PPC_FUNC_IMPL(__imp__sub_83247AB0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247ABC"))) PPC_WEAK_FUNC(sub_83247ABC);
PPC_FUNC_IMPL(__imp__sub_83247ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247AC0"))) PPC_WEAK_FUNC(sub_83247AC0);
PPC_FUNC_IMPL(__imp__sub_83247AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83247AC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_83247ADC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// ble cr6,0x83247af4
	if (!ctx.cr6.gt) goto loc_83247AF4;
	// bl 0x83247658
	ctx.lr = 0x83247AF0;
	sub_83247658(ctx, base);
	// b 0x83247afc
	goto loc_83247AFC;
loc_83247AF4:
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// bl 0x832476d0
	ctx.lr = 0x83247AFC;
	sub_832476D0(ctx, base);
loc_83247AFC:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83247b50
	if (ctx.cr6.eq) goto loc_83247B50;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// beq cr6,0x83247b5c
	if (ctx.cr6.eq) goto loc_83247B5C;
	// lis r10,-27863
	ctx.r10.s64 = -1826029568;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,1186
	ctx.r9.s64 = 1186;
	// ori r10,r10,13532
	ctx.r10.u64 = ctx.r10.u64 | 13532;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x83247b6c
	if (!ctx.cr6.lt) goto loc_83247B6C;
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// ble cr6,0x83247adc
	if (!ctx.cr6.gt) goto loc_83247ADC;
loc_83247B50:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83247B54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83247B5C:
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x83247b70
	goto loc_83247B70;
loc_83247B6C:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
loc_83247B70:
	// rlwimi r11,r3,2,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 2) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83247b54
	goto loc_83247B54;
}

__attribute__((alias("__imp__sub_83247B7C"))) PPC_WEAK_FUNC(sub_83247B7C);
PPC_FUNC_IMPL(__imp__sub_83247B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247B80"))) PPC_WEAK_FUNC(sub_83247B80);
PPC_FUNC_IMPL(__imp__sub_83247B80) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r9,r5,27
	ctx.r9.u64 = ctx.r5.u32 & 0x1F;
	// li r8,2
	ctx.r8.s64 = 2;
	// rlwinm r10,r5,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r6,r5,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r7,r4,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r4,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r5,r4,27
	ctx.r5.u64 = ctx.r4.u32 & 0x1F;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// li r4,-1
	ctx.r4.s64 = -1;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// slw r10,r4,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r5.u8 & 0x3F));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x83247bd0
	if (!ctx.cr6.eq) goto loc_83247BD0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// b 0x83247c04
	goto loc_83247C04;
loc_83247BD0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and. r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83247bf0
	if (ctx.cr0.eq) goto loc_83247BF0;
loc_83247BDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83247BE4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83247bdc
	if (!ctx.cr6.eq) goto loc_83247BDC;
loc_83247BF0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83247be4
	if (ctx.cr6.lt) goto loc_83247BE4;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_83247C04:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247C14"))) PPC_WEAK_FUNC(sub_83247C14);
PPC_FUNC_IMPL(__imp__sub_83247C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247C18"))) PPC_WEAK_FUNC(sub_83247C18);
PPC_FUNC_IMPL(__imp__sub_83247C18) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// clrlwi r9,r5,27
	ctx.r9.u64 = ctx.r5.u32 & 0x1F;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r8,-1
	ctx.r8.s64 = -1;
	// slw r7,r7,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r31,r4,27,5,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r4,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r30,r5,27,5,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r10,r5,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r6,r4,27
	ctx.r6.u64 = ctx.r4.u32 & 0x1F;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// slw r6,r8,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83247c70
	if (!ctx.cr6.eq) goto loc_83247C70;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 & ctx.r6.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x83247cb8
	goto loc_83247CB8;
loc_83247C70:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// bge cr6,0x83247cac
	if (!ctx.cr6.lt) goto loc_83247CAC;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83247cac
	if (ctx.cr0.eq) goto loc_83247CAC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83247CA0:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83247ca0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83247CA0;
loc_83247CAC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_83247CB8:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247CC4"))) PPC_WEAK_FUNC(sub_83247CC4);
PPC_FUNC_IMPL(__imp__sub_83247CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247CC8"))) PPC_WEAK_FUNC(sub_83247CC8);
PPC_FUNC_IMPL(__imp__sub_83247CC8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247CE4"))) PPC_WEAK_FUNC(sub_83247CE4);
PPC_FUNC_IMPL(__imp__sub_83247CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247CE8"))) PPC_WEAK_FUNC(sub_83247CE8);
PPC_FUNC_IMPL(__imp__sub_83247CE8) {
	PPC_FUNC_PROLOGUE();
	// clrldi r9,r5,58
	ctx.r9.u64 = ctx.r5.u64 & 0x3F;
	// li r8,2
	ctx.r8.s64 = 2;
	// rlwinm r10,r5,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFF8;
	// rlwinm r6,r5,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r7,r4,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r11,r4,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r5,r4,58
	ctx.r5.u64 = ctx.r4.u64 & 0x3F;
	// sld r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// li r4,-1
	ctx.r4.s64 = -1;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// sld r10,r4,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r4.u64 << (ctx.r5.u8 & 0x7F));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x83247d48
	if (!ctx.cr6.eq) goto loc_83247D48;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83247d40
	if (!ctx.cr6.eq) goto loc_83247D40;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83247D40:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_83247D48:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// b 0x83247d60
	goto loc_83247D60;
loc_83247D54:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83247D5C:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
loc_83247D60:
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x83247d54
	if (!ctx.cr6.eq) goto loc_83247D54;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83247d5c
	if (ctx.cr6.lt) goto loc_83247D5C;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247D90"))) PPC_WEAK_FUNC(sub_83247D90);
PPC_FUNC_IMPL(__imp__sub_83247D90) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r8,2
	ctx.r8.s64 = 2;
	// clrldi r11,r5,58
	ctx.r11.u64 = ctx.r5.u64 & 0x3F;
	// rlwinm r7,r4,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// sld r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r11.u8 & 0x7F));
	// rlwinm r10,r4,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// rlwinm r6,r5,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r9,r5,29,3,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r8,r4,58
	ctx.r8.u64 = ctx.r4.u64 & 0x3F;
	// li r31,-1
	ctx.r31.s64 = -1;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sld r8,r31,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r31.u64 << (ctx.r8.u8 & 0x7F));
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x83247dd8
	if (!ctx.cr6.eq) goto loc_83247DD8;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_83247DD8:
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x83247dfc
	if (ctx.cr6.eq) goto loc_83247DFC;
	// rlwinm r10,r5,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFC0;
loc_83247DEC:
	// cntlzd r11,r11
	ctx.r11.u64 = ctx.r11.u64 == 0 ? 64 : __builtin_clzll(ctx.r11.u64);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_83247DF4:
	// addi r3,r11,63
	ctx.r3.s64 = ctx.r11.s64 + 63;
	// b 0x83247e58
	goto loc_83247E58;
loc_83247DFC:
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// b 0x83247e14
	goto loc_83247E14;
loc_83247E04:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x83247e34
	if (!ctx.cr6.eq) goto loc_83247E34;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_83247E14:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83247e04
	if (ctx.cr6.gt) goto loc_83247E04;
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x83247e54
	if (ctx.cr6.eq) goto loc_83247E54;
	// rlwinm r10,r4,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFC0;
	// b 0x83247dec
	goto loc_83247DEC;
loc_83247E34:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r10,r4,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFC0;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cntlzd r9,r9
	ctx.r9.u64 = ctx.r9.u64 == 0 ? 64 : __builtin_clzll(ctx.r9.u64);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// b 0x83247df4
	goto loc_83247DF4;
loc_83247E54:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83247E58:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247E60"))) PPC_WEAK_FUNC(sub_83247E60);
PPC_FUNC_IMPL(__imp__sub_83247E60) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// clrldi r9,r5,58
	ctx.r9.u64 = ctx.r5.u64 & 0x3F;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r6,-1
	ctx.r6.s64 = -1;
	// clrldi r7,r4,58
	ctx.r7.u64 = ctx.r4.u64 & 0x3F;
	// sld r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// rlwinm r31,r4,26,6,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r11,r4,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// rlwinm r30,r5,26,6,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r5,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFF8;
	// sld r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r7.u8 & 0x7F));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83247eb8
	if (!ctx.cr6.eq) goto loc_83247EB8;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// and r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 & ctx.r7.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// b 0x83247f04
	goto loc_83247F04;
loc_83247EB8:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// bge cr6,0x83247ef8
	if (!ctx.cr6.lt) goto loc_83247EF8;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83247ef8
	if (ctx.cr0.eq) goto loc_83247EF8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83247EEC:
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x83247eec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83247EEC;
loc_83247EF8:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
loc_83247F04:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247F10"))) PPC_WEAK_FUNC(sub_83247F10);
PPC_FUNC_IMPL(__imp__sub_83247F10) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// sld r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247F2C"))) PPC_WEAK_FUNC(sub_83247F2C);
PPC_FUNC_IMPL(__imp__sub_83247F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247F30"))) PPC_WEAK_FUNC(sub_83247F30);
PPC_FUNC_IMPL(__imp__sub_83247F30) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// sld r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stdx r10,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247F4C"))) PPC_WEAK_FUNC(sub_83247F4C);
PPC_FUNC_IMPL(__imp__sub_83247F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83247F50"))) PPC_WEAK_FUNC(sub_83247F50);
PPC_FUNC_IMPL(__imp__sub_83247F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83247F58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
loc_83247F68:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// ble cr6,0x83247f80
	if (!ctx.cr6.gt) goto loc_83247F80;
	// bl 0x83247810
	ctx.lr = 0x83247F7C;
	sub_83247810(ctx, base);
	// b 0x83247f84
	goto loc_83247F84;
loc_83247F80:
	// bl 0x83247888
	ctx.lr = 0x83247F84;
	sub_83247888(ctx, base);
loc_83247F84:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83247fd4
	if (ctx.cr6.eq) goto loc_83247FD4;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// beq cr6,0x83247fe0
	if (ctx.cr6.eq) goto loc_83247FE0;
	// lis r10,-27863
	ctx.r10.s64 = -1826029568;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,1186
	ctx.r9.s64 = 1186;
	// ori r10,r10,13532
	ctx.r10.u64 = ctx.r10.u64 | 13532;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x83247fec
	if (!ctx.cr6.lt) goto loc_83247FEC;
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// ble cr6,0x83247f68
	if (!ctx.cr6.gt) goto loc_83247F68;
loc_83247FD4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83247FD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_83247FE0:
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// b 0x83247fd8
	goto loc_83247FD8;
loc_83247FEC:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x83247fd8
	goto loc_83247FD8;
}

__attribute__((alias("__imp__sub_83248000"))) PPC_WEAK_FUNC(sub_83248000);
PPC_FUNC_IMPL(__imp__sub_83248000) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r8,2
	ctx.r8.s64 = 2;
	// clrldi r11,r5,58
	ctx.r11.u64 = ctx.r5.u64 & 0x3F;
	// rlwinm r7,r4,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// sld r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r11.u8 & 0x7F));
	// rlwinm r10,r4,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// rlwinm r6,r5,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r9,r5,29,3,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r8,r4,58
	ctx.r8.u64 = ctx.r4.u64 & 0x3F;
	// li r31,-1
	ctx.r31.s64 = -1;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sld r8,r31,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r31.u64 << (ctx.r8.u8 & 0x7F));
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x83248048
	if (!ctx.cr6.eq) goto loc_83248048;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_83248048:
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8324806c
	if (ctx.cr6.eq) goto loc_8324806C;
	// rlwinm r10,r5,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFC0;
loc_8324805C:
	// cntlzd r11,r11
	ctx.r11.u64 = ctx.r11.u64 == 0 ? 64 : __builtin_clzll(ctx.r11.u64);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_83248064:
	// addi r3,r11,63
	ctx.r3.s64 = ctx.r11.s64 + 63;
	// b 0x832480c8
	goto loc_832480C8;
loc_8324806C:
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// b 0x83248084
	goto loc_83248084;
loc_83248074:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x832480a4
	if (!ctx.cr6.eq) goto loc_832480A4;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_83248084:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83248074
	if (ctx.cr6.gt) goto loc_83248074;
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x832480c4
	if (ctx.cr6.eq) goto loc_832480C4;
	// rlwinm r10,r4,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFC0;
	// b 0x8324805c
	goto loc_8324805C;
loc_832480A4:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r10,r4,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFC0;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cntlzd r9,r9
	ctx.r9.u64 = ctx.r9.u64 == 0 ? 64 : __builtin_clzll(ctx.r9.u64);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// b 0x83248064
	goto loc_83248064;
loc_832480C4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_832480C8:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832480D0"))) PPC_WEAK_FUNC(sub_832480D0);
PPC_FUNC_IMPL(__imp__sub_832480D0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r7,2
	ctx.r7.s64 = 2;
	// clrlwi r8,r5,27
	ctx.r8.u64 = ctx.r5.u32 & 0x1F;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r5,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// li r3,-1
	ctx.r3.s64 = -1;
	// rlwinm r7,r4,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r6,r5,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r31,r4,27
	ctx.r31.u64 = ctx.r4.u32 & 0x1F;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// slw r8,r3,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r31.u8 & 0x3F));
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8324811c
	if (!ctx.cr6.eq) goto loc_8324811C;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8324811C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// and. r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83248130
	if (ctx.cr0.eq) goto loc_83248130;
	// rlwinm r10,r5,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFE0;
	// b 0x83248160
	goto loc_83248160;
loc_83248130:
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// b 0x83248148
	goto loc_83248148;
loc_83248138:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83248174
	if (!ctx.cr6.eq) goto loc_83248174;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_83248148:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83248138
	if (ctx.cr6.gt) goto loc_83248138;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324816c
	if (ctx.cr0.eq) goto loc_8324816C;
	// rlwinm r10,r4,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFE0;
loc_83248160:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_83248168:
	// addi r3,r11,31
	ctx.r3.s64 = ctx.r11.s64 + 31;
loc_8324816C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83248174:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r10,r4,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// b 0x83248168
	goto loc_83248168;
}

__attribute__((alias("__imp__sub_83248194"))) PPC_WEAK_FUNC(sub_83248194);
PPC_FUNC_IMPL(__imp__sub_83248194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83248198"))) PPC_WEAK_FUNC(sub_83248198);
PPC_FUNC_IMPL(__imp__sub_83248198) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,980(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 980);
	// addi r11,r3,948
	ctx.r11.s64 = ctx.r3.s64 + 948;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r4,980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 980, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832481AC"))) PPC_WEAK_FUNC(sub_832481AC);
PPC_FUNC_IMPL(__imp__sub_832481AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832481B0"))) PPC_WEAK_FUNC(sub_832481B0);
PPC_FUNC_IMPL(__imp__sub_832481B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,256
	ctx.r3.s64 = 256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832481B8"))) PPC_WEAK_FUNC(sub_832481B8);
PPC_FUNC_IMPL(__imp__sub_832481B8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832481D0"))) PPC_WEAK_FUNC(sub_832481D0);
PPC_FUNC_IMPL(__imp__sub_832481D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832481E4"))) PPC_WEAK_FUNC(sub_832481E4);
PPC_FUNC_IMPL(__imp__sub_832481E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832481E8"))) PPC_WEAK_FUNC(sub_832481E8);
PPC_FUNC_IMPL(__imp__sub_832481E8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83248200"))) PPC_WEAK_FUNC(sub_83248200);
PPC_FUNC_IMPL(__imp__sub_83248200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83248214
	if (ctx.cr0.eq) goto loc_83248214;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83248214:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83248224"))) PPC_WEAK_FUNC(sub_83248224);
PPC_FUNC_IMPL(__imp__sub_83248224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83248228"))) PPC_WEAK_FUNC(sub_83248228);
PPC_FUNC_IMPL(__imp__sub_83248228) {
	PPC_FUNC_PROLOGUE();
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r9,r4,29,3,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r11,r5,58
	ctx.r11.u64 = ctx.r5.u64 & 0x3F;
	// li r8,-1
	ctx.r8.s64 = -1;
	// sld r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r11.u8 & 0x7F));
	// ldx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r3.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrldi r9,r4,58
	ctx.r9.u64 = ctx.r4.u64 & 0x3F;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// sld r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// srd r3,r11,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324825C"))) PPC_WEAK_FUNC(sub_8324825C);
PPC_FUNC_IMPL(__imp__sub_8324825C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83248260"))) PPC_WEAK_FUNC(sub_83248260);
PPC_FUNC_IMPL(__imp__sub_83248260) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r10,r4,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// clrldi r10,r9,58
	ctx.r10.u64 = ctx.r9.u64 & 0x3F;
	// li r9,2
	ctx.r9.s64 = 2;
	// clrldi r11,r11,58
	ctx.r11.u64 = ctx.r11.u64 & 0x3F;
	// sld r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sld r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r11.u8 & 0x7F));
	// ldx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r3.u32);
	// and r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 & ctx.r8.u64;
	// clrlwi r10,r4,28
	ctx.r10.u64 = ctx.r4.u32 & 0xF;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// rlwinm r5,r4,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// srd r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r11.u8 & 0x7F));
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x832482c0
	if (ctx.cr6.eq) goto loc_832482C0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,3526
	ctx.r4.s64 = 3526;
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
loc_832482C0:
	// ldx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r3.u32);
	// sld r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r11.u8 & 0x7F));
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stdx r11,r9,r3
	PPC_STORE_U64(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832482D4"))) PPC_WEAK_FUNC(sub_832482D4);
PPC_FUNC_IMPL(__imp__sub_832482D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832482D8"))) PPC_WEAK_FUNC(sub_832482D8);
PPC_FUNC_IMPL(__imp__sub_832482D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832482E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r27,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83247ce8
	ctx.lr = 0x83248310;
	sub_83247CE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83248328
	if (ctx.cr0.eq) goto loc_83248328;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,3526
	ctx.r4.s64 = 3526;
	// bl 0x83204d78
	ctx.lr = 0x83248328;
	sub_83204D78(ctx, base);
loc_83248328:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83247e60
	ctx.lr = 0x83248338;
	sub_83247E60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83248340"))) PPC_WEAK_FUNC(sub_83248340);
PPC_FUNC_IMPL(__imp__sub_83248340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83248348;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r6,-4
	ctx.r6.s64 = -4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83247ac0
	ctx.lr = 0x83248364;
	sub_83247AC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x8324837c
	if (!ctx.cr6.eq) goto loc_8324837C;
	// li r4,3566
	ctx.r4.s64 = 3566;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83204d78
	ctx.lr = 0x8324837C;
	sub_83204D78(ctx, base);
loc_8324837C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// clrlwi r3,r31,28
	ctx.r3.u64 = ctx.r31.u32 & 0xF;
	// rlwinm r29,r31,30,2,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFC;
	// bl 0x83229a98
	ctx.lr = 0x8324838C;
	sub_83229A98(ctx, base);
	// rlwinm r11,r31,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFFFFFF;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r9,r29,58
	ctx.r9.u64 = ctx.r29.u64 & 0x3F;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r30.u32);
	// rlwimi r3,r31,0,0,27
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFFFFF0) | (ctx.r3.u64 & 0xFFFFFFFF0000000F);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r30
	PPC_STORE_U64(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832483BC"))) PPC_WEAK_FUNC(sub_832483BC);
PPC_FUNC_IMPL(__imp__sub_832483BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832483C0"))) PPC_WEAK_FUNC(sub_832483C0);
PPC_FUNC_IMPL(__imp__sub_832483C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832483C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x832475f0
	ctx.lr = 0x832483E0;
	sub_832475F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x832483f4
	if (!ctx.cr6.eq) goto loc_832483F4;
loc_832483EC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8324843c
	goto loc_8324843C;
loc_832483F4:
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x83248428
	goto loc_83248428;
loc_832483FC:
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83247d90
	ctx.lr = 0x8324840C;
	sub_83247D90(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x83248420
	if (!ctx.cr6.eq) goto loc_83248420;
	// clrlwi. r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83248438
	if (ctx.cr0.eq) goto loc_83248438;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83248420:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_83248428:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// ble cr6,0x832483fc
	if (!ctx.cr6.gt) goto loc_832483FC;
	// b 0x832483ec
	goto loc_832483EC;
loc_83248438:
	// rlwinm r3,r31,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
loc_8324843C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83248444"))) PPC_WEAK_FUNC(sub_83248444);
PPC_FUNC_IMPL(__imp__sub_83248444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83248448"))) PPC_WEAK_FUNC(sub_83248448);
PPC_FUNC_IMPL(__imp__sub_83248448) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r4,30,2,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r10,58
	ctx.r10.u64 = ctx.r10.u64 & 0x3F;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// clrldi r9,r4,60
	ctx.r9.u64 = ctx.r4.u64 & 0xF;
	// sld r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stdx r10,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83248474"))) PPC_WEAK_FUNC(sub_83248474);
PPC_FUNC_IMPL(__imp__sub_83248474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83248478"))) PPC_WEAK_FUNC(sub_83248478);
PPC_FUNC_IMPL(__imp__sub_83248478) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,23,9,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 23) & 0x7FFFFF;
	// rlwinm r11,r4,28,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// and r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi r9,r4,28
	ctx.r9.u64 = ctx.r4.u32 & 0xF;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// rlwinm r5,r4,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// and. r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x832484c8
	if (ctx.cr0.eq) goto loc_832484C8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,3526
	ctx.r4.s64 = 3526;
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
loc_832484C8:
	// lwzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832484DC"))) PPC_WEAK_FUNC(sub_832484DC);
PPC_FUNC_IMPL(__imp__sub_832484DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832484E0"))) PPC_WEAK_FUNC(sub_832484E0);
PPC_FUNC_IMPL(__imp__sub_832484E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832484E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r11,r31,r5
	ctx.r11.u64 = ctx.r31.u64 + ctx.r5.u64;
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83247b80
	ctx.lr = 0x8324850C;
	sub_83247B80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83248524
	if (ctx.cr0.eq) goto loc_83248524;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,3526
	ctx.r4.s64 = 3526;
	// bl 0x83204d78
	ctx.lr = 0x83248524;
	sub_83204D78(ctx, base);
loc_83248524:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83247c18
	ctx.lr = 0x83248534;
	sub_83247C18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324853C"))) PPC_WEAK_FUNC(sub_8324853C);
PPC_FUNC_IMPL(__imp__sub_8324853C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83248540"))) PPC_WEAK_FUNC(sub_83248540);
PPC_FUNC_IMPL(__imp__sub_83248540) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 23) & 0x7FFFFF;
	// clrlwi r9,r4,28
	ctx.r9.u64 = ctx.r4.u32 & 0xF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r4,28,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0x1F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83248568"))) PPC_WEAK_FUNC(sub_83248568);
PPC_FUNC_IMPL(__imp__sub_83248568) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,22,10,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r5,r4,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrldi r11,r5,58
	ctx.r11.u64 = ctx.r5.u64 & 0x3F;
	// li r8,2
	ctx.r8.s64 = 2;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r10,r8,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r11.u8 & 0x7F));
	// li r8,-1
	ctx.r8.s64 = -1;
	// ldx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r3.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sld r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r11.u8 & 0x7F));
	// and r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 & ctx.r8.u64;
	// clrlwi r10,r4,28
	ctx.r10.u64 = ctx.r4.u32 & 0xF;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// srd r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r11.u8 & 0x7F));
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x832485bc
	if (ctx.cr6.eq) goto loc_832485BC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,3526
	ctx.r4.s64 = 3526;
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
loc_832485BC:
	// ldx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r3.u32);
	// sld r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r11.u8 & 0x7F));
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stdx r11,r9,r3
	PPC_STORE_U64(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832485D0"))) PPC_WEAK_FUNC(sub_832485D0);
PPC_FUNC_IMPL(__imp__sub_832485D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832485D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r11,r31,r5
	ctx.r11.u64 = ctx.r31.u64 + ctx.r5.u64;
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83227b88
	ctx.lr = 0x832485FC;
	sub_83227B88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83248614
	if (ctx.cr0.eq) goto loc_83248614;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,3526
	ctx.r4.s64 = 3526;
	// bl 0x83204d78
	ctx.lr = 0x83248614;
	sub_83204D78(ctx, base);
loc_83248614:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83227c30
	ctx.lr = 0x83248624;
	sub_83227C30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324862C"))) PPC_WEAK_FUNC(sub_8324862C);
PPC_FUNC_IMPL(__imp__sub_8324862C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83248630"))) PPC_WEAK_FUNC(sub_83248630);
PPC_FUNC_IMPL(__imp__sub_83248630) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,23,9,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 23) & 0x7FFFFF;
	// rlwinm r11,r4,28,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// and r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi r9,r4,28
	ctx.r9.u64 = ctx.r4.u32 & 0xF;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// rlwinm r5,r4,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// and. r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83248680
	if (ctx.cr0.eq) goto loc_83248680;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,3526
	ctx.r4.s64 = 3526;
	// b 0x83204d78
	sub_83204D78(ctx, base);
	return;
loc_83248680:
	// lwzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83248694"))) PPC_WEAK_FUNC(sub_83248694);
PPC_FUNC_IMPL(__imp__sub_83248694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83248698"))) PPC_WEAK_FUNC(sub_83248698);
PPC_FUNC_IMPL(__imp__sub_83248698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832486A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r11,r31,r5
	ctx.r11.u64 = ctx.r31.u64 + ctx.r5.u64;
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83247b80
	ctx.lr = 0x832486C4;
	sub_83247B80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832486dc
	if (ctx.cr0.eq) goto loc_832486DC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,3526
	ctx.r4.s64 = 3526;
	// bl 0x83204d78
	ctx.lr = 0x832486DC;
	sub_83204D78(ctx, base);
loc_832486DC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83247c18
	ctx.lr = 0x832486EC;
	sub_83247C18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832486F4"))) PPC_WEAK_FUNC(sub_832486F4);
PPC_FUNC_IMPL(__imp__sub_832486F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832486F8"))) PPC_WEAK_FUNC(sub_832486F8);
PPC_FUNC_IMPL(__imp__sub_832486F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83248700;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83247f50
	ctx.lr = 0x8324871C;
	sub_83247F50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x83248734
	if (!ctx.cr6.eq) goto loc_83248734;
	// li r4,3570
	ctx.r4.s64 = 3570;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83204d78
	ctx.lr = 0x83248734;
	sub_83204D78(ctx, base);
loc_83248734:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// clrlwi r3,r31,28
	ctx.r3.u64 = ctx.r31.u32 & 0xF;
	// bl 0x83229a98
	ctx.lr = 0x83248740;
	sub_83229A98(ctx, base);
	// rlwinm r11,r31,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 23) & 0x7FFFFF;
	// rlwinm r10,r31,28,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r3,r31,0,0,27
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFFFFF0) | (ctx.r3.u64 & 0xFFFFFFFF0000000F);
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324876C"))) PPC_WEAK_FUNC(sub_8324876C);
PPC_FUNC_IMPL(__imp__sub_8324876C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83248770"))) PPC_WEAK_FUNC(sub_83248770);
PPC_FUNC_IMPL(__imp__sub_83248770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83248778;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832477a8
	ctx.lr = 0x8324878C;
	sub_832477A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x832487bc
	if (!ctx.cr6.eq) goto loc_832487BC;
loc_83248798:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832487d0
	goto loc_832487D0;
loc_832487A0:
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832480d0
	ctx.lr = 0x832487B0;
	sub_832480D0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x832487cc
	if (ctx.cr6.eq) goto loc_832487CC;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
loc_832487BC:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// ble cr6,0x832487a0
	if (!ctx.cr6.gt) goto loc_832487A0;
	// b 0x83248798
	goto loc_83248798;
loc_832487CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832487D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832487D8"))) PPC_WEAK_FUNC(sub_832487D8);
PPC_FUNC_IMPL(__imp__sub_832487D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832487E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83247740
	ctx.lr = 0x832487F4;
	sub_83247740(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x83248824
	if (!ctx.cr6.eq) goto loc_83248824;
loc_83248800:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83248838
	goto loc_83248838;
loc_83248808:
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83248000
	ctx.lr = 0x83248818;
	sub_83248000(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83248834
	if (ctx.cr6.eq) goto loc_83248834;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
loc_83248824:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// ble cr6,0x83248808
	if (!ctx.cr6.gt) goto loc_83248808;
	// b 0x83248800
	goto loc_83248800;
loc_83248834:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83248838:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83248840"))) PPC_WEAK_FUNC(sub_83248840);
PPC_FUNC_IMPL(__imp__sub_83248840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83248848;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832477a8
	ctx.lr = 0x8324885C;
	sub_832477A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x8324888c
	if (!ctx.cr6.eq) goto loc_8324888C;
loc_83248868:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832488a0
	goto loc_832488A0;
loc_83248870:
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832480d0
	ctx.lr = 0x83248880;
	sub_832480D0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8324889c
	if (ctx.cr6.eq) goto loc_8324889C;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
loc_8324888C:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// ble cr6,0x83248870
	if (!ctx.cr6.gt) goto loc_83248870;
	// b 0x83248868
	goto loc_83248868;
loc_8324889C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832488A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832488A8"))) PPC_WEAK_FUNC(sub_832488A8);
PPC_FUNC_IMPL(__imp__sub_832488A8) {
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
	// addi r11,r3,788
	ctx.r11.s64 = ctx.r3.s64 + 788;
	// cmplwi cr6,r4,132
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 132, ctx.xer);
	// ble cr6,0x832488d0
	if (!ctx.cr6.gt) goto loc_832488D0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8321df08
	ctx.lr = 0x832488CC;
	sub_8321DF08(ctx, base);
	// b 0x8324893c
	goto loc_8324893C;
loc_832488D0:
	// lwz r9,140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x832488f4
	if (ctx.cr6.lt) goto loc_832488F4;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r9,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// b 0x83248938
	goto loc_83248938;
loc_832488F4:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8324892c
	if (ctx.cr6.eq) goto loc_8324892C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82cb16f0
	ctx.lr = 0x83248924;
	sub_82CB16F0(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x83248938
	goto loc_83248938;
loc_8324892C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8321d298
	ctx.lr = 0x83248934;
	sub_8321D298(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_83248938:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8324893C:
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

__attribute__((alias("__imp__sub_83248950"))) PPC_WEAK_FUNC(sub_83248950);
PPC_FUNC_IMPL(__imp__sub_83248950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x83248958;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,88(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 88);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8321e0d0
	ctx.lr = 0x83248970;
	sub_8321E0D0(ctx, base);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
	// addi r27,r19,60
	ctx.r27.s64 = ctx.r19.s64 + 60;
	// li r26,7
	ctx.r26.s64 = 7;
	// li r16,1
	ctx.r16.s64 = 1;
	// li r15,3
	ctx.r15.s64 = 3;
loc_8324898C:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83248bb8
	if (ctx.cr6.eq) goto loc_83248BB8;
	// rlwinm r11,r17,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r18
	ctx.r28.u64 = ctx.r11.u64 + ctx.r18.u64;
loc_832489A0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x83248bac
	if (ctx.cr6.eq) goto loc_83248BAC;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832539a0
	ctx.lr = 0x832489BC;
	sub_832539A0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83248b98
	if (ctx.cr6.eq) goto loc_83248B98;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_832489D8:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83248a2c
	if (ctx.cr6.eq) goto loc_83248A2C;
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83248a24
	if (ctx.cr6.eq) goto loc_83248A24;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// rlwinm. r11,r10,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83248a20
	if (ctx.cr0.eq) goto loc_83248A20;
	// rlwinm r8,r10,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_83248A04:
	// srw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r6,r16,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x83248a04
	if (!ctx.cr0.eq) goto loc_83248A04;
loc_83248A20:
	// or r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 | ctx.r5.u64;
loc_83248A24:
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// b 0x832489d8
	goto loc_832489D8;
loc_83248A2C:
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_83248A40:
	// and. r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83248a9c
	if (ctx.cr0.eq) goto loc_83248A9C;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83248a78
	if (ctx.cr6.eq) goto loc_83248A78;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
loc_83248A5C:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x83248a78
	if (ctx.cr6.eq) goto loc_83248A78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x83248a5c
	if (ctx.cr6.lt) goto loc_83248A5C;
loc_83248A78:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83248a8c
	if (!ctx.cr6.eq) goto loc_83248A8C;
	// stfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_83248A8C:
	// slw r9,r15,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r10.u8 & 0x3F));
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// andc r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 & ~ctx.r9.u64;
	// or r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_83248A9C:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x83248a40
	if (ctx.cr6.lt) goto loc_83248A40;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83248ac8
	if (!ctx.cr6.eq) goto loc_83248AC8;
	// srw. r11,r5,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r31.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83248b88
	if (ctx.cr0.eq) goto loc_83248B88;
loc_83248AC8:
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82cb1160
	ctx.lr = 0x83248AD4;
	sub_82CB1160(ctx, base);
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r8,r11,5192
	ctx.r8.u64 = ctx.r11.u64 | 5192;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// slw r11,r16,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r31.u8 & 0x3F));
	// ori r9,r9,36262
	ctx.r9.u64 = ctx.r9.u64 | 36262;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rldimi r8,r9,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwimi r7,r31,14,15,17
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r31.u32, 14) & 0x1C000) | (ctx.r7.u64 & 0xFFFFFFFFFFFE3FFF);
	// srd r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// srd r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwimi r11,r9,13,16,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 13) & 0xE000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwimi r9,r11,1,27,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x1E) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r9,r11,1,15,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
loc_83248B28:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83248b88
	if (ctx.cr6.eq) goto loc_83248B88;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83248b80
	if (ctx.cr6.eq) goto loc_83248B80;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r8,r11,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r29,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r11,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r7,r11,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r8,r29,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_83248B80:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x83248b28
	goto loc_83248B28;
loc_83248B88:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x83248bac
	goto loc_83248BAC;
loc_83248B98:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x83248BAC;
	sub_832F6CC8(ctx, base);
loc_83248BAC:
	// lwz r30,32(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832489a0
	if (!ctx.cr6.eq) goto loc_832489A0;
loc_83248BB8:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x8324898c
	if (!ctx.cr0.eq) goto loc_8324898C;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,29800
	ctx.r6.s64 = ctx.r11.s64 + 29800;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82cb3100
	ctx.lr = 0x83248BDC;
	sub_82CB3100(ctx, base);
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x832490c0
	if (ctx.cr6.eq) goto loc_832490C0;
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
loc_83248BEC:
	// lwz r24,0(r22)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x832490b0
	if (ctx.cr6.eq) goto loc_832490B0;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// rlwinm r4,r11,18,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// beq cr6,0x83248d84
	if (ctx.cr6.eq) goto loc_83248D84;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_83248C10:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83248ca4
	if (ctx.cr6.eq) goto loc_83248CA4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83248c9c
	if (ctx.cr6.eq) goto loc_83248C9C;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// addi r8,r24,44
	ctx.r8.s64 = ctx.r24.s64 + 44;
loc_83248C3C:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x83248c80
	if (ctx.cr6.eq) goto loc_83248C80;
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
loc_83248C50:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83248c70
	if (ctx.cr6.eq) goto loc_83248C70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x83248c50
	if (ctx.cr6.lt) goto loc_83248C50;
	// b 0x83248c80
	goto loc_83248C80;
loc_83248C70:
	// slw r10,r15,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r9.u8 & 0x3F));
	// slw r29,r11,r9
	ctx.r29.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// andc r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r10.u64;
	// or r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 | ctx.r29.u64;
loc_83248C80:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x83248c9c
	if (ctx.cr6.eq) goto loc_83248C9C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x83248c3c
	if (ctx.cr6.lt) goto loc_83248C3C;
loc_83248C9C:
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x83248cb8
	if (ctx.cr6.eq) goto loc_83248CB8;
loc_83248CA4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r21
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x83248c10
	if (ctx.cr6.lt) goto loc_83248C10;
	// b 0x83248d7c
	goto loc_83248D7C;
loc_83248CB8:
	// addi r8,r24,4
	ctx.r8.s64 = ctx.r24.s64 + 4;
loc_83248CBC:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83248d64
	if (ctx.cr6.eq) goto loc_83248D64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83248d50
	if (ctx.cr6.eq) goto loc_83248D50;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x83248cec
	goto loc_83248CEC;
loc_83248CE4:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_83248CEC:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83248ce4
	if (!ctx.cr6.eq) goto loc_83248CE4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r7,r10,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// srw r9,r5,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r5,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r10,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r7,r5,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83248D50:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83248cbc
	if (!ctx.cr6.eq) goto loc_83248CBC;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x83248cbc
	goto loc_83248CBC;
loc_83248D64:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x83248D78;
	sub_832F6CC8(ctx, base);
	// stw r20,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r20.u32);
loc_83248D7C:
	// cmplw cr6,r30,r21
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x832490b0
	if (ctx.cr6.lt) goto loc_832490B0;
loc_83248D84:
	// addi r23,r21,1
	ctx.r23.s64 = ctx.r21.s64 + 1;
loc_83248D88:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// rlwinm r29,r11,18,29,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r17
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r17.u32, ctx.xer);
	// bge cr6,0x832490b0
	if (!ctx.cr6.lt) goto loc_832490B0;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r18
	ctx.r26.u64 = ctx.r11.u64 + ctx.r18.u64;
loc_83248DB4:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83248e8c
	if (ctx.cr6.eq) goto loc_83248E8C;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// rlwinm. r3,r11,18,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// beq 0x83248e64
	if (ctx.cr0.eq) goto loc_83248E64;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// addi r5,r10,44
	ctx.r5.s64 = ctx.r10.s64 + 44;
loc_83248DE4:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83248e2c
	if (ctx.cr6.eq) goto loc_83248E2C;
	// addi r9,r24,44
	ctx.r9.s64 = ctx.r24.s64 + 44;
loc_83248DF8:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83248e18
	if (ctx.cr6.eq) goto loc_83248E18;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83248df8
	if (ctx.cr6.lt) goto loc_83248DF8;
	// b 0x83248e2c
	goto loc_83248E2C;
loc_83248E18:
	// slw r9,r15,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r11.u8 & 0x3F));
	// slw r14,r10,r11
	ctx.r14.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// or r8,r9,r14
	ctx.r8.u64 = ctx.r9.u64 | ctx.r14.u64;
loc_83248E2C:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x83248e50
	if (!ctx.cr6.eq) goto loc_83248E50;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// beq cr6,0x83248e64
	if (ctx.cr6.eq) goto loc_83248E64;
	// slw r10,r15,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r11.u8 & 0x3F));
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
loc_83248E50:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x83248de4
	if (ctx.cr6.lt) goto loc_83248DE4;
loc_83248E64:
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x83248e8c
	if (!ctx.cr6.eq) goto loc_83248E8C;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x83248e8c
	if (ctx.cr6.lt) goto loc_83248E8C;
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x83248e8c
	if (ctx.cr6.lt) goto loc_83248E8C;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
loc_83248E8C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r30,r17
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x83248db4
	if (ctx.cr6.lt) goto loc_83248DB4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832490b0
	if (ctx.cr6.eq) goto loc_832490B0;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r24,44
	ctx.r4.s64 = ctx.r24.s64 + 44;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r30,r28,r18
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r18.u32);
	// bl 0x82cb1160
	ctx.lr = 0x83248EBC;
	sub_82CB1160(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83248f00
	if (ctx.cr6.eq) goto loc_83248F00;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// addi r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 + 44;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_83248ED0:
	// srw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83248ef0
	if (ctx.cr6.lt) goto loc_83248EF0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfsx f0,r9,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
loc_83248EF0:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x83248ed0
	if (!ctx.cr0.eq) goto loc_83248ED0;
loc_83248F00:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r20,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832f2078
	ctx.lr = 0x83248F1C;
	sub_832F2078(ctx, base);
	// lis r10,-28311
	ctx.r10.s64 = -1855389696;
	// lis r9,0
	ctx.r9.s64 = 0;
	// slw r11,r16,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r31.u8 & 0x3F));
	// ori r10,r10,5192
	ctx.r10.u64 = ctx.r10.u64 | 5192;
	// ori r9,r9,36262
	ctx.r9.u64 = ctx.r9.u64 | 36262;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r8,r24,4
	ctx.r8.s64 = ctx.r24.s64 + 4;
	// rlwimi r11,r10,13,16,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0xE000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// rlwimi r7,r11,1,27,30
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x1E) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r7,r11,1,15,17
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x1C000) | (ctx.r7.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
loc_83248F68:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83248fcc
	if (ctx.cr6.eq) goto loc_83248FCC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83248fb8
	if (ctx.cr6.eq) goto loc_83248FB8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x83248f98
	goto loc_83248F98;
loc_83248F90:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_83248F98:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83248f90
	if (!ctx.cr6.eq) goto loc_83248F90;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
loc_83248FB8:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83248f68
	if (!ctx.cr6.eq) goto loc_83248F68;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x83248f68
	goto loc_83248F68;
loc_83248FCC:
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
loc_83248FD0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83249078
	if (ctx.cr6.eq) goto loc_83249078;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83249064
	if (ctx.cr6.eq) goto loc_83249064;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x83249000
	goto loc_83249000;
loc_83248FF8:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_83249000:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83248ff8
	if (!ctx.cr6.eq) goto loc_83248FF8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r7,r10,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// srw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r25,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r10,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r7,r25,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83249064:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83248fd0
	if (!ctx.cr6.eq) goto loc_83248FD0;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x83248fd0
	goto loc_83248FD0;
loc_83249078:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x8324908C;
	sub_832F6CC8(ctx, base);
	// stw r31,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x832490A4;
	sub_832F6CC8(ctx, base);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// stwx r20,r28,r18
	PPC_STORE_U32(ctx.r28.u32 + ctx.r18.u32, ctx.r20.u32);
	// b 0x83248d88
	goto loc_83248D88;
loc_832490B0:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplw cr6,r21,r17
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x83248bec
	if (ctx.cr6.lt) goto loc_83248BEC;
loc_832490C0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832490C8"))) PPC_WEAK_FUNC(sub_832490C8);
PPC_FUNC_IMPL(__imp__sub_832490C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x832490D0;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,-1
	ctx.r21.s64 = -1;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// subfic r24,r27,256
	ctx.xer.ca = ctx.r27.u32 <= 256;
	ctx.r24.s64 = 256 - ctx.r27.s64;
loc_832490F8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832483c0
	ctx.lr = 0x83249104;
	sub_832483C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x83249290
	if (ctx.cr6.eq) goto loc_83249290;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r22,8
	ctx.r3.s64 = ctx.r22.s64 + 8;
	// bl 0x832474a8
	ctx.lr = 0x8324911C;
	sub_832474A8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83249130
	if (ctx.cr6.eq) goto loc_83249130;
	// rlwinm r28,r3,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x83249134
	if (!ctx.cr6.eq) goto loc_83249134;
loc_83249130:
	// add r28,r24,r27
	ctx.r28.u64 = ctx.r24.u64 + ctx.r27.u64;
loc_83249134:
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// rlwinm r26,r28,0,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x83249150
	if (!ctx.cr6.eq) goto loc_83249150;
	// subf r29,r11,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r11.s64;
	// b 0x83249168
	goto loc_83249168;
loc_83249150:
	// subf r29,r26,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r26.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83249168
	if (ctx.cr6.eq) goto loc_83249168;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_83249168:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x83249178
	if (ctx.cr6.lt) goto loc_83249178;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// b 0x832491ac
	goto loc_832491AC;
loc_83249178:
	// subf r10,r27,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r27.s64;
	// rlwinm r11,r31,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83249194
	if (!ctx.cr6.eq) goto loc_83249194;
	// subf r7,r31,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r31.s64;
	// b 0x832491ac
	goto loc_832491AC;
loc_83249194:
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832491ac
	if (ctx.cr6.eq) goto loc_832491AC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_832491AC:
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r9,r31,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r8,r11,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// beq cr6,0x832491d4
	if (ctx.cr6.eq) goto loc_832491D4;
	// subf r10,r31,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r31.s64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_832491D4:
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x832491e8
	if (!ctx.cr6.eq) goto loc_832491E8;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x83249204
	goto loc_83249204;
loc_832491E8:
	// subf r10,r26,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r26.s64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// beq cr6,0x83249204
	if (ctx.cr6.eq) goto loc_83249204;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_83249204:
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x83249214
	if (!ctx.cr6.lt) goto loc_83249214;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// subf r31,r27,r28
	ctx.r31.s64 = ctx.r28.s64 - ctx.r27.s64;
loc_83249214:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x83249228
	if (!ctx.cr6.lt) goto loc_83249228;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_83249228:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x83249260
	if (!ctx.cr6.lt) goto loc_83249260;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83247ac0
	ctx.lr = 0x83249248;
	sub_83247AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83249260
	if (ctx.cr6.eq) goto loc_83249260;
	// rlwinm r11,r3,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_83249260:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// beq cr6,0x83249278
	if (ctx.cr6.eq) goto loc_83249278;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x83249280
	if (!ctx.cr6.lt) goto loc_83249280;
loc_83249278:
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_83249280:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// subf r25,r26,r28
	ctx.r25.s64 = ctx.r28.s64 - ctx.r26.s64;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x832490f8
	if (!ctx.cr6.gt) goto loc_832490F8;
loc_83249290:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// bne cr6,0x832492a4
	if (!ctx.cr6.eq) goto loc_832492A4;
	// li r4,3566
	ctx.r4.s64 = 3566;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83204d78
	ctx.lr = 0x832492A4;
	sub_83204D78(ctx, base);
loc_832492A4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832482d8
	ctx.lr = 0x832492B4;
	sub_832482D8(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832492C0"))) PPC_WEAK_FUNC(sub_832492C0);
PPC_FUNC_IMPL(__imp__sub_832492C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x832492C8;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x832495e8
	if (!ctx.cr6.gt) goto loc_832495E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r21,0
	ctx.r21.s64 = 0;
	// lfs f30,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6140);
	ctx.f31.f64 = double(temp.f32);
loc_83249300:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// add r28,r21,r11
	ctx.r28.u64 = ctx.r21.u64 + ctx.r11.u64;
	// lwzx r11,r21,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x832495d4
	if (!ctx.cr6.eq) goto loc_832495D4;
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832495d4
	if (ctx.cr0.eq) goto loc_832495D4;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r10,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x832495d4
	if (!ctx.cr6.eq) goto loc_832495D4;
	// rlwinm r11,r11,0,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF8;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x832495d4
	if (ctx.cr6.gt) goto loc_832495D4;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832495d4
	if (ctx.cr6.eq) goto loc_832495D4;
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832495d4
	if (ctx.cr6.eq) goto loc_832495D4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832a9068
	ctx.lr = 0x8324935C;
	sub_832A9068(ctx, base);
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832a9130
	ctx.lr = 0x83249368;
	sub_832A9130(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r24,0
	ctx.r24.s64 = 0;
	// beq 0x83249428
	if (ctx.cr0.eq) goto loc_83249428;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_83249380:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83249428
	if (ctx.cr6.eq) goto loc_83249428;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x832a90e0
	ctx.lr = 0x83249394;
	sub_832A90E0(ctx, base);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x832a9130
	ctx.lr = 0x832493A4;
	sub_832A9130(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x832493f4
	if (ctx.cr6.lt) goto loc_832493F4;
	// beq cr6,0x832493e4
	if (ctx.cr6.eq) goto loc_832493E4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x832493d0
	if (ctx.cr6.lt) goto loc_832493D0;
	// bne cr6,0x832495fc
	if (!ctx.cr6.eq) goto loc_832495FC;
	// lfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
loc_832493C8:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// b 0x8324940c
	goto loc_8324940C;
loc_832493D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_832493DC:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// b 0x832493c8
	goto loc_832493C8;
loc_832493E4:
	// lwa r11,8(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 8));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x832493dc
	goto loc_832493DC;
loc_832493F4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83249408
	if (ctx.cr6.eq) goto loc_83249408;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8324940c
	goto loc_8324940C;
loc_83249408:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_8324940C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,29,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3FFF;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83249380
	if (ctx.cr6.lt) goto loc_83249380;
loc_83249428:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83249438
	if (ctx.cr0.eq) goto loc_83249438;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83249438:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832495d4
	if (!ctx.cr0.eq) goto loc_832495D4;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832495d4
	if (ctx.cr0.eq) goto loc_832495D4;
loc_83249450:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x832495b8
	if (!ctx.cr6.eq) goto loc_832495B8;
	// addi r26,r27,4
	ctx.r26.s64 = ctx.r27.s64 + 4;
loc_83249464:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83249594
	if (ctx.cr6.eq) goto loc_83249594;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83249580
	if (ctx.cr6.eq) goto loc_83249580;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83249510
	if (ctx.cr0.eq) goto loc_83249510;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83249494:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// srw r11,r10,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r30.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// bl 0x832ecf28
	ctx.lr = 0x832494B0;
	sub_832ECF28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x832494dc
	if (ctx.cr6.eq) goto loc_832494DC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_832494C0:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x832494dc
	if (ctx.cr6.eq) goto loc_832494DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x832494c0
	if (ctx.cr6.lt) goto loc_832494C0;
loc_832494DC:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x83249510
	if (ctx.cr6.eq) goto loc_83249510;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// andc r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 & ~ctx.r10.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r9,r9,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	// or r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83249494
	if (ctx.cr6.lt) goto loc_83249494;
loc_83249510:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83249580
	if (!ctx.cr6.eq) goto loc_83249580;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832f24d0
	ctx.lr = 0x83249534;
	sub_832F24D0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8324954c
	goto loc_8324954C;
loc_83249544:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_8324954C:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83249544
	if (!ctx.cr6.eq) goto loc_83249544;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r28,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83249580:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x83249464
	if (!ctx.cr6.eq) goto loc_83249464;
	// addi r26,r31,8
	ctx.r26.s64 = ctx.r31.s64 + 8;
	// b 0x83249464
	goto loc_83249464;
loc_83249594:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8321d798
	ctx.lr = 0x8324959C;
	sub_8321D798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832495b8
	if (ctx.cr0.eq) goto loc_832495B8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x832495B8;
	sub_832F6CC8(ctx, base);
loc_832495B8:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x832495d4
	if (!ctx.cr0.eq) goto loc_832495D4;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83249450
	if (!ctx.cr6.eq) goto loc_83249450;
loc_832495D4:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r21,r21,40
	ctx.r21.s64 = ctx.r21.s64 + 40;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83249300
	if (ctx.cr6.lt) goto loc_83249300;
loc_832495E8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
loc_832495FC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83204d78
	ctx.lr = 0x83249608;
	sub_83204D78(ctx, base);
}

__attribute__((alias("__imp__sub_83249608"))) PPC_WEAK_FUNC(sub_83249608);
PPC_FUNC_IMPL(__imp__sub_83249608) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83249620"))) PPC_WEAK_FUNC(sub_83249620);
PPC_FUNC_IMPL(__imp__sub_83249620) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8324968c
	if (!ctx.cr0.eq) goto loc_8324968C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8324968c
	if (ctx.cr0.eq) goto loc_8324968C;
loc_8324963C:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8324966c
	if (ctx.cr6.eq) goto loc_8324966C;
	// addi r9,r8,16
	ctx.r9.s64 = ctx.r8.s64 + 16;
loc_83249650:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x83249694
	if (ctx.cr6.eq) goto loc_83249694;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83249650
	if (ctx.cr6.lt) goto loc_83249650;
loc_8324966C:
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8324968c
	if (!ctx.cr0.eq) goto loc_8324968C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8324963c
	if (!ctx.cr6.eq) goto loc_8324963C;
loc_8324968C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83249694:
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324969C"))) PPC_WEAK_FUNC(sub_8324969C);
PPC_FUNC_IMPL(__imp__sub_8324969C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832496A0"))) PPC_WEAK_FUNC(sub_832496A0);
PPC_FUNC_IMPL(__imp__sub_832496A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x832496b4
	goto loc_832496B4;
loc_832496A8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r4,r10,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r10.s64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_832496B4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832496c0
	if (ctx.cr0.eq) goto loc_832496C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832496C0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x832496a8
	if (!ctx.cr6.lt) goto loc_832496A8;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832496DC"))) PPC_WEAK_FUNC(sub_832496DC);
PPC_FUNC_IMPL(__imp__sub_832496DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832496E0"))) PPC_WEAK_FUNC(sub_832496E0);
PPC_FUNC_IMPL(__imp__sub_832496E0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832496F8"))) PPC_WEAK_FUNC(sub_832496F8);
PPC_FUNC_IMPL(__imp__sub_832496F8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,28,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0x3FFFFFF;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrldi r9,r9,58
	ctx.r9.u64 = ctx.r9.u64 & 0x3F;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,2
	ctx.r8.s64 = 2;
	// clrldi r11,r11,58
	ctx.r11.u64 = ctx.r11.u64 & 0x3F;
	// sld r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r9,r7,r3
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r3.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// sld r9,r8,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r11.u8 & 0x7F));
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83249740"))) PPC_WEAK_FUNC(sub_83249740);
PPC_FUNC_IMPL(__imp__sub_83249740) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// slw r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw r3,r11,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83249778"))) PPC_WEAK_FUNC(sub_83249778);
PPC_FUNC_IMPL(__imp__sub_83249778) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r3.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// sld r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r10.u8 & 0x7F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832497B4"))) PPC_WEAK_FUNC(sub_832497B4);
PPC_FUNC_IMPL(__imp__sub_832497B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832497B8"))) PPC_WEAK_FUNC(sub_832497B8);
PPC_FUNC_IMPL(__imp__sub_832497B8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// slw r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw r3,r11,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832497F0"))) PPC_WEAK_FUNC(sub_832497F0);
PPC_FUNC_IMPL(__imp__sub_832497F0) {
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
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bgt cr6,0x83249818
	if (ctx.cr6.gt) goto loc_83249818;
	// li r30,10
	ctx.r30.s64 = 10;
loc_83249818:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8321e020
	ctx.lr = 0x83249828;
	sub_8321E020(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// ori r8,r31,1
	ctx.r8.u64 = ctx.r31.u64 | 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83249874"))) PPC_WEAK_FUNC(sub_83249874);
PPC_FUNC_IMPL(__imp__sub_83249874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83249878"))) PPC_WEAK_FUNC(sub_83249878);
PPC_FUNC_IMPL(__imp__sub_83249878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83249880;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83248770
	ctx.lr = 0x83249898;
	sub_83248770(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x832498e0
	if (!ctx.cr6.eq) goto loc_832498E0;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832498cc
	if (ctx.cr6.eq) goto loc_832498CC;
	// bl 0x83246fd8
	ctx.lr = 0x832498BC;
	sub_83246FD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3567
	ctx.r4.s64 = 3567;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204d78
	ctx.lr = 0x832498CC;
	sub_83204D78(ctx, base);
loc_832498CC:
	// bl 0x83246fd8
	ctx.lr = 0x832498D0;
	sub_83246FD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3568
	ctx.r4.s64 = 3568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204d78
	ctx.lr = 0x832498E0;
	sub_83204D78(ctx, base);
loc_832498E0:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x83247c18
	ctx.lr = 0x832498F4;
	sub_83247C18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83249900"))) PPC_WEAK_FUNC(sub_83249900);
PPC_FUNC_IMPL(__imp__sub_83249900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83249908;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832487d8
	ctx.lr = 0x83249920;
	sub_832487D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x83249938
	if (!ctx.cr6.eq) goto loc_83249938;
	// li r4,3569
	ctx.r4.s64 = 3569;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83204d78
	ctx.lr = 0x83249938;
	sub_83204D78(ctx, base);
loc_83249938:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83227c30
	ctx.lr = 0x8324994C;
	sub_83227C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83249958"))) PPC_WEAK_FUNC(sub_83249958);
PPC_FUNC_IMPL(__imp__sub_83249958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83249960;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83248840
	ctx.lr = 0x83249978;
	sub_83248840(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x83249990
	if (!ctx.cr6.eq) goto loc_83249990;
	// li r4,3570
	ctx.r4.s64 = 3570;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83204d78
	ctx.lr = 0x83249990;
	sub_83204D78(ctx, base);
loc_83249990:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x83247c18
	ctx.lr = 0x832499A4;
	sub_83247C18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832499B0"))) PPC_WEAK_FUNC(sub_832499B0);
PPC_FUNC_IMPL(__imp__sub_832499B0) {
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
	// lwz r31,2468(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2468);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83249a24
	if (ctx.cr6.eq) goto loc_83249A24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83249620
	ctx.lr = 0x832499D4;
	sub_83249620(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83249a24
	if (ctx.cr6.eq) goto loc_83249A24;
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83249a24
	if (!ctx.cr0.eq) goto loc_83249A24;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// b 0x832499fc
	goto loc_832499FC;
loc_832499F0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_832499FC:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83249a08
	if (ctx.cr0.eq) goto loc_83249A08;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83249A08:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x832499f0
	if (!ctx.cr6.lt) goto loc_832499F0;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x83249a28
	goto loc_83249A28;
loc_83249A24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83249A28:
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

__attribute__((alias("__imp__sub_83249A3C"))) PPC_WEAK_FUNC(sub_83249A3C);
PPC_FUNC_IMPL(__imp__sub_83249A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83249A40"))) PPC_WEAK_FUNC(sub_83249A40);
PPC_FUNC_IMPL(__imp__sub_83249A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83249A48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulli r10,r4,40
	ctx.r10.s64 = ctx.r4.s64 * 40;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r9,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83249b68
	if (ctx.cr6.lt) goto loc_83249B68;
	// beq cr6,0x83249b48
	if (ctx.cr6.eq) goto loc_83249B48;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x83249b3c
	if (ctx.cr6.lt) goto loc_83249B3C;
	// beq cr6,0x83249ae0
	if (ctx.cr6.eq) goto loc_83249AE0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r10,4080
	ctx.r10.s64 = 267386880;
	// rlwinm r11,r11,0,3,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83249aa0
	if (ctx.cr6.gt) goto loc_83249AA0;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x83204d78
	ctx.lr = 0x83249AA0;
	sub_83204D78(ctx, base);
loc_83249AA0:
	// rlwinm. r11,r9,0,16,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83249ad4
	if (ctx.cr0.eq) goto loc_83249AD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832499b0
	ctx.lr = 0x83249AB0;
	sub_832499B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83249ac4
	if (!ctx.cr0.eq) goto loc_83249AC4;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204d78
	ctx.lr = 0x83249AC4;
	sub_83204D78(ctx, base);
loc_83249AC4:
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,4509
	ctx.r4.s64 = 4509;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204d78
	ctx.lr = 0x83249AD4;
	sub_83204D78(ctx, base);
loc_83249AD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x83249b34
	goto loc_83249B34;
loc_83249AE0:
	// lwz r11,780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83249af4
	if (ctx.cr6.eq) goto loc_83249AF4;
	// lwz r28,776(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// b 0x83249b24
	goto loc_83249B24;
loc_83249AF4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83249b08
	if (ctx.cr0.eq) goto loc_83249B08;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x83249b24
	goto loc_83249B24;
loc_83249B08:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x10;
	// xori r28,r11,16
	ctx.r28.u64 = ctx.r11.u64 ^ 16;
loc_83249B24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83246fd8
	ctx.lr = 0x83249B2C;
	sub_83246FD8(ctx, base);
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_83249B34:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x83249b8c
	goto loc_83249B8C;
loc_83249B3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,256
	ctx.r10.s64 = 256;
	// b 0x83249b84
	goto loc_83249B84;
loc_83249B48:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x10;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// b 0x83249b84
	goto loc_83249B84;
loc_83249B68:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,2,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x80;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
loc_83249B84:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_83249B8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83249B94"))) PPC_WEAK_FUNC(sub_83249B94);
PPC_FUNC_IMPL(__imp__sub_83249B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83249B98"))) PPC_WEAK_FUNC(sub_83249B98);
PPC_FUNC_IMPL(__imp__sub_83249B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83249BA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83249a40
	ctx.lr = 0x83249BB8;
	sub_83249A40(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r30,40
	ctx.r10.s64 = ctx.r30.s64 * 40;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r29,63
	ctx.r29.s64 = 63;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83249c00
	if (ctx.cr6.lt) goto loc_83249C00;
	// beq cr6,0x83249bf8
	if (ctx.cr6.eq) goto loc_83249BF8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x83249bf0
	if (ctx.cr6.lt) goto loc_83249BF0;
	// bne cr6,0x83249c04
	if (!ctx.cr6.eq) goto loc_83249C04;
	// li r29,115
	ctx.r29.s64 = 115;
	// b 0x83249c04
	goto loc_83249C04;
loc_83249BF0:
	// li r29,99
	ctx.r29.s64 = 99;
	// b 0x83249c04
	goto loc_83249C04;
loc_83249BF8:
	// li r29,105
	ctx.r29.s64 = 105;
	// b 0x83249c04
	goto loc_83249C04;
loc_83249C00:
	// li r29,98
	ctx.r29.s64 = 98;
loc_83249C04:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832499b0
	ctx.lr = 0x83249C10;
	sub_832499B0(ctx, base);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83249c24
	if (ctx.cr0.eq) goto loc_83249C24;
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x83249c4c
	goto loc_83249C4C;
loc_83249C24:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// extsb r6,r29
	ctx.r6.s64 = ctx.r29.s8;
	// rlwinm r11,r11,12,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1FF;
	// addi r5,r10,-20368
	ctx.r5.s64 = ctx.r10.s64 + -20368;
	// subf r7,r30,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r30.s64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82cb7580
	ctx.lr = 0x83249C48;
	sub_82CB7580(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_83249C4C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83249c78
	if (!ctx.cr6.lt) goto loc_83249C78;
	// extsb r6,r29
	ctx.r6.s64 = ctx.r29.s8;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,3563
	ctx.r4.s64 = 3563;
	// bl 0x83204d78
	ctx.lr = 0x83249C78;
	sub_83204D78(ctx, base);
loc_83249C78:
	// li r4,4509
	ctx.r4.s64 = 4509;
	// bl 0x83204d78
	ctx.lr = 0x83249C80;
	sub_83204D78(ctx, base);
}

__attribute__((alias("__imp__sub_83249C80"))) PPC_WEAK_FUNC(sub_83249C80);
PPC_FUNC_IMPL(__imp__sub_83249C80) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83249C98"))) PPC_WEAK_FUNC(sub_83249C98);
PPC_FUNC_IMPL(__imp__sub_83249C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83249CA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r28,r4,r5
	ctx.r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x83249d24
	if (!ctx.cr6.lt) goto loc_83249D24;
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_83249CBC:
	// rlwinm r11,r31,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 26) & 0x3FFFFFF;
	// addi r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r10,58
	ctx.r10.u64 = ctx.r10.u64 & 0x3F;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,2
	ctx.r9.s64 = 2;
	// sld r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r10,r8,r29
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r29.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrldi r9,r31,58
	ctx.r9.u64 = ctx.r31.u64 & 0x3F;
	// li r8,-1
	ctx.r8.s64 = -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// sld r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subfic r4,r11,15
	ctx.xer.ca = ctx.r11.u32 <= 15;
	ctx.r4.s64 = 15 - ctx.r11.s64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83249d14
	if (ctx.cr6.eq) goto loc_83249D14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwimi r4,r30,4,0,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 4) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// bl 0x83248260
	ctx.lr = 0x83249D14;
	sub_83248260(ctx, base);
loc_83249D14:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83249cbc
	if (ctx.cr6.lt) goto loc_83249CBC;
loc_83249D24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83249D2C"))) PPC_WEAK_FUNC(sub_83249D2C);
PPC_FUNC_IMPL(__imp__sub_83249D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83249D30"))) PPC_WEAK_FUNC(sub_83249D30);
PPC_FUNC_IMPL(__imp__sub_83249D30) {
	PPC_FUNC_PROLOGUE();
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_83249D44:
	// rlwinm r11,r10,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r7,r7,58
	ctx.r7.u64 = ctx.r7.u64 & 0x3F;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,2
	ctx.r6.s64 = 2;
	// sld r11,r6,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r7.u8 & 0x7F));
	// ldx r7,r5,r3
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + ctx.r3.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrldi r6,r10,58
	ctx.r6.u64 = ctx.r10.u64 & 0x3F;
	// li r5,-1
	ctx.r5.s64 = -1;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// sld r7,r5,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r5.u64 << (ctx.r6.u8 & 0x7F));
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// srd r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83249db8
	if (ctx.cr0.eq) goto loc_83249DB8;
	// rlwimi r11,r9,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwinm r11,r7,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r6,r7,30,2,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r6,r6,58
	ctx.r6.u64 = ctx.r6.u64 & 0x3F;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// clrldi r7,r7,60
	ctx.r7.u64 = ctx.r7.u64 & 0xF;
	// sld r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r6.u8 & 0x7F));
	// ldx r6,r11,r3
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// subf r7,r7,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r7.s64;
	// stdx r7,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u64);
loc_83249DB8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83249d44
	if (ctx.cr6.lt) goto loc_83249D44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83249DCC"))) PPC_WEAK_FUNC(sub_83249DCC);
PPC_FUNC_IMPL(__imp__sub_83249DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83249DD0"))) PPC_WEAK_FUNC(sub_83249DD0);
PPC_FUNC_IMPL(__imp__sub_83249DD0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 23) & 0x7FFFFF;
	// rlwinm r10,r4,28,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// slw r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83249E20"))) PPC_WEAK_FUNC(sub_83249E20);
PPC_FUNC_IMPL(__imp__sub_83249E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83249E28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r29,r4,r5
	ctx.r29.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x83249e98
	if (!ctx.cr6.lt) goto loc_83249E98;
loc_83249E40:
	// rlwinm r11,r31,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r8,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// slw r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// subfic r4,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r4.s64 = 1 - ctx.r11.s64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83249e8c
	if (ctx.cr6.eq) goto loc_83249E8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r4,r31,4,0,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r31.u32, 4) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// bl 0x83248478
	ctx.lr = 0x83249E8C;
	sub_83248478(ctx, base);
loc_83249E8C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83249e40
	if (ctx.cr6.lt) goto loc_83249E40;
loc_83249E98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83249EA0"))) PPC_WEAK_FUNC(sub_83249EA0);
PPC_FUNC_IMPL(__imp__sub_83249EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83249EA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r28,r4,r5
	ctx.r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x83249f24
	if (!ctx.cr6.lt) goto loc_83249F24;
	// clrldi r30,r4,32
	ctx.r30.u64 = ctx.r4.u64 & 0xFFFFFFFF;
loc_83249EC4:
	// rlwinm r11,r31,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 26) & 0x3FFFFFF;
	// clrldi r10,r30,58
	ctx.r10.u64 = ctx.r30.u64 & 0x3F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r9,r8,r29
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r29.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// sld r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r10.u8 & 0x7F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subfic r4,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r4.s64 = 1 - ctx.r11.s64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83249f14
	if (ctx.cr6.eq) goto loc_83249F14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwimi r4,r31,4,0,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r31.u32, 4) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// bl 0x83248568
	ctx.lr = 0x83249F14;
	sub_83248568(ctx, base);
loc_83249F14:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83249ec4
	if (ctx.cr6.lt) goto loc_83249EC4;
loc_83249F24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83249F2C"))) PPC_WEAK_FUNC(sub_83249F2C);
PPC_FUNC_IMPL(__imp__sub_83249F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83249F30"))) PPC_WEAK_FUNC(sub_83249F30);
PPC_FUNC_IMPL(__imp__sub_83249F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83249F38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r29,r4,r5
	ctx.r29.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x83249fa8
	if (!ctx.cr6.lt) goto loc_83249FA8;
loc_83249F50:
	// rlwinm r11,r31,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r8,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// slw r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// subfic r4,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r4.s64 = 1 - ctx.r11.s64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83249f9c
	if (ctx.cr6.eq) goto loc_83249F9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r4,r31,4,0,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r31.u32, 4) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// bl 0x83248630
	ctx.lr = 0x83249F9C;
	sub_83248630(ctx, base);
loc_83249F9C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83249f50
	if (ctx.cr6.lt) goto loc_83249F50;
loc_83249FA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83249FB0"))) PPC_WEAK_FUNC(sub_83249FB0);
PPC_FUNC_IMPL(__imp__sub_83249FB0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83249ff4
	if (!ctx.cr0.eq) goto loc_83249FF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83249ff4
	if (ctx.cr0.eq) goto loc_83249FF4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8324a000
	if (!ctx.cr6.gt) goto loc_8324A000;
loc_83249FF4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832497f0
	ctx.lr = 0x83249FFC;
	sub_832497F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8324A000:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8324A02C"))) PPC_WEAK_FUNC(sub_8324A02C);
PPC_FUNC_IMPL(__imp__sub_8324A02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324A030"))) PPC_WEAK_FUNC(sub_8324A030);
PPC_FUNC_IMPL(__imp__sub_8324A030) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// b 0x832b8050
	sub_832B8050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324A068"))) PPC_WEAK_FUNC(sub_8324A068);
PPC_FUNC_IMPL(__imp__sub_8324A068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8324A070;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8321d6d0
	ctx.lr = 0x8324A08C;
	sub_8321D6D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// bl 0x832b8050
	ctx.lr = 0x8324A0CC;
	sub_832B8050(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324A0D8"))) PPC_WEAK_FUNC(sub_8324A0D8);
PPC_FUNC_IMPL(__imp__sub_8324A0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8324A0E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
loc_8324A0F0:
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832474a8
	ctx.lr = 0x8324A0FC;
	sub_832474A8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8324a158
	if (ctx.cr6.eq) goto loc_8324A158;
	// rlwinm r30,r3,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8324a158
	if (ctx.cr6.eq) goto loc_8324A158;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83247ac0
	ctx.lr = 0x8324A124;
	sub_83247AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// li r31,256
	ctx.r31.s64 = 256;
	// beq cr6,0x8324a134
	if (ctx.cr6.eq) goto loc_8324A134;
	// rlwinm r31,r3,28,4,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
loc_8324A134:
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r4,r30,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// bl 0x83249c98
	ctx.lr = 0x8324A14C;
	sub_83249C98(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 256, ctx.xer);
	// blt cr6,0x8324a0f0
	if (ctx.cr6.lt) goto loc_8324A0F0;
loc_8324A158:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324A160"))) PPC_WEAK_FUNC(sub_8324A160);
PPC_FUNC_IMPL(__imp__sub_8324A160) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324a1a4
	if (!ctx.cr0.eq) goto loc_8324A1A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324a1a4
	if (ctx.cr0.eq) goto loc_8324A1A4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8324a1b0
	if (!ctx.cr6.gt) goto loc_8324A1B0;
loc_8324A1A4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x832497f0
	ctx.lr = 0x8324A1AC;
	sub_832497F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8324A1B0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8324A1DC"))) PPC_WEAK_FUNC(sub_8324A1DC);
PPC_FUNC_IMPL(__imp__sub_8324A1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324A1E0"))) PPC_WEAK_FUNC(sub_8324A1E0);
PPC_FUNC_IMPL(__imp__sub_8324A1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8324A1E8;
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
	// lwz r11,2468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8324a228
	if (!ctx.cr6.eq) goto loc_8324A228;
	// li r5,46
	ctx.r5.s64 = 46;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83225ce0
	ctx.lr = 0x8324A210;
	sub_83225CE0(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// stw r3,2468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2468, ctx.r3.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8324A228:
	// lwz r3,2468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2468);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324a25c
	if (!ctx.cr0.eq) goto loc_8324A25C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324a25c
	if (ctx.cr0.eq) goto loc_8324A25C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8324a268
	if (!ctx.cr6.gt) goto loc_8324A268;
loc_8324A25C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x832497f0
	ctx.lr = 0x8324A264;
	sub_832497F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8324A268:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r3,2468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2468);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324a2b4
	if (!ctx.cr0.eq) goto loc_8324A2B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324a2b4
	if (ctx.cr0.eq) goto loc_8324A2B4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8324a2c0
	if (!ctx.cr6.gt) goto loc_8324A2C0;
loc_8324A2B4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x832497f0
	ctx.lr = 0x8324A2BC;
	sub_832497F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8324A2C0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324A2E0"))) PPC_WEAK_FUNC(sub_8324A2E0);
PPC_FUNC_IMPL(__imp__sub_8324A2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8324A2E8;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r10,r27,40
	ctx.r10.s64 = ctx.r27.s64 * 40;
	// stw r27,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r27.u32);
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r21,r10,r11
	ctx.r21.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r4,r9,0,15,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFF8;
	// bl 0x832488a8
	ctx.lr = 0x8324A314;
	sub_832488A8(ctx, base);
	// lwz r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r18,28(r21)
	PPC_STORE_U32(ctx.r21.u32 + 28, ctx.r18.u32);
	// beq cr6,0x8324a330
	if (ctx.cr6.eq) goto loc_8324A330;
	// lwz r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x8324a334
	goto loc_8324A334;
loc_8324A330:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8324A334:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8324a344
	if (ctx.cr6.eq) goto loc_8324A344;
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// b 0x8324a364
	goto loc_8324A364;
loc_8324A344:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8324a360
	if (!ctx.cr6.eq) goto loc_8324A360;
	// lwz r11,28(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28);
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// b 0x8324a364
	goto loc_8324A364;
loc_8324A360:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8324A364:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r4,20(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// bl 0x8324a068
	ctx.lr = 0x8324A370;
	sub_8324A068(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r15,0
	ctx.r15.s64 = 0;
	// li r14,0
	ctx.r14.s64 = 0;
loc_8324A384:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8324a3a4
	if (!ctx.cr6.eq) goto loc_8324A3A4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832b8320
	ctx.lr = 0x8324A398;
	sub_832B8320(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8324a3a8
	if (ctx.cr0.eq) goto loc_8324A3A8;
loc_8324A3A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324A3A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324a7ec
	if (!ctx.cr0.eq) goto loc_8324A7EC;
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r9,32(r24)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + 32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r9,r10,0,0,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x832b8378
	ctx.lr = 0x8324A3D4;
	sub_832B8378(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// cmpwi cr6,r20,30
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 30, ctx.xer);
	// stb r19,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r19.u8);
	// bgt cr6,0x8324a420
	if (ctx.cr6.gt) goto loc_8324A420;
	// cmpwi cr6,r20,29
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 29, ctx.xer);
	// bge cr6,0x8324a408
	if (!ctx.cr6.lt) goto loc_8324A408;
	// cmpwi cr6,r20,24
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 24, ctx.xer);
	// blt cr6,0x8324a434
	if (ctx.cr6.lt) goto loc_8324A434;
	// cmpwi cr6,r20,25
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 25, ctx.xer);
	// ble cr6,0x8324a408
	if (!ctx.cr6.gt) goto loc_8324A408;
	// cmpwi cr6,r20,27
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 27, ctx.xer);
	// bne cr6,0x8324a434
	if (!ctx.cr6.eq) goto loc_8324A434;
loc_8324A408:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// bne cr6,0x8324a7a8
	if (!ctx.cr6.eq) goto loc_8324A7A8;
	// li r16,256
	ctx.r16.s64 = 256;
	// b 0x8324a460
	goto loc_8324A460;
loc_8324A420:
	// cmpwi cr6,r20,33
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 33, ctx.xer);
	// beq cr6,0x8324a450
	if (ctx.cr6.eq) goto loc_8324A450;
	// ble cr6,0x8324a434
	if (!ctx.cr6.gt) goto loc_8324A434;
	// cmpwi cr6,r20,37
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 37, ctx.xer);
	// ble cr6,0x8324a450
	if (!ctx.cr6.gt) goto loc_8324A450;
loc_8324A434:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x8324a460
	if (!ctx.cr6.eq) goto loc_8324A460;
	// li r4,3533
	ctx.r4.s64 = 3533;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324A450;
	sub_83204D78(ctx, base);
loc_8324A450:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x8324a7b4
	if (!ctx.cr6.eq) goto loc_8324A7B4;
loc_8324A460:
	// lwz r4,12(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8324a558
	if (ctx.cr6.eq) goto loc_8324A558;
	// clrlwi. r11,r15,24
	ctx.r11.u64 = ctx.r15.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324a55c
	if (!ctx.cr0.eq) goto loc_8324A55C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832a9108
	ctx.lr = 0x8324A47C;
	sub_832A9108(ctx, base);
	// b 0x8324a4c4
	goto loc_8324A4C4;
loc_8324A480:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x8324a4b8
	if (!ctx.cr6.eq) goto loc_8324A4B8;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8324a7c0
	if (!ctx.cr6.eq) goto loc_8324A7C0;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x832a9260
	ctx.lr = 0x8324A4B0;
	sub_832A9260(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324a4d0
	if (!ctx.cr0.eq) goto loc_8324A4D0;
loc_8324A4B8:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832a9130
	ctx.lr = 0x8324A4C4;
	sub_832A9130(ctx, base);
loc_8324A4C4:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8324a480
	if (!ctx.cr0.eq) goto loc_8324A480;
	// b 0x8324a55c
	goto loc_8324A55C;
loc_8324A4D0:
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// rlwinm r5,r11,28,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83247230
	ctx.lr = 0x8324A4F4;
	sub_83247230(ctx, base);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,4080
	ctx.r11.s64 = 267386880;
	// lwz r8,4(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// rlwimi r10,r9,20,3,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0x1FF00000) | (ctx.r10.u64 & 0xFFFFFFFFE00FFFFF);
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwimi r8,r9,4,25,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0x70) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF8F);
	// rlwinm r9,r10,0,3,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FF00000;
	// stw r8,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r8.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8324a534
	if (!ctx.cr6.gt) goto loc_8324A534;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8324a1e0
	ctx.lr = 0x8324A534;
	sub_8324A1E0(ctx, base);
loc_8324A534:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8324a7c8
	if (!ctx.cr6.eq) goto loc_8324A7C8;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// lbz r19,80(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r15,1
	ctx.r15.s64 = 1;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// b 0x8324a55c
	goto loc_8324A55C;
loc_8324A558:
	// li r14,1
	ctx.r14.s64 = 1;
loc_8324A55C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// lwz r25,28(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r28,32(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// ble cr6,0x8324a580
	if (!ctx.cr6.gt) goto loc_8324A580;
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4, ctx.xer);
	// bgt cr6,0x8324a7d4
	if (ctx.cr6.gt) goto loc_8324A7D4;
loc_8324A580:
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x8324a5b8
	if (ctx.cr6.eq) goto loc_8324A5B8;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// ble cr6,0x8324a5b8
	if (!ctx.cr6.gt) goto loc_8324A5B8;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r10,r11,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8324a5b8
	if (ctx.cr0.eq) goto loc_8324A5B8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8324A5B8:
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4, ctx.xer);
	// ble cr6,0x8324a5cc
	if (!ctx.cr6.gt) goto loc_8324A5CC;
	// addi r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 3;
	// li r28,4
	ctx.r28.s64 = 4;
	// rlwinm r25,r11,30,2,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
loc_8324A5CC:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8324a5f4
	if (!ctx.cr6.eq) goto loc_8324A5F4;
	// clrlwi. r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8324a7e0
	if (!ctx.cr0.eq) goto loc_8324A7E0;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// bgt cr6,0x8324a7e0
	if (ctx.cr6.gt) goto loc_8324A7E0;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bgt cr6,0x8324a7e0
	if (ctx.cr6.gt) goto loc_8324A7E0;
loc_8324A5F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8324a604
	if (!ctx.cr6.eq) goto loc_8324A604;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8324A604:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lwz r26,8(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r16,r25,r16
	ctx.r16.u64 = ctx.r25.u64 + ctx.r16.u64;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// bne 0x8324a6a4
	if (!ctx.cr0.eq) goto loc_8324A6A4;
loc_8324A61C:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// blt cr6,0x8324a62c
	if (ctx.cr6.lt) goto loc_8324A62C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8324A62C:
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// add r29,r11,r18
	ctx.r29.u64 = ctx.r11.u64 + ctx.r18.u64;
loc_8324A63C:
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83247190
	ctx.lr = 0x8324A650;
	sub_83247190(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8324a674
	if (ctx.cr6.eq) goto loc_8324A674;
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8324a674
	if (!ctx.cr6.lt) goto loc_8324A674;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwimi r10,r11,27,1,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x78000000) | (ctx.r10.u64 & 0xFFFFFFFF87FFFFFF);
	// oris r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 67108864;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8324A674:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x8324a63c
	if (!ctx.cr0.eq) goto loc_8324A63C;
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
	// bne cr6,0x8324a61c
	if (!ctx.cr6.eq) goto loc_8324A61C;
	// b 0x8324a754
	goto loc_8324A754;
loc_8324A6A4:
	// lwz r27,20(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
loc_8324A6B0:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// blt cr6,0x8324a6c0
	if (ctx.cr6.lt) goto loc_8324A6C0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_8324A6C0:
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	// add r29,r11,r18
	ctx.r29.u64 = ctx.r11.u64 + ctx.r18.u64;
loc_8324A6CC:
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83247190
	ctx.lr = 0x8324A6E0;
	sub_83247190(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8324a710
	if (ctx.cr6.eq) goto loc_8324A710;
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8324a704
	if (!ctx.cr6.lt) goto loc_8324A704;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwimi r10,r11,27,1,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x78000000) | (ctx.r10.u64 & 0xFFFFFFFF87FFFFFF);
	// oris r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 67108864;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8324A704:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
loc_8324A710:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bne 0x8324a6cc
	if (!ctx.cr0.eq) goto loc_8324A6CC;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r27,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r27.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8324a6b0
	if (!ctx.cr6.eq) goto loc_8324A6B0;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r27,284(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// stw r11,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
loc_8324A754:
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// ble cr6,0x8324a79c
	if (!ctx.cr6.gt) goto loc_8324A79C;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x8324a79c
	if (!ctx.cr6.lt) goto loc_8324A79C;
	// rlwinm r11,r22,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r22,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r22.s64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8324A774:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8324a790
	if (!ctx.cr6.eq) goto loc_8324A790;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8324A790:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x8324a774
	if (!ctx.cr0.eq) goto loc_8324A774;
loc_8324A79C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// b 0x8324a384
	goto loc_8324A384;
loc_8324A7A8:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324A7B4;
	sub_83204D78(ctx, base);
loc_8324A7B4:
	// li r4,3533
	ctx.r4.s64 = 3533;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324A7C0;
	sub_83204D78(ctx, base);
loc_8324A7C0:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x83204d78
	ctx.lr = 0x8324A7C8;
	sub_83204D78(ctx, base);
loc_8324A7C8:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324A7D4;
	sub_83204D78(ctx, base);
loc_8324A7D4:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324A7E0;
	sub_83204D78(ctx, base);
loc_8324A7E0:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324A7EC;
	sub_83204D78(ctx, base);
loc_8324A7EC:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r11,r11,29,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3FFF;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8324a89c
	if (!ctx.cr6.eq) goto loc_8324A89C;
	// clrlwi. r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324a80c
	if (ctx.cr0.eq) goto loc_8324A80C;
	// clrlwi. r11,r15,24
	ctx.r11.u64 = ctx.r15.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324a89c
	if (!ctx.cr0.eq) goto loc_8324A89C;
loc_8324A80C:
	// lwz r10,980(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 980);
	// addi r11,r17,948
	ctx.r11.s64 = ctx.r17.s64 + 948;
	// cmplwi cr6,r16,256
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 256, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// stw r24,980(r17)
	PPC_STORE_U32(ctx.r17.u32 + 980, ctx.r24.u32);
	// blt cr6,0x8324a82c
	if (ctx.cr6.lt) goto loc_8324A82C;
	// li r11,256
	ctx.r11.s64 = 256;
loc_8324A82C:
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// rlwimi r10,r11,16,7,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1FF0000) | (ctx.r10.u64 & 0xFFFFFFFFFE00FFFF);
	// rlwinm. r11,r10,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x70;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r10.u32);
	// bne 0x8324a894
	if (!ctx.cr0.eq) goto loc_8324A894;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm. r11,r11,0,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324a894
	if (ctx.cr0.eq) goto loc_8324A894;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324A854:
	// lwz r9,28(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwimi r7,r8,18,12,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 18) & 0xC0000) | (ctx.r7.u64 & 0xFFFFFFFFFFF3FFFF);
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r9,28(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,0,12,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFC0FFFFF;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r9,r9,29,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x3FFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8324a854
	if (ctx.cr6.lt) goto loc_8324A854;
loc_8324A894:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_8324A89C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324A8A8;
	sub_83204D78(ctx, base);
}

__attribute__((alias("__imp__sub_8324A8A8"))) PPC_WEAK_FUNC(sub_8324A8A8);
PPC_FUNC_IMPL(__imp__sub_8324A8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8324A8B0;
	__savegprlr_14(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r17,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r17.u32);
	// lwz r11,88(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8324a8cc
	if (ctx.cr6.eq) goto loc_8324A8CC;
	// bl 0x83248950
	ctx.lr = 0x8324A8CC;
	sub_83248950(ctx, base);
loc_8324A8CC:
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r17,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r17.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82cb16f0
	ctx.lr = 0x8324A8E0;
	sub_82CB16F0(ctx, base);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// li r14,0
	ctx.r14.s64 = 0;
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// stw r17,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// clrlwi. r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// std r14,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r14.u64);
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// std r14,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r14.u64);
	// std r14,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r14.u64);
	// stw r14,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r14.u32);
	// std r14,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r14.u64);
	// stw r14,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r14.u32);
	// beq 0x8324a928
	if (ctx.cr0.eq) goto loc_8324A928;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8324A928:
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r15,1
	ctx.r15.s64 = 1;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324a9b4
	if (!ctx.cr0.eq) goto loc_8324A9B4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8324a9b4
	if (ctx.cr0.eq) goto loc_8324A9B4;
loc_8324A940:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x8324a99c
	if (!ctx.cr6.eq) goto loc_8324A99C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x8324A968;
	sub_8321CE60(ctx, base);
	// addi r10,r31,-8
	ctx.r10.s64 = ctx.r31.s64 + -8;
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// mulli r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 * 40;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8324a99c
	if (ctx.cr6.eq) goto loc_8324A99C;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_8324A99C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324a9b4
	if (!ctx.cr0.eq) goto loc_8324A9B4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8324a940
	if (!ctx.cr6.eq) goto loc_8324A940;
loc_8324A9B4:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324ac38
	if (ctx.cr0.eq) goto loc_8324AC38;
	// lwz r11,16(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8324aa8c
	if (!ctx.cr6.gt) goto loc_8324AA8C;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
loc_8324A9D0:
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// add r7,r5,r10
	ctx.r7.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r9,36(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8324aa78
	if (ctx.cr6.eq) goto loc_8324AA78;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324aa78
	if (ctx.cr0.eq) goto loc_8324AA78;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8324aa24
	if (ctx.cr6.eq) goto loc_8324AA24;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
loc_8324AA00:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8324aa1c
	if (ctx.cr6.eq) goto loc_8324AA1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8324aa00
	if (ctx.cr6.lt) goto loc_8324AA00;
loc_8324AA1C:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8324aa78
	if (ctx.cr6.lt) goto loc_8324AA78;
loc_8324AA24:
	// lwz r11,16(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8324aa78
	if (!ctx.cr6.gt) goto loc_8324AA78;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
loc_8324AA38:
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// lwz r9,36(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8324aa64
	if (!ctx.cr6.eq) goto loc_8324AA64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r4,r9,0,2,2
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8324aa64
	if (!ctx.cr0.eq) goto loc_8324AA64;
	// oris r9,r9,8192
	ctx.r9.u64 = ctx.r9.u64 | 536870912;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8324AA64:
	// lwz r11,16(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8324aa38
	if (ctx.cr6.lt) goto loc_8324AA38;
loc_8324AA78:
	// lwz r11,16(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,40
	ctx.r5.s64 = ctx.r5.s64 + 40;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8324a9d0
	if (ctx.cr6.lt) goto loc_8324A9D0;
loc_8324AA8C:
	// lwz r11,16(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8324ac38
	if (!ctx.cr6.gt) goto loc_8324AC38;
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
loc_8324AAA0:
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// add r27,r26,r11
	ctx.r27.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8324ac24
	if (ctx.cr6.eq) goto loc_8324AC24;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8324ac24
	if (ctx.cr0.eq) goto loc_8324AC24;
	// rlwinm. r11,r11,0,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// beq 0x8324ac24
	if (ctx.cr0.eq) goto loc_8324AC24;
loc_8324AAD0:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832f24d0
	ctx.lr = 0x8324AAE4;
	sub_832F24D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8324AAEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8324ab14
	if (ctx.cr6.eq) goto loc_8324AB14;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8324ab0c
	if (ctx.cr6.eq) goto loc_8324AB0C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8324ac10
	if (!ctx.cr0.eq) goto loc_8324AC10;
loc_8324AB0C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8324aaec
	goto loc_8324AAEC;
loc_8324AB14:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8324ab9c
	if (!ctx.cr6.eq) goto loc_8324AB9C;
	// lwz r4,4(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324ab2c
	if (ctx.cr0.eq) goto loc_8324AB2C;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
loc_8324AB2C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832f02e0
	ctx.lr = 0x8324AB44;
	sub_832F02E0(ctx, base);
	// lwz r10,4(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324ab58
	if (ctx.cr0.eq) goto loc_8324AB58;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
loc_8324AB58:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// addi r6,r11,-36
	ctx.r6.s64 = ctx.r11.s64 + -36;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r6,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 50331648;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8324AB9C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83232e10
	ctx.lr = 0x8324ABA8;
	sub_83232E10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83232fe0
	ctx.lr = 0x8324ABB4;
	sub_83232FE0(ctx, base);
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r8,r11,18,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r7,r11,0,31,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// slw r11,r15,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r8.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r7,0,18,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFE3FFF;
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwimi r9,r10,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8324AC10:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r11,r11,29,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3FFF;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8324aad0
	if (ctx.cr6.lt) goto loc_8324AAD0;
loc_8324AC24:
	// lwz r11,16(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,40
	ctx.r26.s64 = ctx.r26.s64 + 40;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8324aaa0
	if (ctx.cr6.lt) goto loc_8324AAA0;
loc_8324AC38:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// mr r16,r14
	ctx.r16.u64 = ctx.r14.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8324ac4c
	if (ctx.cr0.eq) goto loc_8324AC4C;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8324AC4C:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8324b204
	if (!ctx.cr0.eq) goto loc_8324B204;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8324b204
	if (ctx.cr0.eq) goto loc_8324B204;
loc_8324AC64:
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x8324b16c
	if (!ctx.cr6.eq) goto loc_8324B16C;
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r22,r20,-8
	ctx.r22.s64 = ctx.r20.s64 + -8;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x8324AC90;
	sub_8321CE60(ctx, base);
	// lwzx r11,r3,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r22.u32);
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// clrlwi r30,r11,17
	ctx.r30.u64 = ctx.r11.u32 & 0x7FFF;
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// rlwinm r6,r10,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// mulli r21,r30,40
	ctx.r21.s64 = ctx.r30.s64 * 40;
	// rlwinm r5,r10,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// rlwinm r4,r10,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// add r23,r21,r11
	ctx.r23.u64 = ctx.r21.u64 + ctx.r11.u64;
	// bl 0x8321ce60
	ctx.lr = 0x8324ACBC;
	sub_8321CE60(ctx, base);
	// lwzx r11,r3,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r22.u32);
	// lwz r31,4(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// addi r19,r20,4
	ctx.r19.s64 = ctx.r20.s64 + 4;
	// rlwinm r11,r11,17,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FFF;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// addi r18,r11,1
	ctx.r18.s64 = ctx.r11.s64 + 1;
loc_8324ACD4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8324ad5c
	if (ctx.cr6.eq) goto loc_8324AD5C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8324ad54
	if (ctx.cr6.eq) goto loc_8324AD54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8324ad54
	if (ctx.cr0.eq) goto loc_8324AD54;
	// rlwinm. r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324ad20
	if (ctx.cr0.eq) goto loc_8324AD20;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// rlwinm r10,r10,0,15,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// rlwinm r11,r11,28,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x8324b21c
	if (ctx.cr6.gt) goto loc_8324B21C;
	// addi r18,r11,1
	ctx.r18.s64 = ctx.r11.s64 + 1;
loc_8324AD20:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8324ad3c
	if (ctx.cr6.lt) goto loc_8324AD3C;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// ble cr6,0x8324ad40
	if (!ctx.cr6.gt) goto loc_8324AD40;
loc_8324AD3C:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8324AD40:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324ad54
	if (ctx.cr0.eq) goto loc_8324AD54;
	// bl 0x83246ef0
	ctx.lr = 0x8324AD4C;
	sub_83246EF0(ctx, base);
	// slw r11,r15,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r3.u8 & 0x3F));
	// or r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_8324AD54:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x8324acd4
	goto loc_8324ACD4;
loc_8324AD5C:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r10,r11,28,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x8324ad90
	if (ctx.cr6.eq) goto loc_8324AD90;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8324ad88
	if (!ctx.cr6.eq) goto loc_8324AD88;
	// cmplwi cr6,r28,64
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 64, ctx.xer);
	// bne cr6,0x8324ad88
	if (!ctx.cr6.eq) goto loc_8324AD88;
	// rlwimi r11,r10,5,25,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// b 0x8324ad90
	goto loc_8324AD90;
loc_8324AD88:
	// slw r11,r15,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r10.u8 & 0x3F));
	// or r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_8324AD90:
	// rlwinm. r11,r28,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324ada4
	if (ctx.cr0.eq) goto loc_8324ADA4;
	// rlwinm. r28,r28,0,25,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x8324adac
	if (!ctx.cr0.eq) goto loc_8324ADAC;
	// ori r28,r28,4
	ctx.r28.u64 = ctx.r28.u64 | 4;
loc_8324ADA4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8324afc0
	if (ctx.cr6.eq) goto loc_8324AFC0;
loc_8324ADAC:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// andc r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 & ~ctx.r11.u64;
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324af8c
	if (!ctx.cr0.eq) goto loc_8324AF8C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8324b288
	if (!ctx.cr0.eq) goto loc_8324B288;
	// lwz r10,36(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8324b288
	if (!ctx.cr6.eq) goto loc_8324B288;
	// rlwinm r11,r11,0,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8324b228
	if (!ctx.cr6.eq) goto loc_8324B228;
loc_8324ADE8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8324ae04
	if (ctx.cr6.eq) goto loc_8324AE04;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// andc r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 & ~ctx.r11.u64;
	// subf. r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// beq 0x8324ae08
	if (ctx.cr0.eq) goto loc_8324AE08;
loc_8324AE04:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8324AE08:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324af84
	if (!ctx.cr0.eq) goto loc_8324AF84;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// andc r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 & ~ctx.r11.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r28,r11,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r11.s64;
	// subfic r25,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r25.s64 = 31 - ctx.r10.s64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x832f0aa8
	ctx.lr = 0x8324AE34;
	sub_832F0AA8(ctx, base);
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8321ce60
	ctx.lr = 0x8324AE50;
	sub_8321CE60(ctx, base);
	// add r26,r3,r22
	ctx.r26.u64 = ctx.r3.u64 + ctx.r22.u64;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
loc_8324AE58:
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8324ade8
	if (ctx.cr6.eq) goto loc_8324ADE8;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8324af70
	if (ctx.cr6.eq) goto loc_8324AF70;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r29,r30,7,29,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8324af70
	if (ctx.cr0.eq) goto loc_8324AF70;
	// bl 0x83246ef0
	ctx.lr = 0x8324AE80;
	sub_83246EF0(ctx, base);
	// cmpw cr6,r3,r25
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x8324af70
	if (!ctx.cr6.eq) goto loc_8324AF70;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8324aedc
	if (ctx.cr6.eq) goto loc_8324AEDC;
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// rlwinm r8,r30,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0xFF;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
loc_8324AEA4:
	// srw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r7,r15,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r7.u8 & 0x3F));
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x8324aea4
	if (!ctx.cr0.eq) goto loc_8324AEA4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8324aedc
	if (ctx.cr6.eq) goto loc_8324AEDC;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// subf. r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// beq 0x8324aee0
	if (ctx.cr0.eq) goto loc_8324AEE0;
loc_8324AEDC:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8324AEE0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324b27c
	if (ctx.cr0.eq) goto loc_8324B27C;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// rlwinm r11,r30,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x3;
	// lwz r9,12(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// li r8,40
	ctx.r8.s64 = 40;
	// rlwinm r10,r10,26,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFF;
	// subf r9,r9,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r9.s64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divw r4,r9,r8
	ctx.r4.s32 = ctx.r9.s32 / ctx.r8.s32;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832f24d0
	ctx.lr = 0x8324AF14;
	sub_832F24D0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,30,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// rlwinm r11,r11,0,17,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFE7FFF;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// ori r11,r11,16386
	ctx.r11.u64 = ctx.r11.u64 | 16386;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8324af44
	goto loc_8324AF44;
loc_8324AF3C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_8324AF44:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8324af3c
	if (!ctx.cr6.eq) goto loc_8324AF3C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8324AF70:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8324ae58
	if (!ctx.cr6.eq) goto loc_8324AE58;
	// addi r24,r31,8
	ctx.r24.s64 = ctx.r31.s64 + 8;
	// b 0x8324ae58
	goto loc_8324AE58;
loc_8324AF84:
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// add r23,r21,r11
	ctx.r23.u64 = ctx.r21.u64 + ctx.r11.u64;
loc_8324AF8C:
	// cmplwi cr6,r28,64
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 64, ctx.xer);
	// bne cr6,0x8324afa0
	if (!ctx.cr6.eq) goto loc_8324AFA0;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324b2ec
	if (ctx.cr0.eq) goto loc_8324B2EC;
loc_8324AFA0:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r10,r11,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r10,112
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 112, ctx.xer);
	// bne cr6,0x8324afc0
	if (!ctx.cr6.eq) goto loc_8324AFC0;
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// subfic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r10.s64;
	// rlwimi r11,r10,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
loc_8324AFC0:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r10,r11,25,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FF;
	// cmplw cr6,r18,r10
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8324afd8
	if (!ctx.cr6.gt) goto loc_8324AFD8;
	// rlwimi r11,r18,7,16,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r18.u32, 7) & 0xFF80) | (ctx.r11.u64 & 0xFFFFFFFFFFFF007F);
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
loc_8324AFD8:
	// lwz r31,4(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r11,r31,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8324b124
	if (!ctx.cr6.eq) goto loc_8324B124;
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x8324B000;
	sub_8321CE60(ctx, base);
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r30,r3,r22
	ctx.r30.u64 = ctx.r3.u64 + ctx.r22.u64;
	// bne 0x8324b038
	if (!ctx.cr0.eq) goto loc_8324B038;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r11,20,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1FFF8;
	// lwz r9,28(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwimi r10,r11,4,26,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0x30) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFCF);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_8324B038:
	// lwz r29,0(r19)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
loc_8324B03C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8324b16c
	if (ctx.cr6.eq) goto loc_8324B16C;
	// lwz r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8324b11c
	if (ctx.cr6.eq) goto loc_8324B11C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x8324b074
	if (ctx.cr6.eq) goto loc_8324B074;
	// cmplwi cr6,r11,99
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 99, ctx.xer);
	// beq cr6,0x8324b074
	if (ctx.cr6.eq) goto loc_8324B074;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// bne cr6,0x8324b078
	if (!ctx.cr6.eq) goto loc_8324B078;
loc_8324B074:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_8324B078:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// beq 0x8324b2f8
	if (ctx.cr0.eq) goto loc_8324B2F8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x8324B098;
	sub_8321CE60(ctx, base);
	// addi r11,r31,-24
	ctx.r11.s64 = ctx.r31.s64 + -24;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8324b0c8
	if (ctx.cr6.eq) goto loc_8324B0C8;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x8324b11c
	if (!ctx.cr6.gt) goto loc_8324B11C;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// ble cr6,0x8324b0c8
	if (!ctx.cr6.gt) goto loc_8324B0C8;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x8324b11c
	if (!ctx.cr6.eq) goto loc_8324B11C;
loc_8324B0C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8324b0f0
	if (!ctx.cr0.eq) goto loc_8324B0F0;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r9,r11,22,26,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 22) & 0x30) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFCF);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// b 0x8324b11c
	goto loc_8324B11C;
loc_8324B0F0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324b10c
	if (!ctx.cr0.eq) goto loc_8324B10C;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,16,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r9,16384
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16384, ctx.xer);
	// beq cr6,0x8324b11c
	if (ctx.cr6.eq) goto loc_8324B11C;
loc_8324B10C:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8324b300
	if (!ctx.cr6.eq) goto loc_8324B300;
loc_8324B11C:
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x8324b03c
	goto loc_8324B03C;
loc_8324B124:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8324b16c
	if (!ctx.cr6.eq) goto loc_8324B16C;
	// lwz r30,0(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
loc_8324B130:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8324b16c
	if (ctx.cr6.eq) goto loc_8324B16C;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8324b164
	if (ctx.cr6.eq) goto loc_8324B164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225908
	ctx.lr = 0x8324B14C;
	sub_83225908(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324b164
	if (ctx.cr0.eq) goto loc_8324B164;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// bne cr6,0x8324b30c
	if (!ctx.cr6.eq) goto loc_8324B30C;
loc_8324B164:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8324b130
	goto loc_8324B130;
loc_8324B16C:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x8324b1b4
	if (ctx.cr6.eq) goto loc_8324B1B4;
	// rlwinm r11,r16,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// bne 0x8324b18c
	if (!ctx.cr0.eq) goto loc_8324B18C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8324B18C:
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8324b1a4
	if (!ctx.cr6.eq) goto loc_8324B1A4;
loc_8324B194:
	// rlwinm r11,r20,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r16,r20
	ctx.r16.u64 = ctx.r20.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8324b1f0
	goto loc_8324B1F0;
loc_8324B1A4:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324b204
	if (!ctx.cr0.eq) goto loc_8324B204;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// b 0x8324b1fc
	goto loc_8324B1FC;
loc_8324B1B4:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8324b1c8
	if (!ctx.cr0.eq) goto loc_8324B1C8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8324B1C8:
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8324b1d8
	if (ctx.cr0.eq) goto loc_8324B1D8;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
loc_8324B1D8:
	// cmplw cr6,r20,r10
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8324b194
	if (ctx.cr6.eq) goto loc_8324B194;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8324b1ec
	if (ctx.cr6.eq) goto loc_8324B1EC;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8324B1EC:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_8324B1F0:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8324b204
	if (!ctx.cr0.eq) goto loc_8324B204;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_8324B1FC:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x8324ac64
	if (!ctx.cr6.eq) goto loc_8324AC64;
loc_8324B204:
	// lwz r11,780(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 780);
	// lis r30,-1
	ctx.r30.s64 = -65536;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8324b318
	if (ctx.cr6.eq) goto loc_8324B318;
	// lwz r31,776(r17)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r17.u32 + 776);
	// b 0x8324b344
	goto loc_8324B344;
loc_8324B21C:
	// li r4,3566
	ctx.r4.s64 = 3566;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324B228;
	sub_83204D78(ctx, base);
loc_8324B228:
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// beq 0x8324b23c
	if (ctx.cr0.eq) goto loc_8324B23C;
	// li r4,3548
	ctx.r4.s64 = 3548;
	// bl 0x83204d78
	ctx.lr = 0x8324B23C;
	sub_83204D78(ctx, base);
loc_8324B23C:
	// rlwinm. r11,r28,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324b24c
	if (ctx.cr0.eq) goto loc_8324B24C;
	// li r4,3598
	ctx.r4.s64 = 3598;
	// bl 0x83204d78
	ctx.lr = 0x8324B24C;
	sub_83204D78(ctx, base);
loc_8324B24C:
	// rlwinm. r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324b25c
	if (ctx.cr0.eq) goto loc_8324B25C;
	// li r4,3533
	ctx.r4.s64 = 3533;
	// bl 0x83204d78
	ctx.lr = 0x8324B25C;
	sub_83204D78(ctx, base);
loc_8324B25C:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324b274
	if (ctx.cr0.eq) goto loc_8324B274;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,-700
	ctx.r5.s64 = ctx.r11.s64 + -700;
	// bl 0x83204d78
	ctx.lr = 0x8324B274;
	sub_83204D78(ctx, base);
loc_8324B274:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x83204d78
	ctx.lr = 0x8324B27C;
	sub_83204D78(ctx, base);
loc_8324B27C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324B288;
	sub_83204D78(ctx, base);
loc_8324B288:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x832499b0
	ctx.lr = 0x8324B294;
	sub_832499B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8324b2ac
	if (ctx.cr0.eq) goto loc_8324B2AC;
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,4556
	ctx.r4.s64 = 4556;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324B2AC;
	sub_83204D78(ctx, base);
loc_8324B2AC:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r10,r10,-7660
	ctx.r10.s64 = ctx.r10.s64 + -7660;
	// rlwinm r11,r11,30,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1C;
	// addi r5,r8,-708
	ctx.r5.s64 = ctx.r8.s64 + -708;
	// rlwinm r7,r9,12,23,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x1FF;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82cb7580
	ctx.lr = 0x8324B2DC;
	sub_82CB7580(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,4556
	ctx.r4.s64 = 4556;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324B2EC;
	sub_83204D78(ctx, base);
loc_8324B2EC:
	// li r4,3599
	ctx.r4.s64 = 3599;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324B2F8;
	sub_83204D78(ctx, base);
loc_8324B2F8:
	// li r4,3512
	ctx.r4.s64 = 3512;
	// bl 0x83204d78
	ctx.lr = 0x8324B300;
	sub_83204D78(ctx, base);
loc_8324B300:
	// li r4,4539
	ctx.r4.s64 = 4539;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324B30C;
	sub_83204D78(ctx, base);
loc_8324B30C:
	// li r4,3548
	ctx.r4.s64 = 3548;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324B318;
	sub_83204D78(ctx, base);
loc_8324B318:
	// lwz r11,40(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 40);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324b32c
	if (ctx.cr0.eq) goto loc_8324B32C;
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// b 0x8324b344
	goto loc_8324B344;
loc_8324B32C:
	// lwz r11,48(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x10;
	// xori r31,r11,16
	ctx.r31.u64 = ctx.r11.u64 ^ 16;
loc_8324B344:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83246fd8
	ctx.lr = 0x8324B34C;
	sub_83246FD8(ctx, base);
	// lwz r11,48(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 48);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// add r30,r3,r31
	ctx.r30.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x8324b37c
	if (!ctx.cr6.eq) goto loc_8324B37C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832485d0
	ctx.lr = 0x8324B374;
	sub_832485D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8324b388
	goto loc_8324B388;
loc_8324B37C:
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x832485d0
	ctx.lr = 0x8324B384;
	sub_832485D0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
loc_8324B388:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83248698
	ctx.lr = 0x8324B394;
	sub_83248698(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8324b3ac
	if (ctx.cr6.eq) goto loc_8324B3AC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x832484e0
	ctx.lr = 0x8324B3AC;
	sub_832484E0(ctx, base);
loc_8324B3AC:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// bge cr6,0x8324b3c4
	if (!ctx.cr6.lt) goto loc_8324B3C4;
	// subfic r5,r30,32
	ctx.xer.ca = ctx.r30.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x832484e0
	ctx.lr = 0x8324B3C4;
	sub_832484E0(ctx, base);
loc_8324B3C4:
	// lwz r21,16(r17)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// beq cr6,0x8324b500
	if (ctx.cr6.eq) goto loc_8324B500;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
loc_8324B3E0:
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r23,r10,r23
	ctx.r23.u64 = ctx.r10.u64 | ctx.r23.u64;
	// beq 0x8324b4f0
	if (ctx.cr0.eq) goto loc_8324B4F0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,14,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3FFF0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// beq 0x8324b420
	if (ctx.cr0.eq) goto loc_8324B420;
	// rlwinm. r10,r11,0,16,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8324b8d8
	if (!ctx.cr0.eq) goto loc_8324B8D8;
	// rlwinm r11,r11,0,16,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE00FFFF;
	// b 0x8324b4ec
	goto loc_8324B4EC;
loc_8324B420:
	// rlwinm r10,r11,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// beq cr6,0x8324b4e8
	if (ctx.cr6.eq) goto loc_8324B4E8;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83249a40
	ctx.lr = 0x8324B440;
	sub_83249A40(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm. r10,r11,25,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8324b47c
	if (ctx.cr0.eq) goto loc_8324B47C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,12,23,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x1FF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8324b470
	if (ctx.cr6.gt) goto loc_8324B470;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8324b47c
	if (!ctx.cr6.lt) goto loc_8324B47C;
loc_8324B470:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8324b8e4
	if (!ctx.cr6.eq) goto loc_8324B8E4;
loc_8324B47C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r4,r10,12,23,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1FF;
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// bgt cr6,0x8324b4f0
	if (ctx.cr6.gt) goto loc_8324B4F0;
	// subf r10,r4,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r4.s64;
	// rlwinm r5,r11,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FF;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8324b4a0
	if (!ctx.cr6.lt) goto loc_8324B4A0;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_8324B4A0:
	// rlwimi r11,r5,16,7,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x1FF0000) | (ctx.r11.u64 & 0xFFFFFFFFFE00FFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r10,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8324b4dc
	if (ctx.cr6.lt) goto loc_8324B4DC;
	// beq cr6,0x8324b4d0
	if (ctx.cr6.eq) goto loc_8324B4D0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8324b4f0
	if (!ctx.cr6.eq) goto loc_8324B4F0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83249e20
	ctx.lr = 0x8324B4CC;
	sub_83249E20(ctx, base);
	// b 0x8324b4e4
	goto loc_8324B4E4;
loc_8324B4D0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83249f30
	ctx.lr = 0x8324B4D8;
	sub_83249F30(ctx, base);
	// b 0x8324b4e4
	goto loc_8324B4E4;
loc_8324B4DC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83249ea0
	ctx.lr = 0x8324B4E4;
	sub_83249EA0(ctx, base);
loc_8324B4E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8324B4E8:
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
loc_8324B4EC:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8324B4F0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplw cr6,r30,r21
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x8324b3e0
	if (ctx.cr6.lt) goto loc_8324B3E0;
loc_8324B500:
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r17,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r17.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82cb16f0
	ctx.lr = 0x8324B514;
	sub_82CB16F0(ctx, base);
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8324b614
	if (ctx.cr6.eq) goto loc_8324B614;
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
loc_8324B524:
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// add r26,r25,r11
	ctx.r26.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324b604
	if (!ctx.cr0.eq) goto loc_8324B604;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8324b604
	if (ctx.cr0.eq) goto loc_8324B604;
	// rlwinm r11,r11,0,3,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FF00000;
	// lis r10,4080
	ctx.r10.s64 = 267386880;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8324b604
	if (ctx.cr6.gt) goto loc_8324B604;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x82cb1160
	ctx.lr = 0x8324B564;
	sub_82CB1160(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8324a0d8
	ctx.lr = 0x8324B570;
	sub_8324A0D8(ctx, base);
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
loc_8324B578:
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8324b5f4
	if (ctx.cr0.eq) goto loc_8324B5F4;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r10,r29,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8324b5f4
	if (!ctx.cr0.eq) goto loc_8324B5F4;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r9,36(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8324b5f4
	if (!ctx.cr6.eq) goto loc_8324B5F4;
	// rlwinm r31,r11,12,23,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1FF;
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// bgt cr6,0x8324b5f4
	if (ctx.cr6.gt) goto loc_8324B5F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x832474a8
	ctx.lr = 0x8324B5C0;
	sub_832474A8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8324b5d8
	if (ctx.cr6.eq) goto loc_8324B5D8;
	// rlwinm r11,r29,16,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0x1FF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8324b8f0
	if (ctx.cr6.lt) goto loc_8324B8F0;
loc_8324B5D8:
	// rlwinm r5,r29,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0x1FF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x83249c98
	ctx.lr = 0x8324B5E8;
	sub_83249C98(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_8324B5F4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmplw cr6,r27,r21
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x8324b578
	if (ctx.cr6.lt) goto loc_8324B578;
loc_8324B604:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,40
	ctx.r25.s64 = ctx.r25.s64 + 40;
	// cmplw cr6,r24,r21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x8324b524
	if (ctx.cr6.lt) goto loc_8324B524;
loc_8324B614:
	// li r15,-1
	ctx.r15.s64 = -1;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8324b830
	if (ctx.cr6.eq) goto loc_8324B830;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8324b824
	if (ctx.cr6.eq) goto loc_8324B824;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
loc_8324B630:
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// add r24,r23,r11
	ctx.r24.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8324b814
	if (!ctx.cr0.eq) goto loc_8324B814;
	// lwz r10,36(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8324b814
	if (ctx.cr6.eq) goto loc_8324B814;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324b814
	if (!ctx.cr0.eq) goto loc_8324B814;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x82cb1160
	ctx.lr = 0x8324B668;
	sub_82CB1160(ctx, base);
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_8324B678:
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r10,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8324b6b0
	if (ctx.cr0.eq) goto loc_8324B6B0;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,36(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8324b6b0
	if (!ctx.cr6.eq) goto loc_8324B6B0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r10,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x1FF;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r4,r11,12,23,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1FF;
	// bl 0x83249d30
	ctx.lr = 0x8324B6B0;
	sub_83249D30(ctx, base);
loc_8324B6B0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x8324b678
	if (!ctx.cr0.eq) goto loc_8324B678;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8324a0d8
	ctx.lr = 0x8324B6C8;
	sub_8324A0D8(ctx, base);
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_8324B6D0:
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8324b734
	if (ctx.cr0.eq) goto loc_8324B734;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,36(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8324b734
	if (!ctx.cr6.eq) goto loc_8324B734;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FF;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r4,r10,12,23,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1FF;
	// bl 0x83249c98
	ctx.lr = 0x8324B708;
	sub_83249C98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,12,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1FF;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8324b71c
	if (!ctx.cr6.lt) goto loc_8324B71C;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_8324B71C:
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x8324b734
	if (!ctx.cr6.gt) goto loc_8324B734;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_8324B734:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x8324b6d0
	if (!ctx.cr0.eq) goto loc_8324B6D0;
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
loc_8324B748:
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r29,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324b804
	if (!ctx.cr0.eq) goto loc_8324B804;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,36(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8324b804
	if (!ctx.cr6.eq) goto loc_8324B804;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x8324b788
	if (ctx.cr6.eq) goto loc_8324B788;
	// rlwinm r5,r29,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0x1FF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x832483c0
	ctx.lr = 0x8324B788;
	sub_832483C0(ctx, base);
loc_8324B788:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8324b7a4
	if (ctx.cr6.eq) goto loc_8324B7A4;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x8324b7c0
	if (ctx.cr6.eq) goto loc_8324B7C0;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x8324b7c0
	if (!ctx.cr6.gt) goto loc_8324B7C0;
loc_8324B7A4:
	// rlwinm r5,r29,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0x1FF;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x832483c0
	ctx.lr = 0x8324B7B4;
	sub_832483C0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8324b7c0
	if (ctx.cr6.eq) goto loc_8324B7C0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8324B7C0:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8324b8fc
	if (ctx.cr6.eq) goto loc_8324B8FC;
	// rlwinm r5,r29,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0x1FF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x832482d8
	ctx.lr = 0x8324B7D8;
	sub_832482D8(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// clrlwi r5,r11,23
	ctx.r5.u64 = ctx.r11.u32 & 0x1FF;
	// bl 0x832482d8
	ctx.lr = 0x8324B7EC;
	sub_832482D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r30,20,3,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 20) & 0x1FF00000) | (ctx.r11.u64 & 0xFFFFFFFFE00FFFFF);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8324B804:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmplw cr6,r27,r21
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x8324b748
	if (ctx.cr6.lt) goto loc_8324B748;
loc_8324B814:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r23,r23,40
	ctx.r23.s64 = ctx.r23.s64 + 40;
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x8324b630
	if (ctx.cr6.lt) goto loc_8324B630;
loc_8324B824:
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8324a0d8
	ctx.lr = 0x8324B830;
	sub_8324A0D8(ctx, base);
loc_8324B830:
	// lwz r11,44(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 44);
	// stb r14,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r14.u8);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324bccc
	if (ctx.cr0.eq) goto loc_8324BCCC;
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8324bccc
	if (!ctx.cr0.eq) goto loc_8324BCCC;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8324bccc
	if (ctx.cr0.eq) goto loc_8324BCCC;
loc_8324B85C:
	// lwz r11,28(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8324bbf4
	if (!ctx.cr0.eq) goto loc_8324BBF4;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8324bbf4
	if (ctx.cr0.eq) goto loc_8324BBF4;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,628(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
loc_8324B87C:
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,12800
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12800, ctx.xer);
	// bne cr6,0x8324bbd8
	if (!ctx.cr6.eq) goto loc_8324BBD8;
	// lwz r19,44(r17)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r17.u32 + 44);
	// lwz r18,12(r19)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12);
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// beq cr6,0x8324bbd8
	if (ctx.cr6.eq) goto loc_8324BBD8;
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// bne cr6,0x8324bc14
	if (!ctx.cr6.eq) goto loc_8324BC14;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8324bb6c
	if (!ctx.cr6.eq) goto loc_8324BB6C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8324b8c4
	if (ctx.cr0.eq) goto loc_8324B8C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324B8C4:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8324b908
	if (ctx.cr0.eq) goto loc_8324B908;
loc_8324B8D0:
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x8324b988
	goto loc_8324B988;
loc_8324B8D8:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324B8E4;
	sub_83204D78(ctx, base);
loc_8324B8E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83249b98
	ctx.lr = 0x8324B8F0;
	sub_83249B98(ctx, base);
loc_8324B8F0:
	// li r4,3613
	ctx.r4.s64 = 3613;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324B8FC;
	sub_83204D78(ctx, base);
loc_8324B8FC:
	// li r4,3566
	ctx.r4.s64 = 3566;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324B908;
	sub_83204D78(ctx, base);
loc_8324B908:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8324b988
	if (ctx.cr0.eq) goto loc_8324B988;
loc_8324B914:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x8324b960
	if (!ctx.cr6.eq) goto loc_8324B960;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x8324B93C;
	sub_8321CE60(ctx, base);
	// addi r11,r24,-8
	ctx.r11.s64 = ctx.r24.s64 + -8;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8324b960
	if (ctx.cr0.eq) goto loc_8324B960;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x8324b980
	if (!ctx.cr6.eq) goto loc_8324B980;
loc_8324B960:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8324b8d0
	if (!ctx.cr0.eq) goto loc_8324B8D0;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8324b914
	if (!ctx.cr6.eq) goto loc_8324B914;
	// b 0x8324b988
	goto loc_8324B988;
loc_8324B980:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8324bb6c
	if (!ctx.cr6.eq) goto loc_8324BB6C;
loc_8324B988:
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8324bb64
	if (ctx.cr6.eq) goto loc_8324BB64;
	// lwz r20,12(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
loc_8324B9A4:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r10,r11,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x8324bae8
	if (!ctx.cr6.eq) goto loc_8324BAE8;
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm. r10,r28,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8324bae8
	if (!ctx.cr0.eq) goto loc_8324BAE8;
	// rlwinm. r22,r11,16,23,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FF;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x8324bae8
	if (ctx.cr0.eq) goto loc_8324BAE8;
	// rlwinm. r26,r28,29,18,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x3FFF;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x8324bad0
	if (ctx.cr0.eq) goto loc_8324BAD0;
	// lwz r27,28(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
loc_8324B9D8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// beq cr6,0x8324bac0
	if (ctx.cr6.eq) goto loc_8324BAC0;
	// cmpwi cr6,r10,37
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 37, ctx.xer);
	// beq cr6,0x8324bac0
	if (ctx.cr6.eq) goto loc_8324BAC0;
	// rlwinm. r10,r28,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8324bad0
	if (ctx.cr0.eq) goto loc_8324BAD0;
	// rlwinm r10,r11,28,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x8324bac0
	if (!ctx.cr6.lt) goto loc_8324BAC0;
	// rlwinm r11,r28,12,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 12) & 0x1FF;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
loc_8324BA14:
	// lwz r31,4(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r11,r31,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x8324baa0
	if (!ctx.cr6.eq) goto loc_8324BAA0;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r4,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324baa0
	if (ctx.cr0.eq) goto loc_8324BAA0;
	// rlwinm. r11,r4,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324baa0
	if (ctx.cr0.eq) goto loc_8324BAA0;
	// cmplw cr6,r8,r23
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x8324baa0
	if (ctx.cr6.eq) goto loc_8324BAA0;
	// rlwinm. r6,r4,29,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x3FFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8324ba98
	if (ctx.cr0.eq) goto loc_8324BA98;
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
loc_8324BA50:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lis r10,592
	ctx.r10.s64 = 38797312;
	// rlwinm r14,r11,0,6,11
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F00000;
	// cmplw cr6,r14,r10
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8324ba84
	if (!ctx.cr6.eq) goto loc_8324BA84;
	// rlwinm r11,r11,28,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// rlwinm r10,r31,16,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0x1FF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8324ba84
	if (!ctx.cr6.lt) goto loc_8324BA84;
	// rlwinm r10,r4,12,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0x1FF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8324ba94
	if (ctx.cr6.eq) goto loc_8324BA94;
loc_8324BA84:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8324ba50
	if (ctx.cr6.lt) goto loc_8324BA50;
loc_8324BA94:
	// lbz r14,80(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_8324BA98:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8324bab4
	if (ctx.cr6.lt) goto loc_8324BAB4;
loc_8324BAA0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8324ba14
	if (ctx.cr6.lt) goto loc_8324BA14;
loc_8324BAB4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8324bad0
	if (!ctx.cr6.lt) goto loc_8324BAD0;
loc_8324BAC0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8324b9d8
	if (ctx.cr6.lt) goto loc_8324B9D8;
loc_8324BAD0:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8324bae8
	if (!ctx.cr6.lt) goto loc_8324BAE8;
	// cmplw cr6,r29,r5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8324bae8
	if (!ctx.cr6.lt) goto loc_8324BAE8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
loc_8324BAE8:
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r23,r23,40
	ctx.r23.s64 = ctx.r23.s64 + 40;
	// cmplw cr6,r21,r30
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8324b9a4
	if (ctx.cr6.lt) goto loc_8324B9A4;
	// lwz r31,628(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// beq cr6,0x8324bb64
	if (ctx.cr6.eq) goto loc_8324BB64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f24d0
	ctx.lr = 0x8324BB18;
	sub_832F24D0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mulli r11,r25,40
	ctx.r11.s64 = ctx.r25.s64 * 40;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r10,r10,0,30,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,0,17,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFE7FFF;
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// ori r10,r10,16386
	ctx.r10.u64 = ctx.r10.u64 | 16386;
	// stw r10,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// oris r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 536870912;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r10,r9,7,16,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0xFF80) | (ctx.r10.u64 & 0xFFFFFFFFFFFF007F);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8324BB64:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8324bc20
	if (ctx.cr6.eq) goto loc_8324BC20;
loc_8324BB6C:
	// lwz r11,12(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8324bb84
	goto loc_8324BB84;
loc_8324BB7C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_8324BB84:
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x8324bb7c
	if (!ctx.cr6.eq) goto loc_8324BB7C;
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// stw r11,8(r19)
	PPC_STORE_U32(ctx.r19.u32 + 8, ctx.r11.u32);
	// stw r19,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r19.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r11,r11,0,19,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE001FFF;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r24,12(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12, ctx.r24.u32);
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// bl 0x8321d798
	ctx.lr = 0x8324BBBC;
	sub_8321D798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324bbd8
	if (ctx.cr0.eq) goto loc_8324BBD8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832f6cc8
	ctx.lr = 0x8324BBD8;
	sub_832F6CC8(ctx, base);
loc_8324BBD8:
	// rlwinm r11,r17,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8324bbf4
	if (!ctx.cr0.eq) goto loc_8324BBF4;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8324b87c
	if (!ctx.cr6.eq) goto loc_8324B87C;
loc_8324BBF4:
	// rlwinm r11,r16,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8324bccc
	if (!ctx.cr0.eq) goto loc_8324BCCC;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8324b85c
	if (!ctx.cr6.eq) goto loc_8324B85C;
	// b 0x8324bccc
	goto loc_8324BCCC;
loc_8324BC14:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324BC20;
	sub_83204D78(ctx, base);
loc_8324BC20:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324bcbc
	if (ctx.cr0.eq) goto loc_8324BCBC;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8324bcc0
	if (ctx.cr6.eq) goto loc_8324BCC0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8324BC3C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r11,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8324bc90
	if (ctx.cr0.eq) goto loc_8324BC90;
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r9,r9,0,14,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3FFF0;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8324bc90
	if (!ctx.cr0.eq) goto loc_8324BC90;
	// rlwinm. r11,r11,12,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324bc90
	if (!ctx.cr0.eq) goto loc_8324BC90;
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// clrlwi r9,r9,23
	ctx.r9.u64 = ctx.r9.u32 & 0x1FF;
	// add. r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8324bc90
	if (ctx.cr0.eq) goto loc_8324BC90;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x8324bca4
	if (ctx.cr6.eq) goto loc_8324BCA4;
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x8324bcb0
	if (ctx.cr6.eq) goto loc_8324BCB0;
loc_8324BC90:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8324bc3c
	if (ctx.cr6.lt) goto loc_8324BC3C;
	// b 0x8324bcc0
	goto loc_8324BCC0;
loc_8324BCA4:
	// li r4,3601
	ctx.r4.s64 = 3601;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324BCB0;
	sub_83204D78(ctx, base);
loc_8324BCB0:
	// li r4,3602
	ctx.r4.s64 = 3602;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324BCBC;
	sub_83204D78(ctx, base);
loc_8324BCBC:
	// li r14,1
	ctx.r14.s64 = 1;
loc_8324BCC0:
	// li r4,3600
	ctx.r4.s64 = 3600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204b08
	ctx.lr = 0x8324BCCC;
	sub_83204B08(ctx, base);
loc_8324BCCC:
	// lwz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r25,628(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8324be78
	if (ctx.cr6.eq) goto loc_8324BE78;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8324BCE4:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// add r31,r26,r11
	ctx.r31.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8324be68
	if (!ctx.cr0.eq) goto loc_8324BE68;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8324be68
	if (ctx.cr0.eq) goto loc_8324BE68;
	// rlwinm r10,r11,28,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// rlwinm r28,r11,25,23,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8324be44
	if (ctx.cr6.lt) goto loc_8324BE44;
	// beq cr6,0x8324be34
	if (ctx.cr6.eq) goto loc_8324BE34;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8324be20
	if (ctx.cr6.lt) goto loc_8324BE20;
	// bne cr6,0x8324befc
	if (!ctx.cr6.eq) goto loc_8324BEFC;
	// clrlwi. r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x8324bde4
	if (ctx.cr0.eq) goto loc_8324BDE4;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8324bd40
	if (ctx.cr0.eq) goto loc_8324BD40;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324BD40:
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324bde4
	if (!ctx.cr0.eq) goto loc_8324BDE4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8324bde4
	if (ctx.cr0.eq) goto loc_8324BDE4;
loc_8324BD54:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x8324bdac
	if (!ctx.cr6.eq) goto loc_8324BDAC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x8324BD7C;
	sub_8321CE60(ctx, base);
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r11,17
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFF;
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8324bdac
	if (!ctx.cr6.eq) goto loc_8324BDAC;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324bdac
	if (ctx.cr0.eq) goto loc_8324BDAC;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x8324bdc8
	if (ctx.cr6.eq) goto loc_8324BDC8;
loc_8324BDAC:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,40(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324bde4
	if (!ctx.cr0.eq) goto loc_8324BDE4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8324bd54
	if (!ctx.cr6.eq) goto loc_8324BD54;
	// b 0x8324bde4
	goto loc_8324BDE4;
loc_8324BDC8:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324bde4
	if (!ctx.cr0.eq) goto loc_8324BDE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83248478
	ctx.lr = 0x8324BDE0;
	sub_83248478(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_8324BDE4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83249878
	ctx.lr = 0x8324BDF0;
	sub_83249878(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwimi r11,r3,20,3,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 20) & 0x1FF00000) | (ctx.r11.u64 & 0xFFFFFFFFE00FFFFF);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq 0x8324be68
	if (ctx.cr0.eq) goto loc_8324BE68;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x8324be68
	goto loc_8324BE68;
loc_8324BE20:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832490c8
	ctx.lr = 0x8324BE30;
	sub_832490C8(ctx, base);
	// b 0x8324be50
	goto loc_8324BE50;
loc_8324BE34:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83249958
	ctx.lr = 0x8324BE40;
	sub_83249958(ctx, base);
	// b 0x8324be50
	goto loc_8324BE50;
loc_8324BE44:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83249900
	ctx.lr = 0x8324BE50;
	sub_83249900(ctx, base);
loc_8324BE50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r3,20,3,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 20) & 0x1FF00000) | (ctx.r11.u64 & 0xFFFFFFFFE00FFFFF);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8324BE68:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,40
	ctx.r26.s64 = ctx.r26.s64 + 40;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8324bce4
	if (ctx.cr6.lt) goto loc_8324BCE4;
loc_8324BE78:
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8324a0d8
	ctx.lr = 0x8324BE84;
	sub_8324A0D8(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8324be94
	if (ctx.cr0.eq) goto loc_8324BE94;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324BE94:
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324bfb4
	if (!ctx.cr0.eq) goto loc_8324BFB4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8324bfb4
	if (ctx.cr0.eq) goto loc_8324BFB4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r27,r11,-972
	ctx.r27.s64 = ctx.r11.s64 + -972;
loc_8324BEB4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// bne cr6,0x8324bf08
	if (!ctx.cr6.eq) goto loc_8324BF08;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x83248340
	ctx.lr = 0x8324BED0;
	sub_83248340(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwimi r3,r28,0,28,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0xF) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF0);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwimi r28,r11,0,0,27
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF0) | (ctx.r28.u64 & 0xFFFFFFFF0000000F);
	// clrlwi r11,r28,28
	ctx.r11.u64 = ctx.r28.u32 & 0xF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8324bf8c
	goto loc_8324BF8C;
loc_8324BEFC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83204d78
	ctx.lr = 0x8324BF08;
	sub_83204D78(ctx, base);
loc_8324BF08:
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// bne cr6,0x8324bf9c
	if (!ctx.cr6.eq) goto loc_8324BF9C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832539a0
	ctx.lr = 0x8324BF1C;
	sub_832539A0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
	// bl 0x8321ce60
	ctx.lr = 0x8324BF38;
	sub_8321CE60(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r6,r10,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// rlwinm r5,r10,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r10,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r11,r9,21,14,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 21) & 0x3FFF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFC000F);
	// clrlwi r29,r11,14
	ctx.r29.u64 = ctx.r11.u32 & 0x3FFFF;
	// bl 0x8321ce60
	ctx.lr = 0x8324BF64;
	sub_8321CE60(ctx, base);
	// lwzx r11,r3,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,0,19,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwimi r11,r29,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// clrlwi r11,r4,28
	ctx.r11.u64 = ctx.r4.u32 & 0xF;
loc_8324BF8C:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,-1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// bl 0x832edff8
	ctx.lr = 0x8324BF9C;
	sub_832EDFF8(ctx, base);
loc_8324BF9C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324bfb4
	if (!ctx.cr0.eq) goto loc_8324BFB4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8324beb4
	if (!ctx.cr6.eq) goto loc_8324BEB4;
loc_8324BFB4:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324c0d0
	if (ctx.cr0.eq) goto loc_8324C0D0;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8324c0d0
	if (!ctx.cr0.eq) goto loc_8324C0D0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8324c0d0
	if (ctx.cr0.eq) goto loc_8324C0D0;
loc_8324BFD8:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324c0b4
	if (!ctx.cr0.eq) goto loc_8324C0B4;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8324c0b4
	if (ctx.cr0.eq) goto loc_8324C0B4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// bne cr6,0x8324c0b4
	if (!ctx.cr6.eq) goto loc_8324C0B4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8321ce60
	ctx.lr = 0x8324C018;
	sub_8321CE60(ctx, base);
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r29,r3,r11
	ctx.r29.u64 = ctx.r3.u64 + ctx.r11.u64;
loc_8324C024:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8324c09c
	if (ctx.cr6.eq) goto loc_8324C09C;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x8324c080
	if (!ctx.cr6.eq) goto loc_8324C080;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8321ce60
	ctx.lr = 0x8324C058;
	sub_8321CE60(ctx, base);
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x8324c088
	if (ctx.cr6.eq) goto loc_8324C088;
loc_8324C080:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8324c024
	goto loc_8324C024;
loc_8324C088:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r10,r11,15,27,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 15) & 0x1F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// b 0x8324c0b4
	goto loc_8324C0B4;
loc_8324C09C:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832486f8
	ctx.lr = 0x8324C0A8;
	sub_832486F8(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r11,r3,28,27,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 28) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_8324C0B4:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8324c0d0
	if (!ctx.cr0.eq) goto loc_8324C0D0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8324bfd8
	if (!ctx.cr6.eq) goto loc_8324BFD8;
loc_8324C0D0:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324C0D8"))) PPC_WEAK_FUNC(sub_8324C0D8);
PPC_FUNC_IMPL(__imp__sub_8324C0D8) {
	PPC_FUNC_PROLOGUE();
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// beq cr6,0x8324c0ec
	if (ctx.cr6.eq) goto loc_8324C0EC;
	// cmplwi cr6,r3,8191
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8191, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8324C0EC:
	// li r3,8191
	ctx.r3.s64 = 8191;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C0F4"))) PPC_WEAK_FUNC(sub_8324C0F4);
PPC_FUNC_IMPL(__imp__sub_8324C0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C0F8"))) PPC_WEAK_FUNC(sub_8324C0F8);
PPC_FUNC_IMPL(__imp__sub_8324C0F8) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x832f7330
	sub_832F7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324C108"))) PPC_WEAK_FUNC(sub_8324C108);
PPC_FUNC_IMPL(__imp__sub_8324C108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C114"))) PPC_WEAK_FUNC(sub_8324C114);
PPC_FUNC_IMPL(__imp__sub_8324C114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C118"))) PPC_WEAK_FUNC(sub_8324C118);
PPC_FUNC_IMPL(__imp__sub_8324C118) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C128"))) PPC_WEAK_FUNC(sub_8324C128);
PPC_FUNC_IMPL(__imp__sub_8324C128) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-12544
	ctx.r11.s64 = ctx.r11.s64 + -12544;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C140"))) PPC_WEAK_FUNC(sub_8324C140);
PPC_FUNC_IMPL(__imp__sub_8324C140) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324c178
	if (ctx.cr0.eq) goto loc_8324C178;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// ble cr6,0x8324c170
	if (!ctx.cr6.gt) goto loc_8324C170;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x8324c170
	if (ctx.cr6.eq) goto loc_8324C170;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x8324c170
	if (ctx.cr6.eq) goto loc_8324C170;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x8324c178
	if (ctx.cr6.gt) goto loc_8324C178;
loc_8324C170:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8324C178:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C180"))) PPC_WEAK_FUNC(sub_8324C180);
PPC_FUNC_IMPL(__imp__sub_8324C180) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,11,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C190"))) PPC_WEAK_FUNC(sub_8324C190);
PPC_FUNC_IMPL(__imp__sub_8324C190) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// blt cr6,0x8324c1ac
	if (ctx.cr6.lt) goto loc_8324C1AC;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8324c1b0
	if (!ctx.cr6.gt) goto loc_8324C1B0;
loc_8324C1AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324C1B0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C1B8"))) PPC_WEAK_FUNC(sub_8324C1B8);
PPC_FUNC_IMPL(__imp__sub_8324C1B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C1C0"))) PPC_WEAK_FUNC(sub_8324C1C0);
PPC_FUNC_IMPL(__imp__sub_8324C1C0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,11
	ctx.r11.s64 = ctx.r5.s64 + 11;
	// addi r9,r4,11
	ctx.r9.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// stwx r8,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C1E4"))) PPC_WEAK_FUNC(sub_8324C1E4);
PPC_FUNC_IMPL(__imp__sub_8324C1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C1E8"))) PPC_WEAK_FUNC(sub_8324C1E8);
PPC_FUNC_IMPL(__imp__sub_8324C1E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C1F4"))) PPC_WEAK_FUNC(sub_8324C1F4);
PPC_FUNC_IMPL(__imp__sub_8324C1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C1F8"))) PPC_WEAK_FUNC(sub_8324C1F8);
PPC_FUNC_IMPL(__imp__sub_8324C1F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C204"))) PPC_WEAK_FUNC(sub_8324C204);
PPC_FUNC_IMPL(__imp__sub_8324C204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C208"))) PPC_WEAK_FUNC(sub_8324C208);
PPC_FUNC_IMPL(__imp__sub_8324C208) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r3,r11,4,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C214"))) PPC_WEAK_FUNC(sub_8324C214);
PPC_FUNC_IMPL(__imp__sub_8324C214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C218"))) PPC_WEAK_FUNC(sub_8324C218);
PPC_FUNC_IMPL(__imp__sub_8324C218) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r4,28,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C228"))) PPC_WEAK_FUNC(sub_8324C228);
PPC_FUNC_IMPL(__imp__sub_8324C228) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm. r8,r11,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8324c260
	if (ctx.cr0.eq) goto loc_8324C260;
	// rlwinm r9,r11,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324C240:
	// srw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8324c268
	if (!ctx.cr6.eq) goto loc_8324C268;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8324c240
	if (ctx.cr6.lt) goto loc_8324C240;
loc_8324C260:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8324C268:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C270"))) PPC_WEAK_FUNC(sub_8324C270);
PPC_FUNC_IMPL(__imp__sub_8324C270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C280"))) PPC_WEAK_FUNC(sub_8324C280);
PPC_FUNC_IMPL(__imp__sub_8324C280) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,92
	ctx.r11.s64 = ctx.r3.s64 + 92;
	// li r10,4
	ctx.r10.s64 = 4;
loc_8324C288:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8324c298
	if (!ctx.cr6.eq) goto loc_8324C298;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
loc_8324C298:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8324c288
	if (!ctx.cr0.eq) goto loc_8324C288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C2A8"))) PPC_WEAK_FUNC(sub_8324C2A8);
PPC_FUNC_IMPL(__imp__sub_8324C2A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C2B4"))) PPC_WEAK_FUNC(sub_8324C2B4);
PPC_FUNC_IMPL(__imp__sub_8324C2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C2B8"))) PPC_WEAK_FUNC(sub_8324C2B8);
PPC_FUNC_IMPL(__imp__sub_8324C2B8) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x832f6cc8
	sub_832F6CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324C2C4"))) PPC_WEAK_FUNC(sub_8324C2C4);
PPC_FUNC_IMPL(__imp__sub_8324C2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C2C8"))) PPC_WEAK_FUNC(sub_8324C2C8);
PPC_FUNC_IMPL(__imp__sub_8324C2C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// b 0x8324c2dc
	goto loc_8324C2DC;
loc_8324C2D4:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_8324C2DC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8324c2d4
	if (!ctx.cr6.eq) goto loc_8324C2D4;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C2EC"))) PPC_WEAK_FUNC(sub_8324C2EC);
PPC_FUNC_IMPL(__imp__sub_8324C2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C2F0"))) PPC_WEAK_FUNC(sub_8324C2F0);
PPC_FUNC_IMPL(__imp__sub_8324C2F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// b 0x8324c30c
	goto loc_8324C30C;
loc_8324C2FC:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8324c314
	if (ctx.cr6.eq) goto loc_8324C314;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8324C30C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8324c2fc
	if (!ctx.cr6.eq) goto loc_8324C2FC;
loc_8324C314:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C320"))) PPC_WEAK_FUNC(sub_8324C320);
PPC_FUNC_IMPL(__imp__sub_8324C320) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r3,r11,19,19,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1FFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C32C"))) PPC_WEAK_FUNC(sub_8324C32C);
PPC_FUNC_IMPL(__imp__sub_8324C32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C330"))) PPC_WEAK_FUNC(sub_8324C330);
PPC_FUNC_IMPL(__imp__sub_8324C330) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r11,r4,13,6,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 13) & 0x3FFE000) | (ctx.r11.u64 & 0xFFFFFFFFFC001FFF);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C340"))) PPC_WEAK_FUNC(sub_8324C340);
PPC_FUNC_IMPL(__imp__sub_8324C340) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r3,r11,6,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C34C"))) PPC_WEAK_FUNC(sub_8324C34C);
PPC_FUNC_IMPL(__imp__sub_8324C34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C350"))) PPC_WEAK_FUNC(sub_8324C350);
PPC_FUNC_IMPL(__imp__sub_8324C350) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C360"))) PPC_WEAK_FUNC(sub_8324C360);
PPC_FUNC_IMPL(__imp__sub_8324C360) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8324c390
	if (ctx.cr6.eq) goto loc_8324C390;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8324c388
	if (!ctx.cr6.eq) goto loc_8324C388;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8324c390
	if (!ctx.cr6.eq) goto loc_8324C390;
loc_8324C388:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8324c394
	goto loc_8324C394;
loc_8324C390:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8324C394:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C39C"))) PPC_WEAK_FUNC(sub_8324C39C);
PPC_FUNC_IMPL(__imp__sub_8324C39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C3A0"))) PPC_WEAK_FUNC(sub_8324C3A0);
PPC_FUNC_IMPL(__imp__sub_8324C3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r8,r11,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// srw r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x832eccb0
	sub_832ECCB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324C3CC"))) PPC_WEAK_FUNC(sub_8324C3CC);
PPC_FUNC_IMPL(__imp__sub_8324C3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C3D0"))) PPC_WEAK_FUNC(sub_8324C3D0);
PPC_FUNC_IMPL(__imp__sub_8324C3D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C3D8"))) PPC_WEAK_FUNC(sub_8324C3D8);
PPC_FUNC_IMPL(__imp__sub_8324C3D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C3DC"))) PPC_WEAK_FUNC(sub_8324C3DC);
PPC_FUNC_IMPL(__imp__sub_8324C3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C3E0"))) PPC_WEAK_FUNC(sub_8324C3E0);
PPC_FUNC_IMPL(__imp__sub_8324C3E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C3E8"))) PPC_WEAK_FUNC(sub_8324C3E8);
PPC_FUNC_IMPL(__imp__sub_8324C3E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C3F0"))) PPC_WEAK_FUNC(sub_8324C3F0);
PPC_FUNC_IMPL(__imp__sub_8324C3F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C404"))) PPC_WEAK_FUNC(sub_8324C404);
PPC_FUNC_IMPL(__imp__sub_8324C404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C408"))) PPC_WEAK_FUNC(sub_8324C408);
PPC_FUNC_IMPL(__imp__sub_8324C408) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C410"))) PPC_WEAK_FUNC(sub_8324C410);
PPC_FUNC_IMPL(__imp__sub_8324C410) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C418"))) PPC_WEAK_FUNC(sub_8324C418);
PPC_FUNC_IMPL(__imp__sub_8324C418) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C420"))) PPC_WEAK_FUNC(sub_8324C420);
PPC_FUNC_IMPL(__imp__sub_8324C420) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C434"))) PPC_WEAK_FUNC(sub_8324C434);
PPC_FUNC_IMPL(__imp__sub_8324C434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C438"))) PPC_WEAK_FUNC(sub_8324C438);
PPC_FUNC_IMPL(__imp__sub_8324C438) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// b 0x8324c44c
	goto loc_8324C44C;
loc_8324C444:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_8324C44C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8324c444
	if (!ctx.cr6.eq) goto loc_8324C444;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// addi r10,r10,26224
	ctx.r10.s64 = ctx.r10.s64 + 26224;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r11,r11,0,19,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFC001FFF;
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C470"))) PPC_WEAK_FUNC(sub_8324C470);
PPC_FUNC_IMPL(__imp__sub_8324C470) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8324c48c
	if (ctx.cr6.lt) goto loc_8324C48C;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8324c490
	if (!ctx.cr6.gt) goto loc_8324C490;
loc_8324C48C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324C490:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C4A4"))) PPC_WEAK_FUNC(sub_8324C4A4);
PPC_FUNC_IMPL(__imp__sub_8324C4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C4A8"))) PPC_WEAK_FUNC(sub_8324C4A8);
PPC_FUNC_IMPL(__imp__sub_8324C4A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324c4d0
	if (ctx.cr0.eq) goto loc_8324C4D0;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// ble cr6,0x8324c4c8
	if (!ctx.cr6.gt) goto loc_8324C4C8;
	// addi r11,r11,-25
	ctx.r11.s64 = ctx.r11.s64 + -25;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8324c4d0
	if (ctx.cr6.gt) goto loc_8324C4D0;
loc_8324C4C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8324C4D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C4D8"))) PPC_WEAK_FUNC(sub_8324C4D8);
PPC_FUNC_IMPL(__imp__sub_8324C4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// rlwinm. r11,r10,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324c594
	if (ctx.cr0.eq) goto loc_8324C594;
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324c594
	if (ctx.cr0.eq) goto loc_8324C594;
	// rlwinm. r11,r10,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// beq 0x8324c548
	if (ctx.cr0.eq) goto loc_8324C548;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8324C52C:
	// srw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r8,r3,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x8324c52c
	if (!ctx.cr0.eq) goto loc_8324C52C;
loc_8324C548:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm. r11,r10,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324c57c
	if (ctx.cr0.eq) goto loc_8324C57C;
	// rlwinm r8,r10,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8324C560:
	// srw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r6,r3,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x8324c560
	if (!ctx.cr0.eq) goto loc_8324C560;
loc_8324C57C:
	// and. r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324c77c
	if (!ctx.cr0.eq) goto loc_8324C77C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// b 0x8324c780
	goto loc_8324C780;
loc_8324C594:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x8324c5b8
	if (ctx.cr6.eq) goto loc_8324C5B8;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x8324c5b8
	if (ctx.cr6.eq) goto loc_8324C5B8;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// bne cr6,0x8324c64c
	if (!ctx.cr6.eq) goto loc_8324C64C;
loc_8324C5B8:
	// rlwinm. r7,r10,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8324c5ec
	if (ctx.cr0.eq) goto loc_8324C5EC;
	// rlwinm r8,r10,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324C5CC:
	// srw r30,r8,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r30,r30,30
	ctx.r30.u64 = ctx.r30.u32 & 0x3;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8324c698
	if (!ctx.cr6.eq) goto loc_8324C698;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8324c5cc
	if (ctx.cr6.lt) goto loc_8324C5CC;
loc_8324C5EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324C5F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324c77c
	if (!ctx.cr0.eq) goto loc_8324C77C;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x8324c77c
	if (!ctx.cr6.eq) goto loc_8324C77C;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8324c644
	if (ctx.cr6.eq) goto loc_8324C644;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r9,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
loc_8324C624:
	// xor r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi. r30,r30,30
	ctx.r30.u64 = ctx.r30.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8324c77c
	if (ctx.cr0.eq) goto loc_8324C77C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8324c624
	if (ctx.cr6.lt) goto loc_8324C624;
loc_8324C644:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_8324C64C:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x8324c6a0
	if (!ctx.cr6.eq) goto loc_8324C6A0;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm. r11,r10,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324c6a8
	if (ctx.cr0.eq) goto loc_8324C6A8;
	// rlwinm r8,r10,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8324C678:
	// srw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r7,r3,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r7.u8 & 0x3F));
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x8324c678
	if (!ctx.cr0.eq) goto loc_8324C678;
	// b 0x8324c6a8
	goto loc_8324C6A8;
loc_8324C698:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8324c5f0
	goto loc_8324C5F0;
loc_8324C6A0:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r5,r11,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
loc_8324C6A8:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8324C6AC:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8324c73c
	if (ctx.cr6.eq) goto loc_8324C73C;
	// lwz r8,16(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8324c734
	if (ctx.cr6.eq) goto loc_8324C734;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324c734
	if (ctx.cr0.eq) goto loc_8324C734;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8324c6e8
	if (ctx.cr6.lt) goto loc_8324C6E8;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ble cr6,0x8324c6ec
	if (!ctx.cr6.gt) goto loc_8324C6EC;
loc_8324C6E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324C6EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324c734
	if (ctx.cr0.eq) goto loc_8324C734;
	// rlwinm r11,r10,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x380000;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8324c734
	if (!ctx.cr6.eq) goto loc_8324C734;
	// lwz r11,44(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15872
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15872, ctx.xer);
	// bne cr6,0x8324c730
	if (!ctx.cr6.eq) goto loc_8324C730;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// slw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x8324c734
	goto loc_8324C734;
loc_8324C730:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8324C734:
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// b 0x8324c6ac
	goto loc_8324C6AC;
loc_8324C73C:
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// li r10,4
	ctx.r10.s64 = 4;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// b 0x8324c780
	goto loc_8324C780;
loc_8324C77C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8324C780:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C78C"))) PPC_WEAK_FUNC(sub_8324C78C);
PPC_FUNC_IMPL(__imp__sub_8324C78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C790"))) PPC_WEAK_FUNC(sub_8324C790);
PPC_FUNC_IMPL(__imp__sub_8324C790) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm. r7,r11,13,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8324c7f0
	if (ctx.cr0.eq) goto loc_8324C7F0;
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
loc_8324C7A4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8324c7c8
	if (ctx.cr6.eq) goto loc_8324C7C8;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8324c7cc
	if (!ctx.cr6.eq) goto loc_8324C7CC;
loc_8324C7C8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8324C7CC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8324c7e0
	if (ctx.cr0.eq) goto loc_8324C7E0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8324c7f8
	if (!ctx.cr0.eq) goto loc_8324C7F8;
loc_8324C7E0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8324c7a4
	if (ctx.cr6.lt) goto loc_8324C7A4;
loc_8324C7F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8324C7F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C800"))) PPC_WEAK_FUNC(sub_8324C800);
PPC_FUNC_IMPL(__imp__sub_8324C800) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

