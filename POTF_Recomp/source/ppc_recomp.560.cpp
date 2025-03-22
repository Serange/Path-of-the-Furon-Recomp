#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83206CF8"))) PPC_WEAK_FUNC(sub_83206CF8);
PPC_FUNC_IMPL(__imp__sub_83206CF8) {
	PPC_FUNC_PROLOGUE();
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x83206c40
	sub_83206C40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83206D00"))) PPC_WEAK_FUNC(sub_83206D00);
PPC_FUNC_IMPL(__imp__sub_83206D00) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83206d58
	if (ctx.cr6.eq) goto loc_83206D58;
loc_83206D14:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,20,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xF;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// andi. r8,r8,24702
	ctx.r8.u64 = ctx.r8.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x83206d4c
	if (ctx.cr0.eq) goto loc_83206D4C;
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// b 0x83206d44
	goto loc_83206D44;
loc_83206D3C:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_83206D44:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83206d3c
	if (!ctx.cr6.eq) goto loc_83206D3C;
loc_83206D4C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83206d14
	if (!ctx.cr6.eq) goto loc_83206D14;
loc_83206D58:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206D7C"))) PPC_WEAK_FUNC(sub_83206D7C);
PPC_FUNC_IMPL(__imp__sub_83206D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206D80"))) PPC_WEAK_FUNC(sub_83206D80);
PPC_FUNC_IMPL(__imp__sub_83206D80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83206dcc
	goto loc_83206DCC;
loc_83206D90:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// andi. r9,r9,24702
	ctx.r9.u64 = ctx.r9.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x83206dc8
	if (ctx.cr0.eq) goto loc_83206DC8;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x83206dc0
	goto loc_83206DC0;
loc_83206DB8:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_83206DC0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83206db8
	if (!ctx.cr6.eq) goto loc_83206DB8;
loc_83206DC8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83206DCC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83206d90
	if (!ctx.cr6.eq) goto loc_83206D90;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 * 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206DF0"))) PPC_WEAK_FUNC(sub_83206DF0);
PPC_FUNC_IMPL(__imp__sub_83206DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x83206DF8;
	__savegprlr_22(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83206e58
	if (ctx.cr0.eq) goto loc_83206E58;
loc_83206E18:
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r7,20,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0xF;
	// slw r7,r26,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r7.u8 & 0x3F));
	// andi. r7,r7,24702
	ctx.r7.u64 = ctx.r7.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq 0x83206e4c
	if (ctx.cr0.eq) goto loc_83206E4C;
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x83206e44
	goto loc_83206E44;
loc_83206E3C:
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_83206E44:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83206e3c
	if (!ctx.cr6.eq) goto loc_83206E3C;
loc_83206E4C:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83206e18
	if (!ctx.cr6.eq) goto loc_83206E18;
loc_83206E58:
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// cmplwi cr6,r11,49152
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49152, ctx.xer);
	// ble cr6,0x83206e80
	if (!ctx.cr6.gt) goto loc_83206E80;
	// li r27,-4096
	ctx.r27.s64 = -4096;
	// b 0x832071c8
	goto loc_832071C8;
loc_83206E80:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x83206e94
	if (!ctx.cr6.gt) goto loc_83206E94;
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,16389
	ctx.r27.u64 = ctx.r27.u64 | 16389;
	// b 0x832071c8
	goto loc_832071C8;
loc_83206E94:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83206f10
	if (ctx.cr0.eq) goto loc_83206F10;
loc_83206EA4:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// rlwimi r9,r6,19,0,12
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 19) & 0xFFF80000) | (ctx.r9.u64 & 0xFFFFFFFF0007FFFF);
	// slw r11,r26,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83206f04
	if (ctx.cr0.eq) goto loc_83206F04;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83206f04
	if (ctx.cr6.eq) goto loc_83206F04;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r9,r9,17,0,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFE0000;
loc_83206EE0:
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwimi r31,r5,0,15,2
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFFFFFFE001FFFF) | (ctx.r31.u64 & 0x1FFE0000);
	// addis r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 131072;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83206ee0
	if (!ctx.cr6.eq) goto loc_83206EE0;
loc_83206F04:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83206ea4
	if (!ctx.cr6.eq) goto loc_83206EA4;
loc_83206F10:
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r11,r7,12
	ctx.r11.s64 = ctx.r7.s64 * 12;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r28,r11,r4
	ctx.r28.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832071c8
	if (ctx.cr6.eq) goto loc_832071C8;
loc_83206F2C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// slw r11,r26,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r10,r11,2944
	ctx.r10.u64 = ctx.r11.u64 & 2944;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83206f5c
	if (ctx.cr0.eq) goto loc_83206F5C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r10,r11,13,19,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 13) & 0x1FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE000);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x83207120
	goto loc_83207120;
loc_83206F5C:
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83207120
	if (ctx.cr0.eq) goto loc_83207120;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83206f8c
	if (ctx.cr6.eq) goto loc_83206F8C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r9,r10,15,20,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 15) & 0xFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF000);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// b 0x83206f98
	goto loc_83206F98;
loc_83206F8C:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_83206F98:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83207068
	if (ctx.cr6.eq) goto loc_83207068;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_83206FB4:
	// cmplwi cr6,r5,12
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 12, ctx.xer);
	// bge cr6,0x83207060
	if (!ctx.cr6.lt) goto loc_83207060;
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lwz r25,16(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r24,r25,0,0,0
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x80000000;
	// addi r7,r7,-20
	ctx.r7.s64 = ctx.r7.s64 + -20;
	// cntlzw r24,r24
	ctx.r24.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// subfic r23,r7,3
	ctx.xer.ca = ctx.r7.u32 <= 3;
	ctx.r23.s64 = 3 - ctx.r7.s64;
	// rlwinm r24,r24,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 27) & 0x1;
	// rlwinm r7,r6,6,26,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0x3F;
	// subfe r6,r23,r23
	temp.u8 = (~ctx.r23.u32 + ctx.r23.u32 < ~ctx.r23.u32) | (~ctx.r23.u32 + ctx.r23.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r23.u64 + ctx.r23.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r22,r25,4,30,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0x2;
	// xori r24,r24,1
	ctx.r24.u64 = ctx.r24.u64 ^ 1;
	// addi r23,r7,-27
	ctx.r23.s64 = ctx.r7.s64 + -27;
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// or r6,r22,r24
	ctx.r6.u64 = ctx.r22.u64 | ctx.r24.u64;
	// subfic r24,r23,7
	ctx.xer.ca = ctx.r23.u32 <= 7;
	ctx.r24.s64 = 7 - ctx.r23.s64;
	// rlwinm r25,r25,2,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x1;
	// clrlwi. r23,r7,24
	ctx.r23.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// slw r6,r6,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// slw r25,r25,r8
	ctx.r25.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r8.u8 & 0x3F));
	// subfe r7,r24,r24
	temp.u8 = (~ctx.r24.u32 + ctx.r24.u32 < ~ctx.r24.u32) | (~ctx.r24.u32 + ctx.r24.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r24.u64 + ctx.r24.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r9,r25,r9
	ctx.r9.u64 = ctx.r25.u64 | ctx.r9.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bne 0x8320702c
	if (!ctx.cr0.eq) goto loc_8320702C;
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x83207030
	if (ctx.cr0.eq) goto loc_83207030;
loc_8320702C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_83207030:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r7.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r7.u32);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83206fb4
	if (!ctx.cr6.eq) goto loc_83206FB4;
loc_83207060:
	// cmplwi cr6,r8,6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 6, ctx.xer);
	// bgt cr6,0x832071d0
	if (ctx.cr6.gt) goto loc_832071D0;
loc_83207068:
	// rlwimi r10,r9,12,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwimi r11,r9,28,30,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// andi. r9,r7,36863
	ctx.r9.u64 = ctx.r7.u64 & 36863;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// rlwinm r8,r10,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// bgt cr6,0x832070dc
	if (ctx.cr6.gt) goto loc_832070DC;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bge cr6,0x832070d0
	if (!ctx.cr6.lt) goto loc_832070D0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83207120
	if (ctx.cr6.eq) goto loc_83207120;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// ble cr6,0x832070d0
	if (!ctx.cr6.gt) goto loc_832070D0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x83207104
	if (ctx.cr6.eq) goto loc_83207104;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x832070ec
	if (ctx.cr6.eq) goto loc_832070EC;
	// b 0x83207120
	goto loc_83207120;
loc_832070D0:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// rlwimi r11,r10,9,22,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 9) & 0x200) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFDFF);
	// b 0x8320711c
	goto loc_8320711C;
loc_832070DC:
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x83207104
	if (ctx.cr6.eq) goto loc_83207104;
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bne cr6,0x83207120
	if (!ctx.cr6.eq) goto loc_83207120;
loc_832070EC:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 & 10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x83207118
	goto loc_83207118;
loc_83207104:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 & 10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
loc_83207118:
	// rlwimi r11,r10,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
loc_8320711C:
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
loc_83207120:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r1,-112
	ctx.r10.s64 = ctx.r1.s64 + -112;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// bne cr6,0x8320717c
	if (!ctx.cr6.eq) goto loc_8320717C;
	// lwz r11,-104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r10,-100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	// lwz r9,-108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// lwz r7,-112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// or r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
loc_8320717C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83206f2c
	if (!ctx.cr6.eq) goto loc_83206F2C;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x832071c8
	if (!ctx.cr6.eq) goto loc_832071C8;
	// addi r11,r1,-104
	ctx.r11.s64 = ctx.r1.s64 + -104;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,-104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	// lwz r8,-100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	// lwz r10,-108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	// lwz r9,-112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// rlwinm r7,r11,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r9,r8,16,4,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFF0000;
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// or r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_832071C8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
loc_832071D0:
	// li r27,-4095
	ctx.r27.s64 = -4095;
	// b 0x832071c8
	goto loc_832071C8;
}

__attribute__((alias("__imp__sub_832071D8"))) PPC_WEAK_FUNC(sub_832071D8);
PPC_FUNC_IMPL(__imp__sub_832071D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832071E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x83206c40
	ctx.lr = 0x83207200;
	sub_83206C40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83207214
	if (!ctx.cr0.eq) goto loc_83207214;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,14
	ctx.r27.u64 = ctx.r27.u64 | 14;
	// b 0x8320726c
	goto loc_8320726C;
loc_83207214:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x83207244
	if (!ctx.cr6.eq) goto loc_83207244;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// b 0x83207258
	goto loc_83207258;
loc_83207244:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
loc_83207258:
	// bne cr6,0x83207260
	if (!ctx.cr6.eq) goto loc_83207260;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_83207260:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8320726c
	if (ctx.cr6.eq) goto loc_8320726C;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_8320726C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83207278"))) PPC_WEAK_FUNC(sub_83207278);
PPC_FUNC_IMPL(__imp__sub_83207278) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r11,r9,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x832071d8
	ctx.lr = 0x832072AC;
	sub_832071D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832072BC"))) PPC_WEAK_FUNC(sub_832072BC);
PPC_FUNC_IMPL(__imp__sub_832072BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832072C0"))) PPC_WEAK_FUNC(sub_832072C0);
PPC_FUNC_IMPL(__imp__sub_832072C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// beq cr6,0x83207384
	if (ctx.cr6.eq) goto loc_83207384;
	// li r7,1
	ctx.r7.s64 = 1;
loc_832072E0:
	// lwz r8,16(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// b 0x83207370
	goto loc_83207370;
loc_832072E8:
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8320736c
	if (ctx.cr0.eq) goto loc_8320736C;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83207338
	if (ctx.cr0.eq) goto loc_83207338;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8320736c
	if (!ctx.cr0.eq) goto loc_8320736C;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r9,r11,12,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// rlwinm r10,r11,7,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x3;
	// mulli r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 * 3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// slw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stwx r11,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r11.u32);
	// b 0x8320736c
	goto loc_8320736C;
loc_83207338:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r11,r11,12,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
loc_83207348:
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r5,r7,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r3,r9,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 | ctx.r3.u64;
	// stwx r5,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r5.u32);
	// bne 0x83207348
	if (!ctx.cr0.eq) goto loc_83207348;
loc_8320736C:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_83207370:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832072e8
	if (!ctx.cr6.eq) goto loc_832072E8;
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x832072e0
	if (!ctx.cr6.eq) goto loc_832072E0;
loc_83207384:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320738C"))) PPC_WEAK_FUNC(sub_8320738C);
PPC_FUNC_IMPL(__imp__sub_8320738C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207390"))) PPC_WEAK_FUNC(sub_83207390);
PPC_FUNC_IMPL(__imp__sub_83207390) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-14336
	ctx.r9.s64 = -939524096;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rlwimi r9,r5,16,12,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0xF0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stb r8,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r8.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r8,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r8.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r11,r4,26
	ctx.r11.u64 = ctx.r4.u32 & 0x3F;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r8,0,6,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3FFFFC0;
	// rlwimi r5,r6,31,0,0
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 31) & 0x80000000) | (ctx.r5.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm r8,r8,0,16,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwimi r5,r10,25,3,7
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0x1F000000) | (ctx.r5.u64 & 0xFFFFFFFFE0FFFFFF);
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r7,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r7.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r10,r6,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r7,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83207400"))) PPC_WEAK_FUNC(sub_83207400);
PPC_FUNC_IMPL(__imp__sub_83207400) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83207414"))) PPC_WEAK_FUNC(sub_83207414);
PPC_FUNC_IMPL(__imp__sub_83207414) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83207418"))) PPC_WEAK_FUNC(sub_83207418);
PPC_FUNC_IMPL(__imp__sub_83207418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83207420;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8320749c
	if (!ctx.cr6.gt) goto loc_8320749C;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x83207448
	if (!ctx.cr6.lt) goto loc_83207448;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_83207448:
	// lis r4,25735
	ctx.r4.s64 = 1686568960;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82299698
	ctx.lr = 0x83207454;
	sub_82299698(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8320746c
	if (!ctx.cr0.eq) goto loc_8320746C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x8320749c
	goto loc_8320749C;
loc_8320746C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83207498
	if (ctx.cr6.eq) goto loc_83207498;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82cb1160
	ctx.lr = 0x8320748C;
	sub_82CB1160(ctx, base);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822996c0
	ctx.lr = 0x83207498;
	sub_822996C0(ctx, base);
loc_83207498:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8320749C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832074A4"))) PPC_WEAK_FUNC(sub_832074A4);
PPC_FUNC_IMPL(__imp__sub_832074A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832074A8"))) PPC_WEAK_FUNC(sub_832074A8);
PPC_FUNC_IMPL(__imp__sub_832074A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832074BC"))) PPC_WEAK_FUNC(sub_832074BC);
PPC_FUNC_IMPL(__imp__sub_832074BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832074C0"))) PPC_WEAK_FUNC(sub_832074C0);
PPC_FUNC_IMPL(__imp__sub_832074C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// b 0x822996c0
	sub_822996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832074D4"))) PPC_WEAK_FUNC(sub_832074D4);
PPC_FUNC_IMPL(__imp__sub_832074D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832074D8"))) PPC_WEAK_FUNC(sub_832074D8);
PPC_FUNC_IMPL(__imp__sub_832074D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832074E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwimi r11,r10,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x832071d8
	ctx.lr = 0x83207518;
	sub_832071D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x832075fc
	if (ctx.cr0.lt) goto loc_832075FC;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r8,r10,-9768
	ctx.r8.s64 = ctx.r10.s64 + -9768;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwimi r7,r9,0,16,19
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xF000) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r7,r9,20,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// lbzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// rlwimi r9,r8,12,16,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r7,r8,20,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xF;
	// addi r7,r7,-5
	ctx.r7.s64 = ctx.r7.s64 + -5;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bgt cr6,0x83207574
	if (ctx.cr6.gt) goto loc_83207574;
	// rlwimi r9,r8,0,22,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFFFFBFF) | (ctx.r9.u64 & 0x400);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_83207574:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832075c8
	if (ctx.cr6.eq) goto loc_832075C8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832075f0
	if (ctx.cr6.eq) goto loc_832075F0;
	// stw r9,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r9.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_83207594:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83207594
	if (!ctx.cr6.eq) goto loc_83207594;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// rlwimi r7,r9,0,20,16
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r7.u64 & 0x7000);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r11,r8,12,17,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0x7000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF8FFF);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x832075f0
	goto loc_832075F0;
loc_832075C8:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r9.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r8,0,17,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x7000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF8FFF);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,20,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_832075F0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x832075fc
	if (ctx.cr6.eq) goto loc_832075FC;
	// stw r6,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r6.u32);
loc_832075FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83207604"))) PPC_WEAK_FUNC(sub_83207604);
PPC_FUNC_IMPL(__imp__sub_83207604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207608"))) PPC_WEAK_FUNC(sub_83207608);
PPC_FUNC_IMPL(__imp__sub_83207608) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x83207418
	sub_83207418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83207618"))) PPC_WEAK_FUNC(sub_83207618);
PPC_FUNC_IMPL(__imp__sub_83207618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320761C"))) PPC_WEAK_FUNC(sub_8320761C);
PPC_FUNC_IMPL(__imp__sub_8320761C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207620"))) PPC_WEAK_FUNC(sub_83207620);
PPC_FUNC_IMPL(__imp__sub_83207620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83207628;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83207654
	if (!ctx.cr6.eq) goto loc_83207654;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8320766c
	if (!ctx.cr6.eq) goto loc_8320766C;
loc_83207654:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832074d8
	ctx.lr = 0x83207664;
	sub_832074D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83207698
	if (ctx.cr0.lt) goto loc_83207698;
loc_8320766C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832071d8
	ctx.lr = 0x83207680;
	sub_832071D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83207698
	if (ctx.cr0.lt) goto loc_83207698;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83207698
	if (ctx.cr6.eq) goto loc_83207698;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_83207698:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832076A0"))) PPC_WEAK_FUNC(sub_832076A0);
PPC_FUNC_IMPL(__imp__sub_832076A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x832076A8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x83206c40
	ctx.lr = 0x832076DC;
	sub_83206C40(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x832076f0
	if (!ctx.cr0.eq) goto loc_832076F0;
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x8320781c
	goto loc_8320781C;
loc_832076F0:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r27,31,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x80000000;
	// clrlwi r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	// clrlwi r8,r11,2
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// rlwimi r10,r9,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// beq cr6,0x83207748
	if (ctx.cr6.eq) goto loc_83207748;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// andi. r10,r10,24702
	ctx.r10.u64 = ctx.r10.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83207780
	if (!ctx.cr0.eq) goto loc_83207780;
loc_83207748:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r1,204
	ctx.r6.s64 = ctx.r1.s64 + 204;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r10,r11,12,16,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0xF000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x832071d8
	ctx.lr = 0x83207774;
	sub_832071D8(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt 0x8320781c
	if (ctx.cr0.lt) goto loc_8320781C;
	// lwz r31,204(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
loc_83207780:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,17,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7000;
	// cmplwi cr6,r11,24576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24576, ctx.xer);
	// bne cr6,0x832077c4
	if (!ctx.cr6.eq) goto loc_832077C4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832074d8
	ctx.lr = 0x832077A4;
	sub_832074D8(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt 0x8320781c
	if (ctx.cr0.lt) goto loc_8320781C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,17,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7000;
	// cmplwi cr6,r11,24576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24576, ctx.xer);
	// bne cr6,0x832077c4
	if (!ctx.cr6.eq) goto loc_832077C4;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r24,0
	ctx.r24.s64 = 0;
loc_832077C4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x832077dc
	if (!ctx.cr6.eq) goto loc_832077DC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// b 0x832077e8
	goto loc_832077E8;
loc_832077DC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
loc_832077E8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// rlwinm r11,r10,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// rlwimi r11,r10,0,20,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r11.u64 & 0x7000);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt cr6,0x8320781c
	if (ctx.cr6.lt) goto loc_8320781C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x83207810
	if (ctx.cr6.eq) goto loc_83207810;
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
loc_83207810:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8320781c
	if (ctx.cr6.eq) goto loc_8320781C;
	// stw r30,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
loc_8320781C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83207828"))) PPC_WEAK_FUNC(sub_83207828);
PPC_FUNC_IMPL(__imp__sub_83207828) {
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
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83207854
	if (!ctx.cr6.gt) goto loc_83207854;
	// bl 0x83207418
	ctx.lr = 0x83207854;
	sub_83207418(ctx, base);
loc_83207854:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_83207870"))) PPC_WEAK_FUNC(sub_83207870);
PPC_FUNC_IMPL(__imp__sub_83207870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83207878;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832078a4
	if (ctx.cr0.eq) goto loc_832078A4;
	// li r26,-4094
	ctx.r26.s64 = -4094;
	// b 0x832079d0
	goto loc_832079D0;
loc_832078A4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83207950
	if (ctx.cr0.eq) goto loc_83207950;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x83206c40
	ctx.lr = 0x832078B8;
	sub_83206C40(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x832078cc
	if (!ctx.cr0.eq) goto loc_832078CC;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// b 0x832079d0
	goto loc_832079D0;
loc_832078CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832078e0
	if (!ctx.cr6.eq) goto loc_832078E0;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x832078e8
	goto loc_832078E8;
loc_832078E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_832078E8:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83207940
	if (ctx.cr6.lt) goto loc_83207940;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r27,1
	ctx.r29.s64 = ctx.r27.s64 + 1;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83207934
	if (!ctx.cr6.gt) goto loc_83207934;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83207418
	ctx.lr = 0x83207930;
	sub_83207418(ctx, base);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83207934:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x832079d0
	if (ctx.cr6.lt) goto loc_832079D0;
loc_83207940:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u32);
	// b 0x832079d0
	goto loc_832079D0;
loc_83207950:
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x83206c40
	ctx.lr = 0x83207958;
	sub_83206C40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8320796c
	if (!ctx.cr0.eq) goto loc_8320796C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x832079d4
	goto loc_832079D4;
loc_8320796C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r30,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x1;
	// rlwinm r10,r30,29,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x2;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r7,r30,30,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x80000000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r10,r10,29,0,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0xE0000000;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// rlwinm r11,r11,0,3,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFF9FFFFFFF;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832079c4
	if (ctx.cr6.eq) goto loc_832079C4;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x832079cc
	goto loc_832079CC;
loc_832079C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
loc_832079CC:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_832079D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_832079D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832079DC"))) PPC_WEAK_FUNC(sub_832079DC);
PPC_FUNC_IMPL(__imp__sub_832079DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832079E0"))) PPC_WEAK_FUNC(sub_832079E0);
PPC_FUNC_IMPL(__imp__sub_832079E0) {
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
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r10,r10,30832
	ctx.r10.s64 = ctx.r10.s64 + 30832;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82e6b238
	ctx.lr = 0x83207A48;
	sub_82E6B238(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x83207aa8
	if (ctx.cr0.lt) goto loc_83207AA8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83207a9c
	if (ctx.cr6.eq) goto loc_83207A9C;
loc_83207A5C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// andi. r10,r10,2944
	ctx.r10.u64 = ctx.r10.u64 & 2944;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83207a8c
	if (ctx.cr0.eq) goto loc_83207A8C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r10,r10,2,17,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7FFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_83207A8C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83207a5c
	if (!ctx.cr6.eq) goto loc_83207A5C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_83207A9C:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_83207AA8:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83207abc
	if (ctx.cr6.eq) goto loc_83207ABC;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x822996c0
	ctx.lr = 0x83207ABC;
	sub_822996C0(ctx, base);
loc_83207ABC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_83207AD8"))) PPC_WEAK_FUNC(sub_83207AD8);
PPC_FUNC_IMPL(__imp__sub_83207AD8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83207b04
	if (ctx.cr0.eq) goto loc_83207B04;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-9752
	ctx.r10.s64 = ctx.r10.s64 + -9752;
	// b 0x83207b0c
	goto loc_83207B0C;
loc_83207B04:
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// addi r10,r10,-9768
	ctx.r10.s64 = ctx.r10.s64 + -9768;
loc_83207B0C:
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r3,r11,9,0,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83207B1C"))) PPC_WEAK_FUNC(sub_83207B1C);
PPC_FUNC_IMPL(__imp__sub_83207B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207B20"))) PPC_WEAK_FUNC(sub_83207B20);
PPC_FUNC_IMPL(__imp__sub_83207B20) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// lis r9,-31907
	ctx.r9.s64 = -2091057152;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,-9736
	ctx.r9.s64 = ctx.r9.s64 + -9736;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 | ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83207B70"))) PPC_WEAK_FUNC(sub_83207B70);
PPC_FUNC_IMPL(__imp__sub_83207B70) {
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
	// lis r11,1536
	ctx.r11.s64 = 100663296;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x83207c0c
	if (ctx.cr6.gt) goto loc_83207C0C;
	// beq cr6,0x83207c04
	if (ctx.cr6.eq) goto loc_83207C04;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83207c88
	if (ctx.cr6.eq) goto loc_83207C88;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83207bf8
	if (ctx.cr6.eq) goto loc_83207BF8;
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83207bf0
	if (ctx.cr6.eq) goto loc_83207BF0;
	// lis r11,768
	ctx.r11.s64 = 50331648;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83207be8
	if (ctx.cr6.eq) goto loc_83207BE8;
	// lis r11,1024
	ctx.r11.s64 = 67108864;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83207be0
	if (ctx.cr6.eq) goto loc_83207BE0;
	// lis r11,1280
	ctx.r11.s64 = 83886080;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83207c54
	if (!ctx.cr6.eq) goto loc_83207C54;
	// lis r31,6
	ctx.r31.s64 = 393216;
	// b 0x83207bfc
	goto loc_83207BFC;
loc_83207BE0:
	// lis r31,6
	ctx.r31.s64 = 393216;
	// b 0x83207c88
	goto loc_83207C88;
loc_83207BE8:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x83207bfc
	goto loc_83207BFC;
loc_83207BF0:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x83207c88
	goto loc_83207C88;
loc_83207BF8:
	// lis r31,0
	ctx.r31.s64 = 0;
loc_83207BFC:
	// ori r31,r31,34952
	ctx.r31.u64 = ctx.r31.u64 | 34952;
	// b 0x83207c88
	goto loc_83207C88;
loc_83207C04:
	// lis r31,1
	ctx.r31.s64 = 65536;
	// b 0x83207c88
	goto loc_83207C88;
loc_83207C0C:
	// lis r11,1792
	ctx.r11.s64 = 117440512;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83207c84
	if (ctx.cr6.eq) goto loc_83207C84;
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83207c7c
	if (ctx.cr6.eq) goto loc_83207C7C;
	// lis r11,2304
	ctx.r11.s64 = 150994944;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83207c74
	if (ctx.cr6.eq) goto loc_83207C74;
	// lis r11,2560
	ctx.r11.s64 = 167772160;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83207c6c
	if (ctx.cr6.eq) goto loc_83207C6C;
	// lis r11,2816
	ctx.r11.s64 = 184549376;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83207c64
	if (ctx.cr6.eq) goto loc_83207C64;
	// lis r11,3072
	ctx.r11.s64 = 201326592;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83207c5c
	if (ctx.cr6.eq) goto loc_83207C5C;
loc_83207C54:
	// bl 0x82bea298
	ctx.lr = 0x83207C58;
	sub_82BEA298(ctx, base);
	// b 0x83207c88
	goto loc_83207C88;
loc_83207C5C:
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// b 0x83207bfc
	goto loc_83207BFC;
loc_83207C64:
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// b 0x83207c88
	goto loc_83207C88;
loc_83207C6C:
	// lis r31,96
	ctx.r31.s64 = 6291456;
	// b 0x83207c88
	goto loc_83207C88;
loc_83207C74:
	// lis r31,64
	ctx.r31.s64 = 4194304;
	// b 0x83207c88
	goto loc_83207C88;
loc_83207C7C:
	// lis r31,4
	ctx.r31.s64 = 262144;
	// b 0x83207bfc
	goto loc_83207BFC;
loc_83207C84:
	// lis r31,4
	ctx.r31.s64 = 262144;
loc_83207C88:
	// rlwinm. r11,r31,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83207ca4
	if (ctx.cr0.eq) goto loc_83207CA4;
	// lis r12,6
	ctx.r12.s64 = 393216;
	// ori r12,r12,34952
	ctx.r12.u64 = ctx.r12.u64 | 34952;
	// and. r11,r31,r12
	ctx.r11.u64 = ctx.r31.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83207ca4
	if (ctx.cr0.eq) goto loc_83207CA4;
	// bl 0x82bea298
	ctx.lr = 0x83207CA4;
	sub_82BEA298(ctx, base);
loc_83207CA4:
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

__attribute__((alias("__imp__sub_83207CBC"))) PPC_WEAK_FUNC(sub_83207CBC);
PPC_FUNC_IMPL(__imp__sub_83207CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207CC0"))) PPC_WEAK_FUNC(sub_83207CC0);
PPC_FUNC_IMPL(__imp__sub_83207CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83207CC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83207da8
	if (ctx.cr6.eq) goto loc_83207DA8;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x83207d6c
	if (ctx.cr6.eq) goto loc_83207D6C;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// beq cr6,0x83207d10
	if (ctx.cr6.eq) goto loc_83207D10;
	// cmplwi cr6,r3,9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9, ctx.xer);
	// bne cr6,0x83207da0
	if (!ctx.cr6.eq) goto loc_83207DA0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r31,34
	ctx.r31.s64 = 34;
	// stw r10,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r10.u32);
	// b 0x83207db0
	goto loc_83207DB0;
loc_83207D10:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r29,r11,512
	ctx.r29.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x83207d28
	if (!ctx.cr6.lt) goto loc_83207D28;
	// bl 0x82bea298
	ctx.lr = 0x83207D28;
	sub_82BEA298(ctx, base);
loc_83207D28:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x83207d34
	if (ctx.cr6.lt) goto loc_83207D34;
	// bl 0x82bea298
	ctx.lr = 0x83207D34;
	sub_82BEA298(ctx, base);
loc_83207D34:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x83207d64
	if (!ctx.cr6.eq) goto loc_83207D64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// li r9,4
	ctx.r9.s64 = 4;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r31,r31,35
	ctx.r31.s64 = ctx.r31.s64 + 35;
	// stw r11,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r11.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// b 0x83207db0
	goto loc_83207DB0;
loc_83207D64:
	// li r11,23
	ctx.r11.s64 = 23;
	// b 0x83207dac
	goto loc_83207DAC;
loc_83207D6C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83207d84
	if (ctx.cr6.lt) goto loc_83207D84;
	// bl 0x82bea298
	ctx.lr = 0x83207D84;
	sub_82BEA298(ctx, base);
loc_83207D84:
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83207db0
	if (!ctx.cr6.eq) goto loc_83207DB0;
loc_83207DA0:
	// bl 0x82bea298
	ctx.lr = 0x83207DA4;
	sub_82BEA298(ctx, base);
	// b 0x83207db0
	goto loc_83207DB0;
loc_83207DA8:
	// li r11,4
	ctx.r11.s64 = 4;
loc_83207DAC:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_83207DB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83207DBC"))) PPC_WEAK_FUNC(sub_83207DBC);
PPC_FUNC_IMPL(__imp__sub_83207DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207DC0"))) PPC_WEAK_FUNC(sub_83207DC0);
PPC_FUNC_IMPL(__imp__sub_83207DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83207DC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,52
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 52, ctx.xer);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// beq cr6,0x83207df0
	if (ctx.cr6.eq) goto loc_83207DF0;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// beq cr6,0x83207df0
	if (ctx.cr6.eq) goto loc_83207DF0;
	// bl 0x82bea298
	ctx.lr = 0x83207DF0;
	sub_82BEA298(ctx, base);
loc_83207DF0:
	// rlwinm r10,r30,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83207e14
	if (!ctx.cr6.eq) goto loc_83207E14;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x83207e18
	goto loc_83207E18;
loc_83207E14:
	// rlwinm r10,r11,0,16,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
loc_83207E18:
	// rlwinm r11,r30,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lis r9,228
	ctx.r9.s64 = 14942208;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83207e94
	if (ctx.cr6.eq) goto loc_83207E94;
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lis r8,-31907
	ctx.r8.s64 = -2091057152;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,-9736
	ctx.r8.s64 = ctx.r8.s64 + -9736;
	// rlwinm r9,r9,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r6,r11,18,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r5,r7,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC;
	// rlwinm r7,r7,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC;
	// lis r4,68
	ctx.r4.s64 = 4456448;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwzx r6,r6,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// ori r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 | 32;
	// lwzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// rlwinm r7,r5,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r8,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x83207ea4
	goto loc_83207EA4;
loc_83207E94:
	// lis r9,4
	ctx.r9.s64 = 262144;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_83207EA4:
	// lis r10,65
	ctx.r10.s64 = 4259840;
	// li r9,17476
	ctx.r9.s64 = 17476;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83207EC8"))) PPC_WEAK_FUNC(sub_83207EC8);
PPC_FUNC_IMPL(__imp__sub_83207EC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r11,r3,0,21,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x7FF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF800);
	// rlwinm r11,r11,0,21,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE7FF;
	// rlwinm r11,r11,0,4,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// oris r11,r11,15
	ctx.r11.u64 = ctx.r11.u64 | 983040;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83207EE4"))) PPC_WEAK_FUNC(sub_83207EE4);
PPC_FUNC_IMPL(__imp__sub_83207EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207EE8"))) PPC_WEAK_FUNC(sub_83207EE8);
PPC_FUNC_IMPL(__imp__sub_83207EE8) {
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x82bea298
	ctx.lr = 0x83207F0C;
	sub_82BEA298(ctx, base);
	// b 0x83207f14
	goto loc_83207F14;
loc_83207F10:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_83207F14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83207f10
	if (!ctx.cr0.eq) goto loc_83207F10;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_83207F3C"))) PPC_WEAK_FUNC(sub_83207F3C);
PPC_FUNC_IMPL(__imp__sub_83207F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207F40"))) PPC_WEAK_FUNC(sub_83207F40);
PPC_FUNC_IMPL(__imp__sub_83207F40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lis r9,68
	ctx.r9.s64 = 4456448;
	// li r8,71
	ctx.r8.s64 = 71;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r9,81
	ctx.r9.s64 = 81;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r4,r9,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// li r9,13107
	ctx.r9.s64 = 13107;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83207F8C"))) PPC_WEAK_FUNC(sub_83207F8C);
PPC_FUNC_IMPL(__imp__sub_83207F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207F90"))) PPC_WEAK_FUNC(sub_83207F90);
PPC_FUNC_IMPL(__imp__sub_83207F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83207F98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83207fbc
	if (ctx.cr6.eq) goto loc_83207FBC;
	// bl 0x82bea298
	ctx.lr = 0x83207FBC;
	sub_82BEA298(ctx, base);
loc_83207FBC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,71
	ctx.r9.s64 = 71;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r8,156(r26)
	PPC_STORE_U32(ctx.r26.u32 + 156, ctx.r8.u32);
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83207ff8
	if (ctx.cr0.eq) goto loc_83207FF8;
	// bl 0x82bea298
	ctx.lr = 0x83207FF8;
	sub_82BEA298(ctx, base);
loc_83207FF8:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// li r10,17
	ctx.r10.s64 = 17;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r9,88
	ctx.r9.s64 = 5767168;
	// li r8,257
	ctx.r8.s64 = 257;
	// rlwimi r31,r10,18,0,20
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFFF800) | (ctx.r31.u64 & 0xFFFFFFFF000007FF);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,12816
	ctx.r10.u64 = ctx.r10.u64 | 12816;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83208040"))) PPC_WEAK_FUNC(sub_83208040);
PPC_FUNC_IMPL(__imp__sub_83208040) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83208068
	if (!ctx.cr6.eq) goto loc_83208068;
	// bl 0x82bea298
	ctx.lr = 0x83208068;
	sub_82BEA298(ctx, base);
loc_83208068:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8320807c
	if (ctx.cr6.lt) goto loc_8320807C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8320808c
	goto loc_8320808C;
loc_8320807C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8320808C:
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

__attribute__((alias("__imp__sub_832080A4"))) PPC_WEAK_FUNC(sub_832080A4);
PPC_FUNC_IMPL(__imp__sub_832080A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832080A8"))) PPC_WEAK_FUNC(sub_832080A8);
PPC_FUNC_IMPL(__imp__sub_832080A8) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832080d0
	if (!ctx.cr6.eq) goto loc_832080D0;
	// bl 0x82bea298
	ctx.lr = 0x832080D0;
	sub_82BEA298(ctx, base);
loc_832080D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfc r11,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_832080F8"))) PPC_WEAK_FUNC(sub_832080F8);
PPC_FUNC_IMPL(__imp__sub_832080F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x83208100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83208118
	if (!ctx.cr6.eq) goto loc_83208118;
	// bl 0x82bea298
	ctx.lr = 0x83208118;
	sub_82BEA298(ctx, base);
loc_83208118:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83208128
	if (!ctx.cr6.eq) goto loc_83208128;
	// bl 0x82bea298
	ctx.lr = 0x83208128;
	sub_82BEA298(ctx, base);
loc_83208128:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832081d0
	if (ctx.cr6.lt) goto loc_832081D0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83208150
	if (ctx.cr6.eq) goto loc_83208150;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x83208154
	goto loc_83208154;
loc_83208150:
	// li r11,4096
	ctx.r11.s64 = 4096;
loc_83208154:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// b 0x83208164
	goto loc_83208164;
loc_8320815C:
	// rlwinm. r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832081dc
	if (ctx.cr0.eq) goto loc_832081DC;
loc_83208164:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8320815c
	if (ctx.cr6.lt) goto loc_8320815C;
	// addi r29,r11,-32
	ctx.r29.s64 = ctx.r11.s64 + -32;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82299698
	ctx.lr = 0x83208188;
	sub_82299698(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x832081dc
	if (ctx.cr0.eq) goto loc_832081DC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832081bc
	if (ctx.cr6.eq) goto loc_832081BC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x82cb1160
	ctx.lr = 0x832081B0;
	sub_82CB1160(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x822996c0
	ctx.lr = 0x832081BC;
	sub_822996C0(ctx, base);
loc_832081BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// twllei r11,0
	// divwu r11,r29,r11
	ctx.r11.u32 = ctx.r29.u32 / ctx.r11.u32;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832081D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_832081D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
loc_832081DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832081d4
	goto loc_832081D4;
}

__attribute__((alias("__imp__sub_832081E4"))) PPC_WEAK_FUNC(sub_832081E4);
PPC_FUNC_IMPL(__imp__sub_832081E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832081E8"))) PPC_WEAK_FUNC(sub_832081E8);
PPC_FUNC_IMPL(__imp__sub_832081E8) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83208210
	if (!ctx.cr6.eq) goto loc_83208210;
	// bl 0x82bea298
	ctx.lr = 0x83208210;
	sub_82BEA298(ctx, base);
loc_83208210:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832080a8
	ctx.lr = 0x8320821C;
	sub_832080A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x83208250
	if (!ctx.cr0.eq) goto loc_83208250;
	// bl 0x832080f8
	ctx.lr = 0x83208230;
	sub_832080F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83208248
	if (ctx.cr0.eq) goto loc_83208248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83208040
	ctx.lr = 0x83208244;
	sub_83208040(ctx, base);
	// b 0x83208268
	goto loc_83208268;
loc_83208248:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83208268
	goto loc_83208268;
loc_83208250:
	// bl 0x83208040
	ctx.lr = 0x83208254;
	sub_83208040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x83208264;
	sub_82CB16F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83208268:
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

__attribute__((alias("__imp__sub_83208280"))) PPC_WEAK_FUNC(sub_83208280);
PPC_FUNC_IMPL(__imp__sub_83208280) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r10,r3,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x83208290
	if (ctx.cr0.eq) goto loc_83208290;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83208290:
	// rlwinm. r10,r3,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8320829c
	if (ctx.cr0.eq) goto loc_8320829C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_8320829C:
	// rlwinm. r10,r3,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832082a8
	if (ctx.cr0.eq) goto loc_832082A8;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_832082A8:
	// rlwinm. r10,r3,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832082b4
	if (ctx.cr0.eq) goto loc_832082B4;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_832082B4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832082BC"))) PPC_WEAK_FUNC(sub_832082BC);
PPC_FUNC_IMPL(__imp__sub_832082BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832082C0"))) PPC_WEAK_FUNC(sub_832082C0);
PPC_FUNC_IMPL(__imp__sub_832082C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwimi r11,r3,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmplwi cr6,r3,13
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832082E4"))) PPC_WEAK_FUNC(sub_832082E4);
PPC_FUNC_IMPL(__imp__sub_832082E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832082E8"))) PPC_WEAK_FUNC(sub_832082E8);
PPC_FUNC_IMPL(__imp__sub_832082E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// clrlwi r3,r11,21
	ctx.r3.u64 = ctx.r11.u32 & 0x7FF;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x83208324
	if (ctx.cr6.eq) goto loc_83208324;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x8320831c
	if (ctx.cr6.eq) goto loc_8320831C;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r3,6144
	ctx.r3.s64 = ctx.r3.s64 + 6144;
	// blr 
	return;
loc_8320831C:
	// addi r3,r3,4096
	ctx.r3.s64 = ctx.r3.s64 + 4096;
	// blr 
	return;
loc_83208324:
	// addi r3,r3,2048
	ctx.r3.s64 = ctx.r3.s64 + 2048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320832C"))) PPC_WEAK_FUNC(sub_8320832C);
PPC_FUNC_IMPL(__imp__sub_8320832C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83208330"))) PPC_WEAK_FUNC(sub_83208330);
PPC_FUNC_IMPL(__imp__sub_83208330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83208338;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwimi r11,r3,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// clrlwi r31,r3,21
	ctx.r31.u64 = ctx.r3.u32 & 0x7FF;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x8320837c
	if (ctx.cr6.eq) goto loc_8320837C;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x83208374
	if (ctx.cr6.eq) goto loc_83208374;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x83208380
	if (!ctx.cr6.eq) goto loc_83208380;
	// addi r31,r31,6144
	ctx.r31.s64 = ctx.r31.s64 + 6144;
	// b 0x83208380
	goto loc_83208380;
loc_83208374:
	// addi r31,r31,4096
	ctx.r31.s64 = ctx.r31.s64 + 4096;
	// b 0x83208380
	goto loc_83208380;
loc_8320837C:
	// addi r31,r31,2048
	ctx.r31.s64 = ctx.r31.s64 + 2048;
loc_83208380:
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// blt cr6,0x83208394
	if (ctx.cr6.lt) goto loc_83208394;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x83208394
	if (ctx.cr6.gt) goto loc_83208394;
	// li r11,2
	ctx.r11.s64 = 2;
loc_83208394:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83208498
	if (ctx.cr6.lt) goto loc_83208498;
	// beq cr6,0x83208444
	if (ctx.cr6.eq) goto loc_83208444;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8320843c
	if (ctx.cr6.lt) goto loc_8320843C;
	// beq cr6,0x832083f8
	if (ctx.cr6.eq) goto loc_832083F8;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x832083f0
	if (ctx.cr6.eq) goto loc_832083F0;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x832083e8
	if (ctx.cr6.eq) goto loc_832083E8;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x83208490
	if (!ctx.cr6.eq) goto loc_83208490;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x832083d8
	if (ctx.cr6.lt) goto loc_832083D8;
	// bne cr6,0x832083e0
	if (!ctx.cr6.eq) goto loc_832083E0;
	// li r11,21
	ctx.r11.s64 = 21;
	// b 0x832083dc
	goto loc_832083DC;
loc_832083D8:
	// li r11,22
	ctx.r11.s64 = 22;
loc_832083DC:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_832083E0:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832084a0
	goto loc_832084A0;
loc_832083E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8320849c
	goto loc_8320849C;
loc_832083F0:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8320849c
	goto loc_8320849C;
loc_832083F8:
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83208434
	if (ctx.cr6.eq) goto loc_83208434;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83208424
	if (ctx.cr6.lt) goto loc_83208424;
	// bl 0x82bea298
	ctx.lr = 0x83208424;
	sub_82BEA298(ctx, base);
loc_83208424:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwzx r31,r30,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// b 0x832084a0
	goto loc_832084A0;
loc_83208434:
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x8320849c
	goto loc_8320849C;
loc_8320843C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8320849c
	goto loc_8320849C;
loc_83208444:
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x8320846c
	if (ctx.cr6.lt) goto loc_8320846C;
	// bl 0x82bea298
	ctx.lr = 0x8320846C;
	sub_82BEA298(ctx, base);
loc_8320846C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x832084a0
	if (ctx.cr6.eq) goto loc_832084A0;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x832084a0
	if (ctx.cr6.eq) goto loc_832084A0;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x832084a0
	if (ctx.cr6.eq) goto loc_832084A0;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x832084a0
	if (ctx.cr6.eq) goto loc_832084A0;
loc_83208490:
	// bl 0x82bea298
	ctx.lr = 0x83208494;
	sub_82BEA298(ctx, base);
	// b 0x832084a0
	goto loc_832084A0;
loc_83208498:
	// li r11,4
	ctx.r11.s64 = 4;
loc_8320849C:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_832084A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832084AC"))) PPC_WEAK_FUNC(sub_832084AC);
PPC_FUNC_IMPL(__imp__sub_832084AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832084B0"))) PPC_WEAK_FUNC(sub_832084B0);
PPC_FUNC_IMPL(__imp__sub_832084B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832084B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r7,r10,0,11,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwinm r3,r9,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r10,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xF;
	// rlwinm r29,r10,0,12,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000;
	// clrlwi r4,r10,21
	ctx.r4.u64 = ctx.r10.u32 & 0x7FF;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x832084f4
	if (ctx.cr0.eq) goto loc_832084F4;
	// li r9,256
	ctx.r9.s64 = 256;
loc_832084F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83208530
	if (ctx.cr6.eq) goto loc_83208530;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8320851c
	if (ctx.cr0.eq) goto loc_8320851C;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-9752
	ctx.r10.s64 = ctx.r10.s64 + -9752;
	// b 0x83208524
	goto loc_83208524;
loc_8320851C:
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// addi r10,r10,-9768
	ctx.r10.s64 = ctx.r10.s64 + -9768;
loc_83208524:
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
loc_83208530:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// or r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 | ctx.r9.u64;
	// bl 0x83207cc0
	ctx.lr = 0x83208540;
	sub_83207CC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8320856c
	if (!ctx.cr6.eq) goto loc_8320856C;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8320856c
	if (!ctx.cr6.eq) goto loc_8320856C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwimi r3,r10,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x832085c8
	goto loc_832085C8;
loc_8320856C:
	// rlwinm. r10,r29,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8320857c
	if (ctx.cr0.eq) goto loc_8320857C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8320857C:
	// rlwinm. r10,r29,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83208588
	if (ctx.cr0.eq) goto loc_83208588;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_83208588:
	// rlwinm. r10,r29,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83208594
	if (ctx.cr0.eq) goto loc_83208594;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_83208594:
	// rlwinm. r10,r29,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832085a0
	if (ctx.cr0.eq) goto loc_832085A0;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_832085A0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 | ctx.r31.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_832085C8:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832085D4"))) PPC_WEAK_FUNC(sub_832085D4);
PPC_FUNC_IMPL(__imp__sub_832085D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832085D8"))) PPC_WEAK_FUNC(sub_832085D8);
PPC_FUNC_IMPL(__imp__sub_832085D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832085E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// rlwinm r11,r31,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF0000;
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83208658
	if (ctx.cr6.eq) goto loc_83208658;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lis r9,-31907
	ctx.r9.s64 = -2091057152;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,-9736
	ctx.r9.s64 = ctx.r9.s64 + -9736;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r25,r9,r11
	ctx.r25.u64 = ctx.r9.u64 | ctx.r11.u64;
	// b 0x8320865c
	goto loc_8320865C;
loc_83208658:
	// li r25,12816
	ctx.r25.s64 = 12816;
loc_8320865C:
	// rlwinm r3,r31,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF000000;
	// bl 0x83207b70
	ctx.lr = 0x83208664;
	sub_83207B70(ctx, base);
	// or r27,r3,r30
	ctx.r27.u64 = ctx.r3.u64 | ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83208330
	ctx.lr = 0x83208678;
	sub_83208330(ctx, base);
	// rlwinm r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x832086e0
	if (!ctx.cr6.eq) goto loc_832086E0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x832086e0
	if (!ctx.cr6.eq) goto loc_832086E0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwimi r11,r26,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x832086bc
	if (ctx.cr6.eq) goto loc_832086BC;
	// bl 0x82bea298
	ctx.lr = 0x832086B8;
	sub_82BEA298(ctx, base);
	// b 0x832086e0
	goto loc_832086E0;
loc_832086BC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r26,21
	ctx.r10.u64 = ctx.r26.u32 & 0x7FF;
	// andis. r11,r11,65521
	ctx.r11.u64 = ctx.r11.u64 & 4293984256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq 0x832086dc
	if (ctx.cr0.eq) goto loc_832086DC;
	// bl 0x82bea298
	ctx.lr = 0x832086DC;
	sub_82BEA298(ctx, base);
loc_832086DC:
	// li r29,1
	ctx.r29.s64 = 1;
loc_832086E0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8320870c
	if (!ctx.cr6.eq) goto loc_8320870C;
	// cmplwi cr6,r25,12816
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 12816, ctx.xer);
	// bne cr6,0x8320870c
	if (!ctx.cr6.eq) goto loc_8320870C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// rlwimi r10,r29,7,24,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 7) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// andi. r10,r10,191
	ctx.r10.u64 = ctx.r10.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r30,r10,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// b 0x8320873c
	goto loc_8320873C;
loc_8320870C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// or r8,r27,r25
	ctx.r8.u64 = ctx.r27.u64 | ctx.r25.u64;
	// rlwimi r10,r29,7,24,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 7) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// rlwinm r10,r10,16,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF0000;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,0,10,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
loc_8320873C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83208750
	if (ctx.cr6.eq) goto loc_83208750;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_83208750:
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320875C"))) PPC_WEAK_FUNC(sub_8320875C);
PPC_FUNC_IMPL(__imp__sub_8320875C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83208760"))) PPC_WEAK_FUNC(sub_83208760);
PPC_FUNC_IMPL(__imp__sub_83208760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83208768;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r28,21
	ctx.r4.u64 = ctx.r28.u32 & 0x7FF;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// bl 0x83207cc0
	ctx.lr = 0x83208794;
	sub_83207CC0(ctx, base);
	// li r11,71
	ctx.r11.s64 = 71;
	// rlwinm r10,r28,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF0000;
	// lis r9,15
	ctx.r9.s64 = 983040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83208808
	if (ctx.cr6.eq) goto loc_83208808;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r8,r9,16,10,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r8.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r6,r10,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x832087dc
	if (ctx.cr0.eq) goto loc_832087DC;
	// li r9,1
	ctx.r9.s64 = 1;
loc_832087DC:
	// rlwinm. r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x832087e8
	if (ctx.cr0.eq) goto loc_832087E8;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
loc_832087E8:
	// rlwinm. r8,r10,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x832087f4
	if (ctx.cr0.eq) goto loc_832087F4;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
loc_832087F4:
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83208800
	if (ctx.cr0.eq) goto loc_83208800;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
loc_83208800:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83208818
	goto loc_83208818;
loc_83208808:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r10,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83208818:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwimi r30,r10,18,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83208838"))) PPC_WEAK_FUNC(sub_83208838);
PPC_FUNC_IMPL(__imp__sub_83208838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83208840;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwimi r9,r27,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r27.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r27,21
	ctx.r4.u64 = ctx.r27.u32 & 0x7FF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rlwinm r3,r9,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x83207cc0
	ctx.lr = 0x83208880;
	sub_83207CC0(ctx, base);
	// rlwinm r11,r27,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xF0000;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x832088ec
	if (ctx.cr6.eq) goto loc_832088EC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r7,r11,0,15,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// beq 0x832088bc
	if (ctx.cr0.eq) goto loc_832088BC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_832088BC:
	// rlwinm. r8,r11,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x832088c8
	if (ctx.cr0.eq) goto loc_832088C8;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_832088C8:
	// rlwinm. r8,r11,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x832088d4
	if (ctx.cr0.eq) goto loc_832088D4;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_832088D4:
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832088e0
	if (ctx.cr0.eq) goto loc_832088E0;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_832088E0:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x83208900
	goto loc_83208900;
loc_832088EC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// rlwimi r3,r11,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r11,r3,10
	ctx.r11.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83208900:
	// lis r8,3328
	ctx.r8.s64 = 218103808;
	// rlwinm r11,r30,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// rlwinm r10,r30,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// beq cr6,0x8320891c
	if (ctx.cr6.eq) goto loc_8320891C;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8320891C:
	// lis r7,228
	ctx.r7.s64 = 14942208;
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// addi r11,r11,-9736
	ctx.r11.s64 = ctx.r11.s64 + -9736;
	// bne cr6,0x8320894c
	if (!ctx.cr6.eq) goto loc_8320894C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8320894c
	if (!ctx.cr6.eq) goto loc_8320894C;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// ori r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 | 32;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// b 0x832089a8
	goto loc_832089A8;
loc_8320894C:
	// rlwinm r6,r10,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r10,18,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xC;
	// rlwinm r5,r6,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r6,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC;
	// rlwinm r4,r5,2,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xC;
	// rlwinm r5,r5,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r31,68
	ctx.r31.s64 = 4456448;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// ori r31,r31,32
	ctx.r31.u64 = ctx.r31.u64 | 32;
	// lwzx r4,r4,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r5,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// or r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 | ctx.r3.u64;
	// rlwinm r5,r5,12,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFFFF000;
	// or r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 | ctx.r6.u64;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
loc_832089A8:
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x83208a04
	if (ctx.cr6.eq) goto loc_83208A04;
	// rlwinm r9,r29,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 14) & 0x3FFF;
	// lis r8,68
	ctx.r8.s64 = 4456448;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r29,18,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 18) & 0xC;
	// rlwinm r5,r7,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC;
	// rlwinm r7,r7,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC;
	// rlwinm r9,r9,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r6,r5,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r7,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFFFF000;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// b 0x83208a0c
	goto loc_83208A0C;
loc_83208A04:
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 | 33;
loc_83208A0C:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83208A20"))) PPC_WEAK_FUNC(sub_83208A20);
PPC_FUNC_IMPL(__imp__sub_83208A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83208A28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r9,71
	ctx.r9.s64 = 71;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwimi r8,r10,12,21,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r10,21
	ctx.r4.u64 = ctx.r10.u32 & 0x7FF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rlwinm r3,r8,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x1F;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// rlwinm r29,r10,0,12,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000;
	// bl 0x83207cc0
	ctx.lr = 0x83208A6C;
	sub_83207CC0(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwimi r11,r27,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// clrlwi r27,r27,21
	ctx.r27.u64 = ctx.r27.u32 & 0x7FF;
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83208a88
	if (ctx.cr0.eq) goto loc_83208A88;
	// bl 0x82bea298
	ctx.lr = 0x83208A88;
	sub_82BEA298(ctx, base);
loc_83208A88:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83208af0
	if (ctx.cr6.eq) goto loc_83208AF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r8,r29,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// beq 0x83208ac0
	if (ctx.cr0.eq) goto loc_83208AC0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83208AC0:
	// rlwinm. r9,r29,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83208acc
	if (ctx.cr0.eq) goto loc_83208ACC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_83208ACC:
	// rlwinm. r9,r29,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83208ad8
	if (ctx.cr0.eq) goto loc_83208AD8;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_83208AD8:
	// rlwinm. r9,r29,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83208ae4
	if (ctx.cr0.eq) goto loc_83208AE4;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_83208AE4:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// b 0x83208b04
	goto loc_83208B04;
loc_83208AF0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwimi r30,r10,16,10,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r30.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r30,10
	ctx.r10.u64 = ctx.r30.u32 & 0x3FFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_83208B04:
	// rlwinm r10,r28,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 14) & 0x3FFF;
	// lis r9,-31907
	ctx.r9.s64 = -2091057152;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// li r7,17
	ctx.r7.s64 = 17;
	// addi r9,r9,-9736
	ctx.r9.s64 = ctx.r9.s64 + -9736;
	// rlwinm r6,r8,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r5,r28,18,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 18) & 0xC;
	// rlwimi r27,r7,18,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r7.u32, 18) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// lwzx r7,r6,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r6,r5,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r8,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r5,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83208B70"))) PPC_WEAK_FUNC(sub_83208B70);
PPC_FUNC_IMPL(__imp__sub_83208B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x83208B78;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r29,0(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r17,r11,0,3,3
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// rlwinm r16,r11,0,1,1
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// clrlwi r24,r11,16
	ctx.r24.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x83208bbc
	if (!ctx.cr0.eq) goto loc_83208BBC;
	// bl 0x82bea298
	ctx.lr = 0x83208BBC;
	sub_82BEA298(ctx, base);
loc_83208BBC:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// ori r23,r11,512
	ctx.r23.u64 = ctx.r11.u64 | 512;
	// mr r19,r27
	ctx.r19.u64 = ctx.r27.u64;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x83208c2c
	if (!ctx.cr6.lt) goto loc_83208C2C;
	// lwz r11,428(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 428);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r9,r11,25
	ctx.r9.s64 = ctx.r11.s64 + 25;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r9,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83208c2c
	if (!ctx.cr6.eq) goto loc_83208C2C;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83208c0c
	if (!ctx.cr6.eq) goto loc_83208C0C;
	// bl 0x82bea298
	ctx.lr = 0x83208C0C;
	sub_82BEA298(ctx, base);
loc_83208C0C:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x83208c18
	if (ctx.cr6.eq) goto loc_83208C18;
	// bl 0x82bea298
	ctx.lr = 0x83208C18;
	sub_82BEA298(ctx, base);
loc_83208C18:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57360
	ctx.r12.u64 = ctx.r12.u64 | 57360;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// oris r27,r11,15
	ctx.r27.u64 = ctx.r11.u64 | 983040;
	// ori r27,r27,16
	ctx.r27.u64 = ctx.r27.u64 | 16;
loc_83208C2C:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x83208c60
	if (ctx.cr6.eq) goto loc_83208C60;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r21,0(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// oris r27,r11,15
	ctx.r27.u64 = ctx.r11.u64 | 983040;
	// ori r27,r27,33
	ctx.r27.u64 = ctx.r27.u64 | 33;
	// bge cr6,0x83208c64
	if (!ctx.cr6.lt) goto loc_83208C64;
	// bl 0x82bea298
	ctx.lr = 0x83208C5C;
	sub_82BEA298(ctx, base);
	// b 0x83208c64
	goto loc_83208C64;
loc_83208C60:
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83208C64:
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r30,13
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 13, ctx.xer);
	// bne cr6,0x83208c88
	if (!ctx.cr6.eq) goto loc_83208C88;
	// cmplwi cr6,r24,80
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 80, ctx.xer);
	// lis r11,67
	ctx.r11.s64 = 4390912;
	// beq cr6,0x83208c80
	if (ctx.cr6.eq) goto loc_83208C80;
	// lis r11,2
	ctx.r11.s64 = 131072;
loc_83208C80:
	// ori r11,r11,13
	ctx.r11.u64 = ctx.r11.u64 | 13;
	// b 0x83208d88
	goto loc_83208D88;
loc_83208C88:
	// cmpwi cr6,r30,69
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 69, ctx.xer);
	// bne cr6,0x83208cfc
	if (!ctx.cr6.eq) goto loc_83208CFC;
	// li r31,69
	ctx.r31.s64 = 69;
	// cmplwi cr6,r24,20
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 20, ctx.xer);
	// beq cr6,0x83208ce8
	if (ctx.cr6.eq) goto loc_83208CE8;
	// cmplwi cr6,r24,21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 21, ctx.xer);
	// beq cr6,0x83208cdc
	if (ctx.cr6.eq) goto loc_83208CDC;
	// cmplwi cr6,r24,22
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 22, ctx.xer);
	// beq cr6,0x83208cd4
	if (ctx.cr6.eq) goto loc_83208CD4;
	// cmplwi cr6,r24,23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 23, ctx.xer);
	// beq cr6,0x83208ccc
	if (ctx.cr6.eq) goto loc_83208CCC;
	// cmplwi cr6,r24,24
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 24, ctx.xer);
	// beq cr6,0x83208cc4
	if (ctx.cr6.eq) goto loc_83208CC4;
	// bl 0x82bea298
	ctx.lr = 0x83208CC0;
	sub_82BEA298(ctx, base);
	// b 0x83208cec
	goto loc_83208CEC;
loc_83208CC4:
	// lis r31,4
	ctx.r31.s64 = 262144;
	// b 0x83208ce0
	goto loc_83208CE0;
loc_83208CCC:
	// lis r31,3
	ctx.r31.s64 = 196608;
	// b 0x83208ce0
	goto loc_83208CE0;
loc_83208CD4:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x83208ce0
	goto loc_83208CE0;
loc_83208CDC:
	// lis r31,1
	ctx.r31.s64 = 65536;
loc_83208CE0:
	// ori r31,r31,69
	ctx.r31.u64 = ctx.r31.u64 | 69;
	// b 0x83208cec
	goto loc_83208CEC;
loc_83208CE8:
	// li r31,69
	ctx.r31.s64 = 69;
loc_83208CEC:
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x83208d94
	goto loc_83208D94;
loc_83208CFC:
	// cmpwi cr6,r30,61
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 61, ctx.xer);
	// beq cr6,0x83208d84
	if (ctx.cr6.eq) goto loc_83208D84;
	// cmpwi cr6,r30,60
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 60, ctx.xer);
	// beq cr6,0x83208d84
	if (ctx.cr6.eq) goto loc_83208D84;
	// cmpwi cr6,r30,76
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 76, ctx.xer);
	// beq cr6,0x83208d84
	if (ctx.cr6.eq) goto loc_83208D84;
	// cmpwi cr6,r30,81
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 81, ctx.xer);
	// beq cr6,0x83208d70
	if (ctx.cr6.eq) goto loc_83208D70;
	// cmpwi cr6,r30,85
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 85, ctx.xer);
	// beq cr6,0x83208d70
	if (ctx.cr6.eq) goto loc_83208D70;
	// cmpwi cr6,r30,37
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 37, ctx.xer);
	// beq cr6,0x83208d34
	if (ctx.cr6.eq) goto loc_83208D34;
	// cmpwi cr6,r30,38
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 38, ctx.xer);
	// bne cr6,0x83208d84
	if (!ctx.cr6.eq) goto loc_83208D84;
loc_83208D34:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83208d4c
	if (!ctx.cr6.eq) goto loc_83208D4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83208d5c
	goto loc_83208D5C;
loc_83208D4C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x83208d5c
	if (ctx.cr6.eq) goto loc_83208D5C;
	// rlwinm r11,r19,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 10) & 0x1;
loc_83208D5C:
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// rlwimi r10,r11,24,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x83208d94
	goto loc_83208D94;
loc_83208D70:
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// rlwimi r30,r25,17,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r25.u32, 17) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// b 0x83208d94
	goto loc_83208D94;
loc_83208D84:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
loc_83208D88:
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_83208D94:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832084b0
	ctx.lr = 0x83208DA4;
	sub_832084B0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83208db4
	if (!ctx.cr0.eq) goto loc_83208DB4;
	// bl 0x82bea298
	ctx.lr = 0x83208DB4;
	sub_82BEA298(ctx, base);
loc_83208DB4:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x83208de4
	if (!ctx.cr6.eq) goto loc_83208DE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83208ddc
	if (!ctx.cr0.eq) goto loc_83208DDC;
	// bl 0x82bea298
	ctx.lr = 0x83208DDC;
	sub_82BEA298(ctx, base);
loc_83208DDC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_83208DE4:
	// cmplwi cr6,r24,7
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 7, ctx.xer);
	// beq cr6,0x83208e0c
	if (ctx.cr6.eq) goto loc_83208E0C;
	// cmplwi cr6,r24,15
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 15, ctx.xer);
	// beq cr6,0x83208e0c
	if (ctx.cr6.eq) goto loc_83208E0C;
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 32, ctx.xer);
	// beq cr6,0x83208e0c
	if (ctx.cr6.eq) goto loc_83208E0C;
	// cmplwi cr6,r24,37
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 37, ctx.xer);
	// beq cr6,0x83208ea4
	if (ctx.cr6.eq) goto loc_83208EA4;
	// cmplwi cr6,r24,79
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 79, ctx.xer);
	// bne cr6,0x83208e80
	if (!ctx.cr6.eq) goto loc_83208E80;
loc_83208E0C:
	// rlwinm r11,r30,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83208ef0
	if (ctx.cr6.eq) goto loc_83208EF0;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83208ee8
	if (ctx.cr6.eq) goto loc_83208EE8;
	// lis r10,1280
	ctx.r10.s64 = 83886080;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83208edc
	if (ctx.cr6.eq) goto loc_83208EDC;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83208ed0
	if (ctx.cr6.eq) goto loc_83208ED0;
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83208ef4
	if (!ctx.cr6.eq) goto loc_83208EF4;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x83208ed4
	goto loc_83208ED4;
loc_83208E54:
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x83208e80
	if (!ctx.cr6.eq) goto loc_83208E80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83208e78
	if (!ctx.cr0.eq) goto loc_83208E78;
	// bl 0x82bea298
	ctx.lr = 0x83208E78;
	sub_82BEA298(ctx, base);
loc_83208E78:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_83208E80:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832085d8
	ctx.lr = 0x83208E94;
	sub_832085D8(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83208e54
	if (!ctx.cr0.eq) goto loc_83208E54;
	// b 0x83208f74
	goto loc_83208F74;
loc_83208EA4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832085d8
	ctx.lr = 0x83208EB8;
	sub_832085D8(ctx, base);
	// b 0x83208ec0
	goto loc_83208EC0;
loc_83208EBC:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_83208EC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83208ebc
	if (!ctx.cr0.eq) goto loc_83208EBC;
	// b 0x83208f74
	goto loc_83208F74;
loc_83208ED0:
	// li r11,7
	ctx.r11.s64 = 7;
loc_83208ED4:
	// rlwimi r30,r11,24,4,7
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xF000000) | (ctx.r30.u64 & 0xFFFFFFFFF0FFFFFF);
	// b 0x83208ef4
	goto loc_83208EF4;
loc_83208EDC:
	// rlwinm r11,r30,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// oris r30,r11,1024
	ctx.r30.u64 = ctx.r11.u64 | 67108864;
	// b 0x83208ef4
	goto loc_83208EF4;
loc_83208EE8:
	// rlwimi r30,r25,25,6,7
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r25.u32, 25) & 0x3000000) | (ctx.r30.u64 & 0xFFFFFFFFFCFFFFFF);
	// b 0x83208ef4
	goto loc_83208EF4;
loc_83208EF0:
	// rlwinm r30,r30,0,8,6
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
loc_83208EF4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832085d8
	ctx.lr = 0x83208F08;
	sub_832085D8(ctx, base);
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 32, ctx.xer);
	// bne cr6,0x83208f64
	if (!ctx.cr6.eq) goto loc_83208F64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83208f20
	if (!ctx.cr0.eq) goto loc_83208F20;
	// bl 0x82bea298
	ctx.lr = 0x83208F20;
	sub_82BEA298(ctx, base);
loc_83208F20:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x83208f50
	if (!ctx.cr6.eq) goto loc_83208F50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83208f48
	if (!ctx.cr0.eq) goto loc_83208F48;
	// bl 0x82bea298
	ctx.lr = 0x83208F48;
	sub_82BEA298(ctx, base);
loc_83208F48:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_83208F50:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832085d8
	ctx.lr = 0x83208F64;
	sub_832085D8(ctx, base);
loc_83208F64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83208f74
	if (ctx.cr0.eq) goto loc_83208F74;
	// bl 0x82bea298
	ctx.lr = 0x83208F74;
	sub_82BEA298(ctx, base);
loc_83208F74:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x83208f94
	if (ctx.cr6.eq) goto loc_83208F94;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lis r5,228
	ctx.r5.s64 = 14942208;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83208838
	ctx.lr = 0x83208F94;
	sub_83208838(ctx, base);
loc_83208F94:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x83208fe8
	if (ctx.cr6.eq) goto loc_83208FE8;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x83208fa8
	if (ctx.cr6.lt) goto loc_83208FA8;
	// bl 0x82bea298
	ctx.lr = 0x83208FA8;
	sub_82BEA298(ctx, base);
loc_83208FA8:
	// lwz r11,428(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 428);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83208760
	ctx.lr = 0x83208FCC;
	sub_83208760(ctx, base);
	// lwz r11,428(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 428);
	// lwz r10,424(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,428(r26)
	PPC_STORE_U32(ctx.r26.u32 + 428, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83208fe8
	if (!ctx.cr6.gt) goto loc_83208FE8;
	// bl 0x82bea298
	ctx.lr = 0x83208FE8;
	sub_82BEA298(ctx, base);
loc_83208FE8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// stw r31,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r31.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83208FFC"))) PPC_WEAK_FUNC(sub_83208FFC);
PPC_FUNC_IMPL(__imp__sub_83208FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83209000"))) PPC_WEAK_FUNC(sub_83209000);
PPC_FUNC_IMPL(__imp__sub_83209000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x83209008;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83209034
	if (!ctx.cr6.lt) goto loc_83209034;
	// bl 0x82bea298
	ctx.lr = 0x83209034;
	sub_82BEA298(ctx, base);
loc_83209034:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bne cr6,0x83209070
	if (!ctx.cr6.eq) goto loc_83209070;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8320906c
	if (!ctx.cr6.eq) goto loc_8320906C;
	// li r28,43
	ctx.r28.s64 = 43;
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// b 0x8320907c
	goto loc_8320907C;
loc_8320906C:
	// li r28,83
	ctx.r28.s64 = 83;
loc_83209070:
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// bgt cr6,0x832094dc
	if (ctx.cr6.gt) goto loc_832094DC;
	// beq cr6,0x8320949c
	if (ctx.cr6.eq) goto loc_8320949C;
loc_8320907C:
	// addi r11,r11,-25
	ctx.r11.s64 = ctx.r11.s64 + -25;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x832094dc
	if (ctx.cr6.gt) goto loc_832094DC;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,-9752
	ctx.r12.s64 = ctx.r12.s64 + -9752;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// addi r12,r12,-28496
	ctx.r12.s64 = ctx.r12.s64 + -28496;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_832090B0;
	case 1:
		goto loc_83209118;
	case 2:
		goto loc_83209304;
	case 3:
		goto loc_832092F4;
	case 4:
		goto loc_832092F4;
	case 5:
		goto loc_83209390;
	case 6:
		goto loc_832094DC;
	case 7:
		goto loc_832094DC;
	case 8:
		goto loc_832094DC;
	case 9:
		goto loc_832094DC;
	case 10:
		goto loc_832094DC;
	case 11:
		goto loc_832094DC;
	case 12:
		goto loc_832094DC;
	case 13:
		goto loc_83209330;
	case 14:
		goto loc_832092F4;
	case 15:
		goto loc_832093F8;
	case 16:
		goto loc_832094DC;
	case 17:
		goto loc_83209254;
	case 18:
		goto loc_832092AC;
	case 19:
		goto loc_832092F4;
	default:
		__builtin_unreachable();
	}
loc_832090B0:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// rlwinm r10,r10,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r10,4608
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4608, ctx.xer);
	// beq cr6,0x832090e0
	if (ctx.cr6.eq) goto loc_832090E0;
	// bl 0x82bea298
	ctx.lr = 0x832090E0;
	sub_82BEA298(ctx, base);
loc_832090E0:
	// cmplwi cr6,r31,2048
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2048, ctx.xer);
	// blt cr6,0x832090ec
	if (ctx.cr6.lt) goto loc_832090EC;
	// bl 0x82bea298
	ctx.lr = 0x832090EC;
	sub_82BEA298(ctx, base);
loc_832090EC:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x83209108
	if (ctx.cr6.lt) goto loc_83209108;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83209108
	if (!ctx.cr6.lt) goto loc_83209108;
	// bl 0x82bea298
	ctx.lr = 0x83209108;
	sub_82BEA298(ctx, base);
loc_83209108:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x832094e0
	goto loc_832094E0;
loc_83209118:
	// lwz r29,4(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// lwz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// rlwimi r10,r29,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r27,r10,24,27,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r27,14
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 14, ctx.xer);
	// beq cr6,0x83209148
	if (ctx.cr6.eq) goto loc_83209148;
	// cmplwi cr6,r27,19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 19, ctx.xer);
	// beq cr6,0x83209148
	if (ctx.cr6.eq) goto loc_83209148;
	// bl 0x82bea298
	ctx.lr = 0x83209148;
	sub_82BEA298(ctx, base);
loc_83209148:
	// rlwinm r11,r29,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x83209158
	if (!ctx.cr6.eq) goto loc_83209158;
	// bl 0x82bea298
	ctx.lr = 0x83209158;
	sub_82BEA298(ctx, base);
loc_83209158:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// clrlwi r30,r28,21
	ctx.r30.u64 = ctx.r28.u32 & 0x7FF;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x83209174
	if (ctx.cr6.eq) goto loc_83209174;
	// bl 0x82bea298
	ctx.lr = 0x83209174;
	sub_82BEA298(ctx, base);
loc_83209174:
	// cmplwi cr6,r30,2048
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2048, ctx.xer);
	// blt cr6,0x83209180
	if (ctx.cr6.lt) goto loc_83209180;
	// bl 0x82bea298
	ctx.lr = 0x83209180;
	sub_82BEA298(ctx, base);
loc_83209180:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x8320919c
	if (ctx.cr6.lt) goto loc_8320919C;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8320919c
	if (!ctx.cr6.lt) goto loc_8320919C;
	// bl 0x82bea298
	ctx.lr = 0x8320919C;
	sub_82BEA298(ctx, base);
loc_8320919C:
	// cmplwi cr6,r27,19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 19, ctx.xer);
	// bne cr6,0x832091d8
	if (!ctx.cr6.eq) goto loc_832091D8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83207dc0
	ctx.lr = 0x832091B4;
	sub_83207DC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,8
	ctx.r10.s64 = 8;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// li r8,41
	ctx.r8.s64 = 41;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x83209248
	goto loc_83209248;
loc_832091D8:
	// rlwinm r10,r29,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// clrlwi r11,r29,21
	ctx.r11.u64 = ctx.r29.u32 & 0x7FF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x83209238
	if (!ctx.cr6.eq) goto loc_83209238;
	// li r9,53
	ctx.r9.s64 = 53;
	// li r8,39
	ctx.r8.s64 = 39;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r7,41
	ctx.r7.s64 = 41;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x832094e0
	goto loc_832094E0;
loc_83209238:
	// li r9,9
	ctx.r9.s64 = 9;
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_83209248:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x832094e0
	goto loc_832094E0;
loc_83209254:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83209264
	if (!ctx.cr6.eq) goto loc_83209264;
	// bl 0x82bea298
	ctx.lr = 0x83209264;
	sub_82BEA298(ctx, base);
loc_83209264:
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x83208040
	ctx.lr = 0x83209270;
	sub_83208040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832092f4
	if (ctx.cr0.eq) goto loc_832092F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832092f4
	if (ctx.cr6.eq) goto loc_832092F4;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// li r10,41
	ctx.r10.s64 = 41;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,53
	ctx.r9.s64 = 53;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x832094e0
	goto loc_832094E0;
loc_832092AC:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832092bc
	if (!ctx.cr6.eq) goto loc_832092BC;
	// bl 0x82bea298
	ctx.lr = 0x832092BC;
	sub_82BEA298(ctx, base);
loc_832092BC:
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x83208040
	ctx.lr = 0x832092C8;
	sub_83208040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832092e8
	if (ctx.cr0.eq) goto loc_832092E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x832092e8
	if (ctx.cr6.eq) goto loc_832092E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_832092E8:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_832092F4:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x832094e0
	goto loc_832094E0;
loc_83209304:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x83209324
	if (ctx.cr6.eq) goto loc_83209324;
	// bl 0x82bea298
	ctx.lr = 0x83209324;
	sub_82BEA298(ctx, base);
loc_83209324:
	// clrlwi. r11,r30,21
	ctx.r11.u64 = ctx.r30.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83209330
	if (ctx.cr0.eq) goto loc_83209330;
	// bl 0x82bea298
	ctx.lr = 0x83209330;
	sub_82BEA298(ctx, base);
loc_83209330:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x83209350
	if (ctx.cr6.eq) goto loc_83209350;
	// bl 0x82bea298
	ctx.lr = 0x83209350;
	sub_82BEA298(ctx, base);
loc_83209350:
	// clrlwi r11,r30,21
	ctx.r11.u64 = ctx.r30.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x83209360
	if (ctx.cr6.lt) goto loc_83209360;
	// bl 0x82bea298
	ctx.lr = 0x83209360;
	sub_82BEA298(ctx, base);
loc_83209360:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832085d8
	ctx.lr = 0x83209388;
	sub_832085D8(ctx, base);
loc_83209388:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x832094e0
	goto loc_832094E0;
loc_83209390:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// clrlwi r30,r11,21
	ctx.r30.u64 = ctx.r11.u32 & 0x7FF;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x832093b4
	if (ctx.cr6.eq) goto loc_832093B4;
	// bl 0x82bea298
	ctx.lr = 0x832093B4;
	sub_82BEA298(ctx, base);
loc_832093B4:
	// cmplwi cr6,r30,2048
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2048, ctx.xer);
	// blt cr6,0x832093c0
	if (ctx.cr6.lt) goto loc_832093C0;
	// bl 0x82bea298
	ctx.lr = 0x832093C0;
	sub_82BEA298(ctx, base);
loc_832093C0:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x832093dc
	if (ctx.cr6.lt) goto loc_832093DC;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832093dc
	if (!ctx.cr6.lt) goto loc_832093DC;
	// bl 0x82bea298
	ctx.lr = 0x832093DC;
	sub_82BEA298(ctx, base);
loc_832093DC:
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x832094e0
	goto loc_832094E0;
loc_832093F8:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x8320941c
	if (!ctx.cr6.eq) goto loc_8320941C;
	// bl 0x82bea298
	ctx.lr = 0x8320941C;
	sub_82BEA298(ctx, base);
loc_8320941C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r28,r11,24,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r28,14
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 14, ctx.xer);
	// beq cr6,0x8320943c
	if (ctx.cr6.eq) goto loc_8320943C;
	// cmplwi cr6,r28,19
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 19, ctx.xer);
	// beq cr6,0x83209444
	if (ctx.cr6.eq) goto loc_83209444;
	// bl 0x82bea298
	ctx.lr = 0x8320943C;
	sub_82BEA298(ctx, base);
loc_8320943C:
	// cmplwi cr6,r28,19
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 19, ctx.xer);
	// bne cr6,0x83209450
	if (!ctx.cr6.eq) goto loc_83209450;
loc_83209444:
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x832094d0
	goto loc_832094D0;
loc_83209450:
	// li r10,53
	ctx.r10.s64 = 53;
	// clrlwi r28,r30,21
	ctx.r28.u64 = ctx.r30.u32 & 0x7FF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r10,r30,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x832094e0
	if (!ctx.cr6.eq) goto loc_832094E0;
	// li r11,39
	ctx.r11.s64 = 39;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x832081e8
	ctx.lr = 0x83209490;
	sub_832081E8(ctx, base);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// b 0x832094e0
	goto loc_832094E0;
loc_8320949C:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// beq cr6,0x832094bc
	if (ctx.cr6.eq) goto loc_832094BC;
	// bl 0x82bea298
	ctx.lr = 0x832094BC;
	sub_82BEA298(ctx, base);
loc_832094BC:
	// clrlwi. r11,r31,21
	ctx.r11.u64 = ctx.r31.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832094c8
	if (ctx.cr0.eq) goto loc_832094C8;
	// bl 0x82bea298
	ctx.lr = 0x832094C8;
	sub_82BEA298(ctx, base);
loc_832094C8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832094D0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83207dc0
	ctx.lr = 0x832094D8;
	sub_83207DC0(ctx, base);
	// b 0x83209388
	goto loc_83209388;
loc_832094DC:
	// bl 0x82bea298
	ctx.lr = 0x832094E0;
	sub_82BEA298(ctx, base);
loc_832094E0:
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832094F0"))) PPC_WEAK_FUNC(sub_832094F0);
PPC_FUNC_IMPL(__imp__sub_832094F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832094F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// clrlwi r31,r30,16
	ctx.r31.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83209584
	if (ctx.cr6.eq) goto loc_83209584;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8320957c
	if (ctx.cr6.eq) goto loc_8320957C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x83209574
	if (ctx.cr6.eq) goto loc_83209574;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8320956c
	if (ctx.cr6.eq) goto loc_8320956C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x83209564
	if (ctx.cr6.eq) goto loc_83209564;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8320955c
	if (ctx.cr6.eq) goto loc_8320955C;
	// bl 0x82bea298
	ctx.lr = 0x83209558;
	sub_82BEA298(ctx, base);
	// b 0x8320958c
	goto loc_8320958C;
loc_8320955C:
	// rlwimi r31,r27,18,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r27.u32, 18) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x8320958c
	goto loc_8320958C;
loc_83209564:
	// rlwinm r31,r31,0,16,12
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// b 0x8320958c
	goto loc_8320958C;
loc_8320956C:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x83209588
	goto loc_83209588;
loc_83209574:
	// rlwimi r31,r27,17,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r27.u32, 17) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x8320958c
	goto loc_8320958C;
loc_8320957C:
	// rlwimi r31,r27,16,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r27.u32, 16) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x8320958c
	goto loc_8320958C;
loc_83209584:
	// li r11,3
	ctx.r11.s64 = 3;
loc_83209588:
	// rlwimi r31,r11,16,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
loc_8320958C:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmpwi cr6,r30,86
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 86, ctx.xer);
	// bne cr6,0x8320963c
	if (!ctx.cr6.eq) goto loc_8320963C;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// beq cr6,0x832095c4
	if (ctx.cr6.eq) goto loc_832095C4;
	// bl 0x82bea298
	ctx.lr = 0x832095C4;
	sub_82BEA298(ctx, base);
loc_832095C4:
	// rlwinm r10,r30,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF0000;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832095e8
	if (!ctx.cr6.eq) goto loc_832095E8;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x83209634
	goto loc_83209634;
loc_832095E8:
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// rlwinm. r8,r10,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x83209608
	if (ctx.cr0.eq) goto loc_83209608;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83209608:
	// rlwinm. r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83209614
	if (ctx.cr0.eq) goto loc_83209614;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_83209614:
	// rlwinm. r8,r10,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83209620
	if (ctx.cr0.eq) goto loc_83209620;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_83209620:
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8320962c
	if (ctx.cr0.eq) goto loc_8320962C;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_8320962C:
	// addi r31,r9,4
	ctx.r31.s64 = ctx.r9.s64 + 4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_83209634:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// b 0x83209650
	goto loc_83209650;
loc_8320963C:
	// cmpwi cr6,r30,52
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 52, ctx.xer);
	// bne cr6,0x83209650
	if (!ctx.cr6.eq) goto loc_83209650;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
loc_83209650:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832096ac
	if (ctx.cr0.eq) goto loc_832096AC;
loc_8320965C:
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x83209688
	if (!ctx.cr6.eq) goto loc_83209688;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83209680
	if (!ctx.cr0.eq) goto loc_83209680;
	// bl 0x82bea298
	ctx.lr = 0x83209680;
	sub_82BEA298(ctx, base);
loc_83209680:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_83209688:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832085d8
	ctx.lr = 0x8320969C;
	sub_832085D8(ctx, base);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8320965c
	if (!ctx.cr0.eq) goto loc_8320965C;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832096AC:
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832096BC"))) PPC_WEAK_FUNC(sub_832096BC);
PPC_FUNC_IMPL(__imp__sub_832096BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832096C0"))) PPC_WEAK_FUNC(sub_832096C0);
PPC_FUNC_IMPL(__imp__sub_832096C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x832096C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832096f0
	if (ctx.cr6.lt) goto loc_832096F0;
	// bl 0x82bea298
	ctx.lr = 0x832096F0;
	sub_82BEA298(ctx, base);
loc_832096F0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,259
	ctx.r10.u64 = ctx.r10.u64 | 259;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r31,21
	ctx.r29.u64 = ctx.r31.u32 & 0x7FF;
	// bgt cr6,0x832097d8
	if (ctx.cr6.gt) goto loc_832097D8;
	// rlwinm. r9,r31,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r31,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF0000;
	// li r10,256
	ctx.r10.s64 = 256;
	// beq 0x8320972c
	if (ctx.cr0.eq) goto loc_8320972C;
	// li r10,257
	ctx.r10.s64 = 257;
loc_8320972C:
	// rlwinm. r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83209738
	if (ctx.cr0.eq) goto loc_83209738;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_83209738:
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83209744
	if (ctx.cr0.eq) goto loc_83209744;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_83209744:
	// ori r9,r10,192
	ctx.r9.u64 = ctx.r10.u64 | 192;
	// rlwinm. r11,r31,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x83209784
	if (ctx.cr0.eq) goto loc_83209784;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83209770
	if (ctx.cr0.eq) goto loc_83209770;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-9752
	ctx.r10.s64 = ctx.r10.s64 + -9752;
	// b 0x83209778
	goto loc_83209778;
loc_83209770:
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// addi r10,r10,-9768
	ctx.r10.s64 = ctx.r10.s64 + -9768;
loc_83209778:
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
loc_83209784:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// or r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x832097a0
	if (ctx.cr6.eq) goto loc_832097A0;
	// bl 0x82bea298
	ctx.lr = 0x832097A0;
	sub_82BEA298(ctx, base);
loc_832097A0:
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,71
	ctx.r9.s64 = 71;
	// oris r8,r10,81
	ctx.r8.u64 = ctx.r10.u64 | 5308416;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// oris r10,r10,17
	ctx.r10.u64 = ctx.r10.u64 | 1114112;
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x83209844
	goto loc_83209844;
loc_832097D8:
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwimi r11,r29,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x832097f8
	if (ctx.cr6.eq) goto loc_832097F8;
	// bl 0x82bea298
	ctx.lr = 0x832097F8;
	sub_82BEA298(ctx, base);
loc_832097F8:
	// li r11,71
	ctx.r11.s64 = 71;
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832084b0
	ctx.lr = 0x83209818;
	sub_832084B0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832085d8
	ctx.lr = 0x83209830;
	sub_832085D8(ctx, base);
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83209844
	if (ctx.cr6.eq) goto loc_83209844;
	// bl 0x82bea298
	ctx.lr = 0x83209844;
	sub_82BEA298(ctx, base);
loc_83209844:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83209858"))) PPC_WEAK_FUNC(sub_83209858);
PPC_FUNC_IMPL(__imp__sub_83209858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x83209860;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r31,0(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r27,r11,0,3,3
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// bne 0x83209898
	if (!ctx.cr0.eq) goto loc_83209898;
	// bl 0x82bea298
	ctx.lr = 0x83209898;
	sub_82BEA298(ctx, base);
loc_83209898:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r24,r30,4
	ctx.r24.s64 = ctx.r30.s64 + 4;
	// ori r30,r11,512
	ctx.r30.u64 = ctx.r11.u64 | 512;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x832098d8
	if (ctx.cr6.eq) goto loc_832098D8;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x832098c0
	if (!ctx.cr0.eq) goto loc_832098C0;
	// bl 0x82bea298
	ctx.lr = 0x832098C0;
	sub_82BEA298(ctx, base);
loc_832098C0:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x832098cc
	if (!ctx.cr6.lt) goto loc_832098CC;
	// bl 0x82bea298
	ctx.lr = 0x832098CC;
	sub_82BEA298(ctx, base);
loc_832098CC:
	// lwz r25,0(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// b 0x832098dc
	goto loc_832098DC;
loc_832098D8:
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832098DC:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,259
	ctx.r11.u64 = ctx.r11.u64 | 259;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x832098f8
	if (ctx.cr6.gt) goto loc_832098F8;
	// clrlwi r3,r29,21
	ctx.r3.u64 = ctx.r29.u32 & 0x7FF;
	// li r9,17
	ctx.r9.s64 = 17;
	// b 0x8320990c
	goto loc_8320990C;
loc_832098F8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83208330
	ctx.lr = 0x83209908;
	sub_83208330(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8320990C:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x83209944
	if (!ctx.cr6.lt) goto loc_83209944;
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwimi r10,r9,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r8,55
	ctx.r8.s64 = 55;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r9,21008
	ctx.r9.s64 = 21008;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83209a64
	goto loc_83209A64;
loc_83209944:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x83209a4c
	if (ctx.cr6.eq) goto loc_83209A4C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r11,r11,13
	ctx.r11.u64 = ctx.r11.u64 | 13;
	// ori r8,r10,33
	ctx.r8.u64 = ctx.r10.u64 | 33;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// rlwinm r11,r25,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFF0000;
	// lis r8,228
	ctx.r8.s64 = 14942208;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x832099e0
	if (ctx.cr6.eq) goto loc_832099E0;
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lis r7,-31907
	ctx.r7.s64 = -2091057152;
	// rlwinm r6,r8,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// lis r5,68
	ctx.r5.s64 = 4456448;
	// addi r7,r7,-9736
	ctx.r7.s64 = ctx.r7.s64 + -9736;
	// rlwinm r4,r6,2,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
	// rlwinm r6,r6,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// rlwinm r8,r8,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// lwzx r4,r4,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwzx r6,r6,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// rlwinm r7,r4,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// b 0x832099f0
	goto loc_832099F0;
loc_832099E0:
	// lis r8,4
	ctx.r8.s64 = 262144;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// ori r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 | 32;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_832099F0:
	// rlwinm r10,r25,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xF000000;
	// lis r8,3328
	ctx.r8.s64 = 218103808;
	// rlwimi r3,r9,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// lis r10,65
	ctx.r10.s64 = 4259840;
	// li r8,21845
	ctx.r8.s64 = 21845;
	// bne cr6,0x83209a28
	if (!ctx.cr6.eq) goto loc_83209A28;
	// clrlwi r9,r3,10
	ctx.r9.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x83209a40
	goto loc_83209A40;
loc_83209A28:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83209A40:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// li r3,33
	ctx.r3.s64 = 33;
	// li r9,4
	ctx.r9.s64 = 4;
loc_83209A4C:
	// rlwimi r3,r9,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r10,55
	ctx.r10.s64 = 55;
	// clrlwi r9,r3,10
	ctx.r9.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_83209A64:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83209A78"))) PPC_WEAK_FUNC(sub_83209A78);
PPC_FUNC_IMPL(__imp__sub_83209A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x83209A80;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r19,0(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// stw r7,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r14,r11,0,3,3
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// bne 0x83209abc
	if (!ctx.cr0.eq) goto loc_83209ABC;
	// bl 0x82bea298
	ctx.lr = 0x83209ABC;
	sub_82BEA298(ctx, base);
loc_83209ABC:
	// lwz r24,0(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r20,r31,4
	ctx.r20.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r15,r24
	ctx.r15.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83209ae0
	if (!ctx.cr6.eq) goto loc_83209AE0;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// b 0x83209af0
	goto loc_83209AF0;
loc_83209AE0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r29,1
	ctx.r29.s64 = 1;
	// beq cr6,0x83209af0
	if (ctx.cr6.eq) goto loc_83209AF0;
	// rlwinm r29,r24,10,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 10) & 0x1;
loc_83209AF0:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r22,r11,512
	ctx.r22.u64 = ctx.r11.u64 | 512;
	// ori r18,r10,33
	ctx.r18.u64 = ctx.r10.u64 | 33;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x83209b40
	if (ctx.cr6.eq) goto loc_83209B40;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83209b18
	if (!ctx.cr0.eq) goto loc_83209B18;
	// bl 0x82bea298
	ctx.lr = 0x83209B18;
	sub_82BEA298(ctx, base);
loc_83209B18:
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x83209b24
	if (!ctx.cr6.lt) goto loc_83209B24;
	// bl 0x82bea298
	ctx.lr = 0x83209B24;
	sub_82BEA298(ctx, base);
loc_83209B24:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r16,0(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r24,r12
	ctx.r11.u64 = ctx.r24.u64 & ctx.r12.u64;
	// or r24,r11,r18
	ctx.r24.u64 = ctx.r11.u64 | ctx.r18.u64;
	// b 0x83209b44
	goto loc_83209B44;
loc_83209B40:
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83209B44:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// beq 0x83209bd8
	if (ctx.cr0.eq) goto loc_83209BD8;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_83209B64:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x83209b70
	if (ctx.cr6.lt) goto loc_83209B70;
	// bl 0x82bea298
	ctx.lr = 0x83209B70;
	sub_82BEA298(ctx, base);
loc_83209B70:
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stwx r21,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r21.u32);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x83209bc0
	if (!ctx.cr6.eq) goto loc_83209BC0;
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x83209ba4
	if (ctx.cr6.gt) goto loc_83209BA4;
	// bl 0x82bea298
	ctx.lr = 0x83209BA4;
	sub_82BEA298(ctx, base);
loc_83209BA4:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83209bb4
	if (!ctx.cr0.eq) goto loc_83209BB4;
	// bl 0x82bea298
	ctx.lr = 0x83209BB4;
	sub_82BEA298(ctx, base);
loc_83209BB4:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_83209BC0:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83209b64
	if (!ctx.cr0.eq) goto loc_83209B64;
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83209BD8:
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x83209c08
	if (ctx.cr6.lt) goto loc_83209C08;
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x83209bf4
	if (!ctx.cr6.lt) goto loc_83209BF4;
	// bl 0x82bea298
	ctx.lr = 0x83209BF4;
	sub_82BEA298(ctx, base);
loc_83209BF4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r31,r30,21
	ctx.r31.u64 = ctx.r30.u32 & 0x7FF;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r26,r11,0,8,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// b 0x83209c0c
	goto loc_83209C0C;
loc_83209C08:
	// clrlwi r31,r15,21
	ctx.r31.u64 = ctx.r15.u32 & 0x7FF;
loc_83209C0C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r19,4
	ctx.r9.s64 = ctx.r19.s64 + 4;
	// rlwinm. r27,r26,0,14,14
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// rlwimi r11,r29,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// beq 0x83209c30
	if (ctx.cr0.eq) goto loc_83209C30;
	// ori r10,r10,94
	ctx.r10.u64 = ctx.r10.u64 | 94;
	// b 0x83209c34
	goto loc_83209C34;
loc_83209C30:
	// ori r10,r10,93
	ctx.r10.u64 = ctx.r10.u64 | 93;
loc_83209C34:
	// rlwimi r10,r11,16,7,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1FF0000) | (ctx.r10.u64 & 0xFFFFFFFFFE00FFFF);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r10,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83209ca0
	if (!ctx.cr6.eq) goto loc_83209CA0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83209c50
	if (ctx.cr6.eq) goto loc_83209C50;
	// bl 0x82bea298
	ctx.lr = 0x83209C50;
	sub_82BEA298(ctx, base);
loc_83209C50:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83209c64
	if (ctx.cr6.lt) goto loc_83209C64;
	// bl 0x82bea298
	ctx.lr = 0x83209C64;
	sub_82BEA298(ctx, base);
loc_83209C64:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x832084b0
	ctx.lr = 0x83209C74;
	sub_832084B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,81
	ctx.r10.s64 = 81;
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// rlwimi r31,r10,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// ori r10,r9,12816
	ctx.r10.u64 = ctx.r9.u64 | 12816;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x83209df4
	goto loc_83209DF4;
loc_83209CA0:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bne cr6,0x83209cf4
	if (!ctx.cr6.eq) goto loc_83209CF4;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83209cbc
	if (ctx.cr6.eq) goto loc_83209CBC;
	// bl 0x82bea298
	ctx.lr = 0x83209CBC;
	sub_82BEA298(ctx, base);
loc_83209CBC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83209cc8
	if (ctx.cr6.eq) goto loc_83209CC8;
	// bl 0x82bea298
	ctx.lr = 0x83209CC8;
	sub_82BEA298(ctx, base);
loc_83209CC8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x832084b0
	ctx.lr = 0x83209CD8;
	sub_832084B0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x832085d8
	ctx.lr = 0x83209CF0;
	sub_832085D8(ctx, base);
	// b 0x83209df4
	goto loc_83209DF4;
loc_83209CF4:
	// rlwinm r29,r30,0,8,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// beq cr6,0x83209d08
	if (ctx.cr6.eq) goto loc_83209D08;
	// bl 0x82bea298
	ctx.lr = 0x83209D08;
	sub_82BEA298(ctx, base);
loc_83209D08:
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x83209d14
	if (!ctx.cr6.lt) goto loc_83209D14;
	// bl 0x82bea298
	ctx.lr = 0x83209D14;
	sub_82BEA298(ctx, base);
loc_83209D14:
	// lis r28,228
	ctx.r28.s64 = 14942208;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x83209d3c
	if (ctx.cr6.eq) goto loc_83209D3C;
	// oris r24,r24,15
	ctx.r24.u64 = ctx.r24.u64 | 983040;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x83209d3c
	if (!ctx.cr6.eq) goto loc_83209D3C;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r24,r12
	ctx.r11.u64 = ctx.r24.u64 & ctx.r12.u64;
	// or r24,r11,r18
	ctx.r24.u64 = ctx.r11.u64 | ctx.r18.u64;
loc_83209D3C:
	// rlwinm. r11,r26,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83209d48
	if (ctx.cr0.eq) goto loc_83209D48;
	// lis r30,96
	ctx.r30.s64 = 6291456;
loc_83209D48:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832084b0
	ctx.lr = 0x83209D58;
	sub_832084B0(ctx, base);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832085d8
	ctx.lr = 0x83209D74;
	sub_832085D8(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83209db0
	if (ctx.cr6.eq) goto loc_83209DB0;
	// andis. r11,r31,2816
	ctx.r11.u64 = ctx.r31.u64 & 184549376;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83209d8c
	if (ctx.cr0.eq) goto loc_83209D8C;
	// bl 0x82bea298
	ctx.lr = 0x83209D8C;
	sub_82BEA298(ctx, base);
loc_83209D8C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83209d98
	if (ctx.cr6.eq) goto loc_83209D98;
	// bl 0x82bea298
	ctx.lr = 0x83209D98;
	sub_82BEA298(ctx, base);
loc_83209D98:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832085d8
	ctx.lr = 0x83209DB0;
	sub_832085D8(ctx, base);
loc_83209DB0:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x83209dd4
	if (ctx.cr6.eq) goto loc_83209DD4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83208838
	ctx.lr = 0x83209DD0;
	sub_83208838(ctx, base);
	// b 0x83209df4
	goto loc_83209DF4;
loc_83209DD4:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x83209df4
	if (ctx.cr6.eq) goto loc_83209DF4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83208a20
	ctx.lr = 0x83209DF4;
	sub_83208A20(ctx, base);
loc_83209DF4:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r20,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r20.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83209E10"))) PPC_WEAK_FUNC(sub_83209E10);
PPC_FUNC_IMPL(__imp__sub_83209E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x83209E18;
	__savegprlr_16(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83209e40
	if (!ctx.cr6.eq) goto loc_83209E40;
	// li r21,0
	ctx.r21.s64 = 0;
	// b 0x83209e4c
	goto loc_83209E4C;
loc_83209E40:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r21,r11,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_83209E4C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r30,r11,512
	ctx.r30.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x83209e60
	if (!ctx.cr6.lt) goto loc_83209E60;
	// bl 0x82bea298
	ctx.lr = 0x83209E60;
	sub_82BEA298(ctx, base);
loc_83209E60:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r26,0(r16)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r20,r11,0,3,3
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// clrlwi r23,r11,16
	ctx.r23.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x83209e88
	if (!ctx.cr0.eq) goto loc_83209E88;
	// bl 0x82bea298
	ctx.lr = 0x83209E88;
	sub_82BEA298(ctx, base);
loc_83209E88:
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// ori r24,r11,33
	ctx.r24.u64 = ctx.r11.u64 | 33;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// beq cr6,0x83209edc
	if (ctx.cr6.eq) goto loc_83209EDC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83209eb4
	if (!ctx.cr0.eq) goto loc_83209EB4;
	// bl 0x82bea298
	ctx.lr = 0x83209EB4;
	sub_82BEA298(ctx, base);
loc_83209EB4:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x83209ec0
	if (ctx.cr6.gt) goto loc_83209EC0;
	// bl 0x82bea298
	ctx.lr = 0x83209EC0;
	sub_82BEA298(ctx, base);
loc_83209EC0:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r19,0(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// or r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 | ctx.r24.u64;
	// b 0x83209ee0
	goto loc_83209EE0;
loc_83209EDC:
	// lwz r19,80(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83209EE0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83209f58
	if (ctx.cr0.eq) goto loc_83209F58;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83209EF4:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stwx r9,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x83209f38
	if (!ctx.cr6.eq) goto loc_83209F38;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83209f2c
	if (!ctx.cr0.eq) goto loc_83209F2C;
	// bl 0x82bea298
	ctx.lr = 0x83209F2C;
	sub_82BEA298(ctx, base);
loc_83209F2C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_83209F38:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x83209ef4
	if (!ctx.cr0.eq) goto loc_83209EF4;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// ble cr6,0x83209f58
	if (!ctx.cr6.gt) goto loc_83209F58;
	// bl 0x82bea298
	ctx.lr = 0x83209F58;
	sub_82BEA298(ctx, base);
loc_83209F58:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r26,4
	ctx.r8.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r23,95
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 95, ctx.xer);
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// rlwimi r11,r21,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r21.u32, 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// bne cr6,0x83209f80
	if (!ctx.cr6.eq) goto loc_83209F80;
	// lis r9,2560
	ctx.r9.s64 = 167772160;
	// ori r9,r9,94
	ctx.r9.u64 = ctx.r9.u64 | 94;
	// b 0x83209f88
	goto loc_83209F88;
loc_83209F80:
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// ori r9,r9,95
	ctx.r9.u64 = ctx.r9.u64 | 95;
loc_83209F88:
	// rlwimi r9,r11,16,7,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1FF0000) | (ctx.r9.u64 & 0xFFFFFFFFFE00FFFF);
	// rlwinm r28,r10,0,8,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// lis r26,228
	ctx.r26.s64 = 14942208;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x83209fbc
	if (ctx.cr6.eq) goto loc_83209FBC;
	// oris r27,r27,15
	ctx.r27.u64 = ctx.r27.u64 | 983040;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x83209fbc
	if (!ctx.cr6.eq) goto loc_83209FBC;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// or r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 | ctx.r24.u64;
loc_83209FBC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832084b0
	ctx.lr = 0x83209FCC;
	sub_832084B0(ctx, base);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832085d8
	ctx.lr = 0x83209FEC;
	sub_832085D8(ctx, base);
	// cmplwi cr6,r23,95
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 95, ctx.xer);
	// bne cr6,0x8320a010
	if (!ctx.cr6.eq) goto loc_8320A010;
	// andis. r11,r31,2816
	ctx.r11.u64 = ctx.r31.u64 & 184549376;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8320a004
	if (ctx.cr0.eq) goto loc_8320A004;
	// bl 0x82bea298
	ctx.lr = 0x8320A004;
	sub_82BEA298(ctx, base);
loc_8320A004:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8320a03c
	goto loc_8320A03C;
loc_8320A010:
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// beq cr6,0x8320a01c
	if (ctx.cr6.eq) goto loc_8320A01C;
	// bl 0x82bea298
	ctx.lr = 0x8320A01C;
	sub_82BEA298(ctx, base);
loc_8320A01C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x832085d8
	ctx.lr = 0x8320A034;
	sub_832085D8(ctx, base);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_8320A03C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x832085d8
	ctx.lr = 0x8320A04C;
	sub_832085D8(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x8320a070
	if (ctx.cr6.eq) goto loc_8320A070;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83208838
	ctx.lr = 0x8320A06C;
	sub_83208838(ctx, base);
	// b 0x8320a090
	goto loc_8320A090;
loc_8320A070:
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8320a090
	if (ctx.cr6.eq) goto loc_8320A090;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83208a20
	ctx.lr = 0x8320A090;
	sub_83208A20(ctx, base);
loc_8320A090:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// stw r29,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r29.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320A0A4"))) PPC_WEAK_FUNC(sub_8320A0A4);
PPC_FUNC_IMPL(__imp__sub_8320A0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320A0A8"))) PPC_WEAK_FUNC(sub_8320A0A8);
PPC_FUNC_IMPL(__imp__sub_8320A0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8320A0B0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// li r18,0
	ctx.r18.s64 = 0;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8320a0dc
	if (!ctx.cr6.eq) goto loc_8320A0DC;
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// b 0x8320a0e8
	goto loc_8320A0E8;
loc_8320A0DC:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r17,r11,27,31,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8320A0E8:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8320a0fc
	if (ctx.cr6.lt) goto loc_8320A0FC;
	// bl 0x82bea298
	ctx.lr = 0x8320A0FC;
	sub_82BEA298(ctx, base);
loc_8320A0FC:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r16,0(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8320a11c
	if (!ctx.cr0.eq) goto loc_8320A11C;
	// bl 0x82bea298
	ctx.lr = 0x8320A11C;
	sub_82BEA298(ctx, base);
loc_8320A11C:
	// lwz r20,0(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// clrlwi r30,r20,21
	ctx.r30.u64 = ctx.r20.u32 & 0x7FF;
	// rlwimi r10,r20,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r20.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r15,r11,4
	ctx.r15.s64 = ctx.r11.s64 + 4;
	// rlwinm r29,r10,24,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x8320a148
	if (ctx.cr6.eq) goto loc_8320A148;
	// bl 0x82bea298
	ctx.lr = 0x8320A148;
	sub_82BEA298(ctx, base);
loc_8320A148:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83207cc0
	ctx.lr = 0x8320A15C;
	sub_83207CC0(ctx, base);
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// li r9,80
	ctx.r9.s64 = 80;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r7,r23,16,10,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 16) & 0x3F0000;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r10,r23,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r23.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwimi r9,r30,16,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// or r22,r7,r8
	ctx.r22.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r21,r10,r8
	ctx.r21.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r9,r10,12816
	ctx.r9.u64 = ctx.r10.u64 | 12816;
	// li r25,33
	ctx.r25.s64 = 33;
	// rlwinm r10,r27,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFF0000;
	// lis r8,228
	ctx.r8.s64 = 14942208;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8320a224
	if (ctx.cr6.eq) goto loc_8320A224;
	// rlwinm r11,r10,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// lis r9,-31907
	ctx.r9.s64 = -2091057152;
	// rlwinm r8,r11,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,-9736
	ctx.r9.s64 = ctx.r9.s64 + -9736;
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,18,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xC;
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r24,r9,r11
	ctx.r24.u64 = ctx.r9.u64 | ctx.r11.u64;
	// b 0x8320a228
	goto loc_8320A228;
loc_8320A224:
	// li r24,12816
	ctx.r24.s64 = 12816;
loc_8320A228:
	// rlwinm r3,r27,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xF000000;
	// bl 0x83207b70
	ctx.lr = 0x8320A230;
	sub_83207B70(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83208330
	ctx.lr = 0x8320A244;
	sub_83208330(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8320a274
	if (!ctx.cr6.eq) goto loc_8320A274;
	// cmplwi cr6,r24,12816
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 12816, ctx.xer);
	// bne cr6,0x8320a274
	if (!ctx.cr6.eq) goto loc_8320A274;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r11,16,10,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000;
	// clrlwi r26,r11,26
	ctx.r26.u64 = ctx.r11.u32 & 0x3F;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | ctx.r29.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8320a2a0
	goto loc_8320A2A0;
loc_8320A274:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r26,r11,26
	ctx.r26.u64 = ctx.r11.u32 & 0x3F;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | ctx.r29.u64;
	// or r9,r28,r24
	ctx.r9.u64 = ctx.r28.u64 | ctx.r24.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8320A2A0:
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// oris r9,r9,81
	ctx.r9.u64 = ctx.r9.u64 | 5308416;
	// oris r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 65536;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x8320a308
	if (!ctx.cr6.eq) goto loc_8320A308;
	// cmplwi cr6,r24,12816
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 12816, ctx.xer);
	// bne cr6,0x8320a308
	if (!ctx.cr6.eq) goto loc_8320A308;
	// rlwinm r8,r26,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// or r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 | ctx.r29.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x8320a324
	goto loc_8320A324;
loc_8320A308:
	// rlwinm r8,r26,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// or r7,r28,r24
	ctx.r7.u64 = ctx.r28.u64 | ctx.r24.u64;
	// oris r8,r8,64
	ctx.r8.u64 = ctx.r8.u64 | 4194304;
	// or r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 | ctx.r29.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_8320A324:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// oris r10,r10,65
	ctx.r10.u64 = ctx.r10.u64 | 4259840;
	// li r8,50
	ctx.r8.s64 = 50;
	// li r27,4369
	ctx.r27.s64 = 4369;
	// li r7,93
	ctx.r7.s64 = 93;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// rlwimi r10,r17,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r17.u32, 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// beq cr6,0x8320a380
	if (ctx.cr6.eq) goto loc_8320A380;
	// bl 0x82bea298
	ctx.lr = 0x8320A380;
	sub_82BEA298(ctx, base);
loc_8320A380:
	// cmplwi cr6,r16,67
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 67, ctx.xer);
	// bne cr6,0x8320a3a4
	if (!ctx.cr6.eq) goto loc_8320A3A4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x832084b0
	ctx.lr = 0x8320A398;
	sub_832084B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// b 0x8320a510
	goto loc_8320A510;
loc_8320A3A4:
	// cmplwi cr6,r16,68
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 68, ctx.xer);
	// bne cr6,0x8320a514
	if (!ctx.cr6.eq) goto loc_8320A514;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,68
	ctx.r10.s64 = 4456448;
	// li r8,272
	ctx.r8.s64 = 272;
	// ori r10,r10,15
	ctx.r10.u64 = ctx.r10.u64 | 15;
	// rlwinm r7,r26,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// oris r9,r7,64
	ctx.r9.u64 = ctx.r7.u64 | 4194304;
	// or r7,r28,r24
	ctx.r7.u64 = ctx.r28.u64 | ctx.r24.u64;
	// or r6,r9,r29
	ctx.r6.u64 = ctx.r9.u64 | ctx.r29.u64;
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// li r5,73
	ctx.r5.s64 = 73;
	// oris r4,r9,65
	ctx.r4.u64 = ctx.r9.u64 | 4259840;
	// rlwinm. r3,r20,0,8,11
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x8320a44c
	if (ctx.cr0.eq) goto loc_8320A44C;
	// li r9,256
	ctx.r9.s64 = 256;
loc_8320A44C:
	// rlwinm. r8,r20,8,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 8) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// beq 0x8320a488
	if (ctx.cr0.eq) goto loc_8320A488;
	// rlwinm. r7,r8,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8320a474
	if (ctx.cr0.eq) goto loc_8320A474;
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	// lis r7,-31907
	ctx.r7.s64 = -2091057152;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,-9752
	ctx.r7.s64 = ctx.r7.s64 + -9752;
	// b 0x8320a47c
	goto loc_8320A47C;
loc_8320A474:
	// lis r7,-31907
	ctx.r7.s64 = -2091057152;
	// addi r7,r7,-9768
	ctx.r7.s64 = ctx.r7.s64 + -9768;
loc_8320A47C:
	// rlwinm r8,r8,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r7,r8,9,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
loc_8320A488:
	// or. r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 | ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8320a4ac
	if (!ctx.cr0.eq) goto loc_8320A4AC;
	// rlwinm r9,r20,0,12,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xF0000;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8320a4ac
	if (!ctx.cr6.eq) goto loc_8320A4AC;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8320a4f8
	goto loc_8320A4F8;
loc_8320A4AC:
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm. r6,r20,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r8,r20,0,12,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xF0000;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// beq 0x8320a4c8
	if (ctx.cr0.eq) goto loc_8320A4C8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8320A4C8:
	// rlwinm. r6,r8,0,14,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8320a4d4
	if (ctx.cr0.eq) goto loc_8320A4D4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_8320A4D4:
	// rlwinm. r6,r8,0,13,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8320a4e0
	if (ctx.cr0.eq) goto loc_8320A4E0;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_8320A4E0:
	// rlwinm. r8,r8,0,12,12
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8320a4ec
	if (ctx.cr0.eq) goto loc_8320A4EC;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_8320A4EC:
	// or r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 | ctx.r7.u64;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_8320A4F8:
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,8738
	ctx.r9.s64 = 8738;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8320A510:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_8320A514:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r15,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r15.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320A528"))) PPC_WEAK_FUNC(sub_8320A528);
PPC_FUNC_IMPL(__imp__sub_8320A528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8320A530;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8320a554
	if (ctx.cr6.eq) goto loc_8320A554;
	// bl 0x82bea298
	ctx.lr = 0x8320A554;
	sub_82BEA298(ctx, base);
loc_8320A554:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r29,0(r15)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8320a570
	if (!ctx.cr0.eq) goto loc_8320A570;
	// bl 0x82bea298
	ctx.lr = 0x8320A570;
	sub_82BEA298(ctx, base);
loc_8320A570:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// clrlwi r27,r28,21
	ctx.r27.u64 = ctx.r28.u32 & 0x7FF;
	// rlwimi r10,r28,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r3,r10,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// addi r17,r11,8
	ctx.r17.s64 = ctx.r11.s64 + 8;
	// bl 0x83207cc0
	ctx.lr = 0x8320A5A0;
	sub_83207CC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r19,33
	ctx.r19.s64 = 33;
	// or r23,r10,r9
	ctx.r23.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r19,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r19.u32);
	// rlwinm. r7,r28,0,8,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r23,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r23.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x8320a5d8
	if (ctx.cr0.eq) goto loc_8320A5D8;
	// li r8,256
	ctx.r8.s64 = 256;
loc_8320A5D8:
	// rlwinm. r11,r28,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x8320a614
	if (ctx.cr0.eq) goto loc_8320A614;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8320a600
	if (ctx.cr0.eq) goto loc_8320A600;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-9752
	ctx.r10.s64 = ctx.r10.s64 + -9752;
	// b 0x8320a608
	goto loc_8320A608;
loc_8320A600:
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// addi r10,r10,-9768
	ctx.r10.s64 = ctx.r10.s64 + -9768;
loc_8320A608:
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
loc_8320A614:
	// rlwinm. r11,r28,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r18,r10,r8
	ctx.r18.u64 = ctx.r10.u64 | ctx.r8.u64;
	// addi r29,r9,4
	ctx.r29.s64 = ctx.r9.s64 + 4;
	// beq 0x8320a630
	if (ctx.cr0.eq) goto loc_8320A630;
	// ori r11,r18,1
	ctx.r11.u64 = ctx.r18.u64 | 1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x8320a634
	goto loc_8320A634;
loc_8320A630:
	// stw r18,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r18.u32);
loc_8320A634:
	// rlwinm r11,r30,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// lis r9,228
	ctx.r9.s64 = 14942208;
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// addi r31,r10,-9736
	ctx.r31.s64 = ctx.r10.s64 + -9736;
	// beq cr6,0x8320a690
	if (ctx.cr6.eq) goto loc_8320A690;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r8,r9,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r9,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// or r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x8320a694
	goto loc_8320A694;
loc_8320A690:
	// li r20,12816
	ctx.r20.s64 = 12816;
loc_8320A694:
	// rlwinm r26,r30,0,4,7
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83207b70
	ctx.lr = 0x8320A6A0;
	sub_83207B70(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83208330
	ctx.lr = 0x8320A6B4;
	sub_83208330(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x8320a6e4
	if (!ctx.cr6.eq) goto loc_8320A6E4;
	// cmplwi cr6,r20,12816
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 12816, ctx.xer);
	// bne cr6,0x8320a6e4
	if (!ctx.cr6.eq) goto loc_8320A6E4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r25,r3,16
	ctx.r25.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r11,16,10,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000;
	// clrlwi r24,r11,26
	ctx.r24.u64 = ctx.r11.u32 & 0x3F;
	// or r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 | ctx.r25.u64;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x8320a710
	goto loc_8320A710;
loc_8320A6E4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r25,r3,16
	ctx.r25.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r24,r11,26
	ctx.r24.u64 = ctx.r11.u32 & 0x3F;
	// or r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 | ctx.r25.u64;
	// or r9,r22,r20
	ctx.r9.u64 = ctx.r22.u64 | ctx.r20.u64;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8320A710:
	// rlwinm r10,r30,14,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3F;
	// addi r9,r27,8
	ctx.r9.s64 = ctx.r27.s64 + 8;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r27,r9,16
	ctx.r27.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r9,r8,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r7,r30,18,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0xC;
	// oris r6,r27,1
	ctx.r6.u64 = ctx.r27.u64 | 65536;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// lwzx r7,r7,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r11,r11,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r14,r31,29
	ctx.r14.u64 = ctx.r31.u32 & 0x7;
	// bl 0x83207b70
	ctx.lr = 0x8320A770;
	sub_83207B70(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83208330
	ctx.lr = 0x8320A784;
	sub_83208330(ctx, base);
	// rlwinm r11,r31,4,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0x70;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// or r8,r11,r14
	ctx.r8.u64 = ctx.r11.u64 | ctx.r14.u64;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// or r10,r8,r14
	ctx.r10.u64 = ctx.r8.u64 | ctx.r14.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r7,r10,r26
	ctx.r7.u64 = ctx.r10.u64 | ctx.r26.u64;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r9,r7,r14
	ctx.r9.u64 = ctx.r7.u64 | ctx.r14.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// rlwinm. r8,r28,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x8320a7e8
	if (ctx.cr0.eq) goto loc_8320A7E8;
	// ori r9,r18,4
	ctx.r9.u64 = ctx.r18.u64 | 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x8320a7ec
	goto loc_8320A7EC;
loc_8320A7E8:
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
loc_8320A7EC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x8320a810
	if (!ctx.cr6.eq) goto loc_8320A810;
	// cmplwi cr6,r20,12816
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 12816, ctx.xer);
	// bne cr6,0x8320a810
	if (!ctx.cr6.eq) goto loc_8320A810;
	// rlwinm r9,r24,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 | ctx.r25.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x8320a82c
	goto loc_8320A82C;
loc_8320A810:
	// rlwinm r9,r24,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF0000;
	// or r8,r22,r20
	ctx.r8.u64 = ctx.r22.u64 | ctx.r20.u64;
	// oris r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 4194304;
	// or r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 | ctx.r25.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_8320A82C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// oris r9,r27,65
	ctx.r9.u64 = ctx.r27.u64 | 4259840;
	// rlwinm r8,r31,28,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0x7;
	// li r7,50
	ctx.r7.s64 = 50;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rlwinm r9,r31,0,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x70;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 | ctx.r26.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r9.u32);
	// stw r17,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r17.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320A888"))) PPC_WEAK_FUNC(sub_8320A888);
PPC_FUNC_IMPL(__imp__sub_8320A888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x8320A890;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8320a8b4
	if (!ctx.cr6.eq) goto loc_8320A8B4;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x8320a8c0
	goto loc_8320A8C0;
loc_8320A8B4:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8320A8C0:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8320a8d4
	if (ctx.cr6.lt) goto loc_8320A8D4;
	// bl 0x82bea298
	ctx.lr = 0x8320A8D4;
	sub_82BEA298(ctx, base);
loc_8320A8D4:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r22,r11,4
	ctx.r22.s64 = ctx.r11.s64 + 4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// clrlwi r29,r31,21
	ctx.r29.u64 = ctx.r31.u32 & 0x7FF;
	// rlwimi r10,r31,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x8320a910
	if (ctx.cr6.eq) goto loc_8320A910;
	// bl 0x82bea298
	ctx.lr = 0x8320A910;
	sub_82BEA298(ctx, base);
loc_8320A910:
	// rlwimi r29,r25,8,23,23
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r25.u32, 8) & 0x100) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFEFF);
	// li r11,93
	ctx.r11.s64 = 93;
	// clrlwi r10,r29,23
	ctx.r10.u64 = ctx.r29.u32 & 0x1FF;
	// addi r9,r28,4
	ctx.r9.s64 = ctx.r28.s64 + 4;
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832084b0
	ctx.lr = 0x8320A93C;
	sub_832084B0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x8320a954
	if (ctx.cr6.eq) goto loc_8320A954;
	// bl 0x82bea298
	ctx.lr = 0x8320A954;
	sub_82BEA298(ctx, base);
loc_8320A954:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83208330
	ctx.lr = 0x8320A964;
	sub_83208330(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r3,r30,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// bl 0x83207b70
	ctx.lr = 0x8320A970;
	sub_83207B70(ctx, base);
	// rlwinm r31,r30,0,8,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8320a9d4
	if (ctx.cr6.eq) goto loc_8320A9D4;
	// bl 0x82bea298
	ctx.lr = 0x8320A988;
	sub_82BEA298(ctx, base);
	// rlwinm r11,r31,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-9736
	ctx.r10.s64 = ctx.r10.s64 + -9736;
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r7,r9,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r8,r31,18,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 18) & 0xC;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x8320a9d8
	goto loc_8320A9D8;
loc_8320A9D4:
	// li r11,12816
	ctx.r11.s64 = 12816;
loc_8320A9D8:
	// cmplwi cr6,r26,82
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 82, ctx.xer);
	// bne cr6,0x8320aa0c
	if (!ctx.cr6.eq) goto loc_8320AA0C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8320aa0c
	if (!ctx.cr6.eq) goto loc_8320AA0C;
	// cmplwi cr6,r11,12816
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12816, ctx.xer);
	// bne cr6,0x8320aa0c
	if (!ctx.cr6.eq) goto loc_8320AA0C;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r29,r10,16,10,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r29,10
	ctx.r10.u64 = ctx.r29.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8320aa68
	goto loc_8320AA68;
loc_8320AA0C:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r7,r29,16
	ctx.r7.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwimi r8,r9,16,10,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r8.u64 & 0xFFFFFFFFFFC0FFFF);
	// cmplwi cr6,r26,69
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 69, ctx.xer);
	// or r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8320aa48
	if (!ctx.cr6.eq) goto loc_8320AA48;
	// li r9,13312
	ctx.r9.s64 = 13312;
	// rlwinm r8,r11,20,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// rlwimi r9,r11,4,25,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
	// or r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x8320aa5c
	goto loc_8320AA5C;
loc_8320AA48:
	// cmplwi cr6,r26,70
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 70, ctx.xer);
	// bne cr6,0x8320aa5c
	if (!ctx.cr6.eq) goto loc_8320AA5C;
	// rlwinm r11,r11,28,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7F;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// ori r11,r11,13312
	ctx.r11.u64 = ctx.r11.u64 | 13312;
loc_8320AA5C:
	// or r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 | ctx.r30.u64;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8320AA68:
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// stw r22,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r22.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320AA78"))) PPC_WEAK_FUNC(sub_8320AA78);
PPC_FUNC_IMPL(__imp__sub_8320AA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8320AA80;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8320aaa4
	if (ctx.cr6.lt) goto loc_8320AAA4;
	// bl 0x82bea298
	ctx.lr = 0x8320AAA4;
	sub_82BEA298(ctx, base);
loc_8320AAA4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// clrlwi r31,r10,21
	ctx.r31.u64 = ctx.r10.u32 & 0x7FF;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r25,r11,4
	ctx.r25.s64 = ctx.r11.s64 + 4;
	// rlwinm r29,r9,24,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x8320aadc
	if (ctx.cr6.eq) goto loc_8320AADC;
	// bl 0x82bea298
	ctx.lr = 0x8320AADC;
	sub_82BEA298(ctx, base);
loc_8320AADC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83207cc0
	ctx.lr = 0x8320AAF0;
	sub_83207CC0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r10,34
	ctx.r10.s64 = 34;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r31,r10,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832085d8
	ctx.lr = 0x8320AB50;
	sub_832085D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320AB64"))) PPC_WEAK_FUNC(sub_8320AB64);
PPC_FUNC_IMPL(__imp__sub_8320AB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320AB68"))) PPC_WEAK_FUNC(sub_8320AB68);
PPC_FUNC_IMPL(__imp__sub_8320AB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x8320AB70;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8320ab94
	if (ctx.cr6.lt) goto loc_8320AB94;
	// bl 0x82bea298
	ctx.lr = 0x8320AB94;
	sub_82BEA298(ctx, base);
loc_8320AB94:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r30,0(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r24,r11,4
	ctx.r24.s64 = ctx.r11.s64 + 4;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r10,21
	ctx.r29.u64 = ctx.r10.u32 & 0x7FF;
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r28,r9,24,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// addi r10,r11,-73
	ctx.r10.s64 = ctx.r11.s64 + -73;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r31,r10,1
	ctx.r31.u64 = ctx.r10.u64 ^ 1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8320abe0
	if (!ctx.cr6.eq) goto loc_8320ABE0;
	// lhz r11,14(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 14);
loc_8320ABE0:
	// addi r11,r11,-77
	ctx.r11.s64 = ctx.r11.s64 + -77;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x8320abf8
	if (ctx.cr6.eq) goto loc_8320ABF8;
	// bl 0x82bea298
	ctx.lr = 0x8320ABF8;
	sub_82BEA298(ctx, base);
loc_8320ABF8:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x83207cc0
	ctx.lr = 0x8320AC18;
	sub_83207CC0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// subfic r10,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r31.s64;
	// li r7,34
	ctx.r7.s64 = 34;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// clrlwi r31,r29,16
	ctx.r31.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// oris r10,r31,17
	ctx.r10.u64 = ctx.r31.u64 | 1114112;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832085d8
	ctx.lr = 0x8320AC84;
	sub_832085D8(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8320acd0
	if (ctx.cr6.eq) goto loc_8320ACD0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,68
	ctx.r9.s64 = 4456448;
	// li r8,71
	ctx.r8.s64 = 71;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// oris r8,r31,81
	ctx.r8.u64 = ctx.r31.u64 | 5308416;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r9,13107
	ctx.r9.s64 = 13107;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x8320acd4
	goto loc_8320ACD4;
loc_8320ACD0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8320ACD4:
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320ACE4"))) PPC_WEAK_FUNC(sub_8320ACE4);
PPC_FUNC_IMPL(__imp__sub_8320ACE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320ACE8"))) PPC_WEAK_FUNC(sub_8320ACE8);
PPC_FUNC_IMPL(__imp__sub_8320ACE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b8
	ctx.lr = 0x8320ACF0;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8320ad14
	if (!ctx.cr6.eq) goto loc_8320AD14;
	// li r19,0
	ctx.r19.s64 = 0;
	// b 0x8320ad20
	goto loc_8320AD20;
loc_8320AD14:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r19,r11,27,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8320AD20:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8320ad34
	if (ctx.cr6.lt) goto loc_8320AD34;
	// bl 0x82bea298
	ctx.lr = 0x8320AD34;
	sub_82BEA298(ctx, base);
loc_8320AD34:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lhz r25,2(r11)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r25,72
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 72, ctx.xer);
	// beq cr6,0x8320ad58
	if (ctx.cr6.eq) goto loc_8320AD58;
	// cmplwi cr6,r25,84
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 84, ctx.xer);
	// li r28,1
	ctx.r28.s64 = 1;
	// bne cr6,0x8320ad5c
	if (!ctx.cr6.eq) goto loc_8320AD5C;
loc_8320AD58:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8320AD5C:
	// lwz r23,0(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// lwz r26,4(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r8,34
	ctx.r8.s64 = 34;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// clrlwi r27,r23,21
	ctx.r27.u64 = ctx.r23.u32 & 0x7FF;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// rlwimi r9,r23,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r23.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r18,r11,4
	ctx.r18.s64 = ctx.r11.s64 + 4;
	// rlwinm r24,r9,24,27,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// beq cr6,0x8320ad94
	if (ctx.cr6.eq) goto loc_8320AD94;
	// bl 0x82bea298
	ctx.lr = 0x8320AD94;
	sub_82BEA298(ctx, base);
loc_8320AD94:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83207cc0
	ctx.lr = 0x8320ADA8;
	sub_83207CC0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// beq cr6,0x8320adbc
	if (ctx.cr6.eq) goto loc_8320ADBC;
	// bl 0x82bea298
	ctx.lr = 0x8320ADBC;
	sub_82BEA298(ctx, base);
loc_8320ADBC:
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// clrlwi r22,r29,16
	ctx.r22.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwimi r11,r31,16,10,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r20,r31,26
	ctx.r20.u64 = ctx.r31.u32 & 0x3F;
	// or r29,r11,r22
	ctx.r29.u64 = ctx.r11.u64 | ctx.r22.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// beq cr6,0x8320ae00
	if (ctx.cr6.eq) goto loc_8320AE00;
	// cmplwi cr6,r25,76
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 76, ctx.xer);
	// beq cr6,0x8320adf8
	if (ctx.cr6.eq) goto loc_8320ADF8;
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// beq cr6,0x8320adf8
	if (ctx.cr6.eq) goto loc_8320ADF8;
	// li r10,208
	ctx.r10.s64 = 208;
	// b 0x8320ae04
	goto loc_8320AE04;
loc_8320ADF8:
	// li r10,144
	ctx.r10.s64 = 144;
	// b 0x8320ae04
	goto loc_8320AE04;
loc_8320AE00:
	// li r10,228
	ctx.r10.s64 = 228;
loc_8320AE04:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r31,r27,16
	ctx.r31.u64 = ctx.r27.u32 & 0xFFFF;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// oris r9,r31,17
	ctx.r9.u64 = ctx.r31.u64 | 1114112;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832085d8
	ctx.lr = 0x8320AE38;
	sub_832085D8(ctx, base);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// li r26,93
	ctx.r26.s64 = 93;
	// ori r30,r11,14
	ctx.r30.u64 = ctx.r11.u64 | 14;
	// cmplwi cr6,r25,72
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 72, ctx.xer);
	// beq cr6,0x8320aee8
	if (ctx.cr6.eq) goto loc_8320AEE8;
	// cmplwi cr6,r25,74
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 74, ctx.xer);
	// beq cr6,0x8320aee8
	if (ctx.cr6.eq) goto loc_8320AEE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// beq cr6,0x8320aeac
	if (ctx.cr6.eq) goto loc_8320AEAC;
	// cmplwi cr6,r25,84
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 84, ctx.xer);
	// bne cr6,0x8320af30
	if (!ctx.cr6.eq) goto loc_8320AF30;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,71
	ctx.r9.s64 = 71;
	// stw r10,156(r21)
	PPC_STORE_U32(ctx.r21.u32 + 156, ctx.r10.u32);
	// lis r10,88
	ctx.r10.s64 = 5767168;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r8,257
	ctx.r8.s64 = 257;
	// lis r7,32
	ctx.r7.s64 = 2097152;
	// ori r9,r7,12816
	ctx.r9.u64 = ctx.r7.u64 | 12816;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x8320b0bc
	goto loc_8320B0BC;
loc_8320AEAC:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// li r9,71
	ctx.r9.s64 = 71;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// oris r7,r31,81
	ctx.r7.u64 = ctx.r31.u64 | 5308416;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r9,13107
	ctx.r9.s64 = 13107;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x8320af40
	goto loc_8320AF40;
loc_8320AEE8:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// rlwimi r10,r19,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r19.u32, 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832084b0
	ctx.lr = 0x8320AF1C;
	sub_832084B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r20,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 | ctx.r22.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8320AF30:
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// beq cr6,0x8320af40
	if (ctx.cr6.eq) goto loc_8320AF40;
	// cmplwi cr6,r25,76
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 76, ctx.xer);
	// bne cr6,0x8320b0c0
	if (!ctx.cr6.eq) goto loc_8320B0C0;
loc_8320AF40:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// ori r10,r10,82
	ctx.r10.u64 = ctx.r10.u64 | 82;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8320af5c
	if (ctx.cr6.eq) goto loc_8320AF5C;
	// bl 0x82bea298
	ctx.lr = 0x8320AF5C;
	sub_82BEA298(ctx, base);
loc_8320AF5C:
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x8320af8c
	if (!ctx.cr6.eq) goto loc_8320AF8C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// ori r10,r10,47768
	ctx.r10.u64 = ctx.r10.u64 | 47768;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8320b074
	goto loc_8320B074;
loc_8320AF8C:
	// lwz r29,0(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// rlwinm r11,r29,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8320aff0
	if (ctx.cr6.eq) goto loc_8320AFF0;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lis r9,-31907
	ctx.r9.s64 = -2091057152;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,-9736
	ctx.r9.s64 = ctx.r9.s64 + -9736;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 | ctx.r11.u64;
	// b 0x8320aff4
	goto loc_8320AFF4;
loc_8320AFF0:
	// li r28,12816
	ctx.r28.s64 = 12816;
loc_8320AFF4:
	// rlwinm r3,r29,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF000000;
	// bl 0x83207b70
	ctx.lr = 0x8320AFFC;
	sub_83207B70(ctx, base);
	// andi. r11,r3,34952
	ctx.r11.u64 = ctx.r3.u64 & 34952;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,34952
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34952, ctx.xer);
	// bne cr6,0x8320b018
	if (!ctx.cr6.eq) goto loc_8320B018;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,30583
	ctx.r12.u64 = ctx.r12.u64 | 30583;
	// and r30,r3,r12
	ctx.r30.u64 = ctx.r3.u64 & ctx.r12.u64;
	// b 0x8320b01c
	goto loc_8320B01C;
loc_8320B018:
	// ori r30,r3,34952
	ctx.r30.u64 = ctx.r3.u64 | 34952;
loc_8320B01C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83208330
	ctx.lr = 0x8320B02C;
	sub_83208330(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8320b054
	if (!ctx.cr6.eq) goto loc_8320B054;
	// cmplwi cr6,r28,12816
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 12816, ctx.xer);
	// bne cr6,0x8320b054
	if (!ctx.cr6.eq) goto loc_8320B054;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwimi r3,r10,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8320b07c
	goto loc_8320B07C;
loc_8320B054:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r8,r30,r28
	ctx.r8.u64 = ctx.r30.u64 | ctx.r28.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8320B074:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8320B07C:
	// rlwinm r10,r20,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 16) & 0xFFFF0000;
	// rlwimi r27,r19,8,23,23
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r19.u32, 8) & 0x100) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFEFF);
	// or r31,r10,r22
	ctx.r31.u64 = ctx.r10.u64 | ctx.r22.u64;
	// clrlwi r10,r27,23
	ctx.r10.u64 = ctx.r27.u32 & 0x1FF;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r26,r10,16,0,15
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r26.u64 & 0xFFFFFFFF0000FFFF);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832084b0
	ctx.lr = 0x8320B0B4;
	sub_832084B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8320B0BC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8320B0C0:
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// stw r18,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r18.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1108
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320B0D0"))) PPC_WEAK_FUNC(sub_8320B0D0);
PPC_FUNC_IMPL(__imp__sub_8320B0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x8320B0D8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8320b0fc
	if (!ctx.cr6.eq) goto loc_8320B0FC;
	// li r20,0
	ctx.r20.s64 = 0;
	// b 0x8320b108
	goto loc_8320B108;
loc_8320B0FC:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r20,r11,27,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8320B108:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,258
	ctx.r11.u64 = ctx.r11.u64 | 258;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8320b12c
	if (ctx.cr6.eq) goto loc_8320B12C;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,259
	ctx.r11.u64 = ctx.r11.u64 | 259;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8320b12c
	if (ctx.cr6.eq) goto loc_8320B12C;
	// bl 0x82bea298
	ctx.lr = 0x8320B12C;
	sub_82BEA298(ctx, base);
loc_8320B12C:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r28,0(r21)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r26,2(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r23,r11,4
	ctx.r23.s64 = ctx.r11.s64 + 4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// clrlwi r30,r31,21
	ctx.r30.u64 = ctx.r31.u32 & 0x7FF;
	// rlwimi r10,r31,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r29,r10,24,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x8320b168
	if (ctx.cr6.eq) goto loc_8320B168;
	// bl 0x82bea298
	ctx.lr = 0x8320B168;
	sub_82BEA298(ctx, base);
loc_8320B168:
	// li r11,34
	ctx.r11.s64 = 34;
	// addi r25,r28,4
	ctx.r25.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r26,85
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 85, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bne cr6,0x8320b19c
	if (!ctx.cr6.eq) goto loc_8320B19C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832084b0
	ctx.lr = 0x8320B190;
	sub_832084B0(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8320b1ec
	goto loc_8320B1EC;
loc_8320B19C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83207cc0
	ctx.lr = 0x8320B1B0;
	sub_83207CC0(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// beq cr6,0x8320b1c4
	if (ctx.cr6.eq) goto loc_8320B1C4;
	// bl 0x82bea298
	ctx.lr = 0x8320B1C4;
	sub_82BEA298(ctx, base);
loc_8320B1C4:
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwimi r10,r28,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r9,41
	ctx.r9.s64 = 41;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8320B1EC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// rlwimi r11,r24,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x8320b204
	if (ctx.cr6.eq) goto loc_8320B204;
	// bl 0x82bea298
	ctx.lr = 0x8320B204;
	sub_82BEA298(ctx, base);
loc_8320B204:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832085d8
	ctx.lr = 0x8320B21C;
	sub_832085D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,17
	ctx.r9.s64 = 17;
	// cmplwi cr6,r26,83
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 83, ctx.xer);
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x8320b27c
	if (!ctx.cr6.eq) goto loc_8320B27C;
	// rlwimi r30,r20,8,23,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r20.u32, 8) & 0x100) | (ctx.r30.u64 & 0xFFFFFFFFFFFFFEFF);
	// li r10,93
	ctx.r10.s64 = 93;
	// clrlwi r9,r30,23
	ctx.r9.u64 = ctx.r30.u32 & 0x1FF;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832084b0
	ctx.lr = 0x8320B268;
	sub_832084B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r29,r28,16,10,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0x3F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r29,10
	ctx.r10.u64 = ctx.r29.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8320B27C:
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// stw r23,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320B28C"))) PPC_WEAK_FUNC(sub_8320B28C);
PPC_FUNC_IMPL(__imp__sub_8320B28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320B290"))) PPC_WEAK_FUNC(sub_8320B290);
PPC_FUNC_IMPL(__imp__sub_8320B290) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b4
	ctx.lr = 0x8320B298;
	__savegprlr_15(ctx, base);
	// lis r9,-31890
	ctx.r9.s64 = -2089943040;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r15,r9,24344
	ctx.r15.s64 = ctx.r9.s64 + 24344;
	// addi r10,r10,32488
	ctx.r10.s64 = ctx.r10.s64 + 32488;
	// li r11,75
	ctx.r11.s64 = 75;
	// lis r27,-31967
	ctx.r27.s64 = -2094989312;
	// stw r11,24344(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24344, ctx.r11.u32);
	// li r9,71
	ctx.r9.s64 = 71;
	// stw r10,4(r15)
	PPC_STORE_U32(ctx.r15.u32 + 4, ctx.r10.u32);
	// addi r11,r27,-29840
	ctx.r11.s64 = ctx.r27.s64 + -29840;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,8(r15)
	PPC_STORE_U32(ctx.r15.u32 + 8, ctx.r9.u32);
	// lis r28,-31967
	ctx.r28.s64 = -2094989312;
	// stw r11,12(r15)
	PPC_STORE_U32(ctx.r15.u32 + 12, ctx.r11.u32);
	// lis r29,-31967
	ctx.r29.s64 = -2094989312;
	// stw r10,16(r15)
	PPC_STORE_U32(ctx.r15.u32 + 16, ctx.r10.u32);
	// addi r9,r28,-29840
	ctx.r9.s64 = ctx.r28.s64 + -29840;
	// addi r10,r29,-29840
	ctx.r10.s64 = ctx.r29.s64 + -29840;
	// li r11,91
	ctx.r11.s64 = 91;
	// stw r9,20(r15)
	PPC_STORE_U32(ctx.r15.u32 + 20, ctx.r9.u32);
	// lis r30,-31967
	ctx.r30.s64 = -2094989312;
	// stw r10,28(r15)
	PPC_STORE_U32(ctx.r15.u32 + 28, ctx.r10.u32);
	// stw r11,24(r15)
	PPC_STORE_U32(ctx.r15.u32 + 24, ctx.r11.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r11,r30,-29840
	ctx.r11.s64 = ctx.r30.s64 + -29840;
	// li r10,73
	ctx.r10.s64 = 73;
	// stw r9,32(r15)
	PPC_STORE_U32(ctx.r15.u32 + 32, ctx.r9.u32);
	// lis r31,-31967
	ctx.r31.s64 = -2094989312;
	// stw r11,36(r15)
	PPC_STORE_U32(ctx.r15.u32 + 36, ctx.r11.u32);
	// lis r3,-31967
	ctx.r3.s64 = -2094989312;
	// stw r10,40(r15)
	PPC_STORE_U32(ctx.r15.u32 + 40, ctx.r10.u32);
	// addi r9,r31,-29840
	ctx.r9.s64 = ctx.r31.s64 + -29840;
	// addi r10,r3,-29840
	ctx.r10.s64 = ctx.r3.s64 + -29840;
	// li r11,81
	ctx.r11.s64 = 81;
	// stw r9,44(r15)
	PPC_STORE_U32(ctx.r15.u32 + 44, ctx.r9.u32);
	// lis r4,-31967
	ctx.r4.s64 = -2094989312;
	// stw r10,52(r15)
	PPC_STORE_U32(ctx.r15.u32 + 52, ctx.r10.u32);
	// stw r11,48(r15)
	PPC_STORE_U32(ctx.r15.u32 + 48, ctx.r11.u32);
	// li r9,85
	ctx.r9.s64 = 85;
	// addi r11,r4,-29840
	ctx.r11.s64 = ctx.r4.s64 + -29840;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r9,56(r15)
	PPC_STORE_U32(ctx.r15.u32 + 56, ctx.r9.u32);
	// lis r5,-31967
	ctx.r5.s64 = -2094989312;
	// stw r11,60(r15)
	PPC_STORE_U32(ctx.r15.u32 + 60, ctx.r11.u32);
	// lis r6,-31967
	ctx.r6.s64 = -2094989312;
	// stw r10,64(r15)
	PPC_STORE_U32(ctx.r15.u32 + 64, ctx.r10.u32);
	// addi r9,r5,-29840
	ctx.r9.s64 = ctx.r5.s64 + -29840;
	// addi r10,r6,-29840
	ctx.r10.s64 = ctx.r6.s64 + -29840;
	// li r11,35
	ctx.r11.s64 = 35;
	// stw r9,68(r15)
	PPC_STORE_U32(ctx.r15.u32 + 68, ctx.r9.u32);
	// lis r7,-31967
	ctx.r7.s64 = -2094989312;
	// stw r10,76(r15)
	PPC_STORE_U32(ctx.r15.u32 + 76, ctx.r10.u32);
	// stw r11,72(r15)
	PPC_STORE_U32(ctx.r15.u32 + 72, ctx.r11.u32);
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r11,r7,-29840
	ctx.r11.s64 = ctx.r7.s64 + -29840;
	// li r10,65
	ctx.r10.s64 = 65;
	// stw r9,80(r15)
	PPC_STORE_U32(ctx.r15.u32 + 80, ctx.r9.u32);
	// lis r8,-31967
	ctx.r8.s64 = -2094989312;
	// stw r11,84(r15)
	PPC_STORE_U32(ctx.r15.u32 + 84, ctx.r11.u32);
	// lis r23,-31968
	ctx.r23.s64 = -2095054848;
	// stw r10,88(r15)
	PPC_STORE_U32(ctx.r15.u32 + 88, ctx.r10.u32);
	// addi r9,r8,-29840
	ctx.r9.s64 = ctx.r8.s64 + -29840;
	// li r11,86
	ctx.r11.s64 = 86;
	// addi r10,r23,32488
	ctx.r10.s64 = ctx.r23.s64 + 32488;
	// stw r9,92(r15)
	PPC_STORE_U32(ctx.r15.u32 + 92, ctx.r9.u32);
	// stw r11,96(r15)
	PPC_STORE_U32(ctx.r15.u32 + 96, ctx.r11.u32);
	// lis r24,-31968
	ctx.r24.s64 = -2095054848;
	// lis r25,-31967
	ctx.r25.s64 = -2094989312;
	// stw r10,100(r15)
	PPC_STORE_U32(ctx.r15.u32 + 100, ctx.r10.u32);
	// lis r26,-31967
	ctx.r26.s64 = -2094989312;
	// lis r27,-31968
	ctx.r27.s64 = -2095054848;
	// lis r28,-31968
	ctx.r28.s64 = -2095054848;
	// lis r29,-31967
	ctx.r29.s64 = -2094989312;
	// lis r30,-31967
	ctx.r30.s64 = -2094989312;
	// lis r31,-31967
	ctx.r31.s64 = -2094989312;
	// lis r3,-31967
	ctx.r3.s64 = -2094989312;
	// lis r4,-31967
	ctx.r4.s64 = -2094989312;
	// lis r5,-31967
	ctx.r5.s64 = -2094989312;
	// lis r6,-31967
	ctx.r6.s64 = -2094989312;
	// lis r7,-31967
	ctx.r7.s64 = -2094989312;
	// lis r8,-31967
	ctx.r8.s64 = -2094989312;
	// stw r11,104(r15)
	PPC_STORE_U32(ctx.r15.u32 + 104, ctx.r11.u32);
	// addi r11,r25,-29840
	ctx.r11.s64 = ctx.r25.s64 + -29840;
	// li r10,45
	ctx.r10.s64 = 45;
	// stw r11,116(r15)
	PPC_STORE_U32(ctx.r15.u32 + 116, ctx.r11.u32);
	// addi r9,r24,32488
	ctx.r9.s64 = ctx.r24.s64 + 32488;
	// stw r10,112(r15)
	PPC_STORE_U32(ctx.r15.u32 + 112, ctx.r10.u32);
	// li r11,57
	ctx.r11.s64 = 57;
	// addi r10,r26,-29840
	ctx.r10.s64 = ctx.r26.s64 + -29840;
	// stw r9,108(r15)
	PPC_STORE_U32(ctx.r15.u32 + 108, ctx.r9.u32);
	// stw r11,128(r15)
	PPC_STORE_U32(ctx.r15.u32 + 128, ctx.r11.u32);
	// addi r11,r28,32488
	ctx.r11.s64 = ctx.r28.s64 + 32488;
	// stw r10,124(r15)
	PPC_STORE_U32(ctx.r15.u32 + 124, ctx.r10.u32);
	// li r9,60
	ctx.r9.s64 = 60;
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r11,140(r15)
	PPC_STORE_U32(ctx.r15.u32 + 140, ctx.r11.u32);
	// stw r9,120(r15)
	PPC_STORE_U32(ctx.r15.u32 + 120, ctx.r9.u32);
	// addi r9,r27,32488
	ctx.r9.s64 = ctx.r27.s64 + 32488;
	// stw r10,136(r15)
	PPC_STORE_U32(ctx.r15.u32 + 136, ctx.r10.u32);
	// li r11,49
	ctx.r11.s64 = 49;
	// addi r10,r29,-29840
	ctx.r10.s64 = ctx.r29.s64 + -29840;
	// stw r9,132(r15)
	PPC_STORE_U32(ctx.r15.u32 + 132, ctx.r9.u32);
	// stw r11,152(r15)
	PPC_STORE_U32(ctx.r15.u32 + 152, ctx.r11.u32);
	// addi r11,r31,-29840
	ctx.r11.s64 = ctx.r31.s64 + -29840;
	// stw r10,148(r15)
	PPC_STORE_U32(ctx.r15.u32 + 148, ctx.r10.u32);
	// li r9,63
	ctx.r9.s64 = 63;
	// li r10,69
	ctx.r10.s64 = 69;
	// stw r11,164(r15)
	PPC_STORE_U32(ctx.r15.u32 + 164, ctx.r11.u32);
	// stw r9,144(r15)
	PPC_STORE_U32(ctx.r15.u32 + 144, ctx.r9.u32);
	// addi r9,r30,-29840
	ctx.r9.s64 = ctx.r30.s64 + -29840;
	// stw r10,160(r15)
	PPC_STORE_U32(ctx.r15.u32 + 160, ctx.r10.u32);
	// li r11,69
	ctx.r11.s64 = 69;
	// addi r10,r3,-29840
	ctx.r10.s64 = ctx.r3.s64 + -29840;
	// stw r9,156(r15)
	PPC_STORE_U32(ctx.r15.u32 + 156, ctx.r9.u32);
	// stw r11,176(r15)
	PPC_STORE_U32(ctx.r15.u32 + 176, ctx.r11.u32);
	// addi r11,r5,-29840
	ctx.r11.s64 = ctx.r5.s64 + -29840;
	// stw r10,172(r15)
	PPC_STORE_U32(ctx.r15.u32 + 172, ctx.r10.u32);
	// li r9,69
	ctx.r9.s64 = 69;
	// li r10,69
	ctx.r10.s64 = 69;
	// stw r11,188(r15)
	PPC_STORE_U32(ctx.r15.u32 + 188, ctx.r11.u32);
	// stw r9,168(r15)
	PPC_STORE_U32(ctx.r15.u32 + 168, ctx.r9.u32);
	// addi r9,r4,-29840
	ctx.r9.s64 = ctx.r4.s64 + -29840;
	// stw r10,184(r15)
	PPC_STORE_U32(ctx.r15.u32 + 184, ctx.r10.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r6,-29840
	ctx.r10.s64 = ctx.r6.s64 + -29840;
	// stw r9,180(r15)
	PPC_STORE_U32(ctx.r15.u32 + 180, ctx.r9.u32);
	// stw r11,200(r15)
	PPC_STORE_U32(ctx.r15.u32 + 200, ctx.r11.u32);
	// addi r11,r8,-28672
	ctx.r11.s64 = ctx.r8.s64 + -28672;
	// stw r10,196(r15)
	PPC_STORE_U32(ctx.r15.u32 + 196, ctx.r10.u32);
	// li r9,69
	ctx.r9.s64 = 69;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,212(r15)
	PPC_STORE_U32(ctx.r15.u32 + 212, ctx.r11.u32);
	// stw r9,192(r15)
	PPC_STORE_U32(ctx.r15.u32 + 192, ctx.r9.u32);
	// addi r9,r7,-28672
	ctx.r9.s64 = ctx.r7.s64 + -28672;
	// stw r10,208(r15)
	PPC_STORE_U32(ctx.r15.u32 + 208, ctx.r10.u32);
	// li r11,62
	ctx.r11.s64 = 62;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// stw r9,204(r15)
	PPC_STORE_U32(ctx.r15.u32 + 204, ctx.r9.u32);
	// lis r18,-31967
	ctx.r18.s64 = -2094989312;
	// stw r11,216(r15)
	PPC_STORE_U32(ctx.r15.u32 + 216, ctx.r11.u32);
	// lis r19,-31967
	ctx.r19.s64 = -2094989312;
	// lis r20,-31967
	ctx.r20.s64 = -2094989312;
	// lis r21,-31968
	ctx.r21.s64 = -2095054848;
	// lis r22,-31967
	ctx.r22.s64 = -2094989312;
	// lis r23,-31967
	ctx.r23.s64 = -2094989312;
	// lis r24,-31968
	ctx.r24.s64 = -2095054848;
	// lis r25,-31967
	ctx.r25.s64 = -2094989312;
	// lis r29,-31967
	ctx.r29.s64 = -2094989312;
	// lis r30,-31967
	ctx.r30.s64 = -2094989312;
	// lis r31,-31967
	ctx.r31.s64 = -2094989312;
	// lis r3,-31967
	ctx.r3.s64 = -2094989312;
	// lis r4,-31967
	ctx.r4.s64 = -2094989312;
	// lis r5,-31967
	ctx.r5.s64 = -2094989312;
	// lis r6,-31967
	ctx.r6.s64 = -2094989312;
	// lis r7,-31967
	ctx.r7.s64 = -2094989312;
	// lis r8,-31967
	ctx.r8.s64 = -2094989312;
	// lis r26,-31967
	ctx.r26.s64 = -2094989312;
	// lis r27,-31968
	ctx.r27.s64 = -2095054848;
	// lis r28,-31968
	ctx.r28.s64 = -2095054848;
	// addi r10,r10,-28672
	ctx.r10.s64 = ctx.r10.s64 + -28672;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r18,-28672
	ctx.r11.s64 = ctx.r18.s64 + -28672;
	// stw r10,220(r15)
	PPC_STORE_U32(ctx.r15.u32 + 220, ctx.r10.u32);
	// li r10,42
	ctx.r10.s64 = 42;
	// stw r9,224(r15)
	PPC_STORE_U32(ctx.r15.u32 + 224, ctx.r9.u32);
	// addi r9,r19,-28672
	ctx.r9.s64 = ctx.r19.s64 + -28672;
	// stw r11,228(r15)
	PPC_STORE_U32(ctx.r15.u32 + 228, ctx.r11.u32);
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r10,232(r15)
	PPC_STORE_U32(ctx.r15.u32 + 232, ctx.r10.u32);
	// addi r10,r20,-28672
	ctx.r10.s64 = ctx.r20.s64 + -28672;
	// stw r9,236(r15)
	PPC_STORE_U32(ctx.r15.u32 + 236, ctx.r9.u32);
	// li r9,22
	ctx.r9.s64 = 22;
	// stw r11,240(r15)
	PPC_STORE_U32(ctx.r15.u32 + 240, ctx.r11.u32);
	// addi r11,r21,32488
	ctx.r11.s64 = ctx.r21.s64 + 32488;
	// stw r10,244(r15)
	PPC_STORE_U32(ctx.r15.u32 + 244, ctx.r10.u32);
	// li r10,78
	ctx.r10.s64 = 78;
	// stw r9,248(r15)
	PPC_STORE_U32(ctx.r15.u32 + 248, ctx.r9.u32);
	// addi r9,r22,-29840
	ctx.r9.s64 = ctx.r22.s64 + -29840;
	// stw r11,252(r15)
	PPC_STORE_U32(ctx.r15.u32 + 252, ctx.r11.u32);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r10,256(r15)
	PPC_STORE_U32(ctx.r15.u32 + 256, ctx.r10.u32);
	// addi r10,r23,-29840
	ctx.r10.s64 = ctx.r23.s64 + -29840;
	// stw r9,260(r15)
	PPC_STORE_U32(ctx.r15.u32 + 260, ctx.r9.u32);
	// li r9,87
	ctx.r9.s64 = 87;
	// stw r11,264(r15)
	PPC_STORE_U32(ctx.r15.u32 + 264, ctx.r11.u32);
	// addi r11,r24,32488
	ctx.r11.s64 = ctx.r24.s64 + 32488;
	// stw r10,268(r15)
	PPC_STORE_U32(ctx.r15.u32 + 268, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,272(r15)
	PPC_STORE_U32(ctx.r15.u32 + 272, ctx.r9.u32);
	// addi r9,r25,-29840
	ctx.r9.s64 = ctx.r25.s64 + -29840;
	// stw r11,276(r15)
	PPC_STORE_U32(ctx.r15.u32 + 276, ctx.r11.u32);
	// li r11,76
	ctx.r11.s64 = 76;
	// stw r10,280(r15)
	PPC_STORE_U32(ctx.r15.u32 + 280, ctx.r10.u32);
	// addi r10,r29,-29840
	ctx.r10.s64 = ctx.r29.s64 + -29840;
	// stw r9,284(r15)
	PPC_STORE_U32(ctx.r15.u32 + 284, ctx.r9.u32);
	// li r9,89
	ctx.r9.s64 = 89;
	// stw r11,288(r15)
	PPC_STORE_U32(ctx.r15.u32 + 288, ctx.r11.u32);
	// addi r11,r30,-29840
	ctx.r11.s64 = ctx.r30.s64 + -29840;
	// stw r10,292(r15)
	PPC_STORE_U32(ctx.r15.u32 + 292, ctx.r10.u32);
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r9,296(r15)
	PPC_STORE_U32(ctx.r15.u32 + 296, ctx.r9.u32);
	// addi r9,r31,-28672
	ctx.r9.s64 = ctx.r31.s64 + -28672;
	// stw r11,300(r15)
	PPC_STORE_U32(ctx.r15.u32 + 300, ctx.r11.u32);
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r10,304(r15)
	PPC_STORE_U32(ctx.r15.u32 + 304, ctx.r10.u32);
	// addi r10,r3,-28672
	ctx.r10.s64 = ctx.r3.s64 + -28672;
	// stw r9,308(r15)
	PPC_STORE_U32(ctx.r15.u32 + 308, ctx.r9.u32);
	// li r9,53
	ctx.r9.s64 = 53;
	// stw r11,312(r15)
	PPC_STORE_U32(ctx.r15.u32 + 312, ctx.r11.u32);
	// addi r11,r4,-28672
	ctx.r11.s64 = ctx.r4.s64 + -28672;
	// stw r10,316(r15)
	PPC_STORE_U32(ctx.r15.u32 + 316, ctx.r10.u32);
	// li r10,52
	ctx.r10.s64 = 52;
	// stw r9,320(r15)
	PPC_STORE_U32(ctx.r15.u32 + 320, ctx.r9.u32);
	// addi r9,r5,-27408
	ctx.r9.s64 = ctx.r5.s64 + -27408;
	// stw r11,324(r15)
	PPC_STORE_U32(ctx.r15.u32 + 324, ctx.r11.u32);
	// li r11,39
	ctx.r11.s64 = 39;
	// stw r10,328(r15)
	PPC_STORE_U32(ctx.r15.u32 + 328, ctx.r10.u32);
	// addi r10,r6,-28672
	ctx.r10.s64 = ctx.r6.s64 + -28672;
	// stw r9,332(r15)
	PPC_STORE_U32(ctx.r15.u32 + 332, ctx.r9.u32);
	// li r9,41
	ctx.r9.s64 = 41;
	// stw r11,336(r15)
	PPC_STORE_U32(ctx.r15.u32 + 336, ctx.r11.u32);
	// addi r11,r7,-28672
	ctx.r11.s64 = ctx.r7.s64 + -28672;
	// stw r10,340(r15)
	PPC_STORE_U32(ctx.r15.u32 + 340, ctx.r10.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r9,344(r15)
	PPC_STORE_U32(ctx.r15.u32 + 344, ctx.r9.u32);
	// addi r9,r8,-28672
	ctx.r9.s64 = ctx.r8.s64 + -28672;
	// stw r11,348(r15)
	PPC_STORE_U32(ctx.r15.u32 + 348, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r10,352(r15)
	PPC_STORE_U32(ctx.r15.u32 + 352, ctx.r10.u32);
	// addi r10,r26,-27408
	ctx.r10.s64 = ctx.r26.s64 + -27408;
	// stw r9,356(r15)
	PPC_STORE_U32(ctx.r15.u32 + 356, ctx.r9.u32);
	// lis r29,-31968
	ctx.r29.s64 = -2095054848;
	// lis r30,-31967
	ctx.r30.s64 = -2094989312;
	// stw r11,360(r15)
	PPC_STORE_U32(ctx.r15.u32 + 360, ctx.r11.u32);
	// lis r31,-31967
	ctx.r31.s64 = -2094989312;
	// stw r10,364(r15)
	PPC_STORE_U32(ctx.r15.u32 + 364, ctx.r10.u32);
	// lis r3,-31967
	ctx.r3.s64 = -2094989312;
	// lis r4,-31967
	ctx.r4.s64 = -2094989312;
	// lis r5,-31967
	ctx.r5.s64 = -2094989312;
	// lis r6,-31967
	ctx.r6.s64 = -2094989312;
	// lis r7,-31967
	ctx.r7.s64 = -2094989312;
	// lis r8,-31967
	ctx.r8.s64 = -2094989312;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r27,32488
	ctx.r11.s64 = ctx.r27.s64 + 32488;
	// stw r9,368(r15)
	PPC_STORE_U32(ctx.r15.u32 + 368, ctx.r9.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r11,372(r15)
	PPC_STORE_U32(ctx.r15.u32 + 372, ctx.r11.u32);
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r10,376(r15)
	PPC_STORE_U32(ctx.r15.u32 + 376, ctx.r10.u32);
	// addi r10,r29,32488
	ctx.r10.s64 = ctx.r29.s64 + 32488;
	// stw r11,384(r15)
	PPC_STORE_U32(ctx.r15.u32 + 384, ctx.r11.u32);
	// addi r9,r28,32488
	ctx.r9.s64 = ctx.r28.s64 + 32488;
	// stw r10,388(r15)
	PPC_STORE_U32(ctx.r15.u32 + 388, ctx.r10.u32);
	// addi r11,r30,-26944
	ctx.r11.s64 = ctx.r30.s64 + -26944;
	// li r10,55
	ctx.r10.s64 = 55;
	// stw r9,380(r15)
	PPC_STORE_U32(ctx.r15.u32 + 380, ctx.r9.u32);
	// stw r11,516(r15)
	PPC_STORE_U32(ctx.r15.u32 + 516, ctx.r11.u32);
	// li r9,71
	ctx.r9.s64 = 71;
	// stw r10,520(r15)
	PPC_STORE_U32(ctx.r15.u32 + 520, ctx.r10.u32);
	// li r11,93
	ctx.r11.s64 = 93;
	// addi r10,r3,-25992
	ctx.r10.s64 = ctx.r3.s64 + -25992;
	// stw r9,512(r15)
	PPC_STORE_U32(ctx.r15.u32 + 512, ctx.r9.u32);
	// stw r11,528(r15)
	PPC_STORE_U32(ctx.r15.u32 + 528, ctx.r11.u32);
	// addi r9,r31,-26536
	ctx.r9.s64 = ctx.r31.s64 + -26536;
	// stw r10,532(r15)
	PPC_STORE_U32(ctx.r15.u32 + 532, ctx.r10.u32);
	// addi r11,r4,-24408
	ctx.r11.s64 = ctx.r4.s64 + -24408;
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r9,524(r15)
	PPC_STORE_U32(ctx.r15.u32 + 524, ctx.r9.u32);
	// stw r11,540(r15)
	PPC_STORE_U32(ctx.r15.u32 + 540, ctx.r11.u32);
	// li r9,33
	ctx.r9.s64 = 33;
	// stw r10,544(r15)
	PPC_STORE_U32(ctx.r15.u32 + 544, ctx.r10.u32);
	// li r11,93
	ctx.r11.s64 = 93;
	// addi r10,r6,-22392
	ctx.r10.s64 = ctx.r6.s64 + -22392;
	// stw r9,536(r15)
	PPC_STORE_U32(ctx.r15.u32 + 536, ctx.r9.u32);
	// stw r11,552(r15)
	PPC_STORE_U32(ctx.r15.u32 + 552, ctx.r11.u32);
	// addi r9,r5,-24408
	ctx.r9.s64 = ctx.r5.s64 + -24408;
	// stw r10,556(r15)
	PPC_STORE_U32(ctx.r15.u32 + 556, ctx.r10.u32);
	// addi r11,r7,-22392
	ctx.r11.s64 = ctx.r7.s64 + -22392;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r9,548(r15)
	PPC_STORE_U32(ctx.r15.u32 + 548, ctx.r9.u32);
	// stw r11,564(r15)
	PPC_STORE_U32(ctx.r15.u32 + 564, ctx.r11.u32);
	// li r9,93
	ctx.r9.s64 = 93;
	// stw r10,568(r15)
	PPC_STORE_U32(ctx.r15.u32 + 568, ctx.r10.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// stw r9,560(r15)
	PPC_STORE_U32(ctx.r15.u32 + 560, ctx.r9.u32);
	// stw r11,576(r15)
	PPC_STORE_U32(ctx.r15.u32 + 576, ctx.r11.u32);
	// addi r9,r8,-21896
	ctx.r9.s64 = ctx.r8.s64 + -21896;
	// addi r11,r10,-21272
	ctx.r11.s64 = ctx.r10.s64 + -21272;
	// stw r9,572(r15)
	PPC_STORE_U32(ctx.r15.u32 + 572, ctx.r9.u32);
	// lis r9,-31967
	ctx.r9.s64 = -2094989312;
	// stw r11,580(r15)
	PPC_STORE_U32(ctx.r15.u32 + 580, ctx.r11.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// lis r17,-31968
	ctx.r17.s64 = -2095054848;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r11,592(r15)
	PPC_STORE_U32(ctx.r15.u32 + 592, ctx.r11.u32);
	// addi r9,r9,-21656
	ctx.r9.s64 = ctx.r9.s64 + -21656;
	// lis r16,-31967
	ctx.r16.s64 = -2094989312;
	// stw r10,584(r15)
	PPC_STORE_U32(ctx.r15.u32 + 584, ctx.r10.u32);
	// addi r11,r17,32488
	ctx.r11.s64 = ctx.r17.s64 + 32488;
	// stw r9,588(r15)
	PPC_STORE_U32(ctx.r15.u32 + 588, ctx.r9.u32);
	// lis r18,-31967
	ctx.r18.s64 = -2094989312;
	// lis r19,-31967
	ctx.r19.s64 = -2094989312;
	// stw r11,604(r15)
	PPC_STORE_U32(ctx.r15.u32 + 604, ctx.r11.u32);
	// lis r20,-31967
	ctx.r20.s64 = -2094989312;
	// lis r21,-31967
	ctx.r21.s64 = -2094989312;
	// lis r22,-31967
	ctx.r22.s64 = -2094989312;
	// lis r23,-31968
	ctx.r23.s64 = -2095054848;
	// lis r24,-31967
	ctx.r24.s64 = -2094989312;
	// lis r25,-31967
	ctx.r25.s64 = -2094989312;
	// lis r26,-31967
	ctx.r26.s64 = -2094989312;
	// lis r27,-31967
	ctx.r27.s64 = -2094989312;
	// lis r28,-31967
	ctx.r28.s64 = -2094989312;
	// lis r29,-31968
	ctx.r29.s64 = -2095054848;
	// lis r30,-31967
	ctx.r30.s64 = -2094989312;
	// lis r31,-31967
	ctx.r31.s64 = -2094989312;
	// lis r3,-31967
	ctx.r3.s64 = -2094989312;
	// lis r8,-31967
	ctx.r8.s64 = -2094989312;
	// lis r4,-31967
	ctx.r4.s64 = -2094989312;
	// lis r5,-31967
	ctx.r5.s64 = -2094989312;
	// lis r6,-31967
	ctx.r6.s64 = -2094989312;
	// lis r7,-31967
	ctx.r7.s64 = -2094989312;
	// addi r10,r16,-21272
	ctx.r10.s64 = ctx.r16.s64 + -21272;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,596(r15)
	PPC_STORE_U32(ctx.r15.u32 + 596, ctx.r10.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r9,600(r15)
	PPC_STORE_U32(ctx.r15.u32 + 600, ctx.r9.u32);
	// stw r11,616(r15)
	PPC_STORE_U32(ctx.r15.u32 + 616, ctx.r11.u32);
	// addi r9,r18,-21272
	ctx.r9.s64 = ctx.r18.s64 + -21272;
	// stw r10,608(r15)
	PPC_STORE_U32(ctx.r15.u32 + 608, ctx.r10.u32);
	// addi r11,r20,-29840
	ctx.r11.s64 = ctx.r20.s64 + -29840;
	// addi r10,r19,-21272
	ctx.r10.s64 = ctx.r19.s64 + -21272;
	// stw r9,612(r15)
	PPC_STORE_U32(ctx.r15.u32 + 612, ctx.r9.u32);
	// stw r11,628(r15)
	PPC_STORE_U32(ctx.r15.u32 + 628, ctx.r11.u32);
	// li r9,46
	ctx.r9.s64 = 46;
	// stw r10,620(r15)
	PPC_STORE_U32(ctx.r15.u32 + 620, ctx.r10.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// li r10,61
	ctx.r10.s64 = 61;
	// stw r9,624(r15)
	PPC_STORE_U32(ctx.r15.u32 + 624, ctx.r9.u32);
	// stw r11,640(r15)
	PPC_STORE_U32(ctx.r15.u32 + 640, ctx.r11.u32);
	// addi r9,r21,-29840
	ctx.r9.s64 = ctx.r21.s64 + -29840;
	// stw r10,632(r15)
	PPC_STORE_U32(ctx.r15.u32 + 632, ctx.r10.u32);
	// addi r11,r23,32488
	ctx.r11.s64 = ctx.r23.s64 + 32488;
	// addi r10,r22,-29840
	ctx.r10.s64 = ctx.r22.s64 + -29840;
	// stw r9,636(r15)
	PPC_STORE_U32(ctx.r15.u32 + 636, ctx.r9.u32);
	// stw r11,652(r15)
	PPC_STORE_U32(ctx.r15.u32 + 652, ctx.r11.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r10,644(r15)
	PPC_STORE_U32(ctx.r15.u32 + 644, ctx.r10.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// li r10,93
	ctx.r10.s64 = 93;
	// stw r9,648(r15)
	PPC_STORE_U32(ctx.r15.u32 + 648, ctx.r9.u32);
	// stw r11,664(r15)
	PPC_STORE_U32(ctx.r15.u32 + 664, ctx.r11.u32);
	// addi r9,r24,-22392
	ctx.r9.s64 = ctx.r24.s64 + -22392;
	// stw r10,656(r15)
	PPC_STORE_U32(ctx.r15.u32 + 656, ctx.r10.u32);
	// addi r11,r26,-21272
	ctx.r11.s64 = ctx.r26.s64 + -21272;
	// addi r10,r25,-20272
	ctx.r10.s64 = ctx.r25.s64 + -20272;
	// stw r9,660(r15)
	PPC_STORE_U32(ctx.r15.u32 + 660, ctx.r9.u32);
	// stw r11,676(r15)
	PPC_STORE_U32(ctx.r15.u32 + 676, ctx.r11.u32);
	// li r9,34
	ctx.r9.s64 = 34;
	// stw r10,668(r15)
	PPC_STORE_U32(ctx.r15.u32 + 668, ctx.r10.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r9,672(r15)
	PPC_STORE_U32(ctx.r15.u32 + 672, ctx.r9.u32);
	// stw r11,688(r15)
	PPC_STORE_U32(ctx.r15.u32 + 688, ctx.r11.u32);
	// addi r9,r27,-20272
	ctx.r9.s64 = ctx.r27.s64 + -20272;
	// stw r10,680(r15)
	PPC_STORE_U32(ctx.r15.u32 + 680, ctx.r10.u32);
	// addi r11,r29,32656
	ctx.r11.s64 = ctx.r29.s64 + 32656;
	// addi r10,r28,-21272
	ctx.r10.s64 = ctx.r28.s64 + -21272;
	// stw r9,684(r15)
	PPC_STORE_U32(ctx.r15.u32 + 684, ctx.r9.u32);
	// stw r11,700(r15)
	PPC_STORE_U32(ctx.r15.u32 + 700, ctx.r11.u32);
	// li r9,71
	ctx.r9.s64 = 71;
	// stw r10,692(r15)
	PPC_STORE_U32(ctx.r15.u32 + 692, ctx.r10.u32);
	// li r11,33
	ctx.r11.s64 = 33;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r9,696(r15)
	PPC_STORE_U32(ctx.r15.u32 + 696, ctx.r9.u32);
	// stw r11,712(r15)
	PPC_STORE_U32(ctx.r15.u32 + 712, ctx.r11.u32);
	// addi r9,r30,-29840
	ctx.r9.s64 = ctx.r30.s64 + -29840;
	// stw r10,704(r15)
	PPC_STORE_U32(ctx.r15.u32 + 704, ctx.r10.u32);
	// addi r11,r3,-29840
	ctx.r11.s64 = ctx.r3.s64 + -29840;
	// addi r10,r31,-23256
	ctx.r10.s64 = ctx.r31.s64 + -23256;
	// stw r9,708(r15)
	PPC_STORE_U32(ctx.r15.u32 + 708, ctx.r9.u32);
	// stw r11,724(r15)
	PPC_STORE_U32(ctx.r15.u32 + 724, ctx.r11.u32);
	// li r9,33
	ctx.r9.s64 = 33;
	// stw r10,716(r15)
	PPC_STORE_U32(ctx.r15.u32 + 716, ctx.r10.u32);
	// li r11,38
	ctx.r11.s64 = 38;
	// li r10,37
	ctx.r10.s64 = 37;
	// stw r9,720(r15)
	PPC_STORE_U32(ctx.r15.u32 + 720, ctx.r9.u32);
	// stw r11,736(r15)
	PPC_STORE_U32(ctx.r15.u32 + 736, ctx.r11.u32);
	// addi r9,r8,-29840
	ctx.r9.s64 = ctx.r8.s64 + -29840;
	// addi r11,r4,-29840
	ctx.r11.s64 = ctx.r4.s64 + -29840;
	// stw r10,728(r15)
	PPC_STORE_U32(ctx.r15.u32 + 728, ctx.r10.u32);
	// li r10,95
	ctx.r10.s64 = 95;
	// stw r9,732(r15)
	PPC_STORE_U32(ctx.r15.u32 + 732, ctx.r9.u32);
	// stw r11,740(r15)
	PPC_STORE_U32(ctx.r15.u32 + 740, ctx.r11.u32);
	// addi r9,r5,-25072
	ctx.r9.s64 = ctx.r5.s64 + -25072;
	// li r11,86
	ctx.r11.s64 = 86;
	// stw r10,744(r15)
	PPC_STORE_U32(ctx.r15.u32 + 744, ctx.r10.u32);
	// addi r10,r6,-27408
	ctx.r10.s64 = ctx.r6.s64 + -27408;
	// stw r9,748(r15)
	PPC_STORE_U32(ctx.r15.u32 + 748, ctx.r9.u32);
	// stw r11,752(r15)
	PPC_STORE_U32(ctx.r15.u32 + 752, ctx.r11.u32);
	// lis r8,-31967
	ctx.r8.s64 = -2094989312;
	// li r9,94
	ctx.r9.s64 = 94;
	// stw r10,756(r15)
	PPC_STORE_U32(ctx.r15.u32 + 756, ctx.r10.u32);
	// addi r11,r7,-25072
	ctx.r11.s64 = ctx.r7.s64 + -25072;
	// stw r9,760(r15)
	PPC_STORE_U32(ctx.r15.u32 + 760, ctx.r9.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r8,-28672
	ctx.r9.s64 = ctx.r8.s64 + -28672;
	// stw r11,764(r15)
	PPC_STORE_U32(ctx.r15.u32 + 764, ctx.r11.u32);
	// stw r10,768(r15)
	PPC_STORE_U32(ctx.r15.u32 + 768, ctx.r10.u32);
	// stw r9,772(r15)
	PPC_STORE_U32(ctx.r15.u32 + 772, ctx.r9.u32);
	// b 0x82cb1104
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320B908"))) PPC_WEAK_FUNC(sub_8320B908);
PPC_FUNC_IMPL(__imp__sub_8320B908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8320B910;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8320b930
	if (!ctx.cr6.lt) goto loc_8320B930;
	// bl 0x82bea298
	ctx.lr = 0x8320B930;
	sub_82BEA298(ctx, base);
loc_8320B930:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r31,r26,21
	ctx.r31.u64 = ctx.r26.u32 & 0x7FF;
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 256, ctx.xer);
	// blt cr6,0x8320b958
	if (ctx.cr6.lt) goto loc_8320B958;
	// bl 0x82bea298
	ctx.lr = 0x8320B954;
	sub_82BEA298(ctx, base);
	// li r31,255
	ctx.r31.s64 = 255;
loc_8320B958:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwimi r11,r26,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// beq cr6,0x8320b970
	if (ctx.cr6.eq) goto loc_8320B970;
	// bl 0x82bea298
	ctx.lr = 0x8320B970;
	sub_82BEA298(ctx, base);
loc_8320B970:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,28
	ctx.r9.s64 = 28;
	// rlwimi r31,r10,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320B9DC"))) PPC_WEAK_FUNC(sub_8320B9DC);
PPC_FUNC_IMPL(__imp__sub_8320B9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320B9E0"))) PPC_WEAK_FUNC(sub_8320B9E0);
PPC_FUNC_IMPL(__imp__sub_8320B9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8320B9E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8320ba08
	if (!ctx.cr6.lt) goto loc_8320BA08;
	// bl 0x82bea298
	ctx.lr = 0x8320BA08;
	sub_82BEA298(ctx, base);
loc_8320BA08:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r31,r26,21
	ctx.r31.u64 = ctx.r26.u32 & 0x7FF;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x8320ba30
	if (ctx.cr6.lt) goto loc_8320BA30;
	// bl 0x82bea298
	ctx.lr = 0x8320BA2C;
	sub_82BEA298(ctx, base);
	// li r31,15
	ctx.r31.s64 = 15;
loc_8320BA30:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwimi r11,r26,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x8320ba48
	if (ctx.cr6.eq) goto loc_8320BA48;
	// bl 0x82bea298
	ctx.lr = 0x8320BA48;
	sub_82BEA298(ctx, base);
loc_8320BA48:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,28
	ctx.r9.s64 = 28;
	// rlwimi r31,r10,17,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320BAB4"))) PPC_WEAK_FUNC(sub_8320BAB4);
PPC_FUNC_IMPL(__imp__sub_8320BAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320BAB8"))) PPC_WEAK_FUNC(sub_8320BAB8);
PPC_FUNC_IMPL(__imp__sub_8320BAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8320BAC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8320bae0
	if (!ctx.cr6.lt) goto loc_8320BAE0;
	// bl 0x82bea298
	ctx.lr = 0x8320BAE0;
	sub_82BEA298(ctx, base);
loc_8320BAE0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r31,r28,21
	ctx.r31.u64 = ctx.r28.u32 & 0x7FF;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x8320bb08
	if (ctx.cr6.lt) goto loc_8320BB08;
	// bl 0x82bea298
	ctx.lr = 0x8320BB04;
	sub_82BEA298(ctx, base);
	// li r31,15
	ctx.r31.s64 = 15;
loc_8320BB08:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3584
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3584, ctx.xer);
	// beq cr6,0x8320bb20
	if (ctx.cr6.eq) goto loc_8320BB20;
	// bl 0x82bea298
	ctx.lr = 0x8320BB20;
	sub_82BEA298(ctx, base);
loc_8320BB20:
	// li r11,29
	ctx.r11.s64 = 29;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r8,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320BB64"))) PPC_WEAK_FUNC(sub_8320BB64);
PPC_FUNC_IMPL(__imp__sub_8320BB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320BB68"))) PPC_WEAK_FUNC(sub_8320BB68);
PPC_FUNC_IMPL(__imp__sub_8320BB68) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r10,r3,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8320bb80
	if (ctx.cr0.eq) goto loc_8320BB80;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x8320bb84
	goto loc_8320BB84;
loc_8320BB80:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8320BB84:
	// rlwinm. r10,r3,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8320bb98
	if (ctx.cr0.eq) goto loc_8320BB98;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// b 0x8320bb9c
	goto loc_8320BB9C;
loc_8320BB98:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8320BB9C:
	// rlwinm. r10,r3,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8320bbb0
	if (ctx.cr0.eq) goto loc_8320BBB0;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// b 0x8320bbb4
	goto loc_8320BBB4;
loc_8320BBB0:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_8320BBB4:
	// rlwinm. r10,r3,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8320bbc0
	if (ctx.cr0.eq) goto loc_8320BBC0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_8320BBC0:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320BBC8"))) PPC_WEAK_FUNC(sub_8320BBC8);
PPC_FUNC_IMPL(__imp__sub_8320BBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8320BBD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// blt cr6,0x8320bbf0
	if (ctx.cr6.lt) goto loc_8320BBF0;
	// bl 0x82bea298
	ctx.lr = 0x8320BBF0;
	sub_82BEA298(ctx, base);
loc_8320BBF0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8320bc40
	if (ctx.cr6.eq) goto loc_8320BC40;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8320bc38
	if (ctx.cr6.eq) goto loc_8320BC38;
	// lis r11,6144
	ctx.r11.s64 = 402653184;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8320bc30
	if (ctx.cr6.eq) goto loc_8320BC30;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8320bc28
	if (ctx.cr6.eq) goto loc_8320BC28;
	// bl 0x82bea298
	ctx.lr = 0x8320BC24;
	sub_82BEA298(ctx, base);
	// b 0x8320bc44
	goto loc_8320BC44;
loc_8320BC28:
	// lis r31,768
	ctx.r31.s64 = 50331648;
	// b 0x8320bc44
	goto loc_8320BC44;
loc_8320BC30:
	// lis r31,1024
	ctx.r31.s64 = 67108864;
	// b 0x8320bc44
	goto loc_8320BC44;
loc_8320BC38:
	// lis r31,512
	ctx.r31.s64 = 33554432;
	// b 0x8320bc44
	goto loc_8320BC44;
loc_8320BC40:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8320BC44:
	// rlwimi r31,r29,16,8,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFF0000) | (ctx.r31.u64 & 0xFFFFFFFFFF00FFFF);
	// li r11,801
	ctx.r11.s64 = 801;
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// rlwimi r31,r11,27,16,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0xFFFF) | (ctx.r31.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r31,r11,27,3,4
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x18000000) | (ctx.r31.u64 & 0xFFFFFFFFE7FFFFFF);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320BC68"))) PPC_WEAK_FUNC(sub_8320BC68);
PPC_FUNC_IMPL(__imp__sub_8320BC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x8320BC70;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r11,r28,21,3,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 21) & 0x1FE00000;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r23,0(r22)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r31,13
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 13, ctx.xer);
	// ori r29,r11,23
	ctx.r29.u64 = ctx.r11.u64 | 23;
	// ble cr6,0x8320bcac
	if (!ctx.cr6.gt) goto loc_8320BCAC;
	// bl 0x82bea298
	ctx.lr = 0x8320BCAC;
	sub_82BEA298(ctx, base);
loc_8320BCAC:
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16, ctx.xer);
	// blt cr6,0x8320bcb8
	if (ctx.cr6.lt) goto loc_8320BCB8;
	// bl 0x82bea298
	ctx.lr = 0x8320BCB8;
	sub_82BEA298(ctx, base);
loc_8320BCB8:
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// bne cr6,0x8320bd14
	if (!ctx.cr6.eq) goto loc_8320BD14;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8320bcd4
	if (!ctx.cr6.lt) goto loc_8320BCD4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8320BCD4:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8320bcf0
	if (!ctx.cr6.eq) goto loc_8320BCF0;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x8320bcfc
	goto loc_8320BCFC;
loc_8320BCF0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8320bcfc
	if (!ctx.cr6.eq) goto loc_8320BCFC;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8320BCFC:
	// li r11,5
	ctx.r11.s64 = 5;
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 8, ctx.xer);
	// rlwimi r29,r11,16,11,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFE0FFFF);
	// blt cr6,0x8320bd44
	if (ctx.cr6.lt) goto loc_8320BD44;
	// bl 0x82bea298
	ctx.lr = 0x8320BD10;
	sub_82BEA298(ctx, base);
	// b 0x8320bd44
	goto loc_8320BD44;
loc_8320BD14:
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// bne cr6,0x8320bd28
	if (!ctx.cr6.eq) goto loc_8320BD28;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r29,r11,17,11,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x1F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFE0FFFF);
	// b 0x8320bd44
	goto loc_8320BD44;
loc_8320BD28:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// rlwinm r10,r28,21,0,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 21) & 0xFFE00000;
	// rlwinm r11,r11,25,0,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xFE000000;
	// li r9,5
	ctx.r9.s64 = 5;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r29,r11,0,3,10
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1FE00000) | (ctx.r29.u64 & 0xFFFFFFFFE01FFFFF);
	// rlwimi r29,r9,16,11,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x1F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFE0FFFF);
loc_8320BD44:
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16, ctx.xer);
	// blt cr6,0x8320bd50
	if (ctx.cr6.lt) goto loc_8320BD50;
	// bl 0x82bea298
	ctx.lr = 0x8320BD50;
	sub_82BEA298(ctx, base);
loc_8320BD50:
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r9,12
	ctx.r9.s64 = 12;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stwx r9,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r27.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8320bb68
	ctx.lr = 0x8320BD90;
	sub_8320BB68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bne cr6,0x8320bdd8
	if (!ctx.cr6.eq) goto loc_8320BDD8;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x8320bdd8
	if (!ctx.cr6.eq) goto loc_8320BDD8;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8320bdd8
	if (!ctx.cr6.eq) goto loc_8320BDD8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8320bdd8
	if (!ctx.cr6.eq) goto loc_8320BDD8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8320bdd8
	if (!ctx.cr6.eq) goto loc_8320BDD8;
	// clrlwi r10,r29,1
	ctx.r10.u64 = ctx.r29.u32 & 0x7FFFFFFF;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// b 0x8320be00
	goto loc_8320BE00;
loc_8320BDD8:
	// rlwimi r11,r26,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// oris r7,r29,32768
	ctx.r7.u64 = ctx.r29.u64 | 2147483648;
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// stw r7,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r7.u32);
	// rlwimi r10,r6,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r9,r10,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r8.u32);
loc_8320BE00:
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwimi r27,r10,18,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r9,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320BE1C"))) PPC_WEAK_FUNC(sub_8320BE1C);
PPC_FUNC_IMPL(__imp__sub_8320BE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320BE20"))) PPC_WEAK_FUNC(sub_8320BE20);
PPC_FUNC_IMPL(__imp__sub_8320BE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x8320BE28;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// beq cr6,0x8320be68
	if (ctx.cr6.eq) goto loc_8320BE68;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x8320be80
	if (ctx.cr6.eq) goto loc_8320BE80;
	// bl 0x82bea298
	ctx.lr = 0x8320BE60;
	sub_82BEA298(ctx, base);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x8320bec0
	goto loc_8320BEC0;
loc_8320BE68:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r29,r11,18
	ctx.r29.s64 = ctx.r11.s64 + 18;
	// b 0x8320bec0
	goto loc_8320BEC0;
loc_8320BE80:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r29,17
	ctx.r29.s64 = 17;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8320be98
	if (!ctx.cr6.lt) goto loc_8320BE98;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8320BE98:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8320beb4
	if (!ctx.cr6.eq) goto loc_8320BEB4;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x8320bec0
	goto loc_8320BEC0;
loc_8320BEB4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8320bec0
	if (!ctx.cr6.eq) goto loc_8320BEC0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8320BEC0:
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// blt cr6,0x8320becc
	if (ctx.cr6.lt) goto loc_8320BECC;
	// bl 0x82bea298
	ctx.lr = 0x8320BECC;
	sub_82BEA298(ctx, base);
loc_8320BECC:
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8320bb68
	ctx.lr = 0x8320BF08;
	sub_8320BB68(ctx, base);
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,22
	ctx.r10.s64 = 22;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwimi r31,r29,16,10,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0x3F0000) | (ctx.r31.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwimi r7,r9,2,29,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0x4) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFB);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// clrlwi r7,r7,29
	ctx.r7.u64 = ctx.r7.u32 & 0x7;
	// clrlwi r8,r31,10
	ctx.r8.u64 = ctx.r31.u32 & 0x3FFFFF;
	// rlwimi r6,r7,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwimi r9,r6,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwimi r5,r9,2,0,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// rlwimi r10,r5,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320BF60"))) PPC_WEAK_FUNC(sub_8320BF60);
PPC_FUNC_IMPL(__imp__sub_8320BF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x8320BF68;
	__savegprlr_21(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8320bf9c
	if (ctx.cr6.eq) goto loc_8320BF9C;
	// bl 0x82bea298
	ctx.lr = 0x8320BF9C;
	sub_82BEA298(ctx, base);
loc_8320BF9C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8320bfb0
	if (!ctx.cr6.lt) goto loc_8320BFB0;
	// bl 0x82bea298
	ctx.lr = 0x8320BFB0;
	sub_82BEA298(ctx, base);
loc_8320BFB0:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r22,r11,4
	ctx.r22.s64 = ctx.r11.s64 + 4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// clrlwi r30,r31,21
	ctx.r30.u64 = ctx.r31.u32 & 0x7FF;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8320c048
	if (!ctx.cr6.eq) goto loc_8320C048;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x8320c008
	if (ctx.cr6.lt) goto loc_8320C008;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r5,5105
	ctx.r5.s64 = 5105;
	// addi r6,r11,-9596
	ctx.r6.s64 = ctx.r11.s64 + -9596;
loc_8320BFF0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x8320C000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8320c198
	goto loc_8320C198;
loc_8320C008:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// rlwinm r4,r29,0,1,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x78000000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320bbc8
	ctx.lr = 0x8320C018;
	sub_8320BBC8(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8320c02c
	if (!ctx.cr6.lt) goto loc_8320C02C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8320C02C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// slw r11,r10,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// b 0x8320c190
	goto loc_8320C190;
loc_8320C048:
	// rlwinm r27,r31,0,12,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF0000;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8320c0bc
	if (ctx.cr6.eq) goto loc_8320C0BC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8320c080
	if (ctx.cr6.eq) goto loc_8320C080;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x8320c06c
	if (ctx.cr6.eq) goto loc_8320C06C;
loc_8320C064:
	// bl 0x82bea298
	ctx.lr = 0x8320C068;
	sub_82BEA298(ctx, base);
	// b 0x8320c190
	goto loc_8320C190;
loc_8320C06C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8320c190
	if (!ctx.cr6.lt) goto loc_8320C190;
	// b 0x8320c064
	goto loc_8320C064;
loc_8320C080:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8320c094
	if (ctx.cr6.lt) goto loc_8320C094;
	// bl 0x82bea298
	ctx.lr = 0x8320C094;
	sub_82BEA298(ctx, base);
loc_8320C094:
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// blt cr6,0x8320c0a0
	if (ctx.cr6.lt) goto loc_8320C0A0;
	// bl 0x82bea298
	ctx.lr = 0x8320C0A0;
	sub_82BEA298(ctx, base);
loc_8320C0A0:
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-9680
	ctx.r7.s64 = ctx.r11.s64 + -9680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 2;
	// b 0x8320c180
	goto loc_8320C180;
loc_8320C0BC:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8320c144
	if (ctx.cr6.lt) goto loc_8320C144;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x8320c0d8
	if (ctx.cr6.lt) goto loc_8320C0D8;
	// bl 0x82bea298
	ctx.lr = 0x8320C0D8;
	sub_82BEA298(ctx, base);
loc_8320C0D8:
	// clrlwi r4,r29,28
	ctx.r4.u64 = ctx.r29.u32 & 0xF;
	// rlwinm r6,r31,10,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 10) & 0x1;
	// rlwinm r5,r29,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xF;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bne cr6,0x8320c0f0
	if (!ctx.cr6.eq) goto loc_8320C0F0;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8320C0F0:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x8320c124
	if (!ctx.cr6.eq) goto loc_8320C124;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt cr6,0x8320c124
	if (ctx.cr6.lt) goto loc_8320C124;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,-9712
	ctx.r5.s64 = ctx.r11.s64 + -9712;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb7580
	ctx.lr = 0x8320C118;
	sub_82CB7580(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,5106
	ctx.r5.s64 = 5106;
	// b 0x8320bff0
	goto loc_8320BFF0;
loc_8320C124:
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r7,r11,-9664
	ctx.r7.s64 = ctx.r11.s64 + -9664;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320bc68
	ctx.lr = 0x8320C140;
	sub_8320BC68(ctx, base);
	// b 0x8320c190
	goto loc_8320C190;
loc_8320C144:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8320c158
	if (!ctx.cr6.eq) goto loc_8320C158;
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// addi r31,r11,-9712
	ctx.r31.s64 = ctx.r11.s64 + -9712;
	// b 0x8320c16c
	goto loc_8320C16C;
loc_8320C158:
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// addi r31,r11,-9696
	ctx.r31.s64 = ctx.r11.s64 + -9696;
	// blt cr6,0x8320c16c
	if (ctx.cr6.lt) goto loc_8320C16C;
	// bl 0x82bea298
	ctx.lr = 0x8320C16C;
	sub_82BEA298(ctx, base);
loc_8320C16C:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8320C180:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// bl 0x8320be20
	ctx.lr = 0x8320C190;
	sub_8320BE20(ctx, base);
loc_8320C190:
	// stw r22,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r22.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320C198:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320C1A0"))) PPC_WEAK_FUNC(sub_8320C1A0);
PPC_FUNC_IMPL(__imp__sub_8320C1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8320C1A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// lwz r26,16(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8320c1cc
	if (ctx.cr6.lt) goto loc_8320C1CC;
	// bl 0x82bea298
	ctx.lr = 0x8320C1CC;
	sub_82BEA298(ctx, base);
loc_8320C1CC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8320c224
	if (!ctx.cr6.gt) goto loc_8320C224;
loc_8320C1DC:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// srw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320c214
	if (ctx.cr0.eq) goto loc_8320C214;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x8320c1fc
	if (ctx.cr6.lt) goto loc_8320C1FC;
	// bl 0x82bea298
	ctx.lr = 0x8320C1FC;
	sub_82BEA298(ctx, base);
loc_8320C1FC:
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// ori r11,r11,25
	ctx.r11.u64 = ctx.r11.u64 | 25;
	// rlwimi r11,r31,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_8320C214:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8320c1dc
	if (ctx.cr6.lt) goto loc_8320C1DC;
loc_8320C224:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8320c280
	if (!ctx.cr6.gt) goto loc_8320C280;
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// addi r30,r11,-9680
	ctx.r30.s64 = ctx.r11.s64 + -9680;
loc_8320C23C:
	// lwz r11,196(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 196);
	// srw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320c270
	if (ctx.cr0.eq) goto loc_8320C270;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x8320be20
	ctx.lr = 0x8320C270;
	sub_8320BE20(ctx, base);
loc_8320C270:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8320c23c
	if (ctx.cr6.lt) goto loc_8320C23C;
loc_8320C280:
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r10,-9696
	ctx.r30.s64 = ctx.r10.s64 + -9696;
	// addi r28,r11,-9712
	ctx.r28.s64 = ctx.r11.s64 + -9712;
loc_8320C294:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8320c2d8
	if (ctx.cr6.eq) goto loc_8320C2D8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// beq cr6,0x8320c2b8
	if (ctx.cr6.eq) goto loc_8320C2B8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_8320C2B8:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320be20
	ctx.lr = 0x8320C2D8;
	sub_8320BE20(ctx, base);
loc_8320C2D8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x8320c294
	if (ctx.cr6.lt) goto loc_8320C294;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320C2EC"))) PPC_WEAK_FUNC(sub_8320C2EC);
PPC_FUNC_IMPL(__imp__sub_8320C2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320C2F0"))) PPC_WEAK_FUNC(sub_8320C2F0);
PPC_FUNC_IMPL(__imp__sub_8320C2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x8320C2F8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r24,16(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8320c320
	if (ctx.cr6.lt) goto loc_8320C320;
	// bl 0x82bea298
	ctx.lr = 0x8320C320;
	sub_82BEA298(ctx, base);
loc_8320C320:
	// lwz r11,432(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 432);
	// lwz r31,0(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8320c37c
	if (ctx.cr6.eq) goto loc_8320C37C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320c37c
	if (ctx.cr0.eq) goto loc_8320C37C;
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// blt cr6,0x8320c34c
	if (ctx.cr6.lt) goto loc_8320C34C;
	// bl 0x82bea298
	ctx.lr = 0x8320C34C;
	sub_82BEA298(ctx, base);
loc_8320C34C:
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// lwz r10,432(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 432);
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u32);
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r31,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r31.u32);
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,424(r24)
	PPC_STORE_U32(ctx.r24.u32 + 424, ctx.r11.u32);
loc_8320C37C:
	// stw r31,432(r24)
	PPC_STORE_U32(ctx.r24.u32 + 432, ctx.r31.u32);
	// addi r21,r31,4
	ctx.r21.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r27,2(r31)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// beq 0x8320c5c4
	if (ctx.cr0.eq) goto loc_8320C5C4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwimi r9,r11,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// ori r10,r10,260
	ctx.r10.u64 = ctx.r10.u64 | 260;
	// li r22,1
	ctx.r22.s64 = 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// rlwinm r26,r9,24,27,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8320c4bc
	if (!ctx.cr6.lt) goto loc_8320C4BC;
	// addi r11,r27,-64
	ctx.r11.s64 = ctx.r27.s64 + -64;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bgt cr6,0x8320c414
	if (ctx.cr6.gt) goto loc_8320C414;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,-9552
	ctx.r12.s64 = ctx.r12.s64 + -9552;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// addi r12,r12,-15364
	ctx.r12.s64 = ctx.r12.s64 + -15364;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8320C404;
	case 1:
		goto loc_8320C404;
	case 2:
		goto loc_8320C3FC;
	case 3:
		goto loc_8320C3FC;
	case 4:
		goto loc_8320C3FC;
	case 5:
		goto loc_8320C40C;
	case 6:
		goto loc_8320C40C;
	case 7:
		goto loc_8320C404;
	case 8:
		goto loc_8320C3FC;
	case 9:
		goto loc_8320C404;
	case 10:
		goto loc_8320C3FC;
	case 11:
		goto loc_8320C414;
	case 12:
		goto loc_8320C3FC;
	case 13:
		goto loc_8320C3FC;
	case 14:
		goto loc_8320C414;
	case 15:
		goto loc_8320C414;
	case 16:
		goto loc_8320C414;
	case 17:
		goto loc_8320C414;
	case 18:
		goto loc_8320C40C;
	case 19:
		goto loc_8320C3FC;
	case 20:
		goto loc_8320C400;
	case 21:
		goto loc_8320C400;
	case 22:
		goto loc_8320C400;
	default:
		__builtin_unreachable();
	}
loc_8320C3FC:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_8320C400:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_8320C404:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x8320c420
	goto loc_8320C420;
loc_8320C40C:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// b 0x8320c41c
	goto loc_8320C41C;
loc_8320C414:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x8320c420
	if (!ctx.cr6.eq) goto loc_8320C420;
loc_8320C41C:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_8320C420:
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x8320c42c
	if (ctx.cr6.lt) goto loc_8320C42C;
	// bl 0x82bea298
	ctx.lr = 0x8320C42C;
	sub_82BEA298(ctx, base);
loc_8320C42C:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x8320c5b8
	if (!ctx.cr6.eq) goto loc_8320C5B8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8320c470
	if (ctx.cr6.eq) goto loc_8320C470;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// slw r10,r22,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// blt cr6,0x8320c458
	if (ctx.cr6.lt) goto loc_8320C458;
	// bl 0x82bea298
	ctx.lr = 0x8320C458;
	sub_82BEA298(ctx, base);
loc_8320C458:
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8320c46c
	if (!ctx.cr6.lt) goto loc_8320C46C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8320C46C:
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
loc_8320C470:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8320c4a0
	if (ctx.cr6.eq) goto loc_8320C4A0;
	// lwz r11,196(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 196);
	// slw r10,r22,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r10,196(r24)
	PPC_STORE_U32(ctx.r24.u32 + 196, ctx.r10.u32);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8320c49c
	if (!ctx.cr6.lt) goto loc_8320C49C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8320C49C:
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
loc_8320C4A0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8320c5b8
	if (ctx.cr6.eq) goto loc_8320C5B8;
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// addi r10,r31,6
	ctx.r10.s64 = ctx.r31.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u32);
	// b 0x8320c5b8
	goto loc_8320C5B8;
loc_8320C4BC:
	// beq cr6,0x8320c4c4
	if (ctx.cr6.eq) goto loc_8320C4C4;
	// bl 0x82bea298
	ctx.lr = 0x8320C4C4;
	sub_82BEA298(ctx, base);
loc_8320C4C4:
	// cmplwi cr6,r27,65
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 65, ctx.xer);
	// beq cr6,0x8320c50c
	if (ctx.cr6.eq) goto loc_8320C50C;
	// cmplwi cr6,r27,66
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 66, ctx.xer);
	// bne cr6,0x8320c5b8
	if (!ctx.cr6.eq) goto loc_8320C5B8;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// slw r10,r22,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// blt cr6,0x8320c4f0
	if (ctx.cr6.lt) goto loc_8320C4F0;
	// bl 0x82bea298
	ctx.lr = 0x8320C4F0;
	sub_82BEA298(ctx, base);
loc_8320C4F0:
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8320c504
	if (!ctx.cr6.lt) goto loc_8320C504;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8320C504:
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
	// b 0x8320c5b8
	goto loc_8320C5B8;
loc_8320C50C:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x8320c5b8
	if (!ctx.cr6.eq) goto loc_8320C5B8;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8320c528
	if (!ctx.cr6.lt) goto loc_8320C528;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8320C528:
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// b 0x8320c5b8
	goto loc_8320C5B8;
loc_8320C530:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8320c594
	if (!ctx.cr6.eq) goto loc_8320C594;
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8320c5b4
	if (!ctx.cr6.eq) goto loc_8320C5B4;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x8320c568
	if (ctx.cr6.lt) goto loc_8320C568;
	// bl 0x82bea298
	ctx.lr = 0x8320C568;
	sub_82BEA298(ctx, base);
loc_8320C568:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8320c57c
	if (!ctx.cr6.lt) goto loc_8320C57C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8320C57C:
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// slw r11,r22,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r10,196(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 196);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,196(r24)
	PPC_STORE_U32(ctx.r24.u32 + 196, ctx.r11.u32);
	// b 0x8320c5b4
	goto loc_8320C5B4;
loc_8320C594:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8320c5b4
	if (!ctx.cr6.eq) goto loc_8320C5B4;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x8320c5a8
	if (ctx.cr6.lt) goto loc_8320C5A8;
	// bl 0x82bea298
	ctx.lr = 0x8320C5A8;
	sub_82BEA298(ctx, base);
loc_8320C5A8:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r22,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r22.u32);
loc_8320C5B4:
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
loc_8320C5B8:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8320c530
	if (!ctx.cr0.eq) goto loc_8320C530;
loc_8320C5C4:
	// stw r21,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r21.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320C5D0"))) PPC_WEAK_FUNC(sub_8320C5D0);
PPC_FUNC_IMPL(__imp__sub_8320C5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8320C5D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8320c684
	if (ctx.cr6.lt) goto loc_8320C684;
	// bl 0x82bea298
	ctx.lr = 0x8320C608;
	sub_82BEA298(ctx, base);
	// b 0x8320c684
	goto loc_8320C684;
loc_8320C60C:
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x8320c6b0
	if (!ctx.cr0.eq) goto loc_8320C6B0;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x8320c634
	if (!ctx.cr6.eq) goto loc_8320C634;
	// rlwinm r11,r11,16,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x8320c670
	goto loc_8320C670;
loc_8320C634:
	// cmplwi cr6,r10,65533
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65533, ctx.xer);
	// beq cr6,0x8320c66c
	if (ctx.cr6.eq) goto loc_8320C66C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8320c66c
	if (ctx.cr6.eq) goto loc_8320C66C;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x8320c654
	if (!ctx.cr6.eq) goto loc_8320C654;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// b 0x8320c670
	goto loc_8320C670;
loc_8320C654:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320c2f0
	ctx.lr = 0x8320C664;
	sub_8320C2F0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8320c674
	goto loc_8320C674;
loc_8320C66C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8320C670:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_8320C674:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x8320c6b0
	if (ctx.cr6.gt) goto loc_8320C6B0;
loc_8320C684:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8320c60c
	if (!ctx.cr6.eq) goto loc_8320C60C;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8320c6b0
	if (!ctx.cr6.eq) goto loc_8320C6B0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320C6A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_8320C6B0:
	// bl 0x82bea298
	ctx.lr = 0x8320C6B4;
	sub_82BEA298(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8320c6a8
	goto loc_8320C6A8;
}

__attribute__((alias("__imp__sub_8320C6BC"))) PPC_WEAK_FUNC(sub_8320C6BC);
PPC_FUNC_IMPL(__imp__sub_8320C6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320C6C0"))) PPC_WEAK_FUNC(sub_8320C6C0);
PPC_FUNC_IMPL(__imp__sub_8320C6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r9,r4,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// li r7,71
	ctx.r7.s64 = 71;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r8,341
	ctx.r8.s64 = 341;
	// rlwimi r5,r9,18,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 18) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320C70C"))) PPC_WEAK_FUNC(sub_8320C70C);
PPC_FUNC_IMPL(__imp__sub_8320C70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320C710"))) PPC_WEAK_FUNC(sub_8320C710);
PPC_FUNC_IMPL(__imp__sub_8320C710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8320C718:
	// lwz r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// srw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8320c760
	if (ctx.cr0.eq) goto loc_8320C760;
	// li r9,14
	ctx.r9.s64 = 14;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r7,r10,35
	ctx.r7.s64 = ctx.r10.s64 + 35;
	// rlwimi r8,r9,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r7,r9,18,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 18) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8320C760:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x8320c718
	if (ctx.cr6.lt) goto loc_8320C718;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320C774"))) PPC_WEAK_FUNC(sub_8320C774);
PPC_FUNC_IMPL(__imp__sub_8320C774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320C778"))) PPC_WEAK_FUNC(sub_8320C778);
PPC_FUNC_IMPL(__imp__sub_8320C778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8320C780;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r11,r11,16379
	ctx.r11.s64 = ctx.r11.s64 + 16379;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82299698
	ctx.lr = 0x8320C7AC;
	sub_82299698(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8320c7c4
	if (!ctx.cr0.eq) goto loc_8320C7C4;
	// bl 0x82bea298
	ctx.lr = 0x8320C7B8;
	sub_82BEA298(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8320c804
	goto loc_8320C804;
loc_8320C7C4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8320c7f4
	if (ctx.cr6.eq) goto loc_8320C7F4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8320c7e8
	if (ctx.cr6.eq) goto loc_8320C7E8;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1160
	ctx.lr = 0x8320C7E8;
	sub_82CB1160(ctx, base);
loc_8320C7E8:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822996c0
	ctx.lr = 0x8320C7F4;
	sub_822996C0(ctx, base);
loc_8320C7F4:
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8320C804:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320C80C"))) PPC_WEAK_FUNC(sub_8320C80C);
PPC_FUNC_IMPL(__imp__sub_8320C80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320C810"))) PPC_WEAK_FUNC(sub_8320C810);
PPC_FUNC_IMPL(__imp__sub_8320C810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8320C818;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8320c844
	if (ctx.cr6.lt) goto loc_8320C844;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8320c848
	if (!ctx.cr6.gt) goto loc_8320C848;
loc_8320C844:
	// bl 0x82bea298
	ctx.lr = 0x8320C848;
	sub_82BEA298(ctx, base);
loc_8320C848:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bge cr6,0x8320c890
	if (!ctx.cr6.lt) goto loc_8320C890;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8320c778
	ctx.lr = 0x8320C878;
	sub_8320C778(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8320C890:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320C89C"))) PPC_WEAK_FUNC(sub_8320C89C);
PPC_FUNC_IMPL(__imp__sub_8320C89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320C8A0"))) PPC_WEAK_FUNC(sub_8320C8A0);
PPC_FUNC_IMPL(__imp__sub_8320C8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8320C8A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8320c810
	ctx.lr = 0x8320C8C4;
	sub_8320C810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8320c8d4
	if (ctx.cr0.eq) goto loc_8320C8D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8320c9d8
	goto loc_8320C9D8;
loc_8320C8D4:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8320c914
	if (!ctx.cr6.lt) goto loc_8320C914;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,71
	ctx.r9.s64 = 71;
	// lis r8,87
	ctx.r8.s64 = 5701632;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// li r7,341
	ctx.r7.s64 = 341;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x8320c9c8
	goto loc_8320C9C8;
loc_8320C914:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8320c988
	if (!ctx.cr6.lt) goto loc_8320C988;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8320C930:
	// lwz r8,160(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 160);
	// srw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8320c978
	if (ctx.cr0.eq) goto loc_8320C978;
	// li r8,14
	ctx.r8.s64 = 14;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r8,23
	ctx.r8.s64 = 23;
	// addi r6,r10,35
	ctx.r6.s64 = ctx.r10.s64 + 35;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r6,r8,18,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 18) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8320C978:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x8320c930
	if (ctx.cr6.lt) goto loc_8320C930;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8320C988:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8320c9d4
	if (ctx.cr6.eq) goto loc_8320C9D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,71
	ctx.r9.s64 = 71;
	// lis r8,88
	ctx.r8.s64 = 5767168;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r9,341
	ctx.r9.s64 = 341;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// ori r8,r7,34
	ctx.r8.u64 = ctx.r7.u64 | 34;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_8320C9C8:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8320C9D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320C9D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320C9E0"))) PPC_WEAK_FUNC(sub_8320C9E0);
PPC_FUNC_IMPL(__imp__sub_8320C9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x8320C9E8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r11,r24,12
	ctx.r11.s64 = ctx.r24.s64 + 12;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// stw r7,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r7.u32);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r27,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFF0000;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// beq cr6,0x8320ca40
	if (ctx.cr6.eq) goto loc_8320CA40;
	// bl 0x82bea298
	ctx.lr = 0x8320CA40;
	sub_82BEA298(ctx, base);
loc_8320CA40:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r20,r31,30,2,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x8320ca5c
	if (!ctx.cr6.eq) goto loc_8320CA5C;
	// bl 0x82bea298
	ctx.lr = 0x8320CA58;
	sub_82BEA298(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8320CA5C:
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// ori r23,r10,512
	ctx.r23.u64 = ctx.r10.u64 | 512;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x8320ca74
	if (ctx.cr6.lt) goto loc_8320CA74;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8320CA74:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x8320cae0
	if (!ctx.cr6.lt) goto loc_8320CAE0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8320c5d0
	ctx.lr = 0x8320CAB4;
	sub_8320C5D0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8320c810
	ctx.lr = 0x8320CAC0;
	sub_8320C810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8320cad0
	if (ctx.cr0.eq) goto loc_8320CAD0;
loc_8320CAC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8320cdd4
	goto loc_8320CDD4;
loc_8320CAD0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8320c1a0
	ctx.lr = 0x8320CAE0;
	sub_8320C1A0(ctx, base);
loc_8320CAE0:
	// addi r11,r21,4
	ctx.r11.s64 = ctx.r21.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8320cd40
	if (ctx.cr6.eq) goto loc_8320CD40;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r25,r11,24344
	ctx.r25.s64 = ctx.r11.s64 + 24344;
loc_8320CAFC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8320c810
	ctx.lr = 0x8320CB08;
	sub_8320C810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8320cac8
	if (!ctx.cr0.eq) goto loc_8320CAC8;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x8320cb30
	if (ctx.cr0.eq) goto loc_8320CB30;
loc_8320CB28:
	// bl 0x82bea298
	ctx.lr = 0x8320CB2C;
	sub_82BEA298(ctx, base);
	// b 0x8320cd04
	goto loc_8320CD04;
loc_8320CB30:
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x8320cb4c
	if (!ctx.cr6.eq) goto loc_8320CB4C;
	// rlwinm r11,r11,16,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x8320cd00
	goto loc_8320CD00;
loc_8320CB4C:
	// cmplwi cr6,r10,65533
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65533, ctx.xer);
	// beq cr6,0x8320ccfc
	if (ctx.cr6.eq) goto loc_8320CCFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8320ccfc
	if (ctx.cr6.eq) goto loc_8320CCFC;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x8320cb8c
	if (!ctx.cr6.eq) goto loc_8320CB8C;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x8320cb84
	if (ctx.cr6.lt) goto loc_8320CB84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8320b908
	ctx.lr = 0x8320CB80;
	sub_8320B908(ctx, base);
	// b 0x8320cd04
	goto loc_8320CD04;
loc_8320CB84:
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
	// b 0x8320cd00
	goto loc_8320CD00;
loc_8320CB8C:
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x8320cbac
	if (!ctx.cr6.eq) goto loc_8320CBAC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8320b9e0
	ctx.lr = 0x8320CBA8;
	sub_8320B9E0(ctx, base);
	// b 0x8320cd04
	goto loc_8320CD04;
loc_8320CBAC:
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x8320cc40
	if (!ctx.cr6.eq) goto loc_8320CC40;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x8320cbc4
	if (!ctx.cr6.lt) goto loc_8320CBC4;
	// bl 0x82bea298
	ctx.lr = 0x8320CBC0;
	sub_82BEA298(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8320CBC4:
	// lwz r28,4(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r31,r28,21
	ctx.r31.u64 = ctx.r28.u32 & 0x7FF;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x8320cbe8
	if (ctx.cr6.lt) goto loc_8320CBE8;
	// bl 0x82bea298
	ctx.lr = 0x8320CBE4;
	sub_82BEA298(ctx, base);
	// li r31,15
	ctx.r31.s64 = 15;
loc_8320CBE8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3584
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3584, ctx.xer);
	// beq cr6,0x8320cc00
	if (ctx.cr6.eq) goto loc_8320CC00;
	// bl 0x82bea298
	ctx.lr = 0x8320CC00;
	sub_82BEA298(ctx, base);
loc_8320CC00:
	// li r11,29
	ctx.r11.s64 = 29;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x8320cd04
	goto loc_8320CD04;
loc_8320CC40:
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bne cr6,0x8320cc7c
	if (!ctx.cr6.eq) goto loc_8320CC7C;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x8320cc54
	if (!ctx.cr6.lt) goto loc_8320CC54;
	// bl 0x82bea298
	ctx.lr = 0x8320CC54;
	sub_82BEA298(ctx, base);
loc_8320CC54:
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8320bf60
	ctx.lr = 0x8320CC70;
	sub_8320BF60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8320cdd4
	if (!ctx.cr0.eq) goto loc_8320CDD4;
	// b 0x8320cd04
	goto loc_8320CD04;
loc_8320CC7C:
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// bne cr6,0x8320ccc8
	if (!ctx.cr6.eq) goto loc_8320CCC8;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8320ccd0
	if (!ctx.cr6.eq) goto loc_8320CCD0;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x8320cca0
	if (!ctx.cr6.lt) goto loc_8320CCA0;
	// bl 0x82bea298
	ctx.lr = 0x8320CCA0;
	sub_82BEA298(ctx, base);
loc_8320CCA0:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8320c8a0
	ctx.lr = 0x8320CCB4;
	sub_8320C8A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8320cdd4
	if (!ctx.cr0.eq) goto loc_8320CDD4;
	// lwz r5,224(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 224);
	// lwz r11,228(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// b 0x8320cce0
	goto loc_8320CCE0;
loc_8320CCC8:
	// cmplwi cr6,r10,97
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 97, ctx.xer);
	// bge cr6,0x8320cb28
	if (!ctx.cr6.lt) goto loc_8320CB28;
loc_8320CCD0:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r25,4
	ctx.r10.s64 = ctx.r25.s64 + 4;
	// lwzx r5,r11,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8320CCE0:
	// lwz r6,16(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8320CCF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8320cd04
	goto loc_8320CD04;
loc_8320CCFC:
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_8320CD00:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8320CD04:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r21,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r21.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bgt cr6,0x8320cddc
	if (ctx.cr6.gt) goto loc_8320CDDC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// blt cr6,0x8320cd30
	if (ctx.cr6.lt) goto loc_8320CD30;
	// bl 0x82bea298
	ctx.lr = 0x8320CD30;
	sub_82BEA298(ctx, base);
loc_8320CD30:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x8320cafc
	if (!ctx.cr6.eq) goto loc_8320CAFC;
loc_8320CD40:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subf r10,r21,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r21.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x8320cde0
	if (!ctx.cr6.eq) goto loc_8320CDE0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8320c810
	ctx.lr = 0x8320CD64;
	sub_8320C810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8320cac8
	if (!ctx.cr0.eq) goto loc_8320CAC8;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8320cd98
	if (!ctx.cr6.eq) goto loc_8320CD98;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8320c8a0
	ctx.lr = 0x8320CD90;
	sub_8320C8A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8320cdd4
	if (!ctx.cr0.eq) goto loc_8320CDD4;
loc_8320CD98:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// stw r11,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
	// ble cr6,0x8320cdd0
	if (!ctx.cr6.gt) goto loc_8320CDD0;
	// bl 0x82bea298
	ctx.lr = 0x8320CDD0;
	sub_82BEA298(ctx, base);
loc_8320CDD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320CDD4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
loc_8320CDDC:
	// bl 0x82bea298
	ctx.lr = 0x8320CDE0;
	sub_82BEA298(ctx, base);
loc_8320CDE0:
	// bl 0x82bea298
	ctx.lr = 0x8320CDE4;
	sub_82BEA298(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8320cdd4
	goto loc_8320CDD4;
}

__attribute__((alias("__imp__sub_8320CDEC"))) PPC_WEAK_FUNC(sub_8320CDEC);
PPC_FUNC_IMPL(__imp__sub_8320CDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320CDF0"))) PPC_WEAK_FUNC(sub_8320CDF0);
PPC_FUNC_IMPL(__imp__sub_8320CDF0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 | ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320CE1C"))) PPC_WEAK_FUNC(sub_8320CE1C);
PPC_FUNC_IMPL(__imp__sub_8320CE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320CE20"))) PPC_WEAK_FUNC(sub_8320CE20);
PPC_FUNC_IMPL(__imp__sub_8320CE20) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// subfic r9,r5,32
	ctx.xer.ca = ctx.r5.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r5.s64;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// lbzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subf r10,r5,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r5.s64;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r10,33
	ctx.r10.s64 = ctx.r10.s64 + 33;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// srw r3,r11,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320CE74"))) PPC_WEAK_FUNC(sub_8320CE74);
PPC_FUNC_IMPL(__imp__sub_8320CE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320CE78"))) PPC_WEAK_FUNC(sub_8320CE78);
PPC_FUNC_IMPL(__imp__sub_8320CE78) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subf r8,r9,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
	// lbzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subfic r3,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r3.s64 = 32 - ctx.r10.s64;
	// lbz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// slw r6,r6,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subf r5,r5,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r5.s64;
	// or r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 | ctx.r31.u64;
	// srw r7,r7,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// srw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// or r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 | ctx.r30.u64;
	// slw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// and r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 & ctx.r10.u64;
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
loc_8320CEEC:
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x8320ceec
	if (ctx.cr6.lt) goto loc_8320CEEC;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320CF10"))) PPC_WEAK_FUNC(sub_8320CF10);
PPC_FUNC_IMPL(__imp__sub_8320CF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x8320CF18;
	__savegprlr_25(ctx, base);
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31890
	ctx.r25.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,26160(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8320cf68
	if (!ctx.cr6.eq) goto loc_8320CF68;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// addi r11,r11,26172
	ctx.r11.s64 = ctx.r11.s64 + 26172;
	// lwz r10,26168(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26168);
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x8320d144
	goto loc_8320D144;
loc_8320CF68:
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// blt cr6,0x8320cf94
	if (ctx.cr6.lt) goto loc_8320CF94;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r11,r11,26172
	ctx.r11.s64 = ctx.r11.s64 + 26172;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r5,r9,-9276
	ctx.r5.s64 = ctx.r9.s64 + -9276;
	// addi r4,r8,-9284
	ctx.r4.s64 = ctx.r8.s64 + -9284;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// b 0x8320d06c
	goto loc_8320D06C;
loc_8320CF94:
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// mulli r26,r29,12
	ctx.r26.s64 = ctx.r29.s64 * 12;
	// addi r11,r11,-9648
	ctx.r11.s64 = ctx.r11.s64 + -9648;
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8320cfc0
	if (!ctx.cr6.eq) goto loc_8320CFC0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8320d148
	if (!ctx.cr6.eq) goto loc_8320D148;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8320d148
	if (ctx.cr6.eq) goto loc_8320D148;
loc_8320CFC0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r31,r11,25120
	ctx.r31.s64 = ctx.r11.s64 + 25120;
	// li r4,1022
	ctx.r4.s64 = 1022;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82cb2578
	ctx.lr = 0x8320CFE8;
	sub_82CB2578(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r11,1022(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1022, ctx.r11.u8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,6796
	ctx.r5.s64 = ctx.r10.s64 + 6796;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// bl 0x82cb7580
	ctx.lr = 0x8320D008;
	sub_82CB7580(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// stb r11,1023(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1023, ctx.r11.u8);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r10,26172
	ctx.r30.s64 = ctx.r10.s64 + 26172;
	// beq cr6,0x8320d028
	if (ctx.cr6.eq) goto loc_8320D028;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x8320d04c
	if (!ctx.cr6.eq) goto loc_8320D04C;
loc_8320D028:
	// addi r11,r29,-3
	ctx.r11.s64 = ctx.r29.s64 + -3;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8320D04C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8320D04C:
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8320d07c
	if (!ctx.cr6.eq) goto loc_8320D07C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-9284
	ctx.r4.s64 = ctx.r11.s64 + -9284;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_8320D06C:
	// lwz r10,26160(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8320D078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8320d148
	goto loc_8320D148;
loc_8320D07C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8320d134
	if (!ctx.cr6.eq) goto loc_8320D134;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lwz r11,26144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8320d134
	if (ctx.cr6.eq) goto loc_8320D134;
	// lis r27,-31890
	ctx.r27.s64 = -2089943040;
	// lwz r11,26152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8320d134
	if (ctx.cr6.eq) goto loc_8320D134;
	// lis r28,-31890
	ctx.r28.s64 = -2089943040;
	// lwz r11,26148(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8320d134
	if (ctx.cr6.eq) goto loc_8320D134;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r10,26144(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26144);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-9296
	ctx.r4.s64 = ctx.r11.s64 + -9296;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8320D0D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8320d148
	if (ctx.cr0.eq) goto loc_8320D148;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8320D0E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8320d0e0
	if (!ctx.cr6.eq) goto loc_8320D0E0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r10,26152(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26152);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8320D11C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r11,26148(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26148);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8320D130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8320d148
	goto loc_8320D148;
loc_8320D134:
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r11,26168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8320D144:
	// bctrl 
	ctx.lr = 0x8320D148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8320D148:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D150"))) PPC_WEAK_FUNC(sub_8320D150);
PPC_FUNC_IMPL(__imp__sub_8320D150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
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
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,26160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8320d1a8
	if (!ctx.cr6.eq) goto loc_8320D1A8;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r10,r11,26168
	ctx.r10.s64 = ctx.r11.s64 + 26168;
	// lwz r11,26168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26168);
	// lwz r3,-12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8320D1A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8320d1cc
	goto loc_8320D1CC;
loc_8320D1A8:
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lwz r11,26160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26160);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r10,r10,26168
	ctx.r10.s64 = ctx.r10.s64 + 26168;
	// addi r4,r9,21574
	ctx.r4.s64 = ctx.r9.s64 + 21574;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8320D1CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8320D1CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320D1DC"))) PPC_WEAK_FUNC(sub_8320D1DC);
PPC_FUNC_IMPL(__imp__sub_8320D1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D1E0"))) PPC_WEAK_FUNC(sub_8320D1E0);
PPC_FUNC_IMPL(__imp__sub_8320D1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8320D1E8;
	__savegprlr_27(ctx, base);
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31890
	ctx.r30.s64 = -2089943040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,26144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8320d2d8
	if (ctx.cr6.eq) goto loc_8320D2D8;
	// lis r27,-31890
	ctx.r27.s64 = -2089943040;
	// lwz r11,26152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8320d2d8
	if (ctx.cr6.eq) goto loc_8320D2D8;
	// lis r28,-31890
	ctx.r28.s64 = -2089943040;
	// lwz r11,26148(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8320d2d8
	if (ctx.cr6.eq) goto loc_8320D2D8;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,25120
	ctx.r31.s64 = ctx.r11.s64 + 25120;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cb2578
	ctx.lr = 0x8320D260;
	sub_82CB2578(ctx, base);
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// lwz r11,26144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26144);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8320D278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8320d2d8
	if (ctx.cr0.eq) goto loc_8320D2D8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8320D288:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8320d288
	if (!ctx.cr6.eq) goto loc_8320D288;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// lwz r10,26152(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26152);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8320D2C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// lwz r11,26148(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26148);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8320D2D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8320D2D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D2E0"))) PPC_WEAK_FUNC(sub_8320D2E0);
PPC_FUNC_IMPL(__imp__sub_8320D2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,26144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lwz r10,26152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26152);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lwz r10,26148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26148);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lwz r11,26144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26144);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,26156(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8320D330"))) PPC_WEAK_FUNC(sub_8320D330);
PPC_FUNC_IMPL(__imp__sub_8320D330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320D334"))) PPC_WEAK_FUNC(sub_8320D334);
PPC_FUNC_IMPL(__imp__sub_8320D334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D338"))) PPC_WEAK_FUNC(sub_8320D338);
PPC_FUNC_IMPL(__imp__sub_8320D338) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,26144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r11,r11,26156
	ctx.r11.s64 = ctx.r11.s64 + 26156;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-31890
	ctx.r9.s64 = -2089943040;
	// lwz r9,26148(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26148);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,26144(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26144);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8320D388"))) PPC_WEAK_FUNC(sub_8320D388);
PPC_FUNC_IMPL(__imp__sub_8320D388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320D38C"))) PPC_WEAK_FUNC(sub_8320D38C);
PPC_FUNC_IMPL(__imp__sub_8320D38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D390"))) PPC_WEAK_FUNC(sub_8320D390);
PPC_FUNC_IMPL(__imp__sub_8320D390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8320D398;
	__savegprlr_29(ctx, base);
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8320d440
	if (ctx.cr6.eq) goto loc_8320D440;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// lwz r11,26152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8320d440
	if (ctx.cr6.eq) goto loc_8320D440;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8320d440
	if (ctx.cr6.eq) goto loc_8320D440;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,25120
	ctx.r31.s64 = ctx.r11.s64 + 25120;
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cb2578
	ctx.lr = 0x8320D3FC;
	sub_82CB2578(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8320D404:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8320d404
	if (!ctx.cr6.eq) goto loc_8320D404;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// lwz r10,26152(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26152);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8320D440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8320D440:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D448"))) PPC_WEAK_FUNC(sub_8320D448);
PPC_FUNC_IMPL(__imp__sub_8320D448) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8320d4a0
	if (ctx.cr6.eq) goto loc_8320D4A0;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r10,26152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26152);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8320d4a0
	if (ctx.cr6.eq) goto loc_8320D4A0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8320d4a0
	if (ctx.cr6.eq) goto loc_8320D4A0;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lwz r11,26152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26152);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,26156(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8320D4A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8320D4A0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320D4B4"))) PPC_WEAK_FUNC(sub_8320D4B4);
PPC_FUNC_IMPL(__imp__sub_8320D4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D4B8"))) PPC_WEAK_FUNC(sub_8320D4B8);
PPC_FUNC_IMPL(__imp__sub_8320D4B8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8320d514
	if (ctx.cr6.eq) goto loc_8320D514;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// addi r11,r11,26164
	ctx.r11.s64 = ctx.r11.s64 + 26164;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8320d514
	if (ctx.cr6.eq) goto loc_8320D514;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8320d514
	if (ctx.cr6.eq) goto loc_8320D514;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8320D514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8320D514:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320D528"))) PPC_WEAK_FUNC(sub_8320D528);
PPC_FUNC_IMPL(__imp__sub_8320D528) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r10,26148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26148);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31890
	ctx.r10.s64 = -2089943040;
	// lwz r11,26148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26148);
	// lwz r3,26156(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8320D558"))) PPC_WEAK_FUNC(sub_8320D558);
PPC_FUNC_IMPL(__imp__sub_8320D558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320D55C"))) PPC_WEAK_FUNC(sub_8320D55C);
PPC_FUNC_IMPL(__imp__sub_8320D55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D560"))) PPC_WEAK_FUNC(sub_8320D560);
PPC_FUNC_IMPL(__imp__sub_8320D560) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8320D568;
	__savegprlr_28(ctx, base);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lis r31,-31890
	ctx.r31.s64 = -2089943040;
	// addi r30,r11,26172
	ctx.r30.s64 = ctx.r11.s64 + 26172;
	// lis r29,-31890
	ctx.r29.s64 = -2089943040;
	// lis r28,-31890
	ctx.r28.s64 = -2089943040;
	// stw r10,26172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26172, ctx.r10.u32);
	// stw r5,26144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26144, ctx.r5.u32);
	// stw r3,-16(r30)
	PPC_STORE_U32(ctx.r30.u32 + -16, ctx.r3.u32);
	// stw r4,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r4.u32);
	// stw r6,26148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26148, ctx.r6.u32);
	// stw r7,26152(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26152, ctx.r7.u32);
	// stw r8,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r8.u32);
	// stw r9,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r9.u32);
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D5A0"))) PPC_WEAK_FUNC(sub_8320D5A0);
PPC_FUNC_IMPL(__imp__sub_8320D5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8320D5A8;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82cb41c0
	ctx.lr = 0x8320D5C8;
	sub_82CB41C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8320d608
	if (!ctx.cr0.eq) goto loc_8320D608;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb41e0
	ctx.lr = 0x8320D5D8;
	sub_82CB41E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8320d5f0
	if (ctx.cr0.eq) goto loc_8320D5F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r11,-9216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9216);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8320d71c
	goto loc_8320D71C;
loc_8320D5F0:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-9224
	ctx.r4.s64 = ctx.r11.s64 + -9224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1160
	ctx.lr = 0x8320D604;
	sub_82CB1160(ctx, base);
	// b 0x8320d71c
	goto loc_8320D71C;
loc_8320D608:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x8320d61c
	if (!ctx.cr6.lt) goto loc_8320D61C;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_8320D61C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fabs f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// bl 0x8335df58
	ctx.lr = 0x8320D628;
	sub_8335DF58(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfd f13,-9232(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -9232);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8320d65c
	if (!ctx.cr6.gt) goto loc_8320D65C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f11,-16944(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16944);
loc_8320D648:
	// fmul f12,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f12.f64 * ctx.f11.f64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x8320d648
	if (ctx.cr6.gt) goto loc_8320D648;
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
loc_8320D65C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfd f13,-18352(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18352);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8320d6b0
	if (!ctx.cr6.lt) goto loc_8320D6B0;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8320d6b0
	if (!ctx.cr6.gt) goto loc_8320D6B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8320d69c
	if (!ctx.cr6.lt) goto loc_8320D69C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,6404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6404);
	ctx.f11.f64 = double(temp.f32);
loc_8320D68C:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8320d68c
	if (ctx.cr6.lt) goto loc_8320D68C;
loc_8320D69C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8320d6b0
	if (!ctx.cr6.lt) goto loc_8320D6B0;
	// li r11,45
	ctx.r11.s64 = 45;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8320D6B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,14068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14068);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// beq cr6,0x8320d6f8
	if (ctx.cr6.eq) goto loc_8320D6F8;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f0,f12
	ctx.f0.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,-9248
	ctx.r4.s64 = ctx.r11.s64 + -9248;
	// mullw r5,r10,r29
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// bl 0x82cb61f0
	ctx.lr = 0x8320D6F4;
	sub_82CB61F0(ctx, base);
	// b 0x8320d71c
	goto loc_8320D71C;
loc_8320D6F8:
	// stfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// fctiwz f0,f12
	ctx.f0.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-9256
	ctx.r4.s64 = ctx.r11.s64 + -9256;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mullw r5,r10,r29
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// bl 0x82cb61f0
	ctx.lr = 0x8320D71C;
	sub_82CB61F0(ctx, base);
loc_8320D71C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D72C"))) PPC_WEAK_FUNC(sub_8320D72C);
PPC_FUNC_IMPL(__imp__sub_8320D72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D730"))) PPC_WEAK_FUNC(sub_8320D730);
PPC_FUNC_IMPL(__imp__sub_8320D730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,0,8,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8320d75c
	if (!ctx.cr0.eq) goto loc_8320D75C;
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// lis r9,5120
	ctx.r9.s64 = 335544320;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8320d75c
	if (!ctx.cr6.eq) goto loc_8320D75C;
	// rlwinm r11,r11,0,18,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F00;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8320D75C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320D764"))) PPC_WEAK_FUNC(sub_8320D764);
PPC_FUNC_IMPL(__imp__sub_8320D764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D768"))) PPC_WEAK_FUNC(sub_8320D768);
PPC_FUNC_IMPL(__imp__sub_8320D768) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8320d788
	if (!ctx.cr0.eq) goto loc_8320D788;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8320d78c
	if (ctx.cr6.eq) goto loc_8320D78C;
loc_8320D788:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320D78C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320D794"))) PPC_WEAK_FUNC(sub_8320D794);
PPC_FUNC_IMPL(__imp__sub_8320D794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D798"))) PPC_WEAK_FUNC(sub_8320D798);
PPC_FUNC_IMPL(__imp__sub_8320D798) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8320D7DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320D7EC"))) PPC_WEAK_FUNC(sub_8320D7EC);
PPC_FUNC_IMPL(__imp__sub_8320D7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D7F0"))) PPC_WEAK_FUNC(sub_8320D7F0);
PPC_FUNC_IMPL(__imp__sub_8320D7F0) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8320D83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320D84C"))) PPC_WEAK_FUNC(sub_8320D84C);
PPC_FUNC_IMPL(__imp__sub_8320D84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D850"))) PPC_WEAK_FUNC(sub_8320D850);
PPC_FUNC_IMPL(__imp__sub_8320D850) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8320D858;
	__savegprlr_14(ctx, base);
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r9,r10,-8688
	ctx.r9.s64 = ctx.r10.s64 + -8688;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// addi r11,r11,8488
	ctx.r11.s64 = ctx.r11.s64 + 8488;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r8,-192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r11,-760(r8)
	PPC_STORE_U32(ctx.r8.u32 + -760, ctx.r11.u32);
	// addi r10,r10,8476
	ctx.r10.s64 = ctx.r10.s64 + 8476;
	// addi r9,r9,8452
	ctx.r9.s64 = ctx.r9.s64 + 8452;
	// stw r8,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r11,-192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// stw r10,-756(r11)
	PPC_STORE_U32(ctx.r11.u32 + -756, ctx.r10.u32);
	// stw r9,-752(r11)
	PPC_STORE_U32(ctx.r11.u32 + -752, ctx.r9.u32);
	// addi r10,r7,-7868
	ctx.r10.s64 = ctx.r7.s64 + -7868;
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// addi r11,r8,8456
	ctx.r11.s64 = ctx.r8.s64 + 8456;
	// addi r9,r6,-7876
	ctx.r9.s64 = ctx.r6.s64 + -7876;
	// lwz r8,-192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// stw r11,-748(r8)
	PPC_STORE_U32(ctx.r8.u32 + -748, ctx.r11.u32);
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// stw r10,-744(r8)
	PPC_STORE_U32(ctx.r8.u32 + -744, ctx.r10.u32);
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// stw r9,-740(r8)
	PPC_STORE_U32(ctx.r8.u32 + -740, ctx.r9.u32);
	// addi r11,r5,-7884
	ctx.r11.s64 = ctx.r5.s64 + -7884;
	// stw r8,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// addi r10,r4,-7892
	ctx.r10.s64 = ctx.r4.s64 + -7892;
	// addi r9,r3,-7900
	ctx.r9.s64 = ctx.r3.s64 + -7900;
	// stw r11,-736(r8)
	PPC_STORE_U32(ctx.r8.u32 + -736, ctx.r11.u32);
	// lis r31,-32253
	ctx.r31.s64 = -2113732608;
	// stw r10,-732(r8)
	PPC_STORE_U32(ctx.r8.u32 + -732, ctx.r10.u32);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// stw r9,-728(r8)
	PPC_STORE_U32(ctx.r8.u32 + -728, ctx.r9.u32);
	// lis r29,-32254
	ctx.r29.s64 = -2113798144;
	// addi r11,r31,-8720
	ctx.r11.s64 = ctx.r31.s64 + -8720;
	// addi r10,r30,24480
	ctx.r10.s64 = ctx.r30.s64 + 24480;
	// addi r9,r29,8480
	ctx.r9.s64 = ctx.r29.s64 + 8480;
	// stw r11,-724(r8)
	PPC_STORE_U32(ctx.r8.u32 + -724, ctx.r11.u32);
	// lis r28,-32247
	ctx.r28.s64 = -2113339392;
	// stw r10,-720(r8)
	PPC_STORE_U32(ctx.r8.u32 + -720, ctx.r10.u32);
	// lis r27,-32253
	ctx.r27.s64 = -2113732608;
	// stw r9,-716(r8)
	PPC_STORE_U32(ctx.r8.u32 + -716, ctx.r9.u32);
	// lis r26,-32253
	ctx.r26.s64 = -2113732608;
	// addi r11,r28,-7716
	ctx.r11.s64 = ctx.r28.s64 + -7716;
	// addi r10,r27,-8736
	ctx.r10.s64 = ctx.r27.s64 + -8736;
	// addi r9,r26,-8744
	ctx.r9.s64 = ctx.r26.s64 + -8744;
	// stw r11,-712(r8)
	PPC_STORE_U32(ctx.r8.u32 + -712, ctx.r11.u32);
	// stw r10,-708(r8)
	PPC_STORE_U32(ctx.r8.u32 + -708, ctx.r10.u32);
	// lis r31,-32247
	ctx.r31.s64 = -2113339392;
	// stw r9,-704(r8)
	PPC_STORE_U32(ctx.r8.u32 + -704, ctx.r9.u32);
	// lis r30,-32247
	ctx.r30.s64 = -2113339392;
	// lis r29,-32247
	ctx.r29.s64 = -2113339392;
	// lis r28,-32247
	ctx.r28.s64 = -2113339392;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// addi r31,r31,-7800
	ctx.r31.s64 = ctx.r31.s64 + -7800;
	// addi r30,r30,-7808
	ctx.r30.s64 = ctx.r30.s64 + -7808;
	// addi r29,r29,-7816
	ctx.r29.s64 = ctx.r29.s64 + -7816;
	// addi r28,r28,-7824
	ctx.r28.s64 = ctx.r28.s64 + -7824;
	// lis r27,-32254
	ctx.r27.s64 = -2113798144;
	// lis r26,-32254
	ctx.r26.s64 = -2113798144;
	// addi r11,r11,8460
	ctx.r11.s64 = ctx.r11.s64 + 8460;
	// addi r10,r10,8464
	ctx.r10.s64 = ctx.r10.s64 + 8464;
	// addi r9,r9,7988
	ctx.r9.s64 = ctx.r9.s64 + 7988;
	// addi r8,r8,21608
	ctx.r8.s64 = ctx.r8.s64 + 21608;
	// addi r7,r7,-8752
	ctx.r7.s64 = ctx.r7.s64 + -8752;
	// lwz r25,-192(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r24,-31907
	ctx.r24.s64 = -2091057152;
	// addi r3,r3,-7616
	ctx.r3.s64 = ctx.r3.s64 + -7616;
	// stw r31,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r31.u32);
	// addi r23,r24,-9328
	ctx.r23.s64 = ctx.r24.s64 + -9328;
	// stw r30,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r30.u32);
	// addi r6,r6,-7732
	ctx.r6.s64 = ctx.r6.s64 + -7732;
	// stw r29,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r29.u32);
	// addi r5,r5,-7584
	ctx.r5.s64 = ctx.r5.s64 + -7584;
	// stw r28,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r28.u32);
	// stw r8,-688(r25)
	PPC_STORE_U32(ctx.r25.u32 + -688, ctx.r8.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r3,-668(r25)
	PPC_STORE_U32(ctx.r25.u32 + -668, ctx.r3.u32);
	// addi r4,r4,-7600
	ctx.r4.s64 = ctx.r4.s64 + -7600;
	// stw r31,-664(r25)
	PPC_STORE_U32(ctx.r25.u32 + -664, ctx.r31.u32);
	// addi r27,r27,8436
	ctx.r27.s64 = ctx.r27.s64 + 8436;
	// stw r30,-660(r25)
	PPC_STORE_U32(ctx.r25.u32 + -660, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,-656(r25)
	PPC_STORE_U32(ctx.r25.u32 + -656, ctx.r29.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r10,-696(r25)
	PPC_STORE_U32(ctx.r25.u32 + -696, ctx.r10.u32);
	// addi r26,r26,8280
	ctx.r26.s64 = ctx.r26.s64 + 8280;
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r7,-684(r25)
	PPC_STORE_U32(ctx.r25.u32 + -684, ctx.r7.u32);
	// li r29,3
	ctx.r29.s64 = 3;
	// stw r8,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r28,-652(r25)
	PPC_STORE_U32(ctx.r25.u32 + -652, ctx.r28.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r27,-648(r25)
	PPC_STORE_U32(ctx.r25.u32 + -648, ctx.r27.u32);
	// stw r6,-680(r25)
	PPC_STORE_U32(ctx.r25.u32 + -680, ctx.r6.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r5,-676(r25)
	PPC_STORE_U32(ctx.r25.u32 + -676, ctx.r5.u32);
	// li r28,3
	ctx.r28.s64 = 3;
	// stw r4,-672(r25)
	PPC_STORE_U32(ctx.r25.u32 + -672, ctx.r4.u32);
	// li r27,3
	ctx.r27.s64 = 3;
	// stw r3,36(r23)
	PPC_STORE_U32(ctx.r23.u32 + 36, ctx.r3.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,40(r23)
	PPC_STORE_U32(ctx.r23.u32 + 40, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,-700(r25)
	PPC_STORE_U32(ctx.r25.u32 + -700, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,-692(r25)
	PPC_STORE_U32(ctx.r25.u32 + -692, ctx.r9.u32);
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// lis r31,-32247
	ctx.r31.s64 = -2113339392;
	// stw r26,-644(r25)
	PPC_STORE_U32(ctx.r25.u32 + -644, ctx.r26.u32);
	// stw r30,44(r23)
	PPC_STORE_U32(ctx.r23.u32 + 44, ctx.r30.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r29.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r25,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r25.u32);
	// lis r30,-32253
	ctx.r30.s64 = -2113732608;
	// stw r10,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r10.u32);
	// lis r29,-32253
	ctx.r29.s64 = -2113732608;
	// li r25,2
	ctx.r25.s64 = 2;
	// stw r7,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r7.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r8,76(r23)
	PPC_STORE_U32(ctx.r23.u32 + 76, ctx.r8.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r7,80(r23)
	PPC_STORE_U32(ctx.r23.u32 + 80, ctx.r7.u32);
	// stw r28,52(r23)
	PPC_STORE_U32(ctx.r23.u32 + 52, ctx.r28.u32);
	// addi r8,r3,-7848
	ctx.r8.s64 = ctx.r3.s64 + -7848;
	// stw r27,56(r23)
	PPC_STORE_U32(ctx.r23.u32 + 56, ctx.r27.u32);
	// addi r7,r31,-7860
	ctx.r7.s64 = ctx.r31.s64 + -7860;
	// stw r6,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r6.u32);
	// lis r28,-32247
	ctx.r28.s64 = -2113339392;
	// stw r5,28(r23)
	PPC_STORE_U32(ctx.r23.u32 + 28, ctx.r5.u32);
	// lis r27,-32247
	ctx.r27.s64 = -2113339392;
	// stw r4,32(r23)
	PPC_STORE_U32(ctx.r23.u32 + 32, ctx.r4.u32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// stw r9,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r9.u32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stw r25,-9328(r24)
	PPC_STORE_U32(ctx.r24.u32 + -9328, ctx.r25.u32);
	// addi r3,r30,-8916
	ctx.r3.s64 = ctx.r30.s64 + -8916;
	// stw r26,60(r23)
	PPC_STORE_U32(ctx.r23.u32 + 60, ctx.r26.u32);
	// addi r31,r29,-8924
	ctx.r31.s64 = ctx.r29.s64 + -8924;
	// stw r11,64(r23)
	PPC_STORE_U32(ctx.r23.u32 + 64, ctx.r11.u32);
	// stw r10,68(r23)
	PPC_STORE_U32(ctx.r23.u32 + 68, ctx.r10.u32);
	// stw r9,72(r23)
	PPC_STORE_U32(ctx.r23.u32 + 72, ctx.r9.u32);
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r6,r6,-8876
	ctx.r6.s64 = ctx.r6.s64 + -8876;
	// stw r11,84(r23)
	PPC_STORE_U32(ctx.r23.u32 + 84, ctx.r11.u32);
	// addi r30,r28,-7624
	ctx.r30.s64 = ctx.r28.s64 + -7624;
	// stw r11,96(r23)
	PPC_STORE_U32(ctx.r23.u32 + 96, ctx.r11.u32);
	// addi r29,r27,-7632
	ctx.r29.s64 = ctx.r27.s64 + -7632;
	// stw r11,108(r23)
	PPC_STORE_U32(ctx.r23.u32 + 108, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,92(r23)
	PPC_STORE_U32(ctx.r23.u32 + 92, ctx.r9.u32);
	// lis r28,-32247
	ctx.r28.s64 = -2113339392;
	// stw r6,-400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -400, ctx.r6.u32);
	// lis r27,-32247
	ctx.r27.s64 = -2113339392;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,104(r23)
	PPC_STORE_U32(ctx.r23.u32 + 104, ctx.r9.u32);
	// lis r26,-32247
	ctx.r26.s64 = -2113339392;
	// stw r10,88(r23)
	PPC_STORE_U32(ctx.r23.u32 + 88, ctx.r10.u32);
	// lis r25,-32253
	ctx.r25.s64 = -2113732608;
	// stw r10,100(r23)
	PPC_STORE_U32(ctx.r23.u32 + 100, ctx.r10.u32);
	// lis r24,-32253
	ctx.r24.s64 = -2113732608;
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r22,-32256
	ctx.r22.s64 = -2113929216;
	// stw r11,-520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -520, ctx.r11.u32);
	// lis r21,-32247
	ctx.r21.s64 = -2113339392;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r5,r5,-7836
	ctx.r5.s64 = ctx.r5.s64 + -7836;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
	// addi r4,r4,-8908
	ctx.r4.s64 = ctx.r4.s64 + -8908;
	// stw r10,112(r23)
	PPC_STORE_U32(ctx.r23.u32 + 112, ctx.r10.u32);
	// addi r28,r28,-7640
	ctx.r28.s64 = ctx.r28.s64 + -7640;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r27,r27,-7648
	ctx.r27.s64 = ctx.r27.s64 + -7648;
	// stw r11,-496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -496, ctx.r11.u32);
	// addi r26,r26,-7656
	ctx.r26.s64 = ctx.r26.s64 + -7656;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,116(r23)
	PPC_STORE_U32(ctx.r23.u32 + 116, ctx.r9.u32);
	// lis r23,-32256
	ctx.r23.s64 = -2113929216;
	// lwz r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r25,r25,-8972
	ctx.r25.s64 = ctx.r25.s64 + -8972;
	// stw r10,-516(r9)
	PPC_STORE_U32(ctx.r9.u32 + -516, ctx.r10.u32);
	// addi r24,r24,-8980
	ctx.r24.s64 = ctx.r24.s64 + -8980;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// addi r23,r23,24588
	ctx.r23.s64 = ctx.r23.s64 + 24588;
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r22,r22,24580
	ctx.r22.s64 = ctx.r22.s64 + 24580;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// addi r21,r21,-7924
	ctx.r21.s64 = ctx.r21.s64 + -7924;
	// lwz r6,-192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r11,-484(r9)
	PPC_STORE_U32(ctx.r9.u32 + -484, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,-472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -472, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,-460(r6)
	PPC_STORE_U32(ctx.r6.u32 + -460, ctx.r11.u32);
	// stw r11,-448(r6)
	PPC_STORE_U32(ctx.r6.u32 + -448, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r9,-512(r6)
	PPC_STORE_U32(ctx.r6.u32 + -512, ctx.r9.u32);
	// addi r20,r11,8472
	ctx.r20.s64 = ctx.r11.s64 + 8472;
	// stw r10,-504(r6)
	PPC_STORE_U32(ctx.r6.u32 + -504, ctx.r10.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r9,-500(r6)
	PPC_STORE_U32(ctx.r6.u32 + -500, ctx.r9.u32);
	// stw r10,-492(r6)
	PPC_STORE_U32(ctx.r6.u32 + -492, ctx.r10.u32);
	// addi r19,r11,-7668
	ctx.r19.s64 = ctx.r11.s64 + -7668;
	// stw r9,-488(r6)
	PPC_STORE_U32(ctx.r6.u32 + -488, ctx.r9.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r10,-480(r6)
	PPC_STORE_U32(ctx.r6.u32 + -480, ctx.r10.u32);
	// stw r9,-476(r6)
	PPC_STORE_U32(ctx.r6.u32 + -476, ctx.r9.u32);
	// addi r18,r11,-7676
	ctx.r18.s64 = ctx.r11.s64 + -7676;
	// stw r10,-468(r6)
	PPC_STORE_U32(ctx.r6.u32 + -468, ctx.r10.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r9,-464(r6)
	PPC_STORE_U32(ctx.r6.u32 + -464, ctx.r9.u32);
	// stw r10,-456(r6)
	PPC_STORE_U32(ctx.r6.u32 + -456, ctx.r10.u32);
	// addi r11,r11,8468
	ctx.r11.s64 = ctx.r11.s64 + 8468;
	// stw r9,-452(r6)
	PPC_STORE_U32(ctx.r6.u32 + -452, ctx.r9.u32);
	// stw r10,-444(r6)
	PPC_STORE_U32(ctx.r6.u32 + -444, ctx.r10.u32);
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,-372(r6)
	PPC_STORE_U32(ctx.r6.u32 + -372, ctx.r30.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lwz r30,-192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r17,-32247
	ctx.r17.s64 = -2113339392;
	// stw r6,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r6.u32);
	// lis r16,-32247
	ctx.r16.s64 = -2113339392;
	// stw r9,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r30.u32);
	// lis r30,-32247
	ctx.r30.s64 = -2113339392;
	// stw r5,-396(r6)
	PPC_STORE_U32(ctx.r6.u32 + -396, ctx.r5.u32);
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// stw r8,-388(r6)
	PPC_STORE_U32(ctx.r6.u32 + -388, ctx.r8.u32);
	// lis r15,-32256
	ctx.r15.s64 = -2113929216;
	// addi r8,r5,-7688
	ctx.r8.s64 = ctx.r5.s64 + -7688;
	// stw r4,-392(r6)
	PPC_STORE_U32(ctx.r6.u32 + -392, ctx.r4.u32);
	// stw r3,-380(r6)
	PPC_STORE_U32(ctx.r6.u32 + -380, ctx.r3.u32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stw r31,-376(r6)
	PPC_STORE_U32(ctx.r6.u32 + -376, ctx.r31.u32);
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// lis r31,-32247
	ctx.r31.s64 = -2113339392;
	// stw r7,-384(r6)
	PPC_STORE_U32(ctx.r6.u32 + -384, ctx.r7.u32);
	// addi r7,r4,-9056
	ctx.r7.s64 = ctx.r4.s64 + -9056;
	// stw r10,-436(r6)
	PPC_STORE_U32(ctx.r6.u32 + -436, ctx.r10.u32);
	// addi r4,r31,-8056
	ctx.r4.s64 = ctx.r31.s64 + -8056;
	// stw r10,-424(r6)
	PPC_STORE_U32(ctx.r6.u32 + -424, ctx.r10.u32);
	// stw r10,-412(r6)
	PPC_STORE_U32(ctx.r6.u32 + -412, ctx.r10.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r11,-440(r6)
	PPC_STORE_U32(ctx.r6.u32 + -440, ctx.r11.u32);
	// lis r14,-32247
	ctx.r14.s64 = -2113339392;
	// stw r11,-428(r6)
	PPC_STORE_U32(ctx.r6.u32 + -428, ctx.r11.u32);
	// stw r11,-416(r6)
	PPC_STORE_U32(ctx.r6.u32 + -416, ctx.r11.u32);
	// stw r29,-368(r6)
	PPC_STORE_U32(ctx.r6.u32 + -368, ctx.r29.u32);
	// lis r29,-32247
	ctx.r29.s64 = -2113339392;
	// stw r9,-432(r6)
	PPC_STORE_U32(ctx.r6.u32 + -432, ctx.r9.u32);
	// stw r9,-420(r6)
	PPC_STORE_U32(ctx.r6.u32 + -420, ctx.r9.u32);
	// stw r9,-408(r6)
	PPC_STORE_U32(ctx.r6.u32 + -408, ctx.r9.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r28,-364(r6)
	PPC_STORE_U32(ctx.r6.u32 + -364, ctx.r28.u32);
	// lis r28,-32247
	ctx.r28.s64 = -2113339392;
	// lwz r5,-192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r27,-360(r6)
	PPC_STORE_U32(ctx.r6.u32 + -360, ctx.r27.u32);
	// lis r27,-32247
	ctx.r27.s64 = -2113339392;
	// lwz r31,-184(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// stw r26,-356(r6)
	PPC_STORE_U32(ctx.r6.u32 + -356, ctx.r26.u32);
	// lis r26,-32247
	ctx.r26.s64 = -2113339392;
	// stw r25,-352(r6)
	PPC_STORE_U32(ctx.r6.u32 + -352, ctx.r25.u32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r11,-404(r5)
	PPC_STORE_U32(ctx.r5.u32 + -404, ctx.r11.u32);
	// lis r25,-32247
	ctx.r25.s64 = -2113339392;
	// stw r24,-348(r5)
	PPC_STORE_U32(ctx.r5.u32 + -348, ctx.r24.u32);
	// stw r5,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r5.u32);
	// addi r5,r3,-8044
	ctx.r5.s64 = ctx.r3.s64 + -8044;
	// lwz r3,-188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r11,-192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// stw r23,-344(r11)
	PPC_STORE_U32(ctx.r11.u32 + -344, ctx.r23.u32);
	// stw r22,-336(r11)
	PPC_STORE_U32(ctx.r11.u32 + -336, ctx.r22.u32);
	// addi r22,r16,-8156
	ctx.r22.s64 = ctx.r16.s64 + -8156;
	// stw r21,-340(r11)
	PPC_STORE_U32(ctx.r11.u32 + -340, ctx.r21.u32);
	// stw r20,-324(r11)
	PPC_STORE_U32(ctx.r11.u32 + -324, ctx.r20.u32);
	// stw r19,-332(r11)
	PPC_STORE_U32(ctx.r11.u32 + -332, ctx.r19.u32);
	// addi r11,r10,-7700
	ctx.r11.s64 = ctx.r10.s64 + -7700;
	// lwz r10,-188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// stw r31,-312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -312, ctx.r31.u32);
	// addi r31,r29,-8080
	ctx.r31.s64 = ctx.r29.s64 + -8080;
	// stw r3,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r3.u32);
	// addi r3,r30,-8068
	ctx.r3.s64 = ctx.r30.s64 + -8068;
	// stw r18,-328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -328, ctx.r18.u32);
	// addi r30,r28,-8096
	ctx.r30.s64 = ctx.r28.s64 + -8096;
	// stw r10,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// addi r10,r9,-7708
	ctx.r10.s64 = ctx.r9.s64 + -7708;
	// addi r29,r27,-8112
	ctx.r29.s64 = ctx.r27.s64 + -8112;
	// lwz r24,-172(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// addi r9,r6,-9256
	ctx.r9.s64 = ctx.r6.s64 + -9256;
	// lwz r23,-168(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// addi r28,r26,-8128
	ctx.r28.s64 = ctx.r26.s64 + -8128;
	// lwz r26,-180(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// addi r27,r25,-8148
	ctx.r27.s64 = ctx.r25.s64 + -8148;
	// lwz r25,-176(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// addi r6,r17,-8032
	ctx.r6.s64 = ctx.r17.s64 + -8032;
	// lwz r19,-184(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// lis r18,-31907
	ctx.r18.s64 = -2091057152;
	// addi r21,r15,24508
	ctx.r21.s64 = ctx.r15.s64 + 24508;
	// addi r17,r18,-8888
	ctx.r17.s64 = ctx.r18.s64 + -8888;
	// addi r20,r14,-8180
	ctx.r20.s64 = ctx.r14.s64 + -8180;
	// stw r19,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r19.u32);
	// stw r11,-320(r19)
	PPC_STORE_U32(ctx.r19.u32 + -320, ctx.r11.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r8,-304(r19)
	PPC_STORE_U32(ctx.r19.u32 + -304, ctx.r8.u32);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// stw r7,-300(r19)
	PPC_STORE_U32(ctx.r19.u32 + -300, ctx.r7.u32);
	// addi r11,r11,-8204
	ctx.r11.s64 = ctx.r11.s64 + -8204;
	// stw r10,-316(r19)
	PPC_STORE_U32(ctx.r19.u32 + -316, ctx.r10.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,-308(r19)
	PPC_STORE_U32(ctx.r19.u32 + -308, ctx.r9.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,-232(r19)
	PPC_STORE_U32(ctx.r19.u32 + -232, ctx.r11.u32);
	// addi r8,r8,-8240
	ctx.r8.s64 = ctx.r8.s64 + -8240;
	// lwz r11,-188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// addi r7,r7,24504
	ctx.r7.s64 = ctx.r7.s64 + 24504;
	// stw r6,-296(r19)
	PPC_STORE_U32(ctx.r19.u32 + -296, ctx.r6.u32);
	// addi r10,r10,-8216
	ctx.r10.s64 = ctx.r10.s64 + -8216;
	// stw r5,-292(r19)
	PPC_STORE_U32(ctx.r19.u32 + -292, ctx.r5.u32);
	// addi r9,r9,-8228
	ctx.r9.s64 = ctx.r9.s64 + -8228;
	// stw r4,-288(r19)
	PPC_STORE_U32(ctx.r19.u32 + -288, ctx.r4.u32);
	// stw r3,-284(r19)
	PPC_STORE_U32(ctx.r19.u32 + -284, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r8,-228(r19)
	PPC_STORE_U32(ctx.r19.u32 + -228, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,-208(r19)
	PPC_STORE_U32(ctx.r19.u32 + -208, ctx.r7.u32);
	// addi r6,r6,24500
	ctx.r6.s64 = ctx.r6.s64 + 24500;
	// stw r31,-280(r19)
	PPC_STORE_U32(ctx.r19.u32 + -280, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,-276(r19)
	PPC_STORE_U32(ctx.r19.u32 + -276, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,-272(r19)
	PPC_STORE_U32(ctx.r19.u32 + -272, ctx.r29.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r28,-268(r19)
	PPC_STORE_U32(ctx.r19.u32 + -268, ctx.r28.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r27,-264(r19)
	PPC_STORE_U32(ctx.r19.u32 + -264, ctx.r27.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r26,-260(r19)
	PPC_STORE_U32(ctx.r19.u32 + -260, ctx.r26.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r10,-220(r19)
	PPC_STORE_U32(ctx.r19.u32 + -220, ctx.r10.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r9,-212(r19)
	PPC_STORE_U32(ctx.r19.u32 + -212, ctx.r9.u32);
	// addi r19,r11,-8192
	ctx.r19.s64 = ctx.r11.s64 + -8192;
	// lwz r11,-168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r5,-8888(r18)
	PPC_STORE_U32(ctx.r18.u32 + -8888, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,8(r17)
	PPC_STORE_U32(ctx.r17.u32 + 8, ctx.r3.u32);
	// stw r31,12(r17)
	PPC_STORE_U32(ctx.r17.u32 + 12, ctx.r31.u32);
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
	// lwz r8,-168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r8,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// lwz r7,-168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r7,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r7.u32);
	// stw r6,-204(r11)
	PPC_STORE_U32(ctx.r11.u32 + -204, ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r6,-168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r25,-256(r8)
	PPC_STORE_U32(ctx.r8.u32 + -256, ctx.r25.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r24,-252(r7)
	PPC_STORE_U32(ctx.r7.u32 + -252, ctx.r24.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,16(r17)
	PPC_STORE_U32(ctx.r17.u32 + 16, ctx.r30.u32);
	// stw r6,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r6.u32);
	// lwz r5,-168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r5,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r5.u32);
	// lwz r4,-168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r4,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r4.u32);
	// stw r23,-248(r6)
	PPC_STORE_U32(ctx.r6.u32 + -248, ctx.r23.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r22,-244(r5)
	PPC_STORE_U32(ctx.r5.u32 + -244, ctx.r22.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r21,-240(r4)
	PPC_STORE_U32(ctx.r4.u32 + -240, ctx.r21.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r3,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// stw r10,40(r17)
	PPC_STORE_U32(ctx.r17.u32 + 40, ctx.r10.u32);
	// stw r10,80(r17)
	PPC_STORE_U32(ctx.r17.u32 + 80, ctx.r10.u32);
	// stw r10,96(r17)
	PPC_STORE_U32(ctx.r17.u32 + 96, ctx.r10.u32);
	// stw r10,108(r17)
	PPC_STORE_U32(ctx.r17.u32 + 108, ctx.r10.u32);
	// stw r10,120(r17)
	PPC_STORE_U32(ctx.r17.u32 + 120, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,44(r17)
	PPC_STORE_U32(ctx.r17.u32 + 44, ctx.r9.u32);
	// stw r10,132(r17)
	PPC_STORE_U32(ctx.r17.u32 + 132, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,84(r17)
	PPC_STORE_U32(ctx.r17.u32 + 84, ctx.r9.u32);
	// stw r10,144(r17)
	PPC_STORE_U32(ctx.r17.u32 + 144, ctx.r10.u32);
	// stw r10,156(r17)
	PPC_STORE_U32(ctx.r17.u32 + 156, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,100(r17)
	PPC_STORE_U32(ctx.r17.u32 + 100, ctx.r9.u32);
	// stw r10,184(r17)
	PPC_STORE_U32(ctx.r17.u32 + 184, ctx.r10.u32);
	// stw r10,188(r17)
	PPC_STORE_U32(ctx.r17.u32 + 188, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,112(r17)
	PPC_STORE_U32(ctx.r17.u32 + 112, ctx.r9.u32);
	// stw r9,124(r17)
	PPC_STORE_U32(ctx.r17.u32 + 124, ctx.r9.u32);
	// stw r9,136(r17)
	PPC_STORE_U32(ctx.r17.u32 + 136, ctx.r9.u32);
	// stw r9,148(r17)
	PPC_STORE_U32(ctx.r17.u32 + 148, ctx.r9.u32);
	// stw r9,160(r17)
	PPC_STORE_U32(ctx.r17.u32 + 160, ctx.r9.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,196(r17)
	PPC_STORE_U32(ctx.r17.u32 + 196, ctx.r10.u32);
	// lwz r31,-168(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r10,-164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// stw r11,36(r17)
	PPC_STORE_U32(ctx.r17.u32 + 36, ctx.r11.u32);
	// stw r11,88(r17)
	PPC_STORE_U32(ctx.r17.u32 + 88, ctx.r11.u32);
	// stw r11,92(r17)
	PPC_STORE_U32(ctx.r17.u32 + 92, ctx.r11.u32);
	// stw r31,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r31.u32);
	// stw r11,104(r17)
	PPC_STORE_U32(ctx.r17.u32 + 104, ctx.r11.u32);
	// stw r11,116(r17)
	PPC_STORE_U32(ctx.r17.u32 + 116, ctx.r11.u32);
	// stw r11,128(r17)
	PPC_STORE_U32(ctx.r17.u32 + 128, ctx.r11.u32);
	// stw r11,140(r17)
	PPC_STORE_U32(ctx.r17.u32 + 140, ctx.r11.u32);
	// stw r11,152(r17)
	PPC_STORE_U32(ctx.r17.u32 + 152, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r9,168(r17)
	PPC_STORE_U32(ctx.r17.u32 + 168, ctx.r9.u32);
	// stw r9,172(r17)
	PPC_STORE_U32(ctx.r17.u32 + 172, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,48(r17)
	PPC_STORE_U32(ctx.r17.u32 + 48, ctx.r8.u32);
	// stw r20,-224(r3)
	PPC_STORE_U32(ctx.r3.u32 + -224, ctx.r20.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r19,-216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -216, ctx.r19.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,176(r17)
	PPC_STORE_U32(ctx.r17.u32 + 176, ctx.r11.u32);
	// stw r11,180(r17)
	PPC_STORE_U32(ctx.r17.u32 + 180, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,-8688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8688, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,20(r17)
	PPC_STORE_U32(ctx.r17.u32 + 20, ctx.r29.u32);
	// stw r28,24(r17)
	PPC_STORE_U32(ctx.r17.u32 + 24, ctx.r28.u32);
	// stw r27,28(r17)
	PPC_STORE_U32(ctx.r17.u32 + 28, ctx.r27.u32);
	// stw r26,32(r17)
	PPC_STORE_U32(ctx.r17.u32 + 32, ctx.r26.u32);
	// stw r7,52(r17)
	PPC_STORE_U32(ctx.r17.u32 + 52, ctx.r7.u32);
	// stw r6,56(r17)
	PPC_STORE_U32(ctx.r17.u32 + 56, ctx.r6.u32);
	// lwz r8,-168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r5,64(r17)
	PPC_STORE_U32(ctx.r17.u32 + 64, ctx.r5.u32);
	// stw r4,60(r17)
	PPC_STORE_U32(ctx.r17.u32 + 60, ctx.r4.u32);
	// stw r3,76(r17)
	PPC_STORE_U32(ctx.r17.u32 + 76, ctx.r3.u32);
	// stw r31,68(r17)
	PPC_STORE_U32(ctx.r17.u32 + 68, ctx.r31.u32);
	// stw r30,72(r17)
	PPC_STORE_U32(ctx.r17.u32 + 72, ctx.r30.u32);
	// stw r11,192(r17)
	PPC_STORE_U32(ctx.r17.u32 + 192, ctx.r11.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// stw r10,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r10.u32);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// stw r11,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// stw r10,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r10.u32);
	// stw r9,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r9.u32);
	// stw r11,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// stw r11,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// stw r10,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r10.u32);
	// stw r9,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r9.u32);
	// stw r11,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r11.u32);
	// stw r10,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r10.u32);
	// stw r9,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, ctx.r9.u32);
	// stw r11,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r11.u32);
	// stw r10,68(r8)
	PPC_STORE_U32(ctx.r8.u32 + 68, ctx.r10.u32);
	// stw r9,72(r8)
	PPC_STORE_U32(ctx.r8.u32 + 72, ctx.r9.u32);
	// stw r11,88(r8)
	PPC_STORE_U32(ctx.r8.u32 + 88, ctx.r11.u32);
	// stw r10,84(r8)
	PPC_STORE_U32(ctx.r8.u32 + 84, ctx.r10.u32);
	// stw r9,80(r8)
	PPC_STORE_U32(ctx.r8.u32 + 80, ctx.r9.u32);
	// stw r11,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r11.u32);
	// stw r10,96(r8)
	PPC_STORE_U32(ctx.r8.u32 + 96, ctx.r10.u32);
	// stw r9,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r9.u32);
	// stw r11,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r11.u32);
	// stw r10,108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 108, ctx.r10.u32);
	// stw r9,112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 112, ctx.r9.u32);
	// stw r11,116(r8)
	PPC_STORE_U32(ctx.r8.u32 + 116, ctx.r11.u32);
	// stw r10,120(r8)
	PPC_STORE_U32(ctx.r8.u32 + 120, ctx.r10.u32);
	// stw r9,124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 124, ctx.r9.u32);
	// stw r11,128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 128, ctx.r11.u32);
	// stw r10,132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 132, ctx.r10.u32);
	// stw r9,136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 136, ctx.r9.u32);
	// stw r11,140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 140, ctx.r11.u32);
	// stw r10,144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 144, ctx.r10.u32);
	// stw r9,148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 148, ctx.r9.u32);
	// stw r11,152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 152, ctx.r11.u32);
	// stw r10,156(r8)
	PPC_STORE_U32(ctx.r8.u32 + 156, ctx.r10.u32);
	// stw r9,160(r8)
	PPC_STORE_U32(ctx.r8.u32 + 160, ctx.r9.u32);
	// stw r11,176(r8)
	PPC_STORE_U32(ctx.r8.u32 + 176, ctx.r11.u32);
	// stw r10,184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 184, ctx.r10.u32);
	// stw r9,168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 168, ctx.r9.u32);
	// stw r11,180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 180, ctx.r11.u32);
	// stw r10,188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 188, ctx.r10.u32);
	// stw r9,172(r8)
	PPC_STORE_U32(ctx.r8.u32 + 172, ctx.r9.u32);
	// stw r11,192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 192, ctx.r11.u32);
	// stw r10,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r10.u32);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320E06C"))) PPC_WEAK_FUNC(sub_8320E06C);
PPC_FUNC_IMPL(__imp__sub_8320E06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320E070"))) PPC_WEAK_FUNC(sub_8320E070);
PPC_FUNC_IMPL(__imp__sub_8320E070) {
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
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320e098
	if (ctx.cr0.eq) goto loc_8320E098;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,-18112
	ctx.r4.s64 = ctx.r11.s64 + -18112;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E098;
	sub_8320D7F0(ctx, base);
loc_8320E098:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320E0A8"))) PPC_WEAK_FUNC(sub_8320E0A8);
PPC_FUNC_IMPL(__imp__sub_8320E0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8320E0B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-18112
	ctx.r30.s64 = ctx.r11.s64 + -18112;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8320e0e0
	if (ctx.cr0.eq) goto loc_8320E0E0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-7560
	ctx.r5.s64 = ctx.r11.s64 + -7560;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E0E0;
	sub_8320D7F0(ctx, base);
loc_8320E0E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E0F0;
	sub_8320D7F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320e110
	if (ctx.cr0.eq) goto loc_8320E110;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-7568
	ctx.r5.s64 = ctx.r11.s64 + -7568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E110;
	sub_8320D7F0(ctx, base);
loc_8320E110:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320E118"))) PPC_WEAK_FUNC(sub_8320E118);
PPC_FUNC_IMPL(__imp__sub_8320E118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x8320E120;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-18112
	ctx.r30.s64 = ctx.r11.s64 + -18112;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8320e150
	if (ctx.cr0.eq) goto loc_8320E150;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-7552
	ctx.r5.s64 = ctx.r11.s64 + -7552;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E150;
	sub_8320D7F0(ctx, base);
loc_8320E150:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E160;
	sub_8320D7F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320e180
	if (ctx.cr0.eq) goto loc_8320E180;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-7568
	ctx.r5.s64 = ctx.r11.s64 + -7568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E180;
	sub_8320D7F0(ctx, base);
loc_8320E180:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320E188"))) PPC_WEAK_FUNC(sub_8320E188);
PPC_FUNC_IMPL(__imp__sub_8320E188) {
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
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320e1b4
	if (ctx.cr0.eq) goto loc_8320E1B4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r5,r11,-20292
	ctx.r5.s64 = ctx.r11.s64 + -20292;
	// addi r4,r10,-18112
	ctx.r4.s64 = ctx.r10.s64 + -18112;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E1B4;
	sub_8320D7F0(ctx, base);
loc_8320E1B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320E1C4"))) PPC_WEAK_FUNC(sub_8320E1C4);
PPC_FUNC_IMPL(__imp__sub_8320E1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320E1C8"))) PPC_WEAK_FUNC(sub_8320E1C8);
PPC_FUNC_IMPL(__imp__sub_8320E1C8) {
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
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320e1f4
	if (ctx.cr0.eq) goto loc_8320E1F4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r5,r11,-20300
	ctx.r5.s64 = ctx.r11.s64 + -20300;
	// addi r4,r10,-18112
	ctx.r4.s64 = ctx.r10.s64 + -18112;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E1F4;
	sub_8320D7F0(ctx, base);
loc_8320E1F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320E204"))) PPC_WEAK_FUNC(sub_8320E204);
PPC_FUNC_IMPL(__imp__sub_8320E204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320E208"))) PPC_WEAK_FUNC(sub_8320E208);
PPC_FUNC_IMPL(__imp__sub_8320E208) {
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

__attribute__((alias("__imp__sub_8320E230"))) PPC_WEAK_FUNC(sub_8320E230);
PPC_FUNC_IMPL(__imp__sub_8320E230) {
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

__attribute__((alias("__imp__sub_8320E250"))) PPC_WEAK_FUNC(sub_8320E250);
PPC_FUNC_IMPL(__imp__sub_8320E250) {
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
	// bl 0x8320d7f0
	ctx.lr = 0x8320E274;
	sub_8320D7F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320E284"))) PPC_WEAK_FUNC(sub_8320E284);
PPC_FUNC_IMPL(__imp__sub_8320E284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320E288"))) PPC_WEAK_FUNC(sub_8320E288);
PPC_FUNC_IMPL(__imp__sub_8320E288) {
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
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// clrlwi r6,r5,31
	ctx.r6.u64 = ctx.r5.u32 & 0x1;
	// addi r4,r10,-7532
	ctx.r4.s64 = ctx.r10.s64 + -7532;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E2AC;
	sub_8320D7F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320E2BC"))) PPC_WEAK_FUNC(sub_8320E2BC);
PPC_FUNC_IMPL(__imp__sub_8320E2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320E2C0"))) PPC_WEAK_FUNC(sub_8320E2C0);
PPC_FUNC_IMPL(__imp__sub_8320E2C0) {
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
	// bl 0x8320d7f0
	ctx.lr = 0x8320E2E0;
	sub_8320D7F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320E2F0"))) PPC_WEAK_FUNC(sub_8320E2F0);
PPC_FUNC_IMPL(__imp__sub_8320E2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c4
	ctx.lr = 0x8320E2F8;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// addi r4,r10,-12592
	ctx.r4.s64 = ctx.r10.s64 + -12592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// clrlwi r21,r9,31
	ctx.r21.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r27,r11,26
	ctx.r27.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E334;
	sub_8320D7F0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r20,r11,-7504
	ctx.r20.s64 = ctx.r11.s64 + -7504;
	// beq cr6,0x8320e350
	if (ctx.cr6.eq) goto loc_8320E350;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E350;
	sub_8320D7F0(ctx, base);
loc_8320E350:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8320e364
	if (!ctx.cr6.eq) goto loc_8320E364;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8320e368
	if (!ctx.cr6.eq) goto loc_8320E368;
loc_8320E364:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320E368:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8320e380
	if (!ctx.cr6.eq) goto loc_8320E380;
	// cmpwi cr6,r27,16
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 16, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8320e384
	if (!ctx.cr6.eq) goto loc_8320E384;
loc_8320E380:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320E384:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// addi r29,r10,-18112
	ctx.r29.s64 = ctx.r10.s64 + -18112;
	// beq 0x8320e3ac
	if (ctx.cr0.eq) goto loc_8320E3AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5764
	ctx.r4.s64 = ctx.r11.s64 + 5764;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E3A8;
	sub_8320D7F0(ctx, base);
	// b 0x8320e3d4
	goto loc_8320E3D4;
loc_8320E3AC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8320e3c0
	if (ctx.cr6.eq) goto loc_8320E3C0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,7836
	ctx.r5.s64 = ctx.r11.s64 + 7836;
	// b 0x8320e3c8
	goto loc_8320E3C8;
loc_8320E3C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,7924
	ctx.r5.s64 = ctx.r11.s64 + 7924;
loc_8320E3C8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E3D4;
	sub_8320D7F0(ctx, base);
loc_8320E3D4:
	// clrlwi. r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8320e3ec
	if (ctx.cr0.eq) goto loc_8320E3EC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7508
	ctx.r4.s64 = ctx.r11.s64 + -7508;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E3EC;
	sub_8320D7F0(ctx, base);
loc_8320E3EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8320e43c
	if (!ctx.cr6.eq) goto loc_8320E43C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8320e428
	if (ctx.cr6.eq) goto loc_8320E428;
	// cmpwi cr6,r27,62
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 62, ctx.xer);
	// beq cr6,0x8320e41c
	if (ctx.cr6.eq) goto loc_8320E41C;
	// cmpwi cr6,r27,63
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 63, ctx.xer);
	// bne cr6,0x8320e428
	if (!ctx.cr6.eq) goto loc_8320E428;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-168
	ctx.r5.s64 = ctx.r11.s64 + -168;
loc_8320E414:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8320e434
	goto loc_8320E434;
loc_8320E41C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-172
	ctx.r5.s64 = ctx.r11.s64 + -172;
	// b 0x8320e414
	goto loc_8320E414;
loc_8320E428:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,24704
	ctx.r4.s64 = ctx.r11.s64 + 24704;
loc_8320E434:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E43C;
	sub_8320D7F0(ctx, base);
loc_8320E43C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8320e45c
	if (!ctx.cr6.eq) goto loc_8320E45C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8320e45c
	if (ctx.cr6.eq) goto loc_8320E45C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7512
	ctx.r4.s64 = ctx.r11.s64 + -7512;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E45C;
	sub_8320D7F0(ctx, base);
loc_8320E45C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8320e474
	if (ctx.cr6.eq) goto loc_8320E474;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7516
	ctx.r4.s64 = ctx.r11.s64 + -7516;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E474;
	sub_8320D7F0(ctx, base);
loc_8320E474:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8320e4f0
	if (!ctx.cr6.eq) goto loc_8320E4F0;
	// cmpwi cr6,r24,15
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 15, ctx.xer);
	// beq cr6,0x8320e648
	if (ctx.cr6.eq) goto loc_8320E648;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22368
	ctx.r4.s64 = ctx.r11.s64 + 22368;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E494;
	sub_8320D7F0(ctx, base);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320e4ac
	if (ctx.cr0.eq) goto loc_8320E4AC;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24368
	ctx.r4.s64 = ctx.r11.s64 + 24368;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E4AC;
	sub_8320D7F0(ctx, base);
loc_8320E4AC:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320e4c4
	if (ctx.cr0.eq) goto loc_8320E4C4;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24372
	ctx.r4.s64 = ctx.r11.s64 + 24372;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E4C4;
	sub_8320D7F0(ctx, base);
loc_8320E4C4:
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320e4dc
	if (ctx.cr0.eq) goto loc_8320E4DC;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24376
	ctx.r4.s64 = ctx.r11.s64 + 24376;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E4DC;
	sub_8320D7F0(ctx, base);
loc_8320E4DC:
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320e648
	if (ctx.cr0.eq) goto loc_8320E648;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9992
	ctx.r4.s64 = ctx.r11.s64 + -9992;
	// b 0x8320e640
	goto loc_8320E640;
loc_8320E4F0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22368
	ctx.r4.s64 = ctx.r11.s64 + 22368;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E500;
	sub_8320D7F0(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// clrlwi. r8,r24,31
	ctx.r8.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r28,r11,18988
	ctx.r28.s64 = ctx.r11.s64 + 18988;
	// addi r30,r10,21940
	ctx.r30.s64 = ctx.r10.s64 + 21940;
	// addi r29,r9,-16692
	ctx.r29.s64 = ctx.r9.s64 + -16692;
	// beq 0x8320e540
	if (ctx.cr0.eq) goto loc_8320E540;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8320e534
	if (ctx.cr0.eq) goto loc_8320E534;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8320e560
	goto loc_8320E560;
loc_8320E534:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,24368
	ctx.r4.s64 = ctx.r11.s64 + 24368;
	// b 0x8320e560
	goto loc_8320E560;
loc_8320E540:
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8320e558
	if (ctx.cr6.eq) goto loc_8320E558;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x8320e55c
	if (!ctx.cr6.eq) goto loc_8320E55C;
loc_8320E558:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8320E55C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8320E560:
	// bl 0x8320d7f0
	ctx.lr = 0x8320E564;
	sub_8320D7F0(ctx, base);
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320e58c
	if (ctx.cr0.eq) goto loc_8320E58C;
	// rlwinm. r11,r23,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8320e580
	if (ctx.cr0.eq) goto loc_8320E580;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8320e5ac
	goto loc_8320E5AC;
loc_8320E580:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,24372
	ctx.r4.s64 = ctx.r11.s64 + 24372;
	// b 0x8320e5ac
	goto loc_8320E5AC;
loc_8320E58C:
	// rlwinm r11,r23,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8320e5a4
	if (ctx.cr6.eq) goto loc_8320E5A4;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x8320e5a8
	if (!ctx.cr6.eq) goto loc_8320E5A8;
loc_8320E5A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8320E5A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8320E5AC:
	// bl 0x8320d7f0
	ctx.lr = 0x8320E5B0;
	sub_8320D7F0(ctx, base);
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320e5d8
	if (ctx.cr0.eq) goto loc_8320E5D8;
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8320e5cc
	if (ctx.cr0.eq) goto loc_8320E5CC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8320e5f8
	goto loc_8320E5F8;
loc_8320E5CC:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,24376
	ctx.r4.s64 = ctx.r11.s64 + 24376;
	// b 0x8320e5f8
	goto loc_8320E5F8;
loc_8320E5D8:
	// rlwinm r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8320e5f0
	if (ctx.cr6.eq) goto loc_8320E5F0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x8320e5f4
	if (!ctx.cr6.eq) goto loc_8320E5F4;
loc_8320E5F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8320E5F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8320E5F8:
	// bl 0x8320d7f0
	ctx.lr = 0x8320E5FC;
	sub_8320D7F0(ctx, base);
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320e624
	if (ctx.cr0.eq) goto loc_8320E624;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8320e618
	if (ctx.cr0.eq) goto loc_8320E618;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8320e644
	goto loc_8320E644;
loc_8320E618:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9992
	ctx.r4.s64 = ctx.r11.s64 + -9992;
	// b 0x8320e644
	goto loc_8320E644;
loc_8320E624:
	// rlwinm r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8320e63c
	if (ctx.cr6.eq) goto loc_8320E63C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x8320e640
	if (!ctx.cr6.eq) goto loc_8320E640;
loc_8320E63C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8320E640:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8320E644:
	// bl 0x8320d7f0
	ctx.lr = 0x8320E648;
	sub_8320D7F0(ctx, base);
loc_8320E648:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8320e658
	if (ctx.cr6.eq) goto loc_8320E658;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x8320e660
	goto loc_8320E660;
loc_8320E658:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,21574
	ctx.r4.s64 = ctx.r11.s64 + 21574;
loc_8320E660:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E668;
	sub_8320D7F0(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x8320e680
	if (ctx.cr6.eq) goto loc_8320E680;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7524
	ctx.r4.s64 = ctx.r11.s64 + -7524;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E680;
	sub_8320D7F0(ctx, base);
loc_8320E680:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb1114
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320E688"))) PPC_WEAK_FUNC(sub_8320E688);
PPC_FUNC_IMPL(__imp__sub_8320E688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x8320E690;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8320e6b4
	if (!ctx.cr6.eq) goto loc_8320E6B4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8320e6c4
	if (!ctx.cr6.eq) goto loc_8320E6C4;
loc_8320E6B4:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x8320e6cc
	if (!ctx.cr6.eq) goto loc_8320E6CC;
	// rlwinm. r11,r5,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320e6cc
	if (ctx.cr0.eq) goto loc_8320E6CC;
loc_8320E6C4:
	// li r21,1
	ctx.r21.s64 = 1;
	// b 0x8320e6d0
	goto loc_8320E6D0;
loc_8320E6CC:
	// li r21,0
	ctx.r21.s64 = 0;
loc_8320E6D0:
	// srawi r11,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 6;
	// subfic r10,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r31.s64;
	// and r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 & ctx.r31.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r8,r31
	ctx.r8.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r10,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// clrlwi r30,r7,31
	ctx.r30.u64 = ctx.r7.u32 & 0x1;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// and r25,r10,r6
	ctx.r25.u64 = ctx.r10.u64 & ctx.r6.u64;
	// and r26,r11,r5
	ctx.r26.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8320e718
	if (ctx.cr6.eq) goto loc_8320E718;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,5764
	ctx.r4.s64 = ctx.r11.s64 + 5764;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E718;
	sub_8320D7F0(ctx, base);
loc_8320E718:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r22,r11,-7504
	ctx.r22.s64 = ctx.r11.s64 + -7504;
	// beq cr6,0x8320e734
	if (ctx.cr6.eq) goto loc_8320E734;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E734;
	sub_8320D7F0(ctx, base);
loc_8320E734:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8320e748
	if (!ctx.cr6.eq) goto loc_8320E748;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x8320e74c
	if (ctx.cr6.eq) goto loc_8320E74C;
loc_8320E748:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8320E74C:
	// subfic r9,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r31.s64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r24,r11,-22340
	ctx.r24.s64 = ctx.r11.s64 + -22340;
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r11,99
	ctx.r5.s64 = ctx.r11.s64 + 99;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E774;
	sub_8320D7F0(ctx, base);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8320e790
	if (ctx.cr0.eq) goto loc_8320E790;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-7508
	ctx.r4.s64 = ctx.r11.s64 + -7508;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E790;
	sub_8320D7F0(ctx, base);
loc_8320E790:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,24704
	ctx.r4.s64 = ctx.r11.s64 + 24704;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E7A4;
	sub_8320D7F0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r11,-7512
	ctx.r31.s64 = ctx.r11.s64 + -7512;
	// beq cr6,0x8320e7c0
	if (ctx.cr6.eq) goto loc_8320E7C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E7C0;
	sub_8320D7F0(ctx, base);
loc_8320E7C0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8320e7e8
	if (ctx.cr6.eq) goto loc_8320E7E8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8320e7d8
	if (ctx.cr6.eq) goto loc_8320E7D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x8320e7e0
	goto loc_8320E7E0;
loc_8320E7D8:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7500
	ctx.r4.s64 = ctx.r11.s64 + -7500;
loc_8320E7E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E7E8;
	sub_8320D7F0(ctx, base);
loc_8320E7E8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8320e800
	if (ctx.cr6.eq) goto loc_8320E800;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-7516
	ctx.r4.s64 = ctx.r11.s64 + -7516;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E800;
	sub_8320D7F0(ctx, base);
loc_8320E800:
	// lwz r25,340(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// blt cr6,0x8320e814
	if (ctx.cr6.lt) goto loc_8320E814;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320E814:
	// clrlwi r23,r11,24
	ctx.r23.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8320e828
	if (!ctx.cr6.eq) goto loc_8320E828;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320e920
	if (ctx.cr0.eq) goto loc_8320E920;
loc_8320E828:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,22368
	ctx.r4.s64 = ctx.r11.s64 + 22368;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E838;
	sub_8320D7F0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// srawi r9,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 2;
	// addi r30,r11,-10024
	ctx.r30.s64 = ctx.r11.s64 + -10024;
	// srawi r10,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 4;
	// srawi r11,r29,6
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 6;
	// clrlwi r31,r29,30
	ctx.r31.u64 = ctx.r29.u32 & 0x3;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r26,r11,30
	ctx.r26.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r29,r9,30
	ctx.r29.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r27,r10,30
	ctx.r27.u64 = ctx.r10.u32 & 0x3;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E87C;
	sub_8320D7F0(ctx, base);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// ble cr6,0x8320e920
	if (!ctx.cr6.gt) goto loc_8320E920;
	// clrlwi. r23,r23,24
	ctx.r23.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x8320e8ac
	if (!ctx.cr0.eq) goto loc_8320E8AC;
	// clrldi r11,r27,32
	ctx.r11.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// rldimi r11,r29,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// rldimi r10,r31,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x8320e8ac
	if (!ctx.cr6.eq) goto loc_8320E8AC;
	// cmpw cr6,r26,r31
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8320e920
	if (ctx.cr6.eq) goto loc_8320E920;
loc_8320E8AC:
	// lbzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E8C0;
	sub_8320D7F0(ctx, base);
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// ble cr6,0x8320e920
	if (!ctx.cr6.gt) goto loc_8320E920;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8320e8e0
	if (!ctx.cr6.eq) goto loc_8320E8E0;
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x8320e8e0
	if (!ctx.cr6.eq) goto loc_8320E8E0;
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8320e920
	if (ctx.cr6.eq) goto loc_8320E920;
loc_8320E8E0:
	// lbzx r11,r27,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r30.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E8F4;
	sub_8320D7F0(ctx, base);
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// ble cr6,0x8320e920
	if (!ctx.cr6.gt) goto loc_8320E920;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8320e90c
	if (!ctx.cr6.eq) goto loc_8320E90C;
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8320e920
	if (ctx.cr6.eq) goto loc_8320E920;
loc_8320E90C:
	// lbzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E920;
	sub_8320D7F0(ctx, base);
loc_8320E920:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8320e930
	if (ctx.cr6.eq) goto loc_8320E930;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x8320e938
	goto loc_8320E938;
loc_8320E930:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,21574
	ctx.r4.s64 = ctx.r11.s64 + 21574;
loc_8320E938:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E940;
	sub_8320D7F0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320E948"))) PPC_WEAK_FUNC(sub_8320E948);
PPC_FUNC_IMPL(__imp__sub_8320E948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x8320E950;
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
	// beq cr6,0x8320e97c
	if (ctx.cr6.eq) goto loc_8320E97C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,5764
	ctx.r4.s64 = ctx.r11.s64 + 5764;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E97C;
	sub_8320D7F0(ctx, base);
loc_8320E97C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r11,-7504
	ctx.r29.s64 = ctx.r11.s64 + -7504;
	// beq cr6,0x8320e998
	if (ctx.cr6.eq) goto loc_8320E998;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E998;
	sub_8320D7F0(ctx, base);
loc_8320E998:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-7472
	ctx.r4.s64 = ctx.r11.s64 + -7472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E9AC;
	sub_8320D7F0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7516
	ctx.r4.s64 = ctx.r11.s64 + -7516;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E9BC;
	sub_8320D7F0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8320ea68
	if (ctx.cr6.eq) goto loc_8320EA68;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22368
	ctx.r4.s64 = ctx.r11.s64 + 22368;
	// bl 0x8320d7f0
	ctx.lr = 0x8320E9D4;
	sub_8320D7F0(ctx, base);
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
	// bl 0x8320d7f0
	ctx.lr = 0x8320E9FC;
	sub_8320D7F0(ctx, base);
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
	// bl 0x8320d7f0
	ctx.lr = 0x8320EA20;
	sub_8320D7F0(ctx, base);
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
	// bl 0x8320d7f0
	ctx.lr = 0x8320EA44;
	sub_8320D7F0(ctx, base);
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
	// bl 0x8320d7f0
	ctx.lr = 0x8320EA68;
	sub_8320D7F0(ctx, base);
loc_8320EA68:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8320ea78
	if (ctx.cr6.eq) goto loc_8320EA78;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8320ea80
	goto loc_8320EA80;
loc_8320EA78:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,21574
	ctx.r4.s64 = ctx.r11.s64 + 21574;
loc_8320EA80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320EA88;
	sub_8320D7F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320EA90"))) PPC_WEAK_FUNC(sub_8320EA90);
PPC_FUNC_IMPL(__imp__sub_8320EA90) {
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
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-9464
	ctx.r10.s64 = ctx.r10.s64 + -9464;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r4,r9,-22340
	ctx.r4.s64 = ctx.r9.s64 + -22340;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8320d7f0
	ctx.lr = 0x8320EABC;
	sub_8320D7F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320EACC"))) PPC_WEAK_FUNC(sub_8320EACC);
PPC_FUNC_IMPL(__imp__sub_8320EACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320EAD0"))) PPC_WEAK_FUNC(sub_8320EAD0);
PPC_FUNC_IMPL(__imp__sub_8320EAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8320EAD8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8320eb10
	if (!ctx.cr0.eq) goto loc_8320EB10;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8320eb14
	if (ctx.cr6.eq) goto loc_8320EB14;
loc_8320EB10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320EB14:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8320eda0
	if (!ctx.cr0.eq) goto loc_8320EDA0;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r10,-9448
	ctx.r10.s64 = ctx.r10.s64 + -9448;
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8320e0a8
	ctx.lr = 0x8320EB38;
	sub_8320E0A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r10,r11,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// rlwinm r9,r11,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r8,r11,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// rlwinm r7,r11,8,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// rlwinm r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// rlwinm r5,r11,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x8320e2f0
	ctx.lr = 0x8320EB60;
	sub_8320E2F0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r11,32256
	ctx.r28.s64 = ctx.r11.s64 + 32256;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320EB74;
	sub_8320D7F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8320eb94
	if (!ctx.cr0.eq) goto loc_8320EB94;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8320eb94
	if (!ctx.cr0.eq) goto loc_8320EB94;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320eb94
	if (ctx.cr0.eq) goto loc_8320EB94;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8320EB94:
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r26,4
	ctx.r26.s64 = 4;
	// addi r30,r10,-9328
	ctx.r30.s64 = ctx.r10.s64 + -9328;
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x8320ec20
	if (ctx.cr6.lt) goto loc_8320EC20;
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r25,r10,31
	ctx.r25.u64 = ctx.r10.u32 & 0x1;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// bne 0x8320ebec
	if (!ctx.cr0.eq) goto loc_8320EBEC;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8320ebec
	if (ctx.cr6.eq) goto loc_8320EBEC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r6,5(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r5,r11,6,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// lbz r4,9(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// bl 0x8320e948
	ctx.lr = 0x8320EBE8;
	sub_8320E948(ctx, base);
	// b 0x8320ec20
	goto loc_8320EC20;
loc_8320EBEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
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
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// rlwinm r4,r4,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// bl 0x8320e688
	ctx.lr = 0x8320EC20;
	sub_8320E688(ctx, base);
loc_8320EC20:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x8320ecd8
	if (ctx.cr6.lt) goto loc_8320ECD8;
	// rlwinm. r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// bne 0x8320ec4c
	if (!ctx.cr0.eq) goto loc_8320EC4C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8320ec4c
	if (!ctx.cr6.eq) goto loc_8320EC4C;
	// li r25,2
	ctx.r25.s64 = 2;
loc_8320EC4C:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320EC64;
	sub_8320D7F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8320ec94
	if (!ctx.cr0.eq) goto loc_8320EC94;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8320ec94
	if (ctx.cr6.eq) goto loc_8320EC94;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// lbz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x8320e948
	ctx.lr = 0x8320EC90;
	sub_8320E948(ctx, base);
	// b 0x8320ecd8
	goto loc_8320ECD8;
loc_8320EC94:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// beq cr6,0x8320eca8
	if (ctx.cr6.eq) goto loc_8320ECA8;
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_8320ECA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
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
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x8320e688
	ctx.lr = 0x8320ECD8;
	sub_8320E688(ctx, base);
loc_8320ECD8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x8320eda0
	if (ctx.cr6.lt) goto loc_8320EDA0;
	// rlwinm. r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,3,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// bne 0x8320ed04
	if (!ctx.cr0.eq) goto loc_8320ED04;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8320ed04
	if (!ctx.cr6.eq) goto loc_8320ED04;
	// li r25,3
	ctx.r25.s64 = 3;
loc_8320ED04:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320ED1C;
	sub_8320D7F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8320ed4c
	if (!ctx.cr0.eq) goto loc_8320ED4C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8320ed4c
	if (ctx.cr6.eq) goto loc_8320ED4C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x8320e948
	ctx.lr = 0x8320ED48;
	sub_8320E948(ctx, base);
	// b 0x8320eda0
	goto loc_8320EDA0;
loc_8320ED4C:
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// beq cr6,0x8320ed68
	if (ctx.cr6.eq) goto loc_8320ED68;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8320ed68
	if (!ctx.cr6.eq) goto loc_8320ED68;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x8320ed70
	goto loc_8320ED70;
loc_8320ED68:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_8320ED70:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// rlwinm r9,r11,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// rlwinm r8,r8,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// bl 0x8320e688
	ctx.lr = 0x8320EDA0;
	sub_8320E688(ctx, base);
loc_8320EDA0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320EDA8"))) PPC_WEAK_FUNC(sub_8320EDA8);
PPC_FUNC_IMPL(__imp__sub_8320EDA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x8320EDB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8320ede0
	if (!ctx.cr0.eq) goto loc_8320EDE0;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8320ede0
	if (!ctx.cr0.eq) goto loc_8320EDE0;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320ede0
	if (ctx.cr0.eq) goto loc_8320EDE0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8320EDE0:
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,-8488
	ctx.r29.s64 = ctx.r11.s64 + -8488;
	// rlwinm r11,r10,8,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFC;
	// addi r10,r29,-600
	ctx.r10.s64 = ctx.r29.s64 + -600;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8320e0a8
	ctx.lr = 0x8320EE00;
	sub_8320E0A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r8,r11,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// bne 0x8320ee14
	if (!ctx.cr0.eq) goto loc_8320EE14;
	// rlwinm r8,r11,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
loc_8320EE14:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bne cr6,0x8320ee24
	if (!ctx.cr6.eq) goto loc_8320EE24;
	// rlwinm r4,r11,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
loc_8320EE24:
	// rlwinm r10,r11,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r9,r11,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r7,r11,7,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// rlwinm r5,r11,12,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320e2f0
	ctx.lr = 0x8320EE3C;
	sub_8320E2F0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,32256
	ctx.r4.s64 = ctx.r11.s64 + 32256;
	// bl 0x8320d7f0
	ctx.lr = 0x8320EE4C;
	sub_8320D7F0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// rlwinm r8,r9,8,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFC;
	// addi r11,r11,-8888
	ctx.r11.s64 = ctx.r11.s64 + -8888;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8320ef38
	if (ctx.cr6.lt) goto loc_8320EF38;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r7,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// rlwinm r10,r7,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1;
	// rlwinm. r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// beq 0x8320ee90
	if (ctx.cr0.eq) goto loc_8320EE90;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8320eeb4
	goto loc_8320EEB4;
loc_8320EE90:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8320eea4
	if (ctx.cr0.eq) goto loc_8320EEA4;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8320eeb4
	goto loc_8320EEB4;
loc_8320EEA4:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
loc_8320EEB4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r6,r11,0,2,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8320eee4
	if (!ctx.cr0.eq) goto loc_8320EEE4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8320eee4
	if (ctx.cr6.eq) goto loc_8320EEE4;
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
	// bl 0x8320e948
	ctx.lr = 0x8320EEE0;
	sub_8320E948(ctx, base);
	// b 0x8320ef38
	goto loc_8320EF38;
loc_8320EEE4:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8320ef00
	if (ctx.cr6.eq) goto loc_8320EF00;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x8320ef00
	if (!ctx.cr6.eq) goto loc_8320EF00;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x8320ef08
	goto loc_8320EF08;
loc_8320EF00:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_8320EF08:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r8,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// rlwinm r8,r9,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r9,r7,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0x1;
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r7,r7,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8320e688
	ctx.lr = 0x8320EF38;
	sub_8320E688(ctx, base);
loc_8320EF38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320EF40"))) PPC_WEAK_FUNC(sub_8320EF40);
PPC_FUNC_IMPL(__imp__sub_8320EF40) {
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
	// beq cr6,0x8320ef64
	if (ctx.cr6.eq) goto loc_8320EF64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7460
	ctx.r4.s64 = ctx.r11.s64 + -7460;
	// b 0x8320ef6c
	goto loc_8320EF6C;
loc_8320EF64:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7464
	ctx.r4.s64 = ctx.r11.s64 + -7464;
loc_8320EF6C:
	// bl 0x8320d7f0
	ctx.lr = 0x8320EF70;
	sub_8320D7F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320EF80"))) PPC_WEAK_FUNC(sub_8320EF80);
PPC_FUNC_IMPL(__imp__sub_8320EF80) {
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
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8320efcc
	if (!ctx.cr0.eq) goto loc_8320EFCC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320efb8
	if (ctx.cr0.eq) goto loc_8320EFB8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-20316
	ctx.r4.s64 = ctx.r11.s64 + -20316;
	// b 0x8320efc0
	goto loc_8320EFC0;
loc_8320EFB8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,23280
	ctx.r4.s64 = ctx.r11.s64 + 23280;
loc_8320EFC0:
	// bl 0x8320d798
	ctx.lr = 0x8320EFC4;
	sub_8320D798(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_8320EFCC:
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

__attribute__((alias("__imp__sub_8320EFE0"))) PPC_WEAK_FUNC(sub_8320EFE0);
PPC_FUNC_IMPL(__imp__sub_8320EFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x8320EFE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// bl 0x8320d850
	ctx.lr = 0x8320F000;
	sub_8320D850(ctx, base);
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_8320F008:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// srawi r11,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8320f0c0
	if (ctx.cr6.eq) goto loc_8320F0C0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8320F02C;
	sub_8320CE20(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8320f0b4
	if (ctx.cr6.gt) goto loc_8320F0B4;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,-7448
	ctx.r12.s64 = ctx.r12.s64 + -7448;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// addi r12,r12,-4000
	ctx.r12.s64 = ctx.r12.s64 + -4000;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8320F060;
	case 1:
		goto loc_8320F060;
	case 2:
		goto loc_8320F080;
	case 3:
		goto loc_8320F080;
	case 4:
		goto loc_8320F080;
	case 5:
		goto loc_8320F080;
	case 6:
		goto loc_8320F088;
	case 7:
		goto loc_8320F088;
	case 8:
		goto loc_8320F088;
	case 9:
		goto loc_8320F0B4;
	case 10:
		goto loc_8320F088;
	default:
		__builtin_unreachable();
	}
loc_8320F060:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8320F070;
	sub_8320CE20(ctx, base);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x8320f0b4
	if (!ctx.cr6.eq) goto loc_8320F0B4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8320f0b4
	goto loc_8320F0B4;
loc_8320F080:
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8320f0b4
	goto loc_8320F0B4;
loc_8320F088:
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8320F098;
	sub_8320CE20(ctx, base);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8320F0B4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// bne 0x8320f008
	if (!ctx.cr0.eq) goto loc_8320F008;
loc_8320F0C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320F0C8"))) PPC_WEAK_FUNC(sub_8320F0C8);
PPC_FUNC_IMPL(__imp__sub_8320F0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x8320F0D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8320f124
	if (!ctx.cr6.eq) goto loc_8320F124;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320f10c
	if (ctx.cr0.eq) goto loc_8320F10C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r5,r11,-6648
	ctx.r5.s64 = ctx.r11.s64 + -6648;
	// b 0x8320f114
	goto loc_8320F114;
loc_8320F10C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r5,r11,-6652
	ctx.r5.s64 = ctx.r11.s64 + -6652;
loc_8320F114:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6792
	ctx.r4.s64 = ctx.r11.s64 + 6792;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F124;
	sub_8320D7F0(ctx, base);
loc_8320F124:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320f614
	if (ctx.cr0.eq) goto loc_8320F614;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8320f600
	if (!ctx.cr6.gt) goto loc_8320F600;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8320f15c
	if (!ctx.cr6.gt) goto loc_8320F15C;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x8320f600
	if (!ctx.cr6.gt) goto loc_8320F600;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// ble cr6,0x8320f15c
	if (!ctx.cr6.gt) goto loc_8320F15C;
	// addi r10,r11,-24
	ctx.r10.s64 = ctx.r11.s64 + -24;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8320f600
	if (ctx.cr6.gt) goto loc_8320F600;
loc_8320F15C:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,-6668
	ctx.r4.s64 = ctx.r10.s64 + -6668;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bgt cr6,0x8320f224
	if (ctx.cr6.gt) goto loc_8320F224;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,-7432
	ctx.r12.s64 = ctx.r12.s64 + -7432;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// addi r12,r12,-3688
	ctx.r12.s64 = ctx.r12.s64 + -3688;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8320F198;
	case 1:
		goto loc_8320F1A4;
	case 2:
		goto loc_8320F1B0;
	case 3:
		goto loc_8320F1BC;
	case 4:
		goto loc_8320F224;
	case 5:
		goto loc_8320F224;
	case 6:
		goto loc_8320F224;
	case 7:
		goto loc_8320F224;
	case 8:
		goto loc_8320F224;
	case 9:
		goto loc_8320F224;
	case 10:
		goto loc_8320F224;
	case 11:
		goto loc_8320F224;
	case 12:
		goto loc_8320F224;
	case 13:
		goto loc_8320F224;
	case 14:
		goto loc_8320F224;
	case 15:
		goto loc_8320F1C8;
	case 16:
		goto loc_8320F1D4;
	case 17:
		goto loc_8320F1E0;
	case 18:
		goto loc_8320F1EC;
	case 19:
		goto loc_8320F224;
	case 20:
		goto loc_8320F224;
	case 21:
		goto loc_8320F224;
	case 22:
		goto loc_8320F224;
	case 23:
		goto loc_8320F1F8;
	case 24:
		goto loc_8320F204;
	case 25:
		goto loc_8320F210;
	case 26:
		goto loc_8320F21C;
	default:
		__builtin_unreachable();
	}
loc_8320F198:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-6676
	ctx.r4.s64 = ctx.r11.s64 + -6676;
	// b 0x8320f224
	goto loc_8320F224;
loc_8320F1A4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-6692
	ctx.r4.s64 = ctx.r11.s64 + -6692;
	// b 0x8320f224
	goto loc_8320F224;
loc_8320F1B0:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-6708
	ctx.r4.s64 = ctx.r11.s64 + -6708;
	// b 0x8320f224
	goto loc_8320F224;
loc_8320F1BC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-6728
	ctx.r4.s64 = ctx.r11.s64 + -6728;
	// b 0x8320f224
	goto loc_8320F224;
loc_8320F1C8:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-6752
	ctx.r4.s64 = ctx.r11.s64 + -6752;
	// b 0x8320f224
	goto loc_8320F224;
loc_8320F1D4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-6768
	ctx.r4.s64 = ctx.r11.s64 + -6768;
	// b 0x8320f224
	goto loc_8320F224;
loc_8320F1E0:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-6780
	ctx.r4.s64 = ctx.r11.s64 + -6780;
	// b 0x8320f224
	goto loc_8320F224;
loc_8320F1EC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-6792
	ctx.r4.s64 = ctx.r11.s64 + -6792;
	// b 0x8320f224
	goto loc_8320F224;
loc_8320F1F8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9552
	ctx.r4.s64 = ctx.r11.s64 + -9552;
	// b 0x8320f224
	goto loc_8320F224;
loc_8320F204:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9568
	ctx.r4.s64 = ctx.r11.s64 + -9568;
	// b 0x8320f224
	goto loc_8320F224;
loc_8320F210:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9584
	ctx.r4.s64 = ctx.r11.s64 + -9584;
	// b 0x8320f224
	goto loc_8320F224;
loc_8320F21C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-6812
	ctx.r4.s64 = ctx.r11.s64 + -6812;
loc_8320F224:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320e0a8
	ctx.lr = 0x8320F22C;
	sub_8320E0A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F23C;
	sub_8320D7F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// beq 0x8320f25c
	if (ctx.cr0.eq) goto loc_8320F25C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7460
	ctx.r4.s64 = ctx.r11.s64 + -7460;
	// b 0x8320f264
	goto loc_8320F264;
loc_8320F25C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7464
	ctx.r4.s64 = ctx.r11.s64 + -7464;
loc_8320F264:
	// bl 0x8320d7f0
	ctx.lr = 0x8320F268;
	sub_8320D7F0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,22368
	ctx.r27.s64 = ctx.r11.s64 + 22368;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F27C;
	sub_8320D7F0(ctx, base);
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r29,r11,-9464
	ctx.r29.s64 = ctx.r11.s64 + -9464;
	// addi r28,r10,-22340
	ctx.r28.s64 = ctx.r10.s64 + -22340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F2A8;
	sub_8320D7F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F2C4;
	sub_8320D7F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F2E0;
	sub_8320D7F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F2FC;
	sub_8320D7F0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,32256
	ctx.r4.s64 = ctx.r11.s64 + 32256;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F30C;
	sub_8320D7F0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r11,28,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x80;
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x8320e688
	ctx.lr = 0x8320F344;
	sub_8320E688(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F350;
	sub_8320D7F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F36C;
	sub_8320D7F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F388;
	sub_8320D7F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// beq cr6,0x8320f3b0
	if (ctx.cr6.eq) goto loc_8320F3B0;
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F3B0;
	sub_8320D7F0(ctx, base);
loc_8320F3B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-6820
	ctx.r4.s64 = ctx.r10.s64 + -6820;
	// rlwinm r5,r11,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F3C8;
	sub_8320D7F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320f3e4
	if (ctx.cr0.eq) goto loc_8320F3E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6856
	ctx.r4.s64 = ctx.r11.s64 + -6856;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F3E4;
	sub_8320D7F0(ctx, base);
loc_8320F3E4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,20,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8320f410
	if (ctx.cr6.eq) goto loc_8320F410;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1176
	ctx.r10.s64 = ctx.r29.s64 + 1176;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-6872
	ctx.r4.s64 = ctx.r9.s64 + -6872;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8320d7f0
	ctx.lr = 0x8320F410;
	sub_8320D7F0(ctx, base);
loc_8320F410:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,18,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8320f43c
	if (ctx.cr6.eq) goto loc_8320F43C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1192
	ctx.r10.s64 = ctx.r29.s64 + 1192;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-6888
	ctx.r4.s64 = ctx.r9.s64 + -6888;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8320d7f0
	ctx.lr = 0x8320F43C;
	sub_8320D7F0(ctx, base);
loc_8320F43C:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8320f468
	if (ctx.cr6.eq) goto loc_8320F468;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1208
	ctx.r10.s64 = ctx.r29.s64 + 1208;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-6904
	ctx.r4.s64 = ctx.r9.s64 + -6904;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8320d7f0
	ctx.lr = 0x8320F468;
	sub_8320D7F0(ctx, base);
loc_8320F468:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,14,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8320f494
	if (ctx.cr6.eq) goto loc_8320F494;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1224
	ctx.r10.s64 = ctx.r29.s64 + 1224;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-6924
	ctx.r4.s64 = ctx.r9.s64 + -6924;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8320d7f0
	ctx.lr = 0x8320F494;
	sub_8320D7F0(ctx, base);
loc_8320F494:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,11,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8320f4c0
	if (ctx.cr6.eq) goto loc_8320F4C0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1256
	ctx.r10.s64 = ctx.r29.s64 + 1256;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,12156
	ctx.r4.s64 = ctx.r9.s64 + 12156;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8320d7f0
	ctx.lr = 0x8320F4C0;
	sub_8320D7F0(ctx, base);
loc_8320F4C0:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8320f4ec
	if (ctx.cr6.eq) goto loc_8320F4EC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1288
	ctx.r10.s64 = ctx.r29.s64 + 1288;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-6944
	ctx.r4.s64 = ctx.r9.s64 + -6944;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8320d7f0
	ctx.lr = 0x8320F4EC;
	sub_8320D7F0(ctx, base);
loc_8320F4EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8320f518
	if (ctx.cr6.eq) goto loc_8320F518;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1304
	ctx.r10.s64 = ctx.r29.s64 + 1304;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-6964
	ctx.r4.s64 = ctx.r9.s64 + -6964;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8320d7f0
	ctx.lr = 0x8320F518;
	sub_8320D7F0(ctx, base);
loc_8320F518:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r5,r11,4,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8320f534
	if (ctx.cr0.eq) goto loc_8320F534;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6984
	ctx.r4.s64 = ctx.r11.s64 + -6984;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F534;
	sub_8320D7F0(ctx, base);
loc_8320F534:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,3,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320f55c
	if (ctx.cr0.eq) goto loc_8320F55C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1320
	ctx.r10.s64 = ctx.r29.s64 + 1320;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-7004
	ctx.r4.s64 = ctx.r9.s64 + -7004;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8320d7f0
	ctx.lr = 0x8320F55C;
	sub_8320D7F0(ctx, base);
loc_8320F55C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi. r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8320f578
	if (ctx.cr0.eq) goto loc_8320F578;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7032
	ctx.r4.s64 = ctx.r11.s64 + -7032;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F578;
	sub_8320D7F0(ctx, base);
loc_8320F578:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320f594
	if (ctx.cr0.eq) goto loc_8320F594;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7060
	ctx.r4.s64 = ctx.r11.s64 + -7060;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F594;
	sub_8320D7F0(ctx, base);
loc_8320F594:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r5,r11,30,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8320f5b0
	if (ctx.cr0.eq) goto loc_8320F5B0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7076
	ctx.r4.s64 = ctx.r11.s64 + -7076;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F5B0;
	sub_8320D7F0(ctx, base);
loc_8320F5B0:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// clrlwi. r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8320f5cc
	if (ctx.cr0.eq) goto loc_8320F5CC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7092
	ctx.r4.s64 = ctx.r11.s64 + -7092;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F5CC;
	sub_8320D7F0(ctx, base);
loc_8320F5CC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r5,r11,11,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8320f5e8
	if (ctx.cr0.eq) goto loc_8320F5E8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7108
	ctx.r4.s64 = ctx.r11.s64 + -7108;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F5E8;
	sub_8320D7F0(ctx, base);
loc_8320F5E8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r5,r11,6,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8320f9a0
	if (ctx.cr0.eq) goto loc_8320F9A0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7124
	ctx.r4.s64 = ctx.r11.s64 + -7124;
	// b 0x8320f998
	goto loc_8320F998;
loc_8320F600:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7148
	ctx.r4.s64 = ctx.r11.s64 + -7148;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F610;
	sub_8320D7F0(ctx, base);
	// b 0x8320f9a0
	goto loc_8320F9A0;
loc_8320F614:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9296
	ctx.r4.s64 = ctx.r11.s64 + -9296;
	// bl 0x8320e0a8
	ctx.lr = 0x8320F624;
	sub_8320E0A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12592
	ctx.r4.s64 = ctx.r11.s64 + -12592;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F634;
	sub_8320D7F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// beq 0x8320f654
	if (ctx.cr0.eq) goto loc_8320F654;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7460
	ctx.r4.s64 = ctx.r11.s64 + -7460;
	// b 0x8320f65c
	goto loc_8320F65C;
loc_8320F654:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7464
	ctx.r4.s64 = ctx.r11.s64 + -7464;
loc_8320F65C:
	// bl 0x8320d7f0
	ctx.lr = 0x8320F660;
	sub_8320D7F0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22368
	ctx.r4.s64 = ctx.r11.s64 + 22368;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F670;
	sub_8320D7F0(ctx, base);
	// lis r11,-31907
	ctx.r11.s64 = -2091057152;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r29,r11,-9464
	ctx.r29.s64 = ctx.r11.s64 + -9464;
	// addi r28,r10,-22340
	ctx.r28.s64 = ctx.r10.s64 + -22340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F69C;
	sub_8320D7F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F6B8;
	sub_8320D7F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F6D4;
	sub_8320D7F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F6F0;
	sub_8320D7F0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,32256
	ctx.r27.s64 = ctx.r11.s64 + 32256;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F704;
	sub_8320D7F0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r11,28,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x80;
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x8320e688
	ctx.lr = 0x8320F73C;
	sub_8320E688(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7152
	ctx.r4.s64 = ctx.r11.s64 + -7152;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F75C;
	sub_8320D7F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8320f790
	if (!ctx.cr0.eq) goto loc_8320F790;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r10,r10,-7884
	ctx.r10.s64 = ctx.r10.s64 + -7884;
	// rlwinm r8,r11,9,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xC;
	// addi r4,r9,-7164
	ctx.r4.s64 = ctx.r9.s64 + -7164;
	// rlwinm r5,r11,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x8320d7f0
	ctx.lr = 0x8320F790;
	sub_8320D7F0(ctx, base);
loc_8320F790:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r11,5768
	ctx.r26.s64 = ctx.r11.s64 + 5768;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F7A4;
	sub_8320D7F0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r25,r11,-18112
	ctx.r25.s64 = ctx.r11.s64 + -18112;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320f7cc
	if (ctx.cr0.eq) goto loc_8320F7CC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,-20292
	ctx.r5.s64 = ctx.r11.s64 + -20292;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F7CC;
	sub_8320D7F0(ctx, base);
loc_8320F7CC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r28,r11,-7176
	ctx.r28.s64 = ctx.r11.s64 + -7176;
	// bne 0x8320f830
	if (!ctx.cr0.eq) goto loc_8320F830;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ef80
	ctx.lr = 0x8320F7E8;
	sub_8320EF80(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F7F4;
	sub_8320D7F0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7204
	ctx.r4.s64 = ctx.r11.s64 + -7204;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r6,r11,24,9,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7FFFFF;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F810;
	sub_8320D7F0(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r29,1336
	ctx.r11.s64 = ctx.r29.s64 + 1336;
	// addi r4,r10,-7220
	ctx.r4.s64 = ctx.r10.s64 + -7220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// rlwinm r10,r10,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8320d7f0
	ctx.lr = 0x8320F830;
	sub_8320D7F0(ctx, base);
loc_8320F830:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ef80
	ctx.lr = 0x8320F838;
	sub_8320EF80(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F844;
	sub_8320D7F0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-26436
	ctx.r29.s64 = ctx.r11.s64 + -26436;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320f86c
	if (ctx.cr0.eq) goto loc_8320F86C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-7232
	ctx.r4.s64 = ctx.r11.s64 + -7232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F86C;
	sub_8320D7F0(ctx, base);
loc_8320F86C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7244
	ctx.r4.s64 = ctx.r11.s64 + -7244;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F87C;
	sub_8320D7F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320f898
	if (ctx.cr0.eq) goto loc_8320F898;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7268
	ctx.r4.s64 = ctx.r11.s64 + -7268;
	// b 0x8320f8a0
	goto loc_8320F8A0;
loc_8320F898:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7292
	ctx.r4.s64 = ctx.r11.s64 + -7292;
loc_8320F8A0:
	// bl 0x8320d7f0
	ctx.lr = 0x8320F8A4;
	sub_8320D7F0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F8B0;
	sub_8320D7F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ef80
	ctx.lr = 0x8320F8B8;
	sub_8320EF80(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F8C4;
	sub_8320D7F0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7304
	ctx.r4.s64 = ctx.r11.s64 + -7304;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F8D4;
	sub_8320D7F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320f8ec
	if (ctx.cr0.eq) goto loc_8320F8EC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8320f8f4
	goto loc_8320F8F4;
loc_8320F8EC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-26428
	ctx.r4.s64 = ctx.r11.s64 + -26428;
loc_8320F8F4:
	// bl 0x8320d7f0
	ctx.lr = 0x8320F8F8;
	sub_8320D7F0(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi. r5,r11,26
	ctx.r5.u64 = ctx.r11.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8320f914
	if (ctx.cr0.eq) goto loc_8320F914;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7320
	ctx.r4.s64 = ctx.r11.s64 + -7320;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F914;
	sub_8320D7F0(ctx, base);
loc_8320F914:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8320f980
	if (ctx.cr6.eq) goto loc_8320F980;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8320f980
	if (!ctx.cr0.eq) goto loc_8320F980;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F934;
	sub_8320D7F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ef80
	ctx.lr = 0x8320F93C;
	sub_8320EF80(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F948;
	sub_8320D7F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8320f974
	if (!ctx.cr0.eq) goto loc_8320F974;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r11,r11,5,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x7;
	// addi r4,r10,-7356
	ctx.r4.s64 = ctx.r10.s64 + -7356;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F970;
	sub_8320D7F0(ctx, base);
	// b 0x8320f980
	goto loc_8320F980;
loc_8320F974:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,-7372
	ctx.r4.s64 = ctx.r11.s64 + -7372;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F980;
	sub_8320D7F0(ctx, base);
loc_8320F980:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320f9a0
	if (ctx.cr0.eq) goto loc_8320F9A0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,-20300
	ctx.r5.s64 = ctx.r11.s64 + -20300;
loc_8320F998:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320F9A0;
	sub_8320D7F0(ctx, base);
loc_8320F9A0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320F9A8"))) PPC_WEAK_FUNC(sub_8320F9A8);
PPC_FUNC_IMPL(__imp__sub_8320F9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10bc
	ctx.lr = 0x8320F9B0;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x8320fba4
	if (ctx.cr6.eq) goto loc_8320FBA4;
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// lis r5,-32223
	ctx.r5.s64 = -2111766528;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lis r7,-31907
	ctx.r7.s64 = -2091057152;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r23,r3,-6556
	ctx.r23.s64 = ctx.r3.s64 + -6556;
	// addi r27,r4,-21168
	ctx.r27.s64 = ctx.r4.s64 + -21168;
	// addi r26,r5,-12392
	ctx.r26.s64 = ctx.r5.s64 + -12392;
	// addi r25,r6,-6640
	ctx.r25.s64 = ctx.r6.s64 + -6640;
	// addi r22,r7,-9328
	ctx.r22.s64 = ctx.r7.s64 + -9328;
	// addi r24,r8,-19816
	ctx.r24.s64 = ctx.r8.s64 + -19816;
	// addi r21,r9,-6652
	ctx.r21.s64 = ctx.r9.s64 + -6652;
	// addi r20,r10,-6648
	ctx.r20.s64 = ctx.r10.s64 + -6648;
	// addi r30,r11,12136
	ctx.r30.s64 = ctx.r11.s64 + 12136;
loc_8320FA18:
	// clrlwi r11,r17,31
	ctx.r11.u64 = ctx.r17.u32 & 0x1;
	// clrlwi r31,r18,31
	ctx.r31.u64 = ctx.r18.u32 & 0x1;
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// srawi r17,r17,2
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3) != 0);
	ctx.r17.s64 = ctx.r17.s32 >> 2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8320fa58
	if (!ctx.cr6.eq) goto loc_8320FA58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320ef80
	ctx.lr = 0x8320FA38;
	sub_8320EF80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320FA44;
	sub_8320D7F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320f0c8
	ctx.lr = 0x8320FA54;
	sub_8320F0C8(ctx, base);
	// b 0x8320fb98
	goto loc_8320FB98;
loc_8320FA58:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8320fa8c
	if (ctx.cr6.lt) goto loc_8320FA8C;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8320fa80
	if (ctx.cr6.eq) goto loc_8320FA80;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_8320FA80:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320FA8C;
	sub_8320D7F0(ctx, base);
loc_8320FA8C:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8320faac
	if (!ctx.cr0.eq) goto loc_8320FAAC;
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8320fab0
	if (ctx.cr6.eq) goto loc_8320FAB0;
loc_8320FAAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320FAB0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8320fad8
	if (!ctx.cr0.eq) goto loc_8320FAD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320ef80
	ctx.lr = 0x8320FAC0;
	sub_8320EF80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320FACC;
	sub_8320D7F0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320ead0
	ctx.lr = 0x8320FAD8;
	sub_8320EAD0(ctx, base);
loc_8320FAD8:
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r11,r11,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// blt cr6,0x8320fb14
	if (ctx.cr6.lt) goto loc_8320FB14;
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320fb98
	if (ctx.cr0.eq) goto loc_8320FB98;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1151
	ctx.r7.s64 = 1151;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8320FB10;
	sub_8320CF10(ctx, base);
	// b 0x8320fb98
	goto loc_8320FB98;
loc_8320FB14:
	// rlwinm. r10,r11,0,8,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8320fb3c
	if (!ctx.cr0.eq) goto loc_8320FB3C;
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// lis r9,5120
	ctx.r9.s64 = 335544320;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8320fb3c
	if (!ctx.cr6.eq) goto loc_8320FB3C;
	// rlwinm r11,r11,0,18,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F00;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8320fb40
	if (!ctx.cr6.eq) goto loc_8320FB40;
loc_8320FB3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320FB40:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8320fb98
	if (!ctx.cr0.eq) goto loc_8320FB98;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320ef80
	ctx.lr = 0x8320FB50;
	sub_8320EF80(ctx, base);
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8320fb70
	if (!ctx.cr0.eq) goto loc_8320FB70;
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8320fb74
	if (ctx.cr6.eq) goto loc_8320FB74;
loc_8320FB70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320FB74:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// beq 0x8320fb88
	if (ctx.cr0.eq) goto loc_8320FB88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8320FB88:
	// bl 0x8320d7f0
	ctx.lr = 0x8320FB8C;
	sub_8320D7F0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320eda8
	ctx.lr = 0x8320FB98;
	sub_8320EDA8(ctx, base);
loc_8320FB98:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x8320fa18
	if (!ctx.cr0.eq) goto loc_8320FA18;
loc_8320FBA4:
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82cb110c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320FBB0"))) PPC_WEAK_FUNC(sub_8320FBB0);
PPC_FUNC_IMPL(__imp__sub_8320FBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x8320FBB8;
	__savegprlr_14(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// not r10,r6
	ctx.r10.u64 = ~ctx.r6.u64;
	// stw r29,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r29.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// clrlwi r30,r10,31
	ctx.r30.u64 = ctx.r10.u32 & 0x1;
	// stw r28,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r28.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// bl 0x8320d850
	ctx.lr = 0x8320FBF4;
	sub_8320D850(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x8320efe0
	ctx.lr = 0x8320FC10;
	sub_8320EFE0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lis r23,-31907
	ctx.r23.s64 = -2091057152;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r20,-32247
	ctx.r20.s64 = -2113339392;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r19,-32247
	ctx.r19.s64 = -2113339392;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r7,r23,-7872
	ctx.r7.s64 = ctx.r23.s64 + -7872;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r20,-6112
	ctx.r6.s64 = ctx.r20.s64 + -6112;
	// stw r7,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r7.u32);
	// addi r11,r11,-6092
	ctx.r11.s64 = ctx.r11.s64 + -6092;
	// addi r5,r19,-6132
	ctx.r5.s64 = ctx.r19.s64 + -6132;
	// stw r6,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r6.u32);
	// lis r18,-32247
	ctx.r18.s64 = -2113339392;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// lis r17,-32247
	ctx.r17.s64 = -2113339392;
	// stw r5,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r5.u32);
	// lis r14,-32247
	ctx.r14.s64 = -2113339392;
	// addi r11,r8,-6076
	ctx.r11.s64 = ctx.r8.s64 + -6076;
	// addi r7,r18,-6148
	ctx.r7.s64 = ctx.r18.s64 + -6148;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// addi r6,r17,-6160
	ctx.r6.s64 = ctx.r17.s64 + -6160;
	// addi r5,r14,-6180
	ctx.r5.s64 = ctx.r14.s64 + -6180;
	// stw r7,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// addi r10,r10,-6068
	ctx.r10.s64 = ctx.r10.s64 + -6068;
	// stw r6,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r6.u32);
	// addi r9,r9,32256
	ctx.r9.s64 = ctx.r9.s64 + 32256;
	// stw r5,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r5.u32);
	// lis r22,-32247
	ctx.r22.s64 = -2113339392;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// lis r21,-32247
	ctx.r21.s64 = -2113339392;
	// lis r16,-32223
	ctx.r16.s64 = -2111766528;
	// lis r15,-32253
	ctx.r15.s64 = -2113732608;
	// lis r24,-32223
	ctx.r24.s64 = -2111766528;
	// lis r25,-32223
	ctx.r25.s64 = -2111766528;
	// lis r26,-32247
	ctx.r26.s64 = -2113339392;
	// lis r27,-32247
	ctx.r27.s64 = -2113339392;
	// lis r28,-32253
	ctx.r28.s64 = -2113732608;
	// lis r29,-32254
	ctx.r29.s64 = -2113798144;
	// lis r30,-32247
	ctx.r30.s64 = -2113339392;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r23,r22,-7532
	ctx.r23.s64 = ctx.r22.s64 + -7532;
	// addi r30,r30,-6224
	ctx.r30.s64 = ctx.r30.s64 + -6224;
	// addi r28,r28,-9644
	ctx.r28.s64 = ctx.r28.s64 + -9644;
	// addi r3,r3,-9632
	ctx.r3.s64 = ctx.r3.s64 + -9632;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r4,-6236
	ctx.r4.s64 = ctx.r4.s64 + -6236;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// addi r5,r5,-6260
	ctx.r5.s64 = ctx.r5.s64 + -6260;
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// addi r6,r6,-6280
	ctx.r6.s64 = ctx.r6.s64 + -6280;
	// stw r4,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r4.u32);
	// addi r7,r7,-6300
	ctx.r7.s64 = ctx.r7.s64 + -6300;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// addi r8,r8,-6320
	ctx.r8.s64 = ctx.r8.s64 + -6320;
	// stw r6,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r6.u32);
	// addi r9,r9,-6344
	ctx.r9.s64 = ctx.r9.s64 + -6344;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// addi r17,r10,-6356
	ctx.r17.s64 = ctx.r10.s64 + -6356;
	// stw r8,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// addi r19,r15,-9652
	ctx.r19.s64 = ctx.r15.s64 + -9652;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// addi r10,r24,-12392
	ctx.r10.s64 = ctx.r24.s64 + -12392;
	// addi r14,r26,-6196
	ctx.r14.s64 = ctx.r26.s64 + -6196;
	// addi r15,r11,-6376
	ctx.r15.s64 = ctx.r11.s64 + -6376;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// addi r27,r27,-6204
	ctx.r27.s64 = ctx.r27.s64 + -6204;
	// addi r29,r29,8360
	ctx.r29.s64 = ctx.r29.s64 + 8360;
	// addi r30,r25,-12384
	ctx.r30.s64 = ctx.r25.s64 + -12384;
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// lis r26,-32247
	ctx.r26.s64 = -2113339392;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// lis r28,-32247
	ctx.r28.s64 = -2113339392;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r27,-32247
	ctx.r27.s64 = -2113339392;
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// lis r30,-32254
	ctx.r30.s64 = -2113798144;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r26,r26,-6400
	ctx.r26.s64 = ctx.r26.s64 + -6400;
	// addi r28,r28,-6424
	ctx.r28.s64 = ctx.r28.s64 + -6424;
	// addi r3,r3,-6436
	ctx.r3.s64 = ctx.r3.s64 + -6436;
	// stw r26,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r26.u32);
	// addi r4,r4,-6444
	ctx.r4.s64 = ctx.r4.s64 + -6444;
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// addi r5,r5,-6456
	ctx.r5.s64 = ctx.r5.s64 + -6456;
	// stw r3,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// addi r6,r6,-9616
	ctx.r6.s64 = ctx.r6.s64 + -9616;
	// stw r4,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// addi r7,r7,-6512
	ctx.r7.s64 = ctx.r7.s64 + -6512;
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// addi r8,r8,-6524
	ctx.r8.s64 = ctx.r8.s64 + -6524;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// addi r9,r9,8496
	ctx.r9.s64 = ctx.r9.s64 + 8496;
	// stw r7,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r7.u32);
	// addi r11,r11,-6532
	ctx.r11.s64 = ctx.r11.s64 + -6532;
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// addi r20,r16,-18112
	ctx.r20.s64 = ctx.r16.s64 + -18112;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r21,r21,-6192
	ctx.r21.s64 = ctx.r21.s64 + -6192;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r18,r27,-6548
	ctx.r18.s64 = ctx.r27.s64 + -6548;
	// addi r22,r29,-12592
	ctx.r22.s64 = ctx.r29.s64 + -12592;
	// addi r16,r30,8364
	ctx.r16.s64 = ctx.r30.s64 + 8364;
	// addi r24,r10,12136
	ctx.r24.s64 = ctx.r10.s64 + 12136;
loc_8320FE18:
	// lwz r30,460(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8320fe28
	goto loc_8320FE28;
loc_8320FE24:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_8320FE28:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r28,136(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x83210060
	if (ctx.cr6.eq) goto loc_83210060;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8320FE54;
	sub_8320CE20(ctx, base);
	// lbz r25,113(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq 0x8320fec8
	if (ctx.cr0.eq) goto loc_8320FEC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ef80
	ctx.lr = 0x8320FE74;
	sub_8320EF80(ctx, base);
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r11,r27,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r27,27
	ctx.r10.u64 = ctx.r27.u32 & 0x1F;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// slw r10,r26,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320fecc
	if (ctx.cr0.eq) goto loc_8320FECC;
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r11.s64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320FEBC;
	sub_8320D7F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ef80
	ctx.lr = 0x8320FEC4;
	sub_8320EF80(ctx, base);
	// b 0x8320fecc
	goto loc_8320FECC;
loc_8320FEC8:
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_8320FECC:
	// cmplwi cr6,r29,12
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 12, ctx.xer);
	// bgt cr6,0x832105f4
	if (ctx.cr6.gt) goto loc_832105F4;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,-7400
	ctx.r12.s64 = ctx.r12.s64 + -7400;
	// rlwinm r0,r29,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// addi r12,r12,-260
	ctx.r12.s64 = ctx.r12.s64 + -260;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r29.u64) {
	case 0:
		goto loc_8320FEFC;
	case 1:
		goto loc_8320FF58;
	case 2:
		goto loc_8320FF2C;
	case 3:
		goto loc_83210098;
	case 4:
		goto loc_832100C4;
	case 5:
		goto loc_832100E0;
	case 6:
		goto loc_832100FC;
	case 7:
		goto loc_83210118;
	case 8:
		goto loc_83210208;
	case 9:
		goto loc_8321034C;
	case 10:
		goto loc_832103A8;
	case 11:
		goto loc_832103C4;
	case 12:
		goto loc_8321051C;
	default:
		__builtin_unreachable();
	}
loc_8320FEFC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83210048
	if (ctx.cr6.eq) goto loc_83210048;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83210048
	if (ctx.cr0.eq) goto loc_83210048;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320FF1C;
	sub_8320D7F0(ctx, base);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_8320FF20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320e118
	ctx.lr = 0x8320FF28;
	sub_8320E118(ctx, base);
	// b 0x83210048
	goto loc_83210048;
loc_8320FF2C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8320ff58
	if (ctx.cr6.eq) goto loc_8320FF58;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320ff58
	if (ctx.cr0.eq) goto loc_8320FF58;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8320FF4C;
	sub_8320D7F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x8320d7f0
	ctx.lr = 0x8320FF58;
	sub_8320D7F0(ctx, base);
loc_8320FF58:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8320FF68;
	sub_8320CE20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x8320ff78
	if (!ctx.cr6.eq) goto loc_8320FF78;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
loc_8320FF78:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8320FF88;
	sub_8320CE20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8320FF9C;
	sub_8320CE20(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8320FFB0;
	sub_8320CE20(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8320FFC4;
	sub_8320CE20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8320FFD4;
	sub_8320CE20(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8321001c
	if (ctx.cr6.eq) goto loc_8321001C;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8321001c
	if (!ctx.cr6.gt) goto loc_8321001C;
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320f9a8
	ctx.lr = 0x83210010;
	sub_8320F9A8(ctx, base);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
loc_8321001C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83210044
	if (ctx.cr6.eq) goto loc_83210044;
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r5,468(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mulli r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 * 3;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x83210044
	if (!ctx.cr6.gt) goto loc_83210044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x8320d7f0
	ctx.lr = 0x83210044;
	sub_8320D7F0(ctx, base);
loc_83210044:
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_83210048:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,6
	ctx.r30.s64 = ctx.r30.s64 + 6;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8320fe24
	if (!ctx.cr0.eq) goto loc_8320FE24;
loc_83210060:
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// bne 0x8320fe18
	if (!ctx.cr0.eq) goto loc_8320FE18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ef80
	ctx.lr = 0x8321008C;
	sub_8320EF80(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
loc_83210098:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832100b8
	if (ctx.cr6.eq) goto loc_832100B8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x832100AC;
	sub_8320D7F0(ctx, base);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_832100B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320e118
	ctx.lr = 0x832100B8;
	sub_8320E118(ctx, base);
loc_832100B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// b 0x83210048
	goto loc_83210048;
loc_832100C4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832100b8
	if (ctx.cr6.eq) goto loc_832100B8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x832100D8;
	sub_8320D7F0(ctx, base);
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// b 0x832100b0
	goto loc_832100B0;
loc_832100E0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832100b8
	if (ctx.cr6.eq) goto loc_832100B8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x832100F4;
	sub_8320D7F0(ctx, base);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// b 0x832100b0
	goto loc_832100B0;
loc_832100FC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x832100b8
	if (ctx.cr6.eq) goto loc_832100B8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x83210110;
	sub_8320D7F0(ctx, base);
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// b 0x832100b0
	goto loc_832100B0;
loc_83210118:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83210048
	if (ctx.cr6.eq) goto loc_83210048;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8321012C;
	sub_8320D7F0(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320e118
	ctx.lr = 0x83210138;
	sub_8320E118(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x83210144;
	sub_8320D7F0(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x83210154;
	sub_8320CE20(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// clrlwi r6,r3,31
	ctx.r6.u64 = ctx.r3.u32 & 0x1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8321016C;
	sub_8320D7F0(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8321017C;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83210194
	if (ctx.cr0.eq) goto loc_83210194;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x83210194;
	sub_8320D7F0(ctx, base);
loc_83210194:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x832101A4;
	sub_8320CE20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x832101B4;
	sub_8320D7F0(ctx, base);
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x832101C4;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832101dc
	if (ctx.cr0.eq) goto loc_832101DC;
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
loc_832101D0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x832101DC;
	sub_8320D7F0(ctx, base);
loc_832101DC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x832101EC;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83210048
	if (ctx.cr0.eq) goto loc_83210048;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
loc_832101F8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_832101FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x83210204;
	sub_8320D7F0(ctx, base);
	// b 0x83210048
	goto loc_83210048;
loc_83210208:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83210048
	if (ctx.cr6.eq) goto loc_83210048;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8321021C;
	sub_8320D7F0(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320e118
	ctx.lr = 0x83210228;
	sub_8320E118(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x83210234;
	sub_8320D7F0(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x83210244;
	sub_8320CE20(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// clrlwi r6,r3,31
	ctx.r6.u64 = ctx.r3.u32 & 0x1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x8321025C;
	sub_8320D7F0(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8321026C;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83210284
	if (ctx.cr0.eq) goto loc_83210284;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x83210284;
	sub_8320D7F0(ctx, base);
loc_83210284:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x83210294;
	sub_8320CE20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x832102A4;
	sub_8320D7F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x832102B4;
	sub_8320CE20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x8320d7f0
	ctx.lr = 0x832102C4;
	sub_8320D7F0(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x832102D4;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832102ec
	if (ctx.cr0.eq) goto loc_832102EC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x832102EC;
	sub_8320D7F0(ctx, base);
loc_832102EC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x832102FC;
	sub_8320CE20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x8320d7f0
	ctx.lr = 0x8321030C;
	sub_8320D7F0(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8321031C;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83210334
	if (ctx.cr0.eq) goto loc_83210334;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x83210334;
	sub_8320D7F0(ctx, base);
loc_83210334:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x83210344;
	sub_8320CE20(ctx, base);
	// lwz r4,260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// b 0x832101d0
	goto loc_832101D0;
loc_8321034C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83210048
	if (ctx.cr6.eq) goto loc_83210048;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x83210364;
	sub_8320CE20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x83210374;
	sub_8320D7F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x8320e118
	ctx.lr = 0x83210380;
	sub_8320E118(ctx, base);
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x8320d7f0
	ctx.lr = 0x832103A4;
	sub_8320D7F0(ctx, base);
	// b 0x83210048
	goto loc_83210048;
loc_832103A8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83210048
	if (ctx.cr6.eq) goto loc_83210048;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x832103BC;
	sub_8320D7F0(ctx, base);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// b 0x8320ff20
	goto loc_8320FF20;
loc_832103C4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83210048
	if (ctx.cr6.eq) goto loc_83210048;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x832103D8;
	sub_8320D7F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8320ce20
	ctx.lr = 0x832103EC;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832103f8
	if (ctx.cr0.eq) goto loc_832103F8;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_832103F8:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x83210414
	if (ctx.cr0.eq) goto loc_83210414;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8320e118
	ctx.lr = 0x8321040C;
	sub_8320E118(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x83210478
	goto loc_83210478;
loc_83210414:
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x8320e118
	ctx.lr = 0x8321041C;
	sub_8320E118(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x83210428;
	sub_8320D7F0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x83210438;
	sub_8320CE20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x83210448;
	sub_8320D7F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x83210458;
	sub_8320CE20(ctx, base);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83210468
	if (!ctx.cr0.eq) goto loc_83210468;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_83210468:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8320d7f0
	ctx.lr = 0x83210474;
	sub_8320D7F0(ctx, base);
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
loc_83210478:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x83210480;
	sub_8320D7F0(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x83210490;
	sub_8320CE20(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// clrlwi r6,r3,31
	ctx.r6.u64 = ctx.r3.u32 & 0x1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x832104A8;
	sub_8320D7F0(ctx, base);
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x832104B8;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832104d0
	if (ctx.cr0.eq) goto loc_832104D0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x832104D0;
	sub_8320D7F0(ctx, base);
loc_832104D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832104fc
	if (ctx.cr0.eq) goto loc_832104FC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x832104EC;
	sub_8320CE20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x8320d7f0
	ctx.lr = 0x832104FC;
	sub_8320D7F0(ctx, base);
loc_832104FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8321050C;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83210048
	if (ctx.cr0.eq) goto loc_83210048;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// b 0x832101f8
	goto loc_832101F8;
loc_8321051C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83210048
	if (ctx.cr6.eq) goto loc_83210048;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x83210530;
	sub_8320D7F0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320e118
	ctx.lr = 0x8321053C;
	sub_8320E118(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x83210548;
	sub_8320D7F0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x83210558;
	sub_8320CE20(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x8320d7f0
	ctx.lr = 0x83210584;
	sub_8320D7F0(ctx, base);
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x832105ac
	if (!ctx.cr6.eq) goto loc_832105AC;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x8321059C;
	sub_8320CE20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x8320d7f0
	ctx.lr = 0x832105AC;
	sub_8320D7F0(ctx, base);
loc_832105AC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x832105BC;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x832105d4
	if (ctx.cr0.eq) goto loc_832105D4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,248(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x832105D4;
	sub_8320D7F0(ctx, base);
loc_832105D4:
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ce20
	ctx.lr = 0x832105E4;
	sub_8320CE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83210048
	if (ctx.cr0.eq) goto loc_83210048;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// b 0x832101f8
	goto loc_832101F8;
loc_832105F4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83210048
	if (ctx.cr6.eq) goto loc_83210048;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320d7f0
	ctx.lr = 0x83210608;
	sub_8320D7F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x8320e118
	ctx.lr = 0x83210614;
	sub_8320E118(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x832101fc
	goto loc_832101FC;
}

__attribute__((alias("__imp__sub_83210620"))) PPC_WEAK_FUNC(sub_83210620);
PPC_FUNC_IMPL(__imp__sub_83210620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83210628;
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
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,-6000
	ctx.r29.s64 = ctx.r10.s64 + -6000;
	// bne cr6,0x83210674
	if (!ctx.cr6.eq) goto loc_83210674;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-6012
	ctx.r5.s64 = ctx.r11.s64 + -6012;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,265
	ctx.r7.s64 = 265;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83210674;
	sub_8320CF10(ctx, base);
loc_83210674:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83210698
	if (!ctx.cr6.eq) goto loc_83210698;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-6028
	ctx.r5.s64 = ctx.r11.s64 + -6028;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,266
	ctx.r7.s64 = 266;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83210698;
	sub_8320CF10(ctx, base);
loc_83210698:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832106c8
	if (!ctx.cr6.eq) goto loc_832106C8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-6048
	ctx.r5.s64 = ctx.r11.s64 + -6048;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,267
	ctx.r7.s64 = 267;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832106BC;
	sub_8320CF10(ctx, base);
loc_832106BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832106C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
loc_832106C8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x832106bc
	if (ctx.cr6.eq) goto loc_832106BC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832106bc
	if (ctx.cr6.eq) goto loc_832106BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83216a78
	ctx.lr = 0x832106E0;
	sub_83216A78(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83218400
	ctx.lr = 0x832106F0;
	sub_83218400(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x832106c0
	if (!ctx.cr0.eq) goto loc_832106C0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x832106c0
	goto loc_832106C0;
}

__attribute__((alias("__imp__sub_83210704"))) PPC_WEAK_FUNC(sub_83210704);
PPC_FUNC_IMPL(__imp__sub_83210704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83210708"))) PPC_WEAK_FUNC(sub_83210708);
PPC_FUNC_IMPL(__imp__sub_83210708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83210710;
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,-6000
	ctx.r29.s64 = ctx.r10.s64 + -6000;
	// bne cr6,0x83210754
	if (!ctx.cr6.eq) goto loc_83210754;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-6012
	ctx.r5.s64 = ctx.r11.s64 + -6012;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,347
	ctx.r7.s64 = 347;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83210754;
	sub_8320CF10(ctx, base);
loc_83210754:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x83210778
	if (!ctx.cr6.eq) goto loc_83210778;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5908
	ctx.r5.s64 = ctx.r11.s64 + -5908;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,348
	ctx.r7.s64 = 348;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83210778;
	sub_8320CF10(ctx, base);
loc_83210778:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83216a78
	ctx.lr = 0x83210780;
	sub_83216A78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832107a4
	if (!ctx.cr0.eq) goto loc_832107A4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5912
	ctx.r5.s64 = ctx.r11.s64 + -5912;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,352
	ctx.r7.s64 = 352;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832107A4;
	sub_8320CF10(ctx, base);
loc_832107A4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217f38
	ctx.lr = 0x832107B0;
	sub_83217F38(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217eb8
	ctx.lr = 0x832107C0;
	sub_83217EB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832107C8"))) PPC_WEAK_FUNC(sub_832107C8);
PPC_FUNC_IMPL(__imp__sub_832107C8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8321080c
	if (!ctx.cr6.eq) goto loc_8321080C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-6000
	ctx.r6.s64 = ctx.r11.s64 + -6000;
	// addi r5,r10,-6012
	ctx.r5.s64 = ctx.r10.s64 + -6012;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,391
	ctx.r7.s64 = 391;
	// bl 0x8320cf10
	ctx.lr = 0x83210804;
	sub_8320CF10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8321081c
	goto loc_8321081C;
loc_8321080C:
	// bl 0x83216a78
	ctx.lr = 0x83210810;
	sub_83216A78(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83217d78
	ctx.lr = 0x8321081C;
	sub_83217D78(ctx, base);
loc_8321081C:
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

__attribute__((alias("__imp__sub_83210830"))) PPC_WEAK_FUNC(sub_83210830);
PPC_FUNC_IMPL(__imp__sub_83210830) {
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
	// bne cr6,0x8321086c
	if (!ctx.cr6.eq) goto loc_8321086C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-20824
	ctx.r6.s64 = ctx.r11.s64 + -20824;
	// addi r5,r10,-20840
	ctx.r5.s64 = ctx.r10.s64 + -20840;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,241
	ctx.r7.s64 = 241;
	// bl 0x8320cf10
	ctx.lr = 0x8321086C;
	sub_8320CF10(ctx, base);
loc_8321086C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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

__attribute__((alias("__imp__sub_83210884"))) PPC_WEAK_FUNC(sub_83210884);
PPC_FUNC_IMPL(__imp__sub_83210884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83210888"))) PPC_WEAK_FUNC(sub_83210888);
PPC_FUNC_IMPL(__imp__sub_83210888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c0
	ctx.lr = 0x83210890;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83210830
	ctx.lr = 0x832108A4;
	sub_83210830(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832108b4
	if (!ctx.cr0.eq) goto loc_832108B4;
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x83210aa8
	goto loc_83210AA8;
loc_832108B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217580
	ctx.lr = 0x832108BC;
	sub_83217580(ctx, base);
	// bl 0x83216a78
	ctx.lr = 0x832108C0;
	sub_83216A78(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217580
	ctx.lr = 0x832108CC;
	sub_83217580(ctx, base);
	// bl 0x83216a90
	ctx.lr = 0x832108D0;
	sub_83216A90(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217580
	ctx.lr = 0x832108DC;
	sub_83217580(ctx, base);
	// bl 0x83216a80
	ctx.lr = 0x832108E0;
	sub_83216A80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217580
	ctx.lr = 0x832108EC;
	sub_83217580(ctx, base);
	// bl 0x83216ab0
	ctx.lr = 0x832108F0;
	sub_83216AB0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217580
	ctx.lr = 0x832108FC;
	sub_83217580(ctx, base);
	// bl 0x83216ab8
	ctx.lr = 0x83210900;
	sub_83216AB8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217580
	ctx.lr = 0x8321090C;
	sub_83217580(ctx, base);
	// bl 0x83216ac0
	ctx.lr = 0x83210910;
	sub_83216AC0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217580
	ctx.lr = 0x8321091C;
	sub_83217580(ctx, base);
	// bl 0x83216aa8
	ctx.lr = 0x83210920;
	sub_83216AA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217580
	ctx.lr = 0x8321092C;
	sub_83217580(ctx, base);
	// bl 0x83216aa0
	ctx.lr = 0x83210930;
	sub_83216AA0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832ceb20
	ctx.lr = 0x83210940;
	sub_832CEB20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83210950
	if (!ctx.cr0.eq) goto loc_83210950;
loc_83210948:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83210aa8
	goto loc_83210AA8;
loc_83210950:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832ceb20
	ctx.lr = 0x8321095C;
	sub_832CEB20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83210948
	if (!ctx.cr0.eq) goto loc_83210948;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83218098
	ctx.lr = 0x83210970;
	sub_83218098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832139f8
	ctx.lr = 0x83210978;
	sub_832139F8(ctx, base);
	// b 0x832109a0
	goto loc_832109A0;
loc_8321097C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214130
	ctx.lr = 0x83210984;
	sub_83214130(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x83215a08
	ctx.lr = 0x8321098C;
	sub_83215A08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83210948
	if (!ctx.cr0.eq) goto loc_83210948;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214088
	ctx.lr = 0x832109A0;
	sub_83214088(ctx, base);
loc_832109A0:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8321097c
	if (!ctx.cr0.eq) goto loc_8321097C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832ce8a8
	ctx.lr = 0x832109B4;
	sub_832CE8A8(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r29,r10,-21168
	ctx.r29.s64 = ctx.r10.s64 + -21168;
	// addi r25,r9,-5884
	ctx.r25.s64 = ctx.r9.s64 + -5884;
	// addi r26,r11,-6000
	ctx.r26.s64 = ctx.r11.s64 + -6000;
	// beq 0x832109ec
	if (ctx.cr0.eq) goto loc_832109EC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,520
	ctx.r7.s64 = 520;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832109EC;
	sub_8320CF10(ctx, base);
loc_832109EC:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x832146d8
	ctx.lr = 0x83210A10;
	sub_832146D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83210a3c
	if (!ctx.cr0.eq) goto loc_83210A3C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5888
	ctx.r5.s64 = ctx.r11.s64 + -5888;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,531
	ctx.r7.s64 = 531;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83210A34;
	sub_8320CF10(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x83210aa8
	goto loc_83210AA8;
loc_83210A3C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214c60
	ctx.lr = 0x83210A48;
	sub_83214C60(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83218bb0
	ctx.lr = 0x83210A5C;
	sub_83218BB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x83210a74
	if (ctx.cr0.eq) goto loc_83210A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832148b0
	ctx.lr = 0x83210A6C;
	sub_832148B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83210aa8
	goto loc_83210AA8;
loc_83210A74:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83217fb8
	ctx.lr = 0x83210A84;
	sub_83217FB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x83210aa4
	if (ctx.cr0.eq) goto loc_83210AA4;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,580
	ctx.r7.s64 = 580;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83210AA4;
	sub_8320CF10(ctx, base);
loc_83210AA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83210AA8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82cb1110
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83210AB0"))) PPC_WEAK_FUNC(sub_83210AB0);
PPC_FUNC_IMPL(__imp__sub_83210AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83210AB8;
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
	// addi r28,r10,-6000
	ctx.r28.s64 = ctx.r10.s64 + -6000;
	// bne cr6,0x83210af8
	if (!ctx.cr6.eq) goto loc_83210AF8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5860
	ctx.r5.s64 = ctx.r11.s64 + -5860;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,619
	ctx.r7.s64 = 619;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83210AF8;
	sub_8320CF10(ctx, base);
loc_83210AF8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cf958
	ctx.lr = 0x83210B04;
	sub_832CF958(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83210b28
	if (!ctx.cr0.eq) goto loc_83210B28;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5864
	ctx.r5.s64 = ctx.r11.s64 + -5864;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,623
	ctx.r7.s64 = 623;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83210B28;
	sub_8320CF10(ctx, base);
loc_83210B28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ced60
	ctx.lr = 0x83210B30;
	sub_832CED60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217730
	ctx.lr = 0x83210B3C;
	sub_83217730(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83210B48"))) PPC_WEAK_FUNC(sub_83210B48);
PPC_FUNC_IMPL(__imp__sub_83210B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83210B50;
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
	// addi r29,r10,-6000
	ctx.r29.s64 = ctx.r10.s64 + -6000;
	// bne cr6,0x83210b8c
	if (!ctx.cr6.eq) goto loc_83210B8C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5800
	ctx.r5.s64 = ctx.r11.s64 + -5800;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,659
	ctx.r7.s64 = 659;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83210B8C;
	sub_8320CF10(ctx, base);
loc_83210B8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83210830
	ctx.lr = 0x83210B94;
	sub_83210830(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x83210bb8
	if (!ctx.cr0.eq) goto loc_83210BB8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5812
	ctx.r5.s64 = ctx.r11.s64 + -5812;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,663
	ctx.r7.s64 = 663;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83210BB8;
	sub_8320CF10(ctx, base);
loc_83210BB8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83217580
	ctx.lr = 0x83210BC0;
	sub_83217580(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83210be0
	if (!ctx.cr0.eq) goto loc_83210BE0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5852
	ctx.r5.s64 = ctx.r11.s64 + -5852;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,664
	ctx.r7.s64 = 664;
	// bl 0x8320cf10
	ctx.lr = 0x83210BE0;
	sub_8320CF10(ctx, base);
loc_83210BE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83217750
	ctx.lr = 0x83210BEC;
	sub_83217750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832cf0c0
	ctx.lr = 0x83210BF4;
	sub_832CF0C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83210C00"))) PPC_WEAK_FUNC(sub_83210C00);
PPC_FUNC_IMPL(__imp__sub_83210C00) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x83210c4c
	if (ctx.cr6.lt) goto loc_83210C4C;
	// beq cr6,0x83210c40
	if (ctx.cr6.eq) goto loc_83210C40;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x83210c34
	if (ctx.cr6.lt) goto loc_83210C34;
	// beq cr6,0x83210c4c
	if (ctx.cr6.eq) goto loc_83210C4C;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// blt cr6,0x83210c40
	if (ctx.cr6.lt) goto loc_83210C40;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_83210C34:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x832cf5d0
	sub_832CF5D0(ctx, base);
	return;
loc_83210C40:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x832cf250
	sub_832CF250(ctx, base);
	return;
loc_83210C4C:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x832d0100
	sub_832D0100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83210C58"))) PPC_WEAK_FUNC(sub_83210C58);
PPC_FUNC_IMPL(__imp__sub_83210C58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83210C5C"))) PPC_WEAK_FUNC(sub_83210C5C);
PPC_FUNC_IMPL(__imp__sub_83210C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83210C60"))) PPC_WEAK_FUNC(sub_83210C60);
PPC_FUNC_IMPL(__imp__sub_83210C60) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x83210c9c
	if (ctx.cr6.lt) goto loc_83210C9C;
	// beq cr6,0x83210c94
	if (ctx.cr6.eq) goto loc_83210C94;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x83210c8c
	if (ctx.cr6.lt) goto loc_83210C8C;
	// beq cr6,0x83210c9c
	if (ctx.cr6.eq) goto loc_83210C9C;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// blt cr6,0x83210c94
	if (ctx.cr6.lt) goto loc_83210C94;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_83210C8C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x832cf7c8
	sub_832CF7C8(ctx, base);
	return;
loc_83210C94:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x832cf440
	sub_832CF440(ctx, base);
	return;
loc_83210C9C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x832d02b8
	sub_832D02B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83210CA4"))) PPC_WEAK_FUNC(sub_83210CA4);
PPC_FUNC_IMPL(__imp__sub_83210CA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83210CA8"))) PPC_WEAK_FUNC(sub_83210CA8);
PPC_FUNC_IMPL(__imp__sub_83210CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83210CB0;
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
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,-21168
	ctx.r31.s64 = ctx.r11.s64 + -21168;
	// addi r30,r10,-6000
	ctx.r30.s64 = ctx.r10.s64 + -6000;
	// bne cr6,0x83210cec
	if (!ctx.cr6.eq) goto loc_83210CEC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-5780
	ctx.r5.s64 = ctx.r11.s64 + -5780;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,49
	ctx.r7.s64 = 49;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83210CEC;
	sub_8320CF10(ctx, base);
loc_83210CEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83210830
	ctx.lr = 0x83210CF4;
	sub_83210830(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x83210d18
	if (!ctx.cr0.eq) goto loc_83210D18;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-5812
	ctx.r5.s64 = ctx.r11.s64 + -5812;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,52
	ctx.r7.s64 = 52;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83210D18;
	sub_8320CF10(ctx, base);
loc_83210D18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83217580
	ctx.lr = 0x83210D20;
	sub_83217580(ctx, base);
	// bl 0x83216a98
	ctx.lr = 0x83210D24;
	sub_83216A98(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x83210d48
	if (!ctx.cr0.eq) goto loc_83210D48;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-5784
	ctx.r5.s64 = ctx.r11.s64 + -5784;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,55
	ctx.r7.s64 = 55;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83210D48;
	sub_8320CF10(ctx, base);
loc_83210D48:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d1df0
	ctx.lr = 0x83210D54;
	sub_832D1DF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83210D60"))) PPC_WEAK_FUNC(sub_83210D60);
PPC_FUNC_IMPL(__imp__sub_83210D60) {
	PPC_FUNC_PROLOGUE();
	// b 0x83210ca8
	sub_83210CA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83210D64"))) PPC_WEAK_FUNC(sub_83210D64);
PPC_FUNC_IMPL(__imp__sub_83210D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83210D68"))) PPC_WEAK_FUNC(sub_83210D68);
PPC_FUNC_IMPL(__imp__sub_83210D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x83210D70;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83210dac
	if (!ctx.cr6.eq) goto loc_83210DAC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-6000
	ctx.r6.s64 = ctx.r11.s64 + -6000;
	// addi r5,r10,-5780
	ctx.r5.s64 = ctx.r10.s64 + -5780;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,146
	ctx.r7.s64 = 146;
	// bl 0x8320cf10
	ctx.lr = 0x83210DA4;
	sub_8320CF10(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// b 0x83210f44
	goto loc_83210F44;
loc_83210DAC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83210f40
	if (ctx.cr6.eq) goto loc_83210F40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83210830
	ctx.lr = 0x83210DC0;
	sub_83210830(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x83210dd0
	if (!ctx.cr0.eq) goto loc_83210DD0;
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x83210f44
	goto loc_83210F44;
loc_83210DD0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83217580
	ctx.lr = 0x83210DD8;
	sub_83217580(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r26,r11,-21168
	ctx.r26.s64 = ctx.r11.s64 + -21168;
	// addi r25,r10,-6000
	ctx.r25.s64 = ctx.r10.s64 + -6000;
	// bne 0x83210e0c
	if (!ctx.cr0.eq) goto loc_83210E0C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,-6012
	ctx.r5.s64 = ctx.r11.s64 + -6012;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,173
	ctx.r7.s64 = 173;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83210E0C;
	sub_8320CF10(ctx, base);
loc_83210E0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83216a80
	ctx.lr = 0x83210E14;
	sub_83216A80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83216a98
	ctx.lr = 0x83210E20;
	sub_83216A98(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83216a88
	ctx.lr = 0x83210E2C;
	sub_83216A88(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83216aa8
	ctx.lr = 0x83210E38;
	sub_83216AA8(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x832ceb20
	ctx.lr = 0x83210E40;
	sub_832CEB20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83210f30
	if (!ctx.cr0.eq) goto loc_83210F30;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r31,r11,-5884
	ctx.r31.s64 = ctx.r11.s64 + -5884;
	// beq 0x83210edc
	if (ctx.cr0.eq) goto loc_83210EDC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832ce8a8
	ctx.lr = 0x83210E68;
	sub_832CE8A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83210e88
	if (ctx.cr0.eq) goto loc_83210E88;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,192
	ctx.r7.s64 = 192;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83210E88;
	sub_8320CF10(ctx, base);
loc_83210E88:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832d2ad0
	ctx.lr = 0x83210E98;
	sub_832D2AD0(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x83210ea8
	if (ctx.cr0.eq) goto loc_83210EA8;
	// li r7,195
	ctx.r7.s64 = 195;
	// b 0x83210ec8
	goto loc_83210EC8;
loc_83210EA8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,280(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832d18c0
	ctx.lr = 0x83210EBC;
	sub_832D18C0(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x83210edc
	if (ctx.cr0.eq) goto loc_83210EDC;
	// li r7,200
	ctx.r7.s64 = 200;
loc_83210EC8:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83210EDC;
	sub_8320CF10(ctx, base);
loc_83210EDC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83210f20
	if (ctx.cr0.eq) goto loc_83210F20;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x83210f20
	if (!ctx.cr6.eq) goto loc_83210F20;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,280(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832d2490
	ctx.lr = 0x83210F00;
	sub_832D2490(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x83210f20
	if (ctx.cr0.eq) goto loc_83210F20;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,210
	ctx.r7.s64 = 210;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83210F20;
	sub_8320CF10(ctx, base);
loc_83210F20:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// b 0x83210f40
	goto loc_83210F40;
loc_83210F30:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832cec18
	ctx.lr = 0x83210F3C;
	sub_832CEC18(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_83210F40:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_83210F44:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83210F4C"))) PPC_WEAK_FUNC(sub_83210F4C);
PPC_FUNC_IMPL(__imp__sub_83210F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83210F50"))) PPC_WEAK_FUNC(sub_83210F50);
PPC_FUNC_IMPL(__imp__sub_83210F50) {
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
	// bl 0x832d2ee8
	ctx.lr = 0x83210F6C;
	sub_832D2EE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83210f98
	if (!ctx.cr0.eq) goto loc_83210F98;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-5752
	ctx.r6.s64 = ctx.r11.s64 + -5752;
	// addi r5,r10,-5764
	ctx.r5.s64 = ctx.r10.s64 + -5764;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,73
	ctx.r7.s64 = 73;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83210F98;
	sub_8320CF10(ctx, base);
loc_83210F98:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83210FC4"))) PPC_WEAK_FUNC(sub_83210FC4);
PPC_FUNC_IMPL(__imp__sub_83210FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83210FC8"))) PPC_WEAK_FUNC(sub_83210FC8);
PPC_FUNC_IMPL(__imp__sub_83210FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83210FD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x832110a8
	if (ctx.cr6.eq) goto loc_832110A8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,-21168
	ctx.r31.s64 = ctx.r11.s64 + -21168;
	// addi r30,r10,-5752
	ctx.r30.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x83211018
	if (!ctx.cr6.eq) goto loc_83211018;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-5592
	ctx.r5.s64 = ctx.r11.s64 + -5592;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,115
	ctx.r7.s64 = 115;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211018;
	sub_8320CF10(ctx, base);
loc_83211018:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83211040
	if (!ctx.cr6.eq) goto loc_83211040;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-5612
	ctx.r5.s64 = ctx.r11.s64 + -5612;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,116
	ctx.r7.s64 = 116;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211040;
	sub_8320CF10(ctx, base);
loc_83211040:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83211068
	if (ctx.cr6.eq) goto loc_83211068;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-5640
	ctx.r5.s64 = ctx.r11.s64 + -5640;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,119
	ctx.r7.s64 = 119;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211068;
	sub_8320CF10(ctx, base);
loc_83211068:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83211090
	if (ctx.cr6.eq) goto loc_83211090;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-5668
	ctx.r5.s64 = ctx.r11.s64 + -5668;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211090;
	sub_8320CF10(ctx, base);
loc_83211090:
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
loc_832110A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832110B0"))) PPC_WEAK_FUNC(sub_832110B0);
PPC_FUNC_IMPL(__imp__sub_832110B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832110B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8321118c
	if (ctx.cr6.eq) goto loc_8321118C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,-21168
	ctx.r31.s64 = ctx.r11.s64 + -21168;
	// addi r30,r10,-5752
	ctx.r30.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x83211100
	if (!ctx.cr6.eq) goto loc_83211100;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-5560
	ctx.r5.s64 = ctx.r11.s64 + -5560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,163
	ctx.r7.s64 = 163;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211100;
	sub_8320CF10(ctx, base);
loc_83211100:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83211128
	if (!ctx.cr6.eq) goto loc_83211128;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-5580
	ctx.r5.s64 = ctx.r11.s64 + -5580;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,164
	ctx.r7.s64 = 164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211128;
	sub_8320CF10(ctx, base);
loc_83211128:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83211150
	if (ctx.cr6.eq) goto loc_83211150;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-5640
	ctx.r5.s64 = ctx.r11.s64 + -5640;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,167
	ctx.r7.s64 = 167;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211150;
	sub_8320CF10(ctx, base);
loc_83211150:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83211178
	if (ctx.cr6.eq) goto loc_83211178;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-5668
	ctx.r5.s64 = ctx.r11.s64 + -5668;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,168
	ctx.r7.s64 = 168;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211178;
	sub_8320CF10(ctx, base);
loc_83211178:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
loc_8321118C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83211194"))) PPC_WEAK_FUNC(sub_83211194);
PPC_FUNC_IMPL(__imp__sub_83211194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83211198"))) PPC_WEAK_FUNC(sub_83211198);
PPC_FUNC_IMPL(__imp__sub_83211198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832111A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,-5752
	ctx.r29.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x832111e0
	if (!ctx.cr6.eq) goto loc_832111E0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5516
	ctx.r5.s64 = ctx.r11.s64 + -5516;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,206
	ctx.r7.s64 = 206;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832111E0;
	sub_8320CF10(ctx, base);
loc_832111E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83211208
	if (!ctx.cr6.eq) goto loc_83211208;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5532
	ctx.r5.s64 = ctx.r11.s64 + -5532;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,207
	ctx.r7.s64 = 207;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211208;
	sub_8320CF10(ctx, base);
loc_83211208:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83211230
	if (!ctx.cr6.eq) goto loc_83211230;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5548
	ctx.r5.s64 = ctx.r11.s64 + -5548;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,208
	ctx.r7.s64 = 208;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211230;
	sub_8320CF10(ctx, base);
loc_83211230:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83211254
	if (!ctx.cr6.eq) goto loc_83211254;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5592
	ctx.r5.s64 = ctx.r11.s64 + -5592;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,209
	ctx.r7.s64 = 209;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211254;
	sub_8320CF10(ctx, base);
loc_83211254:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8321127c
	if (!ctx.cr6.eq) goto loc_8321127C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5612
	ctx.r5.s64 = ctx.r11.s64 + -5612;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,210
	ctx.r7.s64 = 210;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8321127C;
	sub_8320CF10(ctx, base);
loc_8321127C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x832112b4
	if (ctx.cr6.eq) goto loc_832112B4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_832112B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832112BC"))) PPC_WEAK_FUNC(sub_832112BC);
PPC_FUNC_IMPL(__imp__sub_832112BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832112C0"))) PPC_WEAK_FUNC(sub_832112C0);
PPC_FUNC_IMPL(__imp__sub_832112C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x832112C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83211360
	if (ctx.cr6.eq) goto loc_83211360;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// addi r29,r10,-5752
	ctx.r29.s64 = ctx.r10.s64 + -5752;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83211310
	if (!ctx.cr6.eq) goto loc_83211310;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5548
	ctx.r5.s64 = ctx.r11.s64 + -5548;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,264
	ctx.r7.s64 = 264;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211310;
	sub_8320CF10(ctx, base);
loc_83211310:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83211338
	if (!ctx.cr6.eq) goto loc_83211338;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5532
	ctx.r5.s64 = ctx.r11.s64 + -5532;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,265
	ctx.r7.s64 = 265;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211338;
	sub_8320CF10(ctx, base);
loc_83211338:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83211360:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83211368"))) PPC_WEAK_FUNC(sub_83211368);
PPC_FUNC_IMPL(__imp__sub_83211368) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x832d2fe8
	sub_832D2FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8321137C"))) PPC_WEAK_FUNC(sub_8321137C);
PPC_FUNC_IMPL(__imp__sub_8321137C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83211380"))) PPC_WEAK_FUNC(sub_83211380);
PPC_FUNC_IMPL(__imp__sub_83211380) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83211390"))) PPC_WEAK_FUNC(sub_83211390);
PPC_FUNC_IMPL(__imp__sub_83211390) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832113A0"))) PPC_WEAK_FUNC(sub_832113A0);
PPC_FUNC_IMPL(__imp__sub_832113A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x832113A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,-5752
	ctx.r26.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x832113f0
	if (!ctx.cr6.eq) goto loc_832113F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5464
	ctx.r5.s64 = ctx.r11.s64 + -5464;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,449
	ctx.r7.s64 = 449;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832113F0;
	sub_8320CF10(ctx, base);
loc_832113F0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83211414
	if (!ctx.cr6.eq) goto loc_83211414;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5476
	ctx.r5.s64 = ctx.r11.s64 + -5476;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,450
	ctx.r7.s64 = 450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211414;
	sub_8320CF10(ctx, base);
loc_83211414:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x83211424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83211448
	if (!ctx.cr0.eq) goto loc_83211448;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5488
	ctx.r5.s64 = ctx.r11.s64 + -5488;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,456
	ctx.r7.s64 = 456;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211448;
	sub_8320CF10(ctx, base);
loc_83211448:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832d2ca8
	ctx.lr = 0x8321146C;
	sub_832D2CA8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x83210f50
	ctx.lr = 0x83211474;
	sub_83210F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bne 0x8321149c
	if (!ctx.cr0.eq) goto loc_8321149C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5508
	ctx.r5.s64 = ctx.r11.s64 + -5508;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,471
	ctx.r7.s64 = 471;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8321149C;
	sub_8320CF10(ctx, base);
loc_8321149C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832114D8"))) PPC_WEAK_FUNC(sub_832114D8);
PPC_FUNC_IMPL(__imp__sub_832114D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832114E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r9,-5448
	ctx.r28.s64 = ctx.r9.s64 + -5448;
	// addi r27,r10,-5752
	ctx.r27.s64 = ctx.r10.s64 + -5752;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83211514
	if (!ctx.cr6.eq) goto loc_83211514;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83211520
	goto loc_83211520;
loc_83211514:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83211598
	if (!ctx.cr6.eq) goto loc_83211598;
loc_83211520:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,515
	ctx.r7.s64 = 515;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211538;
	sub_8320CF10(ctx, base);
	// b 0x83211598
	goto loc_83211598;
loc_8321153C:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83211554
	if (ctx.cr6.eq) goto loc_83211554;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8321156c
	if (!ctx.cr6.eq) goto loc_8321156C;
loc_83211554:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,524
	ctx.r7.s64 = 524;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8321156C;
	sub_8320CF10(ctx, base);
loc_8321156C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832112c0
	ctx.lr = 0x83211574;
	sub_832112C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8321158C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x832d2fe8
	ctx.lr = 0x83211598;
	sub_832D2FE8(ctx, base);
loc_83211598:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8321153c
	if (!ctx.cr6.eq) goto loc_8321153C;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832115b8
	if (ctx.cr6.eq) goto loc_832115B8;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x832d2fe8
	ctx.lr = 0x832115B8;
	sub_832D2FE8(ctx, base);
loc_832115B8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832d2d68
	ctx.lr = 0x832115C0;
	sub_832D2D68(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832115D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832115DC"))) PPC_WEAK_FUNC(sub_832115DC);
PPC_FUNC_IMPL(__imp__sub_832115DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832115E0"))) PPC_WEAK_FUNC(sub_832115E0);
PPC_FUNC_IMPL(__imp__sub_832115E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832115E8;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,-5752
	ctx.r28.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x8321162c
	if (!ctx.cr6.eq) goto loc_8321162C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5436
	ctx.r5.s64 = ctx.r11.s64 + -5436;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,570
	ctx.r7.s64 = 570;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8321162C;
	sub_8320CF10(ctx, base);
loc_8321162C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83210f50
	ctx.lr = 0x83211634;
	sub_83210F50(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83211658
	if (!ctx.cr0.eq) goto loc_83211658;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5764
	ctx.r5.s64 = ctx.r11.s64 + -5764;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,575
	ctx.r7.s64 = 575;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211658;
	sub_8320CF10(ctx, base);
loc_83211658:
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832110b0
	ctx.lr = 0x8321166C;
	sub_832110B0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83211680
	if (!ctx.cr6.eq) goto loc_83211680;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_83211680:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83211694"))) PPC_WEAK_FUNC(sub_83211694);
PPC_FUNC_IMPL(__imp__sub_83211694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83211698"))) PPC_WEAK_FUNC(sub_83211698);
PPC_FUNC_IMPL(__imp__sub_83211698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832116A0;
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
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r10,-5752
	ctx.r29.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x832116e4
	if (!ctx.cr6.eq) goto loc_832116E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5404
	ctx.r5.s64 = ctx.r11.s64 + -5404;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,621
	ctx.r7.s64 = 621;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832116E4;
	sub_8320CF10(ctx, base);
loc_832116E4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83211708
	if (!ctx.cr6.eq) goto loc_83211708;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5416
	ctx.r5.s64 = ctx.r11.s64 + -5416;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,622
	ctx.r7.s64 = 622;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211708;
	sub_8320CF10(ctx, base);
loc_83211708:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x83211750
	if (ctx.cr6.eq) goto loc_83211750;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r27,r11,-5428
	ctx.r27.s64 = ctx.r11.s64 + -5428;
loc_83211718:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x83211754
	if (ctx.cr6.eq) goto loc_83211754;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83211748
	if (!ctx.cr6.eq) goto loc_83211748;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,636
	ctx.r7.s64 = 636;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211748;
	sub_8320CF10(ctx, base);
loc_83211748:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x83211718
	if (!ctx.cr6.eq) goto loc_83211718;
loc_83211750:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83211754:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83211760"))) PPC_WEAK_FUNC(sub_83211760);
PPC_FUNC_IMPL(__imp__sub_83211760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83211768;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,-5752
	ctx.r28.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x832117a8
	if (!ctx.cr6.eq) goto loc_832117A8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5436
	ctx.r5.s64 = ctx.r11.s64 + -5436;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,672
	ctx.r7.s64 = 672;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832117A8;
	sub_8320CF10(ctx, base);
loc_832117A8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832117bc
	if (!ctx.cr6.eq) goto loc_832117BC;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x832117c8
	goto loc_832117C8;
loc_832117BC:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832117e4
	if (!ctx.cr6.eq) goto loc_832117E4;
loc_832117C8:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,677
	ctx.r7.s64 = 677;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832117E4;
	sub_8320CF10(ctx, base);
loc_832117E4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83211698
	ctx.lr = 0x832117F4;
	sub_83211698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83211800
	if (!ctx.cr0.eq) goto loc_83211800;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_83211800:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83211810"))) PPC_WEAK_FUNC(sub_83211810);
PPC_FUNC_IMPL(__imp__sub_83211810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83211818;
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
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,-5752
	ctx.r28.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x83211854
	if (!ctx.cr6.eq) goto loc_83211854;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5436
	ctx.r5.s64 = ctx.r11.s64 + -5436;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,714
	ctx.r7.s64 = 714;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211854;
	sub_8320CF10(ctx, base);
loc_83211854:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83211868
	if (!ctx.cr6.eq) goto loc_83211868;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83211874
	goto loc_83211874;
loc_83211868:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83211890
	if (!ctx.cr6.eq) goto loc_83211890;
loc_83211874:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5404
	ctx.r5.s64 = ctx.r11.s64 + -5404;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,720
	ctx.r7.s64 = 720;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211890;
	sub_8320CF10(ctx, base);
loc_83211890:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83211698
	ctx.lr = 0x832118A4;
	sub_83211698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832118b0
	if (!ctx.cr0.eq) goto loc_832118B0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_832118B0:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832118C0"))) PPC_WEAK_FUNC(sub_832118C0);
PPC_FUNC_IMPL(__imp__sub_832118C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x832118C8;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,-5752
	ctx.r28.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x83211908
	if (!ctx.cr6.eq) goto loc_83211908;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5436
	ctx.r5.s64 = ctx.r11.s64 + -5436;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,759
	ctx.r7.s64 = 759;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211908;
	sub_8320CF10(ctx, base);
loc_83211908:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8321191c
	if (!ctx.cr6.eq) goto loc_8321191C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83211928
	goto loc_83211928;
loc_8321191C:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83211944
	if (!ctx.cr6.eq) goto loc_83211944;
loc_83211928:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,765
	ctx.r7.s64 = 765;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211944;
	sub_8320CF10(ctx, base);
loc_83211944:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83211698
	ctx.lr = 0x83211954;
	sub_83211698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83211960
	if (!ctx.cr0.eq) goto loc_83211960;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_83211960:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x832119a8
	if (ctx.cr6.eq) goto loc_832119A8;
	// bl 0x832112c0
	ctx.lr = 0x83211974;
	sub_832112C0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8321198c
	if (!ctx.cr6.eq) goto loc_8321198C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8321198C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8321199c
	if (ctx.cr6.eq) goto loc_8321199C;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x832d2fe8
	ctx.lr = 0x8321199C;
	sub_832D2FE8(ctx, base);
loc_8321199C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_832119A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832119B4"))) PPC_WEAK_FUNC(sub_832119B4);
PPC_FUNC_IMPL(__imp__sub_832119B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832119B8"))) PPC_WEAK_FUNC(sub_832119B8);
PPC_FUNC_IMPL(__imp__sub_832119B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832119C0;
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
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,-5752
	ctx.r28.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x832119fc
	if (!ctx.cr6.eq) goto loc_832119FC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5436
	ctx.r5.s64 = ctx.r11.s64 + -5436;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,823
	ctx.r7.s64 = 823;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832119FC;
	sub_8320CF10(ctx, base);
loc_832119FC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83211a10
	if (!ctx.cr6.eq) goto loc_83211A10;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83211a1c
	goto loc_83211A1C;
loc_83211A10:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83211a38
	if (!ctx.cr6.eq) goto loc_83211A38;
loc_83211A1C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,829
	ctx.r7.s64 = 829;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211A38;
	sub_8320CF10(ctx, base);
loc_83211A38:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83211a84
	if (ctx.cr6.eq) goto loc_83211A84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832112c0
	ctx.lr = 0x83211A50;
	sub_832112C0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83211a68
	if (!ctx.cr6.eq) goto loc_83211A68;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_83211A68:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83211a78
	if (ctx.cr6.eq) goto loc_83211A78;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x832d2fe8
	ctx.lr = 0x83211A78;
	sub_832D2FE8(ctx, base);
loc_83211A78:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_83211A84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83211A90"))) PPC_WEAK_FUNC(sub_83211A90);
PPC_FUNC_IMPL(__imp__sub_83211A90) {
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
	// bne cr6,0x83211acc
	if (!ctx.cr6.eq) goto loc_83211ACC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-5752
	ctx.r6.s64 = ctx.r11.s64 + -5752;
	// addi r5,r10,-5436
	ctx.r5.s64 = ctx.r10.s64 + -5436;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,872
	ctx.r7.s64 = 872;
	// bl 0x8320cf10
	ctx.lr = 0x83211ACC;
	sub_8320CF10(ctx, base);
loc_83211ACC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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

__attribute__((alias("__imp__sub_83211AE4"))) PPC_WEAK_FUNC(sub_83211AE4);
PPC_FUNC_IMPL(__imp__sub_83211AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83211AE8"))) PPC_WEAK_FUNC(sub_83211AE8);
PPC_FUNC_IMPL(__imp__sub_83211AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83211AF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r10,-21168
	ctx.r28.s64 = ctx.r10.s64 + -21168;
	// addi r27,r11,-5752
	ctx.r27.s64 = ctx.r11.s64 + -5752;
	// bne cr6,0x83211b2c
	if (!ctx.cr6.eq) goto loc_83211B2C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5436
	ctx.r5.s64 = ctx.r11.s64 + -5436;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,894
	ctx.r7.s64 = 894;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211B2C;
	sub_8320CF10(ctx, base);
loc_83211B2C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r11,-5516
	ctx.r29.s64 = ctx.r11.s64 + -5516;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83211b48
	if (!ctx.cr6.eq) goto loc_83211B48;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83211b54
	goto loc_83211B54;
loc_83211B48:
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83211b88
	if (!ctx.cr6.eq) goto loc_83211B88;
loc_83211B54:
	// li r7,901
	ctx.r7.s64 = 901;
	// b 0x83211b74
	goto loc_83211B74;
loc_83211B5C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83211b70
	if (ctx.cr6.eq) goto loc_83211B70;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83211b88
	if (!ctx.cr6.eq) goto loc_83211B88;
loc_83211B70:
	// li r7,909
	ctx.r7.s64 = 909;
loc_83211B74:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211B88;
	sub_8320CF10(ctx, base);
loc_83211B88:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83211b5c
	if (!ctx.cr6.eq) goto loc_83211B5C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83211B9C"))) PPC_WEAK_FUNC(sub_83211B9C);
PPC_FUNC_IMPL(__imp__sub_83211B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83211BA0"))) PPC_WEAK_FUNC(sub_83211BA0);
PPC_FUNC_IMPL(__imp__sub_83211BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83211BA8;
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
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
	// addi r29,r10,-5752
	ctx.r29.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x83211bf4
	if (!ctx.cr6.eq) goto loc_83211BF4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1010
	ctx.r7.s64 = 1010;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211BF4;
	sub_8320CF10(ctx, base);
loc_83211BF4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83211c18
	if (!ctx.cr6.eq) goto loc_83211C18;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5324
	ctx.r5.s64 = ctx.r11.s64 + -5324;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1011
	ctx.r7.s64 = 1011;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211C18;
	sub_8320CF10(ctx, base);
loc_83211C18:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83211c40
	if (ctx.cr6.eq) goto loc_83211C40;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5344
	ctx.r5.s64 = ctx.r11.s64 + -5344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1014
	ctx.r7.s64 = 1014;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211C40;
	sub_8320CF10(ctx, base);
loc_83211C40:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83211c68
	if (ctx.cr6.eq) goto loc_83211C68;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5364
	ctx.r5.s64 = ctx.r11.s64 + -5364;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1015
	ctx.r7.s64 = 1015;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211C68;
	sub_8320CF10(ctx, base);
loc_83211C68:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x83210f50
	ctx.lr = 0x83211C80;
	sub_83210F50(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83211ca4
	if (!ctx.cr0.eq) goto loc_83211CA4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5384
	ctx.r5.s64 = ctx.r11.s64 + -5384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1031
	ctx.r7.s64 = 1031;
	// bl 0x8320cf10
	ctx.lr = 0x83211CA4;
	sub_8320CF10(ctx, base);
loc_83211CA4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83211CE4"))) PPC_WEAK_FUNC(sub_83211CE4);
PPC_FUNC_IMPL(__imp__sub_83211CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83211CE8"))) PPC_WEAK_FUNC(sub_83211CE8);
PPC_FUNC_IMPL(__imp__sub_83211CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83211CF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,-5752
	ctx.r26.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x83211d2c
	if (!ctx.cr6.eq) goto loc_83211D2C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1076
	ctx.r7.s64 = 1076;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211D2C;
	sub_8320CF10(ctx, base);
loc_83211D2C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83211d40
	if (ctx.cr0.eq) goto loc_83211D40;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_83211D40:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83211db8
	if (ctx.cr6.eq) goto loc_83211DB8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r28,r11,-5448
	ctx.r28.s64 = ctx.r11.s64 + -5448;
loc_83211D50:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83211d68
	if (ctx.cr6.eq) goto loc_83211D68;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83211d80
	if (!ctx.cr6.eq) goto loc_83211D80;
loc_83211D68:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1088
	ctx.r7.s64 = 1088;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211D80;
	sub_8320CF10(ctx, base);
loc_83211D80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832112c0
	ctx.lr = 0x83211D88;
	sub_832112C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83211DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x832d2fe8
	ctx.lr = 0x83211DAC;
	sub_832D2FE8(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83211d50
	if (!ctx.cr6.eq) goto loc_83211D50;
loc_83211DB8:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83211dcc
	if (ctx.cr6.eq) goto loc_83211DCC;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x832d2fe8
	ctx.lr = 0x83211DCC;
	sub_832D2FE8(ctx, base);
loc_83211DCC:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83211df4
	if (!ctx.cr6.eq) goto loc_83211DF4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x832d2d68
	ctx.lr = 0x83211DE0;
	sub_832D2D68(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83211DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83211DF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83211DFC"))) PPC_WEAK_FUNC(sub_83211DFC);
PPC_FUNC_IMPL(__imp__sub_83211DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83211E00"))) PPC_WEAK_FUNC(sub_83211E00);
PPC_FUNC_IMPL(__imp__sub_83211E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83211E08;
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
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,-5752
	ctx.r26.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x83211e4c
	if (!ctx.cr6.eq) goto loc_83211E4C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1143
	ctx.r7.s64 = 1143;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211E4C;
	sub_8320CF10(ctx, base);
loc_83211E4C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83210f50
	ctx.lr = 0x83211E54;
	sub_83210F50(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x83211e78
	if (!ctx.cr0.eq) goto loc_83211E78;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5764
	ctx.r5.s64 = ctx.r11.s64 + -5764;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1147
	ctx.r7.s64 = 1147;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211E78;
	sub_8320CF10(ctx, base);
loc_83211E78:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r25,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r25.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r28,r11,-5428
	ctx.r28.s64 = ctx.r11.s64 + -5428;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83211e9c
	if (!ctx.cr6.eq) goto loc_83211E9C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83211ea8
	goto loc_83211EA8;
loc_83211E9C:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83211ee0
	if (!ctx.cr6.eq) goto loc_83211EE0;
loc_83211EA8:
	// li r7,1158
	ctx.r7.s64 = 1158;
	// b 0x83211ecc
	goto loc_83211ECC;
loc_83211EB0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x83211eec
	if (ctx.cr6.gt) goto loc_83211EEC;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83211ee0
	if (!ctx.cr6.eq) goto loc_83211EE0;
	// li r7,1168
	ctx.r7.s64 = 1168;
loc_83211ECC:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211EE0;
	sub_8320CF10(ctx, base);
loc_83211EE0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83211eb0
	if (!ctx.cr6.eq) goto loc_83211EB0;
loc_83211EEC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832110b0
	ctx.lr = 0x83211EF8;
	sub_832110B0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83211f0c
	if (!ctx.cr6.eq) goto loc_83211F0C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
loc_83211F0C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83211F20"))) PPC_WEAK_FUNC(sub_83211F20);
PPC_FUNC_IMPL(__imp__sub_83211F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83211F28;
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
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r10,-5752
	ctx.r29.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x83211f6c
	if (!ctx.cr6.eq) goto loc_83211F6C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5404
	ctx.r5.s64 = ctx.r11.s64 + -5404;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1212
	ctx.r7.s64 = 1212;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211F6C;
	sub_8320CF10(ctx, base);
loc_83211F6C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83211f90
	if (!ctx.cr6.eq) goto loc_83211F90;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-5416
	ctx.r5.s64 = ctx.r11.s64 + -5416;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1213
	ctx.r7.s64 = 1213;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211F90;
	sub_8320CF10(ctx, base);
loc_83211F90:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x83211fd8
	if (ctx.cr6.eq) goto loc_83211FD8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r27,r11,-5428
	ctx.r27.s64 = ctx.r11.s64 + -5428;
loc_83211FA0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x83211fdc
	if (ctx.cr6.eq) goto loc_83211FDC;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83211fd0
	if (!ctx.cr6.eq) goto loc_83211FD0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1227
	ctx.r7.s64 = 1227;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83211FD0;
	sub_8320CF10(ctx, base);
loc_83211FD0:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x83211fa0
	if (!ctx.cr6.eq) goto loc_83211FA0;
loc_83211FD8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83211FDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83211FE8"))) PPC_WEAK_FUNC(sub_83211FE8);
PPC_FUNC_IMPL(__imp__sub_83211FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83211FF0;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,-5752
	ctx.r28.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x83212030
	if (!ctx.cr6.eq) goto loc_83212030;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1262
	ctx.r7.s64 = 1262;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83212030;
	sub_8320CF10(ctx, base);
loc_83212030:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83212044
	if (!ctx.cr6.eq) goto loc_83212044;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83212050
	goto loc_83212050;
loc_83212044:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8321206c
	if (!ctx.cr6.eq) goto loc_8321206C;
loc_83212050:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1267
	ctx.r7.s64 = 1267;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x8321206C;
	sub_8320CF10(ctx, base);
loc_8321206C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83211f20
	ctx.lr = 0x8321207C;
	sub_83211F20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83212088
	if (!ctx.cr0.eq) goto loc_83212088;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_83212088:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83212098"))) PPC_WEAK_FUNC(sub_83212098);
PPC_FUNC_IMPL(__imp__sub_83212098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832120A0;
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
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,-5752
	ctx.r28.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x832120dc
	if (!ctx.cr6.eq) goto loc_832120DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1304
	ctx.r7.s64 = 1304;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832120DC;
	sub_8320CF10(ctx, base);
loc_832120DC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832120f0
	if (!ctx.cr6.eq) goto loc_832120F0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x832120fc
	goto loc_832120FC;
loc_832120F0:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83212118
	if (!ctx.cr6.eq) goto loc_83212118;
loc_832120FC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5404
	ctx.r5.s64 = ctx.r11.s64 + -5404;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1310
	ctx.r7.s64 = 1310;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83212118;
	sub_8320CF10(ctx, base);
loc_83212118:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83211f20
	ctx.lr = 0x8321212C;
	sub_83211F20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83212138
	if (!ctx.cr0.eq) goto loc_83212138;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_83212138:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83212148"))) PPC_WEAK_FUNC(sub_83212148);
PPC_FUNC_IMPL(__imp__sub_83212148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83212150;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,-5752
	ctx.r28.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x83212190
	if (!ctx.cr6.eq) goto loc_83212190;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1421
	ctx.r7.s64 = 1421;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83212190;
	sub_8320CF10(ctx, base);
loc_83212190:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832121a4
	if (!ctx.cr6.eq) goto loc_832121A4;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x832121b0
	goto loc_832121B0;
loc_832121A4:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832121cc
	if (!ctx.cr6.eq) goto loc_832121CC;
loc_832121B0:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1427
	ctx.r7.s64 = 1427;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832121CC;
	sub_8320CF10(ctx, base);
loc_832121CC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83211698
	ctx.lr = 0x832121DC;
	sub_83211698(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x832121e8
	if (!ctx.cr0.eq) goto loc_832121E8;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_832121E8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83212230
	if (ctx.cr6.eq) goto loc_83212230;
	// bl 0x832112c0
	ctx.lr = 0x832121FC;
	sub_832112C0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83212214
	if (!ctx.cr6.eq) goto loc_83212214;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_83212214:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83212224
	if (ctx.cr6.eq) goto loc_83212224;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x832d2fe8
	ctx.lr = 0x83212224;
	sub_832D2FE8(ctx, base);
loc_83212224:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_83212230:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8321223C"))) PPC_WEAK_FUNC(sub_8321223C);
PPC_FUNC_IMPL(__imp__sub_8321223C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83212240"))) PPC_WEAK_FUNC(sub_83212240);
PPC_FUNC_IMPL(__imp__sub_83212240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83212248;
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
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,-5752
	ctx.r28.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x83212284
	if (!ctx.cr6.eq) goto loc_83212284;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1485
	ctx.r7.s64 = 1485;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83212284;
	sub_8320CF10(ctx, base);
loc_83212284:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83212298
	if (!ctx.cr6.eq) goto loc_83212298;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x832122a4
	goto loc_832122A4;
loc_83212298:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x832122c0
	if (!ctx.cr6.eq) goto loc_832122C0;
loc_832122A4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1491
	ctx.r7.s64 = 1491;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832122C0;
	sub_8320CF10(ctx, base);
loc_832122C0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8321230c
	if (ctx.cr6.eq) goto loc_8321230C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832112c0
	ctx.lr = 0x832122D8;
	sub_832112C0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832122f0
	if (!ctx.cr6.eq) goto loc_832122F0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_832122F0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83212300
	if (ctx.cr6.eq) goto loc_83212300;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x832d2fe8
	ctx.lr = 0x83212300;
	sub_832D2FE8(ctx, base);
loc_83212300:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8321230C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83212318"))) PPC_WEAK_FUNC(sub_83212318);
PPC_FUNC_IMPL(__imp__sub_83212318) {
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
	// bne cr6,0x83212354
	if (!ctx.cr6.eq) goto loc_83212354;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-5752
	ctx.r6.s64 = ctx.r11.s64 + -5752;
	// addi r5,r10,-5316
	ctx.r5.s64 = ctx.r10.s64 + -5316;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1533
	ctx.r7.s64 = 1533;
	// bl 0x8320cf10
	ctx.lr = 0x83212354;
	sub_8320CF10(ctx, base);
loc_83212354:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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

__attribute__((alias("__imp__sub_8321236C"))) PPC_WEAK_FUNC(sub_8321236C);
PPC_FUNC_IMPL(__imp__sub_8321236C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83212370"))) PPC_WEAK_FUNC(sub_83212370);
PPC_FUNC_IMPL(__imp__sub_83212370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x83212378;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r10,-21168
	ctx.r28.s64 = ctx.r10.s64 + -21168;
	// addi r27,r11,-5752
	ctx.r27.s64 = ctx.r11.s64 + -5752;
	// bne cr6,0x832123b4
	if (!ctx.cr6.eq) goto loc_832123B4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5316
	ctx.r5.s64 = ctx.r11.s64 + -5316;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1555
	ctx.r7.s64 = 1555;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832123B4;
	sub_8320CF10(ctx, base);
loc_832123B4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r11,-5516
	ctx.r29.s64 = ctx.r11.s64 + -5516;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832123d0
	if (!ctx.cr6.eq) goto loc_832123D0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832123dc
	goto loc_832123DC;
loc_832123D0:
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83212410
	if (!ctx.cr6.eq) goto loc_83212410;
loc_832123DC:
	// li r7,1562
	ctx.r7.s64 = 1562;
	// b 0x832123fc
	goto loc_832123FC;
loc_832123E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832123f8
	if (ctx.cr6.eq) goto loc_832123F8;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83212410
	if (!ctx.cr6.eq) goto loc_83212410;
loc_832123F8:
	// li r7,1570
	ctx.r7.s64 = 1570;
loc_832123FC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83212410;
	sub_8320CF10(ctx, base);
loc_83212410:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832123e4
	if (!ctx.cr6.eq) goto loc_832123E4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83212424"))) PPC_WEAK_FUNC(sub_83212424);
PPC_FUNC_IMPL(__imp__sub_83212424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83212428"))) PPC_WEAK_FUNC(sub_83212428);
PPC_FUNC_IMPL(__imp__sub_83212428) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832d2ca8
	ctx.lr = 0x83212454;
	sub_832D2CA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83212480
	if (!ctx.cr0.eq) goto loc_83212480;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-5752
	ctx.r6.s64 = ctx.r11.s64 + -5752;
	// addi r5,r10,-5324
	ctx.r5.s64 = ctx.r10.s64 + -5324;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1609
	ctx.r7.s64 = 1609;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83212480;
	sub_8320CF10(ctx, base);
loc_83212480:
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

__attribute__((alias("__imp__sub_83212498"))) PPC_WEAK_FUNC(sub_83212498);
PPC_FUNC_IMPL(__imp__sub_83212498) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832d2ca8
	ctx.lr = 0x832124C4;
	sub_832D2CA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x832124f0
	if (!ctx.cr0.eq) goto loc_832124F0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-5752
	ctx.r6.s64 = ctx.r11.s64 + -5752;
	// addi r5,r10,-5324
	ctx.r5.s64 = ctx.r10.s64 + -5324;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1650
	ctx.r7.s64 = 1650;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832124F0;
	sub_8320CF10(ctx, base);
loc_832124F0:
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

__attribute__((alias("__imp__sub_83212508"))) PPC_WEAK_FUNC(sub_83212508);
PPC_FUNC_IMPL(__imp__sub_83212508) {
	PPC_FUNC_PROLOGUE();
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83212510"))) PPC_WEAK_FUNC(sub_83212510);
PPC_FUNC_IMPL(__imp__sub_83212510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x83212518;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x83212540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r26,r11,-21168
	ctx.r26.s64 = ctx.r11.s64 + -21168;
	// addi r25,r10,-5752
	ctx.r25.s64 = ctx.r10.s64 + -5752;
	// bne 0x83212574
	if (!ctx.cr0.eq) goto loc_83212574;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,-5264
	ctx.r5.s64 = ctx.r11.s64 + -5264;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1751
	ctx.r7.s64 = 1751;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83212574;
	sub_8320CF10(ctx, base);
loc_83212574:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bne cr6,0x832125a4
	if (!ctx.cr6.eq) goto loc_832125A4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,-5272
	ctx.r5.s64 = ctx.r11.s64 + -5272;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1759
	ctx.r7.s64 = 1759;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832125A4;
	sub_8320CF10(ctx, base);
loc_832125A4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x832125d0
	if (!ctx.cr6.eq) goto loc_832125D0;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// beq cr6,0x832125d0
	if (ctx.cr6.eq) goto loc_832125D0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,-5308
	ctx.r5.s64 = ctx.r11.s64 + -5308;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1760
	ctx.r7.s64 = 1760;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832125D0;
	sub_8320CF10(ctx, base);
loc_832125D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832125F4"))) PPC_WEAK_FUNC(sub_832125F4);
PPC_FUNC_IMPL(__imp__sub_832125F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832125F8"))) PPC_WEAK_FUNC(sub_832125F8);
PPC_FUNC_IMPL(__imp__sub_832125F8) {
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
	// bne cr6,0x83212634
	if (!ctx.cr6.eq) goto loc_83212634;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-5752
	ctx.r6.s64 = ctx.r11.s64 + -5752;
	// addi r5,r10,-5264
	ctx.r5.s64 = ctx.r10.s64 + -5264;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1790
	ctx.r7.s64 = 1790;
	// bl 0x8320cf10
	ctx.lr = 0x83212634;
	sub_8320CF10(ctx, base);
loc_83212634:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83212648;
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

__attribute__((alias("__imp__sub_8321265C"))) PPC_WEAK_FUNC(sub_8321265C);
PPC_FUNC_IMPL(__imp__sub_8321265C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83212660"))) PPC_WEAK_FUNC(sub_83212660);
PPC_FUNC_IMPL(__imp__sub_83212660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10dc
	ctx.lr = 0x83212668;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832126b0
	if (!ctx.cr6.eq) goto loc_832126B0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-5752
	ctx.r6.s64 = ctx.r11.s64 + -5752;
	// addi r5,r10,-5404
	ctx.r5.s64 = ctx.r10.s64 + -5404;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,1836
	ctx.r7.s64 = 1836;
	// bl 0x8320cf10
	ctx.lr = 0x832126B0;
	sub_8320CF10(ctx, base);
loc_832126B0:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x832126cc
	if (!ctx.cr6.eq) goto loc_832126CC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x83212704
	if (!ctx.cr6.eq) goto loc_83212704;
	// b 0x83212710
	goto loc_83212710;
loc_832126CC:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x83212704
	if (!ctx.cr6.lt) goto loc_83212704;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x83212710
	if (ctx.cr6.eq) goto loc_83212710;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x832126f0
	if (ctx.cr0.eq) goto loc_832126F0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_832126F0:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x832126cc
	if (!ctx.cr6.eq) goto loc_832126CC;
loc_83212704:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83212710:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb112c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8321271C"))) PPC_WEAK_FUNC(sub_8321271C);
PPC_FUNC_IMPL(__imp__sub_8321271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83212720"))) PPC_WEAK_FUNC(sub_83212720);
PPC_FUNC_IMPL(__imp__sub_83212720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x83212728;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,-21168
	ctx.r27.s64 = ctx.r11.s64 + -21168;
	// addi r26,r10,-5752
	ctx.r26.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x83212770
	if (!ctx.cr6.eq) goto loc_83212770;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5264
	ctx.r5.s64 = ctx.r11.s64 + -5264;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1902
	ctx.r7.s64 = 1902;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83212770;
	sub_8320CF10(ctx, base);
loc_83212770:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83212660
	ctx.lr = 0x8321278C;
	sub_83212660(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x832127d0
	if (ctx.cr6.eq) goto loc_832127D0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832127c4
	if (ctx.cr6.lt) goto loc_832127C4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-5256
	ctx.r5.s64 = ctx.r11.s64 + -5256;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1914
	ctx.r7.s64 = 1914;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832127C4;
	sub_8320CF10(ctx, base);
loc_832127C4:
	// lwz r28,16(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_832127D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832127DC"))) PPC_WEAK_FUNC(sub_832127DC);
PPC_FUNC_IMPL(__imp__sub_832127DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832127E0"))) PPC_WEAK_FUNC(sub_832127E0);
PPC_FUNC_IMPL(__imp__sub_832127E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x832127E8;
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
	// addi r28,r10,-5752
	ctx.r28.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x83212828
	if (!ctx.cr6.eq) goto loc_83212828;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5264
	ctx.r5.s64 = ctx.r11.s64 + -5264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1948
	ctx.r7.s64 = 1948;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83212828;
	sub_8320CF10(ctx, base);
loc_83212828:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83212850
	if (ctx.cr6.lt) goto loc_83212850;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5232
	ctx.r5.s64 = ctx.r11.s64 + -5232;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1952
	ctx.r7.s64 = 1952;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83212850;
	sub_8320CF10(ctx, base);
loc_83212850:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832128a8
	if (!ctx.cr6.lt) goto loc_832128A8;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8321287c
	if (ctx.cr6.eq) goto loc_8321287C;
loc_83212868:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83212874
	if (ctx.cr6.eq) goto loc_83212874;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83212874:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83212868
	if (!ctx.cr0.eq) goto loc_83212868;
loc_8321287C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832128a0
	if (!ctx.cr6.eq) goto loc_832128A0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5516
	ctx.r5.s64 = ctx.r11.s64 + -5516;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1965
	ctx.r7.s64 = 1965;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x832128A0;
	sub_8320CF10(ctx, base);
loc_832128A0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x832128ac
	goto loc_832128AC;
loc_832128A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832128AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832128B4"))) PPC_WEAK_FUNC(sub_832128B4);
PPC_FUNC_IMPL(__imp__sub_832128B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832128B8"))) PPC_WEAK_FUNC(sub_832128B8);
PPC_FUNC_IMPL(__imp__sub_832128B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x832128C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-21168
	ctx.r28.s64 = ctx.r11.s64 + -21168;
	// addi r27,r10,-5752
	ctx.r27.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x83212904
	if (!ctx.cr6.eq) goto loc_83212904;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5264
	ctx.r5.s64 = ctx.r11.s64 + -5264;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2001
	ctx.r7.s64 = 2001;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83212904;
	sub_8320CF10(ctx, base);
loc_83212904:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8321291c
	if (ctx.cr0.eq) goto loc_8321291C;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8321291C:
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83212984
	if (ctx.cr6.eq) goto loc_83212984;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83212660
	ctx.lr = 0x8321293C;
	sub_83212660(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83212984
	if (ctx.cr6.eq) goto loc_83212984;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83212974
	if (ctx.cr6.lt) goto loc_83212974;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5256
	ctx.r5.s64 = ctx.r11.s64 + -5256;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2025
	ctx.r7.s64 = 2025;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83212974;
	sub_8320CF10(ctx, base);
loc_83212974:
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lwz r26,16(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// b 0x83212990
	goto loc_83212990;
loc_83212984:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_83212990:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8321299C"))) PPC_WEAK_FUNC(sub_8321299C);
PPC_FUNC_IMPL(__imp__sub_8321299C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832129A0"))) PPC_WEAK_FUNC(sub_832129A0);
PPC_FUNC_IMPL(__imp__sub_832129A0) {
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
	// bne cr6,0x832129dc
	if (!ctx.cr6.eq) goto loc_832129DC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-5752
	ctx.r6.s64 = ctx.r11.s64 + -5752;
	// addi r5,r10,-5264
	ctx.r5.s64 = ctx.r10.s64 + -5264;
	// addi r4,r9,-21168
	ctx.r4.s64 = ctx.r9.s64 + -21168;
	// li r7,2058
	ctx.r7.s64 = 2058;
	// bl 0x8320cf10
	ctx.lr = 0x832129DC;
	sub_8320CF10(ctx, base);
loc_832129DC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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

__attribute__((alias("__imp__sub_832129F4"))) PPC_WEAK_FUNC(sub_832129F4);
PPC_FUNC_IMPL(__imp__sub_832129F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832129F8"))) PPC_WEAK_FUNC(sub_832129F8);
PPC_FUNC_IMPL(__imp__sub_832129F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x83212A00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,-21168
	ctx.r29.s64 = ctx.r11.s64 + -21168;
	// addi r28,r10,-5752
	ctx.r28.s64 = ctx.r10.s64 + -5752;
	// bne cr6,0x83212a3c
	if (!ctx.cr6.eq) goto loc_83212A3C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5264
	ctx.r5.s64 = ctx.r11.s64 + -5264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,2080
	ctx.r7.s64 = 2080;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83212A3C;
	sub_8320CF10(ctx, base);
loc_83212A3C:
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83212a64
	if (!ctx.cr6.eq) goto loc_83212A64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-5516
	ctx.r5.s64 = ctx.r11.s64 + -5516;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,2086
	ctx.r7.s64 = 2086;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320cf10
	ctx.lr = 0x83212A64;
	sub_8320CF10(ctx, base);
loc_83212A64:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// b 0x83212a78
	goto loc_83212A78;
loc_83212A6C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83212a78
	if (ctx.cr6.eq) goto loc_83212A78;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83212A78:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83212a6c
	if (!ctx.cr6.eq) goto loc_83212A6C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

